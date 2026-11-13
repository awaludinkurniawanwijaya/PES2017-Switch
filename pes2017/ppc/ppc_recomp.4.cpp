#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8241B5B0"))) PPC_WEAK_FUNC(sub_8241B5B0);
PPC_FUNC_IMPL(__imp__sub_8241B5B0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x8241b750
	if (cr6.gt) goto loc_8241B750;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18976
	ctx.r12.s64 = ctx.r12.s64 + -18976;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241B60C;
	case 1:
		goto loc_8241B630;
	case 2:
		goto loc_8241B650;
	case 3:
		goto loc_8241B674;
	case 4:
		goto loc_8241B694;
	case 5:
		goto loc_8241B6B8;
	case 6:
		goto loc_8241B6D8;
	case 7:
		goto loc_8241B6F0;
	case 8:
		goto loc_8241B708;
	case 9:
		goto loc_8241B71C;
	case 10:
		goto loc_8241B730;
	default:
		return;
	}
	// lwz r18,-18932(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18932);
	// lwz r18,-18896(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18896);
	// lwz r18,-18864(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18864);
	// lwz r18,-18828(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18828);
	// lwz r18,-18796(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18796);
	// lwz r18,-18760(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18760);
	// lwz r18,-18728(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18728);
	// lwz r18,-18704(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18704);
	// lwz r18,-18680(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18680);
	// lwz r18,-18660(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18660);
	// lwz r18,-18640(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
loc_8241B60C:
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B630:
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B650:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B674:
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B694:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B6B8:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B6D8:
	// lfd f0,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B6F0:
	// ld r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// bl 0x831ce710
	ctx.lr = 0x8241B6F8;
	sub_831CE710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B708:
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B71C:
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B730:
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241B750:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B768"))) PPC_WEAK_FUNC(sub_8241B768);
PPC_FUNC_IMPL(__imp__sub_8241B768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x8241B77C;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,8976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfd f30,8968(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8968);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r9.u16);
	// bl 0x831ce4e0
	ctx.lr = 0x8241B7B8;
	sub_831CE4E0(ctx, base);
	// fmuls f12,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// bl 0x831ce4e0
	ctx.lr = 0x8241B7E4;
	sub_831CE4E0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x8241B7FC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B80C"))) PPC_WEAK_FUNC(sub_8241B80C);
PPC_FUNC_IMPL(__imp__sub_8241B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B810"))) PPC_WEAK_FUNC(sub_8241B810);
PPC_FUNC_IMPL(__imp__sub_8241B810) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8241B83C;
	sub_82572FA0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8241fa28
	ctx.lr = 0x8241B850;
	sub_8241FA28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8241fa28
	ctx.lr = 0x8241B85C;
	sub_8241FA28(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// bl 0x8241f130
	ctx.lr = 0x8241B868;
	sub_8241F130(ctx, base);
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

__attribute__((alias("__imp__sub_8241B884"))) PPC_WEAK_FUNC(sub_8241B884);
PPC_FUNC_IMPL(__imp__sub_8241B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B888"))) PPC_WEAK_FUNC(sub_8241B888);
PPC_FUNC_IMPL(__imp__sub_8241B888) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241ae70
	sub_8241AE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B88C"))) PPC_WEAK_FUNC(sub_8241B88C);
PPC_FUNC_IMPL(__imp__sub_8241B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B890"))) PPC_WEAK_FUNC(sub_8241B890);
PPC_FUNC_IMPL(__imp__sub_8241B890) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241aff0
	sub_8241AFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B894"))) PPC_WEAK_FUNC(sub_8241B894);
PPC_FUNC_IMPL(__imp__sub_8241B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B898"))) PPC_WEAK_FUNC(sub_8241B898);
PPC_FUNC_IMPL(__imp__sub_8241B898) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b0c0
	sub_8241B0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B89C"))) PPC_WEAK_FUNC(sub_8241B89C);
PPC_FUNC_IMPL(__imp__sub_8241B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8A0"))) PPC_WEAK_FUNC(sub_8241B8A0);
PPC_FUNC_IMPL(__imp__sub_8241B8A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b178
	sub_8241B178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8A4"))) PPC_WEAK_FUNC(sub_8241B8A4);
PPC_FUNC_IMPL(__imp__sub_8241B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8A8"))) PPC_WEAK_FUNC(sub_8241B8A8);
PPC_FUNC_IMPL(__imp__sub_8241B8A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b240
	sub_8241B240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8AC"))) PPC_WEAK_FUNC(sub_8241B8AC);
PPC_FUNC_IMPL(__imp__sub_8241B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8B0"))) PPC_WEAK_FUNC(sub_8241B8B0);
PPC_FUNC_IMPL(__imp__sub_8241B8B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b300
	sub_8241B300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8B4"))) PPC_WEAK_FUNC(sub_8241B8B4);
PPC_FUNC_IMPL(__imp__sub_8241B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8B8"))) PPC_WEAK_FUNC(sub_8241B8B8);
PPC_FUNC_IMPL(__imp__sub_8241B8B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b3c8
	sub_8241B3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8BC"))) PPC_WEAK_FUNC(sub_8241B8BC);
PPC_FUNC_IMPL(__imp__sub_8241B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8C0"))) PPC_WEAK_FUNC(sub_8241B8C0);
PPC_FUNC_IMPL(__imp__sub_8241B8C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241b5b0
	sub_8241B5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8C4"))) PPC_WEAK_FUNC(sub_8241B8C4);
PPC_FUNC_IMPL(__imp__sub_8241B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8C8"))) PPC_WEAK_FUNC(sub_8241B8C8);
PPC_FUNC_IMPL(__imp__sub_8241B8C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8241b8f0
	if (!cr6.eq) goto loc_8241B8F0;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// b 0x8241b8f8
	goto loc_8241B8F8;
loc_8241B8F0:
	// bl 0x8241f278
	ctx.lr = 0x8241B8F4;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8241B8F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241B900;
	sub_8241F130(ctx, base);
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

__attribute__((alias("__imp__sub_8241B918"))) PPC_WEAK_FUNC(sub_8241B918);
PPC_FUNC_IMPL(__imp__sub_8241B918) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8241b940
	if (!cr6.eq) goto loc_8241B940;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// b 0x8241b990
	goto loc_8241B990;
loc_8241B940:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8241b96c
	if (!cr6.eq) goto loc_8241B96C;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f130
	ctx.lr = 0x8241B954;
	sub_8241F130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420750
	ctx.lr = 0x8241B960;
	sub_82420750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241B968;
	sub_82573C50(ctx, base);
	// b 0x8241b998
	goto loc_8241B998;
loc_8241B96C:
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// bne cr6,0x8241b988
	if (!cr6.eq) goto loc_8241B988;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241b988
	if (cr6.eq) goto loc_8241B988;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// b 0x8241b990
	goto loc_8241B990;
loc_8241B988:
	// bl 0x8241fb80
	ctx.lr = 0x8241B98C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8241B990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa28
	ctx.lr = 0x8241B998;
	sub_8241FA28(ctx, base);
loc_8241B998:
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

__attribute__((alias("__imp__sub_8241B9B0"))) PPC_WEAK_FUNC(sub_8241B9B0);
PPC_FUNC_IMPL(__imp__sub_8241B9B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8241bab0
	if (cr6.gt) goto loc_8241BAB0;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17940
	ctx.r12.s64 = ctx.r12.s64 + -17940;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241BA78;
	case 1:
		goto loc_8241BAB0;
	case 2:
		goto loc_8241BA1C;
	case 3:
		goto loc_8241BAB0;
	case 4:
		goto loc_8241BAB0;
	case 5:
		goto loc_8241BAB0;
	case 6:
		goto loc_8241BAB0;
	case 7:
		goto loc_8241BAB0;
	case 8:
		goto loc_8241BAB0;
	case 9:
		goto loc_8241BAB0;
	case 10:
		goto loc_8241BA24;
	case 11:
		goto loc_8241BA54;
	default:
		return;
	}
	// lwz r18,-17800(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17800);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17892(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17892);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17744);
	// lwz r18,-17884(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17884);
	// lwz r18,-17836(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17836);
loc_8241BA1C:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8241bab4
	goto loc_8241BAB4;
loc_8241BA24:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241BA38;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82451c28
	ctx.lr = 0x8241BA44;
	sub_82451C28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8241BA50;
	sub_82572FA0(ctx, base);
	// b 0x8241bac4
	goto loc_8241BAC4;
loc_8241BA54:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b810
	ctx.lr = 0x8241BA60;
	sub_8241B810(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82452080
	ctx.lr = 0x8241BA6C;
	sub_82452080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241c3b8
	ctx.lr = 0x8241BA74;
	sub_8241C3B8(ctx, base);
	// b 0x8241bac4
	goto loc_8241BAC4;
loc_8241BA78:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// bl 0x83572958
	ctx.lr = 0x8241BA80;
	sub_83572958(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8241BA94;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82451c28
	ctx.lr = 0x8241BAA0;
	sub_82451C28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8241BAAC;
	sub_82572FA0(ctx, base);
	// b 0x8241bac4
	goto loc_8241BAC4;
loc_8241BAB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8241BAB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x8241BAC4;
	sub_8241F040(ctx, base);
loc_8241BAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BADC"))) PPC_WEAK_FUNC(sub_8241BADC);
PPC_FUNC_IMPL(__imp__sub_8241BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BAE0"))) PPC_WEAK_FUNC(sub_8241BAE0);
PPC_FUNC_IMPL(__imp__sub_8241BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x8241bafc
	if (!cr6.eq) goto loc_8241BAFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8241BAFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9008
	ctx.r10.s64 = ctx.r11.s64 + 9008;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BB14"))) PPC_WEAK_FUNC(sub_8241BB14);
PPC_FUNC_IMPL(__imp__sub_8241BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BB18"))) PPC_WEAK_FUNC(sub_8241BB18);
PPC_FUNC_IMPL(__imp__sub_8241BB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x8241bb34
	if (!cr6.eq) goto loc_8241BB34;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8241BB34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9008
	ctx.r10.s64 = ctx.r11.s64 + 9008;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BB4C"))) PPC_WEAK_FUNC(sub_8241BB4C);
PPC_FUNC_IMPL(__imp__sub_8241BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BB50"))) PPC_WEAK_FUNC(sub_8241BB50);
PPC_FUNC_IMPL(__imp__sub_8241BB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCVRegister vTemp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x8241bb68
	if (!cr6.eq) goto loc_8241BB68;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8241BB68:
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// vupkd3d128 v61,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// vsldoi128 v60,v62,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// stvx128 v60,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BB7C"))) PPC_WEAK_FUNC(sub_8241BB7C);
PPC_FUNC_IMPL(__imp__sub_8241BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BB80"))) PPC_WEAK_FUNC(sub_8241BB80);
PPC_FUNC_IMPL(__imp__sub_8241BB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCVRegister vTemp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bne cr6,0x8241bbb4
	if (!cr6.eq) goto loc_8241BBB4;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8241BBB4:
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vupkd3d128 v0,v60,0
	vTemp.u32[0] = ctx.v60.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v60.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v60.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v60.u8[2] | 0x3F800000;
	ctx.v0 = vTemp;
	// vor128 v12,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vsldoi128 v58,v60,v59,12
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 4));
	// vor128 v13,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vsldoi128 v57,v59,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// vsldoi128 v56,v60,v59,8
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 8));
	// vsldoi128 v55,v59,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// vsldoi128 v54,v0,v60,12
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 4));
	// vand128 v9,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v10,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vsel v9,v12,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v54,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BC00"))) PPC_WEAK_FUNC(sub_8241BC00);
PPC_FUNC_IMPL(__imp__sub_8241BC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCVRegister vTemp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// bne cr6,0x8241bc40
	if (!cr6.eq) goto loc_8241BC40;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8241BC40:
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v58,-1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkd3d128 v57,v59,0
	vTemp.u32[0] = ctx.v59.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v59.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v59.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v59.u8[2] | 0x3F800000;
	ctx.v57 = vTemp;
	// vor128 v12,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vsldoi128 v56,v59,v58,12
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 4));
	// vor128 v13,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vsldoi128 v55,v58,v59,8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 8));
	// vsldoi128 v54,v59,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// vsldoi128 v53,v58,v59,4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 12));
	// vor128 v11,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vsldoi128 v52,v57,v59,12
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 4));
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vand128 v9,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vsldoi128 v51,v59,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// vand128 v10,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vsel v9,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v52,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BCA4"))) PPC_WEAK_FUNC(sub_8241BCA4);
PPC_FUNC_IMPL(__imp__sub_8241BCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BCA8"))) PPC_WEAK_FUNC(sub_8241BCA8);
PPC_FUNC_IMPL(__imp__sub_8241BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x8241bccc
	if (!cr6.eq) goto loc_8241BCCC;
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
loc_8241BCCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9008
	ctx.r10.s64 = ctx.r11.s64 + 9008;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241BCE4"))) PPC_WEAK_FUNC(sub_8241BCE4);
PPC_FUNC_IMPL(__imp__sub_8241BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BCE8"))) PPC_WEAK_FUNC(sub_8241BCE8);
PPC_FUNC_IMPL(__imp__sub_8241BCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241BCF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8241bf4c
	if (cr6.gt) goto loc_8241BF4C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17116
	ctx.r12.s64 = ctx.r12.s64 + -17116;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241BF3C;
	case 1:
		goto loc_8241BF4C;
	case 2:
		goto loc_8241BE0C;
	case 3:
		goto loc_8241BF4C;
	case 4:
		goto loc_8241BF4C;
	case 5:
		goto loc_8241BF4C;
	case 6:
		goto loc_8241BF4C;
	case 7:
		goto loc_8241BF4C;
	case 8:
		goto loc_8241BF4C;
	case 9:
		goto loc_8241BEA4;
	case 10:
		goto loc_8241BD54;
	case 11:
		goto loc_8241BD5C;
	default:
		return;
	}
	// lwz r18,-16580(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16580);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16884(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16884);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16564);
	// lwz r18,-16732(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16732);
	// lwz r18,-17068(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17068);
	// lwz r18,-17060(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17060);
loc_8241BD54:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8241bf58
	goto loc_8241BF58;
loc_8241BD5C:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82452080
	ctx.lr = 0x8241BD68;
	sub_82452080(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241bd90
	if (cr6.eq) goto loc_8241BD90;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82572fa0
	ctx.lr = 0x8241BD88;
	sub_82572FA0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// b 0x8241bdb0
	goto loc_8241BDB0;
loc_8241BD90:
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x82451cb8
	ctx.lr = 0x8241BD98;
	sub_82451CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241BDAC;
	sub_82572FA0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8241BDB0:
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8241BDC0;
	sub_82572FA0(ctx, base);
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241bddc
	if (cr6.eq) goto loc_8241BDDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82572fa0
	ctx.lr = 0x8241BDDC;
	sub_82572FA0(ctx, base);
loc_8241BDDC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241bdf4
	if (cr6.eq) goto loc_8241BDF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8241BDF4;
	sub_82572FA0(ctx, base);
loc_8241BDF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x8241BE00;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241BE0C:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241be34
	if (cr6.eq) goto loc_8241BE34;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// li r29,4
	ctx.r29.s64 = 4;
	// bl 0x82572fa0
	ctx.lr = 0x8241BE2C;
	sub_82572FA0(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x8241be54
	goto loc_8241BE54;
loc_8241BE34:
	// li r29,8
	ctx.r29.s64 = 8;
	// bl 0x82451cb8
	ctx.lr = 0x8241BE3C;
	sub_82451CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241BE50;
	sub_82572FA0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8241BE54:
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8241BE64;
	sub_82572FA0(ctx, base);
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241be80
	if (cr6.eq) goto loc_8241BE80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r29,r29,0,29,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82572fa0
	ctx.lr = 0x8241BE80;
	sub_82572FA0(ctx, base);
loc_8241BE80:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241bf64
	if (cr6.eq) goto loc_8241BF64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x8241BE98;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241BEA4:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241becc
	if (cr6.eq) goto loc_8241BECC;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// li r29,16
	ctx.r29.s64 = 16;
	// bl 0x82572fa0
	ctx.lr = 0x8241BEC4;
	sub_82572FA0(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// b 0x8241beec
	goto loc_8241BEEC;
loc_8241BECC:
	// li r29,32
	ctx.r29.s64 = 32;
	// bl 0x82451cb8
	ctx.lr = 0x8241BED4;
	sub_82451CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241BEE8;
	sub_82572FA0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241BEEC:
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8241BEFC;
	sub_82572FA0(ctx, base);
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241bf18
	if (cr6.eq) goto loc_8241BF18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r29,r29,0,27,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82572fa0
	ctx.lr = 0x8241BF18;
	sub_82572FA0(ctx, base);
loc_8241BF18:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8241bf64
	if (cr6.eq) goto loc_8241BF64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x8241BF30;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241BF3C:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// bl 0x83572958
	ctx.lr = 0x8241BF44;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8241bf58
	goto loc_8241BF58;
loc_8241BF4C:
	// bl 0x82451cb8
	ctx.lr = 0x8241BF50;
	sub_82451CB8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8241BF58:
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8241BF64;
	sub_82572FA0(ctx, base);
loc_8241BF64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BF70"))) PPC_WEAK_FUNC(sub_8241BF70);
PPC_FUNC_IMPL(__imp__sub_8241BF70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8241c074
	if (cr6.gt) goto loc_8241C074;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16468
	ctx.r12.s64 = ctx.r12.s64 + -16468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241C020;
	case 1:
		goto loc_8241C074;
	case 2:
		goto loc_8241C018;
	case 3:
		goto loc_8241C074;
	case 4:
		goto loc_8241C074;
	case 5:
		goto loc_8241C074;
	case 6:
		goto loc_8241C074;
	case 7:
		goto loc_8241C074;
	case 8:
		goto loc_8241C074;
	case 9:
		goto loc_8241C018;
	case 10:
		goto loc_8241BFEC;
	case 11:
		goto loc_8241BFDC;
	default:
		return;
	}
	// lwz r18,-16352(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16352);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16360(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16360);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16268);
	// lwz r18,-16360(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16360);
	// lwz r18,-16404(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16404);
	// lwz r18,-16420(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16420);
loc_8241BFDC:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241b810
	ctx.lr = 0x8241BFE8;
	sub_8241B810(ctx, base);
	// b 0x8241c080
	goto loc_8241C080;
loc_8241BFEC:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82451c28
	ctx.lr = 0x8241BFF8;
	sub_82451C28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82451d98
	ctx.lr = 0x8241C008;
	sub_82451D98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8241C014;
	sub_8241F040(ctx, base);
	// b 0x8241c080
	goto loc_8241C080;
loc_8241C018:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8241c078
	goto loc_8241C078;
loc_8241C020:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// bl 0x83572958
	ctx.lr = 0x8241C028;
	sub_83572958(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8241C03C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82451c28
	ctx.lr = 0x8241C048;
	sub_82451C28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82451d98
	ctx.lr = 0x8241C058;
	sub_82451D98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x8241C064;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8241C070;
	sub_82572FA0(ctx, base);
	// b 0x8241c080
	goto loc_8241C080;
loc_8241C074:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8241C078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82451d98
	ctx.lr = 0x8241C080;
	sub_82451D98(ctx, base);
loc_8241C080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241C098"))) PPC_WEAK_FUNC(sub_8241C098);
PPC_FUNC_IMPL(__imp__sub_8241C098) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x8241c0e4
	if (cr6.eq) goto loc_8241C0E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x8241b768
	ctx.lr = 0x8241C0CC;
	sub_8241B768(ctx, base);
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
loc_8241C0E4:
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lhz r10,30(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8241C120"))) PPC_WEAK_FUNC(sub_8241C120);
PPC_FUNC_IMPL(__imp__sub_8241C120) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241c188
	if (cr6.eq) goto loc_8241C188;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241C150;
	sub_82572FA0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241c174
	if (cr6.eq) goto loc_8241C174;
	// bl 0x82450f48
	ctx.lr = 0x8241C164;
	sub_82450F48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8241C170;
	sub_82572FA0(ctx, base);
	// b 0x8241c1a8
	goto loc_8241C1A8;
loc_8241C174:
	// bl 0x82450fa0
	ctx.lr = 0x8241C178;
	sub_82450FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8241C184;
	sub_82572FA0(ctx, base);
	// b 0x8241c1a8
	goto loc_8241C1A8;
loc_8241C188:
	// bl 0x82451cb8
	ctx.lr = 0x8241C18C;
	sub_82451CB8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241c1a4
	if (cr6.eq) goto loc_8241C1A4;
	// bl 0x82450f48
	ctx.lr = 0x8241C1A0;
	sub_82450F48(ctx, base);
	// b 0x8241c1a8
	goto loc_8241C1A8;
loc_8241C1A4:
	// bl 0x82450fa0
	ctx.lr = 0x8241C1A8;
	sub_82450FA0(ctx, base);
loc_8241C1A8:
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

__attribute__((alias("__imp__sub_8241C1C0"))) PPC_WEAK_FUNC(sub_8241C1C0);
PPC_FUNC_IMPL(__imp__sub_8241C1C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241c120
	ctx.lr = 0x8241C1E0;
	sub_8241C120(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x8241C1E4;
	sub_8252E3C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7676
	ctx.r4.s64 = ctx.r11.s64 + 7676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574628
	ctx.lr = 0x8241C1F8;
	sub_82574628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241C204;
	sub_8241F130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241C20C;
	sub_82573C50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8241C214;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241C22C"))) PPC_WEAK_FUNC(sub_8241C22C);
PPC_FUNC_IMPL(__imp__sub_8241C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C230"))) PPC_WEAK_FUNC(sub_8241C230);
PPC_FUNC_IMPL(__imp__sub_8241C230) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r10,7640
	ctx.r30.s64 = ctx.r10.s64 + 7640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8241c26c
	if (cr6.eq) goto loc_8241C26C;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82420380
	ctx.lr = 0x8241C268;
	sub_82420380(ctx, base);
	// b 0x8241c274
	goto loc_8241C274;
loc_8241C26C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241f0a0
	ctx.lr = 0x8241C274;
	sub_8241F0A0(ctx, base);
loc_8241C274:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252e3c0
	ctx.lr = 0x8241C27C;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,332
	ctx.r4.s64 = ctx.r30.s64 + 332;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574628
	ctx.lr = 0x8241C28C;
	sub_82574628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241C298;
	sub_8241F130(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8241C2A0;
	sub_82573C50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241C2A8;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241C2C4"))) PPC_WEAK_FUNC(sub_8241C2C4);
PPC_FUNC_IMPL(__imp__sub_8241C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C2C8"))) PPC_WEAK_FUNC(sub_8241C2C8);
PPC_FUNC_IMPL(__imp__sub_8241C2C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241c2f4
	if (cr6.eq) goto loc_8241C2F4;
	// bl 0x82450f48
	ctx.lr = 0x8241C2F0;
	sub_82450F48(ctx, base);
	// b 0x8241c2f8
	goto loc_8241C2F8;
loc_8241C2F4:
	// bl 0x82450fa0
	ctx.lr = 0x8241C2F8;
	sub_82450FA0(ctx, base);
loc_8241C2F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252e3c0
	ctx.lr = 0x8241C300;
	sub_8252E3C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7980
	ctx.r4.s64 = ctx.r11.s64 + 7980;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574628
	ctx.lr = 0x8241C314;
	sub_82574628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241C320;
	sub_8241F130(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8241C328;
	sub_82573C50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241C330;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241C348"))) PPC_WEAK_FUNC(sub_8241C348);
PPC_FUNC_IMPL(__imp__sub_8241C348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241C35C"))) PPC_WEAK_FUNC(sub_8241C35C);
PPC_FUNC_IMPL(__imp__sub_8241C35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C360"))) PPC_WEAK_FUNC(sub_8241C360);
PPC_FUNC_IMPL(__imp__sub_8241C360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241C368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241f040
	ctx.lr = 0x8241C388;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241C38C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8241C398;
	sub_8241FA28(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83323038
	ctx.lr = 0x8241C3A8;
	sub_83323038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C3B4"))) PPC_WEAK_FUNC(sub_8241C3B4);
PPC_FUNC_IMPL(__imp__sub_8241C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C3B8"))) PPC_WEAK_FUNC(sub_8241C3B8);
PPC_FUNC_IMPL(__imp__sub_8241C3B8) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82573c50
	ctx.lr = 0x8241C3D4;
	sub_82573C50(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8241fb00
	ctx.lr = 0x8241C3DC;
	sub_8241FB00(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241fb00
	ctx.lr = 0x8241C3E4;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8241C3F0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8241C404"))) PPC_WEAK_FUNC(sub_8241C404);
PPC_FUNC_IMPL(__imp__sub_8241C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C408"))) PPC_WEAK_FUNC(sub_8241C408);
PPC_FUNC_IMPL(__imp__sub_8241C408) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8241c45c
	if (cr6.eq) goto loc_8241C45C;
	// bl 0x82467a00
	ctx.lr = 0x8241C42C;
	sub_82467A00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8241C444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8241C44C;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8241c460
	if (!cr6.eq) goto loc_8241C460;
loc_8241C45C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241C460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241C478"))) PPC_WEAK_FUNC(sub_8241C478);
PPC_FUNC_IMPL(__imp__sub_8241C478) {
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
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bgt cr6,0x8241c6f8
	if (cr6.gt) goto loc_8241C6F8;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15180
	ctx.r12.s64 = ctx.r12.s64 + -15180;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8241C518;
	case 1:
		goto loc_8241C534;
	case 2:
		goto loc_8241C54C;
	case 3:
		goto loc_8241C568;
	case 4:
		goto loc_8241C580;
	case 5:
		goto loc_8241C59C;
	case 6:
		goto loc_8241C5B4;
	case 7:
		goto loc_8241C5CC;
	case 8:
		goto loc_8241C5E4;
	case 9:
		goto loc_8241C5FC;
	case 10:
		goto loc_8241C614;
	case 11:
		goto loc_8241C624;
	case 12:
		goto loc_8241C634;
	case 13:
		goto loc_8241C658;
	case 14:
		goto loc_8241C668;
	case 15:
		goto loc_8241C678;
	case 16:
		goto loc_8241C688;
	case 17:
		goto loc_8241C698;
	case 18:
		goto loc_8241C6A8;
	case 19:
		goto loc_8241C6B8;
	case 20:
		goto loc_8241C6C8;
	case 21:
		goto loc_8241C6D8;
	case 22:
		goto loc_8241C6D8;
	case 23:
		goto loc_8241C6F8;
	case 24:
		goto loc_8241C6E8;
	default:
		return;
	}
	// lwz r18,-15080(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15080);
	// lwz r18,-15052(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15052);
	// lwz r18,-15028(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15028);
	// lwz r18,-15000(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15000);
	// lwz r18,-14976(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14976);
	// lwz r18,-14948(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14948);
	// lwz r18,-14924(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14924);
	// lwz r18,-14900(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14900);
	// lwz r18,-14876(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14876);
	// lwz r18,-14852(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14852);
	// lwz r18,-14828(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14828);
	// lwz r18,-14812(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14812);
	// lwz r18,-14796(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14796);
	// lwz r18,-14760(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14760);
	// lwz r18,-14744(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14744);
	// lwz r18,-14728(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14728);
	// lwz r18,-14712(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14712);
	// lwz r18,-14696(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14696);
	// lwz r18,-14680(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14680);
	// lwz r18,-14664(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14664);
	// lwz r18,-14648(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14648);
	// lwz r18,-14632(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14632);
	// lwz r18,-14632(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14632);
	// lwz r18,-14600(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14600);
	// lwz r18,-14616(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14616);
loc_8241C518:
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82573160
	ctx.lr = 0x8241C52C;
	sub_82573160(ctx, base);
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C534:
	// li r4,128
	ctx.r4.s64 = 128;
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573170
	ctx.lr = 0x8241C544;
	sub_82573170(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C54C:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x82573160
	ctx.lr = 0x8241C560;
	sub_82573160(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C568:
	// li r4,128
	ctx.r4.s64 = 128;
	// lhz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573170
	ctx.lr = 0x8241C578;
	sub_82573170(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C580:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82573160
	ctx.lr = 0x8241C594;
	sub_82573160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C59C:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573170
	ctx.lr = 0x8241C5AC;
	sub_82573170(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C5B4:
	// li r4,128
	ctx.r4.s64 = 128;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573160
	ctx.lr = 0x8241C5C4;
	sub_82573160(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C5CC:
	// li r4,128
	ctx.r4.s64 = 128;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573170
	ctx.lr = 0x8241C5DC;
	sub_82573170(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C5E4:
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573190
	ctx.lr = 0x8241C5F4;
	sub_82573190(ctx, base);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C5FC:
	// li r4,256
	ctx.r4.s64 = 256;
	// lfd f1,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573190
	ctx.lr = 0x8241C60C;
	sub_82573190(ctx, base);
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// b 0x8241c700
	goto loc_8241C700;
loc_8241C614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x8241a708
	ctx.lr = 0x8241C620;
	sub_8241A708(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C624:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a7a8
	ctx.lr = 0x8241C630;
	sub_8241A7A8(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C634:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420380
	ctx.lr = 0x8241C640;
	sub_82420380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a7a8
	ctx.lr = 0x8241C64C;
	sub_8241A7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241C654;
	sub_82573C50(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C658:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c1c0
	ctx.lr = 0x8241C664;
	sub_8241C1C0(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C668:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a808
	ctx.lr = 0x8241C674;
	sub_8241A808(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C678:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a8a8
	ctx.lr = 0x8241C684;
	sub_8241A8A8(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C688:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a9e8
	ctx.lr = 0x8241C694;
	sub_8241A9E8(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C698:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241aaa0
	ctx.lr = 0x8241C6A4;
	sub_8241AAA0(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6A8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241abc0
	ctx.lr = 0x8241C6B4;
	sub_8241ABC0(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6B8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ad80
	ctx.lr = 0x8241C6C4;
	sub_8241AD80(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6C8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c230
	ctx.lr = 0x8241C6D4;
	sub_8241C230(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6D8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c2c8
	ctx.lr = 0x8241C6E4;
	sub_8241C2C8(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6E8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a960
	ctx.lr = 0x8241C6F4;
	sub_8241A960(ctx, base);
	// b 0x8241c708
	goto loc_8241C708;
loc_8241C6F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,7636
	ctx.r4.s64 = ctx.r11.s64 + 7636;
loc_8241C700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f0a0
	ctx.lr = 0x8241C708;
	sub_8241F0A0(ctx, base);
loc_8241C708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241C720"))) PPC_WEAK_FUNC(sub_8241C720);
PPC_FUNC_IMPL(__imp__sub_8241C720) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241C74C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241C750;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241fa28
	ctx.lr = 0x8241C75C;
	sub_8241FA28(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241C76C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241C770;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241fa70
	ctx.lr = 0x8241C77C;
	sub_8241FA70(ctx, base);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8241C78C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241C790;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8241C79C;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83323038
	ctx.lr = 0x8241C7AC;
	sub_83323038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83308d20
	ctx.lr = 0x8241C7B4;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241C7D0"))) PPC_WEAK_FUNC(sub_8241C7D0);
PPC_FUNC_IMPL(__imp__sub_8241C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241C7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,9012
	ctx.r10.s64 = ctx.r11.s64 + 9012;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x8241C81C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x8241c844
	if (cr6.eq) goto loc_8241C844;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8241C83C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8241C844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C84C"))) PPC_WEAK_FUNC(sub_8241C84C);
PPC_FUNC_IMPL(__imp__sub_8241C84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C850"))) PPC_WEAK_FUNC(sub_8241C850);
PPC_FUNC_IMPL(__imp__sub_8241C850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8241c8bc
	if (!cr6.gt) goto loc_8241C8BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,9012
	ctx.r8.s64 = ctx.r10.s64 + 9012;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x8241C8AC;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241C8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241C8D0"))) PPC_WEAK_FUNC(sub_8241C8D0);
PPC_FUNC_IMPL(__imp__sub_8241C8D0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8241cae4
	if (cr6.gt) goto loc_8241CAE4;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14064
	ctx.r12.s64 = ctx.r12.s64 + -14064;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241CA58;
	case 1:
		goto loc_8241CAA8;
	case 2:
		goto loc_8241C954;
	case 3:
		goto loc_8241CAE4;
	case 4:
		goto loc_8241CAE4;
	case 5:
		goto loc_8241CAE4;
	case 6:
		goto loc_8241CAE4;
	case 7:
		goto loc_8241CAE4;
	case 8:
		goto loc_8241CAE4;
	case 9:
		goto loc_8241C940;
	case 10:
		goto loc_8241C998;
	case 11:
		goto loc_8241C9F8;
	default:
		return;
	}
	// lwz r18,-13736(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13736);
	// lwz r18,-13656(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13656);
	// lwz r18,-13996(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13996);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-13596(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13596);
	// lwz r18,-14016(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14016);
	// lwz r18,-13928(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13928);
	// lwz r18,-13832(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13832);
loc_8241C940:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8345c0b0
	ctx.lr = 0x8241C950;
	sub_8345C0B0(ctx, base);
	// b 0x8241cb60
	goto loc_8241CB60;
loc_8241C954:
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x8241c408
	ctx.lr = 0x8241C95C;
	sub_8241C408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8241C970;
	sub_8241F040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8345bcc0
	ctx.lr = 0x8241C980;
	sub_8345BCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8345c0b0
	ctx.lr = 0x8241C990;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x8241cb5c
	goto loc_8241CB5C;
loc_8241C998:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82451c28
	ctx.lr = 0x8241C9A4;
	sub_82451C28(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8241c408
	ctx.lr = 0x8241C9AC;
	sub_8241C408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241C9C0;
	sub_8241F040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8345bcc0
	ctx.lr = 0x8241C9D0;
	sub_8345BCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8345c0b0
	ctx.lr = 0x8241C9E0;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83308d20
	ctx.lr = 0x8241C9E8;
	sub_83308D20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f040
	ctx.lr = 0x8241C9F4;
	sub_8241F040(ctx, base);
	// b 0x8241cb60
	goto loc_8241CB60;
loc_8241C9F8:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82452080
	ctx.lr = 0x8241CA04;
	sub_82452080(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8241c408
	ctx.lr = 0x8241CA0C;
	sub_8241C408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x8241CA20;
	sub_8241F040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8345bcc0
	ctx.lr = 0x8241CA30;
	sub_8345BCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8345c0b0
	ctx.lr = 0x8241CA40;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83308d20
	ctx.lr = 0x8241CA48;
	sub_83308D20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f040
	ctx.lr = 0x8241CA54;
	sub_8241F040(ctx, base);
	// b 0x8241cb60
	goto loc_8241CB60;
loc_8241CA58:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82420750
	ctx.lr = 0x8241CA64;
	sub_82420750(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8246aa80
	ctx.lr = 0x8241CA70;
	sub_8246AA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8345c0b0
	ctx.lr = 0x8241CA80;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83308d20
	ctx.lr = 0x8241CA88;
	sub_83308D20(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241fb00
	ctx.lr = 0x8241CA90;
	sub_8241FB00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8345c0b0
	ctx.lr = 0x8241CAA0;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8241cb5c
	goto loc_8241CB5C;
loc_8241CAA8:
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8246aa80
	ctx.lr = 0x8241CAB4;
	sub_8246AA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8345c0b0
	ctx.lr = 0x8241CAC4;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x83308d20
	ctx.lr = 0x8241CACC;
	sub_83308D20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8345c0b0
	ctx.lr = 0x8241CADC;
	sub_8345C0B0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8241cb5c
	goto loc_8241CB5C;
loc_8241CAE4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8241CAF8;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241CAFC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241fa28
	ctx.lr = 0x8241CB08;
	sub_8241FA28(ctx, base);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8241CB18;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241CB1C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241fa70
	ctx.lr = 0x8241CB28;
	sub_8241FA70(ctx, base);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x8241CB38;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241CB3C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8241CB48;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x83323038
	ctx.lr = 0x8241CB58;
	sub_83323038(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8241CB5C:
	// bl 0x83308d20
	ctx.lr = 0x8241CB60;
	sub_83308D20(ctx, base);
loc_8241CB60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241CB7C"))) PPC_WEAK_FUNC(sub_8241CB7C);
PPC_FUNC_IMPL(__imp__sub_8241CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241CB80"))) PPC_WEAK_FUNC(sub_8241CB80);
PPC_FUNC_IMPL(__imp__sub_8241CB80) {
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
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8241cc40
	if (cr6.gt) goto loc_8241CC40;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13380
	ctx.r12.s64 = ctx.r12.s64 + -13380;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241CBF4;
	case 1:
		goto loc_8241CC00;
	case 2:
		goto loc_8241CC0C;
	case 3:
		goto loc_8241CC40;
	case 4:
		goto loc_8241CC40;
	case 5:
		goto loc_8241CC40;
	case 6:
		goto loc_8241CC40;
	case 7:
		goto loc_8241CC40;
	case 8:
		goto loc_8241CC40;
	case 9:
		goto loc_8241CC1C;
	case 10:
		goto loc_8241CC28;
	case 11:
		goto loc_8241CC38;
	case 12:
		goto loc_8241CC40;
	case 13:
		goto loc_8241CC40;
	default:
		return;
	}
	// lwz r18,-13324(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13324);
	// lwz r18,-13312(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// lwz r18,-13300(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13300);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13284(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13284);
	// lwz r18,-13272(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13272);
	// lwz r18,-13256(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13256);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
	// lwz r18,-13248(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13248);
loc_8241CBF4:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82573c50
	ctx.lr = 0x8241CBFC;
	sub_82573C50(ctx, base);
	// b 0x8241cc40
	goto loc_8241CC40;
loc_8241CC00:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241fb00
	ctx.lr = 0x8241CC08;
	sub_8241FB00(ctx, base);
	// b 0x8241cc40
	goto loc_8241CC40;
loc_8241CC0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241f040
	ctx.lr = 0x8241CC18;
	sub_8241F040(ctx, base);
	// b 0x8241cc40
	goto loc_8241CC40;
loc_8241CC1C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83308d20
	ctx.lr = 0x8241CC24;
	sub_83308D20(ctx, base);
	// b 0x8241cc40
	goto loc_8241CC40;
loc_8241CC28:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82572fa0
	ctx.lr = 0x8241CC34;
	sub_82572FA0(ctx, base);
	// b 0x8241cc40
	goto loc_8241CC40;
loc_8241CC38:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241c3b8
	ctx.lr = 0x8241CC40;
	sub_8241C3B8(ctx, base);
loc_8241CC40:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8241CC64"))) PPC_WEAK_FUNC(sub_8241CC64);
PPC_FUNC_IMPL(__imp__sub_8241CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241CC68"))) PPC_WEAK_FUNC(sub_8241CC68);
PPC_FUNC_IMPL(__imp__sub_8241CC68) {
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x8241d66c
	if (cr6.gt) goto loc_8241D66C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13140
	ctx.r12.s64 = ctx.r12.s64 + -13140;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241CD10;
	case 1:
		goto loc_8241CD10;
	case 2:
		goto loc_8241CD10;
	case 3:
		goto loc_8241CD10;
	case 4:
		goto loc_8241CD10;
	case 5:
		goto loc_8241CD10;
	case 6:
		goto loc_8241CD10;
	case 7:
		goto loc_8241CD10;
	case 8:
		goto loc_8241CDA4;
	case 9:
		goto loc_8241CDA4;
	case 10:
		goto loc_8241CDDC;
	case 11:
		goto loc_8241CE10;
	case 12:
		goto loc_8241CE5C;
	case 13:
		goto loc_8241CF34;
	case 14:
		goto loc_8241CF94;
	case 15:
		goto loc_8241D02C;
	case 16:
		goto loc_8241D0E8;
	case 17:
		goto loc_8241D1A0;
	case 18:
		goto loc_8241D280;
	case 19:
		goto loc_8241D360;
	case 20:
		goto loc_8241D450;
	case 21:
		goto loc_8241D528;
	case 22:
		goto loc_8241D584;
	case 23:
		goto loc_8241D66C;
	case 24:
		goto loc_8241D5D8;
	default:
		return;
	}
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-13040(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13040);
	// lwz r18,-12892(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12892);
	// lwz r18,-12892(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12892);
	// lwz r18,-12836(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12836);
	// lwz r18,-12784(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12784);
	// lwz r18,-12708(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12708);
	// lwz r18,-12492(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12492);
	// lwz r18,-12396(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12396);
	// lwz r18,-12244(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12244);
	// lwz r18,-12056(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12056);
	// lwz r18,-11872(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11872);
	// lwz r18,-11648(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11648);
	// lwz r18,-11424(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11424);
	// lwz r18,-11184(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11184);
	// lwz r18,-10968(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10968);
	// lwz r18,-10876(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10876);
	// lwz r18,-10644(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10644);
	// lwz r18,-10792(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10792);
loc_8241CD10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8241d66c
	if (cr6.gt) goto loc_8241D66C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13004
	ctx.r12.s64 = ctx.r12.s64 + -13004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241CD5C;
	case 1:
		goto loc_8241CD5C;
	case 2:
		goto loc_8241CD5C;
	case 3:
		goto loc_8241CD5C;
	case 4:
		goto loc_8241CD5C;
	case 5:
		goto loc_8241CD5C;
	case 6:
		goto loc_8241CD5C;
	case 7:
		goto loc_8241CD5C;
	case 8:
		goto loc_8241CD88;
	case 9:
		goto loc_8241CD88;
	default:
		return;
	}
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12964(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12964);
	// lwz r18,-12920(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12920);
	// lwz r18,-12920(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12920);
loc_8241CD5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b300
	ctx.lr = 0x8241CD64;
	sub_8241B300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241b300
	ctx.lr = 0x8241CD70;
	sub_8241B300(ctx, base);
	// cmpd cr6,r30,r3
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r3.s64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8241cd80
	if (cr6.eq) goto loc_8241CD80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241CD80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CD88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b5b0
	ctx.lr = 0x8241CD90;
	sub_8241B5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8241b5b0
	ctx.lr = 0x8241CD9C;
	sub_8241B5B0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// b 0x8241d658
	goto loc_8241D658;
loc_8241CDA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8241d66c
	if (!cr6.lt) goto loc_8241D66C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b5b0
	ctx.lr = 0x8241CDB8;
	sub_8241B5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8241b5b0
	ctx.lr = 0x8241CDC4;
	sub_8241B5B0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8241cd80
	if (cr6.eq) goto loc_8241CD80;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CDDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a5e0
	ctx.lr = 0x8241CDF0;
	sub_8241A5E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a5e0
	ctx.lr = 0x8241CDFC;
	sub_8241A5E0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CE10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8241b8c8
	ctx.lr = 0x8241CE28;
	sub_8241B8C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241b8c8
	ctx.lr = 0x8241CE38;
	sub_8241B8C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573280
	ctx.lr = 0x8241CE40;
	sub_82573280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x8241CE4C;
	sub_82573C50(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x8241CE54;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CE5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8241ceb4
	if (!cr6.eq) goto loc_8241CEB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b918
	ctx.lr = 0x8241CE74;
	sub_8241B918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8241b918
	ctx.lr = 0x8241CE84;
	sub_8241B918(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// beq cr6,0x8241ce9c
	if (cr6.eq) goto loc_8241CE9C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8241CE9C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8241fb00
	ctx.lr = 0x8241CEA4;
	sub_8241FB00(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241fb00
	ctx.lr = 0x8241CEAC;
	sub_8241FB00(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CEB4:
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241c8d0
	ctx.lr = 0x8241CEC8;
	sub_8241C8D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83308d20
	ctx.lr = 0x8241CED8;
	sub_83308D20(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8241cf14
	if (cr6.eq) goto loc_8241CF14;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241b918
	ctx.lr = 0x8241CEEC;
	sub_8241B918(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// beq cr6,0x8241cf04
	if (cr6.eq) goto loc_8241CF04;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8241CF04:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fb00
	ctx.lr = 0x8241CF0C;
	sub_8241FB00(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CF14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x8241CF1C;
	sub_8241B918(ctx, base);
	// bl 0x8241fad0
	ctx.lr = 0x8241CF20;
	sub_8241FAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fb00
	ctx.lr = 0x8241CF2C;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CF34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241b9b0
	ctx.lr = 0x8241CF4C;
	sub_8241B9B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8241b9b0
	ctx.lr = 0x8241CF5C;
	sub_8241B9B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r31,r7,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x8241f040
	ctx.lr = 0x8241CF80;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x8241CF8C;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241CF94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vcmpeqfp128 v13,v61,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8241d020
	if (cr6.eq) goto loc_8241D020;
	// vspltw128 v59,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v58,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vcmpeqfp128 v13,v58,v59
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d020
	if (cr6.eq) goto loc_8241D020;
	// vspltw128 v57,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v56,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vcmpeqfp128 v13,v56,v57
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vcmpgtuw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241d024
	if (!cr6.eq) goto loc_8241D024;
loc_8241D020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241D024:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D02C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v54,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vcmpeqfp128 v13,v55,v54
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8241d0dc
	if (cr6.eq) goto loc_8241D0DC;
	// vspltw128 v53,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v52,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vcmpeqfp128 v13,v52,v53
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d0dc
	if (cr6.eq) goto loc_8241D0DC;
	// vspltw128 v51,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v50,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vcmpeqfp128 v13,v50,v51
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d0dc
	if (cr6.eq) goto loc_8241D0DC;
	// vspltw128 v49,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v48,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpeqfp128 v13,v48,v49
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vcmpgtuw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241d0e0
	if (!cr6.eq) goto loc_8241D0E0;
loc_8241D0DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241D0E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D0E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw128 v47,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v46,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vcmpeqfp128 v13,v47,v46
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8241d194
	if (cr6.eq) goto loc_8241D194;
	// vspltw128 v45,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v44,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vcmpeqfp128 v13,v44,v45
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d194
	if (cr6.eq) goto loc_8241D194;
	// vspltw128 v43,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v42,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vcmpeqfp128 v13,v42,v43
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d194
	if (cr6.eq) goto loc_8241D194;
	// vspltw128 v41,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v40,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpeqfp128 v13,v40,v41
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vcmpgtuw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241d198
	if (!cr6.eq) goto loc_8241D198;
loc_8241D194:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241D198:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D1A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241bb80
	ctx.lr = 0x8241D1B8;
	sub_8241BB80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bb80
	ctx.lr = 0x8241D1C4;
	sub_8241BB80(ctx, base);
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
loc_8241D1D0:
	// lvx128 v63,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
loc_8241D1DC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v39,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stvx128 v39,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfsx f13,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfsx f0,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v38,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpeqfp128 v36,v37,v38
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vnor128 v0,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)), simde_mm_set1_epi32(-1)));
	// vcmpgtuw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8241d1dc
	if (cr6.lt) goto loc_8241D1DC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x8241d1d0
	if (cr6.lt) goto loc_8241D1D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D280:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bc00
	ctx.lr = 0x8241D298;
	sub_8241BC00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241bc00
	ctx.lr = 0x8241D2A4;
	sub_8241BC00(ctx, base);
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
loc_8241D2B0:
	// lvx128 v63,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
loc_8241D2BC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v35,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v35,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lfsx f0,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfsx f13,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v34,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpeqfp128 v32,v33,v34
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v34.f32)));
	// vnor128 v0,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)), simde_mm_set1_epi32(-1)));
	// vcmpgtuw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8241d2bc
	if (cr6.lt) goto loc_8241D2BC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x8241d2b0
	if (cr6.lt) goto loc_8241D2B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D360:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// vspltw128 v60,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vcmpeqfp128 v13,v61,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8241d444
	if (cr6.eq) goto loc_8241D444;
	// vspltw128 v59,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v58,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vcmpeqfp128 v13,v58,v59
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d444
	if (cr6.eq) goto loc_8241D444;
	// vspltw128 v57,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v56,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vcmpeqfp128 v13,v56,v57
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vcmpgtuw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241d444
	if (cr6.eq) goto loc_8241D444;
	// vspltw128 v55,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v54,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpeqfp128 v13,v54,v55
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vcmpgtuw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpgt_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241d448
	if (!cr6.eq) goto loc_8241D448;
loc_8241D444:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241D448:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// bne cr6,0x8241d4a8
	if (!cr6.eq) goto loc_8241D4A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8241c8d0
	ctx.lr = 0x8241D468;
	sub_8241C8D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8241c8d0
	ctx.lr = 0x8241D478;
	sub_8241C8D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r31,r7,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x83308d20
	ctx.lr = 0x8241D498;
	sub_83308D20(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83308d20
	ctx.lr = 0x8241D4A0;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D4A8:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241c8d0
	ctx.lr = 0x8241D4BC;
	sub_8241C8D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83308d20
	ctx.lr = 0x8241D4CC;
	sub_83308D20(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x8241d508
	if (cr6.eq) goto loc_8241D508;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241b918
	ctx.lr = 0x8241D4E0;
	sub_8241B918(ctx, base);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// beq cr6,0x8241d4f8
	if (cr6.eq) goto loc_8241D4F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8241D4F8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241fb00
	ctx.lr = 0x8241D500;
	sub_8241FB00(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D508:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241b918
	ctx.lr = 0x8241D510;
	sub_8241B918(ctx, base);
	// bl 0x8241fad0
	ctx.lr = 0x8241D514;
	sub_8241FAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241fb00
	ctx.lr = 0x8241D520;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D528:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8241bce8
	ctx.lr = 0x8241D540;
	sub_8241BCE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8241bce8
	ctx.lr = 0x8241D550;
	sub_8241BCE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8241D568;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82572fa0
	ctx.lr = 0x8241D574;
	sub_82572FA0(ctx, base);
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8241bf70
	ctx.lr = 0x8241D59C;
	sub_8241BF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8241bf70
	ctx.lr = 0x8241D5AC;
	sub_8241BF70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241c3b8
	ctx.lr = 0x8241D5C0;
	sub_8241C3B8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8241c3b8
	ctx.lr = 0x8241D5C8;
	sub_8241C3B8(ctx, base);
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D5D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// bne cr6,0x8241d66c
	if (!cr6.eq) goto loc_8241D66C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241c098
	ctx.lr = 0x8241D5F0;
	sub_8241C098(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241c098
	ctx.lr = 0x8241D5FC;
	sub_8241C098(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8241d660
	if (!cr6.eq) goto loc_8241D660;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8241d660
	if (!cr6.eq) goto loc_8241D660;
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8241d660
	if (!cr6.eq) goto loc_8241D660;
	// lhz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8241d660
	if (!cr6.eq) goto loc_8241D660;
	// lhz r11,110(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
loc_8241D658:
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8241d664
	if (cr6.eq) goto loc_8241D664;
loc_8241D660:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241D664:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8241d670
	goto loc_8241D670;
loc_8241D66C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D670:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
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

__attribute__((alias("__imp__sub_8241D68C"))) PPC_WEAK_FUNC(sub_8241D68C);
PPC_FUNC_IMPL(__imp__sub_8241D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D690"))) PPC_WEAK_FUNC(sub_8241D690);
PPC_FUNC_IMPL(__imp__sub_8241D690) {
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
	// bl 0x8241cc68
	ctx.lr = 0x8241D6A0;
	sub_8241CC68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8241D6BC"))) PPC_WEAK_FUNC(sub_8241D6BC);
PPC_FUNC_IMPL(__imp__sub_8241D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D6C0"))) PPC_WEAK_FUNC(sub_8241D6C0);
PPC_FUNC_IMPL(__imp__sub_8241D6C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241cb80
	sub_8241CB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241D6C4"))) PPC_WEAK_FUNC(sub_8241D6C4);
PPC_FUNC_IMPL(__imp__sub_8241D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D6C8"))) PPC_WEAK_FUNC(sub_8241D6C8);
PPC_FUNC_IMPL(__imp__sub_8241D6C8) {
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
	// bl 0x8241cb80
	ctx.lr = 0x8241D6E8;
	sub_8241CB80(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D70C"))) PPC_WEAK_FUNC(sub_8241D70C);
PPC_FUNC_IMPL(__imp__sub_8241D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D710"))) PPC_WEAK_FUNC(sub_8241D710);
PPC_FUNC_IMPL(__imp__sub_8241D710) {
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
	// bl 0x8241cb80
	ctx.lr = 0x8241D730;
	sub_8241CB80(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D754"))) PPC_WEAK_FUNC(sub_8241D754);
PPC_FUNC_IMPL(__imp__sub_8241D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D758"))) PPC_WEAK_FUNC(sub_8241D758);
PPC_FUNC_IMPL(__imp__sub_8241D758) {
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
	// bl 0x8241cb80
	ctx.lr = 0x8241D778;
	sub_8241CB80(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D79C"))) PPC_WEAK_FUNC(sub_8241D79C);
PPC_FUNC_IMPL(__imp__sub_8241D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D7A0"))) PPC_WEAK_FUNC(sub_8241D7A0);
PPC_FUNC_IMPL(__imp__sub_8241D7A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D7C0;
	sub_8241CB80(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D7E4"))) PPC_WEAK_FUNC(sub_8241D7E4);
PPC_FUNC_IMPL(__imp__sub_8241D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D7E8"))) PPC_WEAK_FUNC(sub_8241D7E8);
PPC_FUNC_IMPL(__imp__sub_8241D7E8) {
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
	// bl 0x8241cb80
	ctx.lr = 0x8241D808;
	sub_8241CB80(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D82C"))) PPC_WEAK_FUNC(sub_8241D82C);
PPC_FUNC_IMPL(__imp__sub_8241D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D830"))) PPC_WEAK_FUNC(sub_8241D830);
PPC_FUNC_IMPL(__imp__sub_8241D830) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D850;
	sub_8241CB80(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241d868
	if (cr0.eq) goto loc_8241D868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241D868;
	sub_8241F130(ctx, base);
loc_8241D868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D880"))) PPC_WEAK_FUNC(sub_8241D880);
PPC_FUNC_IMPL(__imp__sub_8241D880) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D8A0;
	sub_8241CB80(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241d8b8
	if (cr0.eq) goto loc_8241D8B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241fa28
	ctx.lr = 0x8241D8B8;
	sub_8241FA28(ctx, base);
loc_8241D8B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D8D0"))) PPC_WEAK_FUNC(sub_8241D8D0);
PPC_FUNC_IMPL(__imp__sub_8241D8D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D8F0;
	sub_8241CB80(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241d910
	if (cr0.eq) goto loc_8241D910;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x8241D910;
	sub_8241F040(ctx, base);
loc_8241D910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D928"))) PPC_WEAK_FUNC(sub_8241D928);
PPC_FUNC_IMPL(__imp__sub_8241D928) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241D950;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D958;
	sub_8241CB80(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241d974
	if (cr0.eq) goto loc_8241D974;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x8241D974;
	sub_8241F040(ctx, base);
loc_8241D974:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241D980;
	sub_8241F040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D998"))) PPC_WEAK_FUNC(sub_8241D998);
PPC_FUNC_IMPL(__imp__sub_8241D998) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241D9B8;
	sub_8241CB80(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241d9d0
	if (cr0.eq) goto loc_8241D9D0;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241D9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D9E8"))) PPC_WEAK_FUNC(sub_8241D9E8);
PPC_FUNC_IMPL(__imp__sub_8241D9E8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DA08;
	sub_8241CB80(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241da20
	if (cr0.eq) goto loc_8241DA20;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241DA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DA38"))) PPC_WEAK_FUNC(sub_8241DA38);
PPC_FUNC_IMPL(__imp__sub_8241DA38) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DA58;
	sub_8241CB80(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241da70
	if (cr0.eq) goto loc_8241DA70;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241DA70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DA88"))) PPC_WEAK_FUNC(sub_8241DA88);
PPC_FUNC_IMPL(__imp__sub_8241DA88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DAA8;
	sub_8241CB80(ctx, base);
	// li r10,17
	ctx.r10.s64 = 17;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241dad8
	if (cr0.eq) goto loc_8241DAD8;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v62,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241DAD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DAF0"))) PPC_WEAK_FUNC(sub_8241DAF0);
PPC_FUNC_IMPL(__imp__sub_8241DAF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DB10;
	sub_8241CB80(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241db4c
	if (cr0.eq) goto loc_8241DB4C;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241DB4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DB64"))) PPC_WEAK_FUNC(sub_8241DB64);
PPC_FUNC_IMPL(__imp__sub_8241DB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DB68"))) PPC_WEAK_FUNC(sub_8241DB68);
PPC_FUNC_IMPL(__imp__sub_8241DB68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DB88;
	sub_8241CB80(ctx, base);
	// li r10,19
	ctx.r10.s64 = 19;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241dba8
	if (cr0.eq) goto loc_8241DBA8;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8241DBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DBC0"))) PPC_WEAK_FUNC(sub_8241DBC0);
PPC_FUNC_IMPL(__imp__sub_8241DBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241DBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DBD8;
	sub_8241CB80(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addic. r31,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r31.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241dc1c
	if (cr0.eq) goto loc_8241DC1C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x8241DBFC;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241DC00;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8241DC0C;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x8241DC1C;
	sub_83323038(ctx, base);
loc_8241DC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241DC24"))) PPC_WEAK_FUNC(sub_8241DC24);
PPC_FUNC_IMPL(__imp__sub_8241DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DC28"))) PPC_WEAK_FUNC(sub_8241DC28);
PPC_FUNC_IMPL(__imp__sub_8241DC28) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DC48;
	sub_8241CB80(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241dc68
	if (cr0.eq) goto loc_8241DC68;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241DC68;
	sub_82572FA0(ctx, base);
loc_8241DC68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DC80"))) PPC_WEAK_FUNC(sub_8241DC80);
PPC_FUNC_IMPL(__imp__sub_8241DC80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DCA0;
	sub_8241CB80(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// addic. r3,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x8241dcb8
	if (cr0.eq) goto loc_8241DCB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241b810
	ctx.lr = 0x8241DCB8;
	sub_8241B810(ctx, base);
loc_8241DCB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DCD0"))) PPC_WEAK_FUNC(sub_8241DCD0);
PPC_FUNC_IMPL(__imp__sub_8241DCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DCF0;
	sub_8241CB80(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addic. r11,r30,16
	xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r11.s64 = ctx.r30.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8241dd28
	if (cr0.eq) goto loc_8241DD28;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r9,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r9.u16);
loc_8241DD28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DD40"))) PPC_WEAK_FUNC(sub_8241DD40);
PPC_FUNC_IMPL(__imp__sub_8241DD40) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bgt cr6,0x8241e12c
	if (cr6.gt) goto loc_8241E12C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8828
	ctx.r12.s64 = ctx.r12.s64 + -8828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8241DDE8;
	case 1:
		goto loc_8241DE0C;
	case 2:
		goto loc_8241DE30;
	case 3:
		goto loc_8241DE54;
	case 4:
		goto loc_8241DE78;
	case 5:
		goto loc_8241DE9C;
	case 6:
		goto loc_8241DEC0;
	case 7:
		goto loc_8241DEE4;
	case 8:
		goto loc_8241DF08;
	case 9:
		goto loc_8241DF2C;
	case 10:
		goto loc_8241DF50;
	case 11:
		goto loc_8241DF74;
	case 12:
		goto loc_8241DF98;
	case 13:
		goto loc_8241DFBC;
	case 14:
		goto loc_8241DFE4;
	case 15:
		goto loc_8241E004;
	case 16:
		goto loc_8241E024;
	case 17:
		goto loc_8241E044;
	case 18:
		goto loc_8241E060;
	case 19:
		goto loc_8241E07C;
	case 20:
		goto loc_8241E0A4;
	case 21:
		goto loc_8241E0C8;
	case 22:
		goto loc_8241E0F0;
	case 23:
		goto loc_8241E12C;
	case 24:
		goto loc_8241E114;
	default:
		return;
	}
	// lwz r18,-8728(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8728);
	// lwz r18,-8692(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8692);
	// lwz r18,-8656(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8656);
	// lwz r18,-8620(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8620);
	// lwz r18,-8584(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8584);
	// lwz r18,-8548(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8548);
	// lwz r18,-8512(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8512);
	// lwz r18,-8476(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8476);
	// lwz r18,-8440(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8440);
	// lwz r18,-8404(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8404);
	// lwz r18,-8368(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8368);
	// lwz r18,-8332(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8332);
	// lwz r18,-8296(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8296);
	// lwz r18,-8260(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8260);
	// lwz r18,-8220(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8220);
	// lwz r18,-8188(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8188);
	// lwz r18,-8156(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8156);
	// lwz r18,-8124(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8124);
	// lwz r18,-8096(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8096);
	// lwz r18,-8068(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8068);
	// lwz r18,-8028(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8028);
	// lwz r18,-7992(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -7992);
	// lwz r18,-7952(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -7952);
	// lwz r18,-7892(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -7892);
	// lwz r18,-7916(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -7916);
loc_8241DDE8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241ae70
	ctx.lr = 0x8241DDF0;
	sub_8241AE70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DDFC;
	sub_8241CB80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DE0C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241af40
	ctx.lr = 0x8241DE14;
	sub_8241AF40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DE20;
	sub_8241CB80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DE30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241aff0
	ctx.lr = 0x8241DE38;
	sub_8241AFF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DE44;
	sub_8241CB80(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DE54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b0c0
	ctx.lr = 0x8241DE5C;
	sub_8241B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DE68;
	sub_8241CB80(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DE78:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b178
	ctx.lr = 0x8241DE80;
	sub_8241B178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DE8C;
	sub_8241CB80(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DE9C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b240
	ctx.lr = 0x8241DEA4;
	sub_8241B240(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DEB0;
	sub_8241CB80(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DEC0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b300
	ctx.lr = 0x8241DEC8;
	sub_8241B300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DED4;
	sub_8241CB80(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DEE4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b300
	ctx.lr = 0x8241DEEC;
	sub_8241B300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DEF8;
	sub_8241CB80(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DF08:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b3c8
	ctx.lr = 0x8241DF10;
	sub_8241B3C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DF1C;
	sub_8241CB80(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DF2C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241b5b0
	ctx.lr = 0x8241DF34;
	sub_8241B5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DF40;
	sub_8241CB80(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stfd f31,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f31.u64);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DF50:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8241a5e0
	ctx.lr = 0x8241DF58;
	sub_8241A5E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241DF64;
	sub_8241CB80(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DF74:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241b8c8
	ctx.lr = 0x8241DF80;
	sub_8241B8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241d830
	ctx.lr = 0x8241DF8C;
	sub_8241D830(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x8241DF94;
	sub_82573C50(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DF98:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241b918
	ctx.lr = 0x8241DFA4;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241d880
	ctx.lr = 0x8241DFB0;
	sub_8241D880(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fb00
	ctx.lr = 0x8241DFB8;
	sub_8241FB00(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DFBC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b9b0
	ctx.lr = 0x8241DFC8;
	sub_8241B9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241d8d0
	ctx.lr = 0x8241DFD4;
	sub_8241D8D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x8241DFE0;
	sub_8241F040(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241DFE4:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241d998
	ctx.lr = 0x8241E000;
	sub_8241D998(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E004:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v62,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241d9e8
	ctx.lr = 0x8241E020;
	sub_8241D9E8(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E024:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241da38
	ctx.lr = 0x8241E040;
	sub_8241DA38(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E044:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8241bb80
	ctx.lr = 0x8241E050;
	sub_8241BB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241da88
	ctx.lr = 0x8241E05C;
	sub_8241DA88(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E060:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8241bc00
	ctx.lr = 0x8241E06C;
	sub_8241BC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241daf0
	ctx.lr = 0x8241E078;
	sub_8241DAF0(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E07C:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x8241db68
	ctx.lr = 0x8241E0A0;
	sub_8241DB68(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E0A4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241c8d0
	ctx.lr = 0x8241E0B0;
	sub_8241C8D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dbc0
	ctx.lr = 0x8241E0BC;
	sub_8241DBC0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83308d20
	ctx.lr = 0x8241E0C4;
	sub_83308D20(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E0C8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241bce8
	ctx.lr = 0x8241E0D4;
	sub_8241BCE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dc28
	ctx.lr = 0x8241E0E0;
	sub_8241DC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x8241E0EC;
	sub_82572FA0(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E0F0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241bf70
	ctx.lr = 0x8241E0FC;
	sub_8241BF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dc80
	ctx.lr = 0x8241E108;
	sub_8241DC80(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241c3b8
	ctx.lr = 0x8241E110;
	sub_8241C3B8(ctx, base);
	// b 0x8241e12c
	goto loc_8241E12C;
loc_8241E114:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241c098
	ctx.lr = 0x8241E120;
	sub_8241C098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dcd0
	ctx.lr = 0x8241E12C;
	sub_8241DCD0(ctx, base);
loc_8241E12C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

__attribute__((alias("__imp__sub_8241E148"))) PPC_WEAK_FUNC(sub_8241E148);
PPC_FUNC_IMPL(__imp__sub_8241E148) {
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
	// bl 0x8241dd40
	ctx.lr = 0x8241E160;
	sub_8241DD40(ctx, base);
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

__attribute__((alias("__imp__sub_8241E178"))) PPC_WEAK_FUNC(sub_8241E178);
PPC_FUNC_IMPL(__imp__sub_8241E178) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8241dd40
	sub_8241DD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E184"))) PPC_WEAK_FUNC(sub_8241E184);
PPC_FUNC_IMPL(__imp__sub_8241E184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E188"))) PPC_WEAK_FUNC(sub_8241E188);
PPC_FUNC_IMPL(__imp__sub_8241E188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E1B0;
	sub_8241CB80(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E1C4"))) PPC_WEAK_FUNC(sub_8241E1C4);
PPC_FUNC_IMPL(__imp__sub_8241E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E1C8"))) PPC_WEAK_FUNC(sub_8241E1C8);
PPC_FUNC_IMPL(__imp__sub_8241E1C8) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E1F8;
	sub_8241CB80(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E220"))) PPC_WEAK_FUNC(sub_8241E220);
PPC_FUNC_IMPL(__imp__sub_8241E220) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E250;
	sub_8241CB80(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E278"))) PPC_WEAK_FUNC(sub_8241E278);
PPC_FUNC_IMPL(__imp__sub_8241E278) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E2A8;
	sub_8241CB80(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E2D0"))) PPC_WEAK_FUNC(sub_8241E2D0);
PPC_FUNC_IMPL(__imp__sub_8241E2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E2F8;
	sub_8241CB80(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E30C"))) PPC_WEAK_FUNC(sub_8241E30C);
PPC_FUNC_IMPL(__imp__sub_8241E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E310"))) PPC_WEAK_FUNC(sub_8241E310);
PPC_FUNC_IMPL(__imp__sub_8241E310) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E340;
	sub_8241CB80(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E368"))) PPC_WEAK_FUNC(sub_8241E368);
PPC_FUNC_IMPL(__imp__sub_8241E368) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E398;
	sub_8241CB80(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E3C0"))) PPC_WEAK_FUNC(sub_8241E3C0);
PPC_FUNC_IMPL(__imp__sub_8241E3C0) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E3F0;
	sub_8241CB80(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E418"))) PPC_WEAK_FUNC(sub_8241E418);
PPC_FUNC_IMPL(__imp__sub_8241E418) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// bl 0x8241cb80
	ctx.lr = 0x8241E448;
	sub_8241CB80(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E470"))) PPC_WEAK_FUNC(sub_8241E470);
PPC_FUNC_IMPL(__imp__sub_8241E470) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,4
	ctx.r11.s64 = 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// bl 0x8241cb80
	ctx.lr = 0x8241E4A0;
	sub_8241CB80(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfd f31,16(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f31.u64);
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
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E4C8"))) PPC_WEAK_FUNC(sub_8241E4C8);
PPC_FUNC_IMPL(__imp__sub_8241E4C8) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E4F8;
	sub_8241CB80(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241E520"))) PPC_WEAK_FUNC(sub_8241E520);
PPC_FUNC_IMPL(__imp__sub_8241E520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E54C;
	sub_8241CB80(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8241e568
	if (cr6.eq) goto loc_8241E568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f130
	ctx.lr = 0x8241E568;
	sub_8241F130(ctx, base);
loc_8241E568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E574"))) PPC_WEAK_FUNC(sub_8241E574);
PPC_FUNC_IMPL(__imp__sub_8241E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E578"))) PPC_WEAK_FUNC(sub_8241E578);
PPC_FUNC_IMPL(__imp__sub_8241E578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E5A4;
	sub_8241CB80(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8241e5c0
	if (cr6.eq) goto loc_8241E5C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fa28
	ctx.lr = 0x8241E5C0;
	sub_8241FA28(ctx, base);
loc_8241E5C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E5CC"))) PPC_WEAK_FUNC(sub_8241E5CC);
PPC_FUNC_IMPL(__imp__sub_8241E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E5D0"))) PPC_WEAK_FUNC(sub_8241E5D0);
PPC_FUNC_IMPL(__imp__sub_8241E5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241E5D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E5FC;
	sub_8241CB80(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8241e61c
	if (cr6.eq) goto loc_8241E61C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// bl 0x8241f040
	ctx.lr = 0x8241E61C;
	sub_8241F040(ctx, base);
loc_8241E61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E628"))) PPC_WEAK_FUNC(sub_8241E628);
PPC_FUNC_IMPL(__imp__sub_8241E628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x8241f040
	ctx.lr = 0x8241E658;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cb80
	ctx.lr = 0x8241E660;
	sub_8241CB80(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8241e680
	if (cr6.eq) goto loc_8241E680;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x8241E680;
	sub_8241F040(ctx, base);
loc_8241E680:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8241E68C;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E698"))) PPC_WEAK_FUNC(sub_8241E698);
PPC_FUNC_IMPL(__imp__sub_8241E698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E6C4;
	sub_8241CB80(ctx, base);
	// li r9,14
	ctx.r9.s64 = 14;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8241e6e0
	if (cr6.eq) goto loc_8241E6E0;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241E6E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E6E8"))) PPC_WEAK_FUNC(sub_8241E6E8);
PPC_FUNC_IMPL(__imp__sub_8241E6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E714;
	sub_8241CB80(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8241e730
	if (cr6.eq) goto loc_8241E730;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241E730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E738"))) PPC_WEAK_FUNC(sub_8241E738);
PPC_FUNC_IMPL(__imp__sub_8241E738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E764;
	sub_8241CB80(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8241e780
	if (cr6.eq) goto loc_8241E780;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241E780:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E788"))) PPC_WEAK_FUNC(sub_8241E788);
PPC_FUNC_IMPL(__imp__sub_8241E788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E7B4;
	sub_8241CB80(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8241e7e8
	if (cr6.eq) goto loc_8241E7E8;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v62,r29,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r29,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241E7E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E7F0"))) PPC_WEAK_FUNC(sub_8241E7F0);
PPC_FUNC_IMPL(__imp__sub_8241E7F0) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// bl 0x8241daf0
	ctx.lr = 0x8241E818;
	sub_8241DAF0(ctx, base);
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

__attribute__((alias("__imp__sub_8241E830"))) PPC_WEAK_FUNC(sub_8241E830);
PPC_FUNC_IMPL(__imp__sub_8241E830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E85C;
	sub_8241CB80(ctx, base);
	// li r9,19
	ctx.r9.s64 = 19;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8241e880
	if (cr6.eq) goto loc_8241E880;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
loc_8241E880:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E888"))) PPC_WEAK_FUNC(sub_8241E888);
PPC_FUNC_IMPL(__imp__sub_8241E888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241E890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E8B4;
	sub_8241CB80(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8241e8f4
	if (cr6.eq) goto loc_8241E8F4;
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x8241E8D4;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8241E8D8;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8241E8E4;
	sub_8241FA28(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x8241E8F4;
	sub_83323038(ctx, base);
loc_8241E8F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E900"))) PPC_WEAK_FUNC(sub_8241E900);
PPC_FUNC_IMPL(__imp__sub_8241E900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241E908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E92C;
	sub_8241CB80(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8241e94c
	if (cr6.eq) goto loc_8241E94C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241E94C;
	sub_82572FA0(ctx, base);
loc_8241E94C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E958"))) PPC_WEAK_FUNC(sub_8241E958);
PPC_FUNC_IMPL(__imp__sub_8241E958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241E960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241E984;
	sub_8241CB80(ctx, base);
	// li r9,22
	ctx.r9.s64 = 22;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8241e9a0
	if (cr6.eq) goto loc_8241E9A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b810
	ctx.lr = 0x8241E9A0;
	sub_8241B810(ctx, base);
loc_8241E9A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E9AC"))) PPC_WEAK_FUNC(sub_8241E9AC);
PPC_FUNC_IMPL(__imp__sub_8241E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E9B0"))) PPC_WEAK_FUNC(sub_8241E9B0);
PPC_FUNC_IMPL(__imp__sub_8241E9B0) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// bl 0x8241dd40
	ctx.lr = 0x8241E9D8;
	sub_8241DD40(ctx, base);
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

__attribute__((alias("__imp__sub_8241E9F0"))) PPC_WEAK_FUNC(sub_8241E9F0);
PPC_FUNC_IMPL(__imp__sub_8241E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241E9F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,24
	ctx.r28.s64 = 24;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bl 0x8241cb80
	ctx.lr = 0x8241EA1C;
	sub_8241CB80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8241ea54
	if (cr6.eq) goto loc_8241EA54;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_8241EA54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241EA5C"))) PPC_WEAK_FUNC(sub_8241EA5C);
PPC_FUNC_IMPL(__imp__sub_8241EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241EA60"))) PPC_WEAK_FUNC(sub_8241EA60);
PPC_FUNC_IMPL(__imp__sub_8241EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241EA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x8241ef54
	if (cr6.gt) goto loc_8241EF54;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5484
	ctx.r12.s64 = ctx.r12.s64 + -5484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241EAF8;
	case 1:
		goto loc_8241EB24;
	case 2:
		goto loc_8241EB3C;
	case 3:
		goto loc_8241EB54;
	case 4:
		goto loc_8241EB6C;
	case 5:
		goto loc_8241EB98;
	case 6:
		goto loc_8241EBB0;
	case 7:
		goto loc_8241EBC8;
	case 8:
		goto loc_8241EBE0;
	case 9:
		goto loc_8241EBFC;
	case 10:
		goto loc_8241EC18;
	case 11:
		goto loc_8241EC30;
	case 12:
		goto loc_8241EC60;
	case 13:
		goto loc_8241EC90;
	case 14:
		goto loc_8241ECC8;
	case 15:
		goto loc_8241ECF8;
	case 16:
		goto loc_8241ED28;
	case 17:
		goto loc_8241ED54;
	case 18:
		goto loc_8241EDC4;
	case 19:
		goto loc_8241EE50;
	case 20:
		goto loc_8241EE80;
	case 21:
		goto loc_8241EEB8;
	case 22:
		goto loc_8241EEF8;
	case 23:
		goto loc_8241EF54;
	case 24:
		goto loc_8241EF24;
	default:
		return;
	}
	// lwz r18,-5384(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5384);
	// lwz r18,-5340(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5340);
	// lwz r18,-5316(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5316);
	// lwz r18,-5292(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5292);
	// lwz r18,-5268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5268);
	// lwz r18,-5224(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5224);
	// lwz r18,-5200(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5200);
	// lwz r18,-5176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5176);
	// lwz r18,-5152(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5152);
	// lwz r18,-5124(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5124);
	// lwz r18,-5096(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5096);
	// lwz r18,-5072(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5072);
	// lwz r18,-5024(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5024);
	// lwz r18,-4976(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4976);
	// lwz r18,-4920(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4920);
	// lwz r18,-4872(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4872);
	// lwz r18,-4824(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4824);
	// lwz r18,-4780(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4780);
	// lwz r18,-4668(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4668);
	// lwz r18,-4528(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4528);
	// lwz r18,-4480(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4480);
	// lwz r18,-4424(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4424);
	// lwz r18,-4360(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4360);
	// lwz r18,-4268(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4268);
	// lwz r18,-4316(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4316);
loc_8241EAF8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8241cb80
	ctx.lr = 0x8241EB10;
	sub_8241CB80(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EB24:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e1c8
	ctx.lr = 0x8241EB30;
	sub_8241E1C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EB3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e220
	ctx.lr = 0x8241EB48;
	sub_8241E220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EB54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e278
	ctx.lr = 0x8241EB60;
	sub_8241E278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EB6C:
	// li r29,4
	ctx.r29.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8241cb80
	ctx.lr = 0x8241EB84;
	sub_8241CB80(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EB98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e310
	ctx.lr = 0x8241EBA4;
	sub_8241E310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EBB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e368
	ctx.lr = 0x8241EBBC;
	sub_8241E368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EBC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e3c0
	ctx.lr = 0x8241EBD4;
	sub_8241E3C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EBE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241e418
	ctx.lr = 0x8241EBF0;
	sub_8241E418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EBFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x8241e470
	ctx.lr = 0x8241EC0C;
	sub_8241E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EC18:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e4c8
	ctx.lr = 0x8241EC24;
	sub_8241E4C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EC30:
	// bl 0x8241f278
	ctx.lr = 0x8241EC34;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f130
	ctx.lr = 0x8241EC40;
	sub_8241F130(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e520
	ctx.lr = 0x8241EC4C;
	sub_8241E520(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x8241EC54;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EC60:
	// bl 0x8241fb80
	ctx.lr = 0x8241EC64;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fa28
	ctx.lr = 0x8241EC70;
	sub_8241FA28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e578
	ctx.lr = 0x8241EC7C;
	sub_8241E578(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fb00
	ctx.lr = 0x8241EC84;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EC90:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8241ECA4;
	sub_8241F040(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e5d0
	ctx.lr = 0x8241ECB0;
	sub_8241E5D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8241ECBC;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241ECC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,9008
	ctx.r9.s64 = ctx.r11.s64 + 9008;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241e698
	ctx.lr = 0x8241ECEC;
	sub_8241E698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241ECF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,9008
	ctx.r9.s64 = ctx.r11.s64 + 9008;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241e6e8
	ctx.lr = 0x8241ED1C;
	sub_8241E6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241ED28:
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vupkd3d128 v58,v59,0
	vTemp.u32[0] = ctx.v59.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v59.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v59.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v59.u8[2] | 0x3F800000;
	ctx.v58 = vTemp;
	// vsldoi128 v57,v59,v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 12));
	// stvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241e738
	ctx.lr = 0x8241ED48;
	sub_8241E738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241ED54:
	// vspltisw128 v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vspltisw128 v55,-1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vupkd3d128 v54,v56,0
	vTemp.u32[0] = ctx.v56.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v56.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v56.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v56.u8[2] | 0x3F800000;
	ctx.v54 = vTemp;
	// vor128 v0,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vsldoi128 v53,v56,v55,12
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 4));
	// vor128 v12,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vsldoi128 v52,v55,v56,8
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vsldoi128 v51,v56,v55,8
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 8));
	// vsldoi128 v50,v55,v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 12));
	// vor128 v13,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vor128 v11,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vsldoi128 v49,v54,v56,12
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 4));
	// vand128 v10,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vand128 v9,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vsel v10,v0,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v0,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241e788
	ctx.lr = 0x8241EDB8;
	sub_8241E788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EDC4:
	// vspltisw128 v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vspltisw128 v47,-1
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// vupkd3d128 v46,v48,0
	vTemp.u32[0] = ctx.v48.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v48.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v48.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v48.u8[2] | 0x3F800000;
	ctx.v46 = vTemp;
	// vor128 v0,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vsldoi128 v45,v48,v47,12
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 4));
	// vor128 v12,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vsldoi128 v44,v47,v48,8
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 8));
	// li r7,4
	ctx.r7.s64 = 4;
	// vsldoi128 v43,v48,v47,8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 8));
	// li r6,0
	ctx.r6.s64 = 0;
	// vsldoi128 v42,v47,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// vor128 v13,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vor128 v11,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vsldoi128 v41,v46,v48,12
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 4));
	// vand128 v10,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vsldoi128 v40,v48,v46,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 12));
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vand128 v9,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vsel v10,v0,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v0,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// stvx128 v41,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241daf0
	ctx.lr = 0x8241EE44;
	sub_8241DAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EE50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,9008
	ctx.r9.s64 = ctx.r11.s64 + 9008;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvlx128 v39,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v38,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241e830
	ctx.lr = 0x8241EE74;
	sub_8241E830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EE80:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8241c720
	ctx.lr = 0x8241EE98;
	sub_8241C720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e888
	ctx.lr = 0x8241EEA4;
	sub_8241E888(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83308d20
	ctx.lr = 0x8241EEAC;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EEB8:
	// bl 0x82451cb8
	ctx.lr = 0x8241EEBC;
	sub_82451CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8241EED4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e900
	ctx.lr = 0x8241EEE0;
	sub_8241E900(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x8241EEEC;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EEF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82451d98
	ctx.lr = 0x8241EF04;
	sub_82451D98(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e958
	ctx.lr = 0x8241EF10;
	sub_8241E958(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8241c3b8
	ctx.lr = 0x8241EF18;
	sub_8241C3B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EF24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x8241b768
	ctx.lr = 0x8241EF3C;
	sub_8241B768(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e9f0
	ctx.lr = 0x8241EF48;
	sub_8241E9F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241EF54:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241EF70"))) PPC_WEAK_FUNC(sub_8241EF70);
PPC_FUNC_IMPL(__imp__sub_8241EF70) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241efc0
	if (cr6.eq) goto loc_8241EFC0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd40
	ctx.lr = 0x8241EFA8;
	sub_8241DD40(ctx, base);
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
loc_8241EFC0:
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

__attribute__((alias("__imp__sub_8241EFD8"))) PPC_WEAK_FUNC(sub_8241EFD8);
PPC_FUNC_IMPL(__imp__sub_8241EFD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8241cb80
	sub_8241CB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241EFE0"))) PPC_WEAK_FUNC(sub_8241EFE0);
PPC_FUNC_IMPL(__imp__sub_8241EFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241EFE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82574b18
	ctx.lr = 0x8241EFFC;
	sub_82574B18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8241f034
	if (cr6.gt) goto loc_8241F034;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82574b40
	ctx.lr = 0x8241F018;
	sub_82574B40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8241f034
	if (!cr6.eq) goto loc_8241F034;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8241F034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8241F034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F040"))) PPC_WEAK_FUNC(sub_8241F040);
PPC_FUNC_IMPL(__imp__sub_8241F040) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241f06c
	if (cr6.eq) goto loc_8241F06C;
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// bl 0x825749e0
	ctx.lr = 0x8241F06C;
	sub_825749E0(ctx, base);
loc_8241F06C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8241F078;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8241f084
	if (cr6.eq) goto loc_8241F084;
	// bl 0x8241efe0
	ctx.lr = 0x8241F084;
	sub_8241EFE0(ctx, base);
loc_8241F084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F09C"))) PPC_WEAK_FUNC(sub_8241F09C);
PPC_FUNC_IMPL(__imp__sub_8241F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F0A0"))) PPC_WEAK_FUNC(sub_8241F0A0);
PPC_FUNC_IMPL(__imp__sub_8241F0A0) {
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
	// bl 0x825742e0
	ctx.lr = 0x8241F0B8;
	sub_825742E0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F0D0"))) PPC_WEAK_FUNC(sub_8241F0D0);
PPC_FUNC_IMPL(__imp__sub_8241F0D0) {
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
	// bl 0x825740d0
	ctx.lr = 0x8241F0E8;
	sub_825740D0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F100"))) PPC_WEAK_FUNC(sub_8241F100);
PPC_FUNC_IMPL(__imp__sub_8241F100) {
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
	// bl 0x82574538
	ctx.lr = 0x8241F118;
	sub_82574538(ctx, base);
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

__attribute__((alias("__imp__sub_8241F130"))) PPC_WEAK_FUNC(sub_8241F130);
PPC_FUNC_IMPL(__imp__sub_8241F130) {
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
	// bl 0x825743b0
	ctx.lr = 0x8241F148;
	sub_825743B0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F160"))) PPC_WEAK_FUNC(sub_8241F160);
PPC_FUNC_IMPL(__imp__sub_8241F160) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8247c650
	ctx.lr = 0x8241F180;
	sub_8247C650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x825741a0
	ctx.lr = 0x8241F194;
	sub_825741A0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F1AC"))) PPC_WEAK_FUNC(sub_8241F1AC);
PPC_FUNC_IMPL(__imp__sub_8241F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F1B0"))) PPC_WEAK_FUNC(sub_8241F1B0);
PPC_FUNC_IMPL(__imp__sub_8241F1B0) {
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
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825740d0
	ctx.lr = 0x8241F1D0;
	sub_825740D0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F1E8"))) PPC_WEAK_FUNC(sub_8241F1E8);
PPC_FUNC_IMPL(__imp__sub_8241F1E8) {
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
	// bl 0x82574458
	ctx.lr = 0x8241F200;
	sub_82574458(ctx, base);
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

__attribute__((alias("__imp__sub_8241F218"))) PPC_WEAK_FUNC(sub_8241F218);
PPC_FUNC_IMPL(__imp__sub_8241F218) {
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
	// bl 0x825744d8
	ctx.lr = 0x8241F230;
	sub_825744D8(ctx, base);
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

__attribute__((alias("__imp__sub_8241F248"))) PPC_WEAK_FUNC(sub_8241F248);
PPC_FUNC_IMPL(__imp__sub_8241F248) {
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
	// bl 0x825745d0
	ctx.lr = 0x8241F260;
	sub_825745D0(ctx, base);
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

__attribute__((alias("__imp__sub_8241F278"))) PPC_WEAK_FUNC(sub_8241F278);
PPC_FUNC_IMPL(__imp__sub_8241F278) {
	PPC_FUNC_PROLOGUE();
	// b 0x82573f08
	sub_82573F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F27C"))) PPC_WEAK_FUNC(sub_8241F27C);
PPC_FUNC_IMPL(__imp__sub_8241F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F280"))) PPC_WEAK_FUNC(sub_8241F280);
PPC_FUNC_IMPL(__imp__sub_8241F280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241F288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241f31c
	if (cr6.eq) goto loc_8241F31C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82574c60
	ctx.lr = 0x8241F2B4;
	sub_82574C60(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241f338
	if (cr6.eq) goto loc_8241F338;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8241F2C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241f2c8
	if (!cr6.eq) goto loc_8241F2C8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573108
	ctx.lr = 0x8241F2F8;
	sub_82573108(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x8241F308;
	sub_831CE7D8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8241F31C:
	// bl 0x8241f5e0
	ctx.lr = 0x8241F320;
	sub_8241F5E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8241f5e0
	ctx.lr = 0x8241F32C;
	sub_8241F5E0(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
loc_8241F338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F344"))) PPC_WEAK_FUNC(sub_8241F344);
PPC_FUNC_IMPL(__imp__sub_8241F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F348"))) PPC_WEAK_FUNC(sub_8241F348);
PPC_FUNC_IMPL(__imp__sub_8241F348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241F350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8241f37c
	if (cr6.eq) goto loc_8241F37C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8241F374;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8241F37C:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x8241f3ec
	if (cr6.eq) goto loc_8241F3EC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8241F3A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241f3a4
	if (!cr6.eq) goto loc_8241F3A4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573108
	ctx.lr = 0x8241F3D4;
	sub_82573108(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x8241F3E4;
	sub_831CE7D8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8241F3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F3F8"))) PPC_WEAK_FUNC(sub_8241F3F8);
PPC_FUNC_IMPL(__imp__sub_8241F3F8) {
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
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825740d0
	ctx.lr = 0x8241F41C;
	sub_825740D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82573d70
	ctx.lr = 0x8241F428;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8241F430;
	sub_82573C50(ctx, base);
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

__attribute__((alias("__imp__sub_8241F448"))) PPC_WEAK_FUNC(sub_8241F448);
PPC_FUNC_IMPL(__imp__sub_8241F448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8241F450;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8241f48c
	if (!cr6.eq) goto loc_8241F48C;
	// bl 0x82573f08
	ctx.lr = 0x8241F474;
	sub_82573F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825743b0
	ctx.lr = 0x8241F480;
	sub_825743B0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8241F48C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8241f4b8
	if (cr6.eq) goto loc_8241F4B8;
loc_8241F4A0:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bne cr6,0x8241f4a0
	if (!cr6.eq) goto loc_8241F4A0;
loc_8241F4B8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82574cd8
	ctx.lr = 0x8241F4E0;
	sub_82574CD8(ctx, base);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8252e3c0
	ctx.lr = 0x8241F4EC;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x8241F4FC;
	sub_831CE7D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x8241f550
	if (!cr6.gt) goto loc_8241F550;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_8241F510:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x8241F518;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce890
	ctx.lr = 0x8241F528;
	sub_831CE890(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x8241F534;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce890
	ctx.lr = 0x8241F544;
	sub_831CE890(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x8241f510
	if (!cr0.eq) goto loc_8241F510;
loc_8241F550:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825742e0
	ctx.lr = 0x8241F55C;
	sub_825742E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574cb8
	ctx.lr = 0x8241F564;
	sub_82574CB8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F570"))) PPC_WEAK_FUNC(sub_8241F570);
PPC_FUNC_IMPL(__imp__sub_8241F570) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8247c650
	ctx.lr = 0x8241F590;
	sub_8247C650(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f280
	ctx.lr = 0x8241F5A4;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f348
	ctx.lr = 0x8241F5B0;
	sub_8241F348(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8241f5c8
	if (cr6.eq) goto loc_8241F5C8;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8241F5C8;
	sub_82573040(ctx, base);
loc_8241F5C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8241F5E0"))) PPC_WEAK_FUNC(sub_8241F5E0);
PPC_FUNC_IMPL(__imp__sub_8241F5E0) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8241f64c
	if (!cr6.eq) goto loc_8241F64C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 672, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r9,656
	ctx.r31.s64 = ctx.r9.s64 + 656;
	// addi r4,r8,9079
	ctx.r4.s64 = ctx.r8.s64 + 9079;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8241f280
	ctx.lr = 0x8241F628;
	sub_8241F280(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,4632
	ctx.r3.s64 = ctx.r7.s64 + 4632;
	// bl 0x831cdcc8
	ctx.lr = 0x8241F634;
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
loc_8241F64C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
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

__attribute__((alias("__imp__sub_8241F668"))) PPC_WEAK_FUNC(sub_8241F668);
PPC_FUNC_IMPL(__imp__sub_8241F668) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241f6a8
	if (cr6.eq) goto loc_8241F6A8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825743b0
	ctx.lr = 0x8241F690;
	sub_825743B0(ctx, base);
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
loc_8241F6A8:
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

__attribute__((alias("__imp__sub_8241F6C0"))) PPC_WEAK_FUNC(sub_8241F6C0);
PPC_FUNC_IMPL(__imp__sub_8241F6C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82573d70
	sub_82573D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F6CC"))) PPC_WEAK_FUNC(sub_8241F6CC);
PPC_FUNC_IMPL(__imp__sub_8241F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F6D0"))) PPC_WEAK_FUNC(sub_8241F6D0);
PPC_FUNC_IMPL(__imp__sub_8241F6D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F6D8"))) PPC_WEAK_FUNC(sub_8241F6D8);
PPC_FUNC_IMPL(__imp__sub_8241F6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8241f744
	if (!cr6.gt) goto loc_8241F744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,9080
	ctx.r8.s64 = ctx.r10.s64 + 9080;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x8241F734;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241F744:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F758"))) PPC_WEAK_FUNC(sub_8241F758);
PPC_FUNC_IMPL(__imp__sub_8241F758) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8241f798
	if (cr6.lt) goto loc_8241F798;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8241f6d8
	ctx.lr = 0x8241F78C;
	sub_8241F6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241f7c0
	if (cr6.eq) goto loc_8241F7C0;
loc_8241F798:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241f7b4
	if (cr0.eq) goto loc_8241F7B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825743b0
	ctx.lr = 0x8241F7B4;
	sub_825743B0(ctx, base);
loc_8241F7B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8241F7C0:
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

__attribute__((alias("__imp__sub_8241F7DC"))) PPC_WEAK_FUNC(sub_8241F7DC);
PPC_FUNC_IMPL(__imp__sub_8241F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F7E0"))) PPC_WEAK_FUNC(sub_8241F7E0);
PPC_FUNC_IMPL(__imp__sub_8241F7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241F7E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,9080
	ctx.r10.s64 = ctx.r11.s64 + 9080;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x8241F82C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x8241f854
	if (cr6.eq) goto loc_8241F854;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8241F84C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8241F854:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F85C"))) PPC_WEAK_FUNC(sub_8241F85C);
PPC_FUNC_IMPL(__imp__sub_8241F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F860"))) PPC_WEAK_FUNC(sub_8241F860);
PPC_FUNC_IMPL(__imp__sub_8241F860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8241F868;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8241f7e0
	ctx.lr = 0x8241F87C;
	sub_8241F7E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x8241F884;
	sub_8252E3C0(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r26,r10,r3
	ctx.r26.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x8241f948
	if (cr6.eq) goto loc_8241F948;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
loc_8241F8A8:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, xer);
	// bne cr6,0x8241f93c
	if (!cr6.eq) goto loc_8241F93C;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574880
	ctx.lr = 0x8241F8CC;
	sub_82574880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825743b0
	ctx.lr = 0x8241F8D8;
	sub_825743B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8241f900
	if (cr6.lt) goto loc_8241F900;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f6d8
	ctx.lr = 0x8241F8F4;
	sub_8241F6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241f928
	if (cr6.eq) goto loc_8241F928;
loc_8241F900:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241f91c
	if (cr0.eq) goto loc_8241F91C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825743b0
	ctx.lr = 0x8241F91C;
	sub_825743B0(ctx, base);
loc_8241F91C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8241F928:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8241F930;
	sub_82573C50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x8241F938;
	sub_82573C50(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
loc_8241F93C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// bne cr6,0x8241f8a8
	if (!cr6.eq) goto loc_8241F8A8;
loc_8241F948:
	// subf r6,r11,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574880
	ctx.lr = 0x8241F95C;
	sub_82574880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825743b0
	ctx.lr = 0x8241F968;
	sub_825743B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8241f9e8
	if (cr6.lt) goto loc_8241F9E8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8241f9d8
	if (!cr6.gt) goto loc_8241F9D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r9,r11,9080
	ctx.r9.s64 = ctx.r11.s64 + 9080;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8247b270
	ctx.lr = 0x8241F9C8;
	sub_8247B270(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r6,8980
	ctx.r5.s64 = ctx.r6.s64 + 8980;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x8241f9dc
	goto loc_8241F9DC;
loc_8241F9D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8241F9DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241fa10
	if (cr6.eq) goto loc_8241FA10;
loc_8241F9E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241fa04
	if (cr0.eq) goto loc_8241FA04;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825743b0
	ctx.lr = 0x8241FA04;
	sub_825743B0(ctx, base);
loc_8241FA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8241FA10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x8241FA18;
	sub_82573C50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x8241FA20;
	sub_82573C50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FA28"))) PPC_WEAK_FUNC(sub_8241FA28);
PPC_FUNC_IMPL(__imp__sub_8241FA28) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82560178
	ctx.lr = 0x8241FA58;
	sub_82560178(ctx, base);
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

__attribute__((alias("__imp__sub_8241FA70"))) PPC_WEAK_FUNC(sub_8241FA70);
PPC_FUNC_IMPL(__imp__sub_8241FA70) {
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
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82560178
	ctx.lr = 0x8241FA94;
	sub_82560178(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82560840
	ctx.lr = 0x8241FAA0;
	sub_82560840(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241FACC"))) PPC_WEAK_FUNC(sub_8241FACC);
PPC_FUNC_IMPL(__imp__sub_8241FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FAD0"))) PPC_WEAK_FUNC(sub_8241FAD0);
PPC_FUNC_IMPL(__imp__sub_8241FAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,40856
	ctx.r8.u64 = ctx.r11.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// beq cr6,0x8241faf8
	if (cr6.eq) goto loc_8241FAF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241FAF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241FB00"))) PPC_WEAK_FUNC(sub_8241FB00);
PPC_FUNC_IMPL(__imp__sub_8241FB00) {
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
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,40856
	ctx.r8.u64 = ctx.r11.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// beq cr6,0x8241fb3c
	if (cr6.eq) goto loc_8241FB3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241FB3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8241fb6c
	if (!cr6.eq) goto loc_8241FB6C;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241fb60
	if (!cr6.eq) goto loc_8241FB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82560940
	ctx.lr = 0x8241FB60;
	sub_82560940(ctx, base);
loc_8241FB60:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82560840
	ctx.lr = 0x8241FB6C;
	sub_82560840(ctx, base);
loc_8241FB6C:
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

__attribute__((alias("__imp__sub_8241FB80"))) PPC_WEAK_FUNC(sub_8241FB80);
PPC_FUNC_IMPL(__imp__sub_8241FB80) {
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
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// lwz r11,696(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 696);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241fbf8
	if (!cr6.eq) goto loc_8241FBF8;
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r10,-16618
	ctx.r10.s64 = -1089077248;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,40856
	ctx.r10.u64 = ctx.r10.u64 | 40856;
	// ori r6,r8,47264
	ctx.r6.u64 = ctx.r8.u64 | 47264;
	// stw r11,696(r9)
	PPC_STORE_U32(ctx.r9.u32 + 696, ctx.r11.u32);
	// addi r31,r7,680
	ctx.r31.s64 = ctx.r7.s64 + 680;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r10,680(r7)
	PPC_STORE_U64(ctx.r7.u32 + 680, ctx.r10.u64);
	// lis r5,-31793
	ctx.r5.s64 = -2083586048;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r5,4712
	ctx.r3.s64 = ctx.r5.s64 + 4712;
	// bl 0x831cdcc8
	ctx.lr = 0x8241FBE0;
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
loc_8241FBF8:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,680
	ctx.r3.s64 = ctx.r11.s64 + 680;
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

__attribute__((alias("__imp__sub_8241FC14"))) PPC_WEAK_FUNC(sub_8241FC14);
PPC_FUNC_IMPL(__imp__sub_8241FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FC18"))) PPC_WEAK_FUNC(sub_8241FC18);
PPC_FUNC_IMPL(__imp__sub_8241FC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241FC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241fc60
	if (cr6.eq) goto loc_8241FC60;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8241fc60
	if (cr6.lt) goto loc_8241FC60;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8241fc58
	if (cr6.eq) goto loc_8241FC58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8241FC58;
	sub_831CE980(ctx, base);
loc_8241FC58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8386d088
	ctx.lr = 0x8241FC60;
	sub_8386D088(ctx, base);
loc_8241FC60:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FC7C"))) PPC_WEAK_FUNC(sub_8241FC7C);
PPC_FUNC_IMPL(__imp__sub_8241FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FC80"))) PPC_WEAK_FUNC(sub_8241FC80);
PPC_FUNC_IMPL(__imp__sub_8241FC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241FC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241fccc
	if (cr6.eq) goto loc_8241FCCC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8241fccc
	if (cr6.lt) goto loc_8241FCCC;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8241fcc4
	if (cr6.eq) goto loc_8241FCC4;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8241FCC4;
	sub_831CE980(ctx, base);
loc_8241FCC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8386d088
	ctx.lr = 0x8241FCCC;
	sub_8386D088(ctx, base);
loc_8241FCCC:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FCEC"))) PPC_WEAK_FUNC(sub_8241FCEC);
PPC_FUNC_IMPL(__imp__sub_8241FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FCF0"))) PPC_WEAK_FUNC(sub_8241FCF0);
PPC_FUNC_IMPL(__imp__sub_8241FCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8241FCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-2
	ctx.r9.s64 = -2;
	// ori r31,r4,15
	ctx.r31.u64 = ctx.r4.u64 | 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x8241fd1c
	if (!cr6.gt) goto loc_8241FD1C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8241fd48
	goto loc_8241FD48;
loc_8241FD1C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r7,r31,r8
	ctx.r7.u32 = PPCDivide(ctx.r31.u32, ctx.r8.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x8241fd48
	if (!cr6.gt) goto loc_8241FD48;
	// subfic r8,r10,-2
	xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r8.s64 = -2 - ctx.r10.s64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8241fd48
	if (!cr6.gt) goto loc_8241FD48;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_8241FD48:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x82534518
	ctx.lr = 0x8241FD50;
	sub_82534518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8241fd80
	if (cr6.eq) goto loc_8241FD80;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8241fd70
	if (cr6.lt) goto loc_8241FD70;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8241fd74
	goto loc_8241FD74;
loc_8241FD70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8241FD74:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8241FD80;
	sub_831CE980(ctx, base);
loc_8241FD80:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8241fd94
	if (cr6.lt) goto loc_8241FD94;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8241FD94;
	sub_8386D088(ctx, base);
loc_8241FD94:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// blt cr6,0x8241fdbc
	if (cr6.lt) goto loc_8241FDBC;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8241FDBC:
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FDC8"))) PPC_WEAK_FUNC(sub_8241FDC8);
PPC_FUNC_IMPL(__imp__sub_8241FDC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82560548
	ctx.lr = 0x8241FDF8;
	sub_82560548(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241fe28
	if (!cr6.eq) goto loc_8241FE28;
	// bl 0x8241fb80
	ctx.lr = 0x8241FE08;
	sub_8241FB80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82560178
	ctx.lr = 0x8241FE24;
	sub_82560178(ctx, base);
	// b 0x8241fe40
	goto loc_8241FE40;
loc_8241FE28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8241FE40:
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

__attribute__((alias("__imp__sub_8241FE5C"))) PPC_WEAK_FUNC(sub_8241FE5C);
PPC_FUNC_IMPL(__imp__sub_8241FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FE60"))) PPC_WEAK_FUNC(sub_8241FE60);
PPC_FUNC_IMPL(__imp__sub_8241FE60) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8241fe88
	if (cr6.lt) goto loc_8241FE88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8241FE88;
	sub_8386D088(ctx, base);
loc_8241FE88:
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

__attribute__((alias("__imp__sub_8241FEB0"))) PPC_WEAK_FUNC(sub_8241FEB0);
PPC_FUNC_IMPL(__imp__sub_8241FEB0) {
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
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x8241fedc
	if (!cr6.gt) goto loc_8241FEDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x8241FEDC;
	sub_831CC150(ctx, base);
loc_8241FEDC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x8241fef8
	if (!cr6.lt) goto loc_8241FEF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8241fcf0
	ctx.lr = 0x8241FEF4;
	sub_8241FCF0(ctx, base);
	// b 0x8241ff4c
	goto loc_8241FF4C;
loc_8241FEF8:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8241ff2c
	if (cr6.eq) goto loc_8241FF2C;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8241ff2c
	if (!cr6.lt) goto loc_8241FF2C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8241ff1c
	if (!cr6.lt) goto loc_8241FF1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8241FF1C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241fc18
	ctx.lr = 0x8241FF28;
	sub_8241FC18(ctx, base);
	// b 0x8241ff4c
	goto loc_8241FF4C;
loc_8241FF2C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8241ff4c
	if (!cr6.eq) goto loc_8241FF4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blt cr6,0x8241ff48
	if (cr6.lt) goto loc_8241FF48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8241FF48:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_8241FF4C:
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
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

__attribute__((alias("__imp__sub_8241FF6C"))) PPC_WEAK_FUNC(sub_8241FF6C);
PPC_FUNC_IMPL(__imp__sub_8241FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FF70"))) PPC_WEAK_FUNC(sub_8241FF70);
PPC_FUNC_IMPL(__imp__sub_8241FF70) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8241ff98
	if (cr6.lt) goto loc_8241FF98;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8241FF98;
	sub_8386D088(ctx, base);
loc_8241FF98:
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

__attribute__((alias("__imp__sub_8241FFC0"))) PPC_WEAK_FUNC(sub_8241FFC0);
PPC_FUNC_IMPL(__imp__sub_8241FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8241FFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8241ffe8
	if (cr6.lt) goto loc_8241FFE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8241FFE8;
	sub_8386D088(ctx, base);
loc_8241FFE8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82420014
	if (cr6.lt) goto loc_82420014;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82420014;
	sub_8386D088(ctx, base);
loc_82420014:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242002C"))) PPC_WEAK_FUNC(sub_8242002C);
PPC_FUNC_IMPL(__imp__sub_8242002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420030"))) PPC_WEAK_FUNC(sub_82420030);
PPC_FUNC_IMPL(__imp__sub_82420030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82420038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82420054
	if (cr6.lt) goto loc_82420054;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82420054:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576848
	ctx.lr = 0x82420060;
	sub_82576848(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82420068;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82420084;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x8242008C;
	sub_82576CB0(ctx, base);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// stb r30,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r30.u16);
	// sth r30,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824200A8"))) PPC_WEAK_FUNC(sub_824200A8);
PPC_FUNC_IMPL(__imp__sub_824200A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824200B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x824200d4
	if (cr6.lt) goto loc_824200D4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824200D4;
	sub_8386D088(ctx, base);
loc_824200D4:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,7
	ctx.r27.s64 = 7;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420100
	if (cr6.lt) goto loc_82420100;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82420100;
	sub_8386D088(ctx, base);
loc_82420100:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82420128
	if (cr6.lt) goto loc_82420128;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82420128;
	sub_8386D088(ctx, base);
loc_82420128:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8242014c
	if (cr6.lt) goto loc_8242014C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8242014C;
	sub_8386D088(ctx, base);
loc_8242014C:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420160"))) PPC_WEAK_FUNC(sub_82420160);
PPC_FUNC_IMPL(__imp__sub_82420160) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82420030
	ctx.lr = 0x82420188;
	sub_82420030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82563b18
	ctx.lr = 0x82420198;
	sub_82563B18(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x824201ac
	if (!cr6.lt) goto loc_824201AC;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_824201AC:
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x824201c4
	if (!cr6.eq) goto loc_824201C4;
	// bl 0x82575868
	ctx.lr = 0x824201C0;
	sub_82575868(ctx, base);
	// b 0x824201c8
	goto loc_824201C8;
loc_824201C4:
	// bl 0x825764f8
	ctx.lr = 0x824201C8;
	sub_825764F8(ctx, base);
loc_824201C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x824200a8
	ctx.lr = 0x824201D8;
	sub_824200A8(ctx, base);
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

__attribute__((alias("__imp__sub_824201F0"))) PPC_WEAK_FUNC(sub_824201F0);
PPC_FUNC_IMPL(__imp__sub_824201F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8247c6d8
	ctx.lr = 0x82420210;
	sub_8247C6D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825767c8
	ctx.lr = 0x8242021C;
	sub_825767C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82560df0
	ctx.lr = 0x82420228;
	sub_82560DF0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420240
	if (cr6.lt) goto loc_82420240;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82420240;
	sub_8386D088(ctx, base);
loc_82420240:
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

__attribute__((alias("__imp__sub_82420258"))) PPC_WEAK_FUNC(sub_82420258);
PPC_FUNC_IMPL(__imp__sub_82420258) {
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
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,40856
	ctx.r8.u64 = ctx.r11.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// beq cr6,0x82420294
	if (cr6.eq) goto loc_82420294;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82420294:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824202b4
	if (cr6.eq) goto loc_824202B4;
	// bl 0x82576c28
	ctx.lr = 0x824202A4;
	sub_82576C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825767c8
	ctx.lr = 0x824202B0;
	sub_825767C8(ctx, base);
	// b 0x824202e4
	goto loc_824202E4;
loc_824202B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82561238
	ctx.lr = 0x824202C4;
	sub_82561238(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825767c8
	ctx.lr = 0x824202D0;
	sub_825767C8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824202e4
	if (cr6.lt) goto loc_824202E4;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x824202E4;
	sub_8386D088(ctx, base);
loc_824202E4:
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

__attribute__((alias("__imp__sub_824202FC"))) PPC_WEAK_FUNC(sub_824202FC);
PPC_FUNC_IMPL(__imp__sub_824202FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420300"))) PPC_WEAK_FUNC(sub_82420300);
PPC_FUNC_IMPL(__imp__sub_82420300) {
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
	// bl 0x82420258
	ctx.lr = 0x82420318;
	sub_82420258(ctx, base);
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

__attribute__((alias("__imp__sub_82420330"))) PPC_WEAK_FUNC(sub_82420330);
PPC_FUNC_IMPL(__imp__sub_82420330) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x8242034C;
	sub_82420258(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// blt cr6,0x82420364
	if (cr6.lt) goto loc_82420364;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82420364;
	sub_8386D088(ctx, base);
loc_82420364:
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

__attribute__((alias("__imp__sub_8242037C"))) PPC_WEAK_FUNC(sub_8242037C);
PPC_FUNC_IMPL(__imp__sub_8242037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420380"))) PPC_WEAK_FUNC(sub_82420380);
PPC_FUNC_IMPL(__imp__sub_82420380) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x8242039C;
	sub_82420258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x824203A8;
	sub_8241F100(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824203bc
	if (cr6.lt) goto loc_824203BC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x824203BC;
	sub_8386D088(ctx, base);
loc_824203BC:
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

__attribute__((alias("__imp__sub_824203D4"))) PPC_WEAK_FUNC(sub_824203D4);
PPC_FUNC_IMPL(__imp__sub_824203D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824203D8"))) PPC_WEAK_FUNC(sub_824203D8);
PPC_FUNC_IMPL(__imp__sub_824203D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x824203F4;
	sub_82420258(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82575300
	ctx.lr = 0x824203FC;
	sub_82575300(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// blt cr6,0x82420418
	if (cr6.lt) goto loc_82420418;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82420418;
	sub_8386D088(ctx, base);
loc_82420418:
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

__attribute__((alias("__imp__sub_82420430"))) PPC_WEAK_FUNC(sub_82420430);
PPC_FUNC_IMPL(__imp__sub_82420430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82420438;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x82420448;
	sub_82420258(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bge cr6,0x8242045c
	if (!cr6.lt) goto loc_8242045C;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
loc_8242045C:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ceef0
	ctx.lr = 0x82420468;
	sub_831CEEF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,46
	ctx.r4.s64 = 46;
	// beq cr6,0x824204ec
	if (cr6.eq) goto loc_824204EC;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82420484;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824204cc
	if (cr6.eq) goto loc_824204CC;
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// subf r6,r30,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576d18
	ctx.lr = 0x824204A4;
	sub_82576D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x824204B0;
	sub_8241F100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x824204B8;
	sub_8241FF70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x824204C0;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824204CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f0a0
	ctx.lr = 0x824204D8;
	sub_8241F0A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x824204E0;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824204EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x824204F4;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82420538
	if (cr6.eq) goto loc_82420538;
	// subf r6,r28,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r28.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576d18
	ctx.lr = 0x82420510;
	sub_82576D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x8242051C;
	sub_8241F100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x82420524;
	sub_8241FF70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x8242052C;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82420538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x82420540;
	sub_8241F100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x82420548;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420554"))) PPC_WEAK_FUNC(sub_82420554);
PPC_FUNC_IMPL(__imp__sub_82420554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420558"))) PPC_WEAK_FUNC(sub_82420558);
PPC_FUNC_IMPL(__imp__sub_82420558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82420560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82420588
	if (!cr6.lt) goto loc_82420588;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82420588;
	sub_831CC188(ctx, base);
loc_82420588:
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// bge cr6,0x82420598
	if (!cr6.lt) goto loc_82420598;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82420598:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x824205cc
	if (!cr6.eq) goto loc_824205CC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x824205B0;
	sub_8246E3E8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x824205C0;
	sub_8246E3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824205CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241feb0
	ctx.lr = 0x824205D8;
	sub_8241FEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8242064c
	if (cr6.eq) goto loc_8242064C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824205f4
	if (cr6.lt) goto loc_824205F4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_824205F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420608
	if (cr6.lt) goto loc_82420608;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8242060c
	goto loc_8242060C;
loc_82420608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8242060C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82420618;
	sub_831CE980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420640
	if (cr6.lt) goto loc_82420640;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82420640:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_8242064C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420658"))) PPC_WEAK_FUNC(sub_82420658);
PPC_FUNC_IMPL(__imp__sub_82420658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82420660;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x824206dc
	if (cr6.eq) goto loc_824206DC;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82420680:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82420258
	ctx.lr = 0x82420690;
	sub_82420258(ctx, base);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82560840
	ctx.lr = 0x8242069C;
	sub_82560840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82560df0
	ctx.lr = 0x824206A8;
	sub_82560DF0(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824206c0
	if (cr6.lt) goto loc_824206C0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x824206C0;
	sub_8386D088(ctx, base);
loc_824206C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// bne cr6,0x82420680
	if (!cr6.eq) goto loc_82420680;
loc_824206DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824206E4"))) PPC_WEAK_FUNC(sub_824206E4);
PPC_FUNC_IMPL(__imp__sub_824206E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824206E8"))) PPC_WEAK_FUNC(sub_824206E8);
PPC_FUNC_IMPL(__imp__sub_824206E8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82420720
	if (!cr6.eq) goto loc_82420720;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x82561620
	ctx.lr = 0x82420720;
	sub_82561620(ctx, base);
loc_82420720:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82560df0
	ctx.lr = 0x8242072C;
	sub_82560DF0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8242074C"))) PPC_WEAK_FUNC(sub_8242074C);
PPC_FUNC_IMPL(__imp__sub_8242074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420750"))) PPC_WEAK_FUNC(sub_82420750);
PPC_FUNC_IMPL(__imp__sub_82420750) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573480
	ctx.lr = 0x8242076C;
	sub_82573480(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8242078c
	if (!cr6.eq) goto loc_8242078C;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x82561620
	ctx.lr = 0x8242078C;
	sub_82561620(ctx, base);
loc_8242078C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82560df0
	ctx.lr = 0x82420798;
	sub_82560DF0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824207b0
	if (cr6.lt) goto loc_824207B0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x824207B0;
	sub_8386D088(ctx, base);
loc_824207B0:
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

__attribute__((alias("__imp__sub_824207C8"))) PPC_WEAK_FUNC(sub_824207C8);
PPC_FUNC_IMPL(__imp__sub_824207C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x824207E8;
	sub_82576848(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82420808
	if (!cr6.eq) goto loc_82420808;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x82561620
	ctx.lr = 0x82420808;
	sub_82561620(ctx, base);
loc_82420808:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82560df0
	ctx.lr = 0x82420814;
	sub_82560DF0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8242082c
	if (cr6.lt) goto loc_8242082C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x8242082C;
	sub_8386D088(ctx, base);
loc_8242082C:
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

__attribute__((alias("__imp__sub_82420844"))) PPC_WEAK_FUNC(sub_82420844);
PPC_FUNC_IMPL(__imp__sub_82420844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420848"))) PPC_WEAK_FUNC(sub_82420848);
PPC_FUNC_IMPL(__imp__sub_82420848) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x82420870;
	sub_82420258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576620
	ctx.lr = 0x8242087C;
	sub_82576620(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82560840
	ctx.lr = 0x82420888;
	sub_82560840(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82560df0
	ctx.lr = 0x82420894;
	sub_82560DF0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824208ac
	if (cr6.lt) goto loc_824208AC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x824208AC;
	sub_8386D088(ctx, base);
loc_824208AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_824208C8"))) PPC_WEAK_FUNC(sub_824208C8);
PPC_FUNC_IMPL(__imp__sub_824208C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824208D0;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82420930
	if (cr6.eq) goto loc_82420930;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x824208fc
	if (cr6.lt) goto loc_824208FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82420900
	goto loc_82420900;
loc_824208FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82420900:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82420930
	if (cr6.lt) goto loc_82420930;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82420918
	if (cr6.lt) goto loc_82420918;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8242091c
	goto loc_8242091C;
loc_82420918:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8242091C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82420934
	if (cr6.gt) goto loc_82420934;
loc_82420930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82420934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82420974
	if (cr6.eq) goto loc_82420974;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420954
	if (cr6.lt) goto loc_82420954;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82420958
	goto loc_82420958;
loc_82420954:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82420958:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x8242096C;
	sub_82420558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82420974:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241feb0
	ctx.lr = 0x82420984;
	sub_8241FEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824209e8
	if (cr6.eq) goto loc_824209E8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824209a4
	if (cr6.lt) goto loc_824209A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x824209a8
	goto loc_824209A8;
loc_824209A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824209A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x824209B4;
	sub_831CE980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824209dc
	if (cr6.lt) goto loc_824209DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_824209DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
loc_824209E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824209F4"))) PPC_WEAK_FUNC(sub_824209F4);
PPC_FUNC_IMPL(__imp__sub_824209F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824209F8"))) PPC_WEAK_FUNC(sub_824209F8);
PPC_FUNC_IMPL(__imp__sub_824209F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_82420A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82420a24
	if (!cr6.eq) goto loc_82420A24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82420A48;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82420A60"))) PPC_WEAK_FUNC(sub_82420A60);
PPC_FUNC_IMPL(__imp__sub_82420A60) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825766d0
	ctx.lr = 0x82420A84;
	sub_825766D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82420ad0
	if (cr6.eq) goto loc_82420AD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824209f8
	ctx.lr = 0x82420A98;
	sub_824209F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825768c0
	ctx.lr = 0x82420AA4;
	sub_825768C0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420ab8
	if (cr6.lt) goto loc_82420AB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82420AB8;
	sub_8386D088(ctx, base);
loc_82420AB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82420b14
	goto loc_82420B14;
loc_82420AD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9116
	ctx.r4.s64 = ctx.r11.s64 + 9116;
	// bl 0x824209f8
	ctx.lr = 0x82420AE0;
	sub_824209F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825768c0
	ctx.lr = 0x82420AEC;
	sub_825768C0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82420b00
	if (cr6.lt) goto loc_82420B00;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82420B00;
	sub_8386D088(ctx, base);
loc_82420B00:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
loc_82420B14:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82420b34
	if (!cr6.eq) goto loc_82420B34;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x82561620
	ctx.lr = 0x82420B34;
	sub_82561620(ctx, base);
loc_82420B34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82560df0
	ctx.lr = 0x82420B40;
	sub_82560DF0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82420b58
	if (cr6.lt) goto loc_82420B58;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82420B58;
	sub_8386D088(ctx, base);
loc_82420B58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82420B74"))) PPC_WEAK_FUNC(sub_82420B74);
PPC_FUNC_IMPL(__imp__sub_82420B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420B78"))) PPC_WEAK_FUNC(sub_82420B78);
PPC_FUNC_IMPL(__imp__sub_82420B78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420a60
	ctx.lr = 0x82420B98;
	sub_82420A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82560178
	ctx.lr = 0x82420BA4;
	sub_82560178(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82560840
	ctx.lr = 0x82420BB0;
	sub_82560840(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8241fb00
	ctx.lr = 0x82420BC8;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82420BE4"))) PPC_WEAK_FUNC(sub_82420BE4);
PPC_FUNC_IMPL(__imp__sub_82420BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BE8"))) PPC_WEAK_FUNC(sub_82420BE8);
PPC_FUNC_IMPL(__imp__sub_82420BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82420BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82560468
	ctx.lr = 0x82420C04;
	sub_82560468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825767c8
	ctx.lr = 0x82420C10;
	sub_825767C8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82420ca0
	if (cr6.eq) goto loc_82420CA0;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82420c30
	if (!cr6.lt) goto loc_82420C30;
	// addi r30,r1,136
	ctx.r30.s64 = ctx.r1.s64 + 136;
loc_82420C30:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceef0
	ctx.lr = 0x82420C3C;
	sub_831CEEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82420c7c
	if (cr6.eq) goto loc_82420C7C;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x82576d18
	ctx.lr = 0x82420C68;
	sub_82576D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x82420C74;
	sub_8241F100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82420d84
	goto loc_82420D84;
loc_82420C7C:
	// bl 0x8241f278
	ctx.lr = 0x82420C80;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x82420C8C;
	sub_8241F130(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x82420C94;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82420CA0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825766d0
	ctx.lr = 0x82420CA8;
	sub_825766D0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82420cd8
	if (cr6.eq) goto loc_82420CD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824209f8
	ctx.lr = 0x82420CC0;
	sub_824209F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825768c0
	ctx.lr = 0x82420CCC;
	sub_825768C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fe60
	ctx.lr = 0x82420CD4;
	sub_8241FE60(ctx, base);
	// b 0x82420cf8
	goto loc_82420CF8;
loc_82420CD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x82420CE4;
	sub_82420258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82576490
	ctx.lr = 0x82420CF0;
	sub_82576490(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x82420CF8;
	sub_8241FF70(ctx, base);
loc_82420CF8:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82420d0c
	if (!cr6.lt) goto loc_82420D0C;
	// addi r29,r1,184
	ctx.r29.s64 = ctx.r1.s64 + 184;
loc_82420D0C:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ceef0
	ctx.lr = 0x82420D18;
	sub_831CEEF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82420d70
	if (cr6.eq) goto loc_82420D70;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x831ceef0
	ctx.lr = 0x82420D2C;
	sub_831CEEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82420d70
	if (!cr6.eq) goto loc_82420D70;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x82576d18
	ctx.lr = 0x82420D58;
	sub_82576D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f100
	ctx.lr = 0x82420D64;
	sub_8241F100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x82420D6C;
	sub_8241FF70(ctx, base);
	// b 0x82420d80
	goto loc_82420D80;
loc_82420D70:
	// bl 0x8241f278
	ctx.lr = 0x82420D74;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f130
	ctx.lr = 0x82420D80;
	sub_8241F130(ctx, base);
loc_82420D80:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_82420D84:
	// bl 0x8241ff70
	ctx.lr = 0x82420D88;
	sub_8241FF70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x82420D90;
	sub_8241FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420D9C"))) PPC_WEAK_FUNC(sub_82420D9C);
PPC_FUNC_IMPL(__imp__sub_82420D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420DA0"))) PPC_WEAK_FUNC(sub_82420DA0);
PPC_FUNC_IMPL(__imp__sub_82420DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bgt cr6,0x82420e64
	if (cr6.gt) goto loc_82420E64;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3520
	ctx.r12.s64 = ctx.r12.s64 + 3520;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82420E24;
	case 1:
		goto loc_82420E24;
	case 2:
		goto loc_82420E2C;
	case 3:
		goto loc_82420E2C;
	case 4:
		goto loc_82420E34;
	case 5:
		goto loc_82420E34;
	case 6:
		goto loc_82420E3C;
	case 7:
		goto loc_82420E3C;
	case 8:
		goto loc_82420E34;
	case 9:
		goto loc_82420E3C;
	case 10:
		goto loc_82420E24;
	case 11:
		goto loc_82420E44;
	case 12:
		goto loc_82420E44;
	case 13:
		goto loc_82420E3C;
	case 14:
		goto loc_82420E44;
	case 15:
		goto loc_82420E44;
	case 16:
		goto loc_82420E44;
	case 17:
		goto loc_82420E4C;
	case 18:
		goto loc_82420E54;
	case 19:
		goto loc_82420E44;
	case 20:
		goto loc_82420E5C;
	case 21:
		goto loc_82420E3C;
	case 22:
		goto loc_82420E54;
	case 23:
		goto loc_82420E54;
	case 24:
		goto loc_82420E44;
	default:
		return;
	}
	// lwz r18,3620(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3620);
	// lwz r18,3620(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3620);
	// lwz r18,3628(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3628);
	// lwz r18,3628(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3628);
	// lwz r18,3636(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3636);
	// lwz r18,3636(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3636);
	// lwz r18,3644(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3644);
	// lwz r18,3644(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3644);
	// lwz r18,3636(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3636);
	// lwz r18,3644(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3644);
	// lwz r18,3620(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3620);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3644(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3644);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3660(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3660);
	// lwz r18,3668(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3668);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
	// lwz r18,3676(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3676);
	// lwz r18,3644(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3644);
	// lwz r18,3668(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3668);
	// lwz r18,3668(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3668);
	// lwz r18,3652(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 3652);
loc_82420E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82420E2C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82420E34:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82420E3C:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82420E44:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82420E4C:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_82420E54:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_82420E5C:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82420E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82420E6C"))) PPC_WEAK_FUNC(sub_82420E6C);
PPC_FUNC_IMPL(__imp__sub_82420E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420E70"))) PPC_WEAK_FUNC(sub_82420E70);
PPC_FUNC_IMPL(__imp__sub_82420E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82420eac
	if (cr6.gt) goto loc_82420EAC;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82420e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82420E94;
	// bdzf 4*cr6+eq,0x82420e9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82420E9C;
	// bne cr6,0x82420ea4
	if (!cr6.eq) goto loc_82420EA4;
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420E94:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420E9C:
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420EA4:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420EAC:
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420EB4"))) PPC_WEAK_FUNC(sub_82420EB4);
PPC_FUNC_IMPL(__imp__sub_82420EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420EB8"))) PPC_WEAK_FUNC(sub_82420EB8);
PPC_FUNC_IMPL(__imp__sub_82420EB8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82420ED4:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x82420f0c
	if (cr6.gt) goto loc_82420F0C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82420f0c
	if (cr6.eq) goto loc_82420F0C;
	// bdz 0x82420ef4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82420EF4;
	// bdz 0x82420efc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82420EFC;
	// b 0x82420f04
	goto loc_82420F04;
loc_82420EF4:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82420f10
	goto loc_82420F10;
loc_82420EFC:
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82420f10
	goto loc_82420F10;
loc_82420F04:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82420f10
	goto loc_82420F10;
loc_82420F0C:
	// li r3,18
	ctx.r3.s64 = 18;
loc_82420F10:
	// bl 0x8247e568
	ctx.lr = 0x82420F14;
	sub_8247E568(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82420F18;
	sub_83102DB0(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFFFFFF;
	// cmpldi cr6,r8,0
	cr6.compare<uint64_t>(ctx.r8.u64, 0, xer);
	// beq cr6,0x82420f38
	if (cr6.eq) goto loc_82420F38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82420F38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82420f6c
	if (!cr6.eq) goto loc_82420F6C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x82420ed4
	if (cr6.lt) goto loc_82420ED4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82420F54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82420F6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82420f54
	goto loc_82420F54;
}

__attribute__((alias("__imp__sub_82420F74"))) PPC_WEAK_FUNC(sub_82420F74);
PPC_FUNC_IMPL(__imp__sub_82420F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420F78"))) PPC_WEAK_FUNC(sub_82420F78);
PPC_FUNC_IMPL(__imp__sub_82420F78) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420eb8
	ctx.lr = 0x82420F9C;
	sub_82420EB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82420FC4"))) PPC_WEAK_FUNC(sub_82420FC4);
PPC_FUNC_IMPL(__imp__sub_82420FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420FC8"))) PPC_WEAK_FUNC(sub_82420FC8);
PPC_FUNC_IMPL(__imp__sub_82420FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82420fe4
	if (cr6.lt) goto loc_82420FE4;
	// beq cr6,0x82420fdc
	if (cr6.eq) goto loc_82420FDC;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420FDC:
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
loc_82420FE4:
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x8247e568
	sub_8247E568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420FEC"))) PPC_WEAK_FUNC(sub_82420FEC);
PPC_FUNC_IMPL(__imp__sub_82420FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420FF0"))) PPC_WEAK_FUNC(sub_82420FF0);
PPC_FUNC_IMPL(__imp__sub_82420FF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82420FFC"))) PPC_WEAK_FUNC(sub_82420FFC);
PPC_FUNC_IMPL(__imp__sub_82420FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421000"))) PPC_WEAK_FUNC(sub_82421000);
PPC_FUNC_IMPL(__imp__sub_82421000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421014"))) PPC_WEAK_FUNC(sub_82421014);
PPC_FUNC_IMPL(__imp__sub_82421014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421018"))) PPC_WEAK_FUNC(sub_82421018);
PPC_FUNC_IMPL(__imp__sub_82421018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421030"))) PPC_WEAK_FUNC(sub_82421030);
PPC_FUNC_IMPL(__imp__sub_82421030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82421038;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82421054:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82421054
	if (!cr6.eq) goto loc_82421054;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8247e568
	ctx.lr = 0x82421078;
	sub_8247E568(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r26,24(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8247e568
	ctx.lr = 0x82421090;
	sub_8247E568(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82421094;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825786c0
	ctx.lr = 0x824210B8;
	sub_825786C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x824210C0;
	sub_83102DB0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824210D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824210E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824210e0
	if (!cr6.eq) goto loc_824210E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8247e568
	ctx.lr = 0x82421104;
	sub_8247E568(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82421128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r25,8(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x8247e568
	ctx.lr = 0x82421138;
	sub_8247E568(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x8242113C;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825786c0
	ctx.lr = 0x82421160;
	sub_825786C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82421168;
	sub_83102DB0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82421188
	if (cr6.eq) goto loc_82421188;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x82421184;
	sub_82573040(ctx, base);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
loc_82421188:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824211a4
	if (cr6.eq) goto loc_824211A4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824211A0;
	sub_82573040(ctx, base);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
loc_824211A4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82421228
	if (cr6.eq) goto loc_82421228;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824211B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824211b8
	if (!cr6.eq) goto loc_824211B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8247e568
	ctx.lr = 0x824211DC;
	sub_8247E568(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r26,24(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8247e568
	ctx.lr = 0x824211F8;
	sub_8247E568(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x824211FC;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825786c0
	ctx.lr = 0x82421220;
	sub_825786C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82421228;
	sub_83102DB0(ctx, base);
loc_82421228:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82421248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421254"))) PPC_WEAK_FUNC(sub_82421254);
PPC_FUNC_IMPL(__imp__sub_82421254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421258"))) PPC_WEAK_FUNC(sub_82421258);
PPC_FUNC_IMPL(__imp__sub_82421258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82421288
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82421288;
	// bdzf 4*cr6+eq,0x8242129c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8242129C;
	// bne cr6,0x824212b0
	if (!cr6.eq) goto loc_824212B0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
loc_82421288:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8242129C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_824212B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824212C4"))) PPC_WEAK_FUNC(sub_824212C4);
PPC_FUNC_IMPL(__imp__sub_824212C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824212C8"))) PPC_WEAK_FUNC(sub_824212C8);
PPC_FUNC_IMPL(__imp__sub_824212C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8242135c
	if (!cr6.eq) goto loc_8242135C;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lis r12,21845
	ctx.r12.s64 = 1431633920;
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r11,r11,0,24,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8242135C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82421380
	if (cr6.lt) goto loc_82421380;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x82421380
	if (!cr6.lt) goto loc_82421380;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82421380:
	// b 0x8241f5e0
	sub_8241F5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421384"))) PPC_WEAK_FUNC(sub_82421384);
PPC_FUNC_IMPL(__imp__sub_82421384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421388"))) PPC_WEAK_FUNC(sub_82421388);
PPC_FUNC_IMPL(__imp__sub_82421388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82421390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82421408
	if (cr6.eq) goto loc_82421408;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824213C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824213c0
	if (!cr6.eq) goto loc_824213C0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573108
	ctx.lr = 0x824213F0;
	sub_82573108(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82421400;
	sub_831CE7D8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82421408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421414"))) PPC_WEAK_FUNC(sub_82421414);
PPC_FUNC_IMPL(__imp__sub_82421414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421418"))) PPC_WEAK_FUNC(sub_82421418);
PPC_FUNC_IMPL(__imp__sub_82421418) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82421434:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82421434
	if (!cr6.eq) goto loc_82421434;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x82421458;
	sub_8241F0D0(ctx, base);
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

__attribute__((alias("__imp__sub_82421470"))) PPC_WEAK_FUNC(sub_82421470);
PPC_FUNC_IMPL(__imp__sub_82421470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// b 0x824212c8
	sub_824212C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421480"))) PPC_WEAK_FUNC(sub_82421480);
PPC_FUNC_IMPL(__imp__sub_82421480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82421488;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r9,r11,9256
	ctx.r9.s64 = ctx.r11.s64 + 9256;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8241f280
	ctx.lr = 0x824214D8;
	sub_8241F280(ctx, base);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r5,r6,4
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFFF;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421514"))) PPC_WEAK_FUNC(sub_82421514);
PPC_FUNC_IMPL(__imp__sub_82421514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421518"))) PPC_WEAK_FUNC(sub_82421518);
PPC_FUNC_IMPL(__imp__sub_82421518) {
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
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82421554
	if (cr6.eq) goto loc_82421554;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82421540:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82421540
	if (!cr6.eq) goto loc_82421540;
	// b 0x8242156c
	goto loc_8242156C;
loc_82421554:
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8242155C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8242155c
	if (!cr6.eq) goto loc_8242155C;
loc_8242156C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x82421580;
	sub_8241F0D0(ctx, base);
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

__attribute__((alias("__imp__sub_82421598"))) PPC_WEAK_FUNC(sub_82421598);
PPC_FUNC_IMPL(__imp__sub_82421598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x824215A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r27,r11,9236
	ctx.r27.s64 = ctx.r11.s64 + 9236;
	// beq cr6,0x82421694
	if (cr6.eq) goto loc_82421694;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578390
	ctx.lr = 0x824215E8;
	sub_82578390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82421690
	if (cr6.eq) goto loc_82421690;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x82421600;
	sub_8241F280(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242161C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// beq cr6,0x82421638
	if (cr6.eq) goto loc_82421638;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82421638:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82421660
	if (cr6.eq) goto loc_82421660;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8242165C;
	sub_82573040(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82421660:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8242167c
	if (cr6.eq) goto loc_8242167C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x82421678;
	sub_82573040(ctx, base);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_8242167C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82421694
	if (cr6.eq) goto loc_82421694;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// b 0x82421694
	goto loc_82421694;
loc_82421690:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82421694:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82421728
	if (cr6.eq) goto loc_82421728;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578390
	ctx.lr = 0x824216B4;
	sub_82578390(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82421728
	if (cr6.eq) goto loc_82421728;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x824216fc
	if (cr6.gt) goto loc_824216FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824216fc
	if (cr6.eq) goto loc_824216FC;
	// bdz 0x824216e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_824216E4;
	// bdz 0x824216ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_824216EC;
	// b 0x824216f4
	goto loc_824216F4;
loc_824216E4:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82421700
	goto loc_82421700;
loc_824216EC:
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82421700
	goto loc_82421700;
loc_824216F4:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82421700
	goto loc_82421700;
loc_824216FC:
	// li r3,18
	ctx.r3.s64 = 18;
loc_82421700:
	// bl 0x8247e568
	ctx.lr = 0x82421704;
	sub_8247E568(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f0a0
	ctx.lr = 0x82421714;
	sub_8241F0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573280
	ctx.lr = 0x82421720;
	sub_82573280(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x82421728;
	sub_82573C50(ctx, base);
loc_82421728:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82421750;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242175C"))) PPC_WEAK_FUNC(sub_8242175C);
PPC_FUNC_IMPL(__imp__sub_8242175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421760"))) PPC_WEAK_FUNC(sub_82421760);
PPC_FUNC_IMPL(__imp__sub_82421760) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9248
	ctx.r4.s64 = ctx.r11.s64 + 9248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241f280
	ctx.lr = 0x82421784;
	sub_8241F280(ctx, base);
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

__attribute__((alias("__imp__sub_8242179C"))) PPC_WEAK_FUNC(sub_8242179C);
PPC_FUNC_IMPL(__imp__sub_8242179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824217A0"))) PPC_WEAK_FUNC(sub_824217A0);
PPC_FUNC_IMPL(__imp__sub_824217A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8242192c
	if (cr6.gt) goto loc_8242192C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6108
	ctx.r12.s64 = ctx.r12.s64 + 6108;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82421810;
	case 1:
		goto loc_82421834;
	case 2:
		goto loc_82421810;
	case 3:
		goto loc_82421834;
	case 4:
		goto loc_82421810;
	case 5:
		goto loc_82421834;
	case 6:
		goto loc_8242185C;
	case 7:
		goto loc_82421880;
	case 8:
		goto loc_824218A8;
	case 9:
		goto loc_824218A8;
	case 10:
		goto loc_824218C8;
	case 11:
		goto loc_824218EC;
	case 12:
		goto loc_8242190C;
	default:
		return;
	}
	// lwz r18,6160(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6160);
	// lwz r18,6196(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6196);
	// lwz r18,6160(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6160);
	// lwz r18,6196(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6196);
	// lwz r18,6160(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6160);
	// lwz r18,6196(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6196);
	// lwz r18,6236(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6236);
	// lwz r18,6272(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6272);
	// lwz r18,6312(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6312);
	// lwz r18,6312(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6312);
	// lwz r18,6344(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6344);
	// lwz r18,6380(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6380);
	// lwz r18,6412(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6412);
loc_82421810:
	// bl 0x8241b8a0
	ctx.lr = 0x82421814;
	sub_8241B8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578a10
	ctx.lr = 0x82421820;
	sub_82578A10(ctx, base);
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
loc_82421834:
	// bl 0x8241b8a0
	ctx.lr = 0x82421838;
	sub_8241B8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82578a78
	ctx.lr = 0x82421848;
	sub_82578A78(ctx, base);
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
loc_8242185C:
	// bl 0x8241b8b0
	ctx.lr = 0x82421860;
	sub_8241B8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578b78
	ctx.lr = 0x8242186C;
	sub_82578B78(ctx, base);
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
loc_82421880:
	// bl 0x8241b8b0
	ctx.lr = 0x82421884;
	sub_8241B8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82578af8
	ctx.lr = 0x82421894;
	sub_82578AF8(ctx, base);
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
loc_824218A8:
	// bl 0x8241b8c0
	ctx.lr = 0x824218AC;
	sub_8241B8C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825789a0
	ctx.lr = 0x824218B4;
	sub_825789A0(ctx, base);
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
loc_824218C8:
	// bl 0x8241a5e0
	ctx.lr = 0x824218CC;
	sub_8241A5E0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578a10
	ctx.lr = 0x824218D8;
	sub_82578A10(ctx, base);
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
loc_824218EC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b8c8
	ctx.lr = 0x824218F8;
	sub_8241B8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578840
	ctx.lr = 0x82421904;
	sub_82578840(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82421928
	goto loc_82421928;
loc_8242190C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b8c8
	ctx.lr = 0x82421918;
	sub_8241B8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578840
	ctx.lr = 0x82421924;
	sub_82578840(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82421928:
	// bl 0x82573c50
	ctx.lr = 0x8242192C;
	sub_82573C50(ctx, base);
loc_8242192C:
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

__attribute__((alias("__imp__sub_82421940"))) PPC_WEAK_FUNC(sub_82421940);
PPC_FUNC_IMPL(__imp__sub_82421940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82421948;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,9324
	ctx.r10.s64 = ctx.r11.s64 + 9324;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x8242198C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x824219b4
	if (cr6.eq) goto loc_824219B4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x824219AC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_824219B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824219BC"))) PPC_WEAK_FUNC(sub_824219BC);
PPC_FUNC_IMPL(__imp__sub_824219BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824219C0"))) PPC_WEAK_FUNC(sub_824219C0);
PPC_FUNC_IMPL(__imp__sub_824219C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824219d4
	if (cr6.eq) goto loc_824219D4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82421388
	sub_82421388(ctx, base);
	return;
loc_824219D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824219DC"))) PPC_WEAK_FUNC(sub_824219DC);
PPC_FUNC_IMPL(__imp__sub_824219DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824219E0"))) PPC_WEAK_FUNC(sub_824219E0);
PPC_FUNC_IMPL(__imp__sub_824219E0) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82421a14
	if (cr6.eq) goto loc_82421A14;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x82421A0C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82421A14:
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

__attribute__((alias("__imp__sub_82421A28"))) PPC_WEAK_FUNC(sub_82421A28);
PPC_FUNC_IMPL(__imp__sub_82421A28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8241f348
	sub_8241F348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421A34"))) PPC_WEAK_FUNC(sub_82421A34);
PPC_FUNC_IMPL(__imp__sub_82421A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

