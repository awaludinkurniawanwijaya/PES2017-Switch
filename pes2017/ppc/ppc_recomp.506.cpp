#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83AA26E8"))) PPC_WEAK_FUNC(sub_83AA26E8);
PPC_FUNC_IMPL(__imp__sub_83AA26E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,-14644
	ctx.r10.s64 = ctx.r11.s64 + -14644;
	// stfs f1,-14644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14644, temp.u32);
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA2704"))) PPC_WEAK_FUNC(sub_83AA2704);
PPC_FUNC_IMPL(__imp__sub_83AA2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA2708"))) PPC_WEAK_FUNC(sub_83AA2708);
PPC_FUNC_IMPL(__imp__sub_83AA2708) {
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
	// bl 0x83a82e68
	ctx.lr = 0x83AA2720;
	sub_83A82E68(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x83aa2770
	if (!cr6.lt) goto loc_83AA2770;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83aa2770
	if (!cr6.gt) goto loc_83AA2770;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// ble cr6,0x83aa2750
	if (!cr6.gt) goto loc_83AA2750;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// ble cr6,0x83aa2770
	if (!cr6.gt) goto loc_83AA2770;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// ble cr6,0x83aa2750
	if (!cr6.gt) goto loc_83AA2750;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bne cr6,0x83aa2770
	if (!cr6.eq) goto loc_83AA2770;
loc_83AA2750:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,27824
	ctx.r10.s64 = ctx.r10.s64 + 27824;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x83aa2774
	goto loc_83AA2774;
loc_83AA2770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA2774:
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

__attribute__((alias("__imp__sub_83AA2788"))) PPC_WEAK_FUNC(sub_83AA2788);
PPC_FUNC_IMPL(__imp__sub_83AA2788) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 * 12;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// bge 0x83aa27c0
	if (!cr0.lt) goto loc_83AA27C0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83AA27C0:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f11,11412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11412);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x83aa27f4
	if (!cr6.gt) goto loc_83AA27F4;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x83aa27f0
	if (!cr6.gt) goto loc_83AA27F0;
	// fsubs f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
loc_83AA27F0:
	// fsubs f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
loc_83AA27F4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x83aa283c
	if (!cr6.lt) goto loc_83AA283C;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83aa2838
	if (!cr6.lt) goto loc_83AA2838;
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
loc_83AA2838:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_83AA283C:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x83aa2884
	if (!cr6.lt) goto loc_83AA2884;
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x83aa2884
	if (cr6.gt) goto loc_83AA2884;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x83aa2868
	if (!cr6.eq) goto loc_83AA2868;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,22688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22688);
	ctx.f0.f64 = double(temp.f32);
loc_83AA2868:
	// fsubs f12,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x83b67c10
	ctx.lr = 0x83AA2880;
	sub_83B67C10(ctx, base);
	// b 0x83aa28c8
	goto loc_83AA28C8;
loc_83AA2884:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x83aa28e0
	if (cr6.gt) goto loc_83AA28E0;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83aa28e0
	if (!cr6.lt) goto loc_83AA28E0;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83aa28b0
	if (!cr6.eq) goto loc_83AA28B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,22688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22688);
	ctx.f0.f64 = double(temp.f32);
loc_83AA28B0:
	// fsubs f12,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x83b67c60
	ctx.lr = 0x83AA28C8;
	sub_83B67C60(ctx, base);
loc_83AA28C8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83aa28e8
	if (!cr6.gt) goto loc_83AA28E8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x83aa28e8
	goto loc_83AA28E8;
loc_83AA28E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
loc_83AA28E8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_83AA2904"))) PPC_WEAK_FUNC(sub_83AA2904);
PPC_FUNC_IMPL(__imp__sub_83AA2904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA2908"))) PPC_WEAK_FUNC(sub_83AA2908);
PPC_FUNC_IMPL(__imp__sub_83AA2908) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA2918"))) PPC_WEAK_FUNC(sub_83AA2918);
PPC_FUNC_IMPL(__imp__sub_83AA2918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,28364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28364);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA2924"))) PPC_WEAK_FUNC(sub_83AA2924);
PPC_FUNC_IMPL(__imp__sub_83AA2924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA2928"))) PPC_WEAK_FUNC(sub_83AA2928);
PPC_FUNC_IMPL(__imp__sub_83AA2928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AA2930;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce750
	ctx.lr = 0x83AA2938;
	__savefpr_18(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r31,r10,27616
	ctx.r31.s64 = ctx.r10.s64 + 27616;
	// beq cr6,0x83aa29d4
	if (cr6.eq) goto loc_83AA29D4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83aa29cc
	if (cr6.eq) goto loc_83AA29CC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83aa29c4
	if (cr6.eq) goto loc_83AA29C4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83aa29bc
	if (cr6.eq) goto loc_83AA29BC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83aa2990
	if (cr6.eq) goto loc_83AA2990;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r31,-660
	ctx.r10.s64 = ctx.r31.s64 + -660;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA2990:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83a82e68
	ctx.lr = 0x83AA2998;
	sub_83A82E68(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83aa29b4
	if (cr6.lt) goto loc_83AA29B4;
	// beq cr6,0x83aa29ac
	if (cr6.eq) goto loc_83AA29AC;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29AC:
	// addi r24,r31,-692
	ctx.r24.s64 = ctx.r31.s64 + -692;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29B4:
	// addi r24,r31,-724
	ctx.r24.s64 = ctx.r31.s64 + -724;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29BC:
	// addi r24,r31,-756
	ctx.r24.s64 = ctx.r31.s64 + -756;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29C4:
	// addi r24,r31,-788
	ctx.r24.s64 = ctx.r31.s64 + -788;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29CC:
	// addi r24,r31,-820
	ctx.r24.s64 = ctx.r31.s64 + -820;
	// b 0x83aa29d8
	goto loc_83AA29D8;
loc_83AA29D4:
	// addi r24,r31,-852
	ctx.r24.s64 = ctx.r31.s64 + -852;
loc_83AA29D8:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83aa2a54
	if (cr6.lt) goto loc_83AA2A54;
	// beq cr6,0x83aa2a34
	if (cr6.eq) goto loc_83AA2A34;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83aa2a24
	if (cr6.lt) goto loc_83AA2A24;
	// bne cr6,0x83aa2a7c
	if (!cr6.eq) goto loc_83AA2A7C;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bge cr6,0x83aa2a80
	if (!cr6.lt) goto loc_83AA2A80;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// blt cr6,0x83aa2a14
	if (cr6.lt) goto loc_83AA2A14;
loc_83AA2A0C:
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A14:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bge cr6,0x83aa2a64
	if (!cr6.lt) goto loc_83AA2A64;
	// addi r31,r31,-104
	ctx.r31.s64 = ctx.r31.s64 + -104;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A24:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83aa2a14
	if (cr6.lt) goto loc_83AA2A14;
	// addi r31,r31,-312
	ctx.r31.s64 = ctx.r31.s64 + -312;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A34:
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// blt cr6,0x83aa2a44
	if (cr6.lt) goto loc_83AA2A44;
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bgt cr6,0x83aa2a0c
	if (cr6.gt) goto loc_83AA2A0C;
loc_83AA2A44:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x83aa2a6c
	if (cr6.lt) goto loc_83AA2A6C;
	// addi r31,r31,-416
	ctx.r31.s64 = ctx.r31.s64 + -416;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A54:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83aa2a6c
	if (cr6.lt) goto loc_83AA2A6C;
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// ble cr6,0x83aa2a6c
	if (!cr6.gt) goto loc_83AA2A6C;
loc_83AA2A64:
	// addi r31,r31,-208
	ctx.r31.s64 = ctx.r31.s64 + -208;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A6C:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83aa2a7c
	if (cr6.lt) goto loc_83AA2A7C;
	// addi r31,r31,-624
	ctx.r31.s64 = ctx.r31.s64 + -624;
	// b 0x83aa2a80
	goto loc_83AA2A80;
loc_83AA2A7C:
	// addi r31,r31,-520
	ctx.r31.s64 = ctx.r31.s64 + -520;
loc_83AA2A80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f27,f31
	cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bge cr6,0x83aa2a98
	if (!cr6.lt) goto loc_83AA2A98;
	// fneg f27,f27
	ctx.f27.u64 = ctx.f27.u64 ^ 0x8000000000000000;
loc_83AA2A98:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f21,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f21.f64 = double(temp.f32);
	// fcmpu cr6,f27,f21
	cr6.compare(ctx.f27.f64, ctx.f21.f64);
	// blt cr6,0x83aa2aac
	if (cr6.lt) goto loc_83AA2AAC;
	// fmr f27,f21
	ctx.f27.f64 = ctx.f21.f64;
loc_83AA2AAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r8,36(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// fsubs f26,f21,f27
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f21.f64 - ctx.f27.f64));
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// frsp f28,f0
	ctx.f28.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f21,f28
	ctx.f0.f64 = double(float(ctx.f21.f64 / ctx.f28.f64));
	// fsqrts f18,f0
	ctx.f18.f64 = double(float(sqrt(ctx.f0.f64)));
	// beq cr6,0x83aa2b00
	if (cr6.eq) goto loc_83AA2B00;
	// lfs f19,36(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f19.f64 = double(temp.f32);
	// fcmpu cr6,f19,f31
	cr6.compare(ctx.f19.f64, ctx.f31.f64);
	// bge cr6,0x83aa2af8
	if (!cr6.lt) goto loc_83AA2AF8;
	// fmr f19,f31
	ctx.f19.f64 = ctx.f31.f64;
	// b 0x83aa2b04
	goto loc_83AA2B04;
loc_83AA2AF8:
	// fcmpu cr6,f19,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f21.f64);
	// ble cr6,0x83aa2b04
	if (!cr6.gt) goto loc_83AA2B04;
loc_83AA2B00:
	// fmr f19,f21
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f21.f64;
loc_83AA2B04:
	// lwz r10,32(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa30c4
	if (cr6.eq) goto loc_83AA30C4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x83aa2fbc
	if (cr6.eq) goto loc_83AA2FBC;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x83aa2dd4
	if (cr6.eq) goto loc_83AA2DD4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x83aa2bfc
	if (cr6.eq) goto loc_83AA2BFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa31b4
	if (!cr6.gt) goto loc_83AA31B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// lfs f28,25948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25948);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-25156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25156);
	ctx.f30.f64 = double(temp.f32);
loc_83AA2B50:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x83aa2708
	ctx.lr = 0x83AA2B58;
	sub_83AA2708(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa31b4
	if (cr0.eq) goto loc_83AA31B4;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x83aa2be4
	if (cr6.eq) goto loc_83AA2BE4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x83aa2be4
	if (cr6.eq) goto loc_83AA2BE4;
	// lfs f0,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83aa2b98
	if (!cr6.lt) goto loc_83AA2B98;
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x83aa2b98
	goto loc_83AA2B98;
loc_83AA2B94:
	// fsubs f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
loc_83AA2B98:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x83aa2b94
	if (cr6.gt) goto loc_83AA2B94;
	// b 0x83aa2ba8
	goto loc_83AA2BA8;
loc_83AA2BA4:
	// fadds f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
loc_83AA2BA8:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x83aa2ba4
	if (cr6.lt) goto loc_83AA2BA4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa2788
	ctx.lr = 0x83AA2BBC;
	sub_83AA2788(ctx, base);
	// fmuls f0,f26,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f18.f64));
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f0,f1,f27,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f0.f64));
	// lfsx f12,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfsx f0,r11,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
loc_83AA2BE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa2b50
	if (cr6.lt) goto loc_83AA2B50;
	// b 0x83aa31b4
	goto loc_83AA31B4;
loc_83AA2BFC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa31b4
	if (!cr6.gt) goto loc_83AA31B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f20,28396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28396);
	ctx.f20.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f22,4332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4332);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f23.f64 = double(temp.f32);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// lfs f24,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,25948(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25948);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,11412(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11412);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f28.f64 = double(temp.f32);
loc_83AA2C44:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa2dbc
	if (cr6.eq) goto loc_83AA2DBC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83aa2dbc
	if (!cr6.gt) goto loc_83AA2DBC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_83AA2C6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa2da4
	if (cr6.eq) goto loc_83AA2DA4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x83aa2c94
	goto loc_83AA2C94;
loc_83AA2C90:
	// fsubs f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
loc_83AA2C94:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x83aa2c90
	if (cr6.gt) goto loc_83AA2C90;
	// b 0x83aa2ca4
	goto loc_83AA2CA4;
loc_83AA2CA0:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_83AA2CA4:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x83aa2ca0
	if (!cr6.gt) goto loc_83AA2CA0;
	// fmadds f30,f0,f19,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f13.f64));
	// b 0x83aa2cb8
	goto loc_83AA2CB8;
loc_83AA2CB4:
	// fsubs f30,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
loc_83AA2CB8:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bgt cr6,0x83aa2cb4
	if (cr6.gt) goto loc_83AA2CB4;
	// b 0x83aa2cc8
	goto loc_83AA2CC8;
loc_83AA2CC4:
	// fadds f30,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
loc_83AA2CC8:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// ble cr6,0x83aa2cc4
	if (!cr6.gt) goto loc_83AA2CC4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa2788
	ctx.lr = 0x83AA2CE0;
	sub_83AA2788(ctx, base);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmr f25,f1
	ctx.f25.f64 = ctx.f1.f64;
	// b 0x83aa2cf4
	goto loc_83AA2CF4;
loc_83AA2CF0:
	// fsubs f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
loc_83AA2CF4:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bgt cr6,0x83aa2cf0
	if (cr6.gt) goto loc_83AA2CF0;
	// b 0x83aa2d04
	goto loc_83AA2D04;
loc_83AA2D00:
	// fadds f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
loc_83AA2D04:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x83aa2d00
	if (!cr6.gt) goto loc_83AA2D00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// b 0x83aa2d28
	goto loc_83AA2D28;
loc_83AA2D24:
	// fsubs f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
loc_83AA2D28:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x83aa2d24
	if (cr6.gt) goto loc_83AA2D24;
	// b 0x83aa2d38
	goto loc_83AA2D38;
loc_83AA2D34:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_83AA2D38:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x83aa2d34
	if (!cr6.gt) goto loc_83AA2D34;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x83aa2d50
	if (!cr6.lt) goto loc_83AA2D50;
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
loc_83AA2D50:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83aa2d5c
	if (!cr6.lt) goto loc_83AA2D5C;
	// fmuls f29,f0,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
loc_83AA2D5C:
	// fmsubs f0,f29,f23,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f23.f64 - ctx.f13.f64));
	// fmuls f1,f0,f22
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// bl 0x83b67c60
	ctx.lr = 0x83AA2D68;
	sub_83B67C60(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x83aa2d7c
	if (cr6.gt) goto loc_83AA2D7C;
	// fmr f0,f21
	ctx.f0.f64 = ctx.f21.f64;
	// b 0x83aa2d88
	goto loc_83AA2D88;
loc_83AA2D7C:
	// fmuls f1,f29,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f20.f64));
	// bl 0x83b67c60
	ctx.lr = 0x83AA2D84;
	sub_83B67C60(ctx, base);
	// fdivs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f30.f64));
loc_83AA2D88:
	// fsubs f13,f21,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f11,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f18,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f18.f64 + ctx.f0.f64));
	// fmadds f0,f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83AA2DA4:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa2c6c
	if (cr6.lt) goto loc_83AA2C6C;
loc_83AA2DBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa2c44
	if (cr6.lt) goto loc_83AA2C44;
	// b 0x83aa31b4
	goto loc_83AA31B4;
loc_83AA2DD4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f29,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,-25156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11412);
	ctx.f13.f64 = double(temp.f32);
	// b 0x83aa2df0
	goto loc_83AA2DF0;
loc_83AA2DEC:
	// fsubs f29,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
loc_83AA2DF0:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x83aa2dec
	if (cr6.gt) goto loc_83AA2DEC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,25948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25948);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aa2e08
	goto loc_83AA2E08;
loc_83AA2E04:
	// fadds f29,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
loc_83AA2E08:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x83aa2e04
	if (!cr6.gt) goto loc_83AA2E04;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa2ebc
	if (!cr6.gt) goto loc_83AA2EBC;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
loc_83AA2E24:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa2ea8
	if (cr6.eq) goto loc_83AA2EA8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83aa2ea8
	if (!cr6.gt) goto loc_83AA2EA8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83AA2E44:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa2e90
	if (cr6.eq) goto loc_83AA2E90;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aa2788
	ctx.lr = 0x83AA2E68;
	sub_83AA2788(ctx, base);
	// addi r11,r1,376
	ctx.r11.s64 = ctx.r1.s64 + 376;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfsx f25,r30,r11
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// bl 0x83aa2788
	ctx.lr = 0x83AA2E84;
	sub_83AA2788(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// fmadds f30,f1,f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f30.f64));
	// stfsx f1,r30,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
loc_83AA2E90:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa2e44
	if (cr6.lt) goto loc_83AA2E44;
loc_83AA2EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa2e24
	if (cr6.lt) goto loc_83AA2E24;
loc_83AA2EBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f19,f0
	cr6.compare(ctx.f19.f64, ctx.f0.f64);
	// blt cr6,0x83aa2f04
	if (cr6.lt) goto loc_83AA2F04;
	// fsubs f13,f19,f0
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fsubs f13,f21,f0
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f1,f13,f28,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// bl 0x83b67c08
	ctx.lr = 0x83AA2EF8;
	sub_83B67C08(ctx, base);
	// fnmsubs f0,f31,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f30.f64 - ctx.f1.f64)));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// b 0x83aa2f08
	goto loc_83AA2F08;
loc_83AA2F04:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f21.f64;
loc_83AA2F08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa31b4
	if (!cr6.gt) goto loc_83AA31B4;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
loc_83AA2F1C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa2fa4
	if (cr6.eq) goto loc_83AA2FA4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83aa2fa4
	if (!cr6.gt) goto loc_83AA2FA4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r25.s64;
loc_83AA2F58:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83aa2f8c
	if (cr6.eq) goto loc_83AA2F8C;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f26,f18
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f18.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f13,f27,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fmadds f13,f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83AA2F8C:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// blt cr6,0x83aa2f58
	if (cr6.lt) goto loc_83AA2F58;
loc_83AA2FA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa2f1c
	if (cr6.lt) goto loc_83AA2F1C;
	// b 0x83aa31b4
	goto loc_83AA31B4;
loc_83AA2FBC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa31b4
	if (!cr6.gt) goto loc_83AA31B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// lfs f29,25948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25948);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-25156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25156);
	ctx.f31.f64 = double(temp.f32);
loc_83AA2FE4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa30ac
	if (cr6.eq) goto loc_83AA30AC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83aa30ac
	if (!cr6.gt) goto loc_83AA30AC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_83AA300C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa3094
	if (cr6.eq) goto loc_83AA3094;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x83aa3034
	goto loc_83AA3034;
loc_83AA3030:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
loc_83AA3034:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83aa3030
	if (cr6.gt) goto loc_83AA3030;
	// b 0x83aa3044
	goto loc_83AA3044;
loc_83AA3040:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_83AA3044:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x83aa3040
	if (!cr6.gt) goto loc_83AA3040;
	// fmadds f1,f0,f19,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f13.f64));
	// b 0x83aa3058
	goto loc_83AA3058;
loc_83AA3054:
	// fsubs f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
loc_83AA3058:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x83aa3054
	if (cr6.gt) goto loc_83AA3054;
	// b 0x83aa3068
	goto loc_83AA3068;
loc_83AA3064:
	// fadds f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
loc_83AA3068:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x83aa3064
	if (!cr6.gt) goto loc_83AA3064;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa2788
	ctx.lr = 0x83AA307C;
	sub_83AA2788(ctx, base);
	// fmuls f0,f26,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f18.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f1,f27,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83AA3094:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa300c
	if (cr6.lt) goto loc_83AA300C;
loc_83AA30AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa2fe4
	if (cr6.lt) goto loc_83AA2FE4;
	// b 0x83aa31b4
	goto loc_83AA31B4;
loc_83AA30C4:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa31b4
	if (!cr6.gt) goto loc_83AA31B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// lfs f28,25948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25948);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-25156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25156);
	ctx.f30.f64 = double(temp.f32);
loc_83AA30EC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa31a0
	if (cr6.eq) goto loc_83AA31A0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83aa31a0
	if (!cr6.gt) goto loc_83AA31A0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_83AA3114:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa3188
	if (cr6.eq) goto loc_83AA3188;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f19,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f19.f64 + ctx.f0.f64));
	// bge cr6,0x83aa314c
	if (!cr6.lt) goto loc_83AA314C;
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x83aa314c
	goto loc_83AA314C;
loc_83AA3148:
	// fsubs f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
loc_83AA314C:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x83aa3148
	if (cr6.gt) goto loc_83AA3148;
	// b 0x83aa315c
	goto loc_83AA315C;
loc_83AA3158:
	// fadds f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
loc_83AA315C:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x83aa3158
	if (cr6.lt) goto loc_83AA3158;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa2788
	ctx.lr = 0x83AA3170;
	sub_83AA2788(ctx, base);
	// fmuls f0,f26,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f18.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f1,f27,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83AA3188:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa3114
	if (cr6.lt) goto loc_83AA3114;
loc_83AA31A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa30ec
	if (cr6.lt) goto loc_83AA30EC;
loc_83AA31B4:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce79c
	ctx.lr = 0x83AA31C0;
	__restfpr_18(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA31C4"))) PPC_WEAK_FUNC(sub_83AA31C4);
PPC_FUNC_IMPL(__imp__sub_83AA31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA31C8"))) PPC_WEAK_FUNC(sub_83AA31C8);
PPC_FUNC_IMPL(__imp__sub_83AA31C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AA31D0;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r8,8
	ctx.r22.s64 = ctx.r8.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA3208;
	sub_831EA7A0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
loc_83AA321C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa3280
	if (cr6.eq) goto loc_83AA3280;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AA323C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bge cr6,0x83aa3274
	if (!cr6.lt) goto loc_83AA3274;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x83aa3274
	if (!cr6.lt) goto loc_83AA3274;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r23
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r23.u32, xer);
	// beq cr6,0x83aa3274
	if (cr6.eq) goto loc_83AA3274;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
loc_83AA3274:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83aa323c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA323C;
loc_83AA3280:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r8,66
	cr6.compare<int32_t>(ctx.r8.s32, 66, xer);
	// blt cr6,0x83aa321c
	if (cr6.lt) goto loc_83AA321C;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// beq cr6,0x83aa33bc
	if (cr6.eq) goto loc_83AA33BC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aa32d8
	if (cr6.eq) goto loc_83AA32D8;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83aa32d8
	if (!cr6.eq) goto loc_83AA32D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa2928
	ctx.lr = 0x83AA32B8;
	sub_83AA2928(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x83aa32d4
	if (!cr6.eq) goto loc_83AA32D4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83aa32d4
	if (!cr6.eq) goto loc_83AA32D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa2008
	ctx.lr = 0x83AA32D4;
	sub_83AA2008(ctx, base);
loc_83AA32D4:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83AA32D8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x83aa32e8
	if (!cr6.eq) goto loc_83AA32E8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aa33bc
	if (cr6.eq) goto loc_83AA33BC;
loc_83AA32E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa33bc
	if (!cr6.gt) goto loc_83AA33BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subf r27,r25,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r25.s64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83AA330C:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// beq cr6,0x83aa3330
	if (cr6.eq) goto loc_83AA3330;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// beq cr6,0x83aa3334
	if (cr6.eq) goto loc_83AA3334;
	// lfsx f29,r27,r31
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// b 0x83aa3334
	goto loc_83AA3334;
loc_83AA3330:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_83AA3334:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aa3350
	if (cr6.eq) goto loc_83AA3350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// beq cr6,0x83aa3354
	if (cr6.eq) goto loc_83AA3354;
	// lfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// b 0x83aa3354
	goto loc_83AA3354;
loc_83AA3350:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_83AA3354:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x83aa3364
	if (!cr6.eq) goto loc_83AA3364;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x83aa33a4
	if (cr6.eq) goto loc_83AA33A4;
loc_83AA3364:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83aa2708
	ctx.lr = 0x83AA336C;
	sub_83AA2708(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa33bc
	if (cr0.eq) goto loc_83AA33BC;
	// lwzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aa33a4
	if (cr6.eq) goto loc_83AA33A4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadds f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// li r26,1
	ctx.r26.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_83AA33A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa330c
	if (cr6.lt) goto loc_83AA330C;
loc_83AA33BC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83aa3408
	if (!cr6.eq) goto loc_83AA3408;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83aa3400
	if (!cr6.gt) goto loc_83AA3400;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r22,-36
	ctx.r10.s64 = ctx.r22.s64 + -36;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_83AA33E0:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83aa3400
	if (!cr6.lt) goto loc_83AA3400;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f0,36(r10)
	ctx.fpscr.disableFlushMode();
	ea = 36 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa33e0
	if (cr6.lt) goto loc_83AA33E0;
loc_83AA3400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa340c
	goto loc_83AA340C;
loc_83AA3408:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AA340C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3420"))) PPC_WEAK_FUNC(sub_83AA3420);
PPC_FUNC_IMPL(__imp__sub_83AA3420) {
	PPC_FUNC_PROLOGUE();
	// b 0x83aa31c8
	sub_83AA31C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3424"))) PPC_WEAK_FUNC(sub_83AA3424);
PPC_FUNC_IMPL(__imp__sub_83AA3424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3428"))) PPC_WEAK_FUNC(sub_83AA3428);
PPC_FUNC_IMPL(__imp__sub_83AA3428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA3430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28368
	ctx.r31.s64 = ctx.r11.s64 + 28368;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,28368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28368);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa3464
	if (cr6.eq) goto loc_83AA3464;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28472
	ctx.r4.s64 = ctx.r11.s64 + 28472;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA3460;
	sub_831EA3F0(ctx, base);
	// b 0x83aa3534
	goto loc_83AA3534;
loc_83AA3464:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA3470;
	sub_831EA7A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r4,-31739
	ctx.r4.s64 = -2080047104;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r30,28372(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28372, ctx.r30.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r9,28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28376, ctx.r9.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83aa352c
	if (!cr6.gt) goto loc_83AA352C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83AA34B0:
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r9,28376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,28376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r9,28376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// bne cr6,0x83aa34e8
	if (!cr6.eq) goto loc_83AA34E8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// b 0x83aa3508
	goto loc_83AA3508;
loc_83AA34E8:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,28376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r9,28376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83AA3508:
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r6,28372(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28372);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// blt cr6,0x83aa34b0
	if (cr6.lt) goto loc_83AA34B0;
loc_83AA352C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83AA3534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA353C"))) PPC_WEAK_FUNC(sub_83AA353C);
PPC_FUNC_IMPL(__imp__sub_83AA353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3540"))) PPC_WEAK_FUNC(sub_83AA3540);
PPC_FUNC_IMPL(__imp__sub_83AA3540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,28372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28372);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA354C"))) PPC_WEAK_FUNC(sub_83AA354C);
PPC_FUNC_IMPL(__imp__sub_83AA354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3550"))) PPC_WEAK_FUNC(sub_83AA3550);
PPC_FUNC_IMPL(__imp__sub_83AA3550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,28380
	ctx.r11.s64 = ctx.r11.s64 + 28380;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3560"))) PPC_WEAK_FUNC(sub_83AA3560);
PPC_FUNC_IMPL(__imp__sub_83AA3560) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa3590
	if (cr6.eq) goto loc_83AA3590;
	// bl 0x83acbdd0
	ctx.lr = 0x83AA358C;
	sub_83ACBDD0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83AA3590:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,28380
	ctx.r11.s64 = ctx.r11.s64 + 28380;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa35ac
	if (!cr6.eq) goto loc_83AA35AC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x83aa35b8
	goto loc_83AA35B8;
loc_83AA35AC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83AA35B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA35E0"))) PPC_WEAK_FUNC(sub_83AA35E0);
PPC_FUNC_IMPL(__imp__sub_83AA35E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AA35E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa3638
	if (cr0.eq) goto loc_83AA3638;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x83aa3634
	if (cr6.eq) goto loc_83AA3634;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x83aa3634
	if (cr6.eq) goto loc_83AA3634;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83aa3674
	goto loc_83AA3674;
loc_83AA3634:
	// li r29,4
	ctx.r29.s64 = 4;
loc_83AA3638:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83acaae8
	ctx.lr = 0x83AA3640;
	sub_83ACAAE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa3650
	if (!cr0.eq) goto loc_83AA3650;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x83aa3674
	goto loc_83AA3674;
loc_83AA3650:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83acc2f8
	ctx.lr = 0x83AA3674;
	sub_83ACC2F8(ctx, base);
loc_83AA3674:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA367C"))) PPC_WEAK_FUNC(sub_83AA367C);
PPC_FUNC_IMPL(__imp__sub_83AA367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3680"))) PPC_WEAK_FUNC(sub_83AA3680);
PPC_FUNC_IMPL(__imp__sub_83AA3680) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,-32768
	ctx.r4.s64 = -32768;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x83acab18
	sub_83ACAB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA369C"))) PPC_WEAK_FUNC(sub_83AA369C);
PPC_FUNC_IMPL(__imp__sub_83AA369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA36A0"))) PPC_WEAK_FUNC(sub_83AA36A0);
PPC_FUNC_IMPL(__imp__sub_83AA36A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r5,-31739
	ctx.r5.s64 = -2080047104;
	// addi r11,r11,28368
	ctx.r11.s64 = ctx.r11.s64 + 28368;
	// lwz r9,28372(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28372);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x83aa36cc
	if (cr6.eq) goto loc_83AA36CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83AA36CC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa3748
	if (cr6.eq) goto loc_83AA3748;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r4,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r9.s64;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// and r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83AA3704:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83aa3748
	if (cr6.eq) goto loc_83AA3748;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x83aa3704
	goto loc_83AA3704;
loc_83AA3748:
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// stw r8,28372(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28372, ctx.r8.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,28376(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28376, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3764"))) PPC_WEAK_FUNC(sub_83AA3764);
PPC_FUNC_IMPL(__imp__sub_83AA3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3768"))) PPC_WEAK_FUNC(sub_83AA3768);
PPC_FUNC_IMPL(__imp__sub_83AA3768) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,28380
	ctx.r11.s64 = ctx.r11.s64 + 28380;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa3808
	if (cr6.eq) goto loc_83AA3808;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// subfic r31,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r31.s64 = 0 - ctx.r10.s64;
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 & ctx.r8.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83acbab8
	ctx.lr = 0x83AA37D0;
	sub_83ACBAB8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x83aa37f0
	if (!cr0.eq) goto loc_83AA37F0;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83aa3560
	ctx.lr = 0x83AA37EC;
	sub_83AA3560(ctx, base);
loc_83AA37EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA37F0:
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
loc_83AA3808:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,28608
	ctx.r4.s64 = ctx.r11.s64 + 28608;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA3818;
	sub_831EA3F0(ctx, base);
	// b 0x83aa37ec
	goto loc_83AA37EC;
}

__attribute__((alias("__imp__sub_83AA381C"))) PPC_WEAK_FUNC(sub_83AA381C);
PPC_FUNC_IMPL(__imp__sub_83AA381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3820"))) PPC_WEAK_FUNC(sub_83AA3820);
PPC_FUNC_IMPL(__imp__sub_83AA3820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA3828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 * 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA3850;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// addi r11,r11,28416
	ctx.r11.s64 = ctx.r11.s64 + 28416;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// addi r9,r31,7
	ctx.r9.s64 = ctx.r31.s64 + 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r4,r9,0,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r30,28392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28392, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r3,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r4,28396(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28396, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83aa3928
	if (!cr6.gt) goto loc_83AA3928;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_83AA38A0:
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x83aa38e0
	if (!cr6.eq) goto loc_83AA38E0;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
	// b 0x83aa3904
	goto loc_83AA3904;
loc_83AA38E0:
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
loc_83AA3904:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r10,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r10.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r10,28392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28392);
	// addi r9,r9,144
	ctx.r9.s64 = ctx.r9.s64 + 144;
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x83aa38a0
	if (cr6.lt) goto loc_83AA38A0;
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
loc_83AA3928:
	// mulli r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 * 144;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83aa39a4
	if (!cr6.gt) goto loc_83AA39A4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83AA3960:
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// bne cr6,0x83aa397c
	if (!cr6.eq) goto loc_83AA397C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83aa398c
	goto loc_83AA398C;
loc_83AA397C:
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AA398C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bdnz 0x83aa3960
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA3960;
	// lwz r10,28392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28392);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83AA39A4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// ble cr6,0x83aa39ec
	if (!cr6.gt) goto loc_83AA39EC;
	// rlwinm r6,r28,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_83AA39C8:
	// lwz r10,28396(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,28392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28392);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83aa39c8
	if (cr6.lt) goto loc_83AA39C8;
loc_83AA39EC:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r8,r28,111
	ctx.r8.s64 = ctx.r28.s64 + 111;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83aa3a30
	if (!cr6.gt) goto loc_83AA3A30;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83AA3A0C:
	// lwz r8,28396(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// stw r9,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r9.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r8,28392(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28392);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83aa3a0c
	if (cr6.lt) goto loc_83AA3A0C;
loc_83AA3A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3A38"))) PPC_WEAK_FUNC(sub_83AA3A38);
PPC_FUNC_IMPL(__imp__sub_83AA3A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,28392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28392);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3A44"))) PPC_WEAK_FUNC(sub_83AA3A44);
PPC_FUNC_IMPL(__imp__sub_83AA3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3A48"))) PPC_WEAK_FUNC(sub_83AA3A48);
PPC_FUNC_IMPL(__imp__sub_83AA3A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3A58"))) PPC_WEAK_FUNC(sub_83AA3A58);
PPC_FUNC_IMPL(__imp__sub_83AA3A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA3A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa3bb8
	if (cr6.eq) goto loc_83AA3BB8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x83a81ee8
	ctx.lr = 0x83AA3AF8;
	sub_83A81EE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83aa3b30
	if (cr6.eq) goto loc_83AA3B30;
	// addi r11,r3,111
	ctx.r11.s64 = ctx.r3.s64 + 111;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r6,6
	ctx.r6.s64 = 6;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x83ab0510
	ctx.lr = 0x83AA3B24;
	sub_83AB0510(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83ac0d00
	ctx.lr = 0x83AA3B30;
	sub_83AC0D00(ctx, base);
loc_83AA3B30:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aa3b54
	if (cr6.eq) goto loc_83AA3B54;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83AA3B40:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83aa3b40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA3B40;
loc_83AA3B54:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r30.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stb r30,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r30.u8);
	// stb r30,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r30.u8);
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
	// stb r30,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r30.u8);
	// stb r30,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r30.u8);
	// stb r30,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// stb r30,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r30.u8);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x831ea798
	ctx.lr = 0x83AA3BAC;
	sub_831EA798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AA3BB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83AA3BB8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,28776
	ctx.r4.s64 = ctx.r11.s64 + 28776;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA3BC8;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa3bb0
	goto loc_83AA3BB0;
}

__attribute__((alias("__imp__sub_83AA3BD0"))) PPC_WEAK_FUNC(sub_83AA3BD0);
PPC_FUNC_IMPL(__imp__sub_83AA3BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA3BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,125(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 125);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83aa3c44
	if (cr6.eq) goto loc_83AA3C44;
	// bl 0x83a81ee8
	ctx.lr = 0x83AA3BF0;
	sub_83A81EE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa3c3c
	if (cr0.eq) goto loc_83AA3C3C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83AA3C00:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lhzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa3c30
	if (cr6.eq) goto loc_83AA3C30;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83aa3c30
	if (!cr0.eq) goto loc_83AA3C30;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83a877f0
	ctx.lr = 0x83AA3C30;
	sub_83A877F0(ctx, base);
loc_83AA3C30:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x83aa3c00
	if (!cr0.eq) goto loc_83AA3C00;
loc_83AA3C3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r11.u8);
loc_83AA3C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3C4C"))) PPC_WEAK_FUNC(sub_83AA3C4C);
PPC_FUNC_IMPL(__imp__sub_83AA3C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3C50"))) PPC_WEAK_FUNC(sub_83AA3C50);
PPC_FUNC_IMPL(__imp__sub_83AA3C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83aa3a58
	ctx.lr = 0x83AA3C6C;
	sub_83AA3A58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa3cd0
	if (cr0.eq) goto loc_83AA3CD0;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// bne cr6,0x83aa3c98
	if (!cr6.eq) goto loc_83AA3C98;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x83aa3ca8
	goto loc_83AA3CA8;
loc_83AA3C98:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA3CA8:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_83AA3CD0:
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

__attribute__((alias("__imp__sub_83AA3CE4"))) PPC_WEAK_FUNC(sub_83AA3CE4);
PPC_FUNC_IMPL(__imp__sub_83AA3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3CE8"))) PPC_WEAK_FUNC(sub_83AA3CE8);
PPC_FUNC_IMPL(__imp__sub_83AA3CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aa3cf8
	if (!cr6.eq) goto loc_83AA3CF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83AA3CF8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,144
	ctx.r9.s64 = 144;
	// lwz r11,28396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28396);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3D1C"))) PPC_WEAK_FUNC(sub_83AA3D1C);
PPC_FUNC_IMPL(__imp__sub_83AA3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3D20"))) PPC_WEAK_FUNC(sub_83AA3D20);
PPC_FUNC_IMPL(__imp__sub_83AA3D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// rlwinm. r11,r3,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa3d30
	if (cr0.eq) goto loc_83AA3D30;
loc_83AA3D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AA3D30:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa3d28
	if (cr0.eq) goto loc_83AA3D28;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// lwz r10,28392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28392);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83aa3d28
	if (!cr6.lt) goto loc_83AA3D28;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 * 144;
	// lwz r11,28396(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28396);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA3D78"))) PPC_WEAK_FUNC(sub_83AA3D78);
PPC_FUNC_IMPL(__imp__sub_83AA3D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA3D80;
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
	// bl 0x83aa7ca0
	ctx.lr = 0x83AA3D94;
	sub_83AA7CA0(ctx, base);
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa3db0
	goto loc_83AA3DB0;
loc_83AA3D9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa3d78
	ctx.lr = 0x83AA3DAC;
	sub_83AA3D78(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA3DB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa3d9c
	if (!cr6.eq) goto loc_83AA3D9C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3DC0"))) PPC_WEAK_FUNC(sub_83AA3DC0);
PPC_FUNC_IMPL(__imp__sub_83AA3DC0) {
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
	// bl 0x83aa76f0
	ctx.lr = 0x83AA3DE0;
	sub_83AA76F0(ctx, base);
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa3df8
	goto loc_83AA3DF8;
loc_83AA3DE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa3dc0
	ctx.lr = 0x83AA3DF4;
	sub_83AA3DC0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA3DF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa3de8
	if (!cr6.eq) goto loc_83AA3DE8;
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

__attribute__((alias("__imp__sub_83AA3E18"))) PPC_WEAK_FUNC(sub_83AA3E18);
PPC_FUNC_IMPL(__imp__sub_83AA3E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA3E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa3e84
	if (cr6.eq) goto loc_83AA3E84;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x83a9c010
	ctx.lr = 0x83AA3E40;
	sub_83A9C010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa3e84
	if (cr0.eq) goto loc_83AA3E84;
	// lbz r11,123(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 123);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa3e84
	if (!cr0.eq) goto loc_83AA3E84;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r9,144
	ctx.r9.s64 = 144;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,28396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28396);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83AA3E84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA3E84:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82927058
	ctx.lr = 0x83AA3E8C;
	sub_82927058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7ca0
	ctx.lr = 0x83AA3EA0;
	sub_83AA7CA0(ctx, base);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x83aa3ebc
	goto loc_83AA3EBC;
loc_83AA3EA8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83acdfa0
	ctx.lr = 0x83AA3EB8;
	sub_83ACDFA0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA3EBC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa3ea8
	if (!cr6.eq) goto loc_83AA3EA8;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa3edc
	goto loc_83AA3EDC;
loc_83AA3ECC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa3e18
	ctx.lr = 0x83AA3ED8;
	sub_83AA3E18(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA3EDC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa3ecc
	if (!cr6.eq) goto loc_83AA3ECC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA3EEC"))) PPC_WEAK_FUNC(sub_83AA3EEC);
PPC_FUNC_IMPL(__imp__sub_83AA3EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA3EF0"))) PPC_WEAK_FUNC(sub_83AA3EF0);
PPC_FUNC_IMPL(__imp__sub_83AA3EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA3EF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa3f68
	if (cr6.eq) goto loc_83AA3F68;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83aa3f68
	if (cr6.eq) goto loc_83AA3F68;
	// bl 0x83ab6c80
	ctx.lr = 0x83AA3F20;
	sub_83AB6C80(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83aa3f68
	if (cr0.eq) goto loc_83AA3F68;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r11,28396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28396);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// stw r29,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r29.u32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x83ab6d20
	ctx.lr = 0x83AA3F64;
	sub_83AB6D20(ctx, base);
	// b 0x83aa4034
	goto loc_83AA4034;
loc_83AA3F68:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6aa0
	ctx.lr = 0x83AA3F7C;
	sub_83AA6AA0(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83aa4034
	if (!cr6.gt) goto loc_83AA4034;
loc_83AA3F8C:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa4024
	if (cr6.eq) goto loc_83AA4024;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bne cr6,0x83aa3fac
	if (!cr6.eq) goto loc_83AA3FAC;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_83AA3FAC:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x83aa4024
	if (cr6.eq) goto loc_83AA4024;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aa6aa0
	ctx.lr = 0x83AA3FD4;
	sub_83AA6AA0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aa3ef0
	ctx.lr = 0x83AA3FE4;
	sub_83AA3EF0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa3ff8
	if (!cr6.eq) goto loc_83AA3FF8;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x83aa4004
	goto loc_83AA4004;
loc_83AA3FF8:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA4004:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// blt cr6,0x83aa3f8c
	if (cr6.lt) goto loc_83AA3F8C;
	// b 0x83aa4034
	goto loc_83AA4034;
loc_83AA4024:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28872
	ctx.r4.s64 = ctx.r11.s64 + 28872;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA4034;
	sub_831EA3F0(ctx, base);
loc_83AA4034:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA403C"))) PPC_WEAK_FUNC(sub_83AA403C);
PPC_FUNC_IMPL(__imp__sub_83AA403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4040"))) PPC_WEAK_FUNC(sub_83AA4040);
PPC_FUNC_IMPL(__imp__sub_83AA4040) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa4098
	if (!cr0.eq) goto loc_83AA4098;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83aaed68
	ctx.lr = 0x83AA4074;
	sub_83AAED68(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83aae588
	ctx.lr = 0x83AA4080;
	sub_83AAE588(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83ac0d00
	ctx.lr = 0x83AA408C;
	sub_83AC0D00(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aad150
	ctx.lr = 0x83AA4098;
	sub_83AAD150(ctx, base);
loc_83AA4098:
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

__attribute__((alias("__imp__sub_83AA40B4"))) PPC_WEAK_FUNC(sub_83AA40B4);
PPC_FUNC_IMPL(__imp__sub_83AA40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA40B8"))) PPC_WEAK_FUNC(sub_83AA40B8);
PPC_FUNC_IMPL(__imp__sub_83AA40B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x83ab1ef0
	sub_83AB1EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA40C0"))) PPC_WEAK_FUNC(sub_83AA40C0);
PPC_FUNC_IMPL(__imp__sub_83AA40C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA40C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82927058
	ctx.lr = 0x83AA40DC;
	sub_82927058(ctx, base);
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83aa4114
	if (cr6.eq) goto loc_83AA4114;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r30,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83AA40F4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ace068
	ctx.lr = 0x83AA4108;
	sub_83ACE068(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa40f4
	if (!cr6.eq) goto loc_83AA40F4;
loc_83AA4114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA411C"))) PPC_WEAK_FUNC(sub_83AA411C);
PPC_FUNC_IMPL(__imp__sub_83AA411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4120"))) PPC_WEAK_FUNC(sub_83AA4120);
PPC_FUNC_IMPL(__imp__sub_83AA4120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA4128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x83aa42f8
	if (cr6.eq) goto loc_83AA42F8;
	// bl 0x83a81ee8
	ctx.lr = 0x83AA4150;
	sub_83A81EE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83aa41b4
	if (cr6.eq) goto loc_83AA41B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa416c
	if (cr6.eq) goto loc_83AA416C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa42f8
	if (!cr6.eq) goto loc_83AA42F8;
loc_83AA416C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83aa42f8
	if (cr6.eq) goto loc_83AA42F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83AA417C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa41a4
	if (cr6.eq) goto loc_83AA41A4;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aa41a4
	if (!cr0.eq) goto loc_83AA41A4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a877f0
	ctx.lr = 0x83AA41A4;
	sub_83A877F0(ctx, base);
loc_83AA41A4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x83aa417c
	if (!cr0.eq) goto loc_83AA417C;
	// b 0x83aa42f8
	goto loc_83AA42F8;
loc_83AA41B4:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa4284
	if (cr0.eq) goto loc_83AA4284;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aa4284
	if (!cr0.eq) goto loc_83AA4284;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83a9ce00
	ctx.lr = 0x83AA41CC;
	sub_83A9CE00(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83aa4260
	if (!cr6.eq) goto loc_83AA4260;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// beq cr6,0x83aa4260
	if (cr6.eq) goto loc_83AA4260;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83AA41FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa4254
	if (cr6.eq) goto loc_83AA4254;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83aa4240
	if (cr6.eq) goto loc_83AA4240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83AA421C;
	sub_83815CB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa423c
	if (cr0.eq) goto loc_83AA423C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ab7c08
	ctx.lr = 0x83AA4238;
	sub_83AB7C08(ctx, base);
	// b 0x83aa4248
	goto loc_83AA4248;
loc_83AA423C:
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
loc_83AA4240:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a89ad0
	ctx.lr = 0x83AA4248;
	sub_83A89AD0(ctx, base);
loc_83AA4248:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa4254
	if (!cr0.eq) goto loc_83AA4254;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_83AA4254:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x83aa41fc
	if (!cr0.eq) goto loc_83AA41FC;
loc_83AA4260:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83aa4298
	if (!cr6.eq) goto loc_83AA4298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abe470
	ctx.lr = 0x83AA4274;
	sub_83ABE470(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa4298
	if (!cr0.eq) goto loc_83AA4298;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x83aa42f0
	goto loc_83AA42F0;
loc_83AA4284:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aa42f8
	if (!cr0.eq) goto loc_83AA42F8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa42f8
	if (!cr6.eq) goto loc_83AA42F8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83AA4298:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83aa42a8
	if (!cr6.eq) goto loc_83AA42A8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x83aa42f8
	if (cr6.eq) goto loc_83AA42F8;
loc_83AA42A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83aa42e4
	if (cr6.eq) goto loc_83AA42E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83AA42B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa42d8
	if (cr6.eq) goto loc_83AA42D8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83a87538
	ctx.lr = 0x83AA42D8;
	sub_83A87538(ctx, base);
loc_83AA42D8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x83aa42b8
	if (!cr0.eq) goto loc_83AA42B8;
loc_83AA42E4:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x83aa42f8
	if (cr6.eq) goto loc_83AA42F8;
	// li r4,47
	ctx.r4.s64 = 47;
loc_83AA42F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3e18
	ctx.lr = 0x83AA42F8;
	sub_83AA3E18(ctx, base);
loc_83AA42F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA4300"))) PPC_WEAK_FUNC(sub_83AA4300);
PPC_FUNC_IMPL(__imp__sub_83AA4300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA4308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,118(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 118);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa44d4
	if (!cr0.eq) goto loc_83AA44D4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aa4378
	if (cr6.eq) goto loc_83AA4378;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83aa435c
	if (cr6.eq) goto loc_83AA435C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83aa44ac
	if (!cr6.eq) goto loc_83AA44AC;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x83a95bc0
	ctx.lr = 0x83AA434C;
	sub_83A95BC0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aa4394
	goto loc_83AA4394;
loc_83AA435C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83a95bc0
	ctx.lr = 0x83AA4364;
	sub_83A95BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83a96250
	ctx.lr = 0x83AA4374;
	sub_83A96250(ctx, base);
	// b 0x83aa4390
	goto loc_83AA4390;
loc_83AA4378:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83a95bc0
	ctx.lr = 0x83AA4380;
	sub_83A95BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83a961c8
	ctx.lr = 0x83AA4390;
	sub_83A961C8(ctx, base);
loc_83AA4390:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_83AA4394:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa44ac
	if (cr6.eq) goto loc_83AA44AC;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x83aa44ac
	if (cr6.eq) goto loc_83AA44AC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83aa43d0
	if (cr6.eq) goto loc_83AA43D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f82f0
	ctx.lr = 0x83AA43BC;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa44ac
	if (!cr0.eq) goto loc_83AA44AC;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa44ac
	if (!cr6.eq) goto loc_83AA44AC;
loc_83AA43D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4474
	if (cr6.eq) goto loc_83AA4474;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa4414
	if (!cr6.eq) goto loc_83AA4414;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa4460
	if (!cr6.eq) goto loc_83AA4460;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x83aa4460
	goto loc_83AA4460;
loc_83AA4414:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4460
	if (cr6.eq) goto loc_83AA4460;
loc_83AA4420:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aa4438
	if (cr6.eq) goto loc_83AA4438;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa4420
	if (!cr0.eq) goto loc_83AA4420;
loc_83AA4438:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4460
	if (cr6.eq) goto loc_83AA4460;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83aa4460
	if (!cr6.eq) goto loc_83AA4460;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA4460:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AA4474:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// bne cr6,0x83aa448c
	if (!cr6.eq) goto loc_83AA448C;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x83aa4498
	goto loc_83AA4498;
loc_83AA448C:
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA4498:
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_83AA44AC:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa44cc
	goto loc_83AA44CC;
loc_83AA44B4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83aa4300
	ctx.lr = 0x83AA44C8;
	sub_83AA4300(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA44CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa44b4
	if (!cr6.eq) goto loc_83AA44B4;
loc_83AA44D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA44DC"))) PPC_WEAK_FUNC(sub_83AA44DC);
PPC_FUNC_IMPL(__imp__sub_83AA44DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA44E0"))) PPC_WEAK_FUNC(sub_83AA44E0);
PPC_FUNC_IMPL(__imp__sub_83AA44E0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r11,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r11.u8);
	// b 0x83aa450c
	goto loc_83AA450C;
loc_83AA4500:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa44e0
	ctx.lr = 0x83AA4508;
	sub_83AA44E0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA450C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa4500
	if (!cr6.eq) goto loc_83AA4500;
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

__attribute__((alias("__imp__sub_83AA4528"))) PPC_WEAK_FUNC(sub_83AA4528);
PPC_FUNC_IMPL(__imp__sub_83AA4528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4540"))) PPC_WEAK_FUNC(sub_83AA4540);
PPC_FUNC_IMPL(__imp__sub_83AA4540) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,28420
	ctx.r11.s64 = ctx.r11.s64 + 28420;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa45b0
	if (cr6.eq) goto loc_83AA45B0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83AA45A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AA45B0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,28952
	ctx.r4.s64 = ctx.r11.s64 + 28952;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA45C0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa45a0
	goto loc_83AA45A0;
}

__attribute__((alias("__imp__sub_83AA45C8"))) PPC_WEAK_FUNC(sub_83AA45C8);
PPC_FUNC_IMPL(__imp__sub_83AA45C8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// addi r31,r11,28400
	ctx.r31.s64 = ctx.r11.s64 + 28400;
	// lwz r11,28392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28392);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83aa4608
	if (cr6.eq) goto loc_83AA4608;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29120
	ctx.r4.s64 = ctx.r11.s64 + 29120;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA4608;
	sub_831EA3F0(ctx, base);
loc_83AA4608:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x83aa462c
	if (cr6.eq) goto loc_83AA462C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29048
	ctx.r4.s64 = ctx.r11.s64 + 29048;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA4628;
	sub_831EA3F0(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_83AA462C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa469c
	if (cr6.eq) goto loc_83AA469C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_83AA4660:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// beq cr6,0x83aa4698
	if (cr6.eq) goto loc_83AA4698;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// b 0x83aa4660
	goto loc_83AA4660;
loc_83AA4698:
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_83AA469C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4720
	if (cr6.eq) goto loc_83AA4720;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83AA46E4:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x83aa471c
	if (cr6.eq) goto loc_83AA471C;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// b 0x83aa46e4
	goto loc_83AA46E4;
loc_83AA471C:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83AA4720:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r8,28392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28392, ctx.r8.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,28396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28396, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_83AA4748"))) PPC_WEAK_FUNC(sub_83AA4748);
PPC_FUNC_IMPL(__imp__sub_83AA4748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA4750;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa478c
	if (cr6.eq) goto loc_83AA478C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bne cr6,0x83aa477c
	if (!cr6.eq) goto loc_83AA477C;
	// stw r27,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r27.u32);
loc_83AA477C:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_83AA478C:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r26,r10,28420
	ctx.r26.s64 = ctx.r10.s64 + 28420;
	// beq cr6,0x83aa4818
	if (cr6.eq) goto loc_83AA4818;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83AA47A4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa47b8
	if (!cr6.eq) goto loc_83AA47B8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83aa47c8
	goto loc_83AA47C8;
loc_83AA47B8:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_83AA47C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4808
	if (cr6.eq) goto loc_83AA4808;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x83aa47f0
	if (!cr6.eq) goto loc_83AA47F0;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_83AA47F0:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83aa47a4
	if (!cr6.eq) goto loc_83AA47A4;
loc_83AA4808:
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// b 0x83aa4818
	goto loc_83AA4818;
loc_83AA4810:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa4748
	ctx.lr = 0x83AA4818;
	sub_83AA4748(ctx, base);
loc_83AA4818:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4850
	if (cr6.eq) goto loc_83AA4850;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x83aa4838
	if (!cr6.eq) goto loc_83AA4838;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_83AA4838:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bne cr6,0x83aa4810
	if (!cr6.eq) goto loc_83AA4810;
loc_83AA4850:
	// bl 0x83a81ee8
	ctx.lr = 0x83AA4854;
	sub_83A81EE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa4928
	if (cr0.eq) goto loc_83AA4928;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83AA4864:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa491c
	if (cr6.eq) goto loc_83AA491C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aa48b0
	if (!cr0.eq) goto loc_83AA48B0;
	// bl 0x83a87790
	ctx.lr = 0x83AA4884;
	sub_83A87790(ctx, base);
	// lbz r11,125(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa48b0
	if (!cr0.eq) goto loc_83AA48B0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lhzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x83a877f0
	ctx.lr = 0x83AA48B0;
	sub_83A877F0(ctx, base);
loc_83AA48B0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa4910
	if (!cr0.eq) goto loc_83AA4910;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa4910
	if (!cr6.eq) goto loc_83AA4910;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83a9ce00
	ctx.lr = 0x83AA48D0;
	sub_83A9CE00(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83aa4900
	if (cr0.eq) goto loc_83AA4900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83AA48E0;
	sub_83815CB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa4904
	if (cr0.eq) goto loc_83AA4904;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7c20
	ctx.lr = 0x83AA48FC;
	sub_83AB7C20(ctx, base);
	// b 0x83aa4910
	goto loc_83AA4910;
loc_83AA4900:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_83AA4904:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83a89b00
	ctx.lr = 0x83AA4910;
	sub_83A89B00(ctx, base);
loc_83AA4910:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
loc_83AA491C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x83aa4864
	if (!cr0.eq) goto loc_83AA4864;
loc_83AA4928:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa493c
	if (!cr0.eq) goto loc_83AA493C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83ab05b8
	ctx.lr = 0x83AA493C;
	sub_83AB05B8(ctx, base);
loc_83AA493C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa4958
	if (!cr6.eq) goto loc_83AA4958;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4960
	if (cr6.eq) goto loc_83AA4960;
loc_83AA4958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abd7f0
	ctx.lr = 0x83AA4960;
	sub_83ABD7F0(ctx, base);
loc_83AA4960:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4a04
	if (cr6.eq) goto loc_83AA4A04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa49a0
	if (!cr6.eq) goto loc_83AA49A0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa49ec
	if (!cr6.eq) goto loc_83AA49EC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x83aa49ec
	goto loc_83AA49EC;
loc_83AA49A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa49ec
	if (cr6.eq) goto loc_83AA49EC;
loc_83AA49AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aa49c4
	if (cr6.eq) goto loc_83AA49C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa49ac
	if (!cr0.eq) goto loc_83AA49AC;
loc_83AA49C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa49ec
	if (cr6.eq) goto loc_83AA49EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83aa49ec
	if (!cr6.eq) goto loc_83AA49EC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA49EC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
loc_83AA4A04:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa4a18
	if (cr6.eq) goto loc_83AA4A18;
	// bl 0x83ab7200
	ctx.lr = 0x83AA4A14;
	sub_83AB7200(ctx, base);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
loc_83AA4A18:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa4a2c
	if (cr6.eq) goto loc_83AA4A2C;
	// bl 0x83ab5fb8
	ctx.lr = 0x83AA4A28;
	sub_83AB5FB8(ctx, base);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_83AA4A2C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,-16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r11,-16(r26)
	PPC_STORE_U32(ctx.r26.u32 + -16, ctx.r11.u32);
	// bne cr6,0x83aa4a58
	if (!cr6.eq) goto loc_83AA4A58;
	// stw r11,-20(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20, ctx.r11.u32);
	// b 0x83aa4a60
	goto loc_83AA4A60;
loc_83AA4A58:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA4A60:
	// lwz r11,-12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-12(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA4A74"))) PPC_WEAK_FUNC(sub_83AA4A74);
PPC_FUNC_IMPL(__imp__sub_83AA4A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4A78"))) PPC_WEAK_FUNC(sub_83AA4A78);
PPC_FUNC_IMPL(__imp__sub_83AA4A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA4A80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,144
	ctx.r28.s64 = 144;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4ae8
	if (cr6.eq) goto loc_83AA4AE8;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x83a9c010
	ctx.lr = 0x83AA4AAC;
	sub_83A9C010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa4ae8
	if (cr0.eq) goto loc_83AA4AE8;
	// lbz r11,123(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 123);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa4ae8
	if (!cr0.eq) goto loc_83AA4AE8;
	// lwz r11,28396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28396);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lhz r9,34(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// divw r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// or r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83AA4AE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA4AE8:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aa4bb8
	if (!cr6.eq) goto loc_83AA4BB8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4b48
	if (cr6.eq) goto loc_83AA4B48;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83aa4b48
	if (cr6.eq) goto loc_83AA4B48;
	// bl 0x83ab6c80
	ctx.lr = 0x83AA4B0C;
	sub_83AB6C80(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83aa4b48
	if (cr0.eq) goto loc_83AA4B48;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r11,28396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28396);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x83ab6d20
	ctx.lr = 0x83AA4B44;
	sub_83AB6D20(ctx, base);
	// b 0x83aa4c18
	goto loc_83AA4C18;
loc_83AA4B48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa44e0
	ctx.lr = 0x83AA4B50;
	sub_83AA44E0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82927058
	ctx.lr = 0x83AA4B58;
	sub_82927058(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7ca0
	ctx.lr = 0x83AA4B6C;
	sub_83AA7CA0(ctx, base);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x83aa4b88
	goto loc_83AA4B88;
loc_83AA4B74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83acdf60
	ctx.lr = 0x83AA4B84;
	sub_83ACDF60(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA4B88:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa4b74
	if (!cr6.eq) goto loc_83AA4B74;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa4bac
	goto loc_83AA4BAC;
loc_83AA4B98:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa4a78
	ctx.lr = 0x83AA4BA8;
	sub_83AA4A78(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA4BAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa4b98
	if (!cr6.eq) goto loc_83AA4B98;
	// b 0x83aa4bf0
	goto loc_83AA4BF0;
loc_83AA4BB8:
	// bl 0x83ab65c0
	ctx.lr = 0x83AA4BBC;
	sub_83AB65C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7ca0
	ctx.lr = 0x83AA4BCC;
	sub_83AA7CA0(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83aa4be8
	goto loc_83AA4BE8;
loc_83AA4BD4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AA4BE4;
	sub_83AA4A78(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA4BE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa4bd4
	if (!cr6.eq) goto loc_83AA4BD4;
loc_83AA4BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3bd0
	ctx.lr = 0x83AA4BF8;
	sub_83AA3BD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa4c10
	if (!cr6.eq) goto loc_83AA4C10;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa4c18
	if (cr6.eq) goto loc_83AA4C18;
loc_83AA4C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abd7f0
	ctx.lr = 0x83AA4C18;
	sub_83ABD7F0(ctx, base);
loc_83AA4C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA4C20"))) PPC_WEAK_FUNC(sub_83AA4C20);
PPC_FUNC_IMPL(__imp__sub_83AA4C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA4C28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82927058
	ctx.lr = 0x83AA4C44;
	sub_82927058(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83aa4d34
	if (!cr6.gt) goto loc_83AA4D34;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,28420
	ctx.r29.s64 = ctx.r11.s64 + 28420;
loc_83AA4C5C:
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa4d24
	if (cr6.eq) goto loc_83AA4D24;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne cr6,0x83aa4c7c
	if (!cr6.eq) goto loc_83AA4C7C;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
loc_83AA4C7C:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x83aa4d24
	if (cr6.eq) goto loc_83AA4D24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ace0b8
	ctx.lr = 0x83AA4CA0;
	sub_83ACE0B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83aa4ce0
	if (cr6.eq) goto loc_83AA4CE0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83aa4ce0
	if (cr6.eq) goto loc_83AA4CE0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa4cc8
	if (!cr6.eq) goto loc_83AA4CC8;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x83aa4cd0
	goto loc_83AA4CD0;
loc_83AA4CC8:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA4CD0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x83aa4d14
	goto loc_83AA4D14;
loc_83AA4CE0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa4cf8
	if (!cr6.eq) goto loc_83AA4CF8;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// b 0x83aa4d04
	goto loc_83AA4D04;
loc_83AA4CF8:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA4D04:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83AA4D14:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, xer);
	// blt cr6,0x83aa4c5c
	if (cr6.lt) goto loc_83AA4C5C;
	// b 0x83aa4d34
	goto loc_83AA4D34;
loc_83AA4D24:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA4D34;
	sub_831EA3F0(ctx, base);
loc_83AA4D34:
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83aa4e10
	if (!cr6.gt) goto loc_83AA4E10;
loc_83AA4D44:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa4e00
	if (cr6.eq) goto loc_83AA4E00;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bne cr6,0x83aa4d64
	if (!cr6.eq) goto loc_83AA4D64;
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
loc_83AA4D64:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x83aa4e00
	if (cr6.eq) goto loc_83AA4E00;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa5f48
	ctx.lr = 0x83AA4D88;
	sub_83AA5F48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa4c20
	ctx.lr = 0x83AA4D94;
	sub_83AA4C20(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83aa4da4
	if (cr6.eq) goto loc_83AA4DA4;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x83aa4db8
	if (!cr6.eq) goto loc_83AA4DB8;
loc_83AA4DA4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83aa4db8
	if (!cr6.eq) goto loc_83AA4DB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa4748
	ctx.lr = 0x83AA4DB4;
	sub_83AA4748(ctx, base);
	// b 0x83aa4df0
	goto loc_83AA4DF0;
loc_83AA4DB8:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa4dd4
	if (!cr6.eq) goto loc_83AA4DD4;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x83aa4de0
	goto loc_83AA4DE0;
loc_83AA4DD4:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA4DE0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83AA4DF0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83aa4d44
	if (cr6.lt) goto loc_83AA4D44;
	// b 0x83aa4e10
	goto loc_83AA4E10;
loc_83AA4E00:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29192
	ctx.r4.s64 = ctx.r11.s64 + 29192;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA4E10;
	sub_831EA3F0(ctx, base);
loc_83AA4E10:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA4E1C"))) PPC_WEAK_FUNC(sub_83AA4E1C);
PPC_FUNC_IMPL(__imp__sub_83AA4E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4E20"))) PPC_WEAK_FUNC(sub_83AA4E20);
PPC_FUNC_IMPL(__imp__sub_83AA4E20) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,28432
	ctx.r31.s64 = ctx.r11.s64 + 28432;
	// lwz r11,28432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aa4e7c
	if (!cr6.eq) goto loc_83AA4E7C;
	// bl 0x83b67048
	ctx.lr = 0x83AA4E50;
	sub_83B67048(ctx, base);
	// bl 0x83b67078
	ctx.lr = 0x83AA4E54;
	sub_83B67078(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// std r3,-14576(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14576, ctx.r3.u64);
	// bne cr6,0x83aa4e6c
	if (!cr6.eq) goto loc_83AA4E6C;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r10,-14576(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14576, ctx.r10.u64);
loc_83AA4E6C:
	// bl 0x830fe8a0
	ctx.lr = 0x83AA4E70;
	sub_830FE8A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_83AA4E7C:
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

__attribute__((alias("__imp__sub_83AA4E90"))) PPC_WEAK_FUNC(sub_83AA4E90);
PPC_FUNC_IMPL(__imp__sub_83AA4E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,28432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28432);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,28432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28432, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x83b67060
	sub_83B67060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA4EA8"))) PPC_WEAK_FUNC(sub_83AA4EA8);
PPC_FUNC_IMPL(__imp__sub_83AA4EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4EAC"))) PPC_WEAK_FUNC(sub_83AA4EAC);
PPC_FUNC_IMPL(__imp__sub_83AA4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4EB0"))) PPC_WEAK_FUNC(sub_83AA4EB0);
PPC_FUNC_IMPL(__imp__sub_83AA4EB0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,28456
	ctx.r31.s64 = ctx.r11.s64 + 28456;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa4f5c
	if (!cr6.eq) goto loc_83AA4F5C;
	// bl 0x830fe8a0
	ctx.lr = 0x83AA4EF0;
	sub_830FE8A0(ctx, base);
	// ld r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b670b0
	ctx.lr = 0x83AA4F04;
	sub_83B670B0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// addi r9,r11,-14576
	ctx.r9.s64 = ctx.r11.s64 + -14576;
	// ori r10,r10,16960
	ctx.r10.u64 = ctx.r10.u64 | 16960;
	// ld r11,-14576(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14576);
	// mulld r8,r3,r10
	ctx.r8.s64 = ctx.r3.s64 * ctx.r10.s64;
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// tdllei r11,0
	// divdu r11,r8,r11
	ctx.r11.u64 = PPCDivide(ctx.r8.u64, ctx.r11.u64);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x83aa4f34
	if (!cr6.gt) goto loc_83AA4F34;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83AA4F34:
	// ld r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// lwz r9,-20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r30,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r30.u64);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r10,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r10.u64);
	// beq cr6,0x83aa4f5c
	if (cr6.eq) goto loc_83AA4F5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83AA4F5C:
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

__attribute__((alias("__imp__sub_83AA4F74"))) PPC_WEAK_FUNC(sub_83AA4F74);
PPC_FUNC_IMPL(__imp__sub_83AA4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4F78"))) PPC_WEAK_FUNC(sub_83AA4F78);
PPC_FUNC_IMPL(__imp__sub_83AA4F78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,28456(r10)
	PPC_STORE_U64(ctx.r10.u32 + 28456, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4F88"))) PPC_WEAK_FUNC(sub_83AA4F88);
PPC_FUNC_IMPL(__imp__sub_83AA4F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// std r3,-14568(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14568, ctx.r3.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4F94"))) PPC_WEAK_FUNC(sub_83AA4F94);
PPC_FUNC_IMPL(__imp__sub_83AA4F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4F98"))) PPC_WEAK_FUNC(sub_83AA4F98);
PPC_FUNC_IMPL(__imp__sub_83AA4F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// ld r3,28448(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4FA4"))) PPC_WEAK_FUNC(sub_83AA4FA4);
PPC_FUNC_IMPL(__imp__sub_83AA4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4FA8"))) PPC_WEAK_FUNC(sub_83AA4FA8);
PPC_FUNC_IMPL(__imp__sub_83AA4FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// ld r3,28456(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4FB4"))) PPC_WEAK_FUNC(sub_83AA4FB4);
PPC_FUNC_IMPL(__imp__sub_83AA4FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4FB8"))) PPC_WEAK_FUNC(sub_83AA4FB8);
PPC_FUNC_IMPL(__imp__sub_83AA4FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// addi r7,r11,456
	ctx.r7.s64 = ctx.r11.s64 + 456;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA4FF4"))) PPC_WEAK_FUNC(sub_83AA4FF4);
PPC_FUNC_IMPL(__imp__sub_83AA4FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA4FF8"))) PPC_WEAK_FUNC(sub_83AA4FF8);
PPC_FUNC_IMPL(__imp__sub_83AA4FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5004"))) PPC_WEAK_FUNC(sub_83AA5004);
PPC_FUNC_IMPL(__imp__sub_83AA5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA5008"))) PPC_WEAK_FUNC(sub_83AA5008);
PPC_FUNC_IMPL(__imp__sub_83AA5008) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5070
	if (cr6.eq) goto loc_83AA5070;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// bne cr6,0x83aa5044
	if (!cr6.eq) goto loc_83AA5044;
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
loc_83AA5044:
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// beq cr6,0x83aa5070
	if (cr6.eq) goto loc_83AA5070;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x83aa5080
	goto loc_83AA5080;
loc_83AA5070:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,29528
	ctx.r4.s64 = ctx.r11.s64 + 29528;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5080;
	sub_831EA3F0(ctx, base);
loc_83AA5080:
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

__attribute__((alias("__imp__sub_83AA5098"))) PPC_WEAK_FUNC(sub_83AA5098);
PPC_FUNC_IMPL(__imp__sub_83AA5098) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa50f8
	if (cr6.eq) goto loc_83AA50F8;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// bne cr6,0x83aa50d8
	if (!cr6.eq) goto loc_83AA50D8;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_83AA50D8:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// beq cr6,0x83aa50f8
	if (cr6.eq) goto loc_83AA50F8;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83aa5108
	goto loc_83AA5108;
loc_83AA50F8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,29632
	ctx.r4.s64 = ctx.r11.s64 + 29632;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5108;
	sub_831EA3F0(ctx, base);
loc_83AA5108:
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

__attribute__((alias("__imp__sub_83AA5120"))) PPC_WEAK_FUNC(sub_83AA5120);
PPC_FUNC_IMPL(__imp__sub_83AA5120) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5180
	if (cr6.eq) goto loc_83AA5180;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// bne cr6,0x83aa5160
	if (!cr6.eq) goto loc_83AA5160;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
loc_83AA5160:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// beq cr6,0x83aa5180
	if (cr6.eq) goto loc_83AA5180;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83aa5190
	goto loc_83AA5190;
loc_83AA5180:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,29744
	ctx.r4.s64 = ctx.r11.s64 + 29744;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5190;
	sub_831EA3F0(ctx, base);
loc_83AA5190:
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

__attribute__((alias("__imp__sub_83AA51A8"))) PPC_WEAK_FUNC(sub_83AA51A8);
PPC_FUNC_IMPL(__imp__sub_83AA51A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa51c4
	if (!cr6.eq) goto loc_83AA51C4;
	// stw r3,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// b 0x83aa51d4
	goto loc_83AA51D4;
loc_83AA51C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_83AA51D4:
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r3,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA51E8"))) PPC_WEAK_FUNC(sub_83AA51E8);
PPC_FUNC_IMPL(__imp__sub_83AA51E8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,28980
	ctx.r9.s64 = ctx.r11.s64 + 28980;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5274
	if (cr6.eq) goto loc_83AA5274;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// bne cr6,0x83aa5228
	if (!cr6.eq) goto loc_83AA5228;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
loc_83AA5228:
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// beq cr6,0x83aa5274
	if (cr6.eq) goto loc_83AA5274;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r3,55
	ctx.r3.s64 = 55;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83ab0510
	ctx.lr = 0x83AA526C;
	sub_83AB0510(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// b 0x83aa5284
	goto loc_83AA5284;
loc_83AA5274:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5284;
	sub_831EA3F0(ctx, base);
loc_83AA5284:
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

__attribute__((alias("__imp__sub_83AA529C"))) PPC_WEAK_FUNC(sub_83AA529C);
PPC_FUNC_IMPL(__imp__sub_83AA529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA52A0"))) PPC_WEAK_FUNC(sub_83AA52A0);
PPC_FUNC_IMPL(__imp__sub_83AA52A0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5300
	if (cr6.eq) goto loc_83AA5300;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// bne cr6,0x83aa52e0
	if (!cr6.eq) goto loc_83AA52E0;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
loc_83AA52E0:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// beq cr6,0x83aa5300
	if (cr6.eq) goto loc_83AA5300;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83aa5310
	goto loc_83AA5310;
loc_83AA5300:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,29960
	ctx.r4.s64 = ctx.r11.s64 + 29960;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5310;
	sub_831EA3F0(ctx, base);
loc_83AA5310:
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

__attribute__((alias("__imp__sub_83AA5328"))) PPC_WEAK_FUNC(sub_83AA5328);
PPC_FUNC_IMPL(__imp__sub_83AA5328) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa538c
	if (cr6.eq) goto loc_83AA538C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// bne cr6,0x83aa5368
	if (!cr6.eq) goto loc_83AA5368;
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
loc_83AA5368:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// beq cr6,0x83aa538c
	if (cr6.eq) goto loc_83AA538C;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// b 0x83aa539c
	goto loc_83AA539C;
loc_83AA538C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,30072
	ctx.r4.s64 = ctx.r11.s64 + 30072;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA539C;
	sub_831EA3F0(ctx, base);
loc_83AA539C:
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

__attribute__((alias("__imp__sub_83AA53B4"))) PPC_WEAK_FUNC(sub_83AA53B4);
PPC_FUNC_IMPL(__imp__sub_83AA53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA53B8"))) PPC_WEAK_FUNC(sub_83AA53B8);
PPC_FUNC_IMPL(__imp__sub_83AA53B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa53d4
	if (!cr6.eq) goto loc_83AA53D4;
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// b 0x83aa53e4
	goto loc_83AA53E4;
loc_83AA53D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_83AA53E4:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA53F8"))) PPC_WEAK_FUNC(sub_83AA53F8);
PPC_FUNC_IMPL(__imp__sub_83AA53F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5410
	if (cr6.eq) goto loc_83AA5410;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_83AA5410:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5418"))) PPC_WEAK_FUNC(sub_83AA5418);
PPC_FUNC_IMPL(__imp__sub_83AA5418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5430
	if (cr6.eq) goto loc_83AA5430;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
loc_83AA5430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5438"))) PPC_WEAK_FUNC(sub_83AA5438);
PPC_FUNC_IMPL(__imp__sub_83AA5438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5450
	if (cr6.eq) goto loc_83AA5450;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_83AA5450:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5458"))) PPC_WEAK_FUNC(sub_83AA5458);
PPC_FUNC_IMPL(__imp__sub_83AA5458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5470
	if (cr6.eq) goto loc_83AA5470;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
loc_83AA5470:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5478"))) PPC_WEAK_FUNC(sub_83AA5478);
PPC_FUNC_IMPL(__imp__sub_83AA5478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5490
	if (cr6.eq) goto loc_83AA5490;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_83AA5490:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5498"))) PPC_WEAK_FUNC(sub_83AA5498);
PPC_FUNC_IMPL(__imp__sub_83AA5498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa54b0
	if (cr6.eq) goto loc_83AA54B0;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// blr 
	return;
loc_83AA54B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA54B8"))) PPC_WEAK_FUNC(sub_83AA54B8);
PPC_FUNC_IMPL(__imp__sub_83AA54B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// b 0x83aa54f0
	goto loc_83AA54F0;
loc_83AA54C8:
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa54dc
	if (!cr6.eq) goto loc_83AA54DC;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// b 0x83aa54e0
	goto loc_83AA54E0;
loc_83AA54DC:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83AA54E0:
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
loc_83AA54F0:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// bne cr6,0x83aa5510
	if (!cr6.eq) goto loc_83AA5510;
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
loc_83AA5510:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// bne cr6,0x83aa54c8
	if (!cr6.eq) goto loc_83AA54C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA552C"))) PPC_WEAK_FUNC(sub_83AA552C);
PPC_FUNC_IMPL(__imp__sub_83AA552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA5530"))) PPC_WEAK_FUNC(sub_83AA5530);
PPC_FUNC_IMPL(__imp__sub_83AA5530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa5550
	goto loc_83AA5550;
loc_83AA553C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83aa555c
	if (cr6.eq) goto loc_83AA555C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83AA5550:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa553c
	if (!cr6.eq) goto loc_83AA553C;
	// blr 
	return;
loc_83AA555C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5564"))) PPC_WEAK_FUNC(sub_83AA5564);
PPC_FUNC_IMPL(__imp__sub_83AA5564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA5568"))) PPC_WEAK_FUNC(sub_83AA5568);
PPC_FUNC_IMPL(__imp__sub_83AA5568) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa55c4
	if (cr6.eq) goto loc_83AA55C4;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83aa55bc
	goto loc_83AA55BC;
loc_83AA5598:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa55b8
	if (!cr6.eq) goto loc_83AA55B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83AA55B8;
	sub_83AB1EF0(ctx, base);
loc_83AA55B8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA55BC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa5598
	if (!cr6.eq) goto loc_83AA5598;
loc_83AA55C4:
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

__attribute__((alias("__imp__sub_83AA55E0"))) PPC_WEAK_FUNC(sub_83AA55E0);
PPC_FUNC_IMPL(__imp__sub_83AA55E0) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r8,r3,95
	ctx.r8.s64 = ctx.r3.s64 + 95;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// std r30,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r30.u64);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
	// sth r11,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r11.u16);
	// stb r30,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r30.u8);
	// stb r10,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r10.u8);
	// stb r30,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r30.u8);
	// stb r30,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r30.u8);
	// stb r30,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r30.u8);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stb r30,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r30.u8);
	// stb r30,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r30.u8);
	// stb r30,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r30.u8);
	// stb r30,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r30.u8);
loc_83AA5678:
	// stbu r30,16(r8)
	ea = 16 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x83aa5678
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA5678;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r8,9
	ctx.r8.s64 = 9;
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// stb r10,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r10.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r10,262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 262, ctx.r10.u8);
	// stb r10,263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 263, ctx.r10.u8);
	// lfd f0,9000(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9000);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stfd f0,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f0.u64);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// sth r7,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r7.u16);
	// sth r30,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r30.u16);
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// sth r30,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r30.u16);
	// sth r8,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r8.u16);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// sth r30,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r30.u16);
	// beq cr6,0x83aa56d8
	if (cr6.eq) goto loc_83AA56D8;
	// bl 0x83ab05b8
	ctx.lr = 0x83AA56D4;
	sub_83AB05B8(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_83AA56D8:
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

__attribute__((alias("__imp__sub_83AA56F0"))) PPC_WEAK_FUNC(sub_83AA56F0);
PPC_FUNC_IMPL(__imp__sub_83AA56F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA56F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa572c
	if (!cr6.eq) goto loc_83AA572C;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x83aa5798
	goto loc_83AA5798;
loc_83AA572C:
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa578c
	goto loc_83AA578C;
loc_83AA5734:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa5760
	if (!cr6.eq) goto loc_83AA5760;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa56f0
	ctx.lr = 0x83AA5750;
	sub_83AA56F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa5788
	if (cr0.eq) goto loc_83AA5788;
loc_83AA5758:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83aa5798
	goto loc_83AA5798;
loc_83AA5760:
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa577c
	if (cr6.eq) goto loc_83AA577C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa56f0
	ctx.lr = 0x83AA5778;
	sub_83AA56F0(ctx, base);
	// b 0x83aa5780
	goto loc_83AA5780;
loc_83AA577C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA5780:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83aa5758
	if (!cr6.eq) goto loc_83AA5758;
loc_83AA5788:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83AA578C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa5734
	if (!cr6.eq) goto loc_83AA5734;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA5798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA57A0"))) PPC_WEAK_FUNC(sub_83AA57A0);
PPC_FUNC_IMPL(__imp__sub_83AA57A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA57A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa57f0
	if (!cr6.eq) goto loc_83AA57F0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x83aa57e0
	if (!cr6.eq) goto loc_83AA57E0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83AA57E0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83aa57f0
	if (cr6.eq) goto loc_83AA57F0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83AA57F0:
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83aa585c
	goto loc_83AA585C;
loc_83AA57F8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa581c
	if (!cr6.eq) goto loc_83AA581C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa57a0
	ctx.lr = 0x83AA5814;
	sub_83AA57A0(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x83aa5858
	goto loc_83AA5858;
loc_83AA581C:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83aa584c
	goto loc_83AA584C;
loc_83AA5828:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa57a0
	ctx.lr = 0x83AA5838;
	sub_83AA57A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa5854
	if (!cr6.eq) goto loc_83AA5854;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA584C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa5828
	if (!cr6.eq) goto loc_83AA5828;
loc_83AA5854:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_83AA5858:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83AA585C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa57f8
	if (!cr6.eq) goto loc_83AA57F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA5870"))) PPC_WEAK_FUNC(sub_83AA5870);
PPC_FUNC_IMPL(__imp__sub_83AA5870) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aa58d4
	if (cr6.eq) goto loc_83AA58D4;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83aa58c8
	goto loc_83AA58C8;
loc_83AA589C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa58b8
	if (!cr6.eq) goto loc_83AA58B8;
	// bl 0x83aa5870
	ctx.lr = 0x83AA58B4;
	sub_83AA5870(ctx, base);
	// b 0x83aa58bc
	goto loc_83AA58BC;
loc_83AA58B8:
	// bl 0x83aa61b0
	ctx.lr = 0x83AA58BC;
	sub_83AA61B0(ctx, base);
loc_83AA58BC:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa58d4
	if (!cr0.eq) goto loc_83AA58D4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA58C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa589c
	if (!cr6.eq) goto loc_83AA589C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA58D4:
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

__attribute__((alias("__imp__sub_83AA58EC"))) PPC_WEAK_FUNC(sub_83AA58EC);
PPC_FUNC_IMPL(__imp__sub_83AA58EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA58F0"))) PPC_WEAK_FUNC(sub_83AA58F0);
PPC_FUNC_IMPL(__imp__sub_83AA58F0) {
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
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x83aa593c
	goto loc_83AA593C;
loc_83AA5910:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa592c
	if (!cr6.eq) goto loc_83AA592C;
	// bl 0x83aa58f0
	ctx.lr = 0x83AA5928;
	sub_83AA58F0(ctx, base);
	// b 0x83aa5930
	goto loc_83AA5930;
loc_83AA592C:
	// bl 0x83aa6210
	ctx.lr = 0x83AA5930;
	sub_83AA6210(ctx, base);
loc_83AA5930:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa5948
	if (!cr0.eq) goto loc_83AA5948;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA593C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa5910
	if (!cr6.eq) goto loc_83AA5910;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA5948:
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

__attribute__((alias("__imp__sub_83AA5960"))) PPC_WEAK_FUNC(sub_83AA5960);
PPC_FUNC_IMPL(__imp__sub_83AA5960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5978"))) PPC_WEAK_FUNC(sub_83AA5978);
PPC_FUNC_IMPL(__imp__sub_83AA5978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r4,236(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83AA5988:
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5a90
	if (cr6.eq) goto loc_83AA5A90;
	// lhz r10,208(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 208);
loc_83AA599C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,208(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 208);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aa59bc
	if (cr6.eq) goto loc_83AA59BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa599c
	if (!cr6.eq) goto loc_83AA599C;
	// b 0x83aa5a90
	goto loc_83AA5A90;
loc_83AA59BC:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5a90
	if (cr6.eq) goto loc_83AA5A90;
loc_83AA59C8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83aa5a84
	if (!cr6.eq) goto loc_83AA5A84;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa5a00
	if (!cr6.eq) goto loc_83AA5A00;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83aa5a44
	if (!cr6.eq) goto loc_83AA5A44;
	// stw r5,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r5.u32);
	// b 0x83aa5a44
	goto loc_83AA5A44;
loc_83AA5A00:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83aa5a44
	if (cr0.eq) goto loc_83AA5A44;
loc_83AA5A08:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aa5a20
	if (cr6.eq) goto loc_83AA5A20;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x83aa5a08
	if (!cr0.eq) goto loc_83AA5A08;
loc_83AA5A20:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5a44
	if (cr6.eq) goto loc_83AA5A44;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83aa5a44
	if (!cr6.eq) goto loc_83AA5A44;
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
loc_83AA5A44:
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa5a68
	if (!cr6.eq) goto loc_83AA5A68;
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// b 0x83aa5a74
	goto loc_83AA5A74;
loc_83AA5A68:
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA5A74:
	// stw r11,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r11.u32);
loc_83AA5A84:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83aa59c8
	if (!cr6.eq) goto loc_83AA59C8;
loc_83AA5A90:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83aa5988
	if (!cr6.eq) goto loc_83AA5988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5AA0"))) PPC_WEAK_FUNC(sub_83AA5AA0);
PPC_FUNC_IMPL(__imp__sub_83AA5AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa5b00
	if (!cr0.eq) goto loc_83AA5B00;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5ae8
	if (cr6.eq) goto loc_83AA5AE8;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x83aa5aec
	goto loc_83AA5AEC;
loc_83AA5AE8:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83AA5AEC:
	// lhz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x83a9b8a8
	ctx.lr = 0x83AA5AFC;
	sub_83A9B8A8(ctx, base);
	// b 0x83aa5b40
	goto loc_83AA5B40;
loc_83AA5B00:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa5b40
	if (!cr6.eq) goto loc_83AA5B40;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5b24
	if (cr6.eq) goto loc_83AA5B24;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x83aa5b28
	goto loc_83AA5B28;
loc_83AA5B24:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83AA5B28:
	// lhz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,64(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x83a9b910
	ctx.lr = 0x83AA5B40;
	sub_83A9B910(ctx, base);
loc_83AA5B40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5B50"))) PPC_WEAK_FUNC(sub_83AA5B50);
PPC_FUNC_IMPL(__imp__sub_83AA5B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa5b68
	if (!cr6.eq) goto loc_83AA5B68;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// b 0x83aa5b78
	goto loc_83AA5B78;
loc_83AA5B68:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83AA5B78:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5B94"))) PPC_WEAK_FUNC(sub_83AA5B94);
PPC_FUNC_IMPL(__imp__sub_83AA5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA5B98"))) PPC_WEAK_FUNC(sub_83AA5B98);
PPC_FUNC_IMPL(__imp__sub_83AA5B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA5BA8"))) PPC_WEAK_FUNC(sub_83AA5BA8);
PPC_FUNC_IMPL(__imp__sub_83AA5BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA5BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x83aa5bdc
	if (cr6.eq) goto loc_83AA5BDC;
	// lhz r11,278(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 278);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa5bdc
	if (cr0.eq) goto loc_83AA5BDC;
	// sth r29,278(r3)
	PPC_STORE_U16(ctx.r3.u32 + 278, ctx.r29.u16);
loc_83AA5BDC:
	// lhz r11,278(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 278);
	// li r6,9
	ctx.r6.s64 = 9;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa5c40
	if (!cr0.eq) goto loc_83AA5C40;
	// lbz r11,262(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 262);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa5c38
	if (cr0.eq) goto loc_83AA5C38;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83aa5c30
	if (cr6.eq) goto loc_83AA5C30;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83aa5c28
	if (cr6.eq) goto loc_83AA5C28;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83aa5c20
	if (cr6.eq) goto loc_83AA5C20;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x83aa5c44
	if (!cr6.eq) goto loc_83AA5C44;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x83aa5c44
	goto loc_83AA5C44;
loc_83AA5C20:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x83aa5c44
	goto loc_83AA5C44;
loc_83AA5C28:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x83aa5c44
	goto loc_83AA5C44;
loc_83AA5C30:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83aa5c44
	goto loc_83AA5C44;
loc_83AA5C38:
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x83aa5c44
	goto loc_83AA5C44;
loc_83AA5C40:
	// li r6,11
	ctx.r6.s64 = 11;
loc_83AA5C44:
	// lbz r11,261(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 261);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa5c60
	if (cr0.eq) goto loc_83AA5C60;
	// cmpwi cr6,r6,9
	cr6.compare<int32_t>(ctx.r6.s32, 9, xer);
	// bne cr6,0x83aa5c60
	if (!cr6.eq) goto loc_83AA5C60;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// b 0x83aa5c88
	goto loc_83AA5C88;
loc_83AA5C60:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa5c74
	if (!cr6.gt) goto loc_83AA5C74;
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
loc_83AA5C74:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abe900
	ctx.lr = 0x83AA5C80;
	sub_83ABE900(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_83AA5C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA5C90"))) PPC_WEAK_FUNC(sub_83AA5C90);
PPC_FUNC_IMPL(__imp__sub_83AA5C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA5C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,28980
	ctx.r30.s64 = ctx.r11.s64 + 28980;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa5d44
	if (cr6.eq) goto loc_83AA5D44;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// bne cr6,0x83aa5cd8
	if (!cr6.eq) goto loc_83AA5CD8;
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
loc_83AA5CD8:
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// beq cr6,0x83aa5d44
	if (cr6.eq) goto loc_83AA5D44;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa55e0
	ctx.lr = 0x83AA5CFC;
	sub_83AA55E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r27,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r27.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x83ab0510
	ctx.lr = 0x83AA5D34;
	sub_83AB0510(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x83aadbb8
	ctx.lr = 0x83AA5D40;
	sub_83AADBB8(ctx, base);
	// b 0x83aa5d54
	goto loc_83AA5D54;
loc_83AA5D44:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,30176
	ctx.r4.s64 = ctx.r11.s64 + 30176;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5D54;
	sub_831EA3F0(ctx, base);
loc_83AA5D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA5D60"))) PPC_WEAK_FUNC(sub_83AA5D60);
PPC_FUNC_IMPL(__imp__sub_83AA5D60) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83aa5d88
	goto loc_83AA5D88;
loc_83AA5D80:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
loc_83AA5D88:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5dc0
	if (cr6.eq) goto loc_83AA5DC0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83aa5da8
	if (!cr6.eq) goto loc_83AA5DA8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83AA5DA8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x83aa5d80
	if (!cr6.eq) goto loc_83AA5D80;
loc_83AA5DC0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa5e08
	if (cr6.eq) goto loc_83AA5E08;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83aa5de0
	if (!cr6.eq) goto loc_83AA5DE0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_83AA5DE0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x83aa5e08
	if (cr6.eq) goto loc_83AA5E08;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,30280
	ctx.r4.s64 = ctx.r11.s64 + 30280;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA5E08;
	sub_831EA3F0(ctx, base);
loc_83AA5E08:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r10,29004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29004);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// stb r30,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r30.u8);
	// stb r30,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r30.u8);
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa5e60
	if (!cr6.eq) goto loc_83AA5E60;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// b 0x83aa5e6c
	goto loc_83AA5E6C;
loc_83AA5E60:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83AA5E6C:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AA5E94"))) PPC_WEAK_FUNC(sub_83AA5E94);
PPC_FUNC_IMPL(__imp__sub_83AA5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA5E98"))) PPC_WEAK_FUNC(sub_83AA5E98);
PPC_FUNC_IMPL(__imp__sub_83AA5E98) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// sth r30,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r30.u16);
	// sth r30,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r30.u16);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// beq cr6,0x83aa5ef8
	if (cr6.eq) goto loc_83AA5EF8;
	// bl 0x83ab5a70
	ctx.lr = 0x83AA5EF4;
	sub_83AB5A70(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83AA5EF8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa5f14
	if (!cr6.eq) goto loc_83AA5F14;
	// stw r31,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r31.u32);
	// b 0x83aa5f20
	goto loc_83AA5F20;
loc_83AA5F14:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83AA5F20:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r31,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA5F48"))) PPC_WEAK_FUNC(sub_83AA5F48);
PPC_FUNC_IMPL(__imp__sub_83AA5F48) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa6008
	if (cr6.eq) goto loc_83AA6008;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83aa6004
	if (cr6.eq) goto loc_83AA6004;
loc_83AA5F80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa5fa8
	if (!cr6.eq) goto loc_83AA5FA8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x83aa57a0
	ctx.lr = 0x83AA5F9C;
	sub_83AA57A0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// b 0x83aa5fe4
	goto loc_83AA5FE4;
loc_83AA5FA8:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83aa5fd8
	goto loc_83AA5FD8;
loc_83AA5FB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x83aa57a0
	ctx.lr = 0x83AA5FC4;
	sub_83AA57A0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa5fe0
	if (!cr6.eq) goto loc_83AA5FE0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_83AA5FD8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa5fb4
	if (!cr6.eq) goto loc_83AA5FB4;
loc_83AA5FE0:
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_83AA5FE4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa6008
	if (!cr6.eq) goto loc_83AA6008;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa5f80
	if (!cr6.eq) goto loc_83AA5F80;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// bne cr6,0x83aa6008
	if (!cr6.eq) goto loc_83AA6008;
loc_83AA6004:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AA6008:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_83AA6020"))) PPC_WEAK_FUNC(sub_83AA6020);
PPC_FUNC_IMPL(__imp__sub_83AA6020) {
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
	// lwz r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83aa60d8
	if (cr6.eq) goto loc_83AA60D8;
	// lwz r30,8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x83aa60d0
	goto loc_83AA60D0;
loc_83AA6054:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa6084
	if (!cr6.eq) goto loc_83AA6084;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83aa56f0
	ctx.lr = 0x83AA6074;
	sub_83AA56F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa60c4
	if (cr0.eq) goto loc_83AA60C4;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x83aa60b0
	goto loc_83AA60B0;
loc_83AA6084:
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa60a0
	if (cr6.eq) goto loc_83AA60A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83aa56f0
	ctx.lr = 0x83AA609C;
	sub_83AA56F0(ctx, base);
	// b 0x83aa60a4
	goto loc_83AA60A4;
loc_83AA60A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA60A4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83aa60c4
	if (cr6.eq) goto loc_83AA60C4;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_83AA60B0:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83aa60c0
	if (!cr6.eq) goto loc_83AA60C0;
	// lwz r7,20(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// b 0x83aa60c4
	goto loc_83AA60C4;
loc_83AA60C0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_83AA60C4:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x83aa60d8
	if (!cr6.lt) goto loc_83AA60D8;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA60D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa6054
	if (!cr6.eq) goto loc_83AA6054;
loc_83AA60D8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_83AA60F4"))) PPC_WEAK_FUNC(sub_83AA60F4);
PPC_FUNC_IMPL(__imp__sub_83AA60F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA60F8"))) PPC_WEAK_FUNC(sub_83AA60F8);
PPC_FUNC_IMPL(__imp__sub_83AA60F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa612c
	if (cr6.eq) goto loc_83AA612C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa612c
	if (cr6.eq) goto loc_83AA612C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83aa612c
	if (cr6.eq) goto loc_83AA612C;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// blr 
	return;
loc_83AA612C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA6134"))) PPC_WEAK_FUNC(sub_83AA6134);
PPC_FUNC_IMPL(__imp__sub_83AA6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA6138"))) PPC_WEAK_FUNC(sub_83AA6138);
PPC_FUNC_IMPL(__imp__sub_83AA6138) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,29004(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// b 0x83aa6164
	goto loc_83AA6164;
loc_83AA6158:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// bl 0x83aa5b50
	ctx.lr = 0x83AA6164;
	sub_83AA5B50(ctx, base);
loc_83AA6164:
	// lwz r11,124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa619c
	if (cr6.eq) goto loc_83AA619C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r10.u32);
	// bne cr6,0x83aa6184
	if (!cr6.eq) goto loc_83AA6184;
	// stw r8,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r8.u32);
loc_83AA6184:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r10.u32);
	// bne cr6,0x83aa6158
	if (!cr6.eq) goto loc_83AA6158;
loc_83AA619C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA61AC"))) PPC_WEAK_FUNC(sub_83AA61AC);
PPC_FUNC_IMPL(__imp__sub_83AA61AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA61B0"))) PPC_WEAK_FUNC(sub_83AA61B0);
PPC_FUNC_IMPL(__imp__sub_83AA61B0) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x83aa61e8
	goto loc_83AA61E8;
loc_83AA61D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa5870
	ctx.lr = 0x83AA61DC;
	sub_83AA5870(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa61f4
	if (!cr0.eq) goto loc_83AA61F4;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA61E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa61d0
	if (!cr6.eq) goto loc_83AA61D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA61F4:
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

__attribute__((alias("__imp__sub_83AA620C"))) PPC_WEAK_FUNC(sub_83AA620C);
PPC_FUNC_IMPL(__imp__sub_83AA620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA6210"))) PPC_WEAK_FUNC(sub_83AA6210);
PPC_FUNC_IMPL(__imp__sub_83AA6210) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aa6260
	if (cr6.eq) goto loc_83AA6260;
	// b 0x83aa6254
	goto loc_83AA6254;
loc_83AA623C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa58f0
	ctx.lr = 0x83AA6248;
	sub_83AA58F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa6260
	if (!cr0.eq) goto loc_83AA6260;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6254:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa623c
	if (!cr6.eq) goto loc_83AA623C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA6260:
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

__attribute__((alias("__imp__sub_83AA6278"))) PPC_WEAK_FUNC(sub_83AA6278);
PPC_FUNC_IMPL(__imp__sub_83AA6278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA6280;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,236(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83aa639c
	if (cr6.eq) goto loc_83AA639C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83AA62B0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// lhz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa6344
	if (!cr6.eq) goto loc_83AA6344;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83aaf398
	ctx.lr = 0x83AA62D4;
	sub_83AAF398(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r9,22(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 22);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// or r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bne 0x83aa6300
	if (!cr0.eq) goto loc_83AA6300;
	// andc r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ~ctx.r10.u64;
loc_83AA6300:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aa6344
	if (cr6.eq) goto loc_83AA6344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r4,171
	ctx.r4.s64 = 171;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AA6318;
	sub_83AB1EE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83aa6328
	if (cr6.eq) goto loc_83AA6328;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x83aa632c
	goto loc_83AA632C;
loc_83AA6328:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_83AA632C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,14(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// li r4,172
	ctx.r4.s64 = 172;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x83ab2210
	ctx.lr = 0x83AA6344;
	sub_83AB2210(ctx, base);
loc_83AA6344:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa6390
	if (cr0.eq) goto loc_83AA6390;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x83aa6388
	goto loc_83AA6388;
loc_83AA6358:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aa6378
	if (cr6.eq) goto loc_83AA6378;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83aa6384
	if (!cr6.gt) goto loc_83AA6384;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x83aa6384
	if (cr6.gt) goto loc_83AA6384;
loc_83AA6378:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x83aa6e38
	ctx.lr = 0x83AA6384;
	sub_83AA6E38(ctx, base);
loc_83AA6384:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6388:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6358
	if (!cr6.eq) goto loc_83AA6358;
loc_83AA6390:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa62b0
	if (!cr6.eq) goto loc_83AA62B0;
loc_83AA639C:
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x83aa63e4
	goto loc_83AA63E4;
loc_83AA63A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa63c0
	if (!cr6.eq) goto loc_83AA63C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa6278
	ctx.lr = 0x83AA63BC;
	sub_83AA6278(ctx, base);
	// b 0x83aa63e0
	goto loc_83AA63E0;
loc_83AA63C0:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa63d8
	goto loc_83AA63D8;
loc_83AA63C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6278
	ctx.lr = 0x83AA63D4;
	sub_83AA6278(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA63D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa63c8
	if (!cr6.eq) goto loc_83AA63C8;
loc_83AA63E0:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA63E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa63a4
	if (!cr6.eq) goto loc_83AA63A4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA63FC"))) PPC_WEAK_FUNC(sub_83AA63FC);
PPC_FUNC_IMPL(__imp__sub_83AA63FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA6400"))) PPC_WEAK_FUNC(sub_83AA6400);
PPC_FUNC_IMPL(__imp__sub_83AA6400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA6408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r29,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// stb r30,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r30.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// beq cr6,0x83aa6480
	if (cr6.eq) goto loc_83AA6480;
	// bl 0x83ab05b8
	ctx.lr = 0x83AA647C;
	sub_83AB05B8(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_83AA6480:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AA648C:
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// sthu r29,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa648c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA648C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// sth r29,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r29.u16);
	// sth r29,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r29.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa64b0
	if (cr6.eq) goto loc_83AA64B0;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_83AA64B0:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r29,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r29.u16);
	// stb r30,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r30.u8);
	// stb r30,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r30.u8);
	// beq cr6,0x83aa64d8
	if (cr6.eq) goto loc_83AA64D8;
	// bl 0x83ab6c30
	ctx.lr = 0x83AA64D4;
	sub_83AB6C30(ctx, base);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_83AA64D8:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa64f0
	if (cr6.eq) goto loc_83AA64F0;
	// bl 0x83aa5d60
	ctx.lr = 0x83AA64EC;
	sub_83AA5D60(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_83AA64F0:
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA64FC"))) PPC_WEAK_FUNC(sub_83AA64FC);
PPC_FUNC_IMPL(__imp__sub_83AA64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA6500"))) PPC_WEAK_FUNC(sub_83AA6500);
PPC_FUNC_IMPL(__imp__sub_83AA6500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AA6508;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r23,r9,28472
	ctx.r23.s64 = ctx.r9.s64 + 28472;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r8,29416
	ctx.r9.s64 = ctx.r8.s64 + 29416;
	// addi r11,r24,456
	ctx.r11.s64 = ctx.r24.s64 + 456;
	// addi r8,r24,272
	ctx.r8.s64 = ctx.r24.s64 + 272;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,528(r23)
	PPC_STORE_U32(ctx.r23.u32 + 528, ctx.r9.u32);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r6,52
	ctx.r10.s64 = ctx.r6.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addic. r31,r11,216
	xer.ca = ctx.r11.u32 > 4294967079;
	ctx.r31.s64 = ctx.r11.s64 + 216;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x83aa6a0c
	if (!cr0.gt) goto loc_83AA6A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r23,508
	ctx.r8.s64 = ctx.r23.s64 + 508;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,524(r23)
	PPC_STORE_U32(ctx.r23.u32 + 524, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,508(r23)
	PPC_STORE_U32(ctx.r23.u32 + 508, ctx.r11.u32);
	// stw r10,512(r23)
	PPC_STORE_U32(ctx.r23.u32 + 512, ctx.r10.u32);
	// stw r9,516(r23)
	PPC_STORE_U32(ctx.r23.u32 + 516, ctx.r9.u32);
	// stw r8,520(r23)
	PPC_STORE_U32(ctx.r23.u32 + 520, ctx.r8.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83AA6598;
	sub_831EA7A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83AA65A8;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AA65B8;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 * 60;
	// bl 0x83a77b78
	ctx.lr = 0x83AA65F0;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa6660
	if (cr6.eq) goto loc_83AA6660;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_83AA6604:
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// sth r9,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r9.u16);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa6630
	if (!cr6.eq) goto loc_83AA6630;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x83aa663c
	goto loc_83AA663C;
loc_83AA6630:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_83AA663C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aa6604
	if (cr6.lt) goto loc_83AA6604;
loc_83AA6660:
	// li r5,8
	ctx.r5.s64 = 8;
	// mulli r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 * 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AA6670;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa66e4
	if (cr6.eq) goto loc_83AA66E4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83AA6684:
	// mulli r11,r9,56
	ctx.r11.s64 = ctx.r9.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83aa66b4
	if (!cr6.eq) goto loc_83AA66B4;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x83aa66c0
	goto loc_83AA66C0;
loc_83AA66B4:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AA66C0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aa6684
	if (cr6.lt) goto loc_83AA6684;
loc_83AA66E4:
	// li r5,8
	ctx.r5.s64 = 8;
	// mulli r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 * 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AA66F4;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa678c
	if (!cr6.gt) goto loc_83AA678C;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_83AA6708:
	// mulli r11,r26,312
	ctx.r11.s64 = ctx.r26.s64 * 312;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// addi r27,r30,72
	ctx.r27.s64 = ctx.r30.s64 + 72;
	// sth r11,272(r30)
	PPC_STORE_U16(ctx.r30.u32 + 272, ctx.r11.u16);
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// bl 0x83a77b78
	ctx.lr = 0x83AA6738;
	sub_83A77B78(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// stw r28,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa55e0
	ctx.lr = 0x83AA6748;
	sub_83AA55E0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa675c
	if (!cr6.eq) goto loc_83AA675C;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// b 0x83aa6768
	goto loc_83AA6768;
loc_83AA675C:
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_83AA6768:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aa6708
	if (cr6.lt) goto loc_83AA6708;
loc_83AA678C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 * 244;
	// bl 0x83a77b78
	ctx.lr = 0x83AA67A0;
	sub_83A77B78(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83aa684c
	if (!cr6.gt) goto loc_83AA684C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83AA67B8:
	// mulli r10,r27,244
	ctx.r10.s64 = ctx.r27.s64 * 244;
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r30,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bl 0x83a77b78
	ctx.lr = 0x83AA67F4;
	sub_83A77B78(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa6400
	ctx.lr = 0x83AA6804;
	sub_83AA6400(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa6818
	if (!cr6.eq) goto loc_83AA6818;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x83aa6824
	goto loc_83AA6824;
loc_83AA6818:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA6824:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83aa67b8
	if (cr6.lt) goto loc_83AA67B8;
loc_83AA684C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 * 52;
	// bl 0x83a77b78
	ctx.lr = 0x83AA6860;
	sub_83A77B78(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa68c8
	if (!cr6.gt) goto loc_83AA68C8;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_83AA6870:
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa6894
	if (!cr6.eq) goto loc_83AA6894;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x83aa68a0
	goto loc_83AA68A0;
loc_83AA6894:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_83AA68A0:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83aa6870
	if (cr6.lt) goto loc_83AA6870;
loc_83AA68C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 * 28;
	// bl 0x83a77b78
	ctx.lr = 0x83AA68DC;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa694c
	if (!cr6.gt) goto loc_83AA694C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83AA68F0:
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa6918
	if (!cr6.eq) goto loc_83AA6918;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x83aa6924
	goto loc_83AA6924;
loc_83AA6918:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA6924:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aa68f0
	if (cr6.lt) goto loc_83AA68F0;
loc_83AA694C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 * 28;
	// bl 0x83a77b78
	ctx.lr = 0x83AA6960;
	sub_83A77B78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa69d0
	if (!cr6.gt) goto loc_83AA69D0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83AA6974:
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa699c
	if (!cr6.eq) goto loc_83AA699C;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83aa69a8
	goto loc_83AA69A8;
loc_83AA699C:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA69A8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aa6974
	if (cr6.lt) goto loc_83AA6974;
loc_83AA69D0:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r8,508
	ctx.r8.s64 = 508;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83ab0510
	ctx.lr = 0x83AA69EC;
	sub_83AB0510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,536(r23)
	PPC_STORE_U32(ctx.r23.u32 + 536, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x83AA69FC;
	sub_83102DB0(ctx, base);
	// bl 0x83aa4f98
	ctx.lr = 0x83AA6A00;
	sub_83AA4F98(ctx, base);
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r31,532(r23)
	PPC_STORE_U32(ctx.r23.u32 + 532, ctx.r31.u32);
loc_83AA6A0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6A14"))) PPC_WEAK_FUNC(sub_83AA6A14);
PPC_FUNC_IMPL(__imp__sub_83AA6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA6A18"))) PPC_WEAK_FUNC(sub_83AA6A18);
PPC_FUNC_IMPL(__imp__sub_83AA6A18) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa6a48
	if (!cr6.gt) goto loc_83AA6A48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,30384
	ctx.r4.s64 = ctx.r11.s64 + 30384;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA6A48;
	sub_831EA3F0(ctx, base);
loc_83AA6A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6400
	ctx.lr = 0x83AA6A50;
	sub_83AA6400(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa6a6c
	if (!cr6.eq) goto loc_83AA6A6C;
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// b 0x83aa6a7c
	goto loc_83AA6A7C;
loc_83AA6A6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83AA6A7C:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA6AA0"))) PPC_WEAK_FUNC(sub_83AA6AA0);
PPC_FUNC_IMPL(__imp__sub_83AA6AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA6AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa6b14
	if (cr6.eq) goto loc_83AA6B14;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa6b08
	goto loc_83AA6B08;
loc_83AA6AC8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa6ae4
	if (!cr6.eq) goto loc_83AA6AE4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa6278
	ctx.lr = 0x83AA6AE0;
	sub_83AA6278(ctx, base);
	// b 0x83aa6b04
	goto loc_83AA6B04;
loc_83AA6AE4:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa6afc
	goto loc_83AA6AFC;
loc_83AA6AEC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6278
	ctx.lr = 0x83AA6AF8;
	sub_83AA6278(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6AFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6aec
	if (!cr6.eq) goto loc_83AA6AEC;
loc_83AA6B04:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA6B08:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa6ac8
	if (!cr6.eq) goto loc_83AA6AC8;
	// b 0x83aa6b90
	goto loc_83AA6B90;
loc_83AA6B14:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa6b88
	goto loc_83AA6B88;
loc_83AA6B24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa6b7c
	goto loc_83AA6B7C;
loc_83AA6B30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa6b78
	if (!cr6.eq) goto loc_83AA6B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa6b58
	if (!cr6.eq) goto loc_83AA6B58;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa6278
	ctx.lr = 0x83AA6B54;
	sub_83AA6278(ctx, base);
	// b 0x83aa6b78
	goto loc_83AA6B78;
loc_83AA6B58:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa6b70
	goto loc_83AA6B70;
loc_83AA6B60:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6278
	ctx.lr = 0x83AA6B6C;
	sub_83AA6278(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6B70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6b60
	if (!cr6.eq) goto loc_83AA6B60;
loc_83AA6B78:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA6B7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa6b30
	if (!cr6.eq) goto loc_83AA6B30;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83AA6B88:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa6b24
	if (!cr6.eq) goto loc_83AA6B24;
loc_83AA6B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6B98"))) PPC_WEAK_FUNC(sub_83AA6B98);
PPC_FUNC_IMPL(__imp__sub_83AA6B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA6BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa6c08
	goto loc_83AA6C08;
loc_83AA6BB4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa6bd0
	if (!cr6.eq) goto loc_83AA6BD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa5870
	ctx.lr = 0x83AA6BCC;
	sub_83AA5870(ctx, base);
	// b 0x83aa6bfc
	goto loc_83AA6BFC;
loc_83AA6BD0:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa6bf0
	goto loc_83AA6BF0;
loc_83AA6BD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa5870
	ctx.lr = 0x83AA6BE4;
	sub_83AA5870(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa6bfc
	if (!cr0.eq) goto loc_83AA6BFC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6BF0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6bd8
	if (!cr6.eq) goto loc_83AA6BD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA6BFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aa6c10
	if (!cr6.eq) goto loc_83AA6C10;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA6C08:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa6bb4
	if (!cr6.eq) goto loc_83AA6BB4;
loc_83AA6C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6C18"))) PPC_WEAK_FUNC(sub_83AA6C18);
PPC_FUNC_IMPL(__imp__sub_83AA6C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AA6C20;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa6d6c
	if (cr6.eq) goto loc_83AA6D6C;
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83aa6d64
	goto loc_83AA6D64;
loc_83AA6C58:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa6cd8
	if (!cr6.eq) goto loc_83AA6CD8;
	// clrlwi r30,r25,16
	ctx.r30.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x83aa6c94
	if (!cr6.eq) goto loc_83AA6C94;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab2130
	ctx.lr = 0x83AA6C90;
	sub_83AB2130(ctx, base);
	// b 0x83aa6d60
	goto loc_83AA6D60;
loc_83AA6C94:
	// lwz r31,236(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x83aa6ccc
	goto loc_83AA6CCC;
loc_83AA6C9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 208);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83aa6cc8
	if (!cr6.eq) goto loc_83AA6CC8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab2130
	ctx.lr = 0x83AA6CC8;
	sub_83AB2130(ctx, base);
loc_83AA6CC8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6CCC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6c9c
	if (!cr6.eq) goto loc_83AA6C9C;
	// b 0x83aa6d60
	goto loc_83AA6D60;
loc_83AA6CD8:
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aa6d60
	if (cr6.eq) goto loc_83AA6D60;
	// clrlwi r30,r25,16
	ctx.r30.u64 = ctx.r25.u32 & 0xFFFF;
loc_83AA6CE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x83aa6d14
	if (!cr6.eq) goto loc_83AA6D14;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab2130
	ctx.lr = 0x83AA6D10;
	sub_83AB2130(ctx, base);
	// b 0x83aa6d54
	goto loc_83AA6D54;
loc_83AA6D14:
	// lwz r31,236(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x83aa6d4c
	goto loc_83AA6D4C;
loc_83AA6D1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 208);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83aa6d48
	if (!cr6.eq) goto loc_83AA6D48;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab2130
	ctx.lr = 0x83AA6D48;
	sub_83AB2130(ctx, base);
loc_83AA6D48:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6D4C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6d1c
	if (!cr6.eq) goto loc_83AA6D1C;
loc_83AA6D54:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa6ce8
	if (!cr6.eq) goto loc_83AA6CE8;
loc_83AA6D60:
	// lwz r26,4(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83AA6D64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83aa6c58
	if (!cr6.eq) goto loc_83AA6C58;
loc_83AA6D6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6D80"))) PPC_WEAK_FUNC(sub_83AA6D80);
PPC_FUNC_IMPL(__imp__sub_83AA6D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA6D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa6e24
	goto loc_83AA6E24;
loc_83AA6DA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa6e10
	goto loc_83AA6E10;
loc_83AA6DB0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa6dcc
	if (!cr6.eq) goto loc_83AA6DCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa58f0
	ctx.lr = 0x83AA6DC8;
	sub_83AA58F0(ctx, base);
	// b 0x83aa6e04
	goto loc_83AA6E04;
loc_83AA6DCC:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aa6e04
	if (cr6.eq) goto loc_83AA6E04;
	// b 0x83aa6df8
	goto loc_83AA6DF8;
loc_83AA6DE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa58f0
	ctx.lr = 0x83AA6DEC;
	sub_83AA58F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa6e04
	if (!cr0.eq) goto loc_83AA6E04;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6DF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6de0
	if (!cr6.eq) goto loc_83AA6DE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA6E04:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aa6e1c
	if (!cr6.eq) goto loc_83AA6E1C;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83AA6E10:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa6db0
	if (!cr6.eq) goto loc_83AA6DB0;
	// b 0x83aa6e20
	goto loc_83AA6E20;
loc_83AA6E1C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_83AA6E20:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83AA6E24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa6da4
	if (!cr6.eq) goto loc_83AA6DA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6E38"))) PPC_WEAK_FUNC(sub_83AA6E38);
PPC_FUNC_IMPL(__imp__sub_83AA6E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA6E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa6e74
	goto loc_83AA6E74;
loc_83AA6E5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA6E68;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa6e80
	if (!cr0.eq) goto loc_83AA6E80;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA6E74:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa6e5c
	if (!cr6.eq) goto loc_83AA6E5C;
	// b 0x83aa6e88
	goto loc_83AA6E88;
loc_83AA6E80:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa6278
	ctx.lr = 0x83AA6E88;
	sub_83AA6278(ctx, base);
loc_83AA6E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA6E90"))) PPC_WEAK_FUNC(sub_83AA6E90);
PPC_FUNC_IMPL(__imp__sub_83AA6E90) {
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
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa6f00
	if (!cr6.gt) goto loc_83AA6F00;
	// b 0x83aa6ec8
	goto loc_83AA6EC8;
loc_83AA6EBC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa6a18
	ctx.lr = 0x83AA6EC8;
	sub_83AA6A18(ctx, base);
loc_83AA6EC8:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa6f00
	if (cr6.eq) goto loc_83AA6F00;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bne cr6,0x83aa6ee8
	if (!cr6.eq) goto loc_83AA6EE8;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
loc_83AA6EE8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// bne cr6,0x83aa6ebc
	if (!cr6.eq) goto loc_83AA6EBC;
loc_83AA6F00:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83ab05b8
	ctx.lr = 0x83AA6F08;
	sub_83AB05B8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// bne cr6,0x83aa6f3c
	if (!cr6.eq) goto loc_83AA6F3C;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x83aa6f48
	goto loc_83AA6F48;
loc_83AA6F3C:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83AA6F48:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA6F70"))) PPC_WEAK_FUNC(sub_83AA6F70);
PPC_FUNC_IMPL(__imp__sub_83AA6F70) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa6fdc
	if (!cr6.gt) goto loc_83AA6FDC;
	// b 0x83aa6fa4
	goto loc_83AA6FA4;
loc_83AA6F9C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa6e90
	ctx.lr = 0x83AA6FA4;
	sub_83AA6E90(ctx, base);
loc_83AA6FA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa6fdc
	if (cr6.eq) goto loc_83AA6FDC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83aa6fc4
	if (!cr6.eq) goto loc_83AA6FC4;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83AA6FC4:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x83aa6f9c
	if (!cr6.eq) goto loc_83AA6F9C;
loc_83AA6FDC:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// sth r9,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r9.u16);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r30.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x83aa703c
	if (!cr6.eq) goto loc_83AA703C;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x83aa7048
	goto loc_83AA7048;
loc_83AA703C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83AA7048:
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA7070"))) PPC_WEAK_FUNC(sub_83AA7070);
PPC_FUNC_IMPL(__imp__sub_83AA7070) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa70f0
	if (!cr6.gt) goto loc_83AA70F0;
	// b 0x83aa70b8
	goto loc_83AA70B8;
loc_83AA709C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa70b4
	if (!cr6.eq) goto loc_83AA70B4;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA70B0;
	sub_83AA6E90(ctx, base);
	// b 0x83aa70b8
	goto loc_83AA70B8;
loc_83AA70B4:
	// bl 0x83aa6f70
	ctx.lr = 0x83AA70B8;
	sub_83AA6F70(ctx, base);
loc_83AA70B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa70f0
	if (cr6.eq) goto loc_83AA70F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83aa70d8
	if (!cr6.eq) goto loc_83AA70D8;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83AA70D8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x83aa709c
	if (!cr6.eq) goto loc_83AA709C;
loc_83AA70F0:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa710c
	if (!cr6.eq) goto loc_83AA710C;
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// b 0x83aa7118
	goto loc_83AA7118;
loc_83AA710C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83AA7118:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AA7140"))) PPC_WEAK_FUNC(sub_83AA7140);
PPC_FUNC_IMPL(__imp__sub_83AA7140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA7148;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83aa7214
	goto loc_83AA7214;
loc_83AA715C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa71b0
	if (cr0.eq) goto loc_83AA71B0;
	// b 0x83aa7178
	goto loc_83AA7178;
loc_83AA7170:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA7178;
	sub_83AA5E98(ctx, base);
loc_83AA7178:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa71b0
	if (cr6.eq) goto loc_83AA71B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83aa7198
	if (!cr6.eq) goto loc_83AA7198;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83AA7198:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x83aa7170
	if (!cr6.eq) goto loc_83AA7170;
loc_83AA71B0:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// b 0x83aa71d0
	goto loc_83AA71D0;
loc_83AA71B8:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa79b0
	ctx.lr = 0x83AA71C8;
	sub_83AA79B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83AA71D0;
	sub_83AA5E98(ctx, base);
loc_83AA71D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7208
	if (cr6.eq) goto loc_83AA7208;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83aa71f0
	if (!cr6.eq) goto loc_83AA71F0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_83AA71F0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x83aa71b8
	if (!cr6.eq) goto loc_83AA71B8;
loc_83AA7208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83aa6a18
	ctx.lr = 0x83AA7214;
	sub_83AA6A18(ctx, base);
loc_83AA7214:
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa72d0
	if (cr6.eq) goto loc_83AA72D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r10.u32);
	// bne cr6,0x83aa7234
	if (!cr6.eq) goto loc_83AA7234;
	// stw r30,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r30.u32);
loc_83AA7234:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,244(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r10.u32);
	// bne cr6,0x83aa715c
	if (!cr6.eq) goto loc_83AA715C;
	// b 0x83aa72d0
	goto loc_83AA72D0;
loc_83AA7250:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7290
	if (!cr6.eq) goto loc_83AA7290;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7140
	ctx.lr = 0x83AA726C;
	sub_83AA7140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA7274;
	sub_83AA6E90(ctx, base);
	// b 0x83aa72d0
	goto loc_83AA72D0;
loc_83AA7278:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa7140
	ctx.lr = 0x83AA7288;
	sub_83AA7140(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA7290;
	sub_83AA6E90(ctx, base);
loc_83AA7290:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa72c8
	if (cr6.eq) goto loc_83AA72C8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83aa72b0
	if (!cr6.eq) goto loc_83AA72B0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83AA72B0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x83aa7278
	if (!cr6.eq) goto loc_83AA7278;
loc_83AA72C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6f70
	ctx.lr = 0x83AA72D0;
	sub_83AA6F70(ctx, base);
loc_83AA72D0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7308
	if (cr6.eq) goto loc_83AA7308;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83aa72f0
	if (!cr6.eq) goto loc_83AA72F0;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
loc_83AA72F0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// bne cr6,0x83aa7250
	if (!cr6.eq) goto loc_83AA7250;
loc_83AA7308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7310"))) PPC_WEAK_FUNC(sub_83AA7310);
PPC_FUNC_IMPL(__imp__sub_83AA7310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA7318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa73bc
	if (cr6.eq) goto loc_83AA73BC;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
loc_83AA7330:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aa734c
	if (!cr6.eq) goto loc_83AA734C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x83aa73b0
	goto loc_83AA73B0;
loc_83AA734C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83aa73b0
	if (!cr6.eq) goto loc_83AA73B0;
	// lwz r11,29004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa737c
	goto loc_83AA737C;
loc_83AA7364:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA7370;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa7388
	if (!cr0.eq) goto loc_83AA7388;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA737C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7364
	if (!cr6.eq) goto loc_83AA7364;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA7388:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa73b0
	if (cr6.eq) goto loc_83AA73B0;
	// lwz r31,236(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// b 0x83aa73a8
	goto loc_83AA73A8;
loc_83AA7398:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa7310
	ctx.lr = 0x83AA73A0;
	sub_83AA7310(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_83AA73A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7398
	if (!cr6.eq) goto loc_83AA7398;
loc_83AA73B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa7330
	if (!cr6.eq) goto loc_83AA7330;
loc_83AA73BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA73C8"))) PPC_WEAK_FUNC(sub_83AA73C8);
PPC_FUNC_IMPL(__imp__sub_83AA73C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA73D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa7560
	if (cr6.eq) goto loc_83AA7560;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
loc_83AA73E4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83aa7408
	if (!cr6.eq) goto loc_83AA7408;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ace0b8
	ctx.lr = 0x83AA7404;
	sub_83ACE0B8(ctx, base);
	// b 0x83aa754c
	goto loc_83AA754C;
loc_83AA7408:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83aa7474
	if (!cr6.eq) goto loc_83AA7474;
	// lwz r10,29004(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,76(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x83aa7438
	goto loc_83AA7438;
loc_83AA7420:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA742C;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa7444
	if (!cr0.eq) goto loc_83AA7444;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7438:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7420
	if (!cr6.eq) goto loc_83AA7420;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA7444:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa7554
	if (cr6.eq) goto loc_83AA7554;
	// lwz r31,236(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// b 0x83aa7468
	goto loc_83AA7468;
loc_83AA7454:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa73c8
	ctx.lr = 0x83AA745C;
	sub_83AA73C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa754c
	if (!cr0.eq) goto loc_83AA754C;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7468:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7454
	if (!cr6.eq) goto loc_83AA7454;
	// b 0x83aa7548
	goto loc_83AA7548;
loc_83AA7474:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x83aa7554
	if (!cr6.eq) goto loc_83AA7554;
	// lwz r10,29004(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,76(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x83aa7504
	goto loc_83AA7504;
loc_83AA748C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa74f8
	goto loc_83AA74F8;
loc_83AA7498:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa74b4
	if (!cr6.eq) goto loc_83AA74B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa58f0
	ctx.lr = 0x83AA74B0;
	sub_83AA58F0(ctx, base);
	// b 0x83aa74ec
	goto loc_83AA74EC;
loc_83AA74B4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aa74ec
	if (cr6.eq) goto loc_83AA74EC;
	// b 0x83aa74e0
	goto loc_83AA74E0;
loc_83AA74C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa58f0
	ctx.lr = 0x83AA74D4;
	sub_83AA58F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa74ec
	if (!cr0.eq) goto loc_83AA74EC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA74E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa74c8
	if (!cr6.eq) goto loc_83AA74C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA74EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aa7518
	if (!cr6.eq) goto loc_83AA7518;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83AA74F8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa7498
	if (!cr6.eq) goto loc_83AA7498;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83AA7504:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa748c
	if (!cr6.eq) goto loc_83AA748C;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa7554
	if (cr6.eq) goto loc_83AA7554;
loc_83AA7518:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7554
	if (cr6.eq) goto loc_83AA7554;
	// lwz r31,236(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x83aa7540
	goto loc_83AA7540;
loc_83AA752C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa73c8
	ctx.lr = 0x83AA7534;
	sub_83AA73C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa754c
	if (!cr0.eq) goto loc_83AA754C;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7540:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa752c
	if (!cr6.eq) goto loc_83AA752C;
loc_83AA7548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA754C:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83aa756c
	if (cr6.eq) goto loc_83AA756C;
loc_83AA7554:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83aa73e4
	if (!cr6.eq) goto loc_83AA73E4;
loc_83AA7560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AA7564:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83AA756C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83aa7564
	goto loc_83AA7564;
}

__attribute__((alias("__imp__sub_83AA7574"))) PPC_WEAK_FUNC(sub_83AA7574);
PPC_FUNC_IMPL(__imp__sub_83AA7574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA7578"))) PPC_WEAK_FUNC(sub_83AA7578);
PPC_FUNC_IMPL(__imp__sub_83AA7578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA7580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aa75b8
	if (cr6.eq) goto loc_83AA75B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83aa7654
	if (cr6.eq) goto loc_83AA7654;
	// ble cr6,0x83aa75cc
	if (!cr6.gt) goto loc_83AA75CC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83aa760c
	if (!cr6.gt) goto loc_83AA760C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// ble cr6,0x83aa75d4
	if (!cr6.gt) goto loc_83AA75D4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83aa75cc
	if (!cr6.eq) goto loc_83AA75CC;
loc_83AA75B8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83ace198
	ctx.lr = 0x83AA75CC;
	sub_83ACE198(ctx, base);
loc_83AA75CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83AA75D4:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aa7668
	if (cr6.eq) goto loc_83AA7668;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa76d4
	if (cr0.eq) goto loc_83AA76D4;
loc_83AA75F0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x83aa76ac
	if (cr6.eq) goto loc_83AA76AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa75f0
	if (!cr0.eq) goto loc_83AA75F0;
	// b 0x83aa76ac
	goto loc_83AA76AC;
loc_83AA760C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa7638
	goto loc_83AA7638;
loc_83AA7620:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA762C;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa7644
	if (!cr0.eq) goto loc_83AA7644;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7638:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7620
	if (!cr6.eq) goto loc_83AA7620;
	// b 0x83aa75cc
	goto loc_83AA75CC;
loc_83AA7644:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7650;
	sub_83AA7A40(ctx, base);
	// b 0x83aa75cc
	goto loc_83AA75CC;
loc_83AA7654:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa768c
	if (!cr6.eq) goto loc_83AA768C;
loc_83AA7668:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa76d4
	if (!cr6.eq) goto loc_83AA76D4;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// b 0x83aa76d4
	goto loc_83AA76D4;
loc_83AA768C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa76d4
	if (cr0.eq) goto loc_83AA76D4;
loc_83AA7694:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x83aa76ac
	if (cr6.eq) goto loc_83AA76AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa7694
	if (!cr0.eq) goto loc_83AA7694;
loc_83AA76AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa76d4
	if (cr6.eq) goto loc_83AA76D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x83aa76d4
	if (!cr6.eq) goto loc_83AA76D4;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
loc_83AA76D4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA76EC;
	sub_83AA5E98(ctx, base);
	// b 0x83aa75cc
	goto loc_83AA75CC;
}

__attribute__((alias("__imp__sub_83AA76F0"))) PPC_WEAK_FUNC(sub_83AA76F0);
PPC_FUNC_IMPL(__imp__sub_83AA76F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA76F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa77d4
	if (cr6.eq) goto loc_83AA77D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83aa7798
	goto loc_83AA7798;
loc_83AA7718:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7758
	if (!cr6.eq) goto loc_83AA7758;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7140
	ctx.lr = 0x83AA7734;
	sub_83AA7140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA773C;
	sub_83AA6E90(ctx, base);
	// b 0x83aa7798
	goto loc_83AA7798;
loc_83AA7740:
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa7140
	ctx.lr = 0x83AA7750;
	sub_83AA7140(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA7758;
	sub_83AA6E90(ctx, base);
loc_83AA7758:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7790
	if (cr6.eq) goto loc_83AA7790;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83aa7778
	if (!cr6.eq) goto loc_83AA7778;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_83AA7778:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x83aa7740
	if (!cr6.eq) goto loc_83AA7740;
loc_83AA7790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6f70
	ctx.lr = 0x83AA7798;
	sub_83AA6F70(ctx, base);
loc_83AA7798:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa77d0
	if (cr6.eq) goto loc_83AA77D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83aa77b8
	if (!cr6.eq) goto loc_83AA77B8;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_83AA77B8:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// bne cr6,0x83aa7718
	if (!cr6.eq) goto loc_83AA7718;
loc_83AA77D0:
	// stw r29,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r29.u32);
loc_83AA77D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA77DC"))) PPC_WEAK_FUNC(sub_83AA77DC);
PPC_FUNC_IMPL(__imp__sub_83AA77DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA77E0"))) PPC_WEAK_FUNC(sub_83AA77E0);
PPC_FUNC_IMPL(__imp__sub_83AA77E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA77E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa784c
	if (cr0.eq) goto loc_83AA784C;
	// b 0x83aa7814
	goto loc_83AA7814;
loc_83AA780C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA7814;
	sub_83AA5E98(ctx, base);
loc_83AA7814:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa784c
	if (cr6.eq) goto loc_83AA784C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83aa7834
	if (!cr6.eq) goto loc_83AA7834;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83AA7834:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x83aa780c
	if (!cr6.eq) goto loc_83AA780C;
loc_83AA784C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
	// bne cr6,0x83aa786c
	if (!cr6.eq) goto loc_83AA786C;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83aa789c
	if (cr6.eq) goto loc_83AA789C;
loc_83AA786C:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x83aa789c
	if (cr6.eq) goto loc_83AA789C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa789c
	if (cr6.eq) goto loc_83AA789C;
loc_83AA7880:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa7578
	ctx.lr = 0x83AA7890;
	sub_83AA7578(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7880
	if (!cr6.eq) goto loc_83AA7880;
loc_83AA789C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA78A4"))) PPC_WEAK_FUNC(sub_83AA78A4);
PPC_FUNC_IMPL(__imp__sub_83AA78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA78A8"))) PPC_WEAK_FUNC(sub_83AA78A8);
PPC_FUNC_IMPL(__imp__sub_83AA78A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA78B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa7910
	if (cr0.eq) goto loc_83AA7910;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83aa78d8
	goto loc_83AA78D8;
loc_83AA78D0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA78D8;
	sub_83AA5E98(ctx, base);
loc_83AA78D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7910
	if (cr6.eq) goto loc_83AA7910;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83aa78f8
	if (!cr6.eq) goto loc_83AA78F8;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83AA78F8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x83aa78d0
	if (!cr6.eq) goto loc_83AA78D0;
loc_83AA7910:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa79a8
	if (cr6.eq) goto loc_83AA79A8;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
loc_83AA7920:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83aa7988
	if (cr6.eq) goto loc_83AA7988;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x83aa799c
	if (!cr6.gt) goto loc_83AA799C;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x83aa799c
	if (cr6.gt) goto loc_83AA799C;
	// lwz r10,29004(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29004);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,76(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x83aa796c
	goto loc_83AA796C;
loc_83AA7954:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA7960;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa7978
	if (!cr0.eq) goto loc_83AA7978;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA796C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7954
	if (!cr6.eq) goto loc_83AA7954;
	// b 0x83aa799c
	goto loc_83AA799C;
loc_83AA7978:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7984;
	sub_83AA7A40(ctx, base);
	// b 0x83aa799c
	goto loc_83AA799C;
loc_83AA7988:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ace198
	ctx.lr = 0x83AA799C;
	sub_83ACE198(ctx, base);
loc_83AA799C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa7920
	if (!cr6.eq) goto loc_83AA7920;
loc_83AA79A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA79B0"))) PPC_WEAK_FUNC(sub_83AA79B0);
PPC_FUNC_IMPL(__imp__sub_83AA79B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA79B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aa79e4
	if (cr6.eq) goto loc_83AA79E4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83aa79f4
	if (!cr6.gt) goto loc_83AA79F4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83aa79fc
	if (!cr6.gt) goto loc_83AA79FC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83aa79f4
	if (!cr6.eq) goto loc_83AA79F4;
loc_83AA79E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83acdf60
	ctx.lr = 0x83AA79F4;
	sub_83ACDF60(ctx, base);
loc_83AA79F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83AA79FC:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa7a28
	goto loc_83AA7A28;
loc_83AA7A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA7A1C;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa7a34
	if (!cr0.eq) goto loc_83AA7A34;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7A28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7a10
	if (!cr6.eq) goto loc_83AA7A10;
	// b 0x83aa79f4
	goto loc_83AA79F4;
loc_83AA7A34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa7140
	ctx.lr = 0x83AA7A3C;
	sub_83AA7140(ctx, base);
	// b 0x83aa79f4
	goto loc_83AA79F4;
}

__attribute__((alias("__imp__sub_83AA7A40"))) PPC_WEAK_FUNC(sub_83AA7A40);
PPC_FUNC_IMPL(__imp__sub_83AA7A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA7A48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,236(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x83aa7a74
	goto loc_83AA7A74;
loc_83AA7A60:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa77e0
	ctx.lr = 0x83AA7A70;
	sub_83AA77E0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7A74:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7a60
	if (!cr6.eq) goto loc_83AA7A60;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x83aa7acc
	goto loc_83AA7ACC;
loc_83AA7A84:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7aa4
	if (!cr6.eq) goto loc_83AA7AA4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7AA0;
	sub_83AA7A40(ctx, base);
	// b 0x83aa7ac8
	goto loc_83AA7AC8;
loc_83AA7AA4:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa7ac0
	goto loc_83AA7AC0;
loc_83AA7AAC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7ABC;
	sub_83AA7A40(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7AC0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7aac
	if (!cr6.eq) goto loc_83AA7AAC;
loc_83AA7AC8:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83AA7ACC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa7a84
	if (!cr6.eq) goto loc_83AA7A84;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83aa7ae8
	if (cr6.eq) goto loc_83AA7AE8;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83aa7aec
	if (!cr6.eq) goto loc_83AA7AEC;
loc_83AA7AE8:
	// stb r11,64(r27)
	PPC_STORE_U8(ctx.r27.u32 + 64, ctx.r11.u8);
loc_83AA7AEC:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x83aa7afc
	if (cr6.eq) goto loc_83AA7AFC;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83aa7b00
	if (!cr6.eq) goto loc_83AA7B00;
loc_83AA7AFC:
	// stb r11,107(r27)
	PPC_STORE_U8(ctx.r27.u32 + 107, ctx.r11.u8);
loc_83AA7B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7B08"))) PPC_WEAK_FUNC(sub_83AA7B08);
PPC_FUNC_IMPL(__imp__sub_83AA7B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA7B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,236(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83aa7b5c
	if (cr6.eq) goto loc_83AA7B5C;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
loc_83AA7B30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x83aa7b48
	if (cr6.eq) goto loc_83AA7B48;
	// lhz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 208);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa7b50
	if (!cr6.eq) goto loc_83AA7B50;
loc_83AA7B48:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aa78a8
	ctx.lr = 0x83AA7B50;
	sub_83AA78A8(ctx, base);
loc_83AA7B50:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7b30
	if (!cr6.eq) goto loc_83AA7B30;
loc_83AA7B5C:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x83aa7bb4
	goto loc_83AA7BB4;
loc_83AA7B64:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7b84
	if (!cr6.eq) goto loc_83AA7B84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83aa7b08
	ctx.lr = 0x83AA7B80;
	sub_83AA7B08(ctx, base);
	// b 0x83aa7bb0
	goto loc_83AA7BB0;
loc_83AA7B84:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa7ba8
	goto loc_83AA7BA8;
loc_83AA7B8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa7ba4
	if (cr6.eq) goto loc_83AA7BA4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83aa7b08
	ctx.lr = 0x83AA7BA4;
	sub_83AA7B08(ctx, base);
loc_83AA7BA4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7BA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7b8c
	if (!cr6.eq) goto loc_83AA7B8C;
loc_83AA7BB0:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA7BB4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa7b64
	if (!cr6.eq) goto loc_83AA7B64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7BC4"))) PPC_WEAK_FUNC(sub_83AA7BC4);
PPC_FUNC_IMPL(__imp__sub_83AA7BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA7BC8"))) PPC_WEAK_FUNC(sub_83AA7BC8);
PPC_FUNC_IMPL(__imp__sub_83AA7BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA7BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7c98
	if (cr6.eq) goto loc_83AA7C98;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r30.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// lhz r8,276(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 276);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83aa7c28
	if (!cr6.eq) goto loc_83AA7C28;
	// lhz r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 280);
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bne cr6,0x83aa7c28
	if (!cr6.eq) goto loc_83AA7C28;
	// lhz r10,278(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 278);
	// sth r10,278(r11)
	PPC_STORE_U16(ctx.r11.u32 + 278, ctx.r10.u16);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83aa5978
	ctx.lr = 0x83AA7C28;
	sub_83AA5978(ctx, base);
loc_83AA7C28:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r5,263(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 263);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83aa7c5c
	if (cr6.lt) goto loc_83AA7C5C;
	// beq cr6,0x83aa7c50
	if (cr6.eq) goto loc_83AA7C50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,30480
	ctx.r4.s64 = ctx.r11.s64 + 30480;
	// bl 0x831ea400
	ctx.lr = 0x83AA7C4C;
	sub_831EA400(ctx, base);
	// b 0x83aa7c68
	goto loc_83AA7C68;
loc_83AA7C50:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83aa7c64
	goto loc_83AA7C64;
loc_83AA7C5C:
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83AA7C64:
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7C68;
	sub_83AA7A40(ctx, base);
loc_83AA7C68:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// bl 0x83aa3ce8
	ctx.lr = 0x83AA7C88;
	sub_83AA3CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x83a9ccb8
	ctx.lr = 0x83AA7C98;
	sub_83A9CCB8(ctx, base);
loc_83AA7C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7CA0"))) PPC_WEAK_FUNC(sub_83AA7CA0);
PPC_FUNC_IMPL(__imp__sub_83AA7CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA7CA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7d20
	if (cr6.eq) goto loc_83AA7D20;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa7d14
	goto loc_83AA7D14;
loc_83AA7CCC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7cec
	if (!cr6.eq) goto loc_83AA7CEC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7CE8;
	sub_83AA7A40(ctx, base);
	// b 0x83aa7d10
	goto loc_83AA7D10;
loc_83AA7CEC:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa7d08
	goto loc_83AA7D08;
loc_83AA7CF4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7D04;
	sub_83AA7A40(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7D08:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7cf4
	if (!cr6.eq) goto loc_83AA7CF4;
loc_83AA7D10:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA7D14:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa7ccc
	if (!cr6.eq) goto loc_83AA7CCC;
	// b 0x83aa7da4
	goto loc_83AA7DA4;
loc_83AA7D20:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aa7d9c
	goto loc_83AA7D9C;
loc_83AA7D30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa7d90
	goto loc_83AA7D90;
loc_83AA7D3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa7d8c
	if (!cr6.eq) goto loc_83AA7D8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa7d68
	if (!cr6.eq) goto loc_83AA7D68;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7D64;
	sub_83AA7A40(ctx, base);
	// b 0x83aa7d8c
	goto loc_83AA7D8C;
loc_83AA7D68:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83aa7d84
	goto loc_83AA7D84;
loc_83AA7D70:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA7D80;
	sub_83AA7A40(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA7D84:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa7d70
	if (!cr6.eq) goto loc_83AA7D70;
loc_83AA7D8C:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA7D90:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa7d3c
	if (!cr6.eq) goto loc_83AA7D3C;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83AA7D9C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa7d30
	if (!cr6.eq) goto loc_83AA7D30;
loc_83AA7DA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7DAC"))) PPC_WEAK_FUNC(sub_83AA7DAC);
PPC_FUNC_IMPL(__imp__sub_83AA7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA7DB0"))) PPC_WEAK_FUNC(sub_83AA7DB0);
PPC_FUNC_IMPL(__imp__sub_83AA7DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA7DB8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa7ee0
	if (cr6.eq) goto loc_83AA7EE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r24,r11,30552
	ctx.r24.s64 = ctx.r11.s64 + 30552;
loc_83AA7DEC:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaac88
	ctx.lr = 0x83AA7E08;
	sub_83AAAC88(ctx, base);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa7ed4
	if (!cr0.eq) goto loc_83AA7ED4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa7e38
	if (!cr6.eq) goto loc_83AA7E38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x83aa7e7c
	if (!cr6.eq) goto loc_83AA7E7C;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x83aa7e7c
	goto loc_83AA7E7C;
loc_83AA7E38:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa7e7c
	if (cr0.eq) goto loc_83AA7E7C;
loc_83AA7E40:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aa7e58
	if (cr6.eq) goto loc_83AA7E58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa7e40
	if (!cr0.eq) goto loc_83AA7E40;
loc_83AA7E58:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7e7c
	if (cr6.eq) goto loc_83AA7E7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa7e7c
	if (!cr6.eq) goto loc_83AA7E7C;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83AA7E7C:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne cr6,0x83aa7ecc
	if (!cr6.eq) goto loc_83AA7ECC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa7eb4
	if (cr6.eq) goto loc_83AA7EB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aa7bc8
	ctx.lr = 0x83AA7EB0;
	sub_83AA7BC8(ctx, base);
	// b 0x83aa7ecc
	goto loc_83AA7ECC;
loc_83AA7EB4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa7ec8
	if (cr6.eq) goto loc_83AA7EC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA7EC8;
	sub_831EA3F0(ctx, base);
loc_83AA7EC8:
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
loc_83AA7ECC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83AA7ED4;
	sub_83AA6E90(ctx, base);
loc_83AA7ED4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa7dec
	if (!cr6.eq) goto loc_83AA7DEC;
loc_83AA7EE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA7F00"))) PPC_WEAK_FUNC(sub_83AA7F00);
PPC_FUNC_IMPL(__imp__sub_83AA7F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AA7F08;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,244(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83aa7fd4
	if (cr6.eq) goto loc_83AA7FD4;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83aa7f4c
	if (!cr6.eq) goto loc_83AA7F4C;
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa7f54
	if (cr0.eq) goto loc_83AA7F54;
loc_83AA7F4C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83aa7f68
	if (!cr6.eq) goto loc_83AA7F68;
loc_83AA7F54:
	// lha r11,278(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 278));
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83aa7f68
	if (!cr0.gt) goto loc_83AA7F68;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r11.u16);
loc_83AA7F68:
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa7fbc
	if (!cr0.eq) goto loc_83AA7FBC;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lbz r10,261(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 261);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x83aa7f90
	if (cr0.eq) goto loc_83AA7F90;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83AA7F90:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa5ba8
	ctx.lr = 0x83AA7FB8;
	sub_83AA5BA8(ctx, base);
	// b 0x83aa7fd4
	goto loc_83AA7FD4;
loc_83AA7FBC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83aa8000
	if (!cr6.eq) goto loc_83AA8000;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x83aa7bc8
	ctx.lr = 0x83AA7FD4;
	sub_83AA7BC8(ctx, base);
loc_83AA7FD4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83aa8000
	if (!cr6.eq) goto loc_83AA8000;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8058
	if (!cr6.eq) goto loc_83AA8058;
	// lbz r11,17(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa804c
	if (!cr0.eq) goto loc_83AA804C;
	// lha r11,278(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 278));
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83aa8028
	if (cr0.gt) goto loc_83AA8028;
loc_83AA8000:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83aa804c
	if (!cr6.eq) goto loc_83AA804C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8058
	if (!cr6.eq) goto loc_83AA8058;
	// lha r11,278(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 278));
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83aa804c
	if (!cr0.gt) goto loc_83AA804C;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x83aa802c
	goto loc_83AA802C;
loc_83AA8028:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_83AA802C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa5ba8
	ctx.lr = 0x83AA804C;
	sub_83AA5BA8(ctx, base);
loc_83AA804C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa80c0
	if (cr6.eq) goto loc_83AA80C0;
loc_83AA8058:
	// lbz r5,263(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 263);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83aa80ac
	if (cr6.lt) goto loc_83AA80AC;
	// beq cr6,0x83aa807c
	if (cr6.eq) goto loc_83AA807C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,30624
	ctx.r4.s64 = ctx.r11.s64 + 30624;
	// bl 0x831ea400
	ctx.lr = 0x83AA8078;
	sub_831EA400(ctx, base);
	// b 0x83aa80a4
	goto loc_83AA80A4;
loc_83AA807C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83aa80c8
	if (!cr6.eq) goto loc_83AA80C8;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,2
	ctx.r4.s64 = 2;
loc_83AA808C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aa77e0
	ctx.lr = 0x83AA8094;
	sub_83AA77E0(ctx, base);
loc_83AA8094:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r11.u32);
loc_83AA809C:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_83AA80A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83AA80AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83aa80c8
	if (!cr6.eq) goto loc_83AA80C8;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83aa808c
	goto loc_83AA808C;
loc_83AA80C0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83aa8094
	if (cr6.eq) goto loc_83AA8094;
loc_83AA80C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r11.u32);
	// b 0x83aa809c
	goto loc_83AA809C;
}

__attribute__((alias("__imp__sub_83AA80D4"))) PPC_WEAK_FUNC(sub_83AA80D4);
PPC_FUNC_IMPL(__imp__sub_83AA80D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA80D8"))) PPC_WEAK_FUNC(sub_83AA80D8);
PPC_FUNC_IMPL(__imp__sub_83AA80D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AA80E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa83f0
	if (cr6.eq) goto loc_83AA83F0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8120
	if (!cr6.eq) goto loc_83AA8120;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
loc_83AA8120:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83aaddb0
	ctx.lr = 0x83AA8128;
	sub_83AADDB0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa8140
	if (cr6.eq) goto loc_83AA8140;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aa8170
	if (!cr6.eq) goto loc_83AA8170;
loc_83AA8140:
	// stw r4,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r4.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aa815c
	if (!cr6.eq) goto loc_83AA815C;
	// stw r28,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r28.u32);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r11,224(r30)
	PPC_STORE_U16(ctx.r30.u32 + 224, ctx.r11.u16);
loc_83AA815C:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83aaddb8
	ctx.lr = 0x83AA8168;
	sub_83AADDB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa83f0
	if (cr0.eq) goto loc_83AA83F0;
loc_83AA8170:
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// sth r10,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r10.u16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa819c
	if (cr0.eq) goto loc_83AA819C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83aa819c
	if (!cr6.gt) goto loc_83AA819C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_83AA819C:
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa8218
	if (cr0.eq) goto loc_83AA8218;
	// lwz r11,29004(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29004);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa81e0
	if (!cr6.gt) goto loc_83AA81E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,64(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83abbfc8
	ctx.lr = 0x83AA81CC;
	sub_83ABBFC8(ctx, base);
	// b 0x83aa81e0
	goto loc_83AA81E0;
loc_83AA81D0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aa81dc
	if (cr6.eq) goto loc_83AA81DC;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_83AA81DC:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_83AA81E0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa8218
	if (cr6.eq) goto loc_83AA8218;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83aa8200
	if (!cr6.eq) goto loc_83AA8200;
	// stw r23,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r23.u32);
loc_83AA8200:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// bne cr6,0x83aa81d0
	if (!cr6.eq) goto loc_83AA81D0;
loc_83AA8218:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,122(r27)
	PPC_STORE_U8(ctx.r27.u32 + 122, ctx.r11.u8);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aa8258
	if (!cr6.eq) goto loc_83AA8258;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stb r10,122(r27)
	PPC_STORE_U8(ctx.r27.u32 + 122, ctx.r10.u8);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa8250
	if (!cr6.eq) goto loc_83AA8250;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_83AA8250:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 132, temp.u32);
loc_83AA8258:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83abf778
	ctx.lr = 0x83AA8264;
	sub_83ABF778(ctx, base);
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa83ac
	if (cr0.eq) goto loc_83AA83AC;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83aa828c
	if (cr6.gt) goto loc_83AA828C;
	// lwz r11,29004(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29004);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa8358
	if (!cr6.gt) goto loc_83AA8358;
loc_83AA828C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aa8320
	if (cr6.eq) goto loc_83AA8320;
loc_83AA8298:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83aa8300
	if (cr6.eq) goto loc_83AA8300;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x83aa8314
	if (!cr6.gt) goto loc_83AA8314;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x83aa8314
	if (cr6.gt) goto loc_83AA8314;
	// lwz r10,29004(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29004);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,76(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x83aa82e4
	goto loc_83AA82E4;
loc_83AA82CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AA82D8;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa82f0
	if (!cr0.eq) goto loc_83AA82F0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA82E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa82cc
	if (!cr6.eq) goto loc_83AA82CC;
	// b 0x83aa8314
	goto loc_83AA8314;
loc_83AA82F0:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA82FC;
	sub_83AA7A40(ctx, base);
	// b 0x83aa8314
	goto loc_83AA8314;
loc_83AA8300:
	// li r6,52
	ctx.r6.s64 = 52;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ace198
	ctx.lr = 0x83AA8314;
	sub_83ACE198(ctx, base);
loc_83AA8314:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa8298
	if (!cr6.eq) goto loc_83AA8298;
loc_83AA8320:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83aa8358
	if (cr6.eq) goto loc_83AA8358;
	// lwz r31,20(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lhz r29,208(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// b 0x83aa8350
	goto loc_83AA8350;
loc_83AA8334:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x83aa834c
	if (cr6.eq) goto loc_83AA834C;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa7b08
	ctx.lr = 0x83AA834C;
	sub_83AA7B08(ctx, base);
loc_83AA834C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AA8350:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aa8334
	if (!cr6.eq) goto loc_83AA8334;
loc_83AA8358:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aa83ac
	if (cr6.eq) goto loc_83AA83AC;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
loc_83AA8368:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa8384
	if (!cr6.eq) goto loc_83AA8384;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// b 0x83aa8388
	goto loc_83AA8388;
loc_83AA8384:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83AA8388:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// beq cr6,0x83aa83ac
	if (cr6.eq) goto loc_83AA83AC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x83aa8368
	goto loc_83AA8368;
loc_83AA83AC:
	// bl 0x83aa54b8
	ctx.lr = 0x83AA83B0;
	sub_83AA54B8(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa83f0
	if (cr6.eq) goto loc_83AA83F0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf270
	ctx.lr = 0x83AA83CC;
	sub_83AAF270(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83aa83f0
	if (!cr6.eq) goto loc_83AA83F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83aa83f0
	if (!cr6.gt) goto loc_83AA83F0;
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lbz r4,5(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// lwz r3,64(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83AA83F0;
	sub_83ABBFC8(ctx, base);
loc_83AA83F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA83F8"))) PPC_WEAK_FUNC(sub_83AA83F8);
PPC_FUNC_IMPL(__imp__sub_83AA83F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AA8400;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,29004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29004);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aa84b4
	if (cr6.eq) goto loc_83AA84B4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83AA8424:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83aa84a0
	goto loc_83AA84A0;
loc_83AA8430:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8464
	if (!cr6.eq) goto loc_83AA8464;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa849c
	if (!cr6.eq) goto loc_83AA849C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA845C;
	sub_83AA7A40(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// b 0x83aa849c
	goto loc_83AA849C;
loc_83AA8464:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x83aa8494
	goto loc_83AA8494;
loc_83AA846C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aa8490
	if (!cr6.eq) goto loc_83AA8490;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AA848C;
	sub_83AA7A40(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_83AA8490:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AA8494:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa846c
	if (!cr6.eq) goto loc_83AA846C;
loc_83AA849C:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83AA84A0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aa8430
	if (!cr6.eq) goto loc_83AA8430;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aa8424
	if (!cr6.eq) goto loc_83AA8424;
loc_83AA84B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA84BC"))) PPC_WEAK_FUNC(sub_83AA84BC);
PPC_FUNC_IMPL(__imp__sub_83AA84BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA84C0"))) PPC_WEAK_FUNC(sub_83AA84C0);
PPC_FUNC_IMPL(__imp__sub_83AA84C0) {
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
	ctx.lr = 0x83AA84C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce774
	ctx.lr = 0x83AA84D0;
	__savefpr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stw r10,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f29,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// stb r21,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r21.u8);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// bl 0x83a81ee8
	ctx.lr = 0x83AA8534;
	sub_83A81EE8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 + ctx.r10.u64;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bne cr6,0x83aa8560
	if (!cr6.eq) goto loc_83AA8560;
	// stw r15,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r15.u32);
	// b 0x83aa8568
	goto loc_83AA8568;
loc_83AA8560:
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_83AA8568:
	// lbz r11,226(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 226);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// stb r11,108(r22)
	PPC_STORE_U8(ctx.r22.u32 + 108, ctx.r11.u8);
	// beq cr6,0x83aa86e8
	if (cr6.eq) goto loc_83AA86E8;
	// lwz r29,516(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8674
	if (!cr6.eq) goto loc_83AA8674;
	// lhz r11,272(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 272);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa8674
	if (!cr0.eq) goto loc_83AA8674;
	// lbz r11,64(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa8674
	if (!cr0.eq) goto loc_83AA8674;
	// lwz r30,532(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// li r11,9
	ctx.r11.s64 = 9;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x83aa861c
	if (cr6.eq) goto loc_83AA861C;
	// lha r11,278(r16)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r16.u32 + 278));
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aa8614
	if (!cr0.eq) goto loc_83AA8614;
	// lbz r11,262(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 262);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa860c
	if (cr0.eq) goto loc_83AA860C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83aa8604
	if (cr6.eq) goto loc_83AA8604;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83aa85fc
	if (cr6.eq) goto loc_83AA85FC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83aa85f4
	if (cr6.eq) goto loc_83AA85F4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x83aa861c
	if (!cr6.eq) goto loc_83AA861C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83aa8618
	goto loc_83AA8618;
loc_83AA85F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83aa8618
	goto loc_83AA8618;
loc_83AA85FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83aa8618
	goto loc_83AA8618;
loc_83AA8604:
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// b 0x83aa861c
	goto loc_83AA861C;
loc_83AA860C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83aa8618
	goto loc_83AA8618;
loc_83AA8614:
	// li r11,11
	ctx.r11.s64 = 11;
loc_83AA8618:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_83AA861C:
	// stw r16,32(r22)
	PPC_STORE_U32(ctx.r22.u32 + 32, ctx.r16.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,36(r22)
	PPC_STORE_U32(ctx.r22.u32 + 36, ctx.r31.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83abc220
	ctx.lr = 0x83AA8640;
	sub_83ABC220(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r21,32(r22)
	PPC_STORE_U32(ctx.r22.u32 + 32, ctx.r21.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r21,36(r22)
	PPC_STORE_U32(ctx.r22.u32 + 36, ctx.r21.u32);
	// beq cr6,0x83aa8674
	if (cr6.eq) goto loc_83AA8674;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aa8674
	if (!cr6.eq) goto loc_83AA8674;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83AA8674:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa8694
	if (!cr6.eq) goto loc_83AA8694;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa8694
	if (!cr6.eq) goto loc_83AA8694;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// b 0x83aa86b0
	goto loc_83AA86B0;
loc_83AA8694:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83aa86b0
	if (!cr6.eq) goto loc_83AA86B0;
	// lbz r11,260(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 260);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_83AA86B0:
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83aa86e8
	if (cr6.eq) goto loc_83AA86E8;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// addi r10,r10,2000
	ctx.r10.s64 = ctx.r10.s64 + 2000;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AA86E8;
	sub_83AB1EF0(ctx, base);
loc_83AA86E8:
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa8768
	if (cr0.eq) goto loc_83AA8768;
	// lwz r25,76(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lwz r26,64(r22)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// li r27,8
	ctx.r27.s64 = 8;
loc_83AA8704:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa875c
	if (cr0.eq) goto loc_83AA875C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83aa875c
	if (cr6.eq) goto loc_83AA875C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_83AA8720:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lhzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aa8750
	if (cr6.eq) goto loc_83AA8750;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a88f00
	ctx.lr = 0x83AA8738;
	sub_83A88F00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa8750
	if (cr0.eq) goto loc_83AA8750;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83AA8750;
	sub_83AB31C0(ctx, base);
loc_83AA8750:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x83aa8720
	if (!cr0.eq) goto loc_83AA8720;
loc_83AA875C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x83aa8704
	if (!cr0.eq) goto loc_83AA8704;
loc_83AA8768:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83aaa540
	if (cr6.eq) goto loc_83AAA540;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaa540
	if (cr6.eq) goto loc_83AAA540;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa87a4
	if (cr0.eq) goto loc_83AA87A4;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa77e0
	ctx.lr = 0x83AA8798;
	sub_83AA77E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x83aa87b4
	goto loc_83AA87B4;
loc_83AA87A4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83aa87b4
	if (cr6.lt) goto loc_83AA87B4;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
loc_83AA87B4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r20,r11,29004
	ctx.r20.s64 = ctx.r11.s64 + 29004;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// beq 0x83aa8ec4
	if (cr0.eq) goto loc_83AA8EC4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83aa8ec4
	if (cr6.eq) goto loc_83AA8EC4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa8ec4
	if (cr6.eq) goto loc_83AA8EC4;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x83aa8ec4
	if (cr6.lt) goto loc_83AA8EC4;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
loc_83AA87F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2000
	cr6.compare<int32_t>(ctx.r11.s32, 2000, xer);
	// bgt cr6,0x83aa8dec
	if (cr6.gt) goto loc_83AA8DEC;
	// cmpwi cr6,r11,2000
	cr6.compare<int32_t>(ctx.r11.s32, 2000, xer);
	// beq cr6,0x83aa8c84
	if (cr6.eq) goto loc_83AA8C84;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa8e60
	if (cr6.eq) goto loc_83AA8E60;
	// cmpwi cr6,r11,998
	cr6.compare<int32_t>(ctx.r11.s32, 998, xer);
	// beq cr6,0x83aa8b1c
	if (cr6.eq) goto loc_83AA8B1C;
	// cmpwi cr6,r11,999
	cr6.compare<int32_t>(ctx.r11.s32, 999, xer);
	// beq cr6,0x83aa8aa8
	if (cr6.eq) goto loc_83AA8AA8;
	// cmpwi cr6,r11,1200
	cr6.compare<int32_t>(ctx.r11.s32, 1200, xer);
	// beq cr6,0x83aa8958
	if (cr6.eq) goto loc_83AA8958;
	// cmpwi cr6,r11,1201
	cr6.compare<int32_t>(ctx.r11.s32, 1201, xer);
	// bne cr6,0x83aa8e50
	if (!cr6.eq) goto loc_83AA8E50;
	// rlwinm. r26,r10,30,18,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// ble 0x83aa8ea8
	if (!cr0.gt) goto loc_83AA8EA8;
loc_83AA8868:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh. r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83aa8948
	if (cr0.eq) goto loc_83AA8948;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa88ec
	if (cr6.eq) goto loc_83AA88EC;
loc_83AA88B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83aa88d4
	if (!cr6.eq) goto loc_83AA88D4;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x83aa88e4
	if (cr6.eq) goto loc_83AA88E4;
loc_83AA88D4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa88b4
	if (!cr6.eq) goto loc_83AA88B4;
loc_83AA88E4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa8948
	if (!cr6.eq) goto loc_83AA8948;
loc_83AA88EC:
	// bl 0x83aa52a0
	ctx.lr = 0x83AA88F0;
	sub_83AA52A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa8948
	if (cr0.eq) goto loc_83AA8948;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa892c
	if (!cr6.eq) goto loc_83AA892C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x83aa8938
	goto loc_83AA8938;
loc_83AA892C:
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83AA8938:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83AA8948:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83aa8868
	if (cr6.lt) goto loc_83AA8868;
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8958:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// rotlwi r8,r7,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lbz r5,5(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// beq 0x83aa8ea8
	if (cr0.eq) goto loc_83AA8EA8;
loc_83AA89B4:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83aa89d4
	if (!cr6.eq) goto loc_83AA89D4;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x83aa89e4
	if (cr6.eq) goto loc_83AA89E4;
loc_83AA89D4:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa89b4
	if (!cr6.eq) goto loc_83AA89B4;
loc_83AA89E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa8ea8
	if (cr6.eq) goto loc_83AA8EA8;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83aa8a28
	if (cr6.eq) goto loc_83AA8A28;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aa8a28
	if (!cr6.eq) goto loc_83AA8A28;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r15,r11,r15
	ctx.r15.s64 = ctx.r15.s64 - ctx.r11.s64;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aa8ea8
	if (!cr6.gt) goto loc_83AA8EA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8A28:
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa8a48
	if (!cr6.eq) goto loc_83AA8A48;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bne cr6,0x83aa8a90
	if (!cr6.eq) goto loc_83AA8A90;
	// stw r21,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
	// b 0x83aa8a90
	goto loc_83AA8A90;
loc_83AA8A48:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83aa8a90
	if (cr0.eq) goto loc_83AA8A90;
loc_83AA8A54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x83aa8a6c
	if (cr6.eq) goto loc_83AA8A6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa8a54
	if (!cr0.eq) goto loc_83AA8A54;
loc_83AA8A6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa8a90
	if (cr6.eq) goto loc_83AA8A90;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa8a90
	if (!cr6.eq) goto loc_83AA8A90;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AA8A90:
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA8AA4;
	sub_83AA5E98(ctx, base);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8AA8:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83aa8e50
	if (cr6.eq) goto loc_83AA8E50;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// lwz r9,44(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r9,r14
	ctx.r6.u64 = ctx.r9.u64 + ctx.r14.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// cmpw cr6,r15,r6
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r6.s32, xer);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bne cr6,0x83aa8af8
	if (!cr6.eq) goto loc_83AA8AF8;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_83AA8AF8:
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r15,r10,r11
	ctx.r15.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8B1C:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83aa8e50
	if (cr6.eq) goto loc_83AA8E50;
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83AA8B38;
	sub_83A9BD48(ctx, base);
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// add r10,r11,r14
	ctx.r10.u64 = ctx.r11.u64 + ctx.r14.u64;
	// cmpw cr6,r15,r10
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, xer);
	// bne cr6,0x83aa8b54
	if (!cr6.eq) goto loc_83AA8B54;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83AA8B54:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r10,-2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2);
	// lbz r9,-1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 | ctx.r11.u64;
	// beq cr6,0x83aa8bb8
	if (cr6.eq) goto loc_83AA8BB8;
	// cmplwi cr6,r25,65535
	cr6.compare<uint32_t>(ctx.r25.u32, 65535, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r29,-2
	ctx.r5.s64 = ctx.r29.s64 + -2;
	// bne cr6,0x83aa8ba8
	if (!cr6.eq) goto loc_83AA8BA8;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
loc_83AA8BA8:
	// bl 0x83aa1ee0
	ctx.lr = 0x83AA8BAC;
	sub_83AA1EE0(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,8(r20)
	PPC_STORE_U16(ctx.r20.u32 + 8, ctx.r10.u16);
	// b 0x83aa8bbc
	goto loc_83AA8BBC;
loc_83AA8BB8:
	// lhz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r20.u32 + 8);
loc_83AA8BBC:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83aa8c50
	if (!cr6.gt) goto loc_83AA8C50;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_83AA8BD0:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r6,-3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// bne cr6,0x83aa8c48
	if (!cr6.eq) goto loc_83AA8C48;
	// cmplwi cr6,r25,65535
	cr6.compare<uint32_t>(ctx.r25.u32, 65535, xer);
	// beq cr6,0x83aa8c34
	if (cr6.eq) goto loc_83AA8C34;
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, xer);
	// bne cr6,0x83aa8c28
	if (!cr6.eq) goto loc_83AA8C28;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_83AA8C28:
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// b 0x83aa8c3c
	goto loc_83AA8C3C;
loc_83AA8C34:
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
loc_83AA8C3C:
	// bne cr6,0x83aa8c48
	if (!cr6.eq) goto loc_83AA8C48;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83AA8C48:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83aa8bd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA8BD0;
loc_83AA8C50:
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r15,r11,r28
	ctx.r15.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8C84:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83aa8e50
	if (cr6.eq) goto loc_83AA8E50;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa8dc4
	if (cr6.eq) goto loc_83AA8DC4;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r9,2003
	cr6.compare<uint32_t>(ctx.r9.u32, 2003, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x83aa8ce4
	if (!cr6.eq) goto loc_83AA8CE4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_83AA8CE4:
	// sth r11,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r11.u16);
	// stw r31,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r31.u32);
	// stb r18,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r18.u8);
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// add r10,r11,r14
	ctx.r10.u64 = ctx.r11.u64 + ctx.r14.u64;
	// cmpw cr6,r15,r10
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, xer);
	// bne cr6,0x83aa8d18
	if (!cr6.eq) goto loc_83AA8D18;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
	// bge 0x83aa8d2c
	if (!cr0.lt) goto loc_83AA8D2C;
	// stw r18,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r18.u32);
	// b 0x83aa8d2c
	goto loc_83AA8D2C;
loc_83AA8D18:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83aa8d28
	if (!cr6.gt) goto loc_83AA8D28;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83AA8D28:
	// stw r11,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
loc_83AA8D2C:
	// lwz r30,12(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x83aa8d74
	if (cr6.eq) goto loc_83AA8D74;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,44(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83aa8d58
	if (!cr6.gt) goto loc_83AA8D58;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r18,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r18.u32);
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// b 0x83aa8d6c
	goto loc_83AA8D6C;
loc_83AA8D58:
	// stw r21,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r21.u32);
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
loc_83AA8D6C:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x83aa8d78
	goto loc_83AA8D78;
loc_83AA8D74:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_83AA8D78:
	// lhz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// add r8,r23,r15
	ctx.r8.u64 = ctx.r23.u64 + ctx.r15.u64;
	// sth r11,120(r22)
	PPC_STORE_U16(ctx.r22.u32 + 120, ctx.r11.u16);
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// beq cr6,0x83aa8da8
	if (cr6.eq) goto loc_83AA8DA8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf. r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x83aa8da8
	if (!cr0.lt) goto loc_83AA8DA8;
	// lwz r11,264(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 264);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_83AA8DA8:
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83aa80d8
	ctx.lr = 0x83AA8DBC;
	sub_83AA80D8(ctx, base);
	// stw r30,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r30.u32);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8DC4:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa8e50
	if (!cr6.eq) goto loc_83AA8E50;
	// lhz r11,272(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 272);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,272(r16)
	PPC_STORE_U16(ctx.r16.u32 + 272, ctx.r11.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83aa8e58
	goto loc_83AA8E58;
loc_83AA8DEC:
	// cmpwi cr6,r11,2001
	cr6.compare<int32_t>(ctx.r11.s32, 2001, xer);
	// beq cr6,0x83aa8e70
	if (cr6.eq) goto loc_83AA8E70;
	// cmpwi cr6,r11,3999
	cr6.compare<int32_t>(ctx.r11.s32, 3999, xer);
	// beq cr6,0x83aa8ea8
	if (cr6.eq) goto loc_83AA8EA8;
	// cmpwi cr6,r11,4000
	cr6.compare<int32_t>(ctx.r11.s32, 4000, xer);
	// beq cr6,0x83aa8e60
	if (cr6.eq) goto loc_83AA8E60;
	// cmpwi cr6,r11,4050
	cr6.compare<int32_t>(ctx.r11.s32, 4050, xer);
	// bne cr6,0x83aa8e50
	if (!cr6.eq) goto loc_83AA8E50;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83aa8e50
	if (cr6.eq) goto loc_83AA8E50;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r8,r19,53
	ctx.r8.s64 = ctx.r19.s64 + 53;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7f00
	ctx.lr = 0x83AA8E48;
	sub_83AA7F00(ctx, base);
	// lwz r24,112(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8E50:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83AA8E58:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8E60:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x83aa8ea8
	goto loc_83AA8EA8;
loc_83AA8E70:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_83AA8EA8:
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 & ctx.r24.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x83aa87f4
	if (!cr6.eq) goto loc_83AA87F4;
loc_83AA8EC4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaa540
	if (cr6.eq) goto loc_83AAA540;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// lfs f28,-29844(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29844);
	ctx.f28.f64 = double(temp.f32);
	// li r25,5
	ctx.r25.s64 = 5;
	// lfs f27,8976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8976);
	ctx.f27.f64 = double(temp.f32);
	// lis r23,-31739
	ctx.r23.s64 = -2080047104;
	// lis r24,-31739
	ctx.r24.s64 = -2080047104;
	// addi r19,r11,30808
	ctx.r19.s64 = ctx.r11.s64 + 30808;
	// addi r18,r10,30696
	ctx.r18.s64 = ctx.r10.s64 + 30696;
	// addi r20,r9,-14560
	ctx.r20.s64 = ctx.r9.s64 + -14560;
loc_83AA8F04:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lbz r28,-1(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3999
	cr6.compare<int32_t>(ctx.r11.s32, 3999, xer);
	// bgt cr6,0x83aa9c60
	if (cr6.gt) goto loc_83AA9C60;
	// cmpwi cr6,r11,3999
	cr6.compare<int32_t>(ctx.r11.s32, 3999, xer);
	// beq cr6,0x83aa9c54
	if (cr6.eq) goto loc_83AA9C54;
	// cmpwi cr6,r11,1253
	cr6.compare<int32_t>(ctx.r11.s32, 1253, xer);
	// bgt cr6,0x83aa96d4
	if (cr6.gt) goto loc_83AA96D4;
	// cmpwi cr6,r11,1250
	cr6.compare<int32_t>(ctx.r11.s32, 1250, xer);
	// bge cr6,0x83aa9580
	if (!cr6.lt) goto loc_83AA9580;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaa108
	if (cr6.eq) goto loc_83AAA108;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(ctx.r11.s32, 98, xer);
	// beq cr6,0x83aa940c
	if (cr6.eq) goto loc_83AA940C;
	// cmpwi cr6,r11,998
	cr6.compare<int32_t>(ctx.r11.s32, 998, xer);
	// beq cr6,0x83aa9270
	if (cr6.eq) goto loc_83AA9270;
	// cmpwi cr6,r11,999
	cr6.compare<int32_t>(ctx.r11.s32, 999, xer);
	// beq cr6,0x83aa9214
	if (cr6.eq) goto loc_83AA9214;
	// cmpwi cr6,r11,1200
	cr6.compare<int32_t>(ctx.r11.s32, 1200, xer);
	// beq cr6,0x83aa9080
	if (cr6.eq) goto loc_83AA9080;
	// cmpwi cr6,r11,1201
	cr6.compare<int32_t>(ctx.r11.s32, 1201, xer);
	// bne cr6,0x83aaa244
	if (!cr6.eq) goto loc_83AAA244;
	// rlwinm. r26,r28,30,18,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFF;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// ble 0x83aaa504
	if (!cr0.gt) goto loc_83AAA504;
loc_83AA8F90:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh. r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83aa9070
	if (cr0.eq) goto loc_83AA9070;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa9014
	if (cr6.eq) goto loc_83AA9014;
loc_83AA8FDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83aa8ffc
	if (!cr6.eq) goto loc_83AA8FFC;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x83aa900c
	if (cr6.eq) goto loc_83AA900C;
loc_83AA8FFC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa8fdc
	if (!cr6.eq) goto loc_83AA8FDC;
loc_83AA900C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa9070
	if (!cr6.eq) goto loc_83AA9070;
loc_83AA9014:
	// bl 0x83aa52a0
	ctx.lr = 0x83AA9018;
	sub_83AA52A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa9070
	if (cr0.eq) goto loc_83AA9070;
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa9054
	if (!cr6.eq) goto loc_83AA9054;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x83aa9060
	goto loc_83AA9060;
loc_83AA9054:
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83AA9060:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83AA9070:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83aa8f90
	if (cr6.lt) goto loc_83AA8F90;
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9080:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,5(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// beq 0x83aaa504
	if (cr0.eq) goto loc_83AAA504;
loc_83AA90DC:
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83aa90fc
	if (!cr6.eq) goto loc_83AA90FC;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x83aa910c
	if (cr6.eq) goto loc_83AA910C;
loc_83AA90FC:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa90dc
	if (!cr6.eq) goto loc_83AA90DC;
loc_83AA910C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aaa504
	if (cr6.eq) goto loc_83AAA504;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83aa9190
	if (cr6.eq) goto loc_83AA9190;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aa9190
	if (!cr6.eq) goto loc_83AA9190;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// beq cr6,0x83aa9178
	if (cr6.eq) goto loc_83AA9178;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AA9178;
	sub_83AB1EF0(ctx, base);
loc_83AA9178:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aaa520
	if (!cr6.gt) goto loc_83AAA520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AA9190:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa91b0
	if (!cr6.eq) goto loc_83AA91B0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne cr6,0x83aa91f8
	if (!cr6.eq) goto loc_83AA91F8;
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// b 0x83aa91f8
	goto loc_83AA91F8;
loc_83AA91B0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83aa91f8
	if (cr0.eq) goto loc_83AA91F8;
loc_83AA91BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aa91d4
	if (cr6.eq) goto loc_83AA91D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aa91bc
	if (!cr0.eq) goto loc_83AA91BC;
loc_83AA91D4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa91f8
	if (cr6.eq) goto loc_83AA91F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aa91f8
	if (!cr6.eq) goto loc_83AA91F8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83AA91F8:
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x83aa5e98
	ctx.lr = 0x83AA9210;
	sub_83AA5E98(ctx, base);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9214:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r14,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r14.s64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83AA9264:
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x83aaa50c
	goto loc_83AAA50C;
loc_83AA9270:
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83AA9284;
	sub_83A9BD48(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r10,-2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2);
	// lbz r9,-1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 | ctx.r8.u64;
	// bne 0x83aa93a4
	if (!cr0.eq) goto loc_83AA93A4;
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa92f8
	if (cr6.eq) goto loc_83AA92F8;
	// cmplwi cr6,r26,65535
	cr6.compare<uint32_t>(ctx.r26.u32, 65535, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r29,-2
	ctx.r5.s64 = ctx.r29.s64 + -2;
	// bne cr6,0x83aa92e4
	if (!cr6.eq) goto loc_83AA92E4;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
loc_83AA92E4:
	// bl 0x83aa1ee0
	ctx.lr = 0x83AA92E8;
	sub_83AA1EE0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// b 0x83aa9300
	goto loc_83AA9300;
loc_83AA92F8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
loc_83AA9300:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83aa9394
	if (!cr6.gt) goto loc_83AA9394;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_83AA9314:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r6,-3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// bne cr6,0x83aa938c
	if (!cr6.eq) goto loc_83AA938C;
	// cmplwi cr6,r26,65535
	cr6.compare<uint32_t>(ctx.r26.u32, 65535, xer);
	// beq cr6,0x83aa9378
	if (cr6.eq) goto loc_83AA9378;
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, xer);
	// bne cr6,0x83aa936c
	if (!cr6.eq) goto loc_83AA936C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_83AA936C:
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// b 0x83aa9380
	goto loc_83AA9380;
loc_83AA9378:
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
loc_83AA9380:
	// bne cr6,0x83aa938c
	if (!cr6.eq) goto loc_83AA938C;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83AA938C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83aa9314
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA9314;
loc_83AA9394:
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83aa93e8
	goto loc_83AA93E8;
loc_83AA93A4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83aa93e8
	if (cr6.lt) goto loc_83AA93E8;
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AA93B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bdnz 0x83aa93b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA93B4;
loc_83AA93E8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x83aa9264
	goto loc_83AA9264;
loc_83AA940C:
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa9494
	if (!cr6.eq) goto loc_83AA9494;
	// bl 0x83ab6ad8
	ctx.lr = 0x83AA9430;
	sub_83AB6AD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83aa98c8
	if (cr0.eq) goto loc_83AA98C8;
	// bl 0x83ab6b90
	ctx.lr = 0x83AA943C;
	sub_83AB6B90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aa9480
	if (cr0.eq) goto loc_83AA9480;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa9458
	if (!cr6.eq) goto loc_83AA9458;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x83aa9464
	goto loc_83AA9464;
loc_83AA9458:
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83AA9464:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x83aa948c
	goto loc_83AA948C;
loc_83AA9480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab7200
	ctx.lr = 0x83AA9488;
	sub_83AB7200(ctx, base);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_83AA948C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa98c8
	if (cr6.eq) goto loc_83AA98C8;
loc_83AA9494:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83aa9504
	if (cr6.eq) goto loc_83AA9504;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83aa9504
	if (!cr6.eq) goto loc_83AA9504;
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r21,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r21.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
loc_83AA9504:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r11,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9580:
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r5,1251
	cr6.compare<int32_t>(ctx.r5.s32, 1251, xer);
	// beq cr6,0x83aa9614
	if (cr6.eq) goto loc_83AA9614;
	// cmpwi cr6,r5,1252
	cr6.compare<int32_t>(ctx.r5.s32, 1252, xer);
	// beq cr6,0x83aa95f4
	if (cr6.eq) goto loc_83AA95F4;
	// cmpwi cr6,r5,1253
	cr6.compare<int32_t>(ctx.r5.s32, 1253, xer);
	// bne cr6,0x83aa9644
	if (!cr6.eq) goto loc_83AA9644;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// b 0x83aa9604
	goto loc_83AA9604;
loc_83AA95F4:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
loc_83AA9604:
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aa9644
	goto loc_83AA9644;
loc_83AA9614:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_83AA9644:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aa9664
	if (cr6.eq) goto loc_83AA9664;
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83AA9660;
	sub_83AC6758(ctx, base);
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_83AA9664:
	// lwz r11,26588(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa504
	if (cr6.eq) goto loc_83AAA504;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831ea798
	ctx.lr = 0x83AA9680;
	sub_831EA798(ctx, base);
	// lwz r3,4(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83AA9690;
	sub_83AA3CE8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,26588(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26588);
	// lwz r3,26592(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26592);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83AA96D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA96D4:
	// cmpwi cr6,r11,1989
	cr6.compare<int32_t>(ctx.r11.s32, 1989, xer);
	// beq cr6,0x83aa9b98
	if (cr6.eq) goto loc_83AA9B98;
	// cmpwi cr6,r11,1990
	cr6.compare<int32_t>(ctx.r11.s32, 1990, xer);
	// beq cr6,0x83aa9ac8
	if (cr6.eq) goto loc_83AA9AC8;
	// cmpwi cr6,r11,1991
	cr6.compare<int32_t>(ctx.r11.s32, 1991, xer);
	// beq cr6,0x83aa99cc
	if (cr6.eq) goto loc_83AA99CC;
	// cmpwi cr6,r11,2000
	cr6.compare<int32_t>(ctx.r11.s32, 2000, xer);
	// beq cr6,0x83aa9918
	if (cr6.eq) goto loc_83AA9918;
	// cmpwi cr6,r11,2001
	cr6.compare<int32_t>(ctx.r11.s32, 2001, xer);
	// beq cr6,0x83aa98d8
	if (cr6.eq) goto loc_83AA98D8;
	// cmpwi cr6,r11,2003
	cr6.compare<int32_t>(ctx.r11.s32, 2003, xer);
	// bne cr6,0x83aaa244
	if (!cr6.eq) goto loc_83AAA244;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa98a4
	if (cr6.eq) goto loc_83AA98A4;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,5(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 | ctx.r6.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x83aaa504
	if (cr6.eq) goto loc_83AAA504;
loc_83AA9770:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x83aa9788
	if (cr6.eq) goto loc_83AA9788;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x83aa9798
	if (!cr6.eq) goto loc_83AA9798;
loc_83AA9788:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x83aa97a8
	if (cr6.eq) goto loc_83AA97A8;
loc_83AA9798:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83aa9770
	if (!cr6.eq) goto loc_83AA9770;
loc_83AA97A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa504
	if (cr6.eq) goto loc_83AAA504;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// beq cr6,0x83aa9808
	if (cr6.eq) goto loc_83AA9808;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa9808
	if (cr6.eq) goto loc_83AA9808;
	// lha r9,32(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 32));
	// twllei r10,0
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// twllei r10,0
	// divwu r9,r9,r10
	ctx.r9.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// sth r9,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r9.u16);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu r7,r9,r10
	ctx.r7.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x83aa980c
	goto loc_83AA980C;
loc_83AA9808:
	// stw r21,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r21.u32);
loc_83AA980C:
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x83aa982c
	if (!cr6.eq) goto loc_83AA982C;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bne cr6,0x83aa986c
	if (!cr6.eq) goto loc_83AA986C;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// b 0x83aa986c
	goto loc_83AA986C;
loc_83AA982C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_83AA9830:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aa9848
	if (cr6.eq) goto loc_83AA9848;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83aa9830
	if (!cr0.eq) goto loc_83AA9830;
loc_83AA9848:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aa986c
	if (cr6.eq) goto loc_83AA986C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x83aa986c
	if (!cr6.eq) goto loc_83AA986C;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_83AA986C:
	// stw r21,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r21.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa9884
	if (!cr6.eq) goto loc_83AA9884;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x83aa9890
	goto loc_83AA9890;
loc_83AA9884:
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AA9890:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA98A4:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa98c8
	if (!cr0.eq) goto loc_83AA98C8;
loc_83AA98B0:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa98c8
	if (!cr6.eq) goto loc_83AA98C8;
	// lhz r11,272(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,272(r16)
	PPC_STORE_U16(ctx.r16.u32 + 272, ctx.r11.u16);
loc_83AA98C8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83aaa500
	goto loc_83AAA500;
loc_83AA98D8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9918:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa99c0
	if (!cr0.eq) goto loc_83AA99C0;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83aa99c0
	if (cr6.eq) goto loc_83AA99C0;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r30,12(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stw r31,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r31.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r21,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r21.u8);
	// sth r11,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r11.u16);
	// beq cr6,0x83aa9988
	if (cr6.eq) goto loc_83AA9988;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r10,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r10.u32);
	// b 0x83aa998c
	goto loc_83AA998C;
loc_83AA9988:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_83AA998C:
	// lhz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// sth r10,120(r22)
	PPC_STORE_U16(ctx.r22.u32 + 120, ctx.r10.u16);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf. r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x83aa99a8
	if (!cr0.lt) goto loc_83AA99A8;
	// lwz r11,264(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 264);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_83AA99A8:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83aa80d8
	ctx.lr = 0x83AA99B8;
	sub_83AA80D8(ctx, base);
	// stw r30,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r30.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA99C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa98c8
	if (!cr6.eq) goto loc_83AA98C8;
	// b 0x83aa98b0
	goto loc_83AA98B0;
loc_83AA99CC:
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83AA99D8;
	sub_83A9BD48(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// or r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aa9a58
	goto loc_83AA9A58;
loc_83AA9A34:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x83aa9a54
	if (!cr6.eq) goto loc_83AA9A54;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x83aa9ab4
	if (cr6.eq) goto loc_83AA9AB4;
loc_83AA9A54:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_83AA9A58:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa9a34
	if (!cr6.eq) goto loc_83AA9A34;
	// bl 0x83aa52a0
	ctx.lr = 0x83AA9A64;
	sub_83AA52A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83aaa504
	if (cr0.eq) goto loc_83AAA504;
	// li r11,6
	ctx.r11.s64 = 6;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa1ee0
	ctx.lr = 0x83AA9A8C;
	sub_83AA1EE0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r21,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r21.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bne cr6,0x83aa9abc
	if (!cr6.eq) goto loc_83AA9ABC;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9AB4:
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9ABC:
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9AC8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r6,3(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aa9b40
	goto loc_83AA9B40;
loc_83AA9B1C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x83aa9b3c
	if (!cr6.eq) goto loc_83AA9B3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x83aa9b8c
	if (cr6.eq) goto loc_83AA9B8C;
loc_83AA9B3C:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_83AA9B40:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aa9b1c
	if (!cr6.eq) goto loc_83AA9B1C;
	// bl 0x83aa52a0
	ctx.lr = 0x83AA9B4C;
	sub_83AA52A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaa504
	if (cr0.eq) goto loc_83AAA504;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r9,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r9.u16);
loc_83AA9B5C:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r21,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r21.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// bne cr6,0x83aa9c48
	if (!cr6.eq) goto loc_83AA9C48;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9B8C:
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9B98:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 | ctx.r5.u64;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lbz r9,7(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aa9c2c
	goto loc_83AA9C2C;
loc_83AA9C08:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x83aa9c28
	if (!cr6.eq) goto loc_83AA9C28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x83aa9b8c
	if (cr6.eq) goto loc_83AA9B8C;
loc_83AA9C28:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_83AA9C2C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83aa9c08
	if (!cr6.eq) goto loc_83AA9C08;
	// bl 0x83aa52a0
	ctx.lr = 0x83AA9C38;
	sub_83AA52A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaa504
	if (cr0.eq) goto loc_83AAA504;
	// sth r28,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r28.u16);
	// b 0x83aa9b5c
	goto loc_83AA9B5C;
loc_83AA9C48:
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9C54:
	// lwz r3,64(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// bl 0x83aa3bd0
	ctx.lr = 0x83AA9C5C;
	sub_83AA3BD0(ctx, base);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AA9C60:
	// cmpwi cr6,r11,7104
	cr6.compare<int32_t>(ctx.r11.s32, 7104, xer);
	// bgt cr6,0x83aaa214
	if (cr6.gt) goto loc_83AAA214;
	// beq cr6,0x83aaa118
	if (cr6.eq) goto loc_83AAA118;
	// cmpwi cr6,r11,4000
	cr6.compare<int32_t>(ctx.r11.s32, 4000, xer);
	// beq cr6,0x83aaa0e0
	if (cr6.eq) goto loc_83AAA0E0;
	// cmpwi cr6,r11,4050
	cr6.compare<int32_t>(ctx.r11.s32, 4050, xer);
	// beq cr6,0x83aaa0a8
	if (cr6.eq) goto loc_83AAA0A8;
	// cmpwi cr6,r11,7100
	cr6.compare<int32_t>(ctx.r11.s32, 7100, xer);
	// beq cr6,0x83aaa06c
	if (cr6.eq) goto loc_83AAA06C;
	// cmpwi cr6,r11,7101
	cr6.compare<int32_t>(ctx.r11.s32, 7101, xer);
	// beq cr6,0x83aa9fd0
	if (cr6.eq) goto loc_83AA9FD0;
	// cmpwi cr6,r11,7102
	cr6.compare<int32_t>(ctx.r11.s32, 7102, xer);
	// beq cr6,0x83aa9d54
	if (cr6.eq) goto loc_83AA9D54;
	// cmpwi cr6,r11,7103
	cr6.compare<int32_t>(ctx.r11.s32, 7103, xer);
	// bne cr6,0x83aaa244
	if (!cr6.eq) goto loc_83AAA244;
loc_83AA9C9C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
loc_83AA9CA4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r5,7103
	cr6.compare<uint32_t>(ctx.r5.u32, 7103, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r10,r20
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r20.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f28
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bne cr6,0x83aaa3d4
	if (!cr6.eq) goto loc_83AAA3D4;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// b 0x83aaa40c
	goto loc_83AAA40C;
loc_83AA9D54:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83aa5aa0
	ctx.lr = 0x83AA9DC0;
	sub_83AA5AA0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa9dfc
	if (cr6.eq) goto loc_83AA9DFC;
loc_83AA9DDC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83aa9df0
	if (cr6.eq) goto loc_83AA9DF0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83AA9DF0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa9ddc
	if (!cr6.eq) goto loc_83AA9DDC;
loc_83AA9DFC:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bge cr6,0x83aa9e6c
	if (!cr6.lt) goto loc_83AA9E6C;
loc_83AA9E10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq cr6,0x83aa9e5c
	if (cr6.eq) goto loc_83AA9E5C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r21,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r21.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x83aa9e10
	goto loc_83AA9E10;
loc_83AA9E5C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA9E68;
	sub_831EA3F0(ctx, base);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AA9E6C:
	// bl 0x83aa5120
	ctx.lr = 0x83AA9E70;
	sub_83AA5120(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa9e8c
	if (!cr6.eq) goto loc_83AA9E8C;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// b 0x83aa9e9c
	goto loc_83AA9E9C;
loc_83AA9E8C:
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA9E9C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83AA9EF4:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r28,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r28.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r21,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r21.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r26,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r26.u8);
	// lbz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 116);
	// sth r27,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r27.u16);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83aa3ef0
	ctx.lr = 0x83AA9F30;
	sub_83AA3EF0(ctx, base);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa9ef4
	if (cr6.eq) goto loc_83AA9EF4;
	// bl 0x83aa5120
	ctx.lr = 0x83AA9F88;
	sub_83AA5120(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa9fa4
	if (!cr6.eq) goto loc_83AA9FA4;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// b 0x83aa9fb4
	goto loc_83AA9FB4;
loc_83AA9FA4:
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AA9FB4:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x83aa9ef4
	goto loc_83AA9EF4;
loc_83AA9FD0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83aa5aa0
	ctx.lr = 0x83AA9FFC;
	sub_83AA5AA0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
loc_83AAA008:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83aa4a78
	ctx.lr = 0x83AAA064;
	sub_83AA4A78(ctx, base);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// b 0x83aaa008
	goto loc_83AAA008;
loc_83AAA06C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// lwz r5,24(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// lbz r4,5(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 5);
	// lwz r3,64(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83AAA090;
	sub_83ABBFC8(ctx, base);
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9cf50
	ctx.lr = 0x83AAA0A4;
	sub_83A9CF50(ctx, base);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AAA0A8:
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7f00
	ctx.lr = 0x83AAA0DC;
	sub_83AA7F00(ctx, base);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AAA0E0:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r3,64(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83abbfc8
	ctx.lr = 0x83AAA0F0;
	sub_83ABBFC8(ctx, base);
	// lwz r3,64(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// bl 0x83aa3bd0
	ctx.lr = 0x83AAA0F8;
	sub_83AA3BD0(ctx, base);
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa77e0
	ctx.lr = 0x83AAA108;
	sub_83AA77E0(ctx, base);
loc_83AAA108:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AAA118:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa4f8
	if (cr6.eq) goto loc_83AAA4F8;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83aa5aa0
	ctx.lr = 0x83AAA170;
	sub_83AA5AA0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83AAA190;
	sub_83AC6758(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83AAA1A4;
	sub_83AC6758(ctx, base);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x83a8cc50
	ctx.lr = 0x83AAA1B8;
	sub_83A8CC50(ctx, base);
loc_83AAA1B8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83aadcd0
	ctx.lr = 0x83AAA20C;
	sub_83AADCD0(ctx, base);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// b 0x83aaa1b8
	goto loc_83AAA1B8;
loc_83AAA214:
	// cmpwi cr6,r11,7105
	cr6.compare<int32_t>(ctx.r11.s32, 7105, xer);
	// beq cr6,0x83aa9c9c
	if (cr6.eq) goto loc_83AA9C9C;
	// cmpwi cr6,r11,7106
	cr6.compare<int32_t>(ctx.r11.s32, 7106, xer);
	// beq cr6,0x83aaa35c
	if (cr6.eq) goto loc_83AAA35C;
	// cmpwi cr6,r11,7107
	cr6.compare<int32_t>(ctx.r11.s32, 7107, xer);
	// beq cr6,0x83aaa320
	if (cr6.eq) goto loc_83AAA320;
	// cmpwi cr6,r11,8000
	cr6.compare<int32_t>(ctx.r11.s32, 8000, xer);
	// beq cr6,0x83aaa318
	if (cr6.eq) goto loc_83AAA318;
	// cmpwi cr6,r11,8001
	cr6.compare<int32_t>(ctx.r11.s32, 8001, xer);
	// beq cr6,0x83aaa2e4
	if (cr6.eq) goto loc_83AAA2E4;
	// cmpwi cr6,r11,8002
	cr6.compare<int32_t>(ctx.r11.s32, 8002, xer);
	// beq cr6,0x83aaa260
	if (cr6.eq) goto loc_83AAA260;
loc_83AAA244:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x831ea400
	ctx.lr = 0x83AAA25C;
	sub_831EA400(ctx, base);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AAA260:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aa98c8
	if (!cr6.eq) goto loc_83AA98C8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83abd768
	ctx.lr = 0x83AAA270;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa98c8
	if (cr0.eq) goto loc_83AA98C8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,139
	ctx.r4.s64 = 139;
	// lhz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// sth r8,120(r22)
	PPC_STORE_U16(ctx.r22.u32 + 120, ctx.r8.u16);
	// stw r31,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r31.u32);
	// stb r11,4(r22)
	PPC_STORE_U8(ctx.r22.u32 + 4, ctx.r11.u8);
	// lwz r10,40(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83ab1ee8
	ctx.lr = 0x83AAA2D0;
	sub_83AB1EE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83AAA2D4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83abe1e8
	ctx.lr = 0x83AAA2DC;
	sub_83ABE1E8(ctx, base);
	// bl 0x83aa54b8
	ctx.lr = 0x83AAA2E0;
	sub_83AA54B8(ctx, base);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AAA2E4:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lhz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// sth r10,120(r22)
	PPC_STORE_U16(ctx.r22.u32 + 120, ctx.r10.u16);
	// stw r31,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r31.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83aaa2d4
	goto loc_83AAA2D4;
loc_83AAA318:
	// bl 0x83a82f68
	ctx.lr = 0x83AAA31C;
	sub_83A82F68(ctx, base);
	// b 0x83aaa504
	goto loc_83AAA504;
loc_83AAA320:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f29,f0,f27
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// b 0x83aa9ca4
	goto loc_83AA9CA4;
loc_83AAA35C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x83aaa4f8
	if (!cr6.eq) goto loc_83AAA4F8;
	// lwz r8,64(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r29,60(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ab6478
	ctx.lr = 0x83AAA3B8;
	sub_83AB6478(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83ab6440
	ctx.lr = 0x83AAA3C4;
	sub_83AB6440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab6408
	ctx.lr = 0x83AAA3D0;
	sub_83AB6408(ctx, base);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AAA3D4:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f31.f64 = double(temp.f32);
loc_83AAA40C:
	// lbz r11,55(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aaa4c4
	if (!cr6.eq) goto loc_83AAA4C4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83aa5aa0
	ctx.lr = 0x83AAA430;
	sub_83AA5AA0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// lbz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
loc_83AAA454:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x83aa6c18
	ctx.lr = 0x83AAA4AC;
	sub_83AA6C18(ctx, base);
	// stw r21,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r21.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
	// b 0x83aaa454
	goto loc_83AAA454;
loc_83AAA4C4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83aaa520
	if (!cr6.eq) goto loc_83AAA520;
	// lhz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// bl 0x83a88ec8
	ctx.lr = 0x83AAA4D4;
	sub_83A88EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaa520
	if (cr0.eq) goto loc_83AAA520;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// lbz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ab2130
	ctx.lr = 0x83AAA4F4;
	sub_83AB2130(ctx, base);
	// b 0x83aaa520
	goto loc_83AAA520;
loc_83AAA4F8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83AAA500:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83AAA504:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x83aaa520
	if (cr6.eq) goto loc_83AAA520;
loc_83AAA50C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 != 0) | (xer.ca != 0);
	ctx.r11.s64 = ctx.r11.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 & ctx.r17.u64;
loc_83AAA520:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa8f04
	if (!cr6.eq) goto loc_83AA8F04;
loc_83AAA540:
	// lwz r11,540(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c0
	ctx.lr = 0x83AAA558;
	__restfpr_27(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAA55C"))) PPC_WEAK_FUNC(sub_83AAA55C);
PPC_FUNC_IMPL(__imp__sub_83AAA55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAA560"))) PPC_WEAK_FUNC(sub_83AAA560);
PPC_FUNC_IMPL(__imp__sub_83AAA560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AAA568;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 224);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aaa808
	if (cr6.eq) goto loc_83AAA808;
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// lbz r11,118(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 118);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83aaa808
	if (cr6.eq) goto loc_83AAA808;
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aaa5b8
	if (!cr6.eq) goto loc_83AAA5B8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaa808
	if (!cr6.eq) goto loc_83AAA808;
	// stb r24,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r24.u8);
loc_83AAA5B8:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r4,216(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 216);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83aaddb8
	ctx.lr = 0x83AAA5C8;
	sub_83AADDB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aaa808
	if (cr0.eq) goto loc_83AAA808;
	// lwz r9,236(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 236);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83aaa808
	if (cr6.eq) goto loc_83AAA808;
loc_83AAA5E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaa624
	if (cr6.eq) goto loc_83AAA624;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x83aaa610
	goto loc_83AAA610;
loc_83AAA5F8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x83aaa610
	if (!cr6.eq) goto loc_83AAA610;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83AAA610:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaa5f8
	if (!cr6.eq) goto loc_83AAA5F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r11,240(r27)
	PPC_STORE_U8(ctx.r27.u32 + 240, ctx.r11.u8);
loc_83AAA624:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aaa5e0
	if (!cr6.eq) goto loc_83AAA5E0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83aaa808
	if (!cr6.gt) goto loc_83AAA808;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa6c0
	if (cr6.eq) goto loc_83AAA6C0;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
loc_83AAA648:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83aaa6b4
	if (!cr6.eq) goto loc_83AAA6B4;
	// lwz r11,29004(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29004);
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x83aaa684
	goto loc_83AAA684;
loc_83AAA66C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AAA678;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aaa690
	if (!cr0.eq) goto loc_83AAA690;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AAA684:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aaa66c
	if (!cr6.eq) goto loc_83AAA66C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83AAA690:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa6b4
	if (cr6.eq) goto loc_83AAA6B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,119(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 119);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aaa6b4
	if (!cr0.eq) goto loc_83AAA6B4;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x83ab6eb8
	ctx.lr = 0x83AAA6B4;
	sub_83AB6EB8(ctx, base);
loc_83AAA6B4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aaa648
	if (!cr6.eq) goto loc_83AAA648;
loc_83AAA6C0:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa808
	if (cr6.eq) goto loc_83AAA808;
	// bl 0x83ab5e48
	ctx.lr = 0x83AAA6D4;
	sub_83AB5E48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaa808
	if (!cr0.eq) goto loc_83AAA808;
	// lwz r3,64(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// bl 0x83aa4528
	ctx.lr = 0x83AAA6E4;
	sub_83AA4528(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83aaa7d8
	if (cr0.eq) goto loc_83AAA7D8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa758
	if (cr6.eq) goto loc_83AAA758;
loc_83AAA700:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83aaa720
	if (cr6.eq) goto loc_83AAA720;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaa700
	if (!cr6.eq) goto loc_83AAA700;
	// b 0x83aaa724
	goto loc_83AAA724;
loc_83AAA720:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83AAA724:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aaa758
	if (cr6.eq) goto loc_83AAA758;
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa740
	if (cr6.eq) goto loc_83AAA740;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83AAA740:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aaa758
	if (cr6.eq) goto loc_83AAA758;
	// bl 0x83aa7310
	ctx.lr = 0x83AAA750;
	sub_83AA7310(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83aaa808
	if (cr6.gt) goto loc_83AAA808;
loc_83AAA758:
	// lbz r30,105(r23)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r23.u32 + 105);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83aaa798
	if (cr6.eq) goto loc_83AAA798;
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaa798
	if (cr6.eq) goto loc_83AAA798;
	// lhz r10,208(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 208);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
loc_83AAA798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83AAA7A0;
	sub_83AA3CE8(ctx, base);
	// bl 0x83a9e880
	ctx.lr = 0x83AAA7A4;
	sub_83A9E880(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83aaa7d8
	if (cr0.eq) goto loc_83AAA7D8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83aaa7d8
	if (!cr6.eq) goto loc_83AAA7D8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83abd768
	ctx.lr = 0x83AAA7BC;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aaa7d8
	if (cr0.eq) goto loc_83AAA7D8;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ee8
	ctx.lr = 0x83AAA7D8;
	sub_83AB1EE8(ctx, base);
loc_83AAA7D8:
	// lhz r11,224(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r27.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r24,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r24.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// lhz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 208);
	// sth r11,120(r26)
	PPC_STORE_U16(ctx.r26.u32 + 120, ctx.r11.u16);
	// lwz r6,220(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 220);
	// bl 0x83aa80d8
	ctx.lr = 0x83AAA808;
	sub_83AA80D8(ctx, base);
loc_83AAA808:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAA810"))) PPC_WEAK_FUNC(sub_83AAA810);
PPC_FUNC_IMPL(__imp__sub_83AAA810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83AAA818;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaac80
	if (cr6.eq) goto loc_83AAAC80;
	// lis r21,-31739
	ctx.r21.s64 = -2080047104;
	// li r26,0
	ctx.r26.s64 = 0;
loc_83AAA844:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r20,4(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aaa8d8
	if (!cr6.eq) goto loc_83AAA8D8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ace158
	ctx.lr = 0x83AAA868;
	sub_83ACE158(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaa8a0
	if (!cr0.eq) goto loc_83AAA8A0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAA884:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaa884
	if (!cr0.eq) goto loc_83AAA884;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAA8A0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83aaac74
	if (cr6.lt) goto loc_83AAAC74;
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x83aaac74
	if (!cr0.lt) goto loc_83AAAC74;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ace068
	ctx.lr = 0x83AAA8CC;
	sub_83ACE068(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x83aaac74
	goto loc_83AAAC74;
loc_83AAA8D8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83aaa954
	if (!cr6.eq) goto loc_83AAA954;
	// lwz r11,29004(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29004);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aaa924
	if (cr6.eq) goto loc_83AAA924;
loc_83AAA8F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83aa6b98
	ctx.lr = 0x83AAA904;
	sub_83AA6B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaa910
	if (cr0.eq) goto loc_83AAA910;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83AAA910:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aaa8f8
	if (!cr6.eq) goto loc_83AAA8F8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83aaac74
	if (!cr6.eq) goto loc_83AAAC74;
loc_83AAA924:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAA938:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaa938
	if (!cr0.eq) goto loc_83AAA938;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAA954:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83aaa99c
	if (!cr6.eq) goto loc_83AAA99C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83aa6d80
	ctx.lr = 0x83AAA964;
	sub_83AA6D80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaac74
	if (!cr0.eq) goto loc_83AAAC74;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAA980:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaa980
	if (!cr0.eq) goto loc_83AAA980;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAA99C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83aaab14
	if (!cr6.eq) goto loc_83AAAB14;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x83aaac74
	if (cr0.gt) goto loc_83AAAC74;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83aaa9e8
	if (cr6.eq) goto loc_83AAA9E8;
	// extsh. r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83aaa9e8
	if (cr0.eq) goto loc_83AAA9E8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bgt cr6,0x83aaa9e4
	if (cr6.gt) goto loc_83AAA9E4;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83AAA9E4:
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
loc_83AAA9E8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83aaaa68
	if (!cr6.gt) goto loc_83AAAA68;
	// bl 0x83aa52a0
	ctx.lr = 0x83AAA9F8;
	sub_83AA52A0(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83AAAA08;
	sub_83A9BD48(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83aaaaa0
	if (cr6.eq) goto loc_83AAAAA0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83aa1ee0
	ctx.lr = 0x83AAAA24;
	sub_83AA1EE0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaaa48
	if (!cr6.eq) goto loc_83AAAA48;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// b 0x83aaaa54
	goto loc_83AAAA54;
loc_83AAAA48:
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_83AAAA54:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x83aaaaa0
	goto loc_83AAAAA0;
loc_83AAAA68:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stb r26,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r26.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r10,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// lhz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// sth r10,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r10.u16);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lha r6,24(r31)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 24));
	// bl 0x83aa80d8
	ctx.lr = 0x83AAAAA0;
	sub_83AA80D8(ctx, base);
loc_83AAAAA0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaaadc
	if (!cr6.eq) goto loc_83AAAADC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAAAC0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaaac0
	if (!cr0.eq) goto loc_83AAAAC0;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAAADC:
	// extsh. r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aaac74
	if (!cr0.eq) goto loc_83AAAC74;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAAAF8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaaaf8
	if (!cr0.eq) goto loc_83AAAAF8;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAAB14:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83aaab98
	if (!cr6.eq) goto loc_83AAAB98;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x83aaac74
	if (!cr0.lt) goto loc_83AAAC74;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stb r26,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r26.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
	// lhz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// sth r11,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r11.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r10,r10,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r10.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r6,24(r31)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 24));
	// bl 0x83aa80d8
	ctx.lr = 0x83AAAB68;
	sub_83AA80D8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAAB7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaab7c
	if (!cr0.eq) goto loc_83AAAB7C;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAAB98:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83aaabe8
	if (!cr6.eq) goto loc_83AAABE8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ace158
	ctx.lr = 0x83AAABB0;
	sub_83ACE158(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaac74
	if (!cr0.eq) goto loc_83AAAC74;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aaac00
	if (cr6.eq) goto loc_83AAAC00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAABCC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaabcc
	if (!cr0.eq) goto loc_83AAABCC;
	// b 0x83aaac38
	goto loc_83AAAC38;
loc_83AAABE8:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aaac74
	if (!cr6.eq) goto loc_83AAAC74;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aaac18
	if (!cr6.eq) goto loc_83AAAC18;
loc_83AAAC00:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bne cr6,0x83aaac5c
	if (!cr6.eq) goto loc_83AAAC5C;
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// b 0x83aaac5c
	goto loc_83AAAC5C;
loc_83AAAC18:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaac5c
	if (cr0.eq) goto loc_83AAAC5C;
loc_83AAAC20:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aaac38
	if (cr6.eq) goto loc_83AAAC38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaac20
	if (!cr0.eq) goto loc_83AAAC20;
loc_83AAAC38:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaac5c
	if (cr6.eq) goto loc_83AAAC5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aaac5c
	if (!cr6.eq) goto loc_83AAAC5C;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_83AAAC5C:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x83aa5e98
	ctx.lr = 0x83AAAC74;
	sub_83AA5E98(ctx, base);
loc_83AAAC74:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x83aaa844
	if (!cr6.eq) goto loc_83AAA844;
loc_83AAAC80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAAC88"))) PPC_WEAK_FUNC(sub_83AAAC88);
PPC_FUNC_IMPL(__imp__sub_83AAAC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83AAAC90;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,236(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r5,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r5,142
	ctx.r5.s64 = 142;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r23,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r23.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83AAACCC;
	sub_831CDCF0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r15,r23
	ctx.r15.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// bl 0x83aa4f98
	ctx.lr = 0x83AAAD08;
	sub_83AA4F98(ctx, base);
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r9,65(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// sth r11,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r11.u16);
	// stb r23,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r23.u8);
	// stb r23,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r23.u8);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// sth r11,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r11.u16);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// bl 0x83a81ee8
	ctx.lr = 0x83AAAD54;
	sub_83A81EE8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x831ea798
	ctx.lr = 0x83AAAD68;
	sub_831EA798(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r20,r11,29008
	ctx.r20.s64 = ctx.r11.s64 + 29008;
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// sth r23,148(r11)
	PPC_STORE_U16(ctx.r11.u32 + 148, ctx.r23.u16);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83aaadc4
	if (!cr6.eq) goto loc_83AAADC4;
	// lwz r10,-4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,44(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// ld r10,136(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 136);
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// beq cr6,0x83aaadc0
	if (cr6.eq) goto loc_83AAADC0;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83aaadc0
	if (!cr6.gt) goto loc_83AAADC0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_83AAADC0:
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_83AAADC4:
	// lbz r11,67(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// beq 0x83aaadf0
	if (cr0.eq) goto loc_83AAADF0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aaae20
	if (!cr6.eq) goto loc_83AAAE20;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x83aaae20
	goto loc_83AAAE20;
loc_83AAADF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaae20
	if (cr6.eq) goto loc_83AAAE20;
	// lwz r30,236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x83aaae14
	goto loc_83AAAE14;
loc_83AAAE00:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83aa73c8
	ctx.lr = 0x83AAAE08;
	sub_83AA73C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaaee4
	if (!cr0.eq) goto loc_83AAAEE4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AAAE14:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aaae00
	if (!cr6.eq) goto loc_83AAAE00;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83AAAE20:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aaaf80
	if (!cr0.eq) goto loc_83AAAF80;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83ab2628
	ctx.lr = 0x83AAAE48;
	sub_83AB2628(ctx, base);
	// lbz r11,309(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 309);
	// lbz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 308);
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aaae64
	if (!cr0.eq) goto loc_83AAAE64;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaaeb4
	if (cr0.eq) goto loc_83AAAEB4;
loc_83AAAE64:
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x83aae588
	ctx.lr = 0x83AAAE6C;
	sub_83AAE588(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x83aade60
	ctx.lr = 0x83AAAE78;
	sub_83AADE60(ctx, base);
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x83ab28d8
	ctx.lr = 0x83AAAE80;
	sub_83AB28D8(ctx, base);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83aaf228
	ctx.lr = 0x83AAAE94;
	sub_83AAF228(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aaaea4
	if (cr0.eq) goto loc_83AAAEA4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
loc_83AAAEA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x83aaed70
	ctx.lr = 0x83AAAEB4;
	sub_83AAED70(ctx, base);
loc_83AAAEB4:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stb r23,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r23.u8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83aaaf80
	if (!cr0.eq) goto loc_83AAAF80;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83aaaeec
	if (cr6.eq) goto loc_83AAAEEC;
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// ld r29,136(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 136);
	// b 0x83aaaef0
	goto loc_83AAAEF0;
loc_83AAAEE4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83aaae20
	goto loc_83AAAE20;
loc_83AAAEEC:
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
loc_83AAAEF0:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// subf r3,r11,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x831ce710
	ctx.lr = 0x83AAAEFC;
	sub_831CE710(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmul f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,296(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfd f0,792(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 792);
	// fmadd f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// bl 0x831d4338
	ctx.lr = 0x83AAAF1C;
	sub_831D4338(ctx, base);
	// stfd f1,296(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f1.u64);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aaaf80
	if (cr6.eq) goto loc_83AAAF80;
	// lwa r10,48(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 48));
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AAAF74;
	sub_83AB1EF0(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83aad128
	ctx.lr = 0x83AAAF7C;
	sub_83AAD128(ctx, base);
	// stb r3,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r3.u8);
loc_83AAAF80:
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83aab0fc
	if (cr6.eq) goto loc_83AAB0FC;
	// lbz r11,107(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 107);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aab0fc
	if (!cr0.eq) goto loc_83AAB0FC;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aab0fc
	if (!cr0.eq) goto loc_83AAB0FC;
	// lbz r11,261(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 261);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aab0f0
	if (!cr6.eq) goto loc_83AAB0F0;
	// lha r8,274(r31)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 274));
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x83aab058
	if (!cr0.gt) goto loc_83AAB058;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// twllei r8,0
	// divwu. r11,r11,r8
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r8.u32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83aaafd8
	if (cr0.gt) goto loc_83AAAFD8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83AAAFD8:
	// lbz r10,53(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 53);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aaaff8
	if (!cr0.eq) goto loc_83AAAFF8;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83aaaff8
	if (!cr6.gt) goto loc_83AAAFF8;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x83aaaffc
	goto loc_83AAAFFC;
loc_83AAAFF8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_83AAAFFC:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// divwu r6,r10,r11
	ctx.r6.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// twllei r11,0
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r11,0
	// divwu r4,r10,r11
	ctx.r4.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bge cr6,0x83aab034
	if (!cr6.lt) goto loc_83AAB034;
	// divwu r6,r10,r11
	ctx.r6.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
loc_83AAB034:
	// lbz r9,262(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 262);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83aab060
	if (cr6.eq) goto loc_83AAB060;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x83aab060
	if (!cr6.gt) goto loc_83AAB060;
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x83aab060
	goto loc_83AAB060;
loc_83AAB058:
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
loc_83AAB060:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83aab0fc
	if (cr6.eq) goto loc_83AAB0FC;
	// lbz r11,53(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 53);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aab09c
	if (!cr6.eq) goto loc_83AAB09C;
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// lhz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 280);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// beq cr6,0x83aab08c
	if (cr6.eq) goto loc_83AAB08C;
	// cmpwi cr6,r15,1
	cr6.compare<int32_t>(ctx.r15.s32, 1, xer);
	// bne cr6,0x83aab0fc
	if (!cr6.eq) goto loc_83AAB0FC;
loc_83AAB08C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83aa7bc8
	ctx.lr = 0x83AAB098;
	sub_83AA7BC8(ctx, base);
	// b 0x83aab0fc
	goto loc_83AAB0FC;
loc_83AAB09C:
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83abe900
	ctx.lr = 0x83AAB0C8;
	sub_83ABE900(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// ble cr6,0x83aab0fc
	if (!cr6.gt) goto loc_83AAB0FC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83aab0fc
	if (cr6.eq) goto loc_83AAB0FC;
	// stb r27,53(r21)
	PPC_STORE_U8(ctx.r21.u32 + 53, ctx.r27.u8);
	// b 0x83aab0fc
	goto loc_83AAB0FC;
loc_83AAB0F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aab0fc
	if (!cr6.eq) goto loc_83AAB0FC;
	// li r15,1
	ctx.r15.s64 = 1;
loc_83AAB0FC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// bne cr6,0x83aab108
	if (!cr6.eq) goto loc_83AAB108;
	// lwz r14,0(r24)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_83AAB108:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83aab2c4
	if (!cr6.eq) goto loc_83AAB2C4;
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab204
	if (cr0.eq) goto loc_83AAB204;
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// lwz r26,224(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r27,8
	ctx.r27.s64 = 8;
loc_83AAB12C:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab184
	if (cr0.eq) goto loc_83AAB184;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83aab184
	if (cr6.eq) goto loc_83AAB184;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_83AAB148:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lhzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83aab178
	if (cr6.eq) goto loc_83AAB178;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a88f00
	ctx.lr = 0x83AAB160;
	sub_83A88F00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aab178
	if (cr0.eq) goto loc_83AAB178;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83AAB178;
	sub_83AB31C0(ctx, base);
loc_83AAB178:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x83aab148
	if (!cr0.eq) goto loc_83AAB148;
loc_83AAB184:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x83aab12c
	if (!cr0.eq) goto loc_83AAB12C;
	// b 0x83aab204
	goto loc_83AAB204;
loc_83AAB194:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwz r30,0(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lbz r7,67(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa84c0
	ctx.lr = 0x83AAB1D8;
	sub_83AA84C0(ctx, base);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x83aab1e4
	if (cr6.eq) goto loc_83AAB1E4;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_83AAB1E4:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// bl 0x83aaa810
	ctx.lr = 0x83AAB200;
	sub_83AAA810(ctx, base);
	// lwz r18,4(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83AAB204:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// bne cr6,0x83aab194
	if (!cr6.eq) goto loc_83AAB194;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge cr6,0x83aab26c
	if (!cr6.lt) goto loc_83AAB26C;
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83aab26c
	if (cr6.eq) goto loc_83AAB26C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r10,2000
	ctx.r10.s64 = ctx.r10.s64 + 2000;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AAB260;
	sub_83AB1EF0(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83aad128
	ctx.lr = 0x83AAB268;
	sub_83AAD128(ctx, base);
	// stb r3,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r3.u8);
loc_83AAB26C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83aab280
	if (cr6.lt) goto loc_83AAB280;
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
loc_83AAB280:
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// lhz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab2b0
	if (cr0.eq) goto loc_83AAB2B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x83abbfc8
	ctx.lr = 0x83AAB2AC;
	sub_83ABBFC8(ctx, base);
	// b 0x83aab2b8
	goto loc_83AAB2B8;
loc_83AAB2B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x83aa6138
	ctx.lr = 0x83AAB2B8;
	sub_83AA6138(ctx, base);
loc_83AAB2B8:
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r26,580(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// b 0x83aab310
	goto loc_83AAB310;
loc_83AAB2C4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aab310
	if (!cr6.eq) goto loc_83AAB310;
	// lbz r5,263(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 263);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83aab300
	if (cr6.lt) goto loc_83AAB300;
	// beq cr6,0x83aab2f4
	if (cr6.eq) goto loc_83AAB2F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x831ea400
	ctx.lr = 0x83AAB2F0;
	sub_831EA400(ctx, base);
	// b 0x83aab310
	goto loc_83AAB310;
loc_83AAB2F4:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83aab308
	goto loc_83AAB308;
loc_83AAB300:
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83AAB308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7a40
	ctx.lr = 0x83AAB310;
	sub_83AA7A40(ctx, base);
loc_83AAB310:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aab34c
	if (!cr6.eq) goto loc_83AAB34C;
	// lwz r30,236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x83aab344
	goto loc_83AAB344;
loc_83AAB324:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaa560
	ctx.lr = 0x83AAB338;
	sub_83AAA560(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83AAB344:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aab324
	if (!cr6.eq) goto loc_83AAB324;
loc_83AAB34C:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq cr6,0x83aab398
	if (cr6.eq) goto loc_83AAB398;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x83ab5a70
	ctx.lr = 0x83AAB394;
	sub_83AB5A70(ctx, base);
	// b 0x83aab34c
	goto loc_83AAB34C;
loc_83AAB398:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab508
	if (cr6.eq) goto loc_83AAB508;
loc_83AAB3A8:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aab464
	if (!cr6.eq) goto loc_83AAB464;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aaac88
	ctx.lr = 0x83AAB3D4;
	sub_83AAAC88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aab4fc
	if (!cr0.eq) goto loc_83AAB4FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aab404
	if (!cr6.eq) goto loc_83AAB404;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83aab448
	if (!cr6.eq) goto loc_83AAB448;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// b 0x83aab448
	goto loc_83AAB448;
loc_83AAB404:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab448
	if (cr0.eq) goto loc_83AAB448;
loc_83AAB40C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aab424
	if (cr6.eq) goto loc_83AAB424;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aab40c
	if (!cr0.eq) goto loc_83AAB40C;
loc_83AAB424:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab448
	if (cr6.eq) goto loc_83AAB448;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aab448
	if (!cr6.eq) goto loc_83AAB448;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83AAB448:
	// stw r23,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83aa6e90
	ctx.lr = 0x83AAB460;
	sub_83AA6E90(ctx, base);
	// b 0x83aab4fc
	goto loc_83AAB4FC;
loc_83AAB464:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83aa7db0
	ctx.lr = 0x83AAB470;
	sub_83AA7DB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aab4fc
	if (!cr0.eq) goto loc_83AAB4FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aab4a0
	if (!cr6.eq) goto loc_83AAB4A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83aab4e4
	if (!cr6.eq) goto loc_83AAB4E4;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// b 0x83aab4e4
	goto loc_83AAB4E4;
loc_83AAB4A0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab4e4
	if (cr0.eq) goto loc_83AAB4E4;
loc_83AAB4A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aab4c0
	if (cr6.eq) goto loc_83AAB4C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aab4a8
	if (!cr0.eq) goto loc_83AAB4A8;
loc_83AAB4C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab4e4
	if (cr6.eq) goto loc_83AAB4E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aab4e4
	if (!cr6.eq) goto loc_83AAB4E4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83AAB4E4:
	// stw r23,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83aa6f70
	ctx.lr = 0x83AAB4FC;
	sub_83AA6F70(ctx, base);
loc_83AAB4FC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83aab3a8
	if (!cr6.eq) goto loc_83AAB3A8;
loc_83AAB508:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aab580
	if (!cr6.eq) goto loc_83AAB580;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x83aab640
	if (!cr6.eq) goto loc_83AAB640;
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83aab640
	if (!cr6.gt) goto loc_83AAB640;
loc_83AAB52C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab640
	if (cr6.eq) goto loc_83AAB640;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bne cr6,0x83aab54c
	if (!cr6.eq) goto loc_83AAB54C;
	// stw r23,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r23.u32);
loc_83AAB54C:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// beq cr6,0x83aab640
	if (cr6.eq) goto loc_83AAB640;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83aa6a18
	ctx.lr = 0x83AAB570;
	sub_83AA6A18(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x83aab52c
	if (cr6.lt) goto loc_83AAB52C;
	// b 0x83aab640
	goto loc_83AAB640;
loc_83AAB580:
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83aab640
	if (!cr6.gt) goto loc_83AAB640;
loc_83AAB590:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab640
	if (cr6.eq) goto loc_83AAB640;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bne cr6,0x83aab5b0
	if (!cr6.eq) goto loc_83AAB5B0;
	// stw r23,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r23.u32);
loc_83AAB5B0:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// beq cr6,0x83aab640
	if (cr6.eq) goto loc_83AAB640;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83aab5e0
	if (cr6.eq) goto loc_83AAB5E0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aab5f8
	if (!cr6.eq) goto loc_83AAB5F8;
loc_83AAB5E0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aab5f8
	if (!cr6.eq) goto loc_83AAB5F8;
	// lhz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 224);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83aab62c
	if (cr6.eq) goto loc_83AAB62C;
loc_83AAB5F8:
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aab60c
	if (!cr6.eq) goto loc_83AAB60C;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// b 0x83aab618
	goto loc_83AAB618;
loc_83AAB60C:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AAB618:
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// b 0x83aab634
	goto loc_83AAB634;
loc_83AAB62C:
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x83aa6a18
	ctx.lr = 0x83AAB634;
	sub_83AA6A18(ctx, base);
loc_83AAB634:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x83aab590
	if (cr6.lt) goto loc_83AAB590;
loc_83AAB640:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aab744
	if (!cr6.eq) goto loc_83AAB744;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aab744
	if (!cr6.eq) goto loc_83AAB744;
	// lbz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab758
	if (cr0.eq) goto loc_83AAB758;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aab758
	if (!cr0.eq) goto loc_83AAB758;
	// lhz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// sth r4,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r4.u16);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac52a0
	ctx.lr = 0x83AAB694;
	sub_83AC52A0(ctx, base);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83aab6d4
	if (cr6.eq) goto loc_83AAB6D4;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AAB6B0;
	sub_83AC6090(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r7,65(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x83ab3320
	ctx.lr = 0x83AAB6D4;
	sub_83AB3320(ctx, base);
loc_83AAB6D4:
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83aab714
	if (cr6.eq) goto loc_83AAB714;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AAB6F0;
	sub_83AC6090(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r7,65(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x83ab3320
	ctx.lr = 0x83AAB714;
	sub_83AB3320(ctx, base);
loc_83AAB714:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83abc938
	ctx.lr = 0x83AAB730;
	sub_83ABC938(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lhz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// lhz r4,358(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 358);
	// bl 0x83abd410
	ctx.lr = 0x83AAB744;
	sub_83ABD410(ctx, base);
loc_83AAB744:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r23,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r23.u8);
loc_83AAB74C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83AAB758:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aab74c
	goto loc_83AAB74C;
}

__attribute__((alias("__imp__sub_83AAB760"))) PPC_WEAK_FUNC(sub_83AAB760);
PPC_FUNC_IMPL(__imp__sub_83AAB760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AAB768;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aab8f0
	if (cr6.eq) goto loc_83AAB8F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83AAB794:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aab84c
	if (!cr6.eq) goto loc_83AAB84C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83aaac88
	ctx.lr = 0x83AAB7C0;
	sub_83AAAC88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aab8e4
	if (!cr0.eq) goto loc_83AAB8E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aab7ec
	if (!cr6.eq) goto loc_83AAB7EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83aab830
	if (!cr6.eq) goto loc_83AAB830;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x83aab830
	goto loc_83AAB830;
loc_83AAB7EC:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab830
	if (cr0.eq) goto loc_83AAB830;
loc_83AAB7F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aab80c
	if (cr6.eq) goto loc_83AAB80C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aab7f4
	if (!cr0.eq) goto loc_83AAB7F4;
loc_83AAB80C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab830
	if (cr6.eq) goto loc_83AAB830;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aab830
	if (!cr6.eq) goto loc_83AAB830;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83AAB830:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83aa6e90
	ctx.lr = 0x83AAB848;
	sub_83AA6E90(ctx, base);
	// b 0x83aab8e4
	goto loc_83AAB8E4;
loc_83AAB84C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x83aa7db0
	ctx.lr = 0x83AAB85C;
	sub_83AA7DB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aab8e4
	if (!cr0.eq) goto loc_83AAB8E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aab888
	if (!cr6.eq) goto loc_83AAB888;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83aab8cc
	if (!cr6.eq) goto loc_83AAB8CC;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x83aab8cc
	goto loc_83AAB8CC;
loc_83AAB888:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aab8cc
	if (cr0.eq) goto loc_83AAB8CC;
loc_83AAB890:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aab8a8
	if (cr6.eq) goto loc_83AAB8A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aab890
	if (!cr0.eq) goto loc_83AAB890;
loc_83AAB8A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aab8cc
	if (cr6.eq) goto loc_83AAB8CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aab8cc
	if (!cr6.eq) goto loc_83AAB8CC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83AAB8CC:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83aa6f70
	ctx.lr = 0x83AAB8E4;
	sub_83AA6F70(ctx, base);
loc_83AAB8E4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83aab794
	if (!cr6.eq) goto loc_83AAB794;
loc_83AAB8F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r3,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAB918"))) PPC_WEAK_FUNC(sub_83AAB918);
PPC_FUNC_IMPL(__imp__sub_83AAB918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AAB920;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
	// lwz r11,29004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaba2c
	if (cr6.eq) goto loc_83AABA2C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83AAB93C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83aab978
	goto loc_83AAB978;
loc_83AAB950:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83aab968
	if (!cr6.eq) goto loc_83AAB968;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x83aab96c
	goto loc_83AAB96C;
loc_83AAB968:
	// lwz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_83AAB96C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aab980
	if (!cr6.eq) goto loc_83AAB980;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83AAB978:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aab950
	if (!cr6.eq) goto loc_83AAB950;
loc_83AAB980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aab760
	ctx.lr = 0x83AAB988;
	sub_83AAB760(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aaba20
	if (!cr0.eq) goto loc_83AABA20;
	// lwz r11,29004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aab9b8
	if (!cr6.eq) goto loc_83AAB9B8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// bne cr6,0x83aab9fc
	if (!cr6.eq) goto loc_83AAB9FC;
	// stw r29,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r29.u32);
	// b 0x83aab9fc
	goto loc_83AAB9FC;
loc_83AAB9B8:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83aab9fc
	if (cr0.eq) goto loc_83AAB9FC;
loc_83AAB9C0:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aab9d8
	if (cr6.eq) goto loc_83AAB9D8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83aab9c0
	if (!cr0.eq) goto loc_83AAB9C0;
loc_83AAB9D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aab9fc
	if (cr6.eq) goto loc_83AAB9FC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83aab9fc
	if (!cr6.eq) goto loc_83AAB9FC;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_83AAB9FC:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// beq cr6,0x83aaba18
	if (cr6.eq) goto loc_83AABA18;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
loc_83AABA18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83AABA20;
	sub_83AA7070(ctx, base);
loc_83AABA20:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83aab93c
	if (!cr6.eq) goto loc_83AAB93C;
loc_83AABA2C:
	// bl 0x83aa4f98
	ctx.lr = 0x83AABA30;
	sub_83AA4F98(ctx, base);
	// lwz r11,29004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29004);
	// std r3,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r3.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AABA40"))) PPC_WEAK_FUNC(sub_83AABA40);
PPC_FUNC_IMPL(__imp__sub_83AABA40) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29008
	ctx.r31.s64 = ctx.r11.s64 + 29008;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83aaba74
	if (cr6.eq) goto loc_83AABA74;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// b 0x83aabac4
	goto loc_83AABAC4;
loc_83AABA74:
	// bl 0x83aab918
	ctx.lr = 0x83AABA78;
	sub_83AAB918(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaba98
	if (cr6.eq) goto loc_83AABA98;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// bl 0x831ea3f0
	ctx.lr = 0x83AABA98;
	sub_831EA3F0(ctx, base);
loc_83AABA98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aabab0
	if (cr6.eq) goto loc_83AABAB0;
	// bl 0x83ab05b8
	ctx.lr = 0x83AABAA8;
	sub_83AB05B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83AABAB0:
	// li r4,152
	ctx.r4.s64 = 152;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831ea7a0
	ctx.lr = 0x83AABABC;
	sub_831EA7A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_83AABAC4:
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

__attribute__((alias("__imp__sub_83AABAD8"))) PPC_WEAK_FUNC(sub_83AABAD8);
PPC_FUNC_IMPL(__imp__sub_83AABAD8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29416
	ctx.r31.s64 = ctx.r11.s64 + 29416;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aabb18
	if (!cr6.eq) goto loc_83AABB18;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x831ea3f0
	ctx.lr = 0x83AABB10;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aabb44
	goto loc_83AABB44;
loc_83AABB18:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// bl 0x831ea798
	ctx.lr = 0x83AABB34;
	sub_831EA798(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83AABB44:
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

__attribute__((alias("__imp__sub_83AABB5C"))) PPC_WEAK_FUNC(sub_83AABB5C);
PPC_FUNC_IMPL(__imp__sub_83AABB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABB60"))) PPC_WEAK_FUNC(sub_83AABB60);
PPC_FUNC_IMPL(__imp__sub_83AABB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// addi r7,r8,29416
	ctx.r7.s64 = ctx.r8.s64 + 29416;
	// addi r6,r4,-8
	ctx.r6.s64 = ctx.r4.s64 + -8;
	// li r5,60
	ctx.r5.s64 = 60;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// divwu r11,r6,r5
	ctx.r11.u32 = PPCDivide(ctx.r6.u32, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-12(r7)
	PPC_STORE_U32(ctx.r7.u32 + -12, ctx.r10.u32);
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r9,29416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29416, ctx.r9.u32);
	// ble cr6,0x83aabbac
	if (!cr6.gt) goto loc_83AABBAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AABB9C:
	// addi r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 + 60;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bdnz 0x83aabb9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AABB9C;
loc_83AABBAC:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AABBB4"))) PPC_WEAK_FUNC(sub_83AABBB4);
PPC_FUNC_IMPL(__imp__sub_83AABBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABBB8"))) PPC_WEAK_FUNC(sub_83AABBB8);
PPC_FUNC_IMPL(__imp__sub_83AABBB8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AABBC4"))) PPC_WEAK_FUNC(sub_83AABBC4);
PPC_FUNC_IMPL(__imp__sub_83AABBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABBC8"))) PPC_WEAK_FUNC(sub_83AABBC8);
PPC_FUNC_IMPL(__imp__sub_83AABBC8) {
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
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,29016
	ctx.r8.s64 = ctx.r9.s64 + 29016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,29016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29016, ctx.r8.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bl 0x83ab8618
	ctx.lr = 0x83AABC00;
	sub_83AB8618(ctx, base);
	// bl 0x83aa2908
	ctx.lr = 0x83AABC04;
	sub_83AA2908(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83AABC08;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aabb60
	ctx.lr = 0x83AABC14;
	sub_83AABB60(ctx, base);
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

__attribute__((alias("__imp__sub_83AABC2C"))) PPC_WEAK_FUNC(sub_83AABC2C);
PPC_FUNC_IMPL(__imp__sub_83AABC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABC30"))) PPC_WEAK_FUNC(sub_83AABC30);
PPC_FUNC_IMPL(__imp__sub_83AABC30) {
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
	// bl 0x83102db0
	ctx.lr = 0x83AABC40;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83AABC44;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83AABC48;
	sub_83102DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AABC58"))) PPC_WEAK_FUNC(sub_83AABC58);
PPC_FUNC_IMPL(__imp__sub_83AABC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AABC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,29016
	ctx.r30.s64 = ctx.r11.s64 + 29016;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x83aabca0
	goto loc_83AABCA0;
loc_83AABC7C:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabc9c
	if (cr6.eq) goto loc_83AABC9C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ad2220
	ctx.lr = 0x83AABC9C;
	sub_83AD2220(ctx, base);
loc_83AABC9C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AABCA0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83aabc7c
	if (!cr6.eq) goto loc_83AABC7C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AABCB0"))) PPC_WEAK_FUNC(sub_83AABCB0);
PPC_FUNC_IMPL(__imp__sub_83AABCB0) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aabe8c
	if (cr0.eq) goto loc_83AABE8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stb r30,309(r31)
	PPC_STORE_U8(ctx.r31.u32 + 309, ctx.r30.u8);
	// stb r30,310(r31)
	PPC_STORE_U8(ctx.r31.u32 + 310, ctx.r30.u8);
	// stb r30,311(r31)
	PPC_STORE_U8(ctx.r31.u32 + 311, ctx.r30.u8);
	// bl 0x831ea798
	ctx.lr = 0x83AABD00;
	sub_831EA798(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabd1c
	if (cr6.eq) goto loc_83AABD1C;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x831ea798
	ctx.lr = 0x83AABD1C;
	sub_831EA798(ctx, base);
loc_83AABD1C:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabd38
	if (cr6.eq) goto loc_83AABD38;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x831ea798
	ctx.lr = 0x83AABD38;
	sub_831EA798(ctx, base);
loc_83AABD38:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabd54
	if (cr6.eq) goto loc_83AABD54;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x831ea798
	ctx.lr = 0x83AABD54;
	sub_831EA798(ctx, base);
loc_83AABD54:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabd70
	if (cr6.eq) goto loc_83AABD70;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x831ea798
	ctx.lr = 0x83AABD70;
	sub_831EA798(ctx, base);
loc_83AABD70:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabd8c
	if (cr6.eq) goto loc_83AABD8C;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x831ea798
	ctx.lr = 0x83AABD8C;
	sub_831EA798(ctx, base);
loc_83AABD8C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabda8
	if (cr6.eq) goto loc_83AABDA8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x831ea798
	ctx.lr = 0x83AABDA8;
	sub_831EA798(ctx, base);
loc_83AABDA8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabdc4
	if (cr6.eq) goto loc_83AABDC4;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x831ea798
	ctx.lr = 0x83AABDC4;
	sub_831EA798(ctx, base);
loc_83AABDC4:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabde0
	if (cr6.eq) goto loc_83AABDE0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831ea798
	ctx.lr = 0x83AABDE0;
	sub_831EA798(ctx, base);
loc_83AABDE0:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabdfc
	if (cr6.eq) goto loc_83AABDFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831ea798
	ctx.lr = 0x83AABDFC;
	sub_831EA798(ctx, base);
loc_83AABDFC:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabe18
	if (cr6.eq) goto loc_83AABE18;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831ea798
	ctx.lr = 0x83AABE18;
	sub_831EA798(ctx, base);
loc_83AABE18:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabe34
	if (cr6.eq) goto loc_83AABE34;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831ea798
	ctx.lr = 0x83AABE34;
	sub_831EA798(ctx, base);
loc_83AABE34:
	// lbz r10,149(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83aabe5c
	if (cr0.eq) goto loc_83AABE5C;
	// addi r10,r31,142
	ctx.r10.s64 = ctx.r31.s64 + 142;
loc_83AABE48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r30,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r10.u32 = ea;
	// lbz r9,149(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aabe48
	if (cr6.lt) goto loc_83AABE48;
loc_83AABE5C:
	// addi r31,r31,356
	ctx.r31.s64 = ctx.r31.s64 + 356;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83AABE64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aabe80
	if (cr6.eq) goto loc_83AABE80;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831ea798
	ctx.lr = 0x83AABE80;
	sub_831EA798(ctx, base);
loc_83AABE80:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83aabe64
	if (!cr0.eq) goto loc_83AABE64;
loc_83AABE8C:
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

__attribute__((alias("__imp__sub_83AABEA4"))) PPC_WEAK_FUNC(sub_83AABEA4);
PPC_FUNC_IMPL(__imp__sub_83AABEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABEA8"))) PPC_WEAK_FUNC(sub_83AABEA8);
PPC_FUNC_IMPL(__imp__sub_83AABEA8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,29016
	ctx.r30.s64 = ctx.r11.s64 + 29016;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x83aabed8
	goto loc_83AABED8;
loc_83AABECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aabcb0
	ctx.lr = 0x83AABED4;
	sub_83AABCB0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AABED8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83aabecc
	if (!cr6.eq) goto loc_83AABECC;
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

__attribute__((alias("__imp__sub_83AABEF8"))) PPC_WEAK_FUNC(sub_83AABEF8);
PPC_FUNC_IMPL(__imp__sub_83AABEF8) {
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
	// cmpwi cr6,r3,117
	cr6.compare<int32_t>(ctx.r3.s32, 117, xer);
	// bgt cr6,0x83aabf44
	if (cr6.gt) goto loc_83AABF44;
	// cmpwi cr6,r3,114
	cr6.compare<int32_t>(ctx.r3.s32, 114, xer);
	// bge cr6,0x83aabf64
	if (!cr6.lt) goto loc_83AABF64;
	// cmpwi cr6,r3,79
	cr6.compare<int32_t>(ctx.r3.s32, 79, xer);
	// beq cr6,0x83aabf64
	if (cr6.eq) goto loc_83AABF64;
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// ble cr6,0x83aabf3c
	if (!cr6.gt) goto loc_83AABF3C;
	// cmpwi cr6,r3,91
	cr6.compare<int32_t>(ctx.r3.s32, 91, xer);
	// ble cr6,0x83aabf64
	if (!cr6.gt) goto loc_83AABF64;
	// cmpwi cr6,r3,93
	cr6.compare<int32_t>(ctx.r3.s32, 93, xer);
	// ble cr6,0x83aabf3c
	if (!cr6.gt) goto loc_83AABF3C;
	// cmpwi cr6,r3,96
	cr6.compare<int32_t>(ctx.r3.s32, 96, xer);
	// ble cr6,0x83aabf64
	if (!cr6.gt) goto loc_83AABF64;
loc_83AABF3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83aabf70
	goto loc_83AABF70;
loc_83AABF44:
	// cmpwi cr6,r3,139
	cr6.compare<int32_t>(ctx.r3.s32, 139, xer);
	// beq cr6,0x83aabf6c
	if (cr6.eq) goto loc_83AABF6C;
	// cmpwi cr6,r3,140
	cr6.compare<int32_t>(ctx.r3.s32, 140, xer);
	// ble cr6,0x83aabf3c
	if (!cr6.gt) goto loc_83AABF3C;
	// cmpwi cr6,r3,146
	cr6.compare<int32_t>(ctx.r3.s32, 146, xer);
	// ble cr6,0x83aabf64
	if (!cr6.gt) goto loc_83AABF64;
	// cmpwi cr6,r3,171
	cr6.compare<int32_t>(ctx.r3.s32, 171, xer);
	// bne cr6,0x83aabf3c
	if (!cr6.eq) goto loc_83AABF3C;
loc_83AABF64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83aabf70
	goto loc_83AABF70;
loc_83AABF6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AABF70:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83aabf9c
	if (cr6.lt) goto loc_83AABF9C;
	// beq cr6,0x83aabf88
	if (cr6.eq) goto loc_83AABF88;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83aabfac
	goto loc_83AABFAC;
loc_83AABF88:
	// bl 0x83b67d68
	ctx.lr = 0x83AABF8C;
	sub_83B67D68(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x83aabfac
	goto loc_83AABFAC;
loc_83AABF9C:
	// bl 0x83b67d68
	ctx.lr = 0x83AABFA0;
	sub_83B67D68(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83AABFAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AABFBC"))) PPC_WEAK_FUNC(sub_83AABFBC);
PPC_FUNC_IMPL(__imp__sub_83AABFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AABFC0"))) PPC_WEAK_FUNC(sub_83AABFC0);
PPC_FUNC_IMPL(__imp__sub_83AABFC0) {
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
	ctx.lr = 0x83AABFC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,129
	cr6.compare<int32_t>(ctx.r4.s32, 129, xer);
	// bgt cr6,0x83aac7b0
	if (cr6.gt) goto loc_83AAC7B0;
	// cmpwi cr6,r4,119
	cr6.compare<int32_t>(ctx.r4.s32, 119, xer);
	// bge cr6,0x83aac61c
	if (!cr6.lt) goto loc_83AAC61C;
	// cmpwi cr6,r4,89
	cr6.compare<int32_t>(ctx.r4.s32, 89, xer);
	// bgt cr6,0x83aac20c
	if (cr6.gt) goto loc_83AAC20C;
	// beq cr6,0x83aac1f8
	if (cr6.eq) goto loc_83AAC1F8;
	// cmpwi cr6,r4,76
	cr6.compare<int32_t>(ctx.r4.s32, 76, xer);
	// bgt cr6,0x83aac0cc
	if (cr6.gt) goto loc_83AAC0CC;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bge cr6,0x83aac048
	if (!cr6.lt) goto loc_83AAC048;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83aac03c
	if (cr6.lt) goto loc_83AAC03C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// ble cr6,0x83aac7e4
	if (!cr6.gt) goto loc_83AAC7E4;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// ble cr6,0x83aac480
	if (!cr6.gt) goto loc_83AAC480;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// ble cr6,0x83aac03c
	if (!cr6.gt) goto loc_83AAC03C;
	// cmpwi cr6,r4,12
	cr6.compare<int32_t>(ctx.r4.s32, 12, xer);
	// ble cr6,0x83aac480
	if (!cr6.gt) goto loc_83AAC480;
loc_83AAC03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AAC040:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83AAC048:
	// addi r11,r28,-13
	ctx.r11.s64 = ctx.r28.s64 + -13;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// subf r27,r8,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r10,89
	ctx.r11.s64 = ctx.r10.s64 + 89;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac0b0
	if (!cr6.eq) goto loc_83AAC0B0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC080;
	sub_83AABAD8(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83AAC0A0:
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83aac0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAC0A0;
loc_83AAC0B0:
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
loc_83AAC0C4:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x83aacb9c
	goto loc_83AACB9C;
loc_83AAC0CC:
	// cmpwi cr6,r28,77
	cr6.compare<int32_t>(ctx.r28.s32, 77, xer);
	// blt cr6,0x83aac03c
	if (cr6.lt) goto loc_83AAC03C;
	// cmpwi cr6,r28,82
	cr6.compare<int32_t>(ctx.r28.s32, 82, xer);
	// ble cr6,0x83aac0e8
	if (!cr6.gt) goto loc_83AAC0E8;
	// cmpwi cr6,r28,88
	cr6.compare<int32_t>(ctx.r28.s32, 88, xer);
	// ble cr6,0x83aac230
	if (!cr6.gt) goto loc_83AAC230;
	// b 0x83aac03c
	goto loc_83AAC03C;
loc_83AAC0E8:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac13c
	if (!cr6.eq) goto loc_83AAC13C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC0FC;
	sub_83AABAD8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_83AAC13C:
	// cmpwi cr6,r28,77
	cr6.compare<int32_t>(ctx.r28.s32, 77, xer);
	// beq cr6,0x83aac1e4
	if (cr6.eq) goto loc_83AAC1E4;
	// cmpwi cr6,r28,78
	cr6.compare<int32_t>(ctx.r28.s32, 78, xer);
	// beq cr6,0x83aac1cc
	if (cr6.eq) goto loc_83AAC1CC;
	// cmpwi cr6,r28,79
	cr6.compare<int32_t>(ctx.r28.s32, 79, xer);
	// beq cr6,0x83aac1b4
	if (cr6.eq) goto loc_83AAC1B4;
	// cmpwi cr6,r28,80
	cr6.compare<int32_t>(ctx.r28.s32, 80, xer);
	// beq cr6,0x83aac19c
	if (cr6.eq) goto loc_83AAC19C;
	// cmpwi cr6,r28,81
	cr6.compare<int32_t>(ctx.r28.s32, 81, xer);
	// beq cr6,0x83aac184
	if (cr6.eq) goto loc_83AAC184;
	// cmpwi cr6,r28,82
	cr6.compare<int32_t>(ctx.r28.s32, 82, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC184:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC19C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC1B4:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC1CC:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC1E4:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC1F8:
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// addi r10,r31,309
	ctx.r10.s64 = ctx.r31.s64 + 309;
loc_83AAC200:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83aacba4
	goto loc_83AACBA4;
loc_83AAC20C:
	// cmpwi cr6,r28,94
	cr6.compare<int32_t>(ctx.r28.s32, 94, xer);
	// bgt cr6,0x83aac3b4
	if (cr6.gt) goto loc_83AAC3B4;
	// beq cr6,0x83aac7e4
	if (cr6.eq) goto loc_83AAC7E4;
	// cmpwi cr6,r28,90
	cr6.compare<int32_t>(ctx.r28.s32, 90, xer);
	// beq cr6,0x83aac3a8
	if (cr6.eq) goto loc_83AAC3A8;
	// cmpwi cr6,r28,91
	cr6.compare<int32_t>(ctx.r28.s32, 91, xer);
	// beq cr6,0x83aac39c
	if (cr6.eq) goto loc_83AAC39C;
	// cmpwi cr6,r28,92
	cr6.compare<int32_t>(ctx.r28.s32, 92, xer);
	// bne cr6,0x83aac03c
	if (!cr6.eq) goto loc_83AAC03C;
loc_83AAC230:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac2ac
	if (!cr6.eq) goto loc_83AAC2AC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC244;
	sub_83AABAD8(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_83AAC2AC:
	// addi r11,r28,-83
	ctx.r11.s64 = ctx.r28.s64 + -83;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83aacba4
	if (cr6.gt) goto loc_83AACBA4;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,31192
	ctx.r12.s64 = ctx.r12.s64 + 31192;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// addi r12,r12,-15648
	ctx.r12.s64 = ctx.r12.s64 + -15648;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AAC2E0;
	case 1:
		goto loc_83AAC2F8;
	case 2:
		goto loc_83AAC310;
	case 3:
		goto loc_83AAC328;
	case 4:
		goto loc_83AAC340;
	case 5:
		goto loc_83AAC358;
	case 6:
		goto loc_83AACBA4;
	case 7:
		goto loc_83AACBA4;
	case 8:
		goto loc_83AACBA4;
	case 9:
		goto loc_83AAC388;
	case 10:
		goto loc_83AAC370;
	default:
		return;
	}
loc_83AAC2E0:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC2F0:
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC2F8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC308:
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC310:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC320:
	// addi r11,r11,47
	ctx.r11.s64 = ctx.r11.s64 + 47;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC328:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC338:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC340:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC350:
	// addi r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 + 49;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC358:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC368:
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC370:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC380:
	// addi r11,r11,51
	ctx.r11.s64 = ctx.r11.s64 + 51;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC388:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_83AAC394:
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC39C:
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// addi r10,r31,311
	ctx.r10.s64 = ctx.r31.s64 + 311;
	// b 0x83aac200
	goto loc_83AAC200;
loc_83AAC3A8:
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// addi r10,r31,310
	ctx.r10.s64 = ctx.r31.s64 + 310;
	// b 0x83aac200
	goto loc_83AAC200;
loc_83AAC3B4:
	// cmpwi cr6,r28,95
	cr6.compare<int32_t>(ctx.r28.s32, 95, xer);
	// blt cr6,0x83aac03c
	if (cr6.lt) goto loc_83AAC03C;
	// cmpwi cr6,r28,97
	cr6.compare<int32_t>(ctx.r28.s32, 97, xer);
	// ble cr6,0x83aac480
	if (!cr6.gt) goto loc_83AAC480;
	// cmpwi cr6,r28,113
	cr6.compare<int32_t>(ctx.r28.s32, 113, xer);
	// ble cr6,0x83aac03c
	if (!cr6.gt) goto loc_83AAC03C;
	// cmpwi cr6,r28,117
	cr6.compare<int32_t>(ctx.r28.s32, 117, xer);
	// bgt cr6,0x83aac03c
	if (cr6.gt) goto loc_83AAC03C;
loc_83AAC3D4:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac440
	if (!cr6.eq) goto loc_83AAC440;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC3E8;
	sub_83AABAD8(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_83AAC440:
	// cmpwi cr6,r28,138
	cr6.compare<int32_t>(ctx.r28.s32, 138, xer);
	// bgt cr6,0x83aac9a0
	if (cr6.gt) goto loc_83AAC9A0;
	// beq cr6,0x83aac990
	if (cr6.eq) goto loc_83AAC990;
	// cmpwi cr6,r28,114
	cr6.compare<int32_t>(ctx.r28.s32, 114, xer);
	// beq cr6,0x83aac97c
	if (cr6.eq) goto loc_83AAC97C;
	// cmpwi cr6,r28,115
	cr6.compare<int32_t>(ctx.r28.s32, 115, xer);
	// beq cr6,0x83aac968
	if (cr6.eq) goto loc_83AAC968;
	// cmpwi cr6,r28,116
	cr6.compare<int32_t>(ctx.r28.s32, 116, xer);
	// beq cr6,0x83aac954
	if (cr6.eq) goto loc_83AAC954;
	// cmpwi cr6,r28,117
	cr6.compare<int32_t>(ctx.r28.s32, 117, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac394
	goto loc_83AAC394;
loc_83AAC480:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac4f4
	if (!cr6.eq) goto loc_83AAC4F4;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC494;
	sub_83AABAD8(ctx, base);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
loc_83AAC4F4:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bgt cr6,0x83aac5ac
	if (cr6.gt) goto loc_83AAC5AC;
	// beq cr6,0x83aac598
	if (cr6.eq) goto loc_83AAC598;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// beq cr6,0x83aac584
	if (cr6.eq) goto loc_83AAC584;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x83aac56c
	if (cr6.eq) goto loc_83AAC56C;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// beq cr6,0x83aac554
	if (cr6.eq) goto loc_83AAC554;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// beq cr6,0x83aac53c
	if (cr6.eq) goto loc_83AAC53C;
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac394
	goto loc_83AAC394;
loc_83AAC53C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83AAC54C:
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC554:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83AAC564:
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC56C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83AAC57C:
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC584:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83AAC590:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC598:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac2f0
	goto loc_83AAC2F0;
loc_83AAC5AC:
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(ctx.r28.s32, 12, xer);
	// beq cr6,0x83aac608
	if (cr6.eq) goto loc_83AAC608;
	// cmpwi cr6,r28,95
	cr6.compare<int32_t>(ctx.r28.s32, 95, xer);
	// beq cr6,0x83aac5f4
	if (cr6.eq) goto loc_83AAC5F4;
	// cmpwi cr6,r28,96
	cr6.compare<int32_t>(ctx.r28.s32, 96, xer);
	// beq cr6,0x83aac5e0
	if (cr6.eq) goto loc_83AAC5E0;
	// cmpwi cr6,r28,97
	cr6.compare<int32_t>(ctx.r28.s32, 97, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac350
	goto loc_83AAC350;
loc_83AAC5E0:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac338
	goto loc_83AAC338;
loc_83AAC5F4:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac320
	goto loc_83AAC320;
loc_83AAC608:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// b 0x83aac308
	goto loc_83AAC308;
loc_83AAC61C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac698
	if (!cr6.eq) goto loc_83AAC698;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC630;
	sub_83AABAD8(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_83AAC698:
	// addi r11,r28,-119
	ctx.r11.s64 = ctx.r28.s64 + -119;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83aacba4
	if (cr6.gt) goto loc_83AACBA4;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,31168
	ctx.r12.s64 = ctx.r12.s64 + 31168;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// addi r12,r12,-14644
	ctx.r12.s64 = ctx.r12.s64 + -14644;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AAC6CC;
	case 1:
		goto loc_83AAC6DC;
	case 2:
		goto loc_83AAC6F0;
	case 3:
		goto loc_83AAC704;
	case 4:
		goto loc_83AAC718;
	case 5:
		goto loc_83AAC72C;
	case 6:
		goto loc_83AAC740;
	case 7:
		goto loc_83AAC754;
	case 8:
		goto loc_83AAC768;
	case 9:
		goto loc_83AAC780;
	case 10:
		goto loc_83AAC798;
	default:
		return;
	}
loc_83AAC6CC:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac394
	goto loc_83AAC394;
loc_83AAC6DC:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac2f0
	goto loc_83AAC2F0;
loc_83AAC6F0:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac308
	goto loc_83AAC308;
loc_83AAC704:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac320
	goto loc_83AAC320;
loc_83AAC718:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac338
	goto loc_83AAC338;
loc_83AAC72C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac350
	goto loc_83AAC350;
loc_83AAC740:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac368
	goto loc_83AAC368;
loc_83AAC754:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x83aac380
	goto loc_83AAC380;
loc_83AAC768:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC780:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,53
	ctx.r11.s64 = ctx.r11.s64 + 53;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC798:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,54
	ctx.r11.s64 = ctx.r11.s64 + 54;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC7B0:
	// addi r27,r28,-130
	ctx.r27.s64 = ctx.r28.s64 + -130;
	// cmplwi cr6,r27,42
	cr6.compare<uint32_t>(ctx.r27.u32, 42, xer);
	// bgt cr6,0x83aac03c
	if (cr6.gt) goto loc_83AAC03C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r27,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,31080
	ctx.r12.s64 = ctx.r12.s64 + 31080;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// addi r12,r12,-16324
	ctx.r12.s64 = ctx.r12.s64 + -16324;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_83AACA1C;
	case 1:
		goto loc_83AACA1C;
	case 2:
		goto loc_83AACA1C;
	case 3:
		goto loc_83AACA1C;
	case 4:
		goto loc_83AACA1C;
	case 5:
		goto loc_83AACA1C;
	case 6:
		goto loc_83AACA1C;
	case 7:
		goto loc_83AACA1C;
	case 8:
		goto loc_83AAC3D4;
	case 9:
		goto loc_83AACA10;
	case 10:
		goto loc_83AAC3D4;
	case 11:
		goto loc_83AAC7E4;
	case 12:
		goto loc_83AAC7E4;
	case 13:
		goto loc_83AACBA4;
	case 14:
		goto loc_83AACBA4;
	case 15:
		goto loc_83AACBA4;
	case 16:
		goto loc_83AAC7E4;
	case 17:
		goto loc_83AACA78;
	case 18:
		goto loc_83AACA78;
	case 19:
		goto loc_83AACA78;
	case 20:
		goto loc_83AACA78;
	case 21:
		goto loc_83AACA78;
	case 22:
		goto loc_83AACA78;
	case 23:
		goto loc_83AACA78;
	case 24:
		goto loc_83AAC3D4;
	case 25:
		goto loc_83AACADC;
	case 26:
		goto loc_83AACADC;
	case 27:
		goto loc_83AACADC;
	case 28:
		goto loc_83AACADC;
	case 29:
		goto loc_83AACADC;
	case 30:
		goto loc_83AACADC;
	case 31:
		goto loc_83AACADC;
	case 32:
		goto loc_83AACADC;
	case 33:
		goto loc_83AACB3C;
	case 34:
		goto loc_83AACB3C;
	case 35:
		goto loc_83AACB3C;
	case 36:
		goto loc_83AACB3C;
	case 37:
		goto loc_83AACB3C;
	case 38:
		goto loc_83AACB3C;
	case 39:
		goto loc_83AACB3C;
	case 40:
		goto loc_83AACB3C;
	case 41:
		goto loc_83AAC3D4;
	case 42:
		goto loc_83AAC3D4;
	default:
		return;
	}
loc_83AAC7E4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aac850
	if (!cr6.eq) goto loc_83AAC850;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AAC7F8;
	sub_83AABAD8(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_83AAC850:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bgt cr6,0x83aac8e0
	if (cr6.gt) goto loc_83AAC8E0;
	// beq cr6,0x83aac8c8
	if (cr6.eq) goto loc_83AAC8C8;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// blt cr6,0x83aac8b4
	if (cr6.lt) goto loc_83AAC8B4;
	// beq cr6,0x83aac8a0
	if (cr6.eq) goto loc_83AAC8A0;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x83aac88c
	if (cr6.lt) goto loc_83AAC88C;
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_83AAC884:
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC88C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// b 0x83aac394
	goto loc_83AAC394;
loc_83AAC8A0:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// b 0x83aac54c
	goto loc_83AAC54C;
loc_83AAC8B4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_83AAC8C0:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC8C8:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_83AAC8D8:
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC8E0:
	// cmpwi cr6,r28,94
	cr6.compare<int32_t>(ctx.r28.s32, 94, xer);
	// beq cr6,0x83aac940
	if (cr6.eq) goto loc_83AAC940;
	// cmpwi cr6,r28,141
	cr6.compare<int32_t>(ctx.r28.s32, 141, xer);
	// beq cr6,0x83aac928
	if (cr6.eq) goto loc_83AAC928;
	// cmpwi cr6,r28,142
	cr6.compare<int32_t>(ctx.r28.s32, 142, xer);
	// beq cr6,0x83aac914
	if (cr6.eq) goto loc_83AAC914;
	// cmpwi cr6,r28,146
	cr6.compare<int32_t>(ctx.r28.s32, 146, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// b 0x83aac57c
	goto loc_83AAC57C;
loc_83AAC914:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// b 0x83aac590
	goto loc_83AAC590;
loc_83AAC928:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_83AAC938:
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// b 0x83aacba0
	goto loc_83AACBA0;
loc_83AAC940:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// b 0x83aac564
	goto loc_83AAC564;
loc_83AAC954:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac54c
	goto loc_83AAC54C;
loc_83AAC968:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac564
	goto loc_83AAC564;
loc_83AAC97C:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac57c
	goto loc_83AAC57C;
loc_83AAC990:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac8c0
	goto loc_83AAC8C0;
loc_83AAC9A0:
	// cmpwi cr6,r28,140
	cr6.compare<int32_t>(ctx.r28.s32, 140, xer);
	// beq cr6,0x83aac9fc
	if (cr6.eq) goto loc_83AAC9FC;
	// cmpwi cr6,r28,154
	cr6.compare<int32_t>(ctx.r28.s32, 154, xer);
	// beq cr6,0x83aac9e8
	if (cr6.eq) goto loc_83AAC9E8;
	// cmpwi cr6,r28,171
	cr6.compare<int32_t>(ctx.r28.s32, 171, xer);
	// beq cr6,0x83aac9d4
	if (cr6.eq) goto loc_83AAC9D4;
	// cmpwi cr6,r28,172
	cr6.compare<int32_t>(ctx.r28.s32, 172, xer);
	// bne cr6,0x83aacba4
	if (!cr6.eq) goto loc_83AACBA4;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac938
	goto loc_83AAC938;
loc_83AAC9D4:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac590
	goto loc_83AAC590;
loc_83AAC9E8:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac884
	goto loc_83AAC884;
loc_83AAC9FC:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83aac8d8
	goto loc_83AAC8D8;
loc_83AACA10:
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// addi r10,r31,308
	ctx.r10.s64 = ctx.r31.s64 + 308;
	// b 0x83aac200
	goto loc_83AAC200;
loc_83AACA1C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaca60
	if (!cr6.eq) goto loc_83AACA60;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AACA30;
	sub_83AABAD8(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83AACA50:
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83aaca50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AACA50;
loc_83AACA60:
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// b 0x83aac0c4
	goto loc_83AAC0C4;
loc_83AACA78:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r28,r28,-147
	ctx.r28.s64 = ctx.r28.s64 + -147;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aacac0
	if (!cr6.eq) goto loc_83AACAC0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AACA90;
	sub_83AABAD8(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83AACAB0:
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83aacab0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AACAB0;
loc_83AACAC0:
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
loc_83AACAD4:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x83aacb9c
	goto loc_83AACB9C;
loc_83AACADC:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r28,r28,-155
	ctx.r28.s64 = ctx.r28.s64 + -155;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aacb24
	if (!cr6.eq) goto loc_83AACB24;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AACAF4;
	sub_83AABAD8(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83AACB14:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83aacb14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AACB14;
loc_83AACB24:
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// b 0x83aacad4
	goto loc_83AACAD4;
loc_83AACB3C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r28,r28,-163
	ctx.r28.s64 = ctx.r28.s64 + -163;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aacb84
	if (!cr6.eq) goto loc_83AACB84;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AACB54;
	sub_83AABAD8(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aac03c
	if (cr0.eq) goto loc_83AAC03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83AACB74:
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83aacb74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AACB74;
loc_83AACB84:
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_83AACB9C:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_83AACBA0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83AACBA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83aac040
	goto loc_83AAC040;
}

__attribute__((alias("__imp__sub_83AACBAC"))) PPC_WEAK_FUNC(sub_83AACBAC);
PPC_FUNC_IMPL(__imp__sub_83AACBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AACBB0"))) PPC_WEAK_FUNC(sub_83AACBB0);
PPC_FUNC_IMPL(__imp__sub_83AACBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AACBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,336(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aaceb0
	if (cr6.eq) goto loc_83AACEB0;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aacc08
	if (!cr6.eq) goto loc_83AACC08;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AACBEC;
	sub_83AABAD8(ctx, base);
	// stw r3,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aacf10
	if (cr0.eq) goto loc_83AACF10;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x831ce980
	ctx.lr = 0x83AACC04;
	sub_831CE980(ctx, base);
	// b 0x83aaceb0
	goto loc_83AACEB0;
loc_83AACC08:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacc50
	if (cr6.eq) goto loc_83AACC50;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacc34
	if (cr6.eq) goto loc_83AACC34;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83aacc38
	goto loc_83AACC38;
loc_83AACC34:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83AACC38:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
loc_83AACC50:
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacca0
	if (cr6.eq) goto loc_83AACCA0;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacc84
	if (cr6.eq) goto loc_83AACC84;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x83aacc88
	goto loc_83AACC88;
loc_83AACC84:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AACC88:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
loc_83AACCA0:
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aaccf0
	if (cr6.eq) goto loc_83AACCF0;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aaccd4
	if (cr6.eq) goto loc_83AACCD4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x83aaccd8
	goto loc_83AACCD8;
loc_83AACCD4:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83AACCD8:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,47(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r10,47(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 47);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
loc_83AACCF0:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacd20
	if (cr6.eq) goto loc_83AACD20;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
loc_83AACD20:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacd50
	if (cr6.eq) goto loc_83AACD50;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
loc_83AACD50:
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacda0
	if (cr6.eq) goto loc_83AACDA0;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacd84
	if (cr6.eq) goto loc_83AACD84;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x83aacd88
	goto loc_83AACD88;
loc_83AACD84:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_83AACD88:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r10,50(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
loc_83AACDA0:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacdd0
	if (cr6.eq) goto loc_83AACDD0;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lbz r10,51(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
loc_83AACDD0:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aace20
	if (cr6.eq) goto loc_83AACE20;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aace04
	if (cr6.eq) goto loc_83AACE04;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83aace08
	goto loc_83AACE08;
loc_83AACE04:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83AACE08:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AACE20:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aace50
	if (cr6.eq) goto loc_83AACE50;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
loc_83AACE50:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aace80
	if (cr6.eq) goto loc_83AACE80;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
loc_83AACE80:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aaceb0
	if (cr6.eq) goto loc_83AACEB0;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lbz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// lbz r10,54(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
loc_83AACEB0:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aaced0
	if (cr6.eq) goto loc_83AACED0;
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// lbz r11,309(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 309);
	// lbz r10,309(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 309);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,309(r29)
	PPC_STORE_U8(ctx.r29.u32 + 309, ctx.r11.u8);
loc_83AACED0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacef0
	if (cr6.eq) goto loc_83AACEF0;
	// stw r11,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r11.u32);
	// lbz r11,310(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 310);
	// lbz r10,310(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 310);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,310(r29)
	PPC_STORE_U8(ctx.r29.u32 + 310, ctx.r11.u8);
loc_83AACEF0:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aacf10
	if (cr6.eq) goto loc_83AACF10;
	// stw r11,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r11.u32);
	// lbz r11,311(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 311);
	// lbz r10,311(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 311);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,311(r29)
	PPC_STORE_U8(ctx.r29.u32 + 311, ctx.r11.u8);
loc_83AACF10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AACF18"))) PPC_WEAK_FUNC(sub_83AACF18);
PPC_FUNC_IMPL(__imp__sub_83AACF18) {
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
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// bgt cr6,0x83aacff8
	if (cr6.gt) goto loc_83AACFF8;
	// beq cr6,0x83aad0ec
	if (cr6.eq) goto loc_83AAD0EC;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(ctx.r11.s32, 77, xer);
	// bgt cr6,0x83aacfc4
	if (cr6.gt) goto loc_83AACFC4;
	// beq cr6,0x83aacfa4
	if (cr6.eq) goto loc_83AACFA4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x83aacf7c
	if (cr6.gt) goto loc_83AACF7C;
	// beq cr6,0x83aacf68
	if (cr6.eq) goto loc_83AACF68;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83aad0ec
	if (cr6.lt) goto loc_83AAD0EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83aacf68
	if (cr6.lt) goto loc_83AACF68;
	// beq cr6,0x83aad0fc
	if (cr6.eq) goto loc_83AAD0FC;
loc_83AACF68:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_83AACF6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AACF7C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83aad0fc
	if (cr6.eq) goto loc_83AAD0FC;
	// ble cr6,0x83aacf68
	if (!cr6.gt) goto loc_83AACF68;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// ble cr6,0x83aad0ec
	if (!cr6.gt) goto loc_83AAD0EC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83aacf68
	if (!cr6.gt) goto loc_83AACF68;
	// cmpwi cr6,r11,76
	cr6.compare<int32_t>(ctx.r11.s32, 76, xer);
	// ble cr6,0x83aad0ec
	if (!cr6.gt) goto loc_83AAD0EC;
	// b 0x83aacf68
	goto loc_83AACF68;
loc_83AACFA4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// b 0x83aad108
	goto loc_83AAD108;
loc_83AACFC4:
	// addi r11,r11,-78
	ctx.r11.s64 = ctx.r11.s64 + -78;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83aacf68
	if (cr6.gt) goto loc_83AACF68;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,31216
	ctx.r12.s64 = ctx.r12.s64 + 31216;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// nop 
	// addi r12,r12,-12440
	ctx.r12.s64 = ctx.r12.s64 + -12440;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AAD0EC;
	case 1:
		goto loc_83AACF68;
	case 2:
		goto loc_83AAD0FC;
	case 3:
		goto loc_83AAD0FC;
	case 4:
		goto loc_83AAD0EC;
	case 5:
		goto loc_83AAD0FC;
	case 6:
		goto loc_83AAD0FC;
	case 7:
		goto loc_83AAD0EC;
	case 8:
		goto loc_83AACF68;
	case 9:
		goto loc_83AACF68;
	default:
		return;
	}
loc_83AACFF8:
	// cmpwi cr6,r11,138
	cr6.compare<int32_t>(ctx.r11.s32, 138, xer);
	// bgt cr6,0x83aad070
	if (cr6.gt) goto loc_83AAD070;
	// beq cr6,0x83aad0fc
	if (cr6.eq) goto loc_83AAD0FC;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, xer);
	// bgt cr6,0x83aad030
	if (cr6.gt) goto loc_83AAD030;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// bge cr6,0x83aad0ec
	if (!cr6.lt) goto loc_83AAD0EC;
	// cmpwi cr6,r11,89
	cr6.compare<int32_t>(ctx.r11.s32, 89, xer);
	// blt cr6,0x83aacf68
	if (cr6.lt) goto loc_83AACF68;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// ble cr6,0x83aacf68
	if (!cr6.gt) goto loc_83AACF68;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x83aad0ec
	if (cr6.eq) goto loc_83AAD0EC;
	// b 0x83aacf68
	goto loc_83AACF68;
loc_83AAD030:
	// cmpwi cr6,r11,106
	cr6.compare<int32_t>(ctx.r11.s32, 106, xer);
	// blt cr6,0x83aacf68
	if (cr6.lt) goto loc_83AACF68;
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(ctx.r11.s32, 113, xer);
	// ble cr6,0x83aad0fc
	if (!cr6.gt) goto loc_83AAD0FC;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(ctx.r11.s32, 117, xer);
	// ble cr6,0x83aad058
	if (!cr6.gt) goto loc_83AAD058;
	// cmpwi cr6,r11,118
	cr6.compare<int32_t>(ctx.r11.s32, 118, xer);
	// ble cr6,0x83aacf68
	if (!cr6.gt) goto loc_83AACF68;
	// cmpwi cr6,r11,137
	cr6.compare<int32_t>(ctx.r11.s32, 137, xer);
	// b 0x83aacf68
	goto loc_83AACF68;
loc_83AAD058:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aacf68
	if (cr6.eq) goto loc_83AACF68;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83aacf6c
	goto loc_83AACF6C;
loc_83AAD070:
	// cmpwi cr6,r11,162
	cr6.compare<int32_t>(ctx.r11.s32, 162, xer);
	// bgt cr6,0x83aad0cc
	if (cr6.gt) goto loc_83AAD0CC;
	// cmpwi cr6,r11,147
	cr6.compare<int32_t>(ctx.r11.s32, 147, xer);
	// bge cr6,0x83aad0ec
	if (!cr6.lt) goto loc_83AAD0EC;
	// cmpwi cr6,r11,139
	cr6.compare<int32_t>(ctx.r11.s32, 139, xer);
	// beq cr6,0x83aad09c
	if (cr6.eq) goto loc_83AAD09C;
	// cmpwi cr6,r11,140
	cr6.compare<int32_t>(ctx.r11.s32, 140, xer);
	// beq cr6,0x83aad0ec
	if (cr6.eq) goto loc_83AAD0EC;
	// ble cr6,0x83aacf68
	if (!cr6.gt) goto loc_83AACF68;
	// cmpwi cr6,r11,146
	cr6.compare<int32_t>(ctx.r11.s32, 146, xer);
	// b 0x83aacf68
	goto loc_83AACF68;
loc_83AAD09C:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x83b67d68
	ctx.lr = 0x83AAD0BC;
	sub_83B67D68(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x83aacf6c
	goto loc_83AACF6C;
loc_83AAD0CC:
	// cmpwi cr6,r11,163
	cr6.compare<int32_t>(ctx.r11.s32, 163, xer);
	// blt cr6,0x83aacf68
	if (cr6.lt) goto loc_83AACF68;
	// cmpwi cr6,r11,170
	cr6.compare<int32_t>(ctx.r11.s32, 170, xer);
	// ble cr6,0x83aad0fc
	if (!cr6.gt) goto loc_83AAD0FC;
	// cmpwi cr6,r11,171
	cr6.compare<int32_t>(ctx.r11.s32, 171, xer);
	// beq cr6,0x83aacf68
	if (cr6.eq) goto loc_83AACF68;
	// cmpwi cr6,r11,172
	cr6.compare<int32_t>(ctx.r11.s32, 172, xer);
	// bne cr6,0x83aacf68
	if (!cr6.eq) goto loc_83AACF68;
loc_83AAD0EC:
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x83aad108
	goto loc_83AAD108;
loc_83AAD0FC:
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83AAD108:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83aacf6c
	goto loc_83AACF6C;
}

__attribute__((alias("__imp__sub_83AAD114"))) PPC_WEAK_FUNC(sub_83AAD114);
PPC_FUNC_IMPL(__imp__sub_83AAD114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD118"))) PPC_WEAK_FUNC(sub_83AAD118);
PPC_FUNC_IMPL(__imp__sub_83AAD118) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD128"))) PPC_WEAK_FUNC(sub_83AAD128);
PPC_FUNC_IMPL(__imp__sub_83AAD128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aad144
	if (!cr0.eq) goto loc_83AAD144;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_83AAD144:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD14C"))) PPC_WEAK_FUNC(sub_83AAD14C);
PPC_FUNC_IMPL(__imp__sub_83AAD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD150"))) PPC_WEAK_FUNC(sub_83AAD150);
PPC_FUNC_IMPL(__imp__sub_83AAD150) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,288(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD16C"))) PPC_WEAK_FUNC(sub_83AAD16C);
PPC_FUNC_IMPL(__imp__sub_83AAD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD170"))) PPC_WEAK_FUNC(sub_83AAD170);
PPC_FUNC_IMPL(__imp__sub_83AAD170) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,73(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83aad1b4
	if (!cr0.gt) goto loc_83AAD1B4;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_83AAD194:
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x83aad1f0
	if (cr6.eq) goto loc_83AAD1F0;
	// lbz r7,73(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83aad194
	if (cr6.lt) goto loc_83AAD194;
loc_83AAD1B4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AAD1B8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83aad1f8
	if (cr6.eq) goto loc_83AAD1F8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83aad250
	if (cr6.eq) goto loc_83AAD250;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x83aad250
	if (cr6.eq) goto loc_83AAD250;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,64(r8)
	PPC_STORE_U8(ctx.r8.u32 + 64, ctx.r9.u8);
	// b 0x83aad24c
	goto loc_83AAD24C;
loc_83AAD1F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x83aad1b8
	goto loc_83AAD1B8;
loc_83AAD1F8:
	// lbz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83aad21c
	if (!cr6.eq) goto loc_83AAD21C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31656
	ctx.r4.s64 = ctx.r11.s64 + 31656;
	// bl 0x831ea400
	ctx.lr = 0x83AAD214;
	sub_831EA400(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83aad250
	goto loc_83AAD250;
loc_83AAD21C:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stfsx f1,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// sthx r4,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u16);
	// stb r9,64(r7)
	PPC_STORE_U8(ctx.r7.u32 + 64, ctx.r9.u8);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
loc_83AAD24C:
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
loc_83AAD250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD260"))) PPC_WEAK_FUNC(sub_83AAD260);
PPC_FUNC_IMPL(__imp__sub_83AAD260) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD26C"))) PPC_WEAK_FUNC(sub_83AAD26C);
PPC_FUNC_IMPL(__imp__sub_83AAD26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD270"))) PPC_WEAK_FUNC(sub_83AAD270);
PPC_FUNC_IMPL(__imp__sub_83AAD270) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD27C"))) PPC_WEAK_FUNC(sub_83AAD27C);
PPC_FUNC_IMPL(__imp__sub_83AAD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD280"))) PPC_WEAK_FUNC(sub_83AAD280);
PPC_FUNC_IMPL(__imp__sub_83AAD280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AAD288;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,149(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 149);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq 0x83aad5c0
	if (cr0.eq) goto loc_83AAD5C0;
	// lbz r30,149(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 149);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne 0x83aad2cc
	if (!cr0.eq) goto loc_83AAD2CC;
	// addi r5,r4,152
	ctx.r5.s64 = ctx.r4.s64 + 152;
	// mulli r6,r28,12
	ctx.r6.s64 = ctx.r28.s64 * 12;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x831ea778
	ctx.lr = 0x83AAD2C0;
	sub_831EA778(ctx, base);
	// lbz r11,149(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 149);
	// stb r11,149(r26)
	PPC_STORE_U8(ctx.r26.u32 + 149, ctx.r11.u8);
	// b 0x83aad5c0
	goto loc_83AAD5C0;
loc_83AAD2CC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aad498
	if (cr6.eq) goto loc_83AAD498;
loc_83AAD2E0:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// bge cr6,0x83aad498
	if (!cr6.lt) goto loc_83AAD498;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// lhz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 152);
	// lhz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 152);
	// bge cr6,0x83aad4d0
	if (!cr6.lt) goto loc_83AAD4D0;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83aad420
	if (!cr6.eq) goto loc_83AAD420;
	// mulli r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 * 12;
	// lbz r4,155(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 155);
	// lbz r7,155(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 155);
	// lbz r31,154(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 154);
	// lbz r29,154(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 154);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,82
	ctx.r24.s64 = ctx.r1.s64 + 82;
	// addi r22,r1,83
	ctx.r22.s64 = ctx.r1.s64 + 83;
	// or r23,r7,r4
	ctx.r23.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 | ctx.r29.u64;
	// sthx r8,r9,r27
	PPC_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r8.u16);
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbx r31,r9,r24
	PPC_STORE_U8(ctx.r9.u32 + ctx.r24.u32, ctx.r31.u8);
	// stbx r23,r9,r22
	PPC_STORE_U8(ctx.r9.u32 + ctx.r22.u32, ctx.r23.u8);
	// beq 0x83aad3a0
	if (cr0.eq) goto loc_83AAD3A0;
	// clrlwi. r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83aad390
	if (cr0.eq) goto loc_83AAD390;
	// addi r8,r3,13
	ctx.r8.s64 = ctx.r3.s64 + 13;
	// addi r4,r6,13
	ctx.r4.s64 = ctx.r6.s64 + 13;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfsx f0,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// mulli r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 * 12;
	// lfsx f13,r8,r26
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// b 0x83aad3bc
	goto loc_83AAD3BC;
loc_83AAD390:
	// addi r8,r6,13
	ctx.r8.s64 = ctx.r6.s64 + 13;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfsx f0,r8,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aad3b4
	goto loc_83AAD3B4;
loc_83AAD3A0:
	// clrlwi. r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83aad3bc
	if (cr0.eq) goto loc_83AAD3BC;
	// addi r8,r3,13
	ctx.r8.s64 = ctx.r3.s64 + 13;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfsx f0,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
loc_83AAD3B4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
loc_83AAD3BC:
	// lbz r8,155(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 155);
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83aad3f8
	if (cr0.eq) goto loc_83AAD3F8;
	// rlwinm. r8,r7,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83aad3e8
	if (cr0.eq) goto loc_83AAD3E8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f0,160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// b 0x83aad40c
	goto loc_83AAD40C;
loc_83AAD3E8:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// b 0x83aad40c
	goto loc_83AAD40C;
loc_83AAD3F8:
	// rlwinm. r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aad40c
	if (cr0.eq) goto loc_83AAD40C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lfs f0,160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
loc_83AAD40C:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// b 0x83aad480
	goto loc_83AAD480;
loc_83AAD420:
	// bge cr6,0x83aad454
	if (!cr6.lt) goto loc_83AAD454;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// b 0x83aad480
	goto loc_83AAD480;
loc_83AAD454:
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mulli r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 * 12;
	// lwz r8,156(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// lwz r6,160(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
loc_83AAD480:
	// lbz r11,149(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 149);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aad2e0
	if (cr6.lt) goto loc_83AAD2E0;
loc_83AAD498:
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bne cr6,0x83aad52c
	if (!cr6.eq) goto loc_83AAD52C;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// ble cr6,0x83aad4e8
	if (!cr6.gt) goto loc_83AAD4E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// b 0x83aad4d8
	goto loc_83AAD4D8;
loc_83AAD4D0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,31816
	ctx.r4.s64 = ctx.r11.s64 + 31816;
loc_83AAD4D8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AAD4E4;
	sub_831EA400(ctx, base);
	// b 0x83aad5c0
	goto loc_83AAD5C0;
loc_83AAD4E8:
	// mulli r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 * 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// bl 0x831ea778
	ctx.lr = 0x83AAD500;
	sub_831EA778(ctx, base);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subfic r9,r31,8
	xer.ca = ctx.r31.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r31.s64;
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mulli r6,r27,12
	ctx.r6.s64 = ctx.r27.s64 * 12;
	// addi r5,r10,152
	ctx.r5.s64 = ctx.r10.s64 + 152;
	// mulli r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 * 12;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x831ea778
	ctx.lr = 0x83AAD524;
	sub_831EA778(ctx, base);
	// stb r28,149(r26)
	PPC_STORE_U8(ctx.r26.u32 + 149, ctx.r28.u8);
	// b 0x83aad5c0
	goto loc_83AAD5C0;
loc_83AAD52C:
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// ble cr6,0x83aad550
	if (!cr6.gt) goto loc_83AAD550;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,31744
	ctx.r4.s64 = ctx.r11.s64 + 31744;
	// b 0x83aad4d8
	goto loc_83AAD4D8;
loc_83AAD550:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aad5a8
	if (cr6.eq) goto loc_83AAD5A8;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x83aad5a8
	if (!cr6.gt) goto loc_83AAD5A8;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83aad5a8
	if (cr0.lt) goto loc_83AAD5A8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83AAD56C:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 * 12;
	// add r6,r7,r26
	ctx.r6.u64 = ctx.r7.u64 + ctx.r26.u64;
	// mulli r7,r5,12
	ctx.r7.s64 = ctx.r5.s64 * 12;
	// lwz r5,152(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r5,152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 152, ctx.r5.u32);
	// lwz r5,156(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 156);
	// stw r5,156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 156, ctx.r5.u32);
	// lwz r6,160(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// stw r6,160(r7)
	PPC_STORE_U32(ctx.r7.u32 + 160, ctx.r6.u32);
	// bne 0x83aad56c
	if (!cr0.eq) goto loc_83AAD56C;
loc_83AAD5A8:
	// mulli r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 * 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// bl 0x831ea778
	ctx.lr = 0x83AAD5BC;
	sub_831EA778(ctx, base);
	// stb r31,149(r26)
	PPC_STORE_U8(ctx.r26.u32 + 149, ctx.r31.u8);
loc_83AAD5C0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAD5C8"))) PPC_WEAK_FUNC(sub_83AAD5C8);
PPC_FUNC_IMPL(__imp__sub_83AAD5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AAD5D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r7,149(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 149);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x83aad628
	if (cr0.eq) goto loc_83AAD628;
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83AAD5F4:
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r30,152
	ctx.r9.s64 = ctx.r30.s64 + 152;
	// lhz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 152);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aad64c
	if (cr6.eq) goto loc_83AAD64C;
	// bgt cr6,0x83aad628
	if (cr6.gt) goto loc_83AAD628;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,149(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 149);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x83aad5f4
	if (cr6.lt) goto loc_83AAD5F4;
loc_83AAD628:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x83aad6c0
	if (cr6.lt) goto loc_83AAD6C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AAD644;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aad798
	goto loc_83AAD798;
loc_83AAD64C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83aad690
	if (cr6.eq) goto loc_83AAD690;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// beq cr6,0x83aad674
	if (cr6.eq) goto loc_83AAD674;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x83aad678
	goto loc_83AAD678;
loc_83AAD674:
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_83AAD678:
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_83AAD690:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83aad6b4
	if (cr6.eq) goto loc_83AAD6B4;
	// stfs f2,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_83AAD6B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// b 0x83aad794
	goto loc_83AAD794;
loc_83AAD6C0:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x83aad708
	if (!cr6.lt) goto loc_83AAD708;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// ble cr6,0x83aad708
	if (!cr6.gt) goto loc_83AAD708;
	// mulli r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
loc_83AAD6E0:
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bgt cr6,0x83aad6e0
	if (cr6.gt) goto loc_83AAD6E0;
loc_83AAD708:
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// addi r9,r9,13
	ctx.r9.s64 = ctx.r9.s64 + 13;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 * 12;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// sth r4,152(r11)
	PPC_STORE_U16(ctx.r11.u32 + 152, ctx.r4.u16);
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// stb r28,154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 154, ctx.r28.u8);
	// stb r28,155(r11)
	PPC_STORE_U8(ctx.r11.u32 + 155, ctx.r28.u8);
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83aad75c
	if (cr6.eq) goto loc_83AAD75C;
	// stfsx f1,r7,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
loc_83AAD75C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83aad780
	if (cr6.eq) goto loc_83AAD780;
	// stfs f2,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_83AAD780:
	// lbz r11,149(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 149);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// stb r11,149(r10)
	PPC_STORE_U8(ctx.r10.u32 + 149, ctx.r11.u8);
loc_83AAD794:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AAD798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAD7A0"))) PPC_WEAK_FUNC(sub_83AAD7A0);
PPC_FUNC_IMPL(__imp__sub_83AAD7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// b 0x83aad5c8
	sub_83AAD5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAD7B8"))) PPC_WEAK_FUNC(sub_83AAD7B8);
PPC_FUNC_IMPL(__imp__sub_83AAD7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83aad5c8
	sub_83AAD5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAD7D4"))) PPC_WEAK_FUNC(sub_83AAD7D4);
PPC_FUNC_IMPL(__imp__sub_83AAD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD7D8"))) PPC_WEAK_FUNC(sub_83AAD7D8);
PPC_FUNC_IMPL(__imp__sub_83AAD7D8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD800"))) PPC_WEAK_FUNC(sub_83AAD800);
PPC_FUNC_IMPL(__imp__sub_83AAD800) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,149(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 149);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD808"))) PPC_WEAK_FUNC(sub_83AAD808);
PPC_FUNC_IMPL(__imp__sub_83AAD808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r8,73(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x83aad840
	if (!cr0.gt) goto loc_83AAD840;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_83AAD820:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aad844
	if (cr6.eq) goto loc_83AAD844;
	// lbz r7,73(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83aad820
	if (cr6.lt) goto loc_83AAD820;
loc_83AAD840:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AAD844:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83aad8a8
	if (!cr6.lt) goto loc_83AAD8A8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r7,r3,65
	ctx.r7.s64 = ctx.r3.s64 + 65;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_83AAD87C:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbx r8,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,73(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83aad87c
	if (cr6.lt) goto loc_83AAD87C;
loc_83AAD8A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD8B8"))) PPC_WEAK_FUNC(sub_83AAD8B8);
PPC_FUNC_IMPL(__imp__sub_83AAD8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r6,r7,29416
	ctx.r6.s64 = ctx.r7.s64 + 29416;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,29416(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 29416);
	// lwz r9,-12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,-12(r6)
	PPC_STORE_U32(ctx.r6.u32 + -12, ctx.r10.u32);
	// stw r8,29416(r7)
	PPC_STORE_U32(ctx.r7.u32 + 29416, ctx.r8.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r5,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r5.u32);
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD8FC"))) PPC_WEAK_FUNC(sub_83AAD8FC);
PPC_FUNC_IMPL(__imp__sub_83AAD8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD900"))) PPC_WEAK_FUNC(sub_83AAD900);
PPC_FUNC_IMPL(__imp__sub_83AAD900) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// b 0x83ad2118
	sub_83AD2118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAD908"))) PPC_WEAK_FUNC(sub_83AAD908);
PPC_FUNC_IMPL(__imp__sub_83AAD908) {
	PPC_FUNC_PROLOGUE();
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
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// blt cr6,0x83aad974
	if (cr6.lt) goto loc_83AAD974;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83aad974
	if (cr6.eq) goto loc_83AAD974;
	// lbz r9,73(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83aad958
	if (!cr0.gt) goto loc_83AAD958;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_83AAD93C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aad95c
	if (cr6.eq) goto loc_83AAD95C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aad93c
	if (cr6.lt) goto loc_83AAD93C;
loc_83AAD958:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AAD95C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aad994
	if (cr6.eq) goto loc_83AAD994;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x83aad99c
	goto loc_83AAD99C;
loc_83AAD974:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83aabfc0
	ctx.lr = 0x83AAD980;
	sub_83AABFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aad994
	if (cr0.eq) goto loc_83AAD994;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83aad99c
	goto loc_83AAD99C;
loc_83AAD994:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_83AAD99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAD9AC"))) PPC_WEAK_FUNC(sub_83AAD9AC);
PPC_FUNC_IMPL(__imp__sub_83AAD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAD9B0"))) PPC_WEAK_FUNC(sub_83AAD9B0);
PPC_FUNC_IMPL(__imp__sub_83AAD9B0) {
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
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,172
	cr6.compare<uint32_t>(ctx.r11.u32, 172, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x83aada94
	if (cr6.gt) goto loc_83AADA94;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,31232
	ctx.r12.s64 = ctx.r12.s64 + 31232;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// nop 
	// addi r12,r12,-9732
	ctx.r12.s64 = ctx.r12.s64 + -9732;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AADA88;
	case 1:
		goto loc_83AADA74;
	case 2:
		goto loc_83AADA74;
	case 3:
		goto loc_83AADA74;
	case 4:
		goto loc_83AADA74;
	case 5:
		goto loc_83AADA74;
	case 6:
		goto loc_83AADA88;
	case 7:
		goto loc_83AADA88;
	case 8:
		goto loc_83AADA94;
	case 9:
		goto loc_83AADAA4;
	case 10:
		goto loc_83AADAA4;
	case 11:
		goto loc_83AADAA4;
	case 12:
		goto loc_83AADAA4;
	case 13:
		goto loc_83AADAA4;
	case 14:
		goto loc_83AADAA4;
	case 15:
		goto loc_83AADAA4;
	case 16:
		goto loc_83AADAA4;
	case 17:
		goto loc_83AADAA4;
	case 18:
		goto loc_83AADAA4;
	case 19:
		goto loc_83AADAA4;
	case 20:
		goto loc_83AADAA4;
	case 21:
		goto loc_83AADAA4;
	case 22:
		goto loc_83AADAA4;
	case 23:
		goto loc_83AADAA4;
	case 24:
		goto loc_83AADAA4;
	case 25:
		goto loc_83AADAA4;
	case 26:
		goto loc_83AADAA4;
	case 27:
		goto loc_83AADAA4;
	case 28:
		goto loc_83AADAA4;
	case 29:
		goto loc_83AADAA4;
	case 30:
		goto loc_83AADAA4;
	case 31:
		goto loc_83AADAA4;
	case 32:
		goto loc_83AADAA4;
	case 33:
		goto loc_83AADAA4;
	case 34:
		goto loc_83AADAA4;
	case 35:
		goto loc_83AADAA4;
	case 36:
		goto loc_83AADAA4;
	case 37:
		goto loc_83AADAA4;
	case 38:
		goto loc_83AADAA4;
	case 39:
		goto loc_83AADAA4;
	case 40:
		goto loc_83AADAA4;
	case 41:
		goto loc_83AADAA4;
	case 42:
		goto loc_83AADAA4;
	case 43:
		goto loc_83AADAA4;
	case 44:
		goto loc_83AADAA4;
	case 45:
		goto loc_83AADAA4;
	case 46:
		goto loc_83AADAA4;
	case 47:
		goto loc_83AADAA4;
	case 48:
		goto loc_83AADAA4;
	case 49:
		goto loc_83AADAA4;
	case 50:
		goto loc_83AADAA4;
	case 51:
		goto loc_83AADAA4;
	case 52:
		goto loc_83AADAA4;
	case 53:
		goto loc_83AADAA4;
	case 54:
		goto loc_83AADAA4;
	case 55:
		goto loc_83AADAA4;
	case 56:
		goto loc_83AADAA4;
	case 57:
		goto loc_83AADAA4;
	case 58:
		goto loc_83AADAA4;
	case 59:
		goto loc_83AADAA4;
	case 60:
		goto loc_83AADAA4;
	case 61:
		goto loc_83AADAA4;
	case 62:
		goto loc_83AADAA4;
	case 63:
		goto loc_83AADAA4;
	case 64:
		goto loc_83AADAA4;
	case 65:
		goto loc_83AADAA4;
	case 66:
		goto loc_83AADAA4;
	case 67:
		goto loc_83AADAA4;
	case 68:
		goto loc_83AADAA4;
	case 69:
		goto loc_83AADAA4;
	case 70:
		goto loc_83AADAA4;
	case 71:
		goto loc_83AADAA4;
	case 72:
		goto loc_83AADAA4;
	case 73:
		goto loc_83AADAA4;
	case 74:
		goto loc_83AADAA4;
	case 75:
		goto loc_83AADAA4;
	case 76:
		goto loc_83AADAA4;
	case 77:
		goto loc_83AADA74;
	case 78:
		goto loc_83AADA88;
	case 79:
		goto loc_83AADA74;
	case 80:
		goto loc_83AADA88;
	case 81:
		goto loc_83AADA88;
	case 82:
		goto loc_83AADA88;
	case 83:
		goto loc_83AADA20;
	case 84:
		goto loc_83AADA2C;
	case 85:
		goto loc_83AADA38;
	case 86:
		goto loc_83AADA08;
	case 87:
		goto loc_83AADA14;
	case 88:
		goto loc_83AADA44;
	case 89:
		goto loc_83AADA68;
	case 90:
		goto loc_83AADA68;
	case 91:
		goto loc_83AADA68;
	case 92:
		goto loc_83AADA5C;
	case 93:
		goto loc_83AADA50;
	case 94:
		goto loc_83AADA74;
	case 95:
		goto loc_83AADA7C;
	case 96:
		goto loc_83AADA74;
	case 97:
		goto loc_83AADA88;
	case 98:
		goto loc_83AADA88;
	case 99:
		goto loc_83AADAA4;
	case 100:
		goto loc_83AADAA4;
	case 101:
		goto loc_83AADAA4;
	case 102:
		goto loc_83AADAA4;
	case 103:
		goto loc_83AADAA4;
	case 104:
		goto loc_83AADAA4;
	case 105:
		goto loc_83AADAA4;
	case 106:
		goto loc_83AADA74;
	case 107:
		goto loc_83AADA74;
	case 108:
		goto loc_83AADA74;
	case 109:
		goto loc_83AADA74;
	case 110:
		goto loc_83AADA74;
	case 111:
		goto loc_83AADA74;
	case 112:
		goto loc_83AADA74;
	case 113:
		goto loc_83AADA74;
	case 114:
		goto loc_83AADA74;
	case 115:
		goto loc_83AADA74;
	case 116:
		goto loc_83AADA74;
	case 117:
		goto loc_83AADA74;
	case 118:
		goto loc_83AADA74;
	case 119:
		goto loc_83AADA74;
	case 120:
		goto loc_83AADA74;
	case 121:
		goto loc_83AADA88;
	case 122:
		goto loc_83AADA74;
	case 123:
		goto loc_83AADA74;
	case 124:
		goto loc_83AADA74;
	case 125:
		goto loc_83AADA88;
	case 126:
		goto loc_83AADA88;
	case 127:
		goto loc_83AADA74;
	case 128:
		goto loc_83AADA74;
	case 129:
		goto loc_83AADA88;
	case 130:
		goto loc_83AADA74;
	case 131:
		goto loc_83AADA74;
	case 132:
		goto loc_83AADA74;
	case 133:
		goto loc_83AADA74;
	case 134:
		goto loc_83AADA74;
	case 135:
		goto loc_83AADA74;
	case 136:
		goto loc_83AADA74;
	case 137:
		goto loc_83AADA74;
	case 138:
		goto loc_83AADA74;
	case 139:
		goto loc_83AADA74;
	case 140:
		goto loc_83AADA88;
	case 141:
		goto loc_83AADA74;
	case 142:
		goto loc_83AADA74;
	case 143:
		goto loc_83AADA74;
	case 144:
		goto loc_83AADA74;
	case 145:
		goto loc_83AADA74;
	case 146:
		goto loc_83AAD9FC;
	case 147:
		goto loc_83AADA88;
	case 148:
		goto loc_83AADAA4;
	case 149:
		goto loc_83AADAA4;
	case 150:
		goto loc_83AADAA4;
	case 151:
		goto loc_83AADAA4;
	case 152:
		goto loc_83AADAA4;
	case 153:
		goto loc_83AADAA4;
	case 154:
		goto loc_83AADA88;
	case 155:
		goto loc_83AADAA4;
	case 156:
		goto loc_83AADAA4;
	case 157:
		goto loc_83AADAA4;
	case 158:
		goto loc_83AADAA4;
	case 159:
		goto loc_83AADAA4;
	case 160:
		goto loc_83AADAA4;
	case 161:
		goto loc_83AADAA4;
	case 162:
		goto loc_83AADAA4;
	case 163:
		goto loc_83AADA74;
	case 164:
		goto loc_83AADA74;
	case 165:
		goto loc_83AADA74;
	case 166:
		goto loc_83AADA74;
	case 167:
		goto loc_83AADA74;
	case 168:
		goto loc_83AADA74;
	case 169:
		goto loc_83AADA74;
	case 170:
		goto loc_83AADA74;
	case 171:
		goto loc_83AADA74;
	case 172:
		goto loc_83AADA88;
	default:
		return;
	}
loc_83AAD9FC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AADA00:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83aadab0
	goto loc_83AADAB0;
loc_83AADA08:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA0C;
	sub_83AB8740(ctx, base);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA14:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA18;
	sub_83AB8740(ctx, base);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA20:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA24;
	sub_83AB8740(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA2C:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA30;
	sub_83AB8740(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA38:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA3C;
	sub_83AB8740(ctx, base);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA44:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA48;
	sub_83AB8740(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA50:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA54;
	sub_83AB8740(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x83aada00
	goto loc_83AADA00;
loc_83AADA5C:
	// bl 0x83ab8740
	ctx.lr = 0x83AADA60;
	sub_83AB8740(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA68:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x83aada00
	goto loc_83AADA00;
loc_83AADA74:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83aada00
	goto loc_83AADA00;
loc_83AADA7C:
	// bl 0x83aa2918
	ctx.lr = 0x83AADA80;
	sub_83AA2918(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x83aadab0
	goto loc_83AADAB0;
loc_83AADA88:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83aadaac
	goto loc_83AADAAC;
loc_83AADA94:
	// cmpwi cr6,r11,1000
	cr6.compare<int32_t>(ctx.r11.s32, 1000, xer);
	// blt cr6,0x83aadab0
	if (cr6.lt) goto loc_83AADAB0;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aadab0
	if (cr6.eq) goto loc_83AADAB0;
loc_83AADAA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83AADAAC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83AADAB0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADAC4"))) PPC_WEAK_FUNC(sub_83AADAC4);
PPC_FUNC_IMPL(__imp__sub_83AADAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADAC8"))) PPC_WEAK_FUNC(sub_83AADAC8);
PPC_FUNC_IMPL(__imp__sub_83AADAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AADAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// blt cr6,0x83aadb04
	if (cr6.lt) goto loc_83AADB04;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83aadb04
	if (cr6.eq) goto loc_83AADB04;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aad170
	ctx.lr = 0x83AADB00;
	sub_83AAD170(ctx, base);
	// b 0x83aadb90
	goto loc_83AADB90;
loc_83AADB04:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aabfc0
	ctx.lr = 0x83AADB1C;
	sub_83AABFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aadb90
	if (cr0.eq) goto loc_83AADB90;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83aadb6c
	if (!cr6.eq) goto loc_83AADB6C;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, xer);
	// blt cr6,0x83aadb5c
	if (cr6.lt) goto loc_83AADB5C;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
	// ble cr6,0x83aadb90
	if (!cr6.gt) goto loc_83AADB90;
	// cmpwi cr6,r31,98
	cr6.compare<int32_t>(ctx.r31.s32, 98, xer);
	// ble cr6,0x83aadb5c
	if (!cr6.gt) goto loc_83AADB5C;
	// cmpwi cr6,r31,105
	cr6.compare<int32_t>(ctx.r31.s32, 105, xer);
	// ble cr6,0x83aadb90
	if (!cr6.gt) goto loc_83AADB90;
loc_83AADB5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aabef8
	ctx.lr = 0x83AADB68;
	sub_83AABEF8(ctx, base);
	// b 0x83aadb7c
	goto loc_83AADB7C;
loc_83AADB6C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x83aacf18
	ctx.lr = 0x83AADB7C;
	sub_83AACF18(ctx, base);
loc_83AADB7C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
loc_83AADB90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AADB98"))) PPC_WEAK_FUNC(sub_83AADB98);
PPC_FUNC_IMPL(__imp__sub_83AADB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADBB4"))) PPC_WEAK_FUNC(sub_83AADBB4);
PPC_FUNC_IMPL(__imp__sub_83AADBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADBB8"))) PPC_WEAK_FUNC(sub_83AADBB8);
PPC_FUNC_IMPL(__imp__sub_83AADBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADBD4"))) PPC_WEAK_FUNC(sub_83AADBD4);
PPC_FUNC_IMPL(__imp__sub_83AADBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADBD8"))) PPC_WEAK_FUNC(sub_83AADBD8);
PPC_FUNC_IMPL(__imp__sub_83AADBD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r11.u32);
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADBF0"))) PPC_WEAK_FUNC(sub_83AADBF0);
PPC_FUNC_IMPL(__imp__sub_83AADBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83AADBFC:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aadc18
	if (cr6.eq) goto loc_83AADC18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83aadbfc
	if (!cr0.eq) goto loc_83AADBFC;
	// blr 
	return;
loc_83AADC18:
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADC2C"))) PPC_WEAK_FUNC(sub_83AADC2C);
PPC_FUNC_IMPL(__imp__sub_83AADC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADC30"))) PPC_WEAK_FUNC(sub_83AADC30);
PPC_FUNC_IMPL(__imp__sub_83AADC30) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83aadc98
	if (cr0.eq) goto loc_83AADC98;
	// addi r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 + 92;
loc_83AADC54:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aadcb8
	if (cr6.eq) goto loc_83AADCB8;
	// lbz r8,148(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83aadc54
	if (cr6.lt) goto loc_83AADC54;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x83aadc98
	if (!cr6.eq) goto loc_83AADC98;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,32032
	ctx.r4.s64 = ctx.r11.s64 + 32032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AADC90;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aadcbc
	goto loc_83AADCBC;
loc_83AADC98:
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lbz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// stb r10,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
loc_83AADCB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AADCBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADCCC"))) PPC_WEAK_FUNC(sub_83AADCCC);
PPC_FUNC_IMPL(__imp__sub_83AADCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADCD0"))) PPC_WEAK_FUNC(sub_83AADCD0);
PPC_FUNC_IMPL(__imp__sub_83AADCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r7,r3,256
	ctx.r7.s64 = ctx.r3.s64 + 256;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_83AADCE0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aadd04
	if (cr6.eq) goto loc_83AADD04;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// blt cr6,0x83aadce0
	if (cr6.lt) goto loc_83AADCE0;
	// b 0x83aadd48
	goto loc_83AADD48;
loc_83AADD04:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83aadd24
	if (!cr6.eq) goto loc_83AADD24;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x83aadd44
	goto loc_83AADD44;
loc_83AADD24:
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// rlwinm r4,r8,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83aadd48
	if (cr6.eq) goto loc_83AADD48;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_83AADD44:
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
loc_83AADD48:
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83AADD58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x83aadd78
	if (cr6.eq) goto loc_83AADD78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83aadd58
	if (cr6.lt) goto loc_83AADD58;
	// blr 
	return;
loc_83AADD78:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADD90"))) PPC_WEAK_FUNC(sub_83AADD90);
PPC_FUNC_IMPL(__imp__sub_83AADD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADDAC"))) PPC_WEAK_FUNC(sub_83AADDAC);
PPC_FUNC_IMPL(__imp__sub_83AADDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADDB0"))) PPC_WEAK_FUNC(sub_83AADDB0);
PPC_FUNC_IMPL(__imp__sub_83AADDB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADDB8"))) PPC_WEAK_FUNC(sub_83AADDB8);
PPC_FUNC_IMPL(__imp__sub_83AADDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x83aaddc8
	if (!cr6.eq) goto loc_83AADDC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AADDC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r4,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
loc_83AADDD4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aaddfc
	if (cr6.eq) goto loc_83AADDFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83aaddd4
	if (cr6.lt) goto loc_83AADDD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AADDFC:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADE18"))) PPC_WEAK_FUNC(sub_83AADE18);
PPC_FUNC_IMPL(__imp__sub_83AADE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x83aade28
	if (!cr6.eq) goto loc_83AADE28;
loc_83AADE20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AADE28:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r4,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// addi r11,r3,256
	ctx.r11.s64 = ctx.r3.s64 + 256;
loc_83AADE34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aade20
	if (cr6.eq) goto loc_83AADE20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83aade34
	if (cr6.lt) goto loc_83AADE34;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADE5C"))) PPC_WEAK_FUNC(sub_83AADE5C);
PPC_FUNC_IMPL(__imp__sub_83AADE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADE60"))) PPC_WEAK_FUNC(sub_83AADE60);
PPC_FUNC_IMPL(__imp__sub_83AADE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AADE8C"))) PPC_WEAK_FUNC(sub_83AADE8C);
PPC_FUNC_IMPL(__imp__sub_83AADE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AADE90"))) PPC_WEAK_FUNC(sub_83AADE90);
PPC_FUNC_IMPL(__imp__sub_83AADE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AADE98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,149(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 149);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r4,152
	ctx.r5.s64 = ctx.r4.s64 + 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// mulli r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 * 12;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x831ea778
	ctx.lr = 0x83AADEBC;
	sub_831EA778(ctx, base);
	// lbz r11,149(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 149);
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// rotlwi r4,r10,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// lbz r11,73(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 73);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x831ea778
	ctx.lr = 0x83AADEE0;
	sub_831EA778(ctx, base);
	// lbz r11,73(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 73);
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x831ea778
	ctx.lr = 0x83AADEFC;
	sub_831EA778(ctx, base);
	// addi r5,r29,64
	ctx.r5.s64 = ctx.r29.s64 + 64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lbz r6,73(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 73);
	// lbz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// bl 0x831ea778
	ctx.lr = 0x83AADF10;
	sub_831EA778(ctx, base);
	// lbz r11,73(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 73);
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rotlwi r4,r10,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// lwz r5,136(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x831ea778
	ctx.lr = 0x83AADF34;
	sub_831EA778(ctx, base);
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,132(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x831ea778
	ctx.lr = 0x83AADF50;
	sub_831EA778(ctx, base);
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// lbz r10,146(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 146);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// lbz r11,147(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 147);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x831ea778
	ctx.lr = 0x83AADF74;
	sub_831EA778(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// subf r25,r31,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r10,147(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 147);
	// stb r10,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r10.u8);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r10,252(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
loc_83AADFC4:
	// lwzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83aadfc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AADFC4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lfs f0,288(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// addi r30,r11,29416
	ctx.r30.s64 = ctx.r11.s64 + 29416;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aae028
	if (cr6.eq) goto loc_83AAE028;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae00c
	if (!cr6.eq) goto loc_83AAE00C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE008;
	sub_83AABAD8(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
loc_83AAE00C:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae050
	if (cr6.eq) goto loc_83AAE050;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,312(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// bl 0x831ce980
	ctx.lr = 0x83AAE024;
	sub_831CE980(ctx, base);
	// b 0x83aae050
	goto loc_83AAE050;
loc_83AAE028:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae050
	if (cr6.eq) goto loc_83AAE050;
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
loc_83AAE050:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// beq cr6,0x83aae090
	if (cr6.eq) goto loc_83AAE090;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae074
	if (!cr6.eq) goto loc_83AAE074;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE070;
	sub_83AABAD8(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
loc_83AAE074:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae0b8
	if (cr6.eq) goto loc_83AAE0B8;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,316(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// bl 0x831ce980
	ctx.lr = 0x83AAE08C;
	sub_831CE980(ctx, base);
	// b 0x83aae0b8
	goto loc_83AAE0B8;
loc_83AAE090:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae0b8
	if (cr6.eq) goto loc_83AAE0B8;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r26.u32);
loc_83AAE0B8:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// beq cr6,0x83aae0f8
	if (cr6.eq) goto loc_83AAE0F8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae0dc
	if (!cr6.eq) goto loc_83AAE0DC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE0D8;
	sub_83AABAD8(ctx, base);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
loc_83AAE0DC:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae120
	if (cr6.eq) goto loc_83AAE120;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// bl 0x831ce980
	ctx.lr = 0x83AAE0F4;
	sub_831CE980(ctx, base);
	// b 0x83aae120
	goto loc_83AAE120;
loc_83AAE0F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae120
	if (cr6.eq) goto loc_83AAE120;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
loc_83AAE120:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// beq cr6,0x83aae160
	if (cr6.eq) goto loc_83AAE160;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae144
	if (!cr6.eq) goto loc_83AAE144;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE140;
	sub_83AABAD8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
loc_83AAE144:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae188
	if (cr6.eq) goto loc_83AAE188;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,324(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// bl 0x831ce980
	ctx.lr = 0x83AAE15C;
	sub_831CE980(ctx, base);
	// b 0x83aae188
	goto loc_83AAE188;
loc_83AAE160:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae188
	if (cr6.eq) goto loc_83AAE188;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r26.u32);
loc_83AAE188:
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// beq cr6,0x83aae1c8
	if (cr6.eq) goto loc_83AAE1C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae1ac
	if (!cr6.eq) goto loc_83AAE1AC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE1A8;
	sub_83AABAD8(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
loc_83AAE1AC:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae1f0
	if (cr6.eq) goto loc_83AAE1F0;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,328(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x831ce980
	ctx.lr = 0x83AAE1C4;
	sub_831CE980(ctx, base);
	// b 0x83aae1f0
	goto loc_83AAE1F0;
loc_83AAE1C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae1f0
	if (cr6.eq) goto loc_83AAE1F0;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
loc_83AAE1F0:
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// beq cr6,0x83aae230
	if (cr6.eq) goto loc_83AAE230;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae214
	if (!cr6.eq) goto loc_83AAE214;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE210;
	sub_83AABAD8(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
loc_83AAE214:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae258
	if (cr6.eq) goto loc_83AAE258;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,320(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// bl 0x831ce980
	ctx.lr = 0x83AAE22C;
	sub_831CE980(ctx, base);
	// b 0x83aae258
	goto loc_83AAE258;
loc_83AAE230:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae258
	if (cr6.eq) goto loc_83AAE258;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r26.u32);
loc_83AAE258:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// beq cr6,0x83aae298
	if (cr6.eq) goto loc_83AAE298;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae27c
	if (!cr6.eq) goto loc_83AAE27C;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE278;
	sub_83AABAD8(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
loc_83AAE27C:
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae2c0
	if (cr6.eq) goto loc_83AAE2C0;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,336(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// bl 0x831ce980
	ctx.lr = 0x83AAE294;
	sub_831CE980(ctx, base);
	// b 0x83aae2c0
	goto loc_83AAE2C0;
loc_83AAE298:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae2c0
	if (cr6.eq) goto loc_83AAE2C0;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r26.u32);
loc_83AAE2C0:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// addi r28,r31,356
	ctx.r28.s64 = ctx.r31.s64 + 356;
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lbz r11,309(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 309);
	// stb r11,309(r31)
	PPC_STORE_U8(ctx.r31.u32 + 309, ctx.r11.u8);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// lbz r11,310(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 310);
	// stb r11,310(r31)
	PPC_STORE_U8(ctx.r31.u32 + 310, ctx.r11.u8);
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lbz r11,311(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 311);
	// stb r11,311(r31)
	PPC_STORE_U8(ctx.r31.u32 + 311, ctx.r11.u8);
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// lbz r11,308(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 308);
	// stb r11,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r11.u8);
loc_83AAE308:
	// lwzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae344
	if (cr6.eq) goto loc_83AAE344;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aae334
	if (!cr6.eq) goto loc_83AAE334;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE328;
	sub_83AABAD8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aae370
	if (cr0.eq) goto loc_83AAE370;
loc_83AAE334:
	// li r5,40
	ctx.r5.s64 = 40;
	// lwzx r4,r28,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// bl 0x831ce980
	ctx.lr = 0x83AAE340;
	sub_831CE980(ctx, base);
	// b 0x83aae370
	goto loc_83AAE370;
loc_83AAE344:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae370
	if (cr6.eq) goto loc_83AAE370;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_83AAE370:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x83aae308
	if (!cr0.eq) goto loc_83AAE308;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// beq cr6,0x83aae3bc
	if (cr6.eq) goto loc_83AAE3BC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae3a0
	if (!cr6.eq) goto loc_83AAE3A0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE39C;
	sub_83AABAD8(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_83AAE3A0:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae3e4
	if (cr6.eq) goto loc_83AAE3E4;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,340(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// bl 0x831ce980
	ctx.lr = 0x83AAE3B8;
	sub_831CE980(ctx, base);
	// b 0x83aae3e4
	goto loc_83AAE3E4;
loc_83AAE3BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae3e4
	if (cr6.eq) goto loc_83AAE3E4;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
loc_83AAE3E4:
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// beq cr6,0x83aae424
	if (cr6.eq) goto loc_83AAE424;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae408
	if (!cr6.eq) goto loc_83AAE408;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE404;
	sub_83AABAD8(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
loc_83AAE408:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae44c
	if (cr6.eq) goto loc_83AAE44C;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,352(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// bl 0x831ce980
	ctx.lr = 0x83AAE420;
	sub_831CE980(ctx, base);
	// b 0x83aae44c
	goto loc_83AAE44C;
loc_83AAE424:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae44c
	if (cr6.eq) goto loc_83AAE44C;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
loc_83AAE44C:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// beq cr6,0x83aae48c
	if (cr6.eq) goto loc_83AAE48C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae470
	if (!cr6.eq) goto loc_83AAE470;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE46C;
	sub_83AABAD8(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
loc_83AAE470:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae4b4
	if (cr6.eq) goto loc_83AAE4B4;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// bl 0x831ce980
	ctx.lr = 0x83AAE488;
	sub_831CE980(ctx, base);
	// b 0x83aae4b4
	goto loc_83AAE4B4;
loc_83AAE48C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae4b4
	if (cr6.eq) goto loc_83AAE4B4;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r26.u32);
loc_83AAE4B4:
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// beq cr6,0x83aae4f4
	if (cr6.eq) goto loc_83AAE4F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aae4d8
	if (!cr6.eq) goto loc_83AAE4D8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE4D4;
	sub_83AABAD8(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
loc_83AAE4D8:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aae51c
	if (cr6.eq) goto loc_83AAE51C;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,348(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// bl 0x831ce980
	ctx.lr = 0x83AAE4F0;
	sub_831CE980(ctx, base);
	// b 0x83aae51c
	goto loc_83AAE51C;
loc_83AAE4F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aae51c
	if (cr6.eq) goto loc_83AAE51C;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r26,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r26.u32);
loc_83AAE51C:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAE534"))) PPC_WEAK_FUNC(sub_83AAE534);
PPC_FUNC_IMPL(__imp__sub_83AAE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAE538"))) PPC_WEAK_FUNC(sub_83AAE538);
PPC_FUNC_IMPL(__imp__sub_83AAE538) {
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
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83aae568
	goto loc_83AAE568;
loc_83AAE558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aacbb0
	ctx.lr = 0x83AAE564;
	sub_83AACBB0(ctx, base);
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
loc_83AAE568:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83aae558
	if (!cr6.eq) goto loc_83AAE558;
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

__attribute__((alias("__imp__sub_83AAE588"))) PPC_WEAK_FUNC(sub_83AAE588);
PPC_FUNC_IMPL(__imp__sub_83AAE588) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r8,65535
	ctx.r11.u64 = ctx.r8.u64 | 65535;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// addi r8,r3,256
	ctx.r8.s64 = ctx.r3.s64 + 256;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r30.u8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// stb r30,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r30.u8);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stb r30,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r30.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r30,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r30.u8);
	// stb r30,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r30.u8);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
loc_83AAE5F8:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83aae5f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAE5F8;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x83ad21c8
	ctx.lr = 0x83AAE62C;
	sub_83AD21C8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r8,312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r9,r11,29416
	ctx.r9.s64 = ctx.r11.s64 + 29416;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x83aae668
	if (cr6.eq) goto loc_83AAE668;
	// lwz r7,-12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r7,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r7.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// b 0x83aae66c
	goto loc_83AAE66C;
loc_83AAE668:
	// lwz r11,-12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
loc_83AAE66C:
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae694
	if (cr6.eq) goto loc_83AAE694;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE694:
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae6bc
	if (cr6.eq) goto loc_83AAE6BC;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE6BC:
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae6e4
	if (cr6.eq) goto loc_83AAE6E4;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE6E4:
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae70c
	if (cr6.eq) goto loc_83AAE70C;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE70C:
	// lwz r8,332(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae734
	if (cr6.eq) goto loc_83AAE734;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE734:
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae75c
	if (cr6.eq) goto loc_83AAE75C;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE75C:
	// lwz r8,340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae784
	if (cr6.eq) goto loc_83AAE784;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE784:
	// lwz r8,344(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae7ac
	if (cr6.eq) goto loc_83AAE7AC;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE7AC:
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae7d4
	if (cr6.eq) goto loc_83AAE7D4;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE7D4:
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae7fc
	if (cr6.eq) goto loc_83AAE7FC;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r7.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83AAE7FC:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r31,356
	ctx.r7.s64 = ctx.r31.s64 + 356;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83AAE808:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83aae82c
	if (cr6.eq) goto loc_83AAE82C;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r6,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r6.u32);
loc_83AAE82C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x83aae808
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAE808;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AAE850"))) PPC_WEAK_FUNC(sub_83AAE850);
PPC_FUNC_IMPL(__imp__sub_83AAE850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae86c
	if (cr6.eq) goto loc_83AAE86C;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_83AAE86C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae880
	if (cr6.eq) goto loc_83AAE880;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_83AAE880:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae894
	if (cr6.eq) goto loc_83AAE894;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_83AAE894:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae8a8
	if (cr6.eq) goto loc_83AAE8A8;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_83AAE8A8:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae8bc
	if (cr6.eq) goto loc_83AAE8BC;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_83AAE8BC:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae8d0
	if (cr6.eq) goto loc_83AAE8D0;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_83AAE8D0:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae8e4
	if (cr6.eq) goto loc_83AAE8E4;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_83AAE8E4:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae8f4
	if (cr6.eq) goto loc_83AAE8F4;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
loc_83AAE8F4:
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae904
	if (cr6.eq) goto loc_83AAE904;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
loc_83AAE904:
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae914
	if (cr6.eq) goto loc_83AAE914;
	// sth r10,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r10.u16);
loc_83AAE914:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aae924
	if (cr6.eq) goto loc_83AAE924;
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
loc_83AAE924:
	// lbz r10,53(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// lbz r11,54(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 54);
	// lbz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,51(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 51);
	// lbz r8,50(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 50);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lbz r9,49(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 49);
	// lbz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,47(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// lbz r6,46(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lbz r8,45(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// lbz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAE97C"))) PPC_WEAK_FUNC(sub_83AAE97C);
PPC_FUNC_IMPL(__imp__sub_83AAE97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAE980"))) PPC_WEAK_FUNC(sub_83AAE980);
PPC_FUNC_IMPL(__imp__sub_83AAE980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AAE994;
	sub_83AABAD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aae9bc
	if (cr0.eq) goto loc_83AAE9BC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
loc_83AAE9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAE9CC"))) PPC_WEAK_FUNC(sub_83AAE9CC);
PPC_FUNC_IMPL(__imp__sub_83AAE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAE9D0"))) PPC_WEAK_FUNC(sub_83AAE9D0);
PPC_FUNC_IMPL(__imp__sub_83AAE9D0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaea20
	if (!cr6.eq) goto loc_83AAEA20;
	// bl 0x83aae980
	ctx.lr = 0x83AAEA04;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaea54
	if (cr0.eq) goto loc_83AAEA54;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEA20:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaea44
	if (cr6.eq) goto loc_83AAEA44;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83aaea54
	if (cr6.eq) goto loc_83AAEA54;
loc_83AAEA44:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEA54:
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

__attribute__((alias("__imp__sub_83AAEA70"))) PPC_WEAK_FUNC(sub_83AAEA70);
PPC_FUNC_IMPL(__imp__sub_83AAEA70) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaeac0
	if (!cr6.eq) goto loc_83AAEAC0;
	// bl 0x83aae980
	ctx.lr = 0x83AAEAA4;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaeaf4
	if (cr0.eq) goto loc_83AAEAF4;
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEAC0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaeae4
	if (cr6.eq) goto loc_83AAEAE4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83aaeaf4
	if (cr6.eq) goto loc_83AAEAF4;
loc_83AAEAE4:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEAF4:
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

__attribute__((alias("__imp__sub_83AAEB10"))) PPC_WEAK_FUNC(sub_83AAEB10);
PPC_FUNC_IMPL(__imp__sub_83AAEB10) {
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
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaeb50
	if (!cr6.eq) goto loc_83AAEB50;
	// bl 0x83aae980
	ctx.lr = 0x83AAEB3C;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaeb70
	if (cr0.eq) goto loc_83AAEB70;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// b 0x83aaeb60
	goto loc_83AAEB60;
loc_83AAEB50:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83aaeb70
	if (cr6.eq) goto loc_83AAEB70;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_83AAEB60:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83AAEB70:
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

__attribute__((alias("__imp__sub_83AAEB88"))) PPC_WEAK_FUNC(sub_83AAEB88);
PPC_FUNC_IMPL(__imp__sub_83AAEB88) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaebd8
	if (!cr6.eq) goto loc_83AAEBD8;
	// bl 0x83aae980
	ctx.lr = 0x83AAEBBC;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaec0c
	if (cr0.eq) goto loc_83AAEC0C;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEBD8:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaebfc
	if (cr6.eq) goto loc_83AAEBFC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83aaec0c
	if (cr6.eq) goto loc_83AAEC0C;
loc_83AAEBFC:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEC0C:
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

__attribute__((alias("__imp__sub_83AAEC28"))) PPC_WEAK_FUNC(sub_83AAEC28);
PPC_FUNC_IMPL(__imp__sub_83AAEC28) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaec78
	if (!cr6.eq) goto loc_83AAEC78;
	// bl 0x83aae980
	ctx.lr = 0x83AAEC5C;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaecac
	if (cr0.eq) goto loc_83AAECAC;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAEC78:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaec9c
	if (cr6.eq) goto loc_83AAEC9C;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83aaecac
	if (cr6.eq) goto loc_83AAECAC;
loc_83AAEC9C:
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAECAC:
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

__attribute__((alias("__imp__sub_83AAECC8"))) PPC_WEAK_FUNC(sub_83AAECC8);
PPC_FUNC_IMPL(__imp__sub_83AAECC8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaed18
	if (!cr6.eq) goto loc_83AAED18;
	// bl 0x83aae980
	ctx.lr = 0x83AAECFC;
	sub_83AAE980(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aaed4c
	if (cr0.eq) goto loc_83AAED4C;
	// stfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAED18:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaed3c
	if (cr6.eq) goto loc_83AAED3C;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83aaed4c
	if (cr6.eq) goto loc_83AAED4C;
loc_83AAED3C:
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r30,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_83AAED4C:
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

__attribute__((alias("__imp__sub_83AAED68"))) PPC_WEAK_FUNC(sub_83AAED68);
PPC_FUNC_IMPL(__imp__sub_83AAED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAED70"))) PPC_WEAK_FUNC(sub_83AAED70);
PPC_FUNC_IMPL(__imp__sub_83AAED70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaed90
	if (!cr6.eq) goto loc_83AAED90;
loc_83AAED88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAED90:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaed88
	if (cr6.eq) goto loc_83AAED88;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,37(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEDC0"))) PPC_WEAK_FUNC(sub_83AAEDC0);
PPC_FUNC_IMPL(__imp__sub_83AAEDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaedd4
	if (!cr6.eq) goto loc_83AAEDD4;
loc_83AAEDCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAEDD4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaedcc
	if (cr6.eq) goto loc_83AAEDCC;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEE04"))) PPC_WEAK_FUNC(sub_83AAEE04);
PPC_FUNC_IMPL(__imp__sub_83AAEE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAEE08"))) PPC_WEAK_FUNC(sub_83AAEE08);
PPC_FUNC_IMPL(__imp__sub_83AAEE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaee1c
	if (!cr6.eq) goto loc_83AAEE1C;
loc_83AAEE14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAEE1C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaee14
	if (cr6.eq) goto loc_83AAEE14;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,42(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

