#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A455F4"))) PPC_WEAK_FUNC(sub_82A455F4);
PPC_FUNC_IMPL(__imp__sub_82A455F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A455F8"))) PPC_WEAK_FUNC(sub_82A455F8);
PPC_FUNC_IMPL(__imp__sub_82A455F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45608"))) PPC_WEAK_FUNC(sub_82A45608);
PPC_FUNC_IMPL(__imp__sub_82A45608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45624"))) PPC_WEAK_FUNC(sub_82A45624);
PPC_FUNC_IMPL(__imp__sub_82A45624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45628"))) PPC_WEAK_FUNC(sub_82A45628);
PPC_FUNC_IMPL(__imp__sub_82A45628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a45638
	if (cr6.lt) goto loc_82A45638;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A45638:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4564C"))) PPC_WEAK_FUNC(sub_82A4564C);
PPC_FUNC_IMPL(__imp__sub_82A4564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45650"))) PPC_WEAK_FUNC(sub_82A45650);
PPC_FUNC_IMPL(__imp__sub_82A45650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a45668
	if (!cr6.lt) goto loc_82A45668;
	// mulli r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 * 148;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// blr 
	return;
loc_82A45668:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45670"))) PPC_WEAK_FUNC(sub_82A45670);
PPC_FUNC_IMPL(__imp__sub_82A45670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// beq cr6,0x82a45698
	if (cr6.eq) goto loc_82A45698;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_82A45698:
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A456A4"))) PPC_WEAK_FUNC(sub_82A456A4);
PPC_FUNC_IMPL(__imp__sub_82A456A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A456A8"))) PPC_WEAK_FUNC(sub_82A456A8);
PPC_FUNC_IMPL(__imp__sub_82A456A8) {
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
	// bl 0x83740858
	ctx.lr = 0x82A456C0;
	sub_83740858(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23896
	ctx.r9.s64 = ctx.r11.s64 + 23896;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
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

__attribute__((alias("__imp__sub_82A456E8"))) PPC_WEAK_FUNC(sub_82A456E8);
PPC_FUNC_IMPL(__imp__sub_82A456E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// blt cr6,0x82a45720
	if (cr6.lt) goto loc_82A45720;
loc_82A45704:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82A45720:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x82a45704
	if (!cr6.lt) goto loc_82A45704;
	// mulli r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 * 11;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4575C"))) PPC_WEAK_FUNC(sub_82A4575C);
PPC_FUNC_IMPL(__imp__sub_82A4575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45760"))) PPC_WEAK_FUNC(sub_82A45760);
PPC_FUNC_IMPL(__imp__sub_82A45760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A45768;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x82a45790
	if (cr6.lt) goto loc_82A45790;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a457a0
	goto loc_82A457A0;
loc_82A45790:
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A457A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a457c0
	if (!cr6.eq) goto loc_82A457C0;
loc_82A457AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A457C0:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,6112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x82a44ac0
	ctx.lr = 0x82A457D8;
	sub_82A44AC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a457ac
	if (cr6.lt) goto loc_82A457AC;
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a457ac
	if (cr6.gt) goto loc_82A457AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A45824;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lbz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82a48068
	ctx.lr = 0x82A45844;
	sub_82A48068(ctx, base);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a45860
	if (!cr6.eq) goto loc_82A45860;
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a45864
	if (cr6.eq) goto loc_82A45864;
loc_82A45860:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A45864:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A45874"))) PPC_WEAK_FUNC(sub_82A45874);
PPC_FUNC_IMPL(__imp__sub_82A45874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45878"))) PPC_WEAK_FUNC(sub_82A45878);
PPC_FUNC_IMPL(__imp__sub_82A45878) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a44c50
	ctx.lr = 0x82A45890;
	sub_82A44C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a458b4
	if (!cr6.eq) goto loc_82A458B4;
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
loc_82A458B4:
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x82A458C0;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a458dc
	if (cr6.gt) goto loc_82A458DC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A458DC:
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

__attribute__((alias("__imp__sub_82A458F0"))) PPC_WEAK_FUNC(sub_82A458F0);
PPC_FUNC_IMPL(__imp__sub_82A458F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a44c50
	ctx.lr = 0x82A45908;
	sub_82A44C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45948
	if (cr6.eq) goto loc_82A45948;
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x82A45920;
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
	// blt cr6,0x82a45948
	if (cr6.lt) goto loc_82A45948;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,-8380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8380);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4594c
	if (!cr6.gt) goto loc_82A4594C;
loc_82A45948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4594C:
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

__attribute__((alias("__imp__sub_82A45960"))) PPC_WEAK_FUNC(sub_82A45960);
PPC_FUNC_IMPL(__imp__sub_82A45960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A45968;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x82a225f0
	ctx.lr = 0x82A45990;
	sub_82A225F0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x82a45b68
	if (!cr6.lt) goto loc_82A45B68;
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lbz r24,252(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82a45b68
	if (cr6.eq) goto loc_82A45B68;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x82a459d0
	if (cr6.eq) goto loc_82A459D0;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// beq cr6,0x82a459d0
	if (cr6.eq) goto loc_82A459D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a459d8
	goto loc_82A459D8;
loc_82A459D0:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A459D8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r27,r26,11
	ctx.r27.s64 = ctx.r26.s64 * 11;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f31,68(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	ctx.f31.f64 = double(temp.f32);
loc_82A45A10:
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwzx r3,r25,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a29c78
	ctx.lr = 0x82A45A20;
	sub_82A29C78(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x82a45a40
	if (!cr6.eq) goto loc_82A45A40;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82a45a44
	if (cr6.eq) goto loc_82A45A44;
loc_82A45A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45A44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a45b48
	if (!cr6.eq) goto loc_82A45B48;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a45a64
	if (cr6.lt) goto loc_82A45A64;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82a45a68
	if (cr6.lt) goto loc_82A45A68;
loc_82A45A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45b48
	if (cr6.eq) goto loc_82A45B48;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a45a88
	if (cr6.lt) goto loc_82A45A88;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82a45a8c
	if (cr6.lt) goto loc_82A45A8C;
loc_82A45A88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45A8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45aac
	if (cr6.eq) goto loc_82A45AAC;
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a45ab0
	goto loc_82A45AB0;
loc_82A45AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45AB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45b48
	if (cr6.eq) goto loc_82A45B48;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lfs f5,1280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,1284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a45228
	ctx.lr = 0x82A45AF0;
	sub_82A45228(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82a45b14
	if (cr6.eq) goto loc_82A45B14;
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// slw r10,r30,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r31.u8 & 0x3F));
	// addi r9,r11,19
	ctx.r9.s64 = ctx.r11.s64 + 19;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
loc_82A45B14:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x82a45b48
	if (!cr6.lt) goto loc_82A45B48;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x82a45b48
	if (!cr6.lt) goto loc_82A45B48;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f5,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A45B48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x82a45a10
	if (cr6.lt) goto loc_82A45A10;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x82a45b68
	if (!cr6.lt) goto loc_82A45B68;
	// addi r11,r26,93
	ctx.r11.s64 = ctx.r26.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
loc_82A45B68:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A45B74"))) PPC_WEAK_FUNC(sub_82A45B74);
PPC_FUNC_IMPL(__imp__sub_82A45B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45B78"))) PPC_WEAK_FUNC(sub_82A45B78);
PPC_FUNC_IMPL(__imp__sub_82A45B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82A45B80;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// addic. r29,r3,388
	xer.ca = ctx.r3.u32 > 4294966907;
	ctx.r29.s64 = ctx.r3.s64 + 388;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82a45d6c
	if (cr0.eq) goto loc_82A45D6C;
	// addi r4,r4,8144
	ctx.r4.s64 = ctx.r4.s64 + 8144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a492f8
	ctx.lr = 0x82A45BB4;
	sub_82A492F8(ctx, base);
	// addi r4,r31,8156
	ctx.r4.s64 = ctx.r31.s64 + 8156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a49318
	ctx.lr = 0x82A45BC0;
	sub_82A49318(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// ori r17,r11,39156
	ctx.r17.u64 = ctx.r11.u64 | 39156;
loc_82A45BD8:
	// lwzx r11,r26,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a45bf0
	if (cr6.eq) goto loc_82A45BF0;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
loc_82A45BF0:
	// lis r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r25,r25,39112
	ctx.r25.u64 = ctx.r25.u64 | 39112;
loc_82A45BFC:
	// add. r31,r20,r28
	ctx.r31.u64 = ctx.r20.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a45c10
	if (cr0.lt) goto loc_82A45C10;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x82a45c14
	if (cr6.lt) goto loc_82A45C14;
loc_82A45C10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45C14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45c34
	if (cr6.eq) goto loc_82A45C34;
	// add r11,r31,r15
	ctx.r11.u64 = ctx.r31.u64 + ctx.r15.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a45c38
	goto loc_82A45C38;
loc_82A45C34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45C38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45d18
	if (cr6.eq) goto loc_82A45D18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r26,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// bl 0x82a16188
	ctx.lr = 0x82A45C50;
	sub_82A16188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a49240
	ctx.lr = 0x82A45C60;
	sub_82A49240(ctx, base);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// bl 0x82a49250
	ctx.lr = 0x82A45C7C;
	sub_82A49250(ctx, base);
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,1280
	ctx.r5.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a49260
	ctx.lr = 0x82A45C90;
	sub_82A49260(ctx, base);
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,1304
	ctx.r5.s64 = ctx.r11.s64 + 1304;
	// bl 0x82a49288
	ctx.lr = 0x82A45CA4;
	sub_82A49288(ctx, base);
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,1272
	ctx.r5.s64 = ctx.r11.s64 + 1272;
	// bl 0x82a492b0
	ctx.lr = 0x82A45CB8;
	sub_82A492B0(ctx, base);
	// lwzx r3,r30,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// bl 0x82a36688
	ctx.lr = 0x82A45CC0;
	sub_82A36688(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a492c8
	ctx.lr = 0x82A45CD4;
	sub_82A492C8(ctx, base);
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a45ce8
	if (!cr6.lt) goto loc_82A45CE8;
	// lwzx r11,r26,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// b 0x82a45cec
	goto loc_82A45CEC;
loc_82A45CE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A45CEC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a492e0
	ctx.lr = 0x82A45D00;
	sub_82A492E0(ctx, base);
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r10,1396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1396);
	// cmpwi cr6,r10,61
	cr6.compare<int32_t>(ctx.r10.s32, 61, xer);
	// bne cr6,0x82a45d28
	if (!cr6.eq) goto loc_82A45D28;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// b 0x82a45d28
	goto loc_82A45D28;
loc_82A45D18:
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a49240
	ctx.lr = 0x82A45D28;
	sub_82A49240(ctx, base);
loc_82A45D28:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r25,r17
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r17.s32, xer);
	// blt cr6,0x82a45bfc
	if (cr6.lt) goto loc_82A45BFC;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// add r11,r18,r29
	ctx.r11.u64 = ctx.r18.u64 + ctx.r29.u64;
	// blt cr6,0x82a45d48
	if (cr6.lt) goto loc_82A45D48;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A45D48:
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a45d58
	if (cr6.eq) goto loc_82A45D58;
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
loc_82A45D58:
	// addi r20,r20,11
	ctx.r20.s64 = ctx.r20.s64 + 11;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r20,22
	cr6.compare<int32_t>(ctx.r20.s32, 22, xer);
	// blt cr6,0x82a45bd8
	if (cr6.lt) goto loc_82A45BD8;
loc_82A45D6C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A45D74"))) PPC_WEAK_FUNC(sub_82A45D74);
PPC_FUNC_IMPL(__imp__sub_82A45D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45D78"))) PPC_WEAK_FUNC(sub_82A45D78);
PPC_FUNC_IMPL(__imp__sub_82A45D78) {
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82A45DAC;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A45DC4"))) PPC_WEAK_FUNC(sub_82A45DC4);
PPC_FUNC_IMPL(__imp__sub_82A45DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45DC8"))) PPC_WEAK_FUNC(sub_82A45DC8);
PPC_FUNC_IMPL(__imp__sub_82A45DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A45DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,260
	ctx.r29.s64 = ctx.r3.s64 + 260;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lwz r31,260(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r4,264(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a45e10
	if (cr6.eq) goto loc_82A45E10;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A45E08;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A45E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A45E18"))) PPC_WEAK_FUNC(sub_82A45E18);
PPC_FUNC_IMPL(__imp__sub_82A45E18) {
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// bl 0x826908f8
	ctx.lr = 0x82A45E58;
	sub_826908F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a45e9c
	if (cr6.eq) goto loc_82A45E9C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a45e98
	if (cr6.eq) goto loc_82A45E98;
loc_82A45E78:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a45e88
	if (cr6.eq) goto loc_82A45E88;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
loc_82A45E88:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a45e78
	if (!cr6.eq) goto loc_82A45E78;
loc_82A45E98:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82A45E9C:
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

__attribute__((alias("__imp__sub_82A45EB8"))) PPC_WEAK_FUNC(sub_82A45EB8);
PPC_FUNC_IMPL(__imp__sub_82A45EB8) {
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
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x82a45ef4
	if (!cr6.lt) goto loc_82A45EF4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u16);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A45EF4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// bl 0x82badd90
	ctx.lr = 0x82A45F08;
	sub_82BADD90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45F18"))) PPC_WEAK_FUNC(sub_82A45F18);
PPC_FUNC_IMPL(__imp__sub_82A45F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A45F20;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r24,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r24.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r24,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r24.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r24,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r24.u32);
	// addi r22,r3,260
	ctx.r22.s64 = ctx.r3.s64 + 260;
	// bl 0x831cdcf0
	ctx.lr = 0x82A45F54;
	sub_831CDCF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// bl 0x8268f178
	ctx.lr = 0x82A45F60;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a46040
	if (!cr6.gt) goto loc_82A46040;
	// li r26,-256
	ctx.r26.s64 = -256;
	// addi r21,r25,256
	ctx.r21.s64 = ctx.r25.s64 + 256;
loc_82A45F70:
	// cmpwi cr6,r23,128
	cr6.compare<int32_t>(ctx.r23.s32, 128, xer);
	// bge cr6,0x82a45f80
	if (!cr6.lt) goto loc_82A45F80;
	// lhzx r11,r21,r26
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r26.u32);
	// b 0x82a45f88
	goto loc_82A45F88;
loc_82A45F80:
	// lwz r11,260(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 260);
	// lhzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
loc_82A45F88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x8268f178
	ctx.lr = 0x82A45F9C;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a45fe8
	if (!cr6.gt) goto loc_82A45FE8;
	// li r11,-256
	ctx.r11.s64 = -256;
	// addi r9,r28,256
	ctx.r9.s64 = ctx.r28.s64 + 256;
loc_82A45FAC:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bge cr6,0x82a45fbc
	if (!cr6.lt) goto loc_82A45FBC;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82a45fc4
	goto loc_82A45FC4;
loc_82A45FBC:
	// lwz r10,260(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_82A45FC4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a45fe4
	if (cr6.eq) goto loc_82A45FE4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a45fac
	if (cr6.lt) goto loc_82A45FAC;
	// b 0x82a45fe8
	goto loc_82A45FE8;
loc_82A45FE4:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82A45FE8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46028
	if (cr6.eq) goto loc_82A46028;
	// lwz r11,256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x82a46018
	if (!cr6.lt) goto loc_82A46018;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r27
	PPC_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u16);
	// lwz r11,256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,256(r27)
	PPC_STORE_U32(ctx.r27.u32 + 256, ctx.r9.u32);
	// b 0x82a46028
	goto loc_82A46028;
loc_82A46018:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82badd90
	ctx.lr = 0x82A46028;
	sub_82BADD90(ctx, base);
loc_82A46028:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// bl 0x8268f178
	ctx.lr = 0x82A46038;
	sub_8268F178(ctx, base);
	// cmpw cr6,r23,r3
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a45f70
	if (cr6.lt) goto loc_82A45F70;
loc_82A46040:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4604C"))) PPC_WEAK_FUNC(sub_82A4604C);
PPC_FUNC_IMPL(__imp__sub_82A4604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46050"))) PPC_WEAK_FUNC(sub_82A46050);
PPC_FUNC_IMPL(__imp__sub_82A46050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A46058;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x8268f178
	ctx.lr = 0x82A46074;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a46140
	if (!cr6.gt) goto loc_82A46140;
	// li r27,-256
	ctx.r27.s64 = -256;
	// addi r24,r26,256
	ctx.r24.s64 = ctx.r26.s64 + 256;
loc_82A46084:
	// cmpwi cr6,r25,128
	cr6.compare<int32_t>(ctx.r25.s32, 128, xer);
	// bge cr6,0x82a46094
	if (!cr6.lt) goto loc_82A46094;
	// lhzx r11,r24,r27
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r27.u32);
	// b 0x82a4609c
	goto loc_82A4609C;
loc_82A46094:
	// lwz r11,260(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 260);
	// lhzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
loc_82A4609C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268f178
	ctx.lr = 0x82A460AC;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a46128
	if (!cr6.gt) goto loc_82A46128;
	// li r11,-256
	ctx.r11.s64 = -256;
	// addi r9,r29,256
	ctx.r9.s64 = ctx.r29.s64 + 256;
loc_82A460BC:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bge cr6,0x82a460cc
	if (!cr6.lt) goto loc_82A460CC;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82a460d4
	goto loc_82A460D4;
loc_82A460CC:
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_82A460D4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a460f4
	if (cr6.eq) goto loc_82A460F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a460bc
	if (cr6.lt) goto loc_82A460BC;
	// b 0x82a46128
	goto loc_82A46128;
loc_82A460F4:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x82a46118
	if (!cr6.lt) goto loc_82A46118;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u16);
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,256(r28)
	PPC_STORE_U32(ctx.r28.u32 + 256, ctx.r9.u32);
	// b 0x82a46128
	goto loc_82A46128;
loc_82A46118:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,260
	ctx.r3.s64 = ctx.r28.s64 + 260;
	// bl 0x82badd90
	ctx.lr = 0x82A46128;
	sub_82BADD90(ctx, base);
loc_82A46128:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bl 0x8268f178
	ctx.lr = 0x82A46138;
	sub_8268F178(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a46084
	if (cr6.lt) goto loc_82A46084;
loc_82A46140:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A46148"))) PPC_WEAK_FUNC(sub_82A46148);
PPC_FUNC_IMPL(__imp__sub_82A46148) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82A46188;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a46050
	ctx.lr = 0x82A46198;
	sub_82A46050(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690998
	ctx.lr = 0x82A461A4;
	sub_82690998(ctx, base);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a461c0
	if (cr6.eq) goto loc_82A461C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A461C0;
	sub_825952B8(ctx, base);
loc_82A461C0:
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

__attribute__((alias("__imp__sub_82A461DC"))) PPC_WEAK_FUNC(sub_82A461DC);
PPC_FUNC_IMPL(__imp__sub_82A461DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A461E0"))) PPC_WEAK_FUNC(sub_82A461E0);
PPC_FUNC_IMPL(__imp__sub_82A461E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A461F0"))) PPC_WEAK_FUNC(sub_82A461F0);
PPC_FUNC_IMPL(__imp__sub_82A461F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A461FC"))) PPC_WEAK_FUNC(sub_82A461FC);
PPC_FUNC_IMPL(__imp__sub_82A461FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46200"))) PPC_WEAK_FUNC(sub_82A46200);
PPC_FUNC_IMPL(__imp__sub_82A46200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46210"))) PPC_WEAK_FUNC(sub_82A46210);
PPC_FUNC_IMPL(__imp__sub_82A46210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46220"))) PPC_WEAK_FUNC(sub_82A46220);
PPC_FUNC_IMPL(__imp__sub_82A46220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46230"))) PPC_WEAK_FUNC(sub_82A46230);
PPC_FUNC_IMPL(__imp__sub_82A46230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46244"))) PPC_WEAK_FUNC(sub_82A46244);
PPC_FUNC_IMPL(__imp__sub_82A46244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46248"))) PPC_WEAK_FUNC(sub_82A46248);
PPC_FUNC_IMPL(__imp__sub_82A46248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4625C"))) PPC_WEAK_FUNC(sub_82A4625C);
PPC_FUNC_IMPL(__imp__sub_82A4625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46260"))) PPC_WEAK_FUNC(sub_82A46260);
PPC_FUNC_IMPL(__imp__sub_82A46260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46274"))) PPC_WEAK_FUNC(sub_82A46274);
PPC_FUNC_IMPL(__imp__sub_82A46274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46278"))) PPC_WEAK_FUNC(sub_82A46278);
PPC_FUNC_IMPL(__imp__sub_82A46278) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46298"))) PPC_WEAK_FUNC(sub_82A46298);
PPC_FUNC_IMPL(__imp__sub_82A46298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82A462A0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce76c
	ctx.lr = 0x82A462A8;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r5,343(r1)
	PPC_STORE_U8(ctx.r1.u32 + 343, ctx.r5.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r21,192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r17,32(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c738
	ctx.lr = 0x82A462D4;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x82A462E8;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a0c710
	ctx.lr = 0x82A462FC;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A46310;
	sub_82A0C710(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a46e54
	if (cr6.eq) goto loc_82A46E54;
	// lwz r10,4472(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4472);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r8,28(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,4460(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,4456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4456);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bge cr6,0x82a46390
	if (!cr6.lt) goto loc_82A46390;
	// lwz r10,4476(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4476);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a46394
	if (cr6.eq) goto loc_82A46394;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// b 0x82a46394
	goto loc_82A46394;
loc_82A46390:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82A46394:
	// addi r20,r11,-1
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// cmplwi cr6,r20,8
	cr6.compare<uint32_t>(ctx.r20.u32, 8, xer);
	// bgt cr6,0x82a463dc
	if (cr6.gt) goto loc_82A463DC;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a463dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463DC;
	// bdzf 4*cr6+eq,0x82a463cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463CC;
	// bdzf 4*cr6+eq,0x82a463dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463DC;
	// bdzf 4*cr6+eq,0x82a463cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463CC;
	// bdzf 4*cr6+eq,0x82a463dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463DC;
	// bdzf 4*cr6+eq,0x82a463cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463CC;
	// bdzf 4*cr6+eq,0x82a463dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A463DC;
	// bne cr6,0x82a463cc
	if (!cr6.eq) goto loc_82A463CC;
loc_82A463CC:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82a463dc
	if (!cr6.eq) goto loc_82A463DC;
	// li r14,1
	ctx.r14.s64 = 1;
	// b 0x82a463e0
	goto loc_82A463E0;
loc_82A463DC:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82A463E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-17874
	ctx.r9.s64 = -1171390464;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// lfs f26,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// ori r23,r9,35747
	ctx.r23.u64 = ctx.r9.u64 | 35747;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// lfs f25,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f25.f64 = double(temp.f32);
loc_82A46418:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,24
	cr6.compare<uint32_t>(ctx.r24.u32, 24, xer);
	// blt cr6,0x82a46428
	if (cr6.lt) goto loc_82A46428;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A46428:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lbz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46d24
	if (cr6.eq) goto loc_82A46D24;
	// lbz r9,343(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 343);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a46d24
	if (!cr6.eq) goto loc_82A46D24;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x82A4645C;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a46a8c
	if (cr6.eq) goto loc_82A46A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a46a8c
	if (cr6.eq) goto loc_82A46A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4649C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A464C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A464E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4652C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A465BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A465E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4664C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A466B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A466DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4676C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A467B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A467D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A467FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4688C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A468B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A468D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A468F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4691C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a46994
	if (!cr6.eq) goto loc_82A46994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A46988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a46998
	if (cr6.eq) goto loc_82A46998;
loc_82A46994:
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_82A46998:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A469B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A469CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A469E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A46A04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// lfs f0,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// lfs f0,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// lfs f0,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// fabs f0,f29
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// fabs f0,f28
	ctx.f0.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a46a88
	if (!cr6.lt) goto loc_82A46A88;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82a46a8c
	if (cr6.lt) goto loc_82A46A8C;
loc_82A46A88:
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_82A46A8C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a46aa8
	if (!cr6.eq) goto loc_82A46AA8;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82a46ab0
	goto loc_82A46AB0;
loc_82A46AA8:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A46AB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A46AB8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A46ABC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a46b38
	if (!cr6.eq) goto loc_82A46B38;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a46ad8
	if (cr6.lt) goto loc_82A46AD8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a46adc
	if (cr6.lt) goto loc_82A46ADC;
loc_82A46AD8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A46ADC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46b38
	if (cr6.eq) goto loc_82A46B38;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a46afc
	if (cr6.lt) goto loc_82A46AFC;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a46b00
	if (cr6.lt) goto loc_82A46B00;
loc_82A46AFC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A46B00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46b20
	if (cr6.eq) goto loc_82A46B20;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a46b24
	goto loc_82A46B24;
loc_82A46B20:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A46B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r18,r8,r18
	ctx.r18.u64 = ctx.r8.u64 & ctx.r18.u64;
loc_82A46B38:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a46b4c
	if (cr6.lt) goto loc_82A46B4C;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a46b50
	if (cr6.lt) goto loc_82A46B50;
loc_82A46B4C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A46B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46bfc
	if (cr6.eq) goto loc_82A46BFC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a46b80
	if (cr6.lt) goto loc_82A46B80;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x82a46b80
	if (!cr6.lt) goto loc_82A46B80;
	// mulhwu r11,r30,r23
	ctx.r11.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 * 11;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// b 0x82a46b84
	goto loc_82A46B84;
loc_82A46B80:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A46B84:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a46bb8
	if (!cr6.eq) goto loc_82A46BB8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a46bfc
	if (cr6.lt) goto loc_82A46BFC;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bgt cr6,0x82a46bfc
	if (cr6.gt) goto loc_82A46BFC;
	// addi r10,r16,3612
	ctx.r10.s64 = ctx.r16.s64 + 3612;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a46bec
	if (!cr6.lt) goto loc_82A46BEC;
	// addi r11,r11,3826
	ctx.r11.s64 = ctx.r11.s64 + 3826;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82a46bf0
	goto loc_82A46BF0;
loc_82A46BB8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82a46bfc
	if (!cr6.eq) goto loc_82A46BFC;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a46bfc
	if (cr6.lt) goto loc_82A46BFC;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(ctx.r30.s32, 21, xer);
	// bgt cr6,0x82a46bfc
	if (cr6.gt) goto loc_82A46BFC;
	// addi r10,r15,3612
	ctx.r10.s64 = ctx.r15.s64 + 3612;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a46bec
	if (!cr6.lt) goto loc_82A46BEC;
	// addi r11,r11,3826
	ctx.r11.s64 = ctx.r11.s64 + 3826;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82a46bf0
	goto loc_82A46BF0;
loc_82A46BEC:
	// lwz r11,15304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15304);
loc_82A46BF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a46bfc
	if (!cr6.eq) goto loc_82A46BFC;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82A46BFC:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46ca8
	if (cr6.eq) goto loc_82A46CA8;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46ca4
	if (cr6.eq) goto loc_82A46CA4;
	// cmplwi cr6,r20,6
	cr6.compare<uint32_t>(ctx.r20.u32, 6, xer);
	// bgt cr6,0x82a46ca8
	if (cr6.gt) goto loc_82A46CA8;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a46ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A46CA8;
	// bdzf 4*cr6+eq,0x82a46c70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A46C70;
	// bdzf 4*cr6+eq,0x82a46ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A46CA8;
	// bdzf 4*cr6+eq,0x82a46c3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A46C3C;
	// bdzf 4*cr6+eq,0x82a46ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A46CA8;
	// bne cr6,0x82a46c70
	if (!cr6.eq) goto loc_82A46C70;
loc_82A46C3C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a46c54
	if (!cr6.eq) goto loc_82A46C54;
	// lfs f0,8144(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bgt cr6,0x82a46c68
	if (cr6.gt) goto loc_82A46C68;
	// b 0x82a46cb8
	goto loc_82A46CB8;
loc_82A46C54:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82a46ca8
	if (!cr6.eq) goto loc_82A46CA8;
	// lfs f0,8144(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a46cb8
	if (!cr6.lt) goto loc_82A46CB8;
loc_82A46C68:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x82a46ca8
	goto loc_82A46CA8;
loc_82A46C70:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a46c88
	if (!cr6.eq) goto loc_82A46C88;
	// lfs f0,8144(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82a46c9c
	if (cr6.lt) goto loc_82A46C9C;
	// b 0x82a46cb8
	goto loc_82A46CB8;
loc_82A46C88:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82a46ca8
	if (!cr6.eq) goto loc_82A46CA8;
	// lfs f0,8144(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82a46cb8
	if (!cr6.gt) goto loc_82A46CB8;
loc_82A46C9C:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x82a46ca8
	goto loc_82A46CA8;
loc_82A46CA4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A46CA8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82a46cb8
	if (cr6.eq) goto loc_82A46CB8;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82a46d24
	if (!cr6.eq) goto loc_82A46D24;
loc_82A46CB8:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a46d24
	if (cr6.eq) goto loc_82A46D24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22860
	ctx.lr = 0x82A46CD0;
	sub_82A22860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a46d24
	if (!cr6.gt) goto loc_82A46D24;
loc_82A46CE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x82A46CEC;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a46d18
	if (!cr6.eq) goto loc_82A46D18;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a46d18
	if (!cr6.eq) goto loc_82A46D18;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x82a46d18
	if (cr6.eq) goto loc_82A46D18;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_82A46D18:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x82a46ce0
	if (cr6.lt) goto loc_82A46CE0;
loc_82A46D24:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,24
	cr6.compare<uint32_t>(ctx.r24.u32, 24, xer);
	// blt cr6,0x82a46418
	if (cr6.lt) goto loc_82A46418;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46d58
	if (cr6.eq) goto loc_82A46D58;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46d5c
	if (cr6.eq) goto loc_82A46D5C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x82a46d5c
	goto loc_82A46D5C;
loc_82A46D58:
	// stw r22,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r22.u32);
loc_82A46D5C:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a46e38
	if (cr6.eq) goto loc_82A46E38;
	// bl 0x83740858
	ctx.lr = 0x82A46D6C;
	sub_83740858(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a46e38
	if (cr6.eq) goto loc_82A46E38;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,-23580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fdivs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82a46e00
	if (cr6.eq) goto loc_82A46E00;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a46e00
	if (cr6.gt) goto loc_82A46E00;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.f7.u32);
loc_82A46E00:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a46e34
	if (!cr6.lt) goto loc_82A46E34;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// beq cr6,0x82a46e38
	if (cr6.eq) goto loc_82A46E38;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// blt cr6,0x82a46e34
	if (cr6.lt) goto loc_82A46E34;
	// cmplwi cr6,r11,60000
	cr6.compare<uint32_t>(ctx.r11.u32, 60000, xer);
	// ble cr6,0x82a46e38
	if (!cr6.gt) goto loc_82A46E38;
loc_82A46E34:
	// stb r22,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r22.u8);
loc_82A46E38:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f30,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// stfs f29,36(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// stb r18,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r18.u8);
	// stfs f28,40(r27)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// stfs f27,44(r27)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
loc_82A46E54:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b8
	ctx.lr = 0x82A46E60;
	__restfpr_25(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A46E64"))) PPC_WEAK_FUNC(sub_82A46E64);
PPC_FUNC_IMPL(__imp__sub_82A46E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46E68"))) PPC_WEAK_FUNC(sub_82A46E68);
PPC_FUNC_IMPL(__imp__sub_82A46E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,60000
	ctx.r8.u64 = ctx.r9.u64 | 60000;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46EB4"))) PPC_WEAK_FUNC(sub_82A46EB4);
PPC_FUNC_IMPL(__imp__sub_82A46EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46EB8"))) PPC_WEAK_FUNC(sub_82A46EB8);
PPC_FUNC_IMPL(__imp__sub_82A46EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r7,r8,47
	ctx.r7.u64 = ctx.r8.u64 | 47;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
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
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r11.u8);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F34"))) PPC_WEAK_FUNC(sub_82A46F34);
PPC_FUNC_IMPL(__imp__sub_82A46F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46F38"))) PPC_WEAK_FUNC(sub_82A46F38);
PPC_FUNC_IMPL(__imp__sub_82A46F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F54"))) PPC_WEAK_FUNC(sub_82A46F54);
PPC_FUNC_IMPL(__imp__sub_82A46F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46F58"))) PPC_WEAK_FUNC(sub_82A46F58);
PPC_FUNC_IMPL(__imp__sub_82A46F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F74"))) PPC_WEAK_FUNC(sub_82A46F74);
PPC_FUNC_IMPL(__imp__sub_82A46F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46F78"))) PPC_WEAK_FUNC(sub_82A46F78);
PPC_FUNC_IMPL(__imp__sub_82A46F78) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,65(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F80"))) PPC_WEAK_FUNC(sub_82A46F80);
PPC_FUNC_IMPL(__imp__sub_82A46F80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,66(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F88"))) PPC_WEAK_FUNC(sub_82A46F88);
PPC_FUNC_IMPL(__imp__sub_82A46F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F90"))) PPC_WEAK_FUNC(sub_82A46F90);
PPC_FUNC_IMPL(__imp__sub_82A46F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46F98"))) PPC_WEAK_FUNC(sub_82A46F98);
PPC_FUNC_IMPL(__imp__sub_82A46F98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46FA0"))) PPC_WEAK_FUNC(sub_82A46FA0);
PPC_FUNC_IMPL(__imp__sub_82A46FA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46FA8"))) PPC_WEAK_FUNC(sub_82A46FA8);
PPC_FUNC_IMPL(__imp__sub_82A46FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f13,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46FCC"))) PPC_WEAK_FUNC(sub_82A46FCC);
PPC_FUNC_IMPL(__imp__sub_82A46FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46FD0"))) PPC_WEAK_FUNC(sub_82A46FD0);
PPC_FUNC_IMPL(__imp__sub_82A46FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f13,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A46FF4"))) PPC_WEAK_FUNC(sub_82A46FF4);
PPC_FUNC_IMPL(__imp__sub_82A46FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A46FF8"))) PPC_WEAK_FUNC(sub_82A46FF8);
PPC_FUNC_IMPL(__imp__sub_82A46FF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47004"))) PPC_WEAK_FUNC(sub_82A47004);
PPC_FUNC_IMPL(__imp__sub_82A47004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47008"))) PPC_WEAK_FUNC(sub_82A47008);
PPC_FUNC_IMPL(__imp__sub_82A47008) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47014"))) PPC_WEAK_FUNC(sub_82A47014);
PPC_FUNC_IMPL(__imp__sub_82A47014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47018"))) PPC_WEAK_FUNC(sub_82A47018);
PPC_FUNC_IMPL(__imp__sub_82A47018) {
	PPC_FUNC_PROLOGUE();
	// stb r4,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47020"))) PPC_WEAK_FUNC(sub_82A47020);
PPC_FUNC_IMPL(__imp__sub_82A47020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47028"))) PPC_WEAK_FUNC(sub_82A47028);
PPC_FUNC_IMPL(__imp__sub_82A47028) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x82a3b8b0
	ctx.lr = 0x82A47094;
	sub_82A3B8B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,1722
	ctx.r8.s64 = 1722;
	// stw r30,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r30.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r30,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r30.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r7.u32);
	// stw r11,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r11.u32);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// stw r6,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r6.u32);
	// stb r30,1352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1352, ctx.r30.u8);
	// stb r30,1353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1353, ctx.r30.u8);
	// stw r5,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r5.u32);
	// stb r30,1360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1360, ctx.r30.u8);
	// stw r30,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r30.u32);
	// stfs f31,1368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f31,1372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stfs f31,1376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// stfs f31,1380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// stfs f31,1384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// stfs f31,1388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A47110"))) PPC_WEAK_FUNC(sub_82A47110);
PPC_FUNC_IMPL(__imp__sub_82A47110) {
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
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// li r5,1272
	ctx.r5.s64 = 1272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A47130;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82A47148"))) PPC_WEAK_FUNC(sub_82A47148);
PPC_FUNC_IMPL(__imp__sub_82A47148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a47168
	if (cr6.eq) goto loc_82A47168;
	// lwz r11,1328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a47168
	if (cr6.eq) goto loc_82A47168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82A47168:
	// lwz r3,1324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47170"))) PPC_WEAK_FUNC(sub_82A47170);
PPC_FUNC_IMPL(__imp__sub_82A47170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47178"))) PPC_WEAK_FUNC(sub_82A47178);
PPC_FUNC_IMPL(__imp__sub_82A47178) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47180"))) PPC_WEAK_FUNC(sub_82A47180);
PPC_FUNC_IMPL(__imp__sub_82A47180) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47188"))) PPC_WEAK_FUNC(sub_82A47188);
PPC_FUNC_IMPL(__imp__sub_82A47188) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47190"))) PPC_WEAK_FUNC(sub_82A47190);
PPC_FUNC_IMPL(__imp__sub_82A47190) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47198"))) PPC_WEAK_FUNC(sub_82A47198);
PPC_FUNC_IMPL(__imp__sub_82A47198) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1352(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471A0"))) PPC_WEAK_FUNC(sub_82A471A0);
PPC_FUNC_IMPL(__imp__sub_82A471A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1353(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1353);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471A8"))) PPC_WEAK_FUNC(sub_82A471A8);
PPC_FUNC_IMPL(__imp__sub_82A471A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471B0"))) PPC_WEAK_FUNC(sub_82A471B0);
PPC_FUNC_IMPL(__imp__sub_82A471B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1360(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471B8"))) PPC_WEAK_FUNC(sub_82A471B8);
PPC_FUNC_IMPL(__imp__sub_82A471B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471C0"))) PPC_WEAK_FUNC(sub_82A471C0);
PPC_FUNC_IMPL(__imp__sub_82A471C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1380
	ctx.r3.s64 = ctx.r3.s64 + 1380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A471C8"))) PPC_WEAK_FUNC(sub_82A471C8);
PPC_FUNC_IMPL(__imp__sub_82A471C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x82a4723c
	if (cr6.gt) goto loc_82A4723C;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29172
	ctx.r12.s64 = ctx.r12.s64 + 29172;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A47240;
	case 1:
		goto loc_82A4723C;
	case 2:
		goto loc_82A4723C;
	case 3:
		goto loc_82A4723C;
	case 4:
		goto loc_82A47240;
	case 5:
		goto loc_82A47240;
	case 6:
		goto loc_82A47240;
	case 7:
		goto loc_82A4723C;
	case 8:
		goto loc_82A4723C;
	case 9:
		goto loc_82A4723C;
	case 10:
		goto loc_82A4723C;
	case 11:
		goto loc_82A4723C;
	case 12:
		goto loc_82A47240;
	case 13:
		goto loc_82A47240;
	case 14:
		goto loc_82A4723C;
	case 15:
		goto loc_82A4723C;
	case 16:
		goto loc_82A4723C;
	case 17:
		goto loc_82A47240;
	default:
		return;
	}
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29244(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29244);
	// lwz r21,29248(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29248);
loc_82A4723C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A47240:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47244"))) PPC_WEAK_FUNC(sub_82A47244);
PPC_FUNC_IMPL(__imp__sub_82A47244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47248"))) PPC_WEAK_FUNC(sub_82A47248);
PPC_FUNC_IMPL(__imp__sub_82A47248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bgt cr6,0x82a472fc
	if (cr6.gt) goto loc_82A472FC;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29300
	ctx.r12.s64 = ctx.r12.s64 + 29300;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A47300;
	case 1:
		goto loc_82A472FC;
	case 2:
		goto loc_82A472FC;
	case 3:
		goto loc_82A472FC;
	case 4:
		goto loc_82A472FC;
	case 5:
		goto loc_82A47300;
	case 6:
		goto loc_82A47300;
	case 7:
		goto loc_82A472FC;
	case 8:
		goto loc_82A47300;
	case 9:
		goto loc_82A47300;
	case 10:
		goto loc_82A472FC;
	case 11:
		goto loc_82A472FC;
	case 12:
		goto loc_82A472FC;
	case 13:
		goto loc_82A472FC;
	case 14:
		goto loc_82A472FC;
	case 15:
		goto loc_82A472FC;
	case 16:
		goto loc_82A472FC;
	case 17:
		goto loc_82A472FC;
	case 18:
		goto loc_82A472FC;
	case 19:
		goto loc_82A472FC;
	case 20:
		goto loc_82A472FC;
	case 21:
		goto loc_82A472FC;
	case 22:
		goto loc_82A472FC;
	case 23:
		goto loc_82A47300;
	case 24:
		goto loc_82A47300;
	case 25:
		goto loc_82A47300;
	case 26:
		goto loc_82A47300;
	case 27:
		goto loc_82A472FC;
	case 28:
		goto loc_82A472FC;
	case 29:
		goto loc_82A472FC;
	case 30:
		goto loc_82A472FC;
	case 31:
		goto loc_82A47300;
	case 32:
		goto loc_82A47300;
	case 33:
		goto loc_82A47300;
	default:
		return;
	}
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29436(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29436);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
	// lwz r21,29440(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29440);
loc_82A472FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A47300:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47304"))) PPC_WEAK_FUNC(sub_82A47304);
PPC_FUNC_IMPL(__imp__sub_82A47304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47308"))) PPC_WEAK_FUNC(sub_82A47308);
PPC_FUNC_IMPL(__imp__sub_82A47308) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47310"))) PPC_WEAK_FUNC(sub_82A47310);
PPC_FUNC_IMPL(__imp__sub_82A47310) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4731C"))) PPC_WEAK_FUNC(sub_82A4731C);
PPC_FUNC_IMPL(__imp__sub_82A4731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47320"))) PPC_WEAK_FUNC(sub_82A47320);
PPC_FUNC_IMPL(__imp__sub_82A47320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4733C"))) PPC_WEAK_FUNC(sub_82A4733C);
PPC_FUNC_IMPL(__imp__sub_82A4733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47340"))) PPC_WEAK_FUNC(sub_82A47340);
PPC_FUNC_IMPL(__imp__sub_82A47340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4735C"))) PPC_WEAK_FUNC(sub_82A4735C);
PPC_FUNC_IMPL(__imp__sub_82A4735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47360"))) PPC_WEAK_FUNC(sub_82A47360);
PPC_FUNC_IMPL(__imp__sub_82A47360) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47368"))) PPC_WEAK_FUNC(sub_82A47368);
PPC_FUNC_IMPL(__imp__sub_82A47368) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1324, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47370"))) PPC_WEAK_FUNC(sub_82A47370);
PPC_FUNC_IMPL(__imp__sub_82A47370) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1328, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47378"))) PPC_WEAK_FUNC(sub_82A47378);
PPC_FUNC_IMPL(__imp__sub_82A47378) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1340, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47380"))) PPC_WEAK_FUNC(sub_82A47380);
PPC_FUNC_IMPL(__imp__sub_82A47380) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47388"))) PPC_WEAK_FUNC(sub_82A47388);
PPC_FUNC_IMPL(__imp__sub_82A47388) {
	PPC_FUNC_PROLOGUE();
	// li r11,1211
	ctx.r11.s64 = 1211;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r11.u32);
	// stw r10,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4739C"))) PPC_WEAK_FUNC(sub_82A4739C);
PPC_FUNC_IMPL(__imp__sub_82A4739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A473A0"))) PPC_WEAK_FUNC(sub_82A473A0);
PPC_FUNC_IMPL(__imp__sub_82A473A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1348, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473A8"))) PPC_WEAK_FUNC(sub_82A473A8);
PPC_FUNC_IMPL(__imp__sub_82A473A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1352, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473B0"))) PPC_WEAK_FUNC(sub_82A473B0);
PPC_FUNC_IMPL(__imp__sub_82A473B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1353(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1353, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473B8"))) PPC_WEAK_FUNC(sub_82A473B8);
PPC_FUNC_IMPL(__imp__sub_82A473B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1356, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473C0"))) PPC_WEAK_FUNC(sub_82A473C0);
PPC_FUNC_IMPL(__imp__sub_82A473C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1360, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473C8"))) PPC_WEAK_FUNC(sub_82A473C8);
PPC_FUNC_IMPL(__imp__sub_82A473C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473D0"))) PPC_WEAK_FUNC(sub_82A473D0);
PPC_FUNC_IMPL(__imp__sub_82A473D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1368, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1372(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1372, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1376(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1376, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A473EC"))) PPC_WEAK_FUNC(sub_82A473EC);
PPC_FUNC_IMPL(__imp__sub_82A473EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A473F0"))) PPC_WEAK_FUNC(sub_82A473F0);
PPC_FUNC_IMPL(__imp__sub_82A473F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1380(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1380, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1384(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1384, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1388(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1388, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4740C"))) PPC_WEAK_FUNC(sub_82A4740C);
PPC_FUNC_IMPL(__imp__sub_82A4740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47410"))) PPC_WEAK_FUNC(sub_82A47410);
PPC_FUNC_IMPL(__imp__sub_82A47410) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47418"))) PPC_WEAK_FUNC(sub_82A47418);
PPC_FUNC_IMPL(__imp__sub_82A47418) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a47448
	if (!cr6.eq) goto loc_82A47448;
	// lfs f13,1384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a47448
	if (!cr6.eq) goto loc_82A47448;
	// lfs f13,1388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82a4744c
	if (cr6.eq) goto loc_82A4744C;
loc_82A47448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4744C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4745C"))) PPC_WEAK_FUNC(sub_82A4745C);
PPC_FUNC_IMPL(__imp__sub_82A4745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47460"))) PPC_WEAK_FUNC(sub_82A47460);
PPC_FUNC_IMPL(__imp__sub_82A47460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x825a5200
	sub_825A5200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A47468"))) PPC_WEAK_FUNC(sub_82A47468);
PPC_FUNC_IMPL(__imp__sub_82A47468) {
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
	// lwz r11,4460(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4460);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a474a0
	if (cr6.eq) goto loc_82A474A0;
loc_82A47488:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A474A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a229e8
	ctx.lr = 0x82A474AC;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a47488
	if (cr6.eq) goto loc_82A47488;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a474cc
	if (!cr6.eq) goto loc_82A474CC;
	// lwz r3,4476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4476);
loc_82A474CC:
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

__attribute__((alias("__imp__sub_82A474E0"))) PPC_WEAK_FUNC(sub_82A474E0);
PPC_FUNC_IMPL(__imp__sub_82A474E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82a4753c
	if (cr6.gt) goto loc_82A4753C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a4753c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4753C;
	// bdzf 4*cr6+eq,0x82a4751c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4751C;
	// bdzf 4*cr6+eq,0x82a4753c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4753C;
	// bdzf 4*cr6+eq,0x82a47524
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A47524;
	// bdzf 4*cr6+eq,0x82a4753c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4753C;
	// bdzf 4*cr6+eq,0x82a4752c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4752C;
	// bdzf 4*cr6+eq,0x82a4753c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A4753C;
	// bne cr6,0x82a47534
	if (!cr6.eq) goto loc_82A47534;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4751C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A47524:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A4752C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A47534:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A4753C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47544"))) PPC_WEAK_FUNC(sub_82A47544);
PPC_FUNC_IMPL(__imp__sub_82A47544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47548"))) PPC_WEAK_FUNC(sub_82A47548);
PPC_FUNC_IMPL(__imp__sub_82A47548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a47578
	if (cr6.eq) goto loc_82A47578;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a47578
	if (cr6.eq) goto loc_82A47578;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a47570
	if (cr6.eq) goto loc_82A47570;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A47570:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_82A47578:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47580"))) PPC_WEAK_FUNC(sub_82A47580);
PPC_FUNC_IMPL(__imp__sub_82A47580) {
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
	// lfs f1,4464(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29110
	ctx.lr = 0x82A4759C;
	sub_82A29110(ctx, base);
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82a4765c
	if (cr6.gt) goto loc_82A4765C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a475e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A475E4;
	// bdzf 4*cr6+eq,0x82a475ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A475EC;
	// bdzf 4*cr6+eq,0x82a47604
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A47604;
	// bdzf 4*cr6+eq,0x82a47610
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A47610;
	// bdzf 4*cr6+eq,0x82a47628
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A47628;
	// bdzf 4*cr6+eq,0x82a47634
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A47634;
	// bne cr6,0x82a4764c
	if (!cr6.eq) goto loc_82A4764C;
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
loc_82A475E4:
	// cmplwi cr6,r3,45
	cr6.compare<uint32_t>(ctx.r3.u32, 45, xer);
	// ble cr6,0x82a4765c
	if (!cr6.gt) goto loc_82A4765C;
loc_82A475EC:
	// li r3,45
	ctx.r3.s64 = 45;
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
loc_82A47604:
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// cmplwi cr6,r3,90
	cr6.compare<uint32_t>(ctx.r3.u32, 90, xer);
	// ble cr6,0x82a4765c
	if (!cr6.gt) goto loc_82A4765C;
loc_82A47610:
	// li r3,90
	ctx.r3.s64 = 90;
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
loc_82A47628:
	// addi r3,r3,90
	ctx.r3.s64 = ctx.r3.s64 + 90;
	// cmplwi cr6,r3,105
	cr6.compare<uint32_t>(ctx.r3.u32, 105, xer);
	// ble cr6,0x82a4765c
	if (!cr6.gt) goto loc_82A4765C;
loc_82A47634:
	// li r3,105
	ctx.r3.s64 = 105;
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
loc_82A4764C:
	// addi r3,r3,105
	ctx.r3.s64 = ctx.r3.s64 + 105;
	// cmplwi cr6,r3,120
	cr6.compare<uint32_t>(ctx.r3.u32, 120, xer);
	// ble cr6,0x82a4765c
	if (!cr6.gt) goto loc_82A4765C;
	// li r3,120
	ctx.r3.s64 = 120;
loc_82A4765C:
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

__attribute__((alias("__imp__sub_82A47670"))) PPC_WEAK_FUNC(sub_82A47670);
PPC_FUNC_IMPL(__imp__sub_82A47670) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lfs f1,4464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x82A47698;
	sub_82A290C8(ctx, base);
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

__attribute__((alias("__imp__sub_82A476AC"))) PPC_WEAK_FUNC(sub_82A476AC);
PPC_FUNC_IMPL(__imp__sub_82A476AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A476B0"))) PPC_WEAK_FUNC(sub_82A476B0);
PPC_FUNC_IMPL(__imp__sub_82A476B0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82a47724
	if (cr6.lt) goto loc_82A47724;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bgt cr6,0x82a47724
	if (cr6.gt) goto loc_82A47724;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x82A476E4;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8024
	ctx.r10.u64 = ctx.r11.u64 | 8024;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a47710
	if (cr6.eq) goto loc_82A47710;
	// li r3,120
	ctx.r3.s64 = 120;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A47710:
	// li r3,90
	ctx.r3.s64 = 90;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A47724:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82a47580
	ctx.lr = 0x82A4772C;
	sub_82A47580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4773C"))) PPC_WEAK_FUNC(sub_82A4773C);
PPC_FUNC_IMPL(__imp__sub_82A4773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47740"))) PPC_WEAK_FUNC(sub_82A47740);
PPC_FUNC_IMPL(__imp__sub_82A47740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a47768
	if (cr6.eq) goto loc_82A47768;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x82a47768
	if (cr6.eq) goto loc_82A47768;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A47768:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47770"))) PPC_WEAK_FUNC(sub_82A47770);
PPC_FUNC_IMPL(__imp__sub_82A47770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47784"))) PPC_WEAK_FUNC(sub_82A47784);
PPC_FUNC_IMPL(__imp__sub_82A47784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47788"))) PPC_WEAK_FUNC(sub_82A47788);
PPC_FUNC_IMPL(__imp__sub_82A47788) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A477E0"))) PPC_WEAK_FUNC(sub_82A477E0);
PPC_FUNC_IMPL(__imp__sub_82A477E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a47800
	if (!cr6.lt) goto loc_82A47800;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
loc_82A47800:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r11,9516
	ctx.r3.s64 = ctx.r11.s64 + 9516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4780C"))) PPC_WEAK_FUNC(sub_82A4780C);
PPC_FUNC_IMPL(__imp__sub_82A4780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47810"))) PPC_WEAK_FUNC(sub_82A47810);
PPC_FUNC_IMPL(__imp__sub_82A47810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47828"))) PPC_WEAK_FUNC(sub_82A47828);
PPC_FUNC_IMPL(__imp__sub_82A47828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4783C"))) PPC_WEAK_FUNC(sub_82A4783C);
PPC_FUNC_IMPL(__imp__sub_82A4783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47840"))) PPC_WEAK_FUNC(sub_82A47840);
PPC_FUNC_IMPL(__imp__sub_82A47840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a47888
	if (cr6.eq) goto loc_82A47888;
loc_82A47864:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a47890
	if (!cr6.eq) goto loc_82A47890;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a47864
	if (!cr6.eq) goto loc_82A47864;
loc_82A47888:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A47890:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47898"))) PPC_WEAK_FUNC(sub_82A47898);
PPC_FUNC_IMPL(__imp__sub_82A47898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a478e0
	if (cr6.eq) goto loc_82A478E0;
loc_82A478BC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a478e8
	if (cr6.eq) goto loc_82A478E8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a478e8
	if (cr6.eq) goto loc_82A478E8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a478bc
	if (!cr6.eq) goto loc_82A478BC;
loc_82A478E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A478E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A478F0"))) PPC_WEAK_FUNC(sub_82A478F0);
PPC_FUNC_IMPL(__imp__sub_82A478F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x82a47930
	if (!cr6.lt) goto loc_82A47930;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82A47930:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47938"))) PPC_WEAK_FUNC(sub_82A47938);
PPC_FUNC_IMPL(__imp__sub_82A47938) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A479E4"))) PPC_WEAK_FUNC(sub_82A479E4);
PPC_FUNC_IMPL(__imp__sub_82A479E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A479E8"))) PPC_WEAK_FUNC(sub_82A479E8);
PPC_FUNC_IMPL(__imp__sub_82A479E8) {
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
	// bl 0x82a47938
	ctx.lr = 0x82A47A00;
	sub_82A47938(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A47A6C"))) PPC_WEAK_FUNC(sub_82A47A6C);
PPC_FUNC_IMPL(__imp__sub_82A47A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47A70"))) PPC_WEAK_FUNC(sub_82A47A70);
PPC_FUNC_IMPL(__imp__sub_82A47A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a47b54
	if (cr6.eq) goto loc_82A47B54;
	// addi r8,r7,12
	ctx.r8.s64 = ctx.r7.s64 + 12;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r30,12
	ctx.r30.s64 = 12;
loc_82A47AAC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a47b2c
	if (!cr6.eq) goto loc_82A47B2C;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r5,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r5.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r5,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r5.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a47b14
	if (cr6.eq) goto loc_82A47B14;
loc_82A47AEC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne cr6,0x82a47aec
	if (!cr6.eq) goto loc_82A47AEC;
loc_82A47B14:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r9,r11,r30
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r30.s32);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// b 0x82a47b34
	goto loc_82A47B34;
loc_82A47B2C:
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
loc_82A47B34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a47aac
	if (!cr6.eq) goto loc_82A47AAC;
loc_82A47B54:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47B60"))) PPC_WEAK_FUNC(sub_82A47B60);
PPC_FUNC_IMPL(__imp__sub_82A47B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a47c44
	if (cr6.eq) goto loc_82A47C44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r31,12
	ctx.r31.s64 = 12;
loc_82A47B94:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a47bb4
	if (cr6.eq) goto loc_82A47BB4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a47bb4
	if (cr6.eq) goto loc_82A47BB4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82a47c24
	goto loc_82A47C24;
loc_82A47BB4:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82a47c10
	if (cr6.eq) goto loc_82A47C10;
loc_82A47BE8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bne cr6,0x82a47be8
	if (!cr6.eq) goto loc_82A47BE8;
loc_82A47C10:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r8,r10,r31
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r31.s32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
loc_82A47C24:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a47b94
	if (!cr6.eq) goto loc_82A47B94;
loc_82A47C44:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47C4C"))) PPC_WEAK_FUNC(sub_82A47C4C);
PPC_FUNC_IMPL(__imp__sub_82A47C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47C50"))) PPC_WEAK_FUNC(sub_82A47C50);
PPC_FUNC_IMPL(__imp__sub_82A47C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A47C58;
	__savegprlr_29(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a47d38
	if (cr6.eq) goto loc_82A47D38;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r29,12
	ctx.r29.s64 = 12;
loc_82A47C90:
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a47d0c
	if (!cr6.eq) goto loc_82A47D0C;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r5,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r5.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r5,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r5.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82a47cf4
	if (cr6.eq) goto loc_82A47CF4;
loc_82A47CCC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne cr6,0x82a47ccc
	if (!cr6.eq) goto loc_82A47CCC;
loc_82A47CF4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r8,r11,r29
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// b 0x82a47d18
	goto loc_82A47D18;
loc_82A47D0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
loc_82A47D18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a47c90
	if (!cr6.eq) goto loc_82A47C90;
loc_82A47D38:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A47D3C"))) PPC_WEAK_FUNC(sub_82A47D3C);
PPC_FUNC_IMPL(__imp__sub_82A47D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A47D40"))) PPC_WEAK_FUNC(sub_82A47D40);
PPC_FUNC_IMPL(__imp__sub_82A47D40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47D48"))) PPC_WEAK_FUNC(sub_82A47D48);
PPC_FUNC_IMPL(__imp__sub_82A47D48) {
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
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47D60"))) PPC_WEAK_FUNC(sub_82A47D60);
PPC_FUNC_IMPL(__imp__sub_82A47D60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47D68"))) PPC_WEAK_FUNC(sub_82A47D68);
PPC_FUNC_IMPL(__imp__sub_82A47D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47D80"))) PPC_WEAK_FUNC(sub_82A47D80);
PPC_FUNC_IMPL(__imp__sub_82A47D80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47D88"))) PPC_WEAK_FUNC(sub_82A47D88);
PPC_FUNC_IMPL(__imp__sub_82A47D88) {
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
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DA0"))) PPC_WEAK_FUNC(sub_82A47DA0);
PPC_FUNC_IMPL(__imp__sub_82A47DA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DA8"))) PPC_WEAK_FUNC(sub_82A47DA8);
PPC_FUNC_IMPL(__imp__sub_82A47DA8) {
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
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DC0"))) PPC_WEAK_FUNC(sub_82A47DC0);
PPC_FUNC_IMPL(__imp__sub_82A47DC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DC8"))) PPC_WEAK_FUNC(sub_82A47DC8);
PPC_FUNC_IMPL(__imp__sub_82A47DC8) {
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
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DE0"))) PPC_WEAK_FUNC(sub_82A47DE0);
PPC_FUNC_IMPL(__imp__sub_82A47DE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47DE8"))) PPC_WEAK_FUNC(sub_82A47DE8);
PPC_FUNC_IMPL(__imp__sub_82A47DE8) {
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
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E00"))) PPC_WEAK_FUNC(sub_82A47E00);
PPC_FUNC_IMPL(__imp__sub_82A47E00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E08"))) PPC_WEAK_FUNC(sub_82A47E08);
PPC_FUNC_IMPL(__imp__sub_82A47E08) {
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
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E20"))) PPC_WEAK_FUNC(sub_82A47E20);
PPC_FUNC_IMPL(__imp__sub_82A47E20) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,7(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E28"))) PPC_WEAK_FUNC(sub_82A47E28);
PPC_FUNC_IMPL(__imp__sub_82A47E28) {
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
	// stb r4,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E40"))) PPC_WEAK_FUNC(sub_82A47E40);
PPC_FUNC_IMPL(__imp__sub_82A47E40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E48"))) PPC_WEAK_FUNC(sub_82A47E48);
PPC_FUNC_IMPL(__imp__sub_82A47E48) {
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
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E60"))) PPC_WEAK_FUNC(sub_82A47E60);
PPC_FUNC_IMPL(__imp__sub_82A47E60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E68"))) PPC_WEAK_FUNC(sub_82A47E68);
PPC_FUNC_IMPL(__imp__sub_82A47E68) {
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
	// stb r4,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E80"))) PPC_WEAK_FUNC(sub_82A47E80);
PPC_FUNC_IMPL(__imp__sub_82A47E80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47E88"))) PPC_WEAK_FUNC(sub_82A47E88);
PPC_FUNC_IMPL(__imp__sub_82A47E88) {
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
	// stb r4,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47EA0"))) PPC_WEAK_FUNC(sub_82A47EA0);
PPC_FUNC_IMPL(__imp__sub_82A47EA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47EA8"))) PPC_WEAK_FUNC(sub_82A47EA8);
PPC_FUNC_IMPL(__imp__sub_82A47EA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,11(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47EB0"))) PPC_WEAK_FUNC(sub_82A47EB0);
PPC_FUNC_IMPL(__imp__sub_82A47EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47ec8
	if (cr6.lt) goto loc_82A47EC8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x82a47ec8
	if (!cr6.lt) goto loc_82A47EC8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82A47EC8:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47ee0
	if (cr6.lt) goto loc_82A47EE0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bge cr6,0x82a47ee0
	if (!cr6.lt) goto loc_82A47EE0;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_82A47EE0:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47ef8
	if (cr6.lt) goto loc_82A47EF8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x82a47ef8
	if (!cr6.lt) goto loc_82A47EF8;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
loc_82A47EF8:
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f10
	if (cr6.lt) goto loc_82A47F10;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82a47f10
	if (!cr6.lt) goto loc_82A47F10;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
loc_82A47F10:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f28
	if (cr6.lt) goto loc_82A47F28;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82a47f28
	if (!cr6.lt) goto loc_82A47F28;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
loc_82A47F28:
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f40
	if (cr6.lt) goto loc_82A47F40;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a47f40
	if (!cr6.lt) goto loc_82A47F40;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
loc_82A47F40:
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f58
	if (cr6.lt) goto loc_82A47F58;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a47f58
	if (!cr6.lt) goto loc_82A47F58;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
loc_82A47F58:
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f70
	if (cr6.lt) goto loc_82A47F70;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a47f70
	if (!cr6.lt) goto loc_82A47F70;
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
loc_82A47F70:
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47f88
	if (cr6.lt) goto loc_82A47F88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a47f88
	if (!cr6.lt) goto loc_82A47F88;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
loc_82A47F88:
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47fa0
	if (cr6.lt) goto loc_82A47FA0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82a47fa0
	if (!cr6.lt) goto loc_82A47FA0;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
loc_82A47FA0:
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a47fc4
	if (cr6.lt) goto loc_82A47FC4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a47fc4
	if (!cr6.lt) goto loc_82A47FC4;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lbz r10,11(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// blr 
	return;
loc_82A47FC4:
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A47FD0"))) PPC_WEAK_FUNC(sub_82A47FD0);
PPC_FUNC_IMPL(__imp__sub_82A47FD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stb r10,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48010"))) PPC_WEAK_FUNC(sub_82A48010);
PPC_FUNC_IMPL(__imp__sub_82A48010) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48040"))) PPC_WEAK_FUNC(sub_82A48040);
PPC_FUNC_IMPL(__imp__sub_82A48040) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48068"))) PPC_WEAK_FUNC(sub_82A48068);
PPC_FUNC_IMPL(__imp__sub_82A48068) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fabs f8,f2
	ctx.f8.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82a48094
	if (cr6.gt) goto loc_82A48094;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bgt cr6,0x82a48094
	if (cr6.gt) goto loc_82A48094;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a480a4
	goto loc_82A480A4;
loc_82A48094:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// li r11,10
	ctx.r11.s64 = 10;
	// bgt cr6,0x82a480a4
	if (cr6.gt) goto loc_82A480A4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82A480A4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f1,f9
	cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bgt cr6,0x82a480bc
	if (cr6.gt) goto loc_82A480BC;
	// xori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 16;
	// b 0x82a480c0
	goto loc_82A480C0;
loc_82A480BC:
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
loc_82A480C0:
	// fcmpu cr6,f2,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f9.f64);
	// xori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 ^ 64;
	// bge cr6,0x82a480d0
	if (!cr6.lt) goto loc_82A480D0;
	// xori r3,r11,128
	ctx.r3.u64 = ctx.r11.u64 ^ 128;
loc_82A480D0:
	// lfs f10,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// blt cr6,0x82a48128
	if (cr6.lt) goto loc_82A48128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// xori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 ^ 256;
	// lfs f12,-6672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6672);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-11408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11408);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a4810c
	if (!cr6.gt) goto loc_82A4810C;
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x82a4810c
	if (!cr6.lt) goto loc_82A4810C;
	// xori r3,r3,8192
	ctx.r3.u64 = ctx.r3.u64 ^ 8192;
loc_82A4810C:
	// lfs f12,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x82a48128
	if (!cr6.gt) goto loc_82A48128;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a48128
	if (!cr6.lt) goto loc_82A48128;
	// xori r3,r3,4096
	ctx.r3.u64 = ctx.r3.u64 ^ 4096;
loc_82A48128:
	// lfs f13,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4818c
	if (!cr6.gt) goto loc_82A4818C;
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x82a4818c
	if (!cr6.lt) goto loc_82A4818C;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82a4816c
	if (!cr6.gt) goto loc_82A4816C;
	// xori r3,r3,2048
	ctx.r3.u64 = ctx.r3.u64 ^ 2048;
	// b 0x82a48170
	goto loc_82A48170;
loc_82A4816C:
	// xori r3,r3,1024
	ctx.r3.u64 = ctx.r3.u64 ^ 1024;
loc_82A48170:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4818c
	if (!cr6.gt) goto loc_82A4818C;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bge cr6,0x82a4818c
	if (!cr6.lt) goto loc_82A4818C;
	// xori r3,r3,512
	ctx.r3.u64 = ctx.r3.u64 ^ 512;
loc_82A4818C:
	// lfs f13,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// xori r3,r3,16384
	ctx.r3.u64 = ctx.r3.u64 ^ 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A481A8"))) PPC_WEAK_FUNC(sub_82A481A8);
PPC_FUNC_IMPL(__imp__sub_82A481A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// fabs f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fabs f11,f2
	ctx.f11.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82a4847c
	if (cr6.gt) goto loc_82A4847C;
	// lis r12,-32091
	ctx.r12.s64 = -2103115776;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32288
	ctx.r12.s64 = ctx.r12.s64 + -32288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82A4837C;
	case 1:
		goto loc_82A48384;
	case 2:
		goto loc_82A483B0;
	case 3:
		goto loc_82A483F8;
	case 4:
		goto loc_82A48420;
	case 5:
		goto loc_82A483D4;
	case 6:
		goto loc_82A48448;
	case 7:
		goto loc_82A48210;
	case 8:
		goto loc_82A48210;
	case 9:
		goto loc_82A48210;
	case 10:
		goto loc_82A48210;
	case 11:
		goto loc_82A48210;
	default:
		return;
	}
	// lwz r21,-31876(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31876);
	// lwz r21,-31868(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31868);
	// lwz r21,-31824(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31824);
	// lwz r21,-31752(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31752);
	// lwz r21,-31712(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31712);
	// lwz r21,-31788(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31788);
	// lwz r21,-31672(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31672);
	// lwz r21,-32240(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32240);
	// lwz r21,-32240(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32240);
	// lwz r21,-32240(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32240);
	// lwz r21,-32240(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32240);
	// lwz r21,-32240(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32240);
loc_82A48210:
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// bgt cr6,0x82a482a4
	if (cr6.gt) goto loc_82A482A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a48254
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A48254;
	// bdzf 4*cr6+eq,0x82a48254
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A48254;
	// bdzf 4*cr6+eq,0x82a48288
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A48288;
	// bne cr6,0x82a48264
	if (!cr6.eq) goto loc_82A48264;
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a482a0
	goto loc_82A482A0;
loc_82A48254:
	// lfs f10,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a482a0
	goto loc_82A482A0;
loc_82A48264:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,-11408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11408);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-6672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6672);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// b 0x82a482a4
	goto loc_82A482A4;
loc_82A48288:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f8,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-11408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11408);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
loc_82A482A0:
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
loc_82A482A4:
	// fcmpu cr6,f4,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// ble cr6,0x82a482c4
	if (!cr6.gt) goto loc_82A482C4;
	// fcmpu cr6,f4,f9
	cr6.compare(ctx.f4.f64, ctx.f9.f64);
	// bge cr6,0x82a482c4
	if (!cr6.lt) goto loc_82A482C4;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a482c4
	if (!cr6.gt) goto loc_82A482C4;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82a48460
	if (cr6.lt) goto loc_82A48460;
loc_82A482C4:
	// fsubs f5,f10,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fcmpu cr6,f4,f6
	cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// bge cr6,0x82a4847c
	if (!cr6.lt) goto loc_82A4847C;
	// fsubs f7,f12,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fcmpu cr6,f11,f7
	cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fadds f8,f13,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fcmpu cr6,f11,f8
	cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x82a4847c
	if (!cr6.lt) goto loc_82A4847C;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82a4833c
	if (cr6.lt) goto loc_82A4833C;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x82a4833c
	if (cr6.gt) goto loc_82A4833C;
	// fcmpu cr6,f4,f10
	cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// bge cr6,0x82a48320
	if (!cr6.lt) goto loc_82A48320;
	// fsubs f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f13,f10,f5
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A48320:
	// fcmpu cr6,f4,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f4.f64, ctx.f9.f64);
	// ble cr6,0x82a48460
	if (!cr6.gt) goto loc_82A48460;
	// fsubs f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A4833C:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82a48360
	if (!cr6.lt) goto loc_82A48360;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a48460
	if (!cr6.lt) goto loc_82A48460;
	// fsubs f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A48360:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82a48460
	if (!cr6.gt) goto loc_82A48460;
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A4837C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a4844c
	goto loc_82A4844C;
loc_82A48384:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fcmpu cr6,f4,f12
	cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fcmpu cr6,f4,f13
	cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x82a48460
	if (!cr6.lt) goto loc_82A48460;
	// fsubs f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A483B0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a48460
	if (!cr6.gt) goto loc_82A48460;
	// fcmpu cr6,f1,f3
	cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bge cr6,0x82a4847c
	if (!cr6.lt) goto loc_82A4847C;
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A483D4:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a48460
	if (!cr6.gt) goto loc_82A48460;
	// fcmpu cr6,f2,f3
	cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bge cr6,0x82a4847c
	if (!cr6.lt) goto loc_82A4847C;
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsubs f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A483F8:
	// fneg f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a48460
	if (!cr6.lt) goto loc_82A48460;
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A48420:
	// fneg f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82a48460
	if (!cr6.lt) goto loc_82A48460;
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A48448:
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
loc_82A4844C:
	// fsubs f12,f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a4847c
	if (!cr6.gt) goto loc_82A4847C;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82a48470
	if (cr6.lt) goto loc_82A48470;
loc_82A48460:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82A48470:
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A4847C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48484"))) PPC_WEAK_FUNC(sub_82A48484);
PPC_FUNC_IMPL(__imp__sub_82A48484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A48488"))) PPC_WEAK_FUNC(sub_82A48488);
PPC_FUNC_IMPL(__imp__sub_82A48488) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A484F0"))) PPC_WEAK_FUNC(sub_82A484F0);
PPC_FUNC_IMPL(__imp__sub_82A484F0) {
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
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a485a8
	if (cr6.gt) goto loc_82A485A8;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82a485a8
	if (cr6.gt) goto loc_82A485A8;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,11768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11768);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x82a48560
	if (!cr6.lt) goto loc_82A48560;
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
loc_82A48560:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x82a48488
	ctx.lr = 0x82A48568;
	sub_82A48488(ctx, base);
	// fcmpu cr6,f10,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bge cr6,0x82a48584
	if (!cr6.lt) goto loc_82A48584;
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
loc_82A48584:
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82a485ac
	if (cr6.lt) goto loc_82A485AC;
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
loc_82A485A8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82A485AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A485BC"))) PPC_WEAK_FUNC(sub_82A485BC);
PPC_FUNC_IMPL(__imp__sub_82A485BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A485C0"))) PPC_WEAK_FUNC(sub_82A485C0);
PPC_FUNC_IMPL(__imp__sub_82A485C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82a485d0
	if (cr6.lt) goto loc_82A485D0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A485D0:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bge cr6,0x82a485e0
	if (!cr6.lt) goto loc_82A485E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A485E0:
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x82a485f0
	if (!cr6.lt) goto loc_82A485F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A485F0:
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48604"))) PPC_WEAK_FUNC(sub_82A48604);
PPC_FUNC_IMPL(__imp__sub_82A48604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A48608"))) PPC_WEAK_FUNC(sub_82A48608);
PPC_FUNC_IMPL(__imp__sub_82A48608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A48610;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82a484f0
	ctx.lr = 0x82A48628;
	sub_82A484F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r3,11
	ctx.r3.s64 = 11;
	// beq cr6,0x82a4877c
	if (cr6.eq) goto loc_82A4877C;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f2
	ctx.f10.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f13,-11340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11340);
	ctx.f13.f64 = double(temp.f32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lfs f12,16100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// bne cr6,0x82a4868c
	if (!cr6.eq) goto loc_82A4868C;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4868C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a486d0
	if (!cr6.eq) goto loc_82A486D0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a48488
	ctx.lr = 0x82A486A4;
	sub_82A48488(ctx, base);
	// fsubs f0,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82a486c4
	if (!cr6.gt) goto loc_82A486C4;
	// fcmpu cr6,f10,f7
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bge cr6,0x82a486c4
	if (!cr6.lt) goto loc_82A486C4;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A486C4:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A486D0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a48728
	if (!cr6.eq) goto loc_82A48728;
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82a486ec
	if (!cr6.gt) goto loc_82A486EC;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A486EC:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bge cr6,0x82a4871c
	if (!cr6.lt) goto loc_82A4871C;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x82a48710
	if (!cr6.gt) goto loc_82A48710;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A48710:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4871C:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A48728:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a4877c
	if (!cr6.eq) goto loc_82A4877C;
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82a48744
	if (!cr6.gt) goto loc_82A48744;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A48744:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11408);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f8,f12
	cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x82a48768
	if (!cr6.lt) goto loc_82A48768;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A48768:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82a4877c
	if (cr6.lt) goto loc_82A4877C;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82A4877C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A48784"))) PPC_WEAK_FUNC(sub_82A48784);
PPC_FUNC_IMPL(__imp__sub_82A48784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A48788"))) PPC_WEAK_FUNC(sub_82A48788);
PPC_FUNC_IMPL(__imp__sub_82A48788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// b 0x82a484f0
	sub_82A484F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A487A4"))) PPC_WEAK_FUNC(sub_82A487A4);
PPC_FUNC_IMPL(__imp__sub_82A487A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A487A8"))) PPC_WEAK_FUNC(sub_82A487A8);
PPC_FUNC_IMPL(__imp__sub_82A487A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// fmuls f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// bge cr6,0x82a487fc
	if (!cr6.lt) goto loc_82A487FC;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a487f4
	if (!cr6.lt) goto loc_82A487F4;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A487F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A487FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48818"))) PPC_WEAK_FUNC(sub_82A48818);
PPC_FUNC_IMPL(__imp__sub_82A48818) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,22396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22396);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,6112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f0,f12
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82a4887c
	if (!cr6.gt) goto loc_82A4887C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82a48874
	if (!cr6.gt) goto loc_82A48874;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A48874:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A4887C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A48884"))) PPC_WEAK_FUNC(sub_82A48884);
PPC_FUNC_IMPL(__imp__sub_82A48884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A48888"))) PPC_WEAK_FUNC(sub_82A48888);
PPC_FUNC_IMPL(__imp__sub_82A48888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A48890;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce76c
	ctx.lr = 0x82A48898;
	__savefpr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A488BC;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f29,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x82a488fc
	if (!cr6.lt) goto loc_82A488FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7b8
	ctx.lr = 0x82A488F8;
	__restfpr_25(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A488FC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A48910;
	sub_82A0C710(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lbz r22,252(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// li r28,0
	ctx.r28.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A48924:
	// stfs f29,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f29,8(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f29,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a48924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A48924;
	// lis r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r23,r24,11
	ctx.r23.s64 = ctx.r24.s64 * 11;
	// ori r27,r27,33216
	ctx.r27.u64 = ctx.r27.u64 | 33216;
	// li r26,15260
	ctx.r26.s64 = 15260;
loc_82A48948:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// add r31,r23,r29
	ctx.r31.u64 = ctx.r23.u64 + ctx.r29.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A48958;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x82a4896c
	if (!cr6.lt) goto loc_82A4896C;
	// lwzx r30,r11,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// b 0x82a48970
	goto loc_82A48970;
loc_82A4896C:
	// lwz r30,15260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A48970:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A4897C;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwzx r9,r3,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt cr6,0x82a4899c
	if (cr6.lt) goto loc_82A4899C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a489a0
	if (cr6.lt) goto loc_82A489A0;
loc_82A4899C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A489A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a489c0
	if (cr6.eq) goto loc_82A489C0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a489c4
	goto loc_82A489C4;
loc_82A489C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A489C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a48a5c
	if (cr6.eq) goto loc_82A48A5C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a48a5c
	if (cr6.eq) goto loc_82A48A5C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a48a5c
	if (!cr6.eq) goto loc_82A48A5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A489EC;
	sub_82A0C788(ctx, base);
	// extsb r10,r22
	ctx.r10.s64 = ctx.r22.s8;
	// lwz r9,1280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,1284(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,1288(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bgt cr6,0x82a48a5c
	if (cr6.gt) goto loc_82A48A5C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r28,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FE;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r28,r8,24
	ctx.r28.u64 = ctx.r8.u32 & 0xFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A48A5C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpwi cr6,r26,15304
	cr6.compare<int32_t>(ctx.r26.s32, 15304, xer);
	// blt cr6,0x82a48948
	if (cr6.lt) goto loc_82A48948;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,-32752
	ctx.r6.s64 = ctx.r11.s64 + -32752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d88b0
	ctx.lr = 0x82A48A8C;
	sub_831D88B0(ctx, base);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// ble cr6,0x82a48a98
	if (!cr6.gt) goto loc_82A48A98;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82A48A98:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r26,r28,24
	ctx.r26.u64 = ctx.r28.u32 & 0xFF;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,-32704
	ctx.r6.s64 = ctx.r11.s64 + -32704;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d88b0
	ctx.lr = 0x82A48AB4;
	sub_831D88B0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// lfs f28,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82a48c70
	if (cr6.eq) goto loc_82A48C70;
	// addi r27,r26,-1
	ctx.r27.s64 = ctx.r26.s64 + -1;
loc_82A48AD8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82a48af0
	if (!cr6.eq) goto loc_82A48AF0;
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f26
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// b 0x82a48b14
	goto loc_82A48B14;
loc_82A48AF0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f30,f12,f28
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
loc_82A48B14:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x82a48b28
	if (!cr6.eq) goto loc_82A48B28;
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a48b4c
	goto loc_82A48B4C;
loc_82A48B28:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f31,f12,f28
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
loc_82A48B4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15260
	ctx.r28.s64 = 15260;
loc_82A48B54:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r31,r23,r30
	ctx.r31.u64 = ctx.r23.u64 + ctx.r30.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A48B60;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a48b74
	if (!cr6.lt) goto loc_82A48B74;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// b 0x82a48b78
	goto loc_82A48B78;
loc_82A48B74:
	// lwz r9,15260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A48B78:
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// blt cr6,0x82a48b94
	if (cr6.lt) goto loc_82A48B94;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a48b98
	if (cr6.lt) goto loc_82A48B98;
loc_82A48B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A48B98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a48bb8
	if (cr6.eq) goto loc_82A48BB8;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a48bbc
	goto loc_82A48BBC;
loc_82A48BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A48BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a48c54
	if (cr6.eq) goto loc_82A48C54;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a48c54
	if (cr6.eq) goto loc_82A48C54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A48BD8;
	sub_82A0C788(ctx, base);
	// extsb r10,r22
	ctx.r10.s64 = ctx.r22.s8;
	// lwz r9,1280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,1284(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1288(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bgt cr6,0x82a48c50
	if (cr6.gt) goto loc_82A48C50;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82a48c50
	if (!cr6.lt) goto loc_82A48C50;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a48c50
	if (!cr6.lt) goto loc_82A48C50;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a48c50
	if (!cr6.gt) goto loc_82A48C50;
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82A48C50:
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
loc_82A48C54:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,15304
	cr6.compare<int32_t>(ctx.r28.s32, 15304, xer);
	// blt cr6,0x82a48b54
	if (cr6.lt) goto loc_82A48B54;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82a48ad8
	if (cr6.lt) goto loc_82A48AD8;
loc_82A48C70:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a48d28
	if (cr6.eq) goto loc_82A48D28;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fabs f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f27.u64 & ~0x8000000000000000;
loc_82A48C84:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a48d10
	if (!cr6.gt) goto loc_82A48D10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a48cb8
	if (!cr6.eq) goto loc_82A48CB8;
	// lwz r10,6112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// b 0x82a48cd0
	goto loc_82A48CD0;
loc_82A48CB8:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
loc_82A48CD0:
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a48ce8
	if (!cr6.eq) goto loc_82A48CE8;
	// lwz r10,6112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a48d00
	goto loc_82A48D00;
loc_82A48CE8:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
loc_82A48D00:
	// fcmpu cr6,f13,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bgt cr6,0x82a48d10
	if (cr6.gt) goto loc_82A48D10;
	// fcmpu cr6,f25,f0
	cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// ble cr6,0x82a48d24
	if (!cr6.gt) goto loc_82A48D24;
loc_82A48D10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x82a48c84
	if (cr6.lt) goto loc_82A48C84;
	// b 0x82a48d28
	goto loc_82A48D28;
loc_82A48D24:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82A48D28:
	// subfic r11,r26,0
	xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 & ctx.r21.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7b8
	ctx.lr = 0x82A48D40;
	__restfpr_25(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A48D44"))) PPC_WEAK_FUNC(sub_82A48D44);
PPC_FUNC_IMPL(__imp__sub_82A48D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A48D48"))) PPC_WEAK_FUNC(sub_82A48D48);
PPC_FUNC_IMPL(__imp__sub_82A48D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A48D50;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lbz r7,252(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82a48dc8
	if (!cr6.lt) goto loc_82A48DC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-136(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A48DC8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// lwzx r4,r27,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r25,252(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 252);
loc_82A48DF0:
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
	// bdnz 0x82a48df0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A48DF0;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r26,r11,11
	ctx.r26.s64 = ctx.r11.s64 * 11;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// ori r5,r5,33216
	ctx.r5.u64 = ctx.r5.u64 | 33216;
	// subfic r30,r10,15260
	xer.ca = ctx.r10.u32 <= 15260;
	ctx.r30.s64 = 15260 - ctx.r10.s64;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r29,255
	ctx.r29.s64 = 255;
loc_82A48E24:
	// add r8,r26,r6
	ctx.r8.u64 = ctx.r26.u64 + ctx.r6.u64;
	// addi r11,r4,3612
	ctx.r11.s64 = ctx.r4.s64 + 3612;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// bge cr6,0x82a48e40
	if (!cr6.lt) goto loc_82A48E40;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82a48e44
	goto loc_82A48E44;
loc_82A48E40:
	// lwz r9,15260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A48E44:
	// lwzx r10,r5,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// blt cr6,0x82a48e60
	if (cr6.lt) goto loc_82A48E60;
	// cmpwi cr6,r8,22
	cr6.compare<int32_t>(ctx.r8.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a48e64
	if (cr6.lt) goto loc_82A48E64;
loc_82A48E60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A48E64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a48e84
	if (cr6.eq) goto loc_82A48E84;
	// add r11,r8,r23
	ctx.r11.u64 = ctx.r8.u64 + ctx.r23.u64;
	// lbz r11,5768(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r20,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// subfe r11,r20,r11
	temp.u8 = (~ctx.r20.u32 + ctx.r11.u32 < ~ctx.r20.u32) | (~ctx.r20.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r20.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a48e88
	goto loc_82A48E88;
loc_82A48E84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A48E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a48f28
	if (cr6.eq) goto loc_82A48F28;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a48f28
	if (cr6.eq) goto loc_82A48F28;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a48f28
	if (!cr6.eq) goto loc_82A48F28;
	// extsb r9,r25
	ctx.r9.s64 = ctx.r25.s8;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x82a48f28
	if (cr6.gt) goto loc_82A48F28;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r20,r31,2,22,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r1,256
	ctx.r19.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// stwx r8,r20,r19
	PPC_STORE_U32(ctx.r20.u32 + ctx.r19.u32, ctx.r8.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A48F28:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82a48e24
	if (!cr0.eq) goto loc_82A48E24;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,-32752
	ctx.r6.s64 = ctx.r11.s64 + -32752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d88b0
	ctx.lr = 0x82A48F58;
	sub_831D88B0(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// ble cr6,0x82a48f64
	if (!cr6.gt) goto loc_82A48F64;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82A48F64:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,-32704
	ctx.r6.s64 = ctx.r11.s64 + -32704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d88b0
	ctx.lr = 0x82A48F80;
	sub_831D88B0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lfs f10,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x82a49124
	if (cr6.eq) goto loc_82A49124;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// addi r4,r11,3612
	ctx.r4.s64 = ctx.r11.s64 + 3612;
loc_82A48FA8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82a48fbc
	if (!cr6.eq) goto loc_82A48FBC;
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// b 0x82a48fe0
	goto loc_82A48FE0;
loc_82A48FBC:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
loc_82A48FE0:
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bne cr6,0x82a48ff0
	if (!cr6.eq) goto loc_82A48FF0;
	// lfs f12,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a49014
	goto loc_82A49014;
loc_82A48FF0:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
loc_82A49014:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,15260
	ctx.r6.s64 = 15260;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82A49020:
	// add r10,r26,r8
	ctx.r10.u64 = ctx.r26.u64 + ctx.r8.u64;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// bge cr6,0x82a49034
	if (!cr6.lt) goto loc_82A49034;
	// lwzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// b 0x82a49038
	goto loc_82A49038;
loc_82A49034:
	// lwz r9,15260(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15260);
loc_82A49038:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4904c
	if (cr6.lt) goto loc_82A4904C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49050
	if (cr6.lt) goto loc_82A49050;
loc_82A4904C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49070
	if (cr6.eq) goto loc_82A49070;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lbz r11,5768(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r30,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// subfe r11,r30,r11
	temp.u8 = (~ctx.r30.u32 + ctx.r11.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r30.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a49074
	goto loc_82A49074;
loc_82A49070:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49108
	if (cr6.eq) goto loc_82A49108;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a49108
	if (cr6.eq) goto loc_82A49108;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r25
	ctx.r9.s64 = ctx.r25.s8;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f7,f31
	cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bgt cr6,0x82a49108
	if (cr6.gt) goto loc_82A49108;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82a49108
	if (!cr6.lt) goto loc_82A49108;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a49108
	if (!cr6.lt) goto loc_82A49108;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x82a49108
	if (!cr6.gt) goto loc_82A49108;
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82A49108:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82a49020
	if (!cr0.eq) goto loc_82A49020;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// blt cr6,0x82a48fa8
	if (cr6.lt) goto loc_82A48FA8;
loc_82A49124:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a491d4
	if (cr6.eq) goto loc_82A491D4;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fabs f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f30.u64 & ~0x8000000000000000;
loc_82A49138:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a491bc
	if (!cr6.gt) goto loc_82A491BC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a49168
	if (!cr6.eq) goto loc_82A49168;
	// lfs f0,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// b 0x82a49180
	goto loc_82A49180;
loc_82A49168:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
loc_82A49180:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a49194
	if (!cr6.eq) goto loc_82A49194;
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a491ac
	goto loc_82A491AC;
loc_82A49194:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
loc_82A491AC:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bgt cr6,0x82a491bc
	if (cr6.gt) goto loc_82A491BC;
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82a491d0
	if (!cr6.gt) goto loc_82A491D0;
loc_82A491BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x82a49138
	if (cr6.lt) goto loc_82A49138;
	// b 0x82a491d4
	goto loc_82A491D4;
loc_82A491D0:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82A491D4:
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 & ctx.r21.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A491F4"))) PPC_WEAK_FUNC(sub_82A491F4);
PPC_FUNC_IMPL(__imp__sub_82A491F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A491F8"))) PPC_WEAK_FUNC(sub_82A491F8);
PPC_FUNC_IMPL(__imp__sub_82A491F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// b 0x82a48608
	sub_82A48608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A49214"))) PPC_WEAK_FUNC(sub_82A49214);
PPC_FUNC_IMPL(__imp__sub_82A49214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49218"))) PPC_WEAK_FUNC(sub_82A49218);
PPC_FUNC_IMPL(__imp__sub_82A49218) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4923C"))) PPC_WEAK_FUNC(sub_82A4923C);
PPC_FUNC_IMPL(__imp__sub_82A4923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49240"))) PPC_WEAK_FUNC(sub_82A49240);
PPC_FUNC_IMPL(__imp__sub_82A49240) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49250"))) PPC_WEAK_FUNC(sub_82A49250);
PPC_FUNC_IMPL(__imp__sub_82A49250) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49260"))) PPC_WEAK_FUNC(sub_82A49260);
PPC_FUNC_IMPL(__imp__sub_82A49260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49288"))) PPC_WEAK_FUNC(sub_82A49288);
PPC_FUNC_IMPL(__imp__sub_82A49288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A492B0"))) PPC_WEAK_FUNC(sub_82A492B0);
PPC_FUNC_IMPL(__imp__sub_82A492B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A492C4"))) PPC_WEAK_FUNC(sub_82A492C4);
PPC_FUNC_IMPL(__imp__sub_82A492C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A492C8"))) PPC_WEAK_FUNC(sub_82A492C8);
PPC_FUNC_IMPL(__imp__sub_82A492C8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A492DC"))) PPC_WEAK_FUNC(sub_82A492DC);
PPC_FUNC_IMPL(__imp__sub_82A492DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A492E0"))) PPC_WEAK_FUNC(sub_82A492E0);
PPC_FUNC_IMPL(__imp__sub_82A492E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A492F4"))) PPC_WEAK_FUNC(sub_82A492F4);
PPC_FUNC_IMPL(__imp__sub_82A492F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A492F8"))) PPC_WEAK_FUNC(sub_82A492F8);
PPC_FUNC_IMPL(__imp__sub_82A492F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,972(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,976(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,980(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49314"))) PPC_WEAK_FUNC(sub_82A49314);
PPC_FUNC_IMPL(__imp__sub_82A49314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49318"))) PPC_WEAK_FUNC(sub_82A49318);
PPC_FUNC_IMPL(__imp__sub_82A49318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,984(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,988(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,992(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 992, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49334"))) PPC_WEAK_FUNC(sub_82A49334);
PPC_FUNC_IMPL(__imp__sub_82A49334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49338"))) PPC_WEAK_FUNC(sub_82A49338);
PPC_FUNC_IMPL(__imp__sub_82A49338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a49364
	if (cr6.eq) goto loc_82A49364;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,2988
	ctx.r11.s64 = ctx.r3.s64 + 2988;
loc_82A49348:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a4936c
	if (cr6.eq) goto loc_82A4936C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x82a49348
	if (cr6.lt) goto loc_82A49348;
loc_82A49364:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4936C:
	// mulli r11,r10,996
	ctx.r11.s64 = ctx.r10.s64 * 996;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49378"))) PPC_WEAK_FUNC(sub_82A49378);
PPC_FUNC_IMPL(__imp__sub_82A49378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-88
	ctx.r9.s64 = ctx.r9.s64 + -88;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82A493A8:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stwu r7,88(r9)
	ea = 88 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stwu r10,88(r11)
	ea = 88 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a493a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A493A8;
	// stfs f0,972(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// stfs f0,976(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// stfs f0,980(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// stfs f0,984(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// stfs f0,988(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// stfs f0,992(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 992, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A49424"))) PPC_WEAK_FUNC(sub_82A49424);
PPC_FUNC_IMPL(__imp__sub_82A49424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49428"))) PPC_WEAK_FUNC(sub_82A49428);
PPC_FUNC_IMPL(__imp__sub_82A49428) {
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
	// addi r3,r3,1992
	ctx.r3.s64 = ctx.r3.s64 + 1992;
	// bl 0x825a4a48
	ctx.lr = 0x82A49444;
	sub_825A4A48(ctx, base);
	// lwz r3,3000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r3,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r3.u32);
	// bne cr6,0x82a49464
	if (!cr6.eq) goto loc_82A49464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
loc_82A49464:
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

__attribute__((alias("__imp__sub_82A49478"))) PPC_WEAK_FUNC(sub_82A49478);
PPC_FUNC_IMPL(__imp__sub_82A49478) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82A4948C:
	// bl 0x82a49378
	ctx.lr = 0x82A49490;
	sub_82A49378(ctx, base);
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,996
	ctx.r3.s64 = ctx.r3.s64 + 996;
	// bge 0x82a4948c
	if (!cr0.lt) goto loc_82A4948C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,3004(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3004, ctx.r11.u32);
	// addi r10,r5,2988
	ctx.r10.s64 = ctx.r5.s64 + 2988;
	// stw r9,3000(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3000, ctx.r9.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,2988(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2988, ctx.r11.u32);
	// stw r11,2992(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2992, ctx.r11.u32);
	// stw r11,2996(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2996, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A494D0"))) PPC_WEAK_FUNC(sub_82A494D0);
PPC_FUNC_IMPL(__imp__sub_82A494D0) {
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
	// lwz r11,3004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3004);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 * 996;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x825a4a48
	ctx.lr = 0x82A494F4;
	sub_825A4A48(ctx, base);
	// lwz r11,3004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3004);
	// lwz r8,3000(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// addi r10,r11,747
	ctx.r10.s64 = ctx.r11.s64 + 747;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r3,3000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// lwz r11,3004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// blt cr6,0x82a49528
	if (cr6.lt) goto loc_82A49528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
loc_82A49528:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82a49540
	if (!cr6.eq) goto loc_82A49540;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
loc_82A49540:
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

__attribute__((alias("__imp__sub_82A49554"))) PPC_WEAK_FUNC(sub_82A49554);
PPC_FUNC_IMPL(__imp__sub_82A49554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49558"))) PPC_WEAK_FUNC(sub_82A49558);
PPC_FUNC_IMPL(__imp__sub_82A49558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A49560;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x82a497b0
	if (!cr6.lt) goto loc_82A497B0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82a49588
	if (cr6.lt) goto loc_82A49588;
	// cmpwi cr6,r7,22
	cr6.compare<int32_t>(ctx.r7.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4958c
	if (cr6.lt) goto loc_82A4958C;
loc_82A49588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4958C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a497b0
	if (cr6.eq) goto loc_82A497B0;
	// addi r11,r6,76
	ctx.r11.s64 = ctx.r6.s64 + 76;
	// cmplwi cr6,r26,22
	cr6.compare<uint32_t>(ctx.r26.u32, 22, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bge cr6,0x82a495bc
	if (!cr6.lt) goto loc_82A495BC;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x82a495c0
	goto loc_82A495C0;
loc_82A495BC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A495C0:
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f6,-23864(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23864);
	ctx.f6.f64 = double(temp.f32);
	// beq cr6,0x82a495f0
	if (cr6.eq) goto loc_82A495F0;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82a495fc
	goto loc_82A495FC;
loc_82A495F0:
	// lfs f11,1280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,1284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1284);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,1288(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1288);
	ctx.f8.f64 = double(temp.f32);
loc_82A495FC:
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// lfs f13,-11392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11392);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,-7352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7352);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f10,f0,f9,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82a49650
	if (cr6.lt) goto loc_82A49650;
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a4964c
	if (!cr6.gt) goto loc_82A4964C;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82A4964C:
	// fadds f6,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
loc_82A49650:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f12
	cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x82a49674
	if (!cr6.gt) goto loc_82A49674;
	// fmsubs f10,f12,f0,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
loc_82A49674:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fabs f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82a496b0
	if (!cr6.gt) goto loc_82A496B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f8,f12
	cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x82a496ac
	if (!cr6.lt) goto loc_82A496AC;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x82a496b0
	goto loc_82A496B0;
loc_82A496AC:
	// fsubs f8,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A496B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mulli r29,r6,11
	ctx.r29.s64 = ctx.r6.s64 * 11;
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82A496D4:
	// add. r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a496e8
	if (cr0.lt) goto loc_82A496E8;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a496ec
	if (cr6.lt) goto loc_82A496EC;
loc_82A496E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A496EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49798
	if (cr6.eq) goto loc_82A49798;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4970c
	if (cr6.lt) goto loc_82A4970C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49710
	if (cr6.lt) goto loc_82A49710;
loc_82A4970C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49710:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49730
	if (cr6.eq) goto loc_82A49730;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r9,5768(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a49734
	goto loc_82A49734;
loc_82A49730:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49734:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49798
	if (cr6.eq) goto loc_82A49798;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x82a49794
	if (cr6.eq) goto loc_82A49794;
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bge cr6,0x82a49760
	if (!cr6.lt) goto loc_82A49760;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x82a49764
	goto loc_82A49764;
loc_82A49760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49764:
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,1288(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x826a8618
	ctx.lr = 0x82A49788;
	sub_826A8618(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a49798
	if (cr6.eq) goto loc_82A49798;
loc_82A49794:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82A49798:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a496d4
	if (cr6.lt) goto loc_82A496D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A497B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A497BC"))) PPC_WEAK_FUNC(sub_82A497BC);
PPC_FUNC_IMPL(__imp__sub_82A497BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A497C0"))) PPC_WEAK_FUNC(sub_82A497C0);
PPC_FUNC_IMPL(__imp__sub_82A497C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A497C8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce768
	ctx.lr = 0x82A497D0;
	__savefpr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x82a49cf0
	if (!cr6.lt) goto loc_82A49CF0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82a49800
	if (cr6.lt) goto loc_82A49800;
	// cmpwi cr6,r7,22
	cr6.compare<int32_t>(ctx.r7.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49804
	if (cr6.lt) goto loc_82A49804;
loc_82A49800:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49804:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49cf0
	if (cr6.eq) goto loc_82A49CF0;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// bge cr6,0x82a49834
	if (!cr6.lt) goto loc_82A49834;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// b 0x82a49838
	goto loc_82A49838;
loc_82A49834:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A49838:
	// addi r11,r6,76
	ctx.r11.s64 = ctx.r6.s64 + 76;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// bge cr6,0x82a4985c
	if (!cr6.lt) goto loc_82A4985C;
	// addi r10,r28,76
	ctx.r10.s64 = ctx.r28.s64 + 76;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r9,r24
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// b 0x82a49860
	goto loc_82A49860;
loc_82A4985C:
	// li r22,0
	ctx.r22.s64 = 0;
loc_82A49860:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,8(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// lbz r31,252(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lfs f27,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x82a498a0
	if (cr6.eq) goto loc_82A498A0;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// lfs f25,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82a498ec
	if (!cr6.eq) goto loc_82A498EC;
	// lfs f31,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a498f4
	goto loc_82A498F4;
loc_82A498A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f25,1280(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	ctx.f25.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f26,1288(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	ctx.f26.f64 = double(temp.f32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825ceaf8
	ctx.lr = 0x82A498B8;
	sub_825CEAF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a40840
	ctx.lr = 0x82A498C8;
	sub_82A40840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A498D0;
	sub_825CA600(ctx, base);
	// fsqrts f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f1.f64)));
loc_82A498D4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82a49920
	if (!cr6.eq) goto loc_82A49920;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a49928
	goto loc_82A49928;
loc_82A498EC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A498F4:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x825c28d8
	ctx.lr = 0x82A49908;
	sub_825C28D8(ctx, base);
	// fsubs f0,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f26,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// b 0x82a498d4
	goto loc_82A498D4;
loc_82A49920:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
loc_82A49928:
	// fsubs f10,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// lfs f13,-11324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f11,f0
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,25584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25584);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8304);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fnmsubs f29,f8,f12,f0
	ctx.f29.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// beq cr6,0x82a4996c
	if (cr6.eq) goto loc_82A4996C;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// b 0x82a49984
	goto loc_82A49984;
loc_82A4996C:
	// fabs f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f26.u64 & ~0x8000000000000000;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_82A49984:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,1272(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1272);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8261a830
	ctx.lr = 0x82A49990;
	sub_8261A830(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a499b0
	if (cr6.lt) goto loc_82A499B0;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82a499dc
	goto loc_82A499DC;
loc_82A499B0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82a499c4
	if (!cr6.gt) goto loc_82A499C4;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_82A499C4:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_82A499DC:
	// fadds f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,25668
	ctx.r25.s64 = ctx.r11.s64 + 25668;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,25668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25668);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f11,f27
	cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// bge cr6,0x82a49a10
	if (!cr6.lt) goto loc_82A49A10;
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// b 0x82a49a1c
	goto loc_82A49A1C;
loc_82A49A10:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x82a49a20
	if (cr6.lt) goto loc_82A49A20;
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
loc_82A49A1C:
	// stfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A49A20:
	// fadds f12,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bge cr6,0x82a49a38
	if (!cr6.lt) goto loc_82A49A38;
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// b 0x82a49a44
	goto loc_82A49A44;
loc_82A49A38:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x82a49a48
	if (cr6.lt) goto loc_82A49A48;
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
loc_82A49A44:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A49A48:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82a49a58
	if (!cr6.eq) goto loc_82A49A58;
	// fcmpu cr6,f26,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// bgt cr6,0x82a49a68
	if (cr6.gt) goto loc_82A49A68;
loc_82A49A58:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82a49ab0
	if (!cr6.eq) goto loc_82A49AB0;
	// fcmpu cr6,f26,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// bge cr6,0x82a49ab0
	if (!cr6.lt) goto loc_82A49AB0;
loc_82A49A68:
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82a49a80
	if (!cr6.lt) goto loc_82A49A80;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x82a49a8c
	goto loc_82A49A8C;
loc_82A49A80:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a49a8c
	if (cr6.lt) goto loc_82A49A8C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_82A49A8C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a49a9c
	if (cr6.gt) goto loc_82A49A9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49A9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49af4
	if (cr6.eq) goto loc_82A49AF4;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82a49af4
	goto loc_82A49AF4;
loc_82A49AB0:
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fnmsubs f0,f0,f13,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f30.f64)));
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82a49ac8
	if (!cr6.lt) goto loc_82A49AC8;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x82a49ad4
	goto loc_82A49AD4;
loc_82A49AC8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a49ad4
	if (cr6.lt) goto loc_82A49AD4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_82A49AD4:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49ae4
	if (cr6.lt) goto loc_82A49AE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49AE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49af4
	if (cr6.eq) goto loc_82A49AF4;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A49AF4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A49B04;
	sub_8263EEB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mulli r26,r28,11
	ctx.r26.s64 = ctx.r28.s64 * 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15304
	ctx.r29.s64 = 15304;
	// ori r28,r11,12384
	ctx.r28.u64 = ctx.r11.u64 | 12384;
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
loc_82A49B1C:
	// add. r31,r26,r30
	ctx.r31.u64 = ctx.r26.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a49b30
	if (cr0.lt) goto loc_82A49B30;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49b34
	if (cr6.lt) goto loc_82A49B34;
loc_82A49B30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49B34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ccc
	if (cr6.eq) goto loc_82A49CCC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a49b54
	if (cr6.lt) goto loc_82A49B54;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49b58
	if (cr6.lt) goto loc_82A49B58;
loc_82A49B54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49B58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49b78
	if (cr6.eq) goto loc_82A49B78;
	// add r11,r31,r23
	ctx.r11.u64 = ctx.r31.u64 + ctx.r23.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a49b7c
	goto loc_82A49B7C;
loc_82A49B78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49B7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ccc
	if (cr6.eq) goto loc_82A49CCC;
	// addi r11,r22,3612
	ctx.r11.s64 = ctx.r22.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a49b9c
	if (!cr6.lt) goto loc_82A49B9C;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82a49ba0
	goto loc_82A49BA0;
loc_82A49B9C:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A49BA0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a49ccc
	if (cr6.eq) goto loc_82A49CCC;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82a49c1c
	if (cr6.eq) goto loc_82A49C1C;
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// bge cr6,0x82a49bc8
	if (!cr6.lt) goto loc_82A49BC8;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// b 0x82a49bcc
	goto loc_82A49BCC;
loc_82A49BC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49BCC:
	// lfs f3,1280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fsubs f0,f25,f3
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f3.f64));
	// lfs f4,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f26,f4
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f4.f64));
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f30,f11
	ctx.f30.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x825c28d8
	ctx.lr = 0x82A49BF4;
	sub_825C28D8(ctx, base);
	// lfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x82a49c0c
	if (!cr6.lt) goto loc_82A49C0C;
	// fadds f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// b 0x82a49c70
	goto loc_82A49C70;
loc_82A49C0C:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82a49c74
	if (cr6.lt) goto loc_82A49C74;
	// fsubs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// b 0x82a49c70
	goto loc_82A49C70;
loc_82A49C1C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825cb9b0
	ctx.lr = 0x82A49C2C;
	sub_825CB9B0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// add r11,r21,r28
	ctx.r11.u64 = ctx.r21.u64 + ctx.r28.u64;
	// bge cr6,0x82a49c44
	if (!cr6.lt) goto loc_82A49C44;
	// mulli r10,r27,88
	ctx.r10.s64 = ctx.r27.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A49C44:
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82a49c64
	if (!cr6.lt) goto loc_82A49C64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x82a49c70
	goto loc_82A49C70;
loc_82A49C64:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a49c74
	if (cr6.lt) goto loc_82A49C74;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_82A49C70:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A49C74:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A49C84;
	sub_8263EEB0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a49c98
	if (cr6.gt) goto loc_82A49C98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49C98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ccc
	if (cr6.eq) goto loc_82A49CCC;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49cb4
	if (cr6.lt) goto loc_82A49CB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ccc
	if (cr6.eq) goto loc_82A49CCC;
	// fcmpu cr6,f30,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f24.f64);
	// bge cr6,0x82a49ccc
	if (!cr6.lt) goto loc_82A49CCC;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82A49CCC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r29,15348
	cr6.compare<int32_t>(ctx.r29.s32, 15348, xer);
	// blt cr6,0x82a49b1c
	if (cr6.lt) goto loc_82A49B1C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7b4
	ctx.lr = 0x82A49CEC;
	__restfpr_24(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A49CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7b4
	ctx.lr = 0x82A49D00;
	__restfpr_24(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A49D04"))) PPC_WEAK_FUNC(sub_82A49D04);
PPC_FUNC_IMPL(__imp__sub_82A49D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A49D08"))) PPC_WEAK_FUNC(sub_82A49D08);
PPC_FUNC_IMPL(__imp__sub_82A49D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A49D10;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce768
	ctx.lr = 0x82A49D18;
	__savefpr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x82a4a180
	if (!cr6.lt) goto loc_82A4A180;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82a49d48
	if (cr6.lt) goto loc_82A49D48;
	// cmpwi cr6,r7,22
	cr6.compare<int32_t>(ctx.r7.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a49d4c
	if (cr6.lt) goto loc_82A49D4C;
loc_82A49D48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A49D4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4a180
	if (cr6.eq) goto loc_82A4A180;
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r26,22
	cr6.compare<uint32_t>(ctx.r26.u32, 22, xer);
	// bge cr6,0x82a49d7c
	if (!cr6.lt) goto loc_82A49D7C;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82a49d80
	goto loc_82A49D80;
loc_82A49D7C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A49D80:
	// addi r10,r6,76
	ctx.r10.s64 = ctx.r6.s64 + 76;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bge cr6,0x82a49da4
	if (!cr6.lt) goto loc_82A49DA4;
	// addi r9,r28,76
	ctx.r9.s64 = ctx.r28.s64 + 76;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r8,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82a49da8
	goto loc_82A49DA8;
loc_82A49DA4:
	// li r23,0
	ctx.r23.s64 = 0;
loc_82A49DA8:
	// lwz r9,1280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,1284(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r7,1288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lbz r29,252(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x825ceaf8
	ctx.lr = 0x82A49DDC;
	sub_825CEAF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a40840
	ctx.lr = 0x82A49DEC;
	sub_82A40840(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A49DF4;
	sub_825CA600(ctx, base);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// fsqrts f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82a49e10
	if (!cr6.eq) goto loc_82A49E10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a49e18
	goto loc_82A49E18;
loc_82A49E10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
loc_82A49E18:
	// fsubs f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f26,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// fabs f10,f26
	ctx.f10.u64 = ctx.f26.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f24,1272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	ctx.f24.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,-11324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11324);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lfs f0,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f25,f12,f0
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f29,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,25584(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25584);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f12,-8304(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8304);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// lfs f11,16088(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16088);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f27,f7,f11
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fnmsubs f28,f6,f0,f12
	ctx.f28.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// bl 0x8261a830
	ctx.lr = 0x82A49E80;
	sub_8261A830(ctx, base);
	// fsubs f0,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f24.f64));
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lfs f13,19176(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 19176);
	ctx.f13.f64 = double(temp.f32);
	// fabs f5,f0
	ctx.f5.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// blt cr6,0x82a49ea0
	if (cr6.lt) goto loc_82A49EA0;
	// stfs f29,20(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// b 0x82a49ee0
	goto loc_82A49EE0;
loc_82A49EA0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82a49eb4
	if (!cr6.gt) goto loc_82A49EB4;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_82A49EB4:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a49edc
	if (!cr6.lt) goto loc_82A49EDC;
	// stfs f0,20(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
loc_82A49EDC:
	// lfs f30,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
loc_82A49EE0:
	// fadds f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,25668
	ctx.r11.s64 = ctx.r11.s64 + 25668;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x82a49f14
	if (!cr6.lt) goto loc_82A49F14;
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// b 0x82a49f20
	goto loc_82A49F20;
loc_82A49F14:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// blt cr6,0x82a49f24
	if (cr6.lt) goto loc_82A49F24;
	// fsubs f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
loc_82A49F20:
	// stfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A49F24:
	// fadds f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bge cr6,0x82a49f3c
	if (!cr6.lt) goto loc_82A49F3C;
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// b 0x82a49f48
	goto loc_82A49F48;
loc_82A49F3C:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x82a49f4c
	if (cr6.lt) goto loc_82A49F4C;
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
loc_82A49F48:
	// stfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A49F4C:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82a49f5c
	if (!cr6.eq) goto loc_82A49F5C;
	// fcmpu cr6,f26,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f29.f64);
	// bgt cr6,0x82a49f6c
	if (cr6.gt) goto loc_82A49F6C;
loc_82A49F5C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x82a49fb4
	if (!cr6.eq) goto loc_82A49FB4;
	// fcmpu cr6,f26,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f29.f64);
	// bge cr6,0x82a49fb4
	if (!cr6.lt) goto loc_82A49FB4;
loc_82A49F6C:
	// fsubs f0,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fmadds f0,f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a49f84
	if (!cr6.lt) goto loc_82A49F84;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82a49f90
	goto loc_82A49F90;
loc_82A49F84:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a49f90
	if (cr6.lt) goto loc_82A49F90;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
loc_82A49F90:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a49fa0
	if (cr6.gt) goto loc_82A49FA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49FA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ff8
	if (cr6.eq) goto loc_82A49FF8;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82a49ff8
	goto loc_82A49FF8;
loc_82A49FB4:
	// fsubs f0,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fnmsubs f0,f0,f13,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a49fcc
	if (!cr6.lt) goto loc_82A49FCC;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82a49fd8
	goto loc_82A49FD8;
loc_82A49FCC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a49fd8
	if (cr6.lt) goto loc_82A49FD8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
loc_82A49FD8:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a49fe8
	if (cr6.lt) goto loc_82A49FE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A49FE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a49ff8
	if (cr6.eq) goto loc_82A49FF8;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A49FF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A4A008;
	sub_8263EEB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mulli r27,r28,11
	ctx.r27.s64 = ctx.r28.s64 * 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15304
	ctx.r29.s64 = 15304;
	// ori r28,r11,12384
	ctx.r28.u64 = ctx.r11.u64 | 12384;
	// lfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
loc_82A4A020:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a4a034
	if (cr0.lt) goto loc_82A4A034;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4a038
	if (cr6.lt) goto loc_82A4A038;
loc_82A4A034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a15c
	if (cr6.eq) goto loc_82A4A15C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4a058
	if (cr6.lt) goto loc_82A4A058;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4a05c
	if (cr6.lt) goto loc_82A4A05C;
loc_82A4A058:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A05C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a07c
	if (cr6.eq) goto loc_82A4A07C;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a4a080
	goto loc_82A4A080;
loc_82A4A07C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A080:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a15c
	if (cr6.eq) goto loc_82A4A15C;
	// addi r11,r23,3612
	ctx.r11.s64 = ctx.r23.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a4a0a0
	if (!cr6.lt) goto loc_82A4A0A0;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82a4a0a4
	goto loc_82A4A0A4;
loc_82A4A0A0:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A4A0A4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a4a15c
	if (cr6.eq) goto loc_82A4A15C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825cb9b0
	ctx.lr = 0x82A4A0BC;
	sub_825CB9B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r26,22
	cr6.compare<uint32_t>(ctx.r26.u32, 22, xer);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// bge cr6,0x82a4a0d4
	if (!cr6.lt) goto loc_82A4A0D4;
	// mulli r10,r26,88
	ctx.r10.s64 = ctx.r26.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A4A0D4:
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a4a0f4
	if (!cr6.lt) goto loc_82A4A0F4;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82a4a100
	goto loc_82A4A100;
loc_82A4A0F4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a4a104
	if (cr6.lt) goto loc_82A4A104;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
loc_82A4A100:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A4A104:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A4A114;
	sub_8263EEB0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a4a128
	if (cr6.gt) goto loc_82A4A128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a15c
	if (cr6.eq) goto loc_82A4A15C;
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4a144
	if (cr6.lt) goto loc_82A4A144;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a15c
	if (cr6.eq) goto loc_82A4A15C;
	// fcmpu cr6,f31,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bge cr6,0x82a4a15c
	if (!cr6.lt) goto loc_82A4A15C;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_82A4A15C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r29,15348
	cr6.compare<int32_t>(ctx.r29.s32, 15348, xer);
	// blt cr6,0x82a4a020
	if (cr6.lt) goto loc_82A4A020;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A4A17C;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4A180:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A4A190;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A194"))) PPC_WEAK_FUNC(sub_82A4A194);
PPC_FUNC_IMPL(__imp__sub_82A4A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4A198"))) PPC_WEAK_FUNC(sub_82A4A198);
PPC_FUNC_IMPL(__imp__sub_82A4A198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A4A1A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a22c10
	ctx.lr = 0x82A4A1C8;
	sub_82A22C10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4a1f8
	if (cr6.lt) goto loc_82A4A1F8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a4a1f8
	if (!cr6.lt) goto loc_82A4A1F8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a4a1f8
	if (cr6.lt) goto loc_82A4A1F8;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4a1fc
	if (cr6.lt) goto loc_82A4A1FC;
loc_82A4A1F8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A4A1FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4a288
	if (!cr6.eq) goto loc_82A4A288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x82A4A218;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4a280
	if (cr6.eq) goto loc_82A4A280;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82a4a280
	if (!cr6.eq) goto loc_82A4A280;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a4a278
	if (cr6.eq) goto loc_82A4A278;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a4a268
	if (!cr6.gt) goto loc_82A4A268;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82a4a260
	if (!cr6.gt) goto loc_82A4A260;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82a4a268
	if (!cr6.eq) goto loc_82A4A268;
loc_82A4A260:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a4a26c
	goto loc_82A4A26C;
loc_82A4A268:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A4A26C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a280
	if (cr6.eq) goto loc_82A4A280;
loc_82A4A278:
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82A4A280:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82A4A288:
	// lwz r11,4460(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a4a354
	if (!cr6.eq) goto loc_82A4A354;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4a2b4
	if (cr6.lt) goto loc_82A4A2B4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a4a2b4
	if (!cr6.lt) goto loc_82A4A2B4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a4a2b4
	if (cr6.lt) goto loc_82A4A2B4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x82a4a2b8
	if (cr6.lt) goto loc_82A4A2B8;
loc_82A4A2B4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A4A2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a354
	if (cr6.eq) goto loc_82A4A354;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a4a2dc
	if (!cr6.lt) goto loc_82A4A2DC;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// b 0x82a4a2e0
	goto loc_82A4A2E0;
loc_82A4A2DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82A4A2E0:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2a378
	ctx.lr = 0x82A4A2E8;
	sub_82A2A378(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4A30C;
	sub_82A49558(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a49d08
	ctx.lr = 0x82A4A328;
	sub_82A49D08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4472(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A4A354:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A380"))) PPC_WEAK_FUNC(sub_82A4A380);
PPC_FUNC_IMPL(__imp__sub_82A4A380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,26104
	ctx.r10.u64 = ctx.r11.u64 | 26104;
	// lbzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4a3b8
	if (cr6.eq) goto loc_82A4A3B8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,26208
	ctx.r9.u64 = ctx.r10.u64 | 26208;
	// lwzx r8,r5,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82a4a3e4
	goto loc_82A4A3E4;
loc_82A4A3B8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22420
	ctx.r10.u64 = ctx.r11.u64 | 22420;
	// lbzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,5360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5360);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A4A3E4:
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4A400"))) PPC_WEAK_FUNC(sub_82A4A400);
PPC_FUNC_IMPL(__imp__sub_82A4A400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a4a418
	if (!cr6.eq) goto loc_82A4A418;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a4a478
	if (cr6.eq) goto loc_82A4A478;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A4A418:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82a4a430
	if (!cr6.eq) goto loc_82A4A430;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ble cr6,0x82a4a458
	if (!cr6.gt) goto loc_82A4A458;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A4A430:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x82a4a468
	if (!cr6.eq) goto loc_82A4A468;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// ble cr6,0x82a4a464
	if (!cr6.gt) goto loc_82A4A464;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
loc_82A4A458:
	// bne cr6,0x82a4a468
	if (!cr6.eq) goto loc_82A4A468;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A4A464:
	// beq cr6,0x82a4a470
	if (cr6.eq) goto loc_82A4A470;
loc_82A4A468:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// ble cr6,0x82a4a478
	if (!cr6.gt) goto loc_82A4A478;
loc_82A4A470:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A4A478:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4A488"))) PPC_WEAK_FUNC(sub_82A4A488);
PPC_FUNC_IMPL(__imp__sub_82A4A488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A4A490;
	__savegprlr_26(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r4,22600
	ctx.r4.s64 = ctx.r4.s64 + 22600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,812
	ctx.r5.s64 = 812;
	// bl 0x831ce980
	ctx.lr = 0x82A4A4B4;
	sub_831CE980(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a4a5bc
	if (!cr6.lt) goto loc_82A4A5BC;
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a4a4d8
	if (cr6.lt) goto loc_82A4A4D8;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4a4dc
	if (cr6.lt) goto loc_82A4A4DC;
loc_82A4A4D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A4DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a5bc
	if (cr6.eq) goto loc_82A4A5BC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a4a5bc
	if (!cr6.eq) goto loc_82A4A5BC;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r10,21096
	ctx.r8.u64 = ctx.r10.u64 | 21096;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,20832
	ctx.r29.s64 = ctx.r29.s64 + 20832;
	// lwzx r7,r9,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lbzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lbz r4,252(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 252);
	// subfe r31,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a40840
	ctx.lr = 0x82A4A52C;
	sub_82A40840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A4A534;
	sub_825CA600(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bne cr6,0x82a4a5b0
	if (!cr6.eq) goto loc_82A4A5B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a4a5b0
	if (cr6.lt) goto loc_82A4A5B0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a5c0
	if (cr6.eq) goto loc_82A4A5C0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a4a5c0
	if (!cr6.eq) goto loc_82A4A5C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a4a400
	ctx.lr = 0x82A4A58C;
	sub_82A4A400(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82a4a5c0
	if (!cr6.lt) goto loc_82A4A5C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,27680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27680);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a4a5c0
	if (!cr6.lt) goto loc_82A4A5C0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A4A5B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A4A5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4A5C0:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A5C8"))) PPC_WEAK_FUNC(sub_82A4A5C8);
PPC_FUNC_IMPL(__imp__sub_82A4A5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A4A5D0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r24,r5,1
	ctx.r24.s64 = ctx.r5.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r24,r24,26104
	ctx.r24.s64 = ctx.r24.s64 + 26104;
	// ori r10,r11,22620
	ctx.r10.u64 = ctx.r11.u64 | 22620;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// lwzx r31,r5,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4a610
	if (cr6.eq) goto loc_82A4A610;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,26208
	ctx.r10.u64 = ctx.r11.u64 | 26208;
	// lwzx r31,r5,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
loc_82A4A610:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82a4a858
	if (!cr6.lt) goto loc_82A4A858;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4a488
	ctx.lr = 0x82A4A628;
	sub_82A4A488(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r25,r11,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// beq cr6,0x82a4a658
	if (cr6.eq) goto loc_82A4A658;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bge cr6,0x82a4a658
	if (!cr6.lt) goto loc_82A4A658;
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
loc_82A4A658:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,7
	ctx.r4.s64 = 7;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x82a23768
	ctx.lr = 0x82A4A688;
	sub_82A23768(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r6,55
	cr6.compare<int32_t>(ctx.r6.s32, 55, xer);
	// beq cr6,0x82a4a818
	if (cr6.eq) goto loc_82A4A818;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a4a818
	if (!cr6.eq) goto loc_82A4A818;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,22272
	ctx.r31.s64 = ctx.r31.s64 + 22272;
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r5,252(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// neg r3,r4
	ctx.r3.s64 = -ctx.r4.s64;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82a4a6f4
	if (!cr6.eq) goto loc_82A4A6F4;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a4a6fc
	goto loc_82A4A6FC;
loc_82A4A6F4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A4A6FC:
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f0,f11
	ctx.f0.f64 = double(float(sqrt(ctx.f11.f64)));
	// beq cr6,0x82a4a74c
	if (cr6.eq) goto loc_82A4A74C;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f13,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a4a750
	if (cr6.lt) goto loc_82A4A750;
loc_82A4A74C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4A750:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4a80c
	if (!cr6.eq) goto loc_82A4A80C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4a80c
	if (!cr6.gt) goto loc_82A4A80C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f13,16088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a4a844
	if (cr6.gt) goto loc_82A4A844;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f31,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x825ca9d8
	ctx.lr = 0x82A4A798;
	sub_825CA9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825eb4d0
	ctx.lr = 0x82A4A7A4;
	sub_825EB4D0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4a7ec
	if (!cr6.eq) goto loc_82A4A7EC;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4a7ec
	if (cr6.eq) goto loc_82A4A7EC;
	// srawi r10,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4a7ec
	if (!cr6.eq) goto loc_82A4A7EC;
	// srawi r11,r11,12
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4a7f0
	if (cr6.eq) goto loc_82A4A7F0;
loc_82A4A7EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A4A7F0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-6664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6664);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a4a810
	if (!cr6.lt) goto loc_82A4A810;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a810
	if (cr6.eq) goto loc_82A4A810;
loc_82A4A80C:
	// li r30,3
	ctx.r30.s64 = 3;
loc_82A4A810:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
loc_82A4A818:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a858
	if (cr6.eq) goto loc_82A4A858;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a4a854
	if (!cr6.eq) goto loc_82A4A854;
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A4A844:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// ble cr6,0x82a4a810
	if (!cr6.gt) goto loc_82A4A810;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82a4a810
	goto loc_82A4A810;
loc_82A4A854:
	// stw r25,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r25.u32);
loc_82A4A858:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A864"))) PPC_WEAK_FUNC(sub_82A4A864);
PPC_FUNC_IMPL(__imp__sub_82A4A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4A868"))) PPC_WEAK_FUNC(sub_82A4A868);
PPC_FUNC_IMPL(__imp__sub_82A4A868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A4A870;
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
	// bl 0x82a4a5c8
	ctx.lr = 0x82A4A884;
	sub_82A4A5C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4a380
	ctx.lr = 0x82A4A894;
	sub_82A4A380(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A89C"))) PPC_WEAK_FUNC(sub_82A4A89C);
PPC_FUNC_IMPL(__imp__sub_82A4A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4A8A0"))) PPC_WEAK_FUNC(sub_82A4A8A0);
PPC_FUNC_IMPL(__imp__sub_82A4A8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a4a8ec
	if (!cr6.eq) goto loc_82A4A8EC;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a92c
	if (cr6.eq) goto loc_82A4A92C;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// b 0x82a4a934
	goto loc_82A4A934;
loc_82A4A8EC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a4a934
	if (!cr6.eq) goto loc_82A4A934;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a92c
	if (cr6.eq) goto loc_82A4A92C;
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stfs f12,112(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// b 0x82a4a934
	goto loc_82A4A934;
loc_82A4A92C:
	// lfs f13,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82A4A934:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a4a968
	if (!cr6.eq) goto loc_82A4A968;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a9a8
	if (cr6.eq) goto loc_82A4A9A8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
loc_82A4A968:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4a9a8
	if (cr6.eq) goto loc_82A4A9A8;
	// lfs f13,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82A4A9A8:
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4A9B4"))) PPC_WEAK_FUNC(sub_82A4A9B4);
PPC_FUNC_IMPL(__imp__sub_82A4A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4A9B8"))) PPC_WEAK_FUNC(sub_82A4A9B8);
PPC_FUNC_IMPL(__imp__sub_82A4A9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82A4A9C0;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r22,2
	ctx.r22.s64 = 2;
	// beq cr6,0x82a4aa24
	if (cr6.eq) goto loc_82A4AA24;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r22,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r22.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-144(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A4AA24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r20,r24,1
	ctx.r20.s64 = ctx.r24.s64 + 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r20,r20,21916
	ctx.r20.s64 = ctx.r20.s64 + 21916;
	// lfs f30,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f30.f64 = double(temp.f32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
	// addi r29,r27,136
	ctx.r29.s64 = ctx.r27.s64 + 136;
	// addi r26,r21,304
	ctx.r26.s64 = ctx.r21.s64 + 304;
	// ori r25,r9,22600
	ctx.r25.u64 = ctx.r9.u64 | 22600;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r18,10
	ctx.r18.s64 = 10;
	// li r19,20
	ctx.r19.s64 = 20;
loc_82A4AA60:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82a4ab84
	if (!cr6.lt) goto loc_82A4AB84;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82a4ab78
	if (!cr6.lt) goto loc_82A4AB78;
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a4ab24
	if (!cr6.eq) goto loc_82A4AB24;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a4ab24
	if (cr6.eq) goto loc_82A4AB24;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82a4aab8
	if (!cr6.lt) goto loc_82A4AAB8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82a4aabc
	goto loc_82A4AABC;
loc_82A4AAB8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82A4AABC:
	// lbz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82a4ab24
	if (!cr6.gt) goto loc_82A4AB24;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4472(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x82A4AB0C;
	sub_83740868(ctx, base);
	// fdivs f12,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x82a4ab20
	if (cr6.lt) goto loc_82A4AB20;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A4AB20:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82A4AB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x82a4ab38
	if (!cr6.eq) goto loc_82A4AB38;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// b 0x82a4ab40
	goto loc_82A4AB40;
loc_82A4AB38:
	// ble cr6,0x82a4ab40
	if (!cr6.gt) goto loc_82A4AB40;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82A4AB40:
	// lbz r11,158(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ab74
	if (!cr6.eq) goto loc_82A4AB74;
	// lbz r11,161(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 161);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ab74
	if (!cr6.eq) goto loc_82A4AB74;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ab74
	if (!cr6.eq) goto loc_82A4AB74;
	// stw r23,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r23.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// b 0x82a4aba0
	goto loc_82A4ABA0;
loc_82A4AB74:
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
loc_82A4AB78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// b 0x82a4aba0
	goto loc_82A4ABA0;
loc_82A4AB84:
	// ble cr6,0x82a4aba0
	if (!cr6.gt) goto loc_82A4ABA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x82a4aba0
	if (!cr6.eq) goto loc_82A4ABA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A4ABA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4abb8
	if (cr6.eq) goto loc_82A4ABB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82a4abc4
	goto loc_82A4ABC4;
loc_82A4ABB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A4ABC4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82a4ac00
	if (!cr6.eq) goto loc_82A4AC00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// ble cr6,0x82a4abfc
	if (!cr6.gt) goto loc_82A4ABFC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a4abfc
	if (!cr6.eq) goto loc_82A4ABFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4abfc
	if (!cr6.eq) goto loc_82A4ABFC;
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_82A4ABFC:
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
loc_82A4AC00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4ac2c
	if (cr6.lt) goto loc_82A4AC2C;
	// lfs f0,-136(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a4ac2c
	if (!cr6.gt) goto loc_82A4AC2C;
	// stw r22,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r22.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82A4AC2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x82a4aa60
	if (cr6.lt) goto loc_82A4AA60;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4AC58"))) PPC_WEAK_FUNC(sub_82A4AC58);
PPC_FUNC_IMPL(__imp__sub_82A4AC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A4AC60;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce764
	ctx.lr = 0x82A4AC68;
	__savefpr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r24,28(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r22,8(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82a23768
	ctx.lr = 0x82A4AC90;
	sub_82A23768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A4ACA0;
	sub_82A22B40(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r21,16(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// ori r10,r11,22620
	ctx.r10.u64 = ctx.r11.u64 | 22620;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r29,r26,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// stb r25,155(r27)
	PPC_STORE_U8(ctx.r27.u32 + 155, ctx.r25.u8);
	// stb r25,156(r27)
	PPC_STORE_U8(ctx.r27.u32 + 156, ctx.r25.u8);
	// stb r25,157(r27)
	PPC_STORE_U8(ctx.r27.u32 + 157, ctx.r25.u8);
	// stb r25,159(r27)
	PPC_STORE_U8(ctx.r27.u32 + 159, ctx.r25.u8);
	// stb r25,160(r27)
	PPC_STORE_U8(ctx.r27.u32 + 160, ctx.r25.u8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82a4ace8
	if (!cr6.eq) goto loc_82A4ACE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4acf4
	if (cr6.eq) goto loc_82A4ACF4;
loc_82A4ACE8:
	// stb r25,152(r27)
	PPC_STORE_U8(ctx.r27.u32 + 152, ctx.r25.u8);
	// stb r25,154(r27)
	PPC_STORE_U8(ctx.r27.u32 + 154, ctx.r25.u8);
	// stb r25,153(r27)
	PPC_STORE_U8(ctx.r27.u32 + 153, ctx.r25.u8);
loc_82A4ACF4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// lfs f31,-7352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x82a4ae18
	if (!cr6.lt) goto loc_82A4AE18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4ada8
	if (cr6.eq) goto loc_82A4ADA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a4ad50
	if (!cr6.eq) goto loc_82A4AD50;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82a4ad50
	if (cr6.eq) goto loc_82A4AD50;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22344
	ctx.r10.u64 = ctx.r11.u64 | 22344;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x82a4ad48
	if (cr6.gt) goto loc_82A4AD48;
	// stb r23,153(r27)
	PPC_STORE_U8(ctx.r27.u32 + 153, ctx.r23.u8);
	// b 0x82a4ad4c
	goto loc_82A4AD4C;
loc_82A4AD48:
	// stb r25,153(r27)
	PPC_STORE_U8(ctx.r27.u32 + 153, ctx.r25.u8);
loc_82A4AD4C:
	// stb r23,152(r27)
	PPC_STORE_U8(ctx.r27.u32 + 152, ctx.r23.u8);
loc_82A4AD50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4ada8
	if (cr6.eq) goto loc_82A4ADA8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82a4ad84
	if (!cr6.eq) goto loc_82A4AD84;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a4ad7c
	if (cr6.eq) goto loc_82A4AD7C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a4ad84
	if (!cr6.eq) goto loc_82A4AD84;
loc_82A4AD7C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a4ad88
	goto loc_82A4AD88;
loc_82A4AD84:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4AD88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ada8
	if (!cr6.eq) goto loc_82A4ADA8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82a4ada4
	if (cr6.eq) goto loc_82A4ADA4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82a4ada8
	if (!cr6.eq) goto loc_82A4ADA8;
loc_82A4ADA4:
	// stb r23,154(r27)
	PPC_STORE_U8(ctx.r27.u32 + 154, ctx.r23.u8);
loc_82A4ADA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a4ae18
	if (!cr6.eq) goto loc_82A4AE18;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lbz r31,252(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 252);
	// bl 0x82a3fca8
	ctx.lr = 0x82A4ADD0;
	sub_82A3FCA8(ctx, base);
	// extsb r7,r31
	ctx.r7.s64 = ctx.r31.s8;
	// lfs f12,8144(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82a4ae18
	if (!cr6.lt) goto loc_82A4AE18;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fnmsubs f11,f0,f12,f13
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// lfs f0,-6668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6668);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82a4ae18
	if (!cr6.lt) goto loc_82A4AE18;
	// stb r23,157(r27)
	PPC_STORE_U8(ctx.r27.u32 + 157, ctx.r23.u8);
loc_82A4AE18:
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// addi r11,r11,26292
	ctx.r11.s64 = ctx.r11.s64 + 26292;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srawi r9,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a4ae48
	if (cr6.eq) goto loc_82A4AE48;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4ae48
	if (!cr6.eq) goto loc_82A4AE48;
	// stb r23,155(r27)
	PPC_STORE_U8(ctx.r27.u32 + 155, ctx.r23.u8);
loc_82A4AE48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a4ae70
	if (!cr6.eq) goto loc_82A4AE70;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a4ae68
	if (cr6.eq) goto loc_82A4AE68;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a4ae70
	if (!cr6.eq) goto loc_82A4AE70;
loc_82A4AE68:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a4ae74
	goto loc_82A4AE74;
loc_82A4AE70:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4AE74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4aea0
	if (cr6.eq) goto loc_82A4AEA0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r9,r11,22508
	ctx.r9.u64 = ctx.r11.u64 | 22508;
	// lfs f0,-21064(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21064);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a4aea0
	if (!cr6.gt) goto loc_82A4AEA0;
	// stb r23,156(r27)
	PPC_STORE_U8(ctx.r27.u32 + 156, ctx.r23.u8);
loc_82A4AEA0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,26288
	ctx.r10.u64 = ctx.r11.u64 | 26288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r7,158(r27)
	PPC_STORE_U8(ctx.r27.u32 + 158, ctx.r7.u8);
	// bl 0x82a3e400
	ctx.lr = 0x82A4AEC8;
	sub_82A3E400(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a4af24
	if (cr6.eq) goto loc_82A4AF24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x82A4AEE4;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4af10
	if (cr6.lt) goto loc_82A4AF10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4af10
	if (!cr6.lt) goto loc_82A4AF10;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4af10
	if (cr6.lt) goto loc_82A4AF10;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82a4af14
	if (cr6.lt) goto loc_82A4AF14;
loc_82A4AF10:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4AF14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x82a4af28
	if (cr6.eq) goto loc_82A4AF28;
loc_82A4AF24:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4AF28:
	// stb r11,161(r27)
	PPC_STORE_U8(ctx.r27.u32 + 161, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x82A4AF3C;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4af68
	if (cr6.lt) goto loc_82A4AF68;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4af68
	if (!cr6.lt) goto loc_82A4AF68;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4af68
	if (cr6.lt) goto loc_82A4AF68;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82a4af6c
	if (cr6.lt) goto loc_82A4AF6C;
loc_82A4AF68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4AF6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b190
	if (cr6.eq) goto loc_82A4B190;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82a4b190
	if (!cr6.lt) goto loc_82A4B190;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// lfs f0,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r6,252(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 252);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lfs f23,64(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f23.f64 = double(temp.f32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f24,f8,f23
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// fmuls f25,f9,f0
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x82a22c10
	ctx.lr = 0x82A4AFF4;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4b010
	if (!cr6.lt) goto loc_82A4B010;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x82a4b014
	goto loc_82A4B014;
loc_82A4B010:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A4B014:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2a378
	ctx.lr = 0x82A4B01C;
	sub_82A2A378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a4b034
	if (cr6.lt) goto loc_82A4B034;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82a4b038
	if (cr6.lt) goto loc_82A4B038;
loc_82A4B034:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4B038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b190
	if (cr6.eq) goto loc_82A4B190;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// lwzx r31,r31,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bge cr6,0x82a4b064
	if (!cr6.lt) goto loc_82A4B064;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x82a4b068
	goto loc_82A4B068;
loc_82A4B064:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A4B068:
	// lfs f28,1272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x8261a830
	ctx.lr = 0x82A4B070;
	sub_8261A830(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x825ceaf8
	ctx.lr = 0x82A4B084;
	sub_825CEAF8(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x83740858
	ctx.lr = 0x82A4B08C;
	sub_83740858(ctx, base);
	// lbz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// fsubs f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// ori r8,r10,21936
	ctx.r8.u64 = ctx.r10.u64 | 21936;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// ori r4,r5,21928
	ctx.r4.u64 = ctx.r5.u64 | 21928;
	// lwz r9,4472(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4472);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r8,r26,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// lfs f29,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// subf r31,r8,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// fmuls f31,f10,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82a4b138
	if (!cr6.gt) goto loc_82A4B138;
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82a4b138
	if (!cr6.lt) goto loc_82A4B138;
	// bl 0x83740858
	ctx.lr = 0x82A4B0F8;
	sub_83740858(ctx, base);
	// fdivs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82A4B138:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,21880
	ctx.r9.u64 = ctx.r10.u64 | 21880;
	// lbzx r8,r26,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a4b18c
	if (cr6.eq) goto loc_82A4B18C;
	// fsubs f13,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,26012
	ctx.r10.s64 = ctx.r10.s64 + 26012;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a4b18c
	if (!cr6.lt) goto loc_82A4B18C;
	// lfs f0,-52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x82a4b18c
	if (cr6.lt) goto loc_82A4B18C;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a4b18c
	if (!cr6.gt) goto loc_82A4B18C;
	// fsubs f0,f24,f25
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a4b18c
	if (!cr6.gt) goto loc_82A4B18C;
	// stb r23,159(r27)
	PPC_STORE_U8(ctx.r27.u32 + 159, ctx.r23.u8);
loc_82A4B18C:
	// stfs f23,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r27.u32 + 120, temp.u32);
loc_82A4B190:
	// lfs f0,8152(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82a4b1f4
	if (!cr6.gt) goto loc_82A4B1F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x82A4B1B4;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4b1e0
	if (cr6.lt) goto loc_82A4B1E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4b1e0
	if (!cr6.lt) goto loc_82A4B1E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4b1e0
	if (cr6.lt) goto loc_82A4B1E0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82a4b1e4
	if (cr6.lt) goto loc_82A4B1E4;
loc_82A4B1E0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A4B1E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b1f4
	if (cr6.eq) goto loc_82A4B1F4;
	// stb r23,160(r27)
	PPC_STORE_U8(ctx.r27.u32 + 160, ctx.r23.u8);
loc_82A4B1F4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7b0
	ctx.lr = 0x82A4B200;
	__restfpr_23(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4B204"))) PPC_WEAK_FUNC(sub_82A4B204);
PPC_FUNC_IMPL(__imp__sub_82A4B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4B208"))) PPC_WEAK_FUNC(sub_82A4B208);
PPC_FUNC_IMPL(__imp__sub_82A4B208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A4B210;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,136(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addis r21,r5,1
	ctx.r21.s64 = ctx.r5.s64 + 65536;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r21,r21,20856
	ctx.r21.s64 = ctx.r21.s64 + 20856;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r8,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// addi r28,r3,136
	ctx.r28.s64 = ctx.r3.s64 + 136;
	// addi r10,r21,-4
	ctx.r10.s64 = ctx.r21.s64 + -4;
loc_82A4B25C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a4b25c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4B25C;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,5
	ctx.r9.s64 = 5;
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,20876
	ctx.r11.s64 = ctx.r11.s64 + 20876;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4B288:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a4b288
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4B288;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addis r23,r24,1
	ctx.r23.s64 = ctx.r24.s64 + 65536;
	// addis r22,r24,1
	ctx.r22.s64 = ctx.r24.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r23,r23,20832
	ctx.r23.s64 = ctx.r23.s64 + 20832;
	// addi r22,r22,24404
	ctx.r22.s64 = ctx.r22.s64 + 24404;
	// stw r11,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r11.u32);
	// lwz r30,28(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A4B2BC;
	sub_82A22B40(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,22620
	ctx.r9.u64 = ctx.r10.u64 | 22620;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r25,r24,r9
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// cntlzw r8,r25
	ctx.r8.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82a22c10
	ctx.lr = 0x82A4B2E4;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// beq cr6,0x82a4b314
	if (cr6.eq) goto loc_82A4B314;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4b314
	if (!cr6.lt) goto loc_82A4B314;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82a4b314
	if (!cr6.lt) goto loc_82A4B314;
	// addi r11,r25,34
	ctx.r11.s64 = ctx.r25.s64 + 34;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r20.u32);
loc_82A4B314:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a4b330
	if (!cr6.eq) goto loc_82A4B330;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a4b330
	if (!cr6.eq) goto loc_82A4B330;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// blt cr6,0x82a4b3b0
	if (cr6.lt) goto loc_82A4B3B0;
loc_82A4B330:
	// lbz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b374
	if (cr6.eq) goto loc_82A4B374;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a4b374
	if (!cr6.lt) goto loc_82A4B374;
	// lbz r11,153(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 153);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r10,34
	ctx.r11.s64 = ctx.r10.s64 + 34;
	// bne cr6,0x82a4b3b4
	if (!cr6.eq) goto loc_82A4B3B4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// stwx r10,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A4B374:
	// lbz r11,155(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 155);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b388
	if (cr6.eq) goto loc_82A4B388;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// blt cr6,0x82a4b3b0
	if (cr6.lt) goto loc_82A4B3B0;
loc_82A4B388:
	// lbz r11,157(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b39c
	if (cr6.eq) goto loc_82A4B39C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// blt cr6,0x82a4b3b0
	if (cr6.lt) goto loc_82A4B3B0;
loc_82A4B39C:
	// lbz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b3d0
	if (cr6.eq) goto loc_82A4B3D0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82a4b3d0
	if (!cr6.lt) goto loc_82A4B3D0;
loc_82A4B3B0:
	// addi r11,r25,34
	ctx.r11.s64 = ctx.r25.s64 + 34;
loc_82A4B3B4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A4B3D0:
	// lbz r11,154(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 154);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b614
	if (cr6.eq) goto loc_82A4B614;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r11,r11,22460
	ctx.r11.s64 = ctx.r11.s64 + 22460;
	// lfs f0,8144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8204);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-8356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x82a4bac0
	if (cr6.gt) goto loc_82A4BAC0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lbz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4b43c
	if (cr6.lt) goto loc_82A4B43C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4b440
	if (cr6.lt) goto loc_82A4B440;
loc_82A4B43C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B440:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b4cc
	if (cr6.eq) goto loc_82A4B4CC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4b478
	if (cr6.lt) goto loc_82A4B478;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// bge cr6,0x82a4b478
	if (!cr6.lt) goto loc_82A4B478;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r8,r11,35747
	ctx.r8.u64 = ctx.r11.u64 | 35747;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r5,r6,11
	ctx.r5.s64 = ctx.r6.s64 * 11;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// b 0x82a4b47c
	goto loc_82A4B47C;
loc_82A4B478:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82A4B47C:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82a4b494
	if (!cr6.lt) goto loc_82A4B494;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// b 0x82a4b498
	goto loc_82A4B498;
loc_82A4B494:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B498:
	// addi r11,r11,3612
	ctx.r11.s64 = ctx.r11.s64 + 3612;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a4b4b4
	if (!cr6.lt) goto loc_82A4B4B4;
	// addi r10,r10,3826
	ctx.r10.s64 = ctx.r10.s64 + 3826;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82a4b4b8
	goto loc_82A4B4B8;
loc_82A4B4B4:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A4B4B8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a4b4cc
	if (!cr6.eq) goto loc_82A4B4CC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82A4B4CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a4b4e0
	if (cr6.lt) goto loc_82A4B4E0;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4b4e4
	if (cr6.lt) goto loc_82A4B4E4;
loc_82A4B4E0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B4E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4bac0
	if (cr6.eq) goto loc_82A4BAC0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a4b500
	if (!cr6.lt) goto loc_82A4B500;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82a4b528
	goto loc_82A4B528;
loc_82A4B500:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a4b510
	if (!cr6.lt) goto loc_82A4B510;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82a4b528
	goto loc_82A4B528;
loc_82A4B510:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A4B528:
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x82a4bac0
	if (!cr6.eq) goto loc_82A4BAC0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a4bac0
	if (cr6.lt) goto loc_82A4BAC0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a4b54c
	if (!cr6.lt) goto loc_82A4B54C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x82a4b574
	goto loc_82A4B574;
loc_82A4B54C:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a4b55c
	if (!cr6.lt) goto loc_82A4B55C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x82a4b574
	goto loc_82A4B574;
loc_82A4B55C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_82A4B574:
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82a4b58c
	if (!cr6.lt) goto loc_82A4B58C;
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// b 0x82a4b590
	goto loc_82A4B590;
loc_82A4B58C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B590:
	// lwz r10,4968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4968);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r9,4972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4972);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82a49558
	ctx.lr = 0x82A4B5C4;
	sub_82A49558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a497c0
	ctx.lr = 0x82A4B5E4;
	sub_82A497C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a4a400
	ctx.lr = 0x82A4B5F4;
	sub_82A4A400(ctx, base);
	// addi r10,r31,34
	ctx.r10.s64 = ctx.r31.s64 + 34;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A4B614:
	// lbz r11,158(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b750
	if (cr6.eq) goto loc_82A4B750;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r25,r22,36
	ctx.r25.s64 = ctx.r22.s64 + 36;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bge cr6,0x82a4b63c
	if (!cr6.lt) goto loc_82A4B63C;
loc_82A4B634:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82a4b640
	goto loc_82A4B640;
loc_82A4B63C:
	// li r30,255
	ctx.r30.s64 = 255;
loc_82A4B640:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82a4b654
	if (!cr6.lt) goto loc_82A4B654;
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// b 0x82a4b658
	goto loc_82A4B658;
loc_82A4B654:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B658:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x82a4b724
	if (!cr6.gt) goto loc_82A4B724;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a4b678
	if (cr6.lt) goto loc_82A4B678;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4b67c
	if (cr6.lt) goto loc_82A4B67C;
loc_82A4B678:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B67C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b724
	if (cr6.eq) goto loc_82A4B724;
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82a4b6a0
	if (!cr6.lt) goto loc_82A4B6A0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// b 0x82a4b6a4
	goto loc_82A4B6A4;
loc_82A4B6A0:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82A4B6A4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r31,r11,8144
	ctx.r31.s64 = ctx.r11.s64 + 8144;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B6C8;
	sub_82A49558(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a497c0
	ctx.lr = 0x82A4B6E8;
	sub_82A497C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r28,1280
	ctx.r8.s64 = ctx.r28.s64 + 1280;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a497c0
	ctx.lr = 0x82A4B708;
	sub_82A497C0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a4a400
	ctx.lr = 0x82A4B71C;
	sub_82A4A400(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x82a4b728
	goto loc_82A4B728;
loc_82A4B724:
	// stw r20,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r20.u32);
loc_82A4B728:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82a4b634
	if (cr6.lt) goto loc_82A4B634;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A4B750:
	// lbz r11,161(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 161);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b884
	if (cr6.eq) goto loc_82A4B884;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r25,r22,36
	ctx.r25.s64 = ctx.r22.s64 + 36;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bge cr6,0x82a4b778
	if (!cr6.lt) goto loc_82A4B778;
loc_82A4B770:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82a4b77c
	goto loc_82A4B77C;
loc_82A4B778:
	// li r29,255
	ctx.r29.s64 = 255;
loc_82A4B77C:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a4b790
	if (!cr6.lt) goto loc_82A4B790;
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// b 0x82a4b794
	goto loc_82A4B794;
loc_82A4B790:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B794:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82a4b85c
	if (!cr6.gt) goto loc_82A4B85C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a4b7b4
	if (cr6.lt) goto loc_82A4B7B4;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4b7b8
	if (cr6.lt) goto loc_82A4B7B8;
loc_82A4B7B4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B7B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b85c
	if (cr6.eq) goto loc_82A4B85C;
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// bge cr6,0x82a4b7dc
	if (!cr6.lt) goto loc_82A4B7DC;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// b 0x82a4b7e0
	goto loc_82A4B7E0;
loc_82A4B7DC:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82A4B7E0:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r31,r11,8144
	ctx.r31.s64 = ctx.r11.s64 + 8144;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B804;
	sub_82A49558(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a497c0
	ctx.lr = 0x82A4B824;
	sub_82A497C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r28,1280
	ctx.r8.s64 = ctx.r28.s64 + 1280;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a497c0
	ctx.lr = 0x82A4B844;
	sub_82A497C0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a4a400
	ctx.lr = 0x82A4B858;
	sub_82A4A400(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82A4B85C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a4b770
	if (cr6.lt) goto loc_82A4B770;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A4B884:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21840
	ctx.r10.u64 = ctx.r11.u64 | 21840;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4b8e8
	if (cr6.eq) goto loc_82A4B8E8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21832
	ctx.r10.u64 = ctx.r11.u64 | 21832;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4bac0
	if (!cr6.lt) goto loc_82A4BAC0;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r9,44306
	ctx.r7.u64 = ctx.r9.u64 | 44306;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a4bac0
	if (!cr6.eq) goto loc_82A4BAC0;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82a4bac0
	if (cr6.eq) goto loc_82A4BAC0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82a4babc
	goto loc_82A4BABC;
loc_82A4B8E8:
	// lbz r11,159(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4b910
	if (cr6.eq) goto loc_82A4B910;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82a4b910
	if (!cr6.lt) goto loc_82A4B910;
	// addi r11,r25,34
	ctx.r11.s64 = ctx.r25.s64 + 34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a4bab8
	if (cr6.eq) goto loc_82A4BAB8;
loc_82A4B910:
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4bac0
	if (cr6.eq) goto loc_82A4BAC0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82a4bac0
	if (!cr6.lt) goto loc_82A4BAC0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,21916
	ctx.r10.u64 = ctx.r11.u64 | 21916;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r28,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a22c10
	ctx.lr = 0x82A4B950;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4b97c
	if (cr6.lt) goto loc_82A4B97C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4b97c
	if (!cr6.lt) goto loc_82A4B97C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4b97c
	if (cr6.lt) goto loc_82A4B97C;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a4b980
	if (cr6.lt) goto loc_82A4B980;
loc_82A4B97C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82A4B980:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4ba68
	if (cr6.eq) goto loc_82A4BA68;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a4ba68
	if (!cr6.eq) goto loc_82A4BA68;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4b9ac
	if (!cr6.lt) goto loc_82A4B9AC;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// b 0x82a4b9b0
	goto loc_82A4B9B0;
loc_82A4B9AC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82A4B9B0:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2a378
	ctx.lr = 0x82A4B9B8;
	sub_82A2A378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a4b9d0
	if (cr6.lt) goto loc_82A4B9D0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4b9d4
	if (cr6.lt) goto loc_82A4B9D4;
loc_82A4B9D0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4B9D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ba68
	if (cr6.eq) goto loc_82A4BA68;
	// addi r11,r25,76
	ctx.r11.s64 = ctx.r25.s64 + 76;
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bge cr6,0x82a4ba04
	if (!cr6.lt) goto loc_82A4BA04;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// b 0x82a4ba08
	goto loc_82A4BA08;
loc_82A4BA04:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82A4BA08:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lfs f31,1272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8168);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x8261a830
	ctx.lr = 0x82A4BA18;
	sub_8261A830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r4,252(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 252);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x825ceaf8
	ctx.lr = 0x82A4BA2C;
	sub_825CEAF8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,25964(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25964);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a4ba68
	if (cr6.lt) goto loc_82A4BA68;
	// fsubs f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a4ba68
	if (!cr6.lt) goto loc_82A4BA68;
	// fsubs f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a4ba68
	if (!cr6.lt) goto loc_82A4BA68;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A4BA68:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ba84
	if (!cr6.eq) goto loc_82A4BA84;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a4ba88
	if (cr6.eq) goto loc_82A4BA88;
loc_82A4BA84:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A4BA88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4bac0
	if (cr6.eq) goto loc_82A4BAC0;
	// addi r11,r25,34
	ctx.r11.s64 = ctx.r25.s64 + 34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82a4bab8
	if (cr6.eq) goto loc_82A4BAB8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82a4bac0
	if (!cr6.eq) goto loc_82A4BAC0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82a4babc
	goto loc_82A4BABC;
loc_82A4BAB8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A4BABC:
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_82A4BAC0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BAD4"))) PPC_WEAK_FUNC(sub_82A4BAD4);
PPC_FUNC_IMPL(__imp__sub_82A4BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4BAD8"))) PPC_WEAK_FUNC(sub_82A4BAD8);
PPC_FUNC_IMPL(__imp__sub_82A4BAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A4BAE0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// lfs f31,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r11,10312
	ctx.r30.s64 = ctx.r11.s64 + 10312;
loc_82A4BB10:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x82a4bb20
	if (cr6.eq) goto loc_82A4BB20;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a4bbe8
	if (!cr6.eq) goto loc_82A4BBE8;
loc_82A4BB20:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a4bbe8
	if (cr6.eq) goto loc_82A4BBE8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x83740858
	ctx.lr = 0x82A4BB50;
	sub_83740858(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4bbb8
	if (!cr6.eq) goto loc_82A4BBB8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A4BBB8:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A4BBE8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82a4bb10
	if (cr6.lt) goto loc_82A4BB10;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BC08"))) PPC_WEAK_FUNC(sub_82A4BC08);
PPC_FUNC_IMPL(__imp__sub_82A4BC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4BC10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r28.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stb r30,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r30.u8);
	// stw r28,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r28.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stb r30,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r30.u8);
	// lbz r11,153(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 153);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4bc64
	if (!cr6.eq) goto loc_82A4BC64;
	// lbz r11,155(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 155);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4bc64
	if (!cr6.eq) goto loc_82A4BC64;
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82a4bc68
	if (cr6.eq) goto loc_82A4BC68;
loc_82A4BC64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A4BC68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4bc78
	if (!cr6.eq) goto loc_82A4BC78;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_82A4BC78:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r8,r9,26104
	ctx.r8.u64 = ctx.r9.u64 | 26104;
	// lbzx r7,r5,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a4bce8
	if (cr6.eq) goto loc_82A4BCE8;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// addi r11,r11,26208
	ctx.r11.s64 = ctx.r11.s64 + 26208;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,9
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 9;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a4bdac
	if (!cr6.eq) goto loc_82A4BDAC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// srawi r8,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82a4bdac
	if (!cr6.eq) goto loc_82A4BDAC;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4bd14
	if (cr6.eq) goto loc_82A4BD14;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4bd14
	if (!cr6.eq) goto loc_82A4BD14;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82a4bd14
	goto loc_82A4BD14;
loc_82A4BCE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4bdac
	if (cr6.eq) goto loc_82A4BDAC;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82a4bdac
	if (!cr6.eq) goto loc_82A4BDAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82A4BD10;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82A4BD14:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4bdac
	if (!cr6.lt) goto loc_82A4BDAC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r10,r10,26012
	ctx.r10.s64 = ctx.r10.s64 + 26012;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f13,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, ctx.r6.u8);
	// lfsx f0,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82a4bd68
	if (!cr6.gt) goto loc_82A4BD68;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a4bd68
	if (cr6.gt) goto loc_82A4BD68;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a4bd94
	goto loc_82A4BD94;
loc_82A4BD68:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4bd84
	if (!cr6.gt) goto loc_82A4BD84;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82a4bd84
	if (cr6.gt) goto loc_82A4BD84;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82a4bd94
	goto loc_82A4BD94;
loc_82A4BD84:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r10,3
	ctx.r10.s64 = 3;
	// bgt cr6,0x82a4bd94
	if (cr6.gt) goto loc_82A4BD94;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82A4BD94:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
loc_82A4BDAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BDB4"))) PPC_WEAK_FUNC(sub_82A4BDB4);
PPC_FUNC_IMPL(__imp__sub_82A4BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4BDB8"))) PPC_WEAK_FUNC(sub_82A4BDB8);
PPC_FUNC_IMPL(__imp__sub_82A4BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A4BDC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addis r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r30,r30,22272
	ctx.r30.s64 = ctx.r30.s64 + 22272;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82a22b40
	ctx.lr = 0x82A4BDE8;
	sub_82A22B40(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,153(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// bne cr6,0x82a4be78
	if (!cr6.eq) goto loc_82A4BE78;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lfs f11,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a4be34
	if (!cr6.lt) goto loc_82A4BE34;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A4BE34:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a4be40
	if (!cr6.lt) goto loc_82A4BE40;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82A4BE40:
	// fadds f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f12,f12,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a4be74
	if (cr6.lt) goto loc_82A4BE74;
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f10,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x82a4be78
	if (!cr6.eq) goto loc_82A4BE78;
loc_82A4BE74:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A4BE78:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a4bf04
	if (!cr6.gt) goto loc_82A4BF04;
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,26
	ctx.r4.s64 = ctx.r11.s64 + 26;
	// addi r6,r11,31
	ctx.r6.s64 = ctx.r11.s64 + 31;
	// stfsx f0,r3,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 18;
	// stfsx f13,r7,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfsx f11,r4,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfsx f10,r5,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// b 0x82a4bf78
	goto loc_82A4BF78;
loc_82A4BF04:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// addi r7,r11,22
	ctx.r7.s64 = ctx.r11.s64 + 22;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lfs f0,-11416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// stfsx f13,r3,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// stfsx f9,r8,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stwx r6,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u32);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82a4bf78
	if (!cr6.lt) goto loc_82A4BF78;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfs f0,-29856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29856);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.f13.u32);
loc_82A4BF78:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a4bad8
	ctx.lr = 0x82A4BF98;
	sub_82A4BAD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BFA0"))) PPC_WEAK_FUNC(sub_82A4BFA0);
PPC_FUNC_IMPL(__imp__sub_82A4BFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A4BFA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,22540
	ctx.r10.u64 = ctx.r11.u64 | 22540;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4bfdc
	if (cr6.lt) goto loc_82A4BFDC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a4bfe0
	if (cr6.lt) goto loc_82A4BFE0;
loc_82A4BFDC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82A4BFE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4c19c
	if (cr6.eq) goto loc_82A4C19C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a4bffc
	if (!cr6.lt) goto loc_82A4BFFC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82a4c024
	goto loc_82A4C024;
loc_82A4BFFC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a4c00c
	if (!cr6.lt) goto loc_82A4C00C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82a4c024
	goto loc_82A4C024;
loc_82A4C00C:
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
loc_82A4C024:
	// addi r11,r31,34
	ctx.r11.s64 = ctx.r31.s64 + 34;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r27,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x82a4c19c
	if (!cr6.gt) goto loc_82A4C19C;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// lwz r29,16(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lbz r7,252(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 252);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82a4c078
	if (!cr6.eq) goto loc_82A4C078;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82a4c080
	goto loc_82A4C080;
loc_82A4C078:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f3,f0
	ctx.f3.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A4C080:
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f2,8152(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8144(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,9008(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9008);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x825c28d8
	ctx.lr = 0x82A4C094;
	sub_825C28D8(ctx, base);
	// lfs f0,8168(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8168);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-11324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fnmsubs f0,f12,f0,f1
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82a4c0c4
	if (!cr6.gt) goto loc_82A4C0C4;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x82a4c0d8
	goto loc_82A4C0D8;
loc_82A4C0C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a4c0d8
	if (!cr6.lt) goto loc_82A4C0D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A4C0D8:
	// lwzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lfs f10,9008(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a4c0fc
	if (!cr6.eq) goto loc_82A4C0FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,26008
	ctx.r10.s64 = ctx.r11.s64 + 26008;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a4c124
	goto loc_82A4C124;
loc_82A4C0FC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a4c114
	if (!cr6.eq) goto loc_82A4C114;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,26008
	ctx.r10.s64 = ctx.r11.s64 + 26008;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a4c124
	goto loc_82A4C124;
loc_82A4C114:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a4c124
	if (!cr6.eq) goto loc_82A4C124;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,26008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26008);
	ctx.f13.f64 = double(temp.f32);
loc_82A4C124:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,31
	ctx.r9.s64 = ctx.r31.s64 + 31;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x82a4c160
	if (cr6.gt) goto loc_82A4C160;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// stwx r24,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r24.u32);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r8,r30
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// stfsx f11,r7,r30
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, temp.u32);
	// b 0x82a4c184
	goto loc_82A4C184;
loc_82A4C160:
	// fdivs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r10,r31,22
	ctx.r10.s64 = ctx.r31.s64 + 22;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r8,r30
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// stfsx f0,r7,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, temp.u32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.f11.u32);
loc_82A4C184:
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r24,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x82a4c1a8
	goto loc_82A4C1A8;
loc_82A4C19C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
loc_82A4C1A8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4bad8
	ctx.lr = 0x82A4C1B8;
	sub_82A4BAD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C1C0"))) PPC_WEAK_FUNC(sub_82A4C1C0);
PPC_FUNC_IMPL(__imp__sub_82A4C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A4C1C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r26,8(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// ori r10,r11,22620
	ctx.r10.u64 = ctx.r11.u64 | 22620;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r31,r5,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82a4c204
	if (!cr6.lt) goto loc_82A4C204;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x82a4c208
	goto loc_82A4C208;
loc_82A4C204:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82A4C208:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x82A4C214;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4c230
	if (!cr6.lt) goto loc_82A4C230;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x82a4c234
	goto loc_82A4C234;
loc_82A4C230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4C234:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2a378
	ctx.lr = 0x82A4C23C;
	sub_82A2A378(ctx, base);
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x82a4c254
	if (!cr6.lt) goto loc_82A4C254;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x82a4c258
	goto loc_82A4C258;
loc_82A4C254:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C258:
	// lbz r10,252(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f13,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lfs f11,1280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f11.f64 = double(temp.f32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f12,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a4c2b4
	if (!cr6.gt) goto loc_82A4C2B4;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a4c2b4
	if (!cr6.lt) goto loc_82A4C2B4;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,26008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// b 0x82a4c2d0
	goto loc_82A4C2D0;
loc_82A4C2B4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a4c2c8
	if (cr6.lt) goto loc_82A4C2C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11368);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a4c2d0
	goto loc_82A4C2D0;
loc_82A4C2C8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,26008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26008);
	ctx.f0.f64 = double(temp.f32);
loc_82A4C2D0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// addi r8,r31,22
	ctx.r8.s64 = ctx.r31.s64 + 22;
	// addi r7,r31,31
	ctx.r7.s64 = ctx.r31.s64 + 31;
	// lfsx f13,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r31,18
	ctx.r6.s64 = ctx.r31.s64 + 18;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-29852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29852);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-28496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r4,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, temp.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfsx f13,r3,r29
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r29.u32, temp.u32);
	// cntlzw r7,r31
	ctx.r7.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.f9.u32);
	// bl 0x82a4bad8
	ctx.lr = 0x82A4C348;
	sub_82A4BAD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C350"))) PPC_WEAK_FUNC(sub_82A4C350);
PPC_FUNC_IMPL(__imp__sub_82A4C350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A4C358;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82a23768
	ctx.lr = 0x82A4C380;
	sub_82A23768(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A4C390;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r8,r9,22620
	ctx.r8.u64 = ctx.r9.u64 | 22620;
	// li r27,10
	ctx.r27.s64 = 10;
	// lwz r7,4460(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// li r26,8
	ctx.r26.s64 = 8;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// lwzx r28,r30,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bne cr6,0x82a4c3d8
	if (!cr6.eq) goto loc_82A4C3D8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a227f0
	ctx.lr = 0x82A4C3C4;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4c3d8
	if (cr6.eq) goto loc_82A4C3D8;
	// lwz r27,36(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_82A4C3D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4c408
	if (cr6.eq) goto loc_82A4C408;
	// lbz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4c408
	if (cr6.eq) goto loc_82A4C408;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a4bdb8
	ctx.lr = 0x82A4C400;
	sub_82A4BDB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A4C408:
	// lbz r11,154(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 154);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4c42c
	if (cr6.eq) goto loc_82A4C42C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a4bfa0
	ctx.lr = 0x82A4C424;
	sub_82A4BFA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A4C42C:
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82a4c440
	if (!cr6.eq) goto loc_82A4C440;
loc_82A4C434:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a4c4e4
	goto loc_82A4C4E4;
loc_82A4C440:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// bne cr6,0x82a4c45c
	if (!cr6.eq) goto loc_82A4C45C;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x82a4c45c
	if (!cr6.eq) goto loc_82A4C45C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a4c434
	if (cr6.eq) goto loc_82A4C434;
loc_82A4C45C:
	// lbz r11,159(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4c4b4
	if (cr6.eq) goto loc_82A4C4B4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82a4c4b4
	if (!cr6.lt) goto loc_82A4C4B4;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r10,20856
	ctx.r10.s64 = ctx.r10.s64 + 20856;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82A4C498:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a4c498
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4C498;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a4c4b8
	if (cr6.eq) goto loc_82A4C4B8;
loc_82A4C4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C4B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4c4dc
	if (cr6.eq) goto loc_82A4C4DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a4c1c0
	ctx.lr = 0x82A4C4D4;
	sub_82A4C1C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A4C4DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
loc_82A4C4E4:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a4bad8
	ctx.lr = 0x82A4C4F8;
	sub_82A4BAD8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C500"))) PPC_WEAK_FUNC(sub_82A4C500);
PPC_FUNC_IMPL(__imp__sub_82A4C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A4C508;
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
	// bl 0x82a4ac58
	ctx.lr = 0x82A4C51C;
	sub_82A4AC58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4b208
	ctx.lr = 0x82A4C52C;
	sub_82A4B208(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c350
	ctx.lr = 0x82A4C53C;
	sub_82A4C350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4a8a0
	ctx.lr = 0x82A4C544;
	sub_82A4A8A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4a9b8
	ctx.lr = 0x82A4C550;
	sub_82A4A9B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4bc08
	ctx.lr = 0x82A4C560;
	sub_82A4BC08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C568"))) PPC_WEAK_FUNC(sub_82A4C568);
PPC_FUNC_IMPL(__imp__sub_82A4C568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x82a4c580
	if (!cr6.lt) goto loc_82A4C580;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4C580:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C588"))) PPC_WEAK_FUNC(sub_82A4C588);
PPC_FUNC_IMPL(__imp__sub_82A4C588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x82a4c5a0
	if (!cr6.lt) goto loc_82A4C5A0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_82A4C5A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C5A8"))) PPC_WEAK_FUNC(sub_82A4C5A8);
PPC_FUNC_IMPL(__imp__sub_82A4C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x82a4c5c0
	if (!cr6.lt) goto loc_82A4C5C0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_82A4C5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C5C8"))) PPC_WEAK_FUNC(sub_82A4C5C8);
PPC_FUNC_IMPL(__imp__sub_82A4C5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stb r8,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C5FC"))) PPC_WEAK_FUNC(sub_82A4C5FC);
PPC_FUNC_IMPL(__imp__sub_82A4C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C600"))) PPC_WEAK_FUNC(sub_82A4C600);
PPC_FUNC_IMPL(__imp__sub_82A4C600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A4C604:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// bgt cr6,0x82a4c604
	if (cr6.gt) goto loc_82A4C604;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C64C"))) PPC_WEAK_FUNC(sub_82A4C64C);
PPC_FUNC_IMPL(__imp__sub_82A4C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C650"))) PPC_WEAK_FUNC(sub_82A4C650);
PPC_FUNC_IMPL(__imp__sub_82A4C650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C678"))) PPC_WEAK_FUNC(sub_82A4C678);
PPC_FUNC_IMPL(__imp__sub_82A4C678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A4C67C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,6
	ctx.r9.s64 = 6;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82A4C6A0:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a4c6a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4C6A0;
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4c67c
	if (!cr6.eq) goto loc_82A4C67C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4C6D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a4c6d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4C6D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C6E0"))) PPC_WEAK_FUNC(sub_82A4C6E0);
PPC_FUNC_IMPL(__imp__sub_82A4C6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

