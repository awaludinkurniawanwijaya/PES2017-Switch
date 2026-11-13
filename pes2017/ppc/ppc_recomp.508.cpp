#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83AB90E0"))) PPC_WEAK_FUNC(sub_83AB90E0);
PPC_FUNC_IMPL(__imp__sub_83AB90E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a79ab0
	sub_83A79AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB90E4"))) PPC_WEAK_FUNC(sub_83AB90E4);
PPC_FUNC_IMPL(__imp__sub_83AB90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB90E8"))) PPC_WEAK_FUNC(sub_83AB90E8);
PPC_FUNC_IMPL(__imp__sub_83AB90E8) {
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
	// bl 0x83aba678
	ctx.lr = 0x83AB9100;
	sub_83ABA678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a79b00
	ctx.lr = 0x83AB9108;
	sub_83A79B00(ctx, base);
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

__attribute__((alias("__imp__sub_83AB911C"))) PPC_WEAK_FUNC(sub_83AB911C);
PPC_FUNC_IMPL(__imp__sub_83AB911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9120"))) PPC_WEAK_FUNC(sub_83AB9120);
PPC_FUNC_IMPL(__imp__sub_83AB9120) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a79c78
	sub_83A79C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9124"))) PPC_WEAK_FUNC(sub_83AB9124);
PPC_FUNC_IMPL(__imp__sub_83AB9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9128"))) PPC_WEAK_FUNC(sub_83AB9128);
PPC_FUNC_IMPL(__imp__sub_83AB9128) {
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
	// bl 0x83aba678
	ctx.lr = 0x83AB9140;
	sub_83ABA678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a79b68
	ctx.lr = 0x83AB9148;
	sub_83A79B68(ctx, base);
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

__attribute__((alias("__imp__sub_83AB915C"))) PPC_WEAK_FUNC(sub_83AB915C);
PPC_FUNC_IMPL(__imp__sub_83AB915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9160"))) PPC_WEAK_FUNC(sub_83AB9160);
PPC_FUNC_IMPL(__imp__sub_83AB9160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,29776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29776);
	// b 0x83b66520
	sub_83B66520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9170"))) PPC_WEAK_FUNC(sub_83AB9170);
PPC_FUNC_IMPL(__imp__sub_83AB9170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29776);
	// b 0x83b66520
	sub_83B66520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB917C"))) PPC_WEAK_FUNC(sub_83AB917C);
PPC_FUNC_IMPL(__imp__sub_83AB917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9180"))) PPC_WEAK_FUNC(sub_83AB9180);
PPC_FUNC_IMPL(__imp__sub_83AB9180) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab9228
	if (cr6.eq) goto loc_83AB9228;
	// b 0x83ab91b8
	goto loc_83AB91B8;
loc_83AB91A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB91B4;
	sub_83A7A0D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AB91B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7a038
	ctx.lr = 0x83AB91C0;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab91a4
	if (!cr0.eq) goto loc_83AB91A4;
	// b 0x83ab91dc
	goto loc_83AB91DC;
loc_83AB91CC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB91DC;
	sub_83A7A0D8(ctx, base);
loc_83AB91DC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a038
	ctx.lr = 0x83AB91E8;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab91cc
	if (!cr0.eq) goto loc_83AB91CC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab9200
	if (cr6.eq) goto loc_83AB9200;
	// bl 0x83b66770
	ctx.lr = 0x83AB9200;
	sub_83B66770(ctx, base);
loc_83AB9200:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_83AB9228:
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

__attribute__((alias("__imp__sub_83AB923C"))) PPC_WEAK_FUNC(sub_83AB923C);
PPC_FUNC_IMPL(__imp__sub_83AB923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9240"))) PPC_WEAK_FUNC(sub_83AB9240);
PPC_FUNC_IMPL(__imp__sub_83AB9240) {
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
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83ab9378
	if (!cr6.gt) goto loc_83AB9378;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83ab9378
	if (!cr6.gt) goto loc_83AB9378;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83ab9378
	if (!cr6.gt) goto loc_83AB9378;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lbz r10,19(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lbz r7,18(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// twllei r4,0
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// twllei r5,0
	// twllei r5,0
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r8,r11,r4
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r4.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r7,r8,r5
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r5.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// andc r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// twlgei r8,-1
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// andc r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r6.u64;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// twlgei r7,-1
	// divw r8,r11,r5
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r5.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// twlgei r11,-1
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83ab9378
	if (!cr6.gt) goto loc_83AB9378;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r8,-29368
	ctx.r4.s64 = ctx.r8.s64 + -29368;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// divw r5,r10,r9
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// li r3,1
	ctx.r3.s64 = 1;
	// twllei r9,0
	// twlgei r11,-1
	// bl 0x831ea400
	ctx.lr = 0x83AB9370;
	sub_831EA400(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83AB9378:
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

__attribute__((alias("__imp__sub_83AB938C"))) PPC_WEAK_FUNC(sub_83AB938C);
PPC_FUNC_IMPL(__imp__sub_83AB938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9390"))) PPC_WEAK_FUNC(sub_83AB9390);
PPC_FUNC_IMPL(__imp__sub_83AB9390) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83ab93cc
	if (!cr6.eq) goto loc_83AB93CC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// beq cr6,0x83ab93cc
	if (cr6.eq) goto loc_83AB93CC;
	// bl 0x83b66770
	ctx.lr = 0x83AB93CC;
	sub_83B66770(ctx, base);
loc_83AB93CC:
	// stb r30,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_83AB93E8"))) PPC_WEAK_FUNC(sub_83AB93E8);
PPC_FUNC_IMPL(__imp__sub_83AB93E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB93F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83ab9450
	if (!cr0.gt) goto loc_83AB9450;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AB9418:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
	// bdnz 0x83ab9418
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB9418;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// li r31,4
	ctx.r31.s64 = 4;
loc_83AB9438:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB9448;
	sub_83A7A0D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ab9438
	if (!cr0.eq) goto loc_83AB9438;
loc_83AB9450:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB945C"))) PPC_WEAK_FUNC(sub_83AB945C);
PPC_FUNC_IMPL(__imp__sub_83AB945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9460"))) PPC_WEAK_FUNC(sub_83AB9460);
PPC_FUNC_IMPL(__imp__sub_83AB9460) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stb r5,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB946C"))) PPC_WEAK_FUNC(sub_83AB946C);
PPC_FUNC_IMPL(__imp__sub_83AB946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9470"))) PPC_WEAK_FUNC(sub_83AB9470);
PPC_FUNC_IMPL(__imp__sub_83AB9470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x83ab948c
	if (!cr6.gt) goto loc_83AB948C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_83AB948C:
	// li r9,4
	ctx.r9.s64 = 4;
	// twllei r10,0
	// divw r9,r9,r10
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subfic r10,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83ab94d0
	if (!cr6.gt) goto loc_83AB94D0;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
loc_83AB94BC:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83ab94bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB94BC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_83AB94D0:
	// subfic r10,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r11.s64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AB94E0:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83ab94e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB94E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB94F0"))) PPC_WEAK_FUNC(sub_83AB94F0);
PPC_FUNC_IMPL(__imp__sub_83AB94F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83AB94F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r16,372(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r15,380(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r22,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r22.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r22,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r22.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83ab9544
	if (!cr6.gt) goto loc_83AB9544;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83AB9544;
	sub_831CEE08(ctx, base);
loc_83AB9544:
	// lwz r18,396(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r19,388(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_83AB9558:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83b66708
	ctx.lr = 0x83AB9584;
	sub_83B66708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83ab9594
	if (cr0.eq) goto loc_83AB9594;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83ab9684
	if (!cr6.eq) goto loc_83AB9684;
loc_83AB9594:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x83ab95ac
	if (cr6.gt) goto loc_83AB95AC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83ab969c
	if (!cr6.gt) goto loc_83AB969C;
loc_83AB95AC:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x83ab9624
	if (!cr6.gt) goto loc_83AB9624;
	// cmpw cr6,r19,r10
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x83ab95c4
	if (cr6.lt) goto loc_83AB95C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83AB95C4:
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r19,r11,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r11.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r8,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// ble cr6,0x83ab9624
	if (!cr6.gt) goto loc_83AB9624;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83ab9624
	if (!cr6.gt) goto loc_83AB9624;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83ab9624
	if (!cr6.gt) goto loc_83AB9624;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r9,-4
	ctx.r28.s64 = ctx.r9.s64 + -4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83AB9604:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x83AB9614;
	sub_831CE420(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ab9604
	if (!cr0.eq) goto loc_83AB9604;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_83AB9624:
	// add r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// cmpw cr6,r26,r9
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, xer);
	// ble cr6,0x83ab9640
	if (!cr6.gt) goto loc_83AB9640;
	// subf r26,r9,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r9.s64;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// b 0x83ab9658
	goto loc_83AB9658;
loc_83AB9640:
	// subf r11,r26,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subf r26,r11,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83AB9658:
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83ab9558
	if (!cr6.gt) goto loc_83AB9558;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_83AB9670:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ab9670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB9670;
	// b 0x83ab9558
	goto loc_83AB9558;
loc_83AB9684:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29224
	ctx.r4.s64 = ctx.r11.s64 + -29224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AB9698;
	sub_831EA400(ctx, base);
	// b 0x83ab96a4
	goto loc_83AB96A4;
loc_83AB969C:
	// stw r21,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r21.u32);
	// stw r20,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r20.u32);
loc_83AB96A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB96B0"))) PPC_WEAK_FUNC(sub_83AB96B0);
PPC_FUNC_IMPL(__imp__sub_83AB96B0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a138
	ctx.lr = 0x83AB96C8;
	sub_83A7A138(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// orc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ~ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB96E4"))) PPC_WEAK_FUNC(sub_83AB96E4);
PPC_FUNC_IMPL(__imp__sub_83AB96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB96E8"))) PPC_WEAK_FUNC(sub_83AB96E8);
PPC_FUNC_IMPL(__imp__sub_83AB96E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB96F4"))) PPC_WEAK_FUNC(sub_83AB96F4);
PPC_FUNC_IMPL(__imp__sub_83AB96F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB96F8"))) PPC_WEAK_FUNC(sub_83AB96F8);
PPC_FUNC_IMPL(__imp__sub_83AB96F8) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,29772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29772);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29772, ctx.r11.u32);
	// lwz r11,29772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29772);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab974c
	if (!cr6.eq) goto loc_83AB974C;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,29776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab974c
	if (cr6.eq) goto loc_83AB974C;
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-28304
	ctx.r5.s64 = ctx.r11.s64 + -28304;
	// bl 0x83b66458
	ctx.lr = 0x83AB9744;
	sub_83B66458(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29776, ctx.r11.u32);
loc_83AB974C:
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

__attribute__((alias("__imp__sub_83AB9760"))) PPC_WEAK_FUNC(sub_83AB9760);
PPC_FUNC_IMPL(__imp__sub_83AB9760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83ab9774
	if (cr6.gt) goto loc_83AB9774;
	// li r3,96
	ctx.r3.s64 = 96;
	// blr 
	return;
loc_83AB9774:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x83ab9788
	if (cr6.gt) goto loc_83AB9788;
	// li r8,112
	ctx.r8.s64 = 112;
	// b 0x83ab9798
	goto loc_83AB9798;
loc_83AB9788:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r8,128
	ctx.r8.s64 = 128;
	// ble cr6,0x83ab9798
	if (!cr6.gt) goto loc_83AB9798;
	// li r8,224
	ctx.r8.s64 = 224;
loc_83AB9798:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r11,0
	// divw r9,r10,r7
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r7.s32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r6,r9,r11
	ctx.r6.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srawi r10,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,511
	ctx.r10.s64 = ctx.r10.s64 + 511;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// srawi r10,r10,9
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// twllei r7,0
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// andc r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// twlgei r7,-1
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twlgei r9,-1
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB9810"))) PPC_WEAK_FUNC(sub_83AB9810);
PPC_FUNC_IMPL(__imp__sub_83AB9810) {
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
	ctx.lr = 0x83AB9818;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bl 0x831ea7a0
	ctx.lr = 0x83AB9830;
	sub_831EA7A0(ctx, base);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r28,r11,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r28,88
	ctx.r25.s64 = ctx.r28.s64 + 88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,18(r28)
	PPC_STORE_U8(ctx.r28.u32 + 18, ctx.r11.u8);
	// stb r10,19(r28)
	PPC_STORE_U8(ctx.r28.u32 + 19, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab9a30
	if (!cr6.gt) goto loc_83AB9A30;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r28,28
	ctx.r30.s64 = ctx.r28.s64 + 28;
	// li r29,4
	ctx.r29.s64 = 4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r27,r30,-4
	ctx.r27.s64 = ctx.r30.s64 + -4;
	// bgt cr6,0x83ab989c
	if (cr6.gt) goto loc_83AB989C;
loc_83AB9880:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7a170
	ctx.lr = 0x83AB9888;
	sub_83A7A170(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// bne 0x83ab9880
	if (!cr0.eq) goto loc_83AB9880;
	// b 0x83ab98d8
	goto loc_83AB98D8;
loc_83AB989C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83ab98c0
	if (cr6.gt) goto loc_83AB98C0;
loc_83AB98A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7a1b0
	ctx.lr = 0x83AB98AC;
	sub_83A7A1B0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// bne 0x83ab98a4
	if (!cr0.eq) goto loc_83AB98A4;
	// b 0x83ab98d8
	goto loc_83AB98D8;
loc_83AB98C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7a1f0
	ctx.lr = 0x83AB98C8;
	sub_83A7A1F0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// addi r25,r25,56
	ctx.r25.s64 = ctx.r25.s64 + 56;
	// bne 0x83ab98c0
	if (!cr0.eq) goto loc_83AB98C0;
loc_83AB98D8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r30,-4
	ctx.r27.s64 = ctx.r30.s64 + -4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,4
	ctx.r29.s64 = 4;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r8,0
	// divw r10,r11,r8
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r7,r10,r9
	ctx.r7.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// andc r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// twlgei r8,-1
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r11,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// twlgei r10,-1
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r10,r8,r9
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twllei r9,0
	// twllei r9,0
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// twlgei r11,-1
loc_83AB9974:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// bl 0x83a7a2a0
	ctx.lr = 0x83AB9980;
	sub_83A7A2A0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83ab9974
	if (!cr0.eq) goto loc_83AB9974;
	// addi r10,r25,7
	ctx.r10.s64 = ctx.r25.s64 + 7;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,4
	ctx.r25.s64 = 4;
	// rlwinm r27,r10,0,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
loc_83AB9998:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab99c8
	if (!cr6.gt) goto loc_83AB99C8;
loc_83AB99A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a7a240
	ctx.lr = 0x83AB99B4;
	sub_83A7A240(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab99a4
	if (cr6.lt) goto loc_83AB99A4;
loc_83AB99C8:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ab9998
	if (!cr0.eq) goto loc_83AB9998;
	// srawi r11,r26,2
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// addi r8,r28,52
	ctx.r8.s64 = ctx.r28.s64 + 52;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AB99F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83ab99f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB99F4;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,29776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29776);
	// bl 0x83b664c0
	ctx.lr = 0x83AB9A14;
	sub_83B664C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab9a30
	if (!cr0.eq) goto loc_83AB9A30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,29776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29776);
	// bl 0x83b66520
	ctx.lr = 0x83AB9A28;
	sub_83B66520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab9a34
	goto loc_83AB9A34;
loc_83AB9A30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83AB9A34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9A3C"))) PPC_WEAK_FUNC(sub_83AB9A3C);
PPC_FUNC_IMPL(__imp__sub_83AB9A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9A40"))) PPC_WEAK_FUNC(sub_83AB9A40);
PPC_FUNC_IMPL(__imp__sub_83AB9A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83AB9A48;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab9a6c
	if (cr0.eq) goto loc_83AB9A6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83ab9dc8
	goto loc_83AB9DC8;
loc_83AB9A6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a038
	ctx.lr = 0x83AB9A78;
	sub_83A7A038(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne 0x83ab9ab4
	if (!cr0.eq) goto loc_83AB9AB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a038
	ctx.lr = 0x83AB9A8C;
	sub_83A7A038(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne 0x83ab9aa4
	if (!cr0.eq) goto loc_83AB9AA4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB9A98:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x83ab9dcc
	goto loc_83AB9DCC;
loc_83AB9AA4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a7a2a0
	ctx.lr = 0x83AB9AB4;
	sub_83A7A2A0(ctx, base);
loc_83AB9AB4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a038
	ctx.lr = 0x83AB9AC0;
	sub_83A7A038(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a038
	ctx.lr = 0x83AB9AD0;
	sub_83A7A038(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83ab9aec
	if (cr6.eq) goto loc_83AB9AEC;
	// lwz r4,24(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r26,20(r21)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// b 0x83ab9af4
	goto loc_83AB9AF4;
loc_83AB9AEC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
loc_83AB9AF4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83ab9b08
	if (cr6.eq) goto loc_83AB9B08;
	// lwz r6,24(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r23,20(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// b 0x83ab9b10
	goto loc_83AB9B10;
loc_83AB9B08:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
loc_83AB9B10:
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addi r30,r20,24
	ctx.r30.s64 = ctx.r20.s64 + 24;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ab9b38
	if (cr6.lt) goto loc_83AB9B38;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
loc_83AB9B38:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83ab94f0
	ctx.lr = 0x83AB9B74;
	sub_83AB94F0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq 0x83ab9bc0
	if (cr0.eq) goto loc_83AB9BC0;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// beq cr6,0x83ab9bc0
	if (cr6.eq) goto loc_83AB9BC0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a090
	ctx.lr = 0x83AB9B90;
	sub_83A7A090(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83ab9ba4
	if (cr6.eq) goto loc_83AB9BA4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a090
	ctx.lr = 0x83AB9BA4;
	sub_83A7A090(ctx, base);
loc_83AB9BA4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83ab9bb8
	if (cr6.eq) goto loc_83AB9BB8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a090
	ctx.lr = 0x83AB9BB8;
	sub_83A7A090(ctx, base);
loc_83AB9BB8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ab9a98
	goto loc_83AB9A98;
loc_83AB9BC0:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r8,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r8.u64);
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// beq cr6,0x83ab9c38
	if (cr6.eq) goto loc_83AB9C38;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83ab9c38
	if (!cr6.gt) goto loc_83AB9C38;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x83AB9C38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB9C38:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83ab9c84
	if (!cr6.gt) goto loc_83AB9C84;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// bgt cr6,0x83ab9c5c
	if (cr6.gt) goto loc_83AB9C5C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83ab9c84
	if (cr6.eq) goto loc_83AB9C84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x83ab9c80
	goto loc_83AB9C80;
loc_83AB9C5C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83ab9c70
	if (cr6.eq) goto loc_83AB9C70;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83AB9C70;
	sub_83A7A2F0(ctx, base);
loc_83AB9C70:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83ab9c84
	if (cr6.eq) goto loc_83AB9C84;
	// subf r4,r26,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83AB9C80:
	// bl 0x83a7a2f0
	ctx.lr = 0x83AB9C84;
	sub_83A7A2F0(ctx, base);
loc_83AB9C84:
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83AB9C90;
	sub_83A7A2F0(ctx, base);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83ab9cb8
	if (cr6.eq) goto loc_83AB9CB8;
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bge cr6,0x83ab9cb8
	if (!cr6.lt) goto loc_83AB9CB8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a090
	ctx.lr = 0x83AB9CB8;
	sub_83A7A090(ctx, base);
loc_83AB9CB8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83ab9cec
	if (cr6.eq) goto loc_83AB9CEC;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// blt cr6,0x83ab9ce0
	if (cr6.lt) goto loc_83AB9CE0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r30,12(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lbz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB9CDC;
	sub_83A7A0D8(ctx, base);
	// b 0x83ab9cec
	goto loc_83AB9CEC;
loc_83AB9CE0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7a090
	ctx.lr = 0x83AB9CEC;
	sub_83A7A090(ctx, base);
loc_83AB9CEC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83ab9d18
	if (cr6.eq) goto loc_83AB9D18;
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// blt cr6,0x83ab9d18
	if (cr6.lt) goto loc_83AB9D18;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lbz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB9D18;
	sub_83A7A0D8(ctx, base);
loc_83AB9D18:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83ab9d28
	if (cr0.eq) goto loc_83AB9D28;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_83AB9D28:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ab9d54
	if (cr0.eq) goto loc_83AB9D54;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x83ab9d54
	if (!cr6.eq) goto loc_83AB9D54;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x83ab9d54
	if (cr6.gt) goto loc_83AB9D54;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bgt cr6,0x83ab9d54
	if (cr6.gt) goto loc_83AB9D54;
	// li r28,2
	ctx.r28.s64 = 2;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
loc_83AB9D54:
	// subf r11,r27,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r27.s64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x83ab9d90
	if (cr6.lt) goto loc_83AB9D90;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83ab9d90
	if (!cr6.eq) goto loc_83AB9D90;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83ab9d7c
	if (cr6.lt) goto loc_83AB9D7C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x83ab9d90
	if (cr6.gt) goto loc_83AB9D90;
loc_83AB9D7C:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB9D8C;
	sub_83A7A0D8(ctx, base);
	// b 0x83ab9dc4
	goto loc_83AB9DC4;
loc_83AB9D90:
	// stw r28,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r28.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83AB9DA8;
	sub_83A7A2A0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AB9DB8;
	sub_83A7A0D8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83AB9DC4:
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
loc_83AB9DC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB9DCC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9DD4"))) PPC_WEAK_FUNC(sub_83AB9DD4);
PPC_FUNC_IMPL(__imp__sub_83AB9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9DD8"))) PPC_WEAK_FUNC(sub_83AB9DD8);
PPC_FUNC_IMPL(__imp__sub_83AB9DD8) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,29772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29772);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,29772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29772, ctx.r11.u32);
	// lwz r11,29772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29772);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab9e18
	if (!cr6.eq) goto loc_83AB9E18;
	// bl 0x83b663f8
	ctx.lr = 0x83AB9E04;
	sub_83B663F8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,29776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29776, ctx.r3.u32);
	// bne 0x83ab9e18
	if (!cr0.eq) goto loc_83AB9E18;
	// bl 0x83ab96f8
	ctx.lr = 0x83AB9E18;
	sub_83AB96F8(ctx, base);
loc_83AB9E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB9E28"))) PPC_WEAK_FUNC(sub_83AB9E28);
PPC_FUNC_IMPL(__imp__sub_83AB9E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB9E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab9ebc
	if (cr6.eq) goto loc_83AB9EBC;
	// lbz r11,50(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 50);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab9ebc
	if (cr0.eq) goto loc_83AB9EBC;
	// lbz r11,51(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 51);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ab9ebc
	if (!cr0.eq) goto loc_83AB9EBC;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x83ab9e74
	if (!cr6.lt) goto loc_83AB9E74;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// b 0x83ab9e78
	goto loc_83AB9E78;
loc_83AB9E74:
	// li r30,4
	ctx.r30.s64 = 4;
loc_83AB9E78:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83ab9ebc
	if (!cr6.gt) goto loc_83AB9EBC;
loc_83AB9E84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab9a40
	ctx.lr = 0x83AB9E90;
	sub_83AB9A40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab9eb4
	if (!cr0.eq) goto loc_83AB9EB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab9ebc
	if (!cr6.eq) goto loc_83AB9EBC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83ab9e84
	if (cr6.lt) goto loc_83AB9E84;
	// b 0x83ab9ebc
	goto loc_83AB9EBC;
loc_83AB9EB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,51(r29)
	PPC_STORE_U8(ctx.r29.u32 + 51, ctx.r11.u8);
loc_83AB9EBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9EC4"))) PPC_WEAK_FUNC(sub_83AB9EC4);
PPC_FUNC_IMPL(__imp__sub_83AB9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9EC8"))) PPC_WEAK_FUNC(sub_83AB9EC8);
PPC_FUNC_IMPL(__imp__sub_83AB9EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-25048
	ctx.r5.s64 = ctx.r11.s64 + -25048;
	// b 0x83b66598
	sub_83B66598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9EE8"))) PPC_WEAK_FUNC(sub_83AB9EE8);
PPC_FUNC_IMPL(__imp__sub_83AB9EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB9EEC"))) PPC_WEAK_FUNC(sub_83AB9EEC);
PPC_FUNC_IMPL(__imp__sub_83AB9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9EF0"))) PPC_WEAK_FUNC(sub_83AB9EF0);
PPC_FUNC_IMPL(__imp__sub_83AB9EF0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29784
	ctx.r31.s64 = ctx.r11.s64 + 29784;
	// lwz r11,29784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29784);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x83ab9f30
	if (!cr0.eq) goto loc_83AB9F30;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab9f30
	if (cr6.eq) goto loc_83AB9F30;
	// bl 0x83a75c60
	ctx.lr = 0x83AB9F28;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AB9F30:
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

__attribute__((alias("__imp__sub_83AB9F44"))) PPC_WEAK_FUNC(sub_83AB9F44);
PPC_FUNC_IMPL(__imp__sub_83AB9F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9F48"))) PPC_WEAK_FUNC(sub_83AB9F48);
PPC_FUNC_IMPL(__imp__sub_83AB9F48) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// addi r11,r31,29864
	ctx.r11.s64 = ctx.r31.s64 + 29864;
	// lwz r3,-76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -76);
	// bl 0x83a75cd8
	ctx.lr = 0x83AB9F68;
	sub_83A75CD8(ctx, base);
	// lwz r11,29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29864);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29864, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AB9F88"))) PPC_WEAK_FUNC(sub_83AB9F88);
PPC_FUNC_IMPL(__imp__sub_83AB9F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,29788
	ctx.r10.s64 = ctx.r11.s64 + 29788;
	// lwz r3,29788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29788);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// b 0x83a75d58
	sub_83A75D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB9FA4"))) PPC_WEAK_FUNC(sub_83AB9FA4);
PPC_FUNC_IMPL(__imp__sub_83AB9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9FA8"))) PPC_WEAK_FUNC(sub_83AB9FA8);
PPC_FUNC_IMPL(__imp__sub_83AB9FA8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29784
	ctx.r31.s64 = ctx.r11.s64 + 29784;
	// lwz r11,29784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29784);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab9ff0
	if (!cr6.eq) goto loc_83AB9FF0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83AB9FE0;
	sub_83A75BE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab9ff0
	if (!cr0.eq) goto loc_83AB9FF0;
	// bl 0x83ab9ef0
	ctx.lr = 0x83AB9FF0;
	sub_83AB9EF0(ctx, base);
loc_83AB9FF0:
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

__attribute__((alias("__imp__sub_83ABA004"))) PPC_WEAK_FUNC(sub_83ABA004);
PPC_FUNC_IMPL(__imp__sub_83ABA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA008"))) PPC_WEAK_FUNC(sub_83ABA008);
PPC_FUNC_IMPL(__imp__sub_83ABA008) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r31,r11,29872
	ctx.r31.s64 = ctx.r11.s64 + 29872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a75be8
	ctx.lr = 0x83ABA02C;
	sub_83A75BE8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83ABA044"))) PPC_WEAK_FUNC(sub_83ABA044);
PPC_FUNC_IMPL(__imp__sub_83ABA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA048"))) PPC_WEAK_FUNC(sub_83ABA048);
PPC_FUNC_IMPL(__imp__sub_83ABA048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29944);
	// b 0x83a75c60
	sub_83A75C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA054"))) PPC_WEAK_FUNC(sub_83ABA054);
PPC_FUNC_IMPL(__imp__sub_83ABA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA058"))) PPC_WEAK_FUNC(sub_83ABA058);
PPC_FUNC_IMPL(__imp__sub_83ABA058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABA060;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831f5cc8
	ctx.lr = 0x83ABA080;
	sub_831F5CC8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA0A4"))) PPC_WEAK_FUNC(sub_83ABA0A4);
PPC_FUNC_IMPL(__imp__sub_83ABA0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA0A8"))) PPC_WEAK_FUNC(sub_83ABA0A8);
PPC_FUNC_IMPL(__imp__sub_83ABA0A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x831fa568
	sub_831FA568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA0B0"))) PPC_WEAK_FUNC(sub_83ABA0B0);
PPC_FUNC_IMPL(__imp__sub_83ABA0B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fa620
	sub_831FA620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA0B4"))) PPC_WEAK_FUNC(sub_83ABA0B4);
PPC_FUNC_IMPL(__imp__sub_83ABA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA0B8"))) PPC_WEAK_FUNC(sub_83ABA0B8);
PPC_FUNC_IMPL(__imp__sub_83ABA0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABA0C4"))) PPC_WEAK_FUNC(sub_83ABA0C4);
PPC_FUNC_IMPL(__imp__sub_83ABA0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA0C8"))) PPC_WEAK_FUNC(sub_83ABA0C8);
PPC_FUNC_IMPL(__imp__sub_83ABA0C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aba104
	if (!cr6.eq) goto loc_83ABA104;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-28936
	ctx.r4.s64 = ctx.r11.s64 + -28936;
	// bl 0x831ea418
	ctx.lr = 0x83ABA0FC;
	sub_831EA418(ctx, base);
loc_83ABA0FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aba198
	goto loc_83ABA198;
loc_83ABA104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABA114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83aba130
	if (cr6.eq) goto loc_83ABA130;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABA12C;
	sub_831EA3F0(ctx, base);
	// b 0x83aba0fc
	goto loc_83ABA0FC;
loc_83ABA130:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83ABA13C;
	sub_83A7BDA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aba150
	if (!cr0.eq) goto loc_83ABA150;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29016
	ctx.r4.s64 = ctx.r11.s64 + -29016;
	// b 0x83aba18c
	goto loc_83ABA18C;
loc_83ABA150:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x831ecda0
	ctx.lr = 0x83ABA164;
	sub_831ECDA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aba178
	if (cr0.eq) goto loc_83ABA178;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29064
	ctx.r4.s64 = ctx.r11.s64 + -29064;
	// b 0x83aba18c
	goto loc_83ABA18C;
loc_83ABA178:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83aba198
	if (!cr6.lt) goto loc_83ABA198;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29108
	ctx.r4.s64 = ctx.r11.s64 + -29108;
loc_83ABA18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABA194;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83ABA198:
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

__attribute__((alias("__imp__sub_83ABA1B0"))) PPC_WEAK_FUNC(sub_83ABA1B0);
PPC_FUNC_IMPL(__imp__sub_83ABA1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA1C0"))) PPC_WEAK_FUNC(sub_83ABA1C0);
PPC_FUNC_IMPL(__imp__sub_83ABA1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x83a82d38
	sub_83A82D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA1DC"))) PPC_WEAK_FUNC(sub_83ABA1DC);
PPC_FUNC_IMPL(__imp__sub_83ABA1DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABA1E0"))) PPC_WEAK_FUNC(sub_83ABA1E0);
PPC_FUNC_IMPL(__imp__sub_83ABA1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABA1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831f5468
	ctx.lr = 0x83ABA200;
	sub_831F5468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f53b8
	ctx.lr = 0x83ABA208;
	sub_831F53B8(ctx, base);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fa560
	ctx.lr = 0x83ABA214;
	sub_831FA560(ctx, base);
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// lis r10,-31828
	ctx.r10.s64 = -2085879808;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,-24408
	ctx.r11.s64 = ctx.r11.s64 + -24408;
	// addi r10,r10,-24400
	ctx.r10.s64 = ctx.r10.s64 + -24400;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f5af0
	ctx.lr = 0x83ABA244;
	sub_831F5AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA24C"))) PPC_WEAK_FUNC(sub_83ABA24C);
PPC_FUNC_IMPL(__imp__sub_83ABA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA250"))) PPC_WEAK_FUNC(sub_83ABA250);
PPC_FUNC_IMPL(__imp__sub_83ABA250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABA258;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20448
	ctx.r4.s64 = ctx.r11.s64 + 20448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83aba1e0
	ctx.lr = 0x83ABA274;
	sub_83ABA1E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aba328
	if (cr0.eq) goto loc_83ABA328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fb290
	ctx.lr = 0x83ABA284;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x83aba328
	if (cr6.eq) goto loc_83ABA328;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f5410
	ctx.lr = 0x83ABA294;
	sub_831F5410(ctx, base);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83aba2b4
	if (cr6.lt) goto loc_83ABA2B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83ABA2B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aba2c0
	if (!cr6.eq) goto loc_83ABA2C0;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_83ABA2C0:
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83aba328
	if (cr6.lt) goto loc_83ABA328;
	// bl 0x831fa560
	ctx.lr = 0x83ABA2D0;
	sub_831FA560(ctx, base);
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// lis r10,-31828
	ctx.r10.s64 = -2085879808;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r11,r11,-24408
	ctx.r11.s64 = ctx.r11.s64 + -24408;
	// addi r10,r10,-24400
	ctx.r10.s64 = ctx.r10.s64 + -24400;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x82da3440
	ctx.lr = 0x83ABA2F8;
	sub_82DA3440(ctx, base);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831f4050
	ctx.lr = 0x83ABA30C;
	sub_831F4050(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f6100
	ctx.lr = 0x83ABA320;
	sub_831F6100(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aba330
	if (!cr0.eq) goto loc_83ABA330;
loc_83ABA328:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aba364
	goto loc_83ABA364;
loc_83ABA330:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,65
	ctx.r10.s64 = 65;
	// li r9,87
	ctx.r9.s64 = 87;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_83ABA364:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA36C"))) PPC_WEAK_FUNC(sub_83ABA36C);
PPC_FUNC_IMPL(__imp__sub_83ABA36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA370"))) PPC_WEAK_FUNC(sub_83ABA370);
PPC_FUNC_IMPL(__imp__sub_83ABA370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABA378;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aba3b0
	if (!cr6.eq) goto loc_83ABA3B0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28824
	ctx.r4.s64 = ctx.r11.s64 + -28824;
loc_83ABA398:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_83ABA39C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ABA3A4;
	sub_831EA418(ctx, base);
loc_83ABA3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ABA3A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83ABA3B0:
	// cmpwi cr6,r27,2048
	cr6.compare<int32_t>(ctx.r27.s32, 2048, xer);
	// bge cr6,0x83aba3c4
	if (!cr6.lt) goto loc_83ABA3C4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28836
	ctx.r4.s64 = ctx.r11.s64 + -28836;
	// b 0x83aba398
	goto loc_83ABA398;
loc_83ABA3C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aba400
	if (!cr6.eq) goto loc_83ABA400;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x83aba400
	if (!cr6.eq) goto loc_83ABA400;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83a82d10
	ctx.lr = 0x83ABA3DC;
	sub_83A82D10(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// bne 0x83aba3f8
	if (!cr0.eq) goto loc_83ABA3F8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28848
	ctx.r4.s64 = ctx.r11.s64 + -28848;
	// b 0x83aba39c
	goto loc_83ABA39C;
loc_83ABA3F8:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83aba42c
	goto loc_83ABA42C;
loc_83ABA400:
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bge cr6,0x83aba414
	if (!cr6.lt) goto loc_83ABA414;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28860
	ctx.r4.s64 = ctx.r11.s64 + -28860;
	// b 0x83aba398
	goto loc_83ABA398;
loc_83ABA414:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aba428
	if (!cr6.eq) goto loc_83ABA428;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// b 0x83aba398
	goto loc_83ABA398;
loc_83ABA428:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83ABA42C:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// ble cr6,0x83aba46c
	if (!cr6.gt) goto loc_83ABA46C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28884
	ctx.r4.s64 = ctx.r11.s64 + -28884;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ABA458;
	sub_831EA418(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83aba3a4
	if (!cr6.eq) goto loc_83ABA3A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83ABA468;
	sub_83A82D38(ctx, base);
	// b 0x83aba3a4
	goto loc_83ABA3A4;
loc_83ABA46C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// addi r11,r11,-14448
	ctx.r11.s64 = ctx.r11.s64 + -14448;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,29944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29944);
	// bl 0x83a75cd8
	ctx.lr = 0x83ABA490;
	sub_83A75CD8(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bne cr6,0x83aba4d4
	if (!cr6.eq) goto loc_83ABA4D4;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, xer);
	// bne cr6,0x83aba4d4
	if (!cr6.eq) goto loc_83ABA4D4;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// bne cr6,0x83aba4d4
	if (!cr6.eq) goto loc_83ABA4D4;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x83aba4d4
	if (!cr6.eq) goto loc_83ABA4D4;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83ABA4C4:
	// lwz r3,29944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29944);
	// bl 0x83a75d58
	ctx.lr = 0x83ABA4CC;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83aba3a8
	goto loc_83ABA3A8;
loc_83ABA4D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aba250
	ctx.lr = 0x83ABA4E0;
	sub_83ABA250(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aba504
	if (!cr0.eq) goto loc_83ABA504;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABA4F4;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abbf58
	ctx.lr = 0x83ABA4FC;
	sub_83ABBF58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83aba4c4
	goto loc_83ABA4C4;
loc_83ABA504:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x83aba4c4
	goto loc_83ABA4C4;
}

__attribute__((alias("__imp__sub_83ABA50C"))) PPC_WEAK_FUNC(sub_83ABA50C);
PPC_FUNC_IMPL(__imp__sub_83ABA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA510"))) PPC_WEAK_FUNC(sub_83ABA510);
PPC_FUNC_IMPL(__imp__sub_83ABA510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABA518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,29948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29948);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83aba568
	if (!cr6.eq) goto loc_83ABA568;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83ac1b98
	ctx.lr = 0x83ABA538;
	sub_83AC1B98(ctx, base);
	// stw r3,29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29948, ctx.r3.u32);
loc_83ABA53C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABA54C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lwz r11,29948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29948);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29948, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83ABA568:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83aba53c
	goto loc_83ABA53C;
}

__attribute__((alias("__imp__sub_83ABA570"))) PPC_WEAK_FUNC(sub_83ABA570);
PPC_FUNC_IMPL(__imp__sub_83ABA570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA584"))) PPC_WEAK_FUNC(sub_83ABA584);
PPC_FUNC_IMPL(__imp__sub_83ABA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA588"))) PPC_WEAK_FUNC(sub_83ABA588);
PPC_FUNC_IMPL(__imp__sub_83ABA588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA59C"))) PPC_WEAK_FUNC(sub_83ABA59C);
PPC_FUNC_IMPL(__imp__sub_83ABA59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA5A0"))) PPC_WEAK_FUNC(sub_83ABA5A0);
PPC_FUNC_IMPL(__imp__sub_83ABA5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA5B4"))) PPC_WEAK_FUNC(sub_83ABA5B4);
PPC_FUNC_IMPL(__imp__sub_83ABA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA5B8"))) PPC_WEAK_FUNC(sub_83ABA5B8);
PPC_FUNC_IMPL(__imp__sub_83ABA5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA5CC"))) PPC_WEAK_FUNC(sub_83ABA5CC);
PPC_FUNC_IMPL(__imp__sub_83ABA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA5D0"))) PPC_WEAK_FUNC(sub_83ABA5D0);
PPC_FUNC_IMPL(__imp__sub_83ABA5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA5E4"))) PPC_WEAK_FUNC(sub_83ABA5E4);
PPC_FUNC_IMPL(__imp__sub_83ABA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA5E8"))) PPC_WEAK_FUNC(sub_83ABA5E8);
PPC_FUNC_IMPL(__imp__sub_83ABA5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA5FC"))) PPC_WEAK_FUNC(sub_83ABA5FC);
PPC_FUNC_IMPL(__imp__sub_83ABA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA600"))) PPC_WEAK_FUNC(sub_83ABA600);
PPC_FUNC_IMPL(__imp__sub_83ABA600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA614"))) PPC_WEAK_FUNC(sub_83ABA614);
PPC_FUNC_IMPL(__imp__sub_83ABA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA618"))) PPC_WEAK_FUNC(sub_83ABA618);
PPC_FUNC_IMPL(__imp__sub_83ABA618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA62C"))) PPC_WEAK_FUNC(sub_83ABA62C);
PPC_FUNC_IMPL(__imp__sub_83ABA62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA630"))) PPC_WEAK_FUNC(sub_83ABA630);
PPC_FUNC_IMPL(__imp__sub_83ABA630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA644"))) PPC_WEAK_FUNC(sub_83ABA644);
PPC_FUNC_IMPL(__imp__sub_83ABA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA648"))) PPC_WEAK_FUNC(sub_83ABA648);
PPC_FUNC_IMPL(__imp__sub_83ABA648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA65C"))) PPC_WEAK_FUNC(sub_83ABA65C);
PPC_FUNC_IMPL(__imp__sub_83ABA65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA660"))) PPC_WEAK_FUNC(sub_83ABA660);
PPC_FUNC_IMPL(__imp__sub_83ABA660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA674"))) PPC_WEAK_FUNC(sub_83ABA674);
PPC_FUNC_IMPL(__imp__sub_83ABA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA678"))) PPC_WEAK_FUNC(sub_83ABA678);
PPC_FUNC_IMPL(__imp__sub_83ABA678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA68C"))) PPC_WEAK_FUNC(sub_83ABA68C);
PPC_FUNC_IMPL(__imp__sub_83ABA68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA690"))) PPC_WEAK_FUNC(sub_83ABA690);
PPC_FUNC_IMPL(__imp__sub_83ABA690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA6A4"))) PPC_WEAK_FUNC(sub_83ABA6A4);
PPC_FUNC_IMPL(__imp__sub_83ABA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA6A8"))) PPC_WEAK_FUNC(sub_83ABA6A8);
PPC_FUNC_IMPL(__imp__sub_83ABA6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA6BC"))) PPC_WEAK_FUNC(sub_83ABA6BC);
PPC_FUNC_IMPL(__imp__sub_83ABA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA6C0"))) PPC_WEAK_FUNC(sub_83ABA6C0);
PPC_FUNC_IMPL(__imp__sub_83ABA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29948);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABA6D4"))) PPC_WEAK_FUNC(sub_83ABA6D4);
PPC_FUNC_IMPL(__imp__sub_83ABA6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA6D8"))) PPC_WEAK_FUNC(sub_83ABA6D8);
PPC_FUNC_IMPL(__imp__sub_83ABA6D8) {
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
	// bl 0x83ac1ba8
	ctx.lr = 0x83ABA6E8;
	sub_83AC1BA8(ctx, base);
	// bl 0x83ac1b98
	ctx.lr = 0x83ABA6EC;
	sub_83AC1B98(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,29948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABA704"))) PPC_WEAK_FUNC(sub_83ABA704);
PPC_FUNC_IMPL(__imp__sub_83ABA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA708"))) PPC_WEAK_FUNC(sub_83ABA708);
PPC_FUNC_IMPL(__imp__sub_83ABA708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29948, ctx.r11.u32);
	// b 0x83ac1bf0
	sub_83AC1BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA718"))) PPC_WEAK_FUNC(sub_83ABA718);
PPC_FUNC_IMPL(__imp__sub_83ABA718) {
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
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x83aba74c
	if (!cr6.lt) goto loc_83ABA74C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aba7b0
	goto loc_83ABA7B0;
loc_83ABA74C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aba764
	if (!cr6.eq) goto loc_83ABA764;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83aba78c
	if (cr6.eq) goto loc_83ABA78C;
loc_83ABA764:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83aba784
	if (cr6.eq) goto loc_83ABA784;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x831ea658
	ctx.lr = 0x83ABA784;
	sub_831EA658(ctx, base);
loc_83ABA784:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_83ABA78C:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_83ABA7B0:
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

__attribute__((alias("__imp__sub_83ABA7C8"))) PPC_WEAK_FUNC(sub_83ABA7C8);
PPC_FUNC_IMPL(__imp__sub_83ABA7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABA7D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,28(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aba83c
	if (!cr6.gt) goto loc_83ABA83C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83ABA7F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83ABA804;
	sub_83B679B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x83b677e0
	ctx.lr = 0x83ABA824;
	sub_83B677E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// addi r29,r29,-32768
	ctx.r29.s64 = ctx.r29.s64 + -32768;
	// blt cr6,0x83aba7f8
	if (cr6.lt) goto loc_83ABA7F8;
loc_83ABA83C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA844"))) PPC_WEAK_FUNC(sub_83ABA844);
PPC_FUNC_IMPL(__imp__sub_83ABA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABA848"))) PPC_WEAK_FUNC(sub_83ABA848);
PPC_FUNC_IMPL(__imp__sub_83ABA848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABA850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aba86c
	if (!cr6.eq) goto loc_83ABA86C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aba8b0
	goto loc_83ABA8B0;
loc_83ABA86C:
	// lwz r29,28(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x83aba888
	goto loc_83ABA888;
loc_83ABA878:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83ABA888;
	sub_83B677E0(ctx, base);
loc_83ABA888:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83ABA894;
	sub_83B679B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aba878
	if (!cr0.eq) goto loc_83ABA878;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83aba888
	if (!cr0.lt) goto loc_83ABA888;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
loc_83ABA8B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABA8B8"))) PPC_WEAK_FUNC(sub_83ABA8B8);
PPC_FUNC_IMPL(__imp__sub_83ABA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aba8cc
	if (!cr6.eq) goto loc_83ABA8CC;
loc_83ABA8C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83ABA8CC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aba8c4
	if (cr6.lt) goto loc_83ABA8C4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABA8F0"))) PPC_WEAK_FUNC(sub_83ABA8F0);
PPC_FUNC_IMPL(__imp__sub_83ABA8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABA900"))) PPC_WEAK_FUNC(sub_83ABA900);
PPC_FUNC_IMPL(__imp__sub_83ABA900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfic r7,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83abaa10
	if (cr6.lt) goto loc_83ABAA10;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x83aba944
	if (!cr6.lt) goto loc_83ABA944;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x83abaa18
	if (cr6.lt) goto loc_83ABAA18;
loc_83ABA944:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abaa18
	if (cr6.eq) goto loc_83ABAA18;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x83aba9b4
	if (!cr6.gt) goto loc_83ABA9B4;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// ble cr6,0x83aba9b4
	if (!cr6.gt) goto loc_83ABA9B4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_83ABA9B4:
	// addi r8,r4,32767
	ctx.r8.s64 = ctx.r4.s64 + 32767;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// srawi r8,r8,15
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r9,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// srawi r10,r10,15
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// blr 
	return;
loc_83ABAA10:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83aba944
	if (!cr6.lt) goto loc_83ABA944;
loc_83ABAA18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABAA20"))) PPC_WEAK_FUNC(sub_83ABAA20);
PPC_FUNC_IMPL(__imp__sub_83ABAA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abaa38
	if (!cr6.eq) goto loc_83ABAA38;
loc_83ABAA30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83ABAA38:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83abaa30
	if (cr6.gt) goto loc_83ABAA30;
	// lwz r10,68(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83abaa5c
	if (!cr6.eq) goto loc_83ABAA5C;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_83ABAA5C:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bne cr6,0x83abaa7c
	if (!cr6.eq) goto loc_83ABAA7C;
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
loc_83ABAA7C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABAA90"))) PPC_WEAK_FUNC(sub_83ABAA90);
PPC_FUNC_IMPL(__imp__sub_83ABAA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABAAA0"))) PPC_WEAK_FUNC(sub_83ABAAA0);
PPC_FUNC_IMPL(__imp__sub_83ABAAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABAAB0"))) PPC_WEAK_FUNC(sub_83ABAAB0);
PPC_FUNC_IMPL(__imp__sub_83ABAAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABAAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83abaae0
	if (cr6.eq) goto loc_83ABAAE0;
loc_83ABAAD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abab94
	goto loc_83ABAB94;
loc_83ABAAE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abab20
	if (cr6.eq) goto loc_83ABAB20;
	// bl 0x839f8330
	ctx.lr = 0x83ABAAF0;
	sub_839F8330(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x839f8330
	ctx.lr = 0x83ABAAFC;
	sub_839F8330(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bne cr6,0x83abaad8
	if (!cr6.eq) goto loc_83ABAAD8;
	// lwz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831cef50
	ctx.lr = 0x83ABAB14;
	sub_831CEF50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abab38
	if (cr0.eq) goto loc_83ABAB38;
	// b 0x83abaad8
	goto loc_83ABAAD8;
loc_83ABAB20:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83abab38
	if (cr6.eq) goto loc_83ABAB38;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83abaad8
	if (!cr6.eq) goto loc_83ABAAD8;
loc_83ABAB38:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x83abaad8
	if (cr6.lt) goto loc_83ABAAD8;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpdi cr6,r9,-1
	cr6.compare<int64_t>(ctx.r9.s64, -1, xer);
	// beq cr6,0x83abab68
	if (cr6.eq) goto loc_83ABAB68;
	// lwa r8,12(r29)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 12));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// blt cr6,0x83abaad8
	if (cr6.lt) goto loc_83ABAAD8;
loc_83ABAB68:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83abaad8
	if (cr6.eq) goto loc_83ABAAD8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83abaad8
	if (cr6.lt) goto loc_83ABAAD8;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83ABAB94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABAB9C"))) PPC_WEAK_FUNC(sub_83ABAB9C);
PPC_FUNC_IMPL(__imp__sub_83ABAB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABABA0"))) PPC_WEAK_FUNC(sub_83ABABA0);
PPC_FUNC_IMPL(__imp__sub_83ABABA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABABA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83ABABBC;
	sub_83A75CD8(ctx, base);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x83ababdc
	goto loc_83ABABDC;
loc_83ABABC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abaab0
	ctx.lr = 0x83ABABD0;
	sub_83ABAAB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ababe4
	if (!cr0.eq) goto loc_83ABABE4;
	// lwz r31,68(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_83ABABDC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ababc4
	if (!cr6.eq) goto loc_83ABABC4;
loc_83ABABE4:
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x83a75d58
	ctx.lr = 0x83ABABEC;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABABF8"))) PPC_WEAK_FUNC(sub_83ABABF8);
PPC_FUNC_IMPL(__imp__sub_83ABABF8) {
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
	// addi r11,r4,32767
	ctx.r11.s64 = ctx.r4.s64 + 32767;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r10,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r4,r10,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bge cr6,0x83abac34
	if (!cr6.lt) goto loc_83ABAC34;
loc_83ABAC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abad50
	goto loc_83ABAD50;
loc_83ABAC34:
	// lwz r8,112(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// lwz r10,108(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83abac50
	if (cr6.gt) goto loc_83ABAC50;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83ABAC50:
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83abac94
	if (cr6.gt) goto loc_83ABAC94;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abac74
	if (!cr6.eq) goto loc_83ABAC74;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83abaa20
	ctx.lr = 0x83ABAC6C;
	sub_83ABAA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abac2c
	if (cr0.eq) goto loc_83ABAC2C;
loc_83ABAC74:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83aba900
	ctx.lr = 0x83ABAC7C;
	sub_83ABA900(ctx, base);
loc_83ABAC7C:
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abad34
	if (!cr6.eq) goto loc_83ABAD34;
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// b 0x83abad38
	goto loc_83ABAD38;
loc_83ABAC94:
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x83abaca4
	if (!cr6.gt) goto loc_83ABACA4;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83ABACA4:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x83abacc4
	goto loc_83ABACC4;
loc_83ABACAC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt cr6,0x83abaccc
	if (cr6.gt) goto loc_83ABACCC;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_83ABACC4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abacac
	if (!cr6.eq) goto loc_83ABACAC;
loc_83ABACCC:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83abad04
	if (cr6.lt) goto loc_83ABAD04;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bge cr6,0x83abad20
	if (!cr6.lt) goto loc_83ABAD20;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x83abac2c
	if (cr6.lt) goto loc_83ABAC2C;
	// b 0x83abad20
	goto loc_83ABAD20;
loc_83ABAD04:
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x83abad20
	if (!cr6.lt) goto loc_83ABAD20;
	// b 0x83abac2c
	goto loc_83ABAC2C;
loc_83ABAD10:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83aba900
	ctx.lr = 0x83ABAD18;
	sub_83ABA900(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83abac7c
	if (!cr0.eq) goto loc_83ABAC7C;
loc_83ABAD20:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83abaa20
	ctx.lr = 0x83ABAD28;
	sub_83ABAA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abad10
	if (!cr0.eq) goto loc_83ABAD10;
	// b 0x83abac2c
	goto loc_83ABAC2C;
loc_83ABAD34:
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
loc_83ABAD38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83ABAD50:
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

__attribute__((alias("__imp__sub_83ABAD64"))) PPC_WEAK_FUNC(sub_83ABAD64);
PPC_FUNC_IMPL(__imp__sub_83ABAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABAD68"))) PPC_WEAK_FUNC(sub_83ABAD68);
PPC_FUNC_IMPL(__imp__sub_83ABAD68) {
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
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83ABAD8C;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ababf8
	ctx.lr = 0x83ABAD98;
	sub_83ABABF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x83a75d58
	ctx.lr = 0x83ABADA4;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83ABADC0"))) PPC_WEAK_FUNC(sub_83ABADC0);
PPC_FUNC_IMPL(__imp__sub_83ABADC0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83ABADE8;
	sub_831EA7A0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83b665e8
	ctx.lr = 0x83ABAE18;
	sub_83B665E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abae38
	if (cr0.eq) goto loc_83ABAE38;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABAE30;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83abae40
	goto loc_83ABAE40;
loc_83ABAE38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_83ABAE40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_83ABAE58"))) PPC_WEAK_FUNC(sub_83ABAE58);
PPC_FUNC_IMPL(__imp__sub_83ABAE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABAE60;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_83ABAE80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abae9c
	if (cr6.eq) goto loc_83ABAE9C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x83abae80
	if (cr6.lt) goto loc_83ABAE80;
loc_83ABAE9C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x83abaebc
	if (cr6.lt) goto loc_83ABAEBC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
loc_83ABAEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABAEB4;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abaf40
	goto loc_83ABAF40;
loc_83ABAEBC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83abadc0
	ctx.lr = 0x83ABAEC8;
	sub_83ABADC0(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83ABAED4;
	sub_831EA7A0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83b66648
	ctx.lr = 0x83ABAF0C;
	sub_83B66648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abaf20
	if (cr0.eq) goto loc_83ABAF20;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28552
	ctx.r4.s64 = ctx.r11.s64 + -28552;
	// b 0x83abaeac
	goto loc_83ABAEAC;
loc_83ABAF20:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
loc_83ABAF40:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABAF48"))) PPC_WEAK_FUNC(sub_83ABAF48);
PPC_FUNC_IMPL(__imp__sub_83ABAF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABAF50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83a844e8
	ctx.lr = 0x83ABAF60;
	sub_83A844E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83abafe4
	if (cr6.eq) goto loc_83ABAFE4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83abafe4
	if (cr6.eq) goto loc_83ABAFE4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83ABAF7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x83abaf98
	if (cr6.eq) goto loc_83ABAF98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83abaf7c
	if (cr6.lt) goto loc_83ABAF7C;
loc_83ABAF98:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83abafac
	if (cr6.lt) goto loc_83ABAFAC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28444
	ctx.r4.s64 = ctx.r11.s64 + -28444;
	// b 0x83abafec
	goto loc_83ABAFEC;
loc_83ABAFAC:
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abafc8
	if (cr6.eq) goto loc_83ABAFC8;
	// bl 0x83b666f0
	ctx.lr = 0x83ABAFC4;
	sub_83B666F0(ctx, base);
	// stwx r28,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u32);
loc_83ABAFC8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abaff4
	if (cr6.eq) goto loc_83ABAFF4;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// b 0x83abaff4
	goto loc_83ABAFF4;
loc_83ABAFE4:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28312
	ctx.r4.s64 = ctx.r11.s64 + -28312;
loc_83ABAFEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABAFF4;
	sub_831EA3F0(ctx, base);
loc_83ABAFF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABAFFC"))) PPC_WEAK_FUNC(sub_83ABAFFC);
PPC_FUNC_IMPL(__imp__sub_83ABAFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB000"))) PPC_WEAK_FUNC(sub_83ABB000);
PPC_FUNC_IMPL(__imp__sub_83ABB000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABB008;
	__savegprlr_27(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83a844e8
	ctx.lr = 0x83ABB024;
	sub_83A844E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83abb050
	if (cr6.eq) goto loc_83ABB050;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83abb050
	if (cr6.eq) goto loc_83ABB050;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abae58
	ctx.lr = 0x83ABB04C;
	sub_83ABAE58(ctx, base);
	// b 0x83abb064
	goto loc_83ABB064;
loc_83ABB050:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28400
	ctx.r4.s64 = ctx.r11.s64 + -28400;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB060;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ABB064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB06C"))) PPC_WEAK_FUNC(sub_83ABB06C);
PPC_FUNC_IMPL(__imp__sub_83ABB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB070"))) PPC_WEAK_FUNC(sub_83ABB070);
PPC_FUNC_IMPL(__imp__sub_83ABB070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABB078;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r28,r11,-28228
	ctx.r28.s64 = ctx.r11.s64 + -28228;
loc_83ABB090:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83abb0c0
	if (cr6.eq) goto loc_83ABB0C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83abb0b0
	if (cr6.eq) goto loc_83ABB0B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83abaf48
	ctx.lr = 0x83ABB0AC;
	sub_83ABAF48(ctx, base);
	// b 0x83abb0c0
	goto loc_83ABB0C0;
loc_83ABB0B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ABB0C0;
	sub_831EA418(ctx, base);
loc_83ABB0C0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83abb090
	if (!cr0.eq) goto loc_83ABB090;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB0D4"))) PPC_WEAK_FUNC(sub_83ABB0D4);
PPC_FUNC_IMPL(__imp__sub_83ABB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB0D8"))) PPC_WEAK_FUNC(sub_83ABB0D8);
PPC_FUNC_IMPL(__imp__sub_83ABB0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABB0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r11,11060(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11060);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831eaf90
	ctx.lr = 0x83ABB110;
	sub_831EAF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb128
	if (!cr0.eq) goto loc_83ABB128;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addic. r31,r11,96
	xer.ca = ctx.r11.u32 > 4294967199;
	ctx.r31.s64 = ctx.r11.s64 + 96;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83abb144
	if (!cr0.lt) goto loc_83ABB144;
loc_83ABB128:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28100
	ctx.r4.s64 = ctx.r11.s64 + -28100;
loc_83ABB130:
	// li r5,-6
	ctx.r5.s64 = -6;
loc_83ABB134:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ABB13C;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb290
	goto loc_83ABB290;
loc_83ABB144:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eaf90
	ctx.lr = 0x83ABB154;
	sub_831EAF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb168
	if (cr0.eq) goto loc_83ABB168;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28112
	ctx.r4.s64 = ctx.r11.s64 + -28112;
	// b 0x83abb130
	goto loc_83ABB130;
loc_83ABB168:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83abb1a4
	if (!cr6.eq) goto loc_83ABB1A4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83abb1a4
	if (!cr6.eq) goto loc_83ABB1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83ABB180;
	sub_83A82D10(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83abb198
	if (!cr0.eq) goto loc_83ABB198;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28124
	ctx.r4.s64 = ctx.r11.s64 + -28124;
	// b 0x83abb134
	goto loc_83ABB134;
loc_83ABB198:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83abb1d8
	goto loc_83ABB1D8;
loc_83ABB1A4:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bge cr6,0x83abb1bc
	if (!cr6.lt) goto loc_83ABB1BC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-28136
	ctx.r4.s64 = ctx.r11.s64 + -28136;
	// b 0x83abb134
	goto loc_83ABB134;
loc_83ABB1BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83abb1d4
	if (!cr6.eq) goto loc_83ABB1D4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-28148
	ctx.r4.s64 = ctx.r11.s64 + -28148;
	// b 0x83abb134
	goto loc_83ABB134;
loc_83ABB1D4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83ABB1D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83ABB1E4;
	sub_831EA7A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83ABB1F4;
	sub_83A77B68(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83ABB204;
	sub_83A77B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83ABB218;
	sub_83A77B78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83ABB22C;
	sub_83A77B78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-14408
	ctx.r11.s64 = ctx.r11.s64 + -14408;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a77b78
	ctx.lr = 0x83ABB260;
	sub_83A77B78(ctx, base);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r3,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r3.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r9,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r9.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// stw r10,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x83ABB28C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ABB290:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB298"))) PPC_WEAK_FUNC(sub_83ABB298);
PPC_FUNC_IMPL(__imp__sub_83ABB298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABB2A0;
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
	// beq cr6,0x83abb2e4
	if (cr6.eq) goto loc_83ABB2E4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ee670
	ctx.lr = 0x83ABB2C4;
	sub_831EE670(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83abb2e4
	if (cr6.eq) goto loc_83ABB2E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x83abb324
	goto loc_83ABB324;
loc_83ABB2E4:
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eeb68
	ctx.lr = 0x83ABB300;
	sub_831EEB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb310
	if (cr0.eq) goto loc_83ABB310;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb328
	goto loc_83ABB328;
loc_83ABB310:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83ABB324:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ABB328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB330"))) PPC_WEAK_FUNC(sub_83ABB330);
PPC_FUNC_IMPL(__imp__sub_83ABB330) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83abb36c
	goto loc_83ABB36C;
loc_83ABB348:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83abb35c
	if (cr6.eq) goto loc_83ABB35C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83abb380
	if (!cr6.eq) goto loc_83ABB380;
loc_83ABB35C:
	// bl 0x83a81a70
	ctx.lr = 0x83ABB360;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83ABB364;
	sub_83A83250(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83ABB36C;
	sub_83A75E98(ctx, base);
loc_83ABB36C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ee338
	ctx.lr = 0x83ABB378;
	sub_831EE338(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb348
	if (cr0.eq) goto loc_83ABB348;
loc_83ABB380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec090
	ctx.lr = 0x83ABB388;
	sub_831EC090(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb3d4
	if (!cr0.eq) goto loc_83ABB3D4;
	// b 0x83abb3c0
	goto loc_83ABB3C0;
loc_83ABB394:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83abb3d4
	if (cr6.eq) goto loc_83ABB3D4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83abb3d4
	if (cr6.eq) goto loc_83ABB3D4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83abb3d4
	if (cr6.eq) goto loc_83ABB3D4;
	// bl 0x83a81a70
	ctx.lr = 0x83ABB3B4;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83ABB3B8;
	sub_83A83250(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83ABB3C0;
	sub_83A75E98(ctx, base);
loc_83ABB3C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ee338
	ctx.lr = 0x83ABB3CC;
	sub_831EE338(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb394
	if (cr0.eq) goto loc_83ABB394;
loc_83ABB3D4:
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

__attribute__((alias("__imp__sub_83ABB3E8"))) PPC_WEAK_FUNC(sub_83ABB3E8);
PPC_FUNC_IMPL(__imp__sub_83ABB3E8) {
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
	// beq cr6,0x83abb40c
	if (cr6.eq) goto loc_83ABB40C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83ABB40C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABB41C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb42c
	if (cr0.eq) goto loc_83ABB42C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb434
	goto loc_83ABB434;
loc_83ABB42C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83ABB434:
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

__attribute__((alias("__imp__sub_83ABB448"))) PPC_WEAK_FUNC(sub_83ABB448);
PPC_FUNC_IMPL(__imp__sub_83ABB448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABB450;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83abb470
	if (!cr6.eq) goto loc_83ABB470;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_83ABB470:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83abb484
	if (!cr6.eq) goto loc_83ABB484;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83ABB484:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83abb4b0
	if (!cr6.eq) goto loc_83ABB4B0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-28012
	ctx.r4.s64 = ctx.r11.s64 + -28012;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ABB4A8;
	sub_831EA418(ctx, base);
loc_83ABB4A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb51c
	goto loc_83ABB51C;
loc_83ABB4B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABB4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb4dc
	if (cr0.eq) goto loc_83ABB4DC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28044
	ctx.r4.s64 = ctx.r11.s64 + -28044;
loc_83ABB4D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB4D8;
	sub_831EA3F0(ctx, base);
	// b 0x83abb4a8
	goto loc_83ABB4A8;
loc_83ABB4DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83b687e8
	ctx.lr = 0x83ABB4F4;
	sub_83B687E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb508
	if (!cr0.eq) goto loc_83ABB508;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28088
	ctx.r4.s64 = ctx.r11.s64 + -28088;
	// b 0x83abb4d0
	goto loc_83ABB4D0;
loc_83ABB508:
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83ABB51C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB524"))) PPC_WEAK_FUNC(sub_83ABB524);
PPC_FUNC_IMPL(__imp__sub_83ABB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB528"))) PPC_WEAK_FUNC(sub_83ABB528);
PPC_FUNC_IMPL(__imp__sub_83ABB528) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abb564
	if (!cr6.eq) goto loc_83ABB564;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27920
	ctx.r4.s64 = ctx.r11.s64 + -27920;
	// bl 0x831ea418
	ctx.lr = 0x83ABB55C;
	sub_831EA418(ctx, base);
loc_83ABB55C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb5c8
	goto loc_83ABB5C8;
loc_83ABB564:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABB574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb590
	if (cr0.eq) goto loc_83ABB590;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27952
	ctx.r4.s64 = ctx.r11.s64 + -27952;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB58C;
	sub_831EA3F0(ctx, base);
	// b 0x83abb55c
	goto loc_83ABB55C;
loc_83ABB590:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83b687a8
	ctx.lr = 0x83ABB5A8;
	sub_83B687A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb5c4
	if (!cr0.eq) goto loc_83ABB5C4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-28000
	ctx.r4.s64 = ctx.r11.s64 + -28000;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB5BC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83abb5c8
	goto loc_83ABB5C8;
loc_83ABB5C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83ABB5C8:
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

__attribute__((alias("__imp__sub_83ABB5E0"))) PPC_WEAK_FUNC(sub_83ABB5E0);
PPC_FUNC_IMPL(__imp__sub_83ABB5E0) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abb614
	if (!cr6.eq) goto loc_83ABB614;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27876
	ctx.r4.s64 = ctx.r11.s64 + -27876;
	// bl 0x831ea418
	ctx.lr = 0x83ABB60C;
	sub_831EA418(ctx, base);
loc_83ABB60C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83abb648
	goto loc_83ABB648;
loc_83ABB614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABB624;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb640
	if (cr0.eq) goto loc_83ABB640;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27908
	ctx.r4.s64 = ctx.r11.s64 + -27908;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB63C;
	sub_831EA3F0(ctx, base);
	// b 0x83abb60c
	goto loc_83ABB60C;
loc_83ABB640:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
loc_83ABB648:
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

__attribute__((alias("__imp__sub_83ABB65C"))) PPC_WEAK_FUNC(sub_83ABB65C);
PPC_FUNC_IMPL(__imp__sub_83ABB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB660"))) PPC_WEAK_FUNC(sub_83ABB660);
PPC_FUNC_IMPL(__imp__sub_83ABB660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABB670"))) PPC_WEAK_FUNC(sub_83ABB670);
PPC_FUNC_IMPL(__imp__sub_83ABB670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABB678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb69c
	if (cr6.eq) goto loc_83ABB69C;
	// bl 0x831f11e8
	ctx.lr = 0x83ABB698;
	sub_831F11E8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_83ABB69C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83abb6c0
	if (cr6.eq) goto loc_83ABB6C0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb6bc
	if (cr6.eq) goto loc_83ABB6BC;
	// bl 0x83abb330
	ctx.lr = 0x83ABB6B8;
	sub_83ABB330(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_83ABB6BC:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83ABB6C0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83abb6d8
	if (cr6.eq) goto loc_83ABB6D8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb6d8
	if (cr6.eq) goto loc_83ABB6D8;
	// bl 0x83a82d38
	ctx.lr = 0x83ABB6D8;
	sub_83A82D38(ctx, base);
loc_83ABB6D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB6E0"))) PPC_WEAK_FUNC(sub_83ABB6E0);
PPC_FUNC_IMPL(__imp__sub_83ABB6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABB6E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ee338
	ctx.lr = 0x83ABB700;
	sub_831EE338(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,4
	ctx.r27.s64 = 4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83abb720
	if (!cr6.eq) goto loc_83ABB720;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ebed0
	ctx.lr = 0x83ABB71C;
	sub_831EBED0(ctx, base);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_83ABB720:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83abb734
	if (cr6.eq) goto loc_83ABB734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abb7c8
	goto loc_83ABB7C8;
loc_83ABB734:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ecad8
	ctx.lr = 0x83ABB744;
	sub_831ECAD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb780
	if (cr0.eq) goto loc_83ABB780;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83abb774
	if (cr6.eq) goto loc_83ABB774;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb770
	if (cr6.eq) goto loc_83ABB770;
	// bl 0x83abb330
	ctx.lr = 0x83ABB76C;
	sub_83ABB330(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_83ABB770:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83ABB774:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// b 0x83abb7c8
	goto loc_83ABB7C8;
loc_83ABB780:
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f14b0
	ctx.lr = 0x83ABB78C;
	sub_831F14B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb774
	if (!cr0.eq) goto loc_83ABB774;
	// lwa r7,8(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 8));
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831f1010
	ctx.lr = 0x83ABB7B4;
	sub_831F1010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb774
	if (!cr0.eq) goto loc_83ABB774;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83ABB7C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABB7D0"))) PPC_WEAK_FUNC(sub_83ABB7D0);
PPC_FUNC_IMPL(__imp__sub_83ABB7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABB7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83abb85c
	if (cr6.lt) goto loc_83ABB85C;
	// beq cr6,0x83abb808
	if (cr6.eq) goto loc_83ABB808;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83abb864
	if (!cr6.lt) goto loc_83ABB864;
	// bl 0x83abb6e0
	ctx.lr = 0x83ABB800;
	sub_83ABB6E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb864
	if (cr0.eq) goto loc_83ABB864;
loc_83ABB808:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x831effb8
	ctx.lr = 0x83ABB814;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83abb844
	if (cr6.lt) goto loc_83ABB844;
	// beq cr6,0x83abb9dc
	if (cr6.eq) goto loc_83ABB9DC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83abb880
	if (cr6.lt) goto loc_83ABB880;
	// bne cr6,0x83abb864
	if (!cr6.eq) goto loc_83ABB864;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb844
	if (cr6.eq) goto loc_83ABB844;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x831f0140
	ctx.lr = 0x83ABB844;
	sub_831F0140(ctx, base);
loc_83ABB844:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb85c
	if (cr6.eq) goto loc_83ABB85C;
	// bl 0x831f11e8
	ctx.lr = 0x83ABB854;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83ABB85C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83ABB860:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83ABB864:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_83ABB878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83ABB880:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83b68348
	ctx.lr = 0x83ABB88C;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abb938
	if (!cr0.eq) goto loc_83ABB938;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x83abb8c8
	if (!cr6.eq) goto loc_83ABB8C8;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,80
	cr6.compare<uint32_t>(ctx.r10.u32, 80, xer);
	// bne cr6,0x83abb8c8
	if (!cr6.eq) goto loc_83ABB8C8;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,75
	cr6.compare<uint32_t>(ctx.r10.u32, 75, xer);
	// bne cr6,0x83abb8c8
	if (!cr6.eq) goto loc_83ABB8C8;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x83abb8dc
	if (cr6.eq) goto loc_83ABB8DC;
loc_83ABB8C8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27864
	ctx.r4.s64 = ctx.r11.s64 + -27864;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABB8D8;
	sub_831EA3F0(ctx, base);
	// b 0x83abb85c
	goto loc_83ABB85C;
loc_83ABB8DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83abb670
	ctx.lr = 0x83ABB8F4;
	sub_83ABB670(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ace8c8
	ctx.lr = 0x83ABB908;
	sub_83ACE8C8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83abb91c
	if (!cr0.eq) goto loc_83ABB91C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83abb878
	goto loc_83ABB878;
loc_83ABB91C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ace9e8
	ctx.lr = 0x83ABB924;
	sub_83ACE9E8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x83abb878
	goto loc_83ABB878;
loc_83ABB938:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83b686c8
	ctx.lr = 0x83ABB944;
	sub_83B686C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bge cr6,0x83abb9bc
	if (!cr6.lt) goto loc_83ABB9BC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83abb85c
	if (cr6.eq) goto loc_83ABB85C;
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83a82d38
	ctx.lr = 0x83ABB978;
	sub_83A82D38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83a82d10
	ctx.lr = 0x83ABB984;
	sub_83A82D10(ctx, base);
	// addi r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 3;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwa r7,8(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 8));
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831f1010
	ctx.lr = 0x83ABB9B0;
	sub_831F1010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abb864
	if (cr0.eq) goto loc_83ABB864;
	// b 0x83abb85c
	goto loc_83ABB85C;
loc_83ABB9BC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abb9d4
	if (cr6.eq) goto loc_83ABB9D4;
	// bl 0x831f11e8
	ctx.lr = 0x83ABB9CC;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83ABB9D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83abb860
	goto loc_83ABB860;
loc_83ABB9DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83abb860
	goto loc_83ABB860;
}

__attribute__((alias("__imp__sub_83ABB9E4"))) PPC_WEAK_FUNC(sub_83ABB9E4);
PPC_FUNC_IMPL(__imp__sub_83ABB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABB9E8"))) PPC_WEAK_FUNC(sub_83ABB9E8);
PPC_FUNC_IMPL(__imp__sub_83ABB9E8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83abb7d0
	ctx.lr = 0x83ABBA00;
	sub_83ABB7D0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83abba20
	if (cr6.eq) goto loc_83ABBA20;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27832
	ctx.r4.s64 = ctx.r11.s64 + -27832;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABBA18;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abba30
	goto loc_83ABBA30;
loc_83ABBA20:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83b68748
	ctx.lr = 0x83ABBA2C;
	sub_83B68748(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_83ABBA30:
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

__attribute__((alias("__imp__sub_83ABBA44"))) PPC_WEAK_FUNC(sub_83ABBA44);
PPC_FUNC_IMPL(__imp__sub_83ABBA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABBA48"))) PPC_WEAK_FUNC(sub_83ABBA48);
PPC_FUNC_IMPL(__imp__sub_83ABBA48) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abba70
	if (cr6.eq) goto loc_83ABBA70;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83abb670
	ctx.lr = 0x83ABBA70;
	sub_83ABB670(ctx, base);
loc_83ABBA70:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83abba84
	if (!cr6.eq) goto loc_83ABBA84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83a82d38
	ctx.lr = 0x83ABBA84;
	sub_83A82D38(ctx, base);
loc_83ABBA84:
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

__attribute__((alias("__imp__sub_83ABBA98"))) PPC_WEAK_FUNC(sub_83ABBA98);
PPC_FUNC_IMPL(__imp__sub_83ABBA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABBAA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x83b68348
	ctx.lr = 0x83ABBAC0;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abbad4
	if (!cr0.eq) goto loc_83ABBAD4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-27668
	ctx.r4.s64 = ctx.r11.s64 + -27668;
	// b 0x83abbbd4
	goto loc_83ABBBD4;
loc_83ABBAD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b686c8
	ctx.lr = 0x83ABBAE0;
	sub_83B686C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83abbbcc
	if (cr0.lt) goto loc_83ABBBCC;
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x83abbbcc
	if (cr6.lt) goto loc_83ABBBCC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83abb0d8
	ctx.lr = 0x83ABBB00;
	sub_83ABB0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83abbb14
	if (!cr0.eq) goto loc_83ABBB14;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-27716
	ctx.r4.s64 = ctx.r11.s64 + -27716;
	// b 0x83abbbd4
	goto loc_83ABBBD4;
loc_83ABBB14:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// beq cr6,0x83abbb38
	if (cr6.eq) goto loc_83ABBB38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ea6f8
	ctx.lr = 0x83ABBB34;
	sub_831EA6F8(ctx, base);
	// b 0x83abbb3c
	goto loc_83ABBB3C;
loc_83ABBB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ABBB3C:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abb298
	ctx.lr = 0x83ABBB50;
	sub_83ABB298(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abbb64
	if (!cr0.eq) goto loc_83ABBB64;
loc_83ABBB58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83ABBB5C:
	// bl 0x83abba48
	ctx.lr = 0x83ABBB60;
	sub_83ABBA48(ctx, base);
	// b 0x83abbbdc
	goto loc_83ABBBDC;
loc_83ABBB64:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x83abbb8c
	goto loc_83ABBB8C;
loc_83ABBB70:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83abbb58
	if (cr6.eq) goto loc_83ABBB58;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83abbba8
	if (cr6.eq) goto loc_83ABBBA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83ABBB8C;
	sub_83A75E98(ctx, base);
loc_83ABBB8C:
	// bl 0x831eed28
	ctx.lr = 0x83ABBB90;
	sub_831EED28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ee338
	ctx.lr = 0x83ABBB9C;
	sub_831EE338(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abbb70
	if (cr0.eq) goto loc_83ABBB70;
	// b 0x83abbb58
	goto loc_83ABBB58;
loc_83ABBBA8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ecad8
	ctx.lr = 0x83ABBBB4;
	sub_831ECAD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x83abbb5c
	if (!cr0.eq) goto loc_83ABBB5C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x83abbbe0
	goto loc_83ABBBE0;
loc_83ABBBCC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-27784
	ctx.r4.s64 = ctx.r11.s64 + -27784;
loc_83ABBBD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABBBDC;
	sub_831EA3F0(ctx, base);
loc_83ABBBDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ABBBE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABBBE8"))) PPC_WEAK_FUNC(sub_83ABBBE8);
PPC_FUNC_IMPL(__imp__sub_83ABBBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83ABBBF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831eef28
	ctx.lr = 0x83ABBC0C;
	sub_831EEF28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83abbc30
	if (cr0.eq) goto loc_83ABBC30;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-27632
	ctx.r4.s64 = ctx.r11.s64 + -27632;
	// bl 0x831ea418
	ctx.lr = 0x83ABBC28;
	sub_831EA418(ctx, base);
loc_83ABBC28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abbd38
	goto loc_83ABBD38;
loc_83ABBC30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,96
	ctx.r31.s64 = ctx.r10.s64 + 96;
	// lhz r11,11060(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11060);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831eaf90
	ctx.lr = 0x83ABBC50;
	sub_831EAF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abbc28
	if (!cr0.eq) goto loc_83ABBC28;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add. r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x83abbc28
	if (cr0.lt) goto loc_83ABBC28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83abb0d8
	ctx.lr = 0x83ABBC74;
	sub_83ABB0D8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x83abbc28
	if (cr0.eq) goto loc_83ABBC28;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abbcc8
	if (!cr6.eq) goto loc_83ABBCC8;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x83abbcb4
	if (cr6.gt) goto loc_83ABBCB4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83ABBCB4:
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83abbcfc
	goto loc_83ABBCFC;
loc_83ABBCC8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83a82d10
	ctx.lr = 0x83ABBCD0;
	sub_83A82D10(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83abbce8
	if (!cr0.eq) goto loc_83ABBCE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83abbf58
	ctx.lr = 0x83ABBCE4;
	sub_83ABBF58(ctx, base);
	// b 0x83abbc28
	goto loc_83ABBC28;
loc_83ABBCE8:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83ABBCFC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ea658
	ctx.lr = 0x83ABBD0C;
	sub_831EA658(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abb298
	ctx.lr = 0x83ABBD1C;
	sub_83ABB298(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x83abbd30
	if (!cr0.eq) goto loc_83ABBD30;
	// bl 0x83abba48
	ctx.lr = 0x83ABBD2C;
	sub_83ABBA48(ctx, base);
	// b 0x83abbc28
	goto loc_83ABBC28;
loc_83ABBD30:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83ABBD38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABBD40"))) PPC_WEAK_FUNC(sub_83ABBD40);
PPC_FUNC_IMPL(__imp__sub_83ABBD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ABBD48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831ea6f8
	ctx.lr = 0x83ABBD64;
	sub_831EA6F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83abbd88
	if (!cr0.lt) goto loc_83ABBD88;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-27616
	ctx.r4.s64 = ctx.r11.s64 + -27616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83ABBD80;
	sub_831EA400(ctx, base);
loc_83ABBD80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abbde8
	goto loc_83ABBDE8;
loc_83ABBD88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831eefa8
	ctx.lr = 0x83ABBD94;
	sub_831EEFA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abbdd4
	if (cr0.eq) goto loc_83ABBDD4;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ef2d0
	ctx.lr = 0x83ABBDB0;
	sub_831EF2D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abbd80
	if (!cr0.eq) goto loc_83ABBD80;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x83ace730
	ctx.lr = 0x83ABBDD0;
	sub_83ACE730(ctx, base);
	// b 0x83abbde8
	goto loc_83ABBDE8;
loc_83ABBDD4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83abbbe8
	ctx.lr = 0x83ABBDE8;
	sub_83ABBBE8(ctx, base);
loc_83ABBDE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABBDF0"))) PPC_WEAK_FUNC(sub_83ABBDF0);
PPC_FUNC_IMPL(__imp__sub_83ABBDF0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abbe1c
	if (!cr6.eq) goto loc_83ABBE1C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27476
	ctx.r4.s64 = ctx.r11.s64 + -27476;
	// bl 0x831ea418
	ctx.lr = 0x83ABBE14;
	sub_831EA418(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83abbe2c
	goto loc_83ABBE2C;
loc_83ABBE1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABBE2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABBE2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABBE3C"))) PPC_WEAK_FUNC(sub_83ABBE3C);
PPC_FUNC_IMPL(__imp__sub_83ABBE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABBE40"))) PPC_WEAK_FUNC(sub_83ABBE40);
PPC_FUNC_IMPL(__imp__sub_83ABBE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abbe50
	if (!cr6.eq) goto loc_83ABBE50;
loc_83ABBE48:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83ABBE50:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abbe48
	if (cr6.eq) goto loc_83ABBE48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ABBE6C"))) PPC_WEAK_FUNC(sub_83ABBE6C);
PPC_FUNC_IMPL(__imp__sub_83ABBE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABBE70"))) PPC_WEAK_FUNC(sub_83ABBE70);
PPC_FUNC_IMPL(__imp__sub_83ABBE70) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abbe9c
	if (!cr6.eq) goto loc_83ABBE9C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// bl 0x831ea418
	ctx.lr = 0x83ABBE94;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abbeac
	goto loc_83ABBEAC;
loc_83ABBE9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABBEAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABBEAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABBEBC"))) PPC_WEAK_FUNC(sub_83ABBEBC);
PPC_FUNC_IMPL(__imp__sub_83ABBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABBEC0"))) PPC_WEAK_FUNC(sub_83ABBEC0);
PPC_FUNC_IMPL(__imp__sub_83ABBEC0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abbf08
	if (!cr6.eq) goto loc_83ABBF08;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27452
	ctx.r4.s64 = ctx.r11.s64 + -27452;
	// bl 0x831ea418
	ctx.lr = 0x83ABBEF0;
	sub_831EA418(ctx, base);
loc_83ABBEF0:
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
loc_83ABBF08:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83ABBF0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ace480
	ctx.lr = 0x83ABBF18;
	sub_83ACE480(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abbef0
	if (cr0.eq) goto loc_83ABBEF0;
	// bl 0x83a81a70
	ctx.lr = 0x83ABBF24;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83ABBF28;
	sub_83A83250(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83ABBF30;
	sub_83A75E98(ctx, base);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// divwu r11,r31,r11
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2999
	cr6.compare<uint32_t>(ctx.r11.u32, 2999, xer);
	// bne cr6,0x83abbf50
	if (!cr6.eq) goto loc_83ABBF50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ace4e0
	ctx.lr = 0x83ABBF50;
	sub_83ACE4E0(ctx, base);
loc_83ABBF50:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83abbf0c
	goto loc_83ABBF0C;
}

__attribute__((alias("__imp__sub_83ABBF58"))) PPC_WEAK_FUNC(sub_83ABBF58);
PPC_FUNC_IMPL(__imp__sub_83ABBF58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abbf88
	if (!cr6.eq) goto loc_83ABBF88;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-27440
	ctx.r4.s64 = ctx.r11.s64 + -27440;
	// bl 0x831ea418
	ctx.lr = 0x83ABBF84;
	sub_831EA418(ctx, base);
	// b 0x83abbfa4
	goto loc_83ABBFA4;
loc_83ABBF88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abbec0
	ctx.lr = 0x83ABBF90;
	sub_83ABBEC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABBFA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABBFA4:
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

__attribute__((alias("__imp__sub_83ABBFB8"))) PPC_WEAK_FUNC(sub_83ABBFB8);
PPC_FUNC_IMPL(__imp__sub_83ABBFB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABBFC4"))) PPC_WEAK_FUNC(sub_83ABBFC4);
PPC_FUNC_IMPL(__imp__sub_83ABBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABBFC8"))) PPC_WEAK_FUNC(sub_83ABBFC8);
PPC_FUNC_IMPL(__imp__sub_83ABBFC8) {
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
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,29952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29952);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABBFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83abc008
	if (cr6.eq) goto loc_83ABC008;
	// bl 0x83aa6138
	ctx.lr = 0x83ABC008;
	sub_83AA6138(ctx, base);
loc_83ABC008:
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

__attribute__((alias("__imp__sub_83ABC01C"))) PPC_WEAK_FUNC(sub_83ABC01C);
PPC_FUNC_IMPL(__imp__sub_83ABC01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABC020"))) PPC_WEAK_FUNC(sub_83ABC020);
PPC_FUNC_IMPL(__imp__sub_83ABC020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83ABC028;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83abc068
	if (!cr6.gt) goto loc_83ABC068;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27280
	ctx.r4.s64 = ctx.r11.s64 + -27280;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABC064;
	sub_831EA3F0(ctx, base);
	// b 0x83abc218
	goto loc_83ABC218;
loc_83ABC068:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ea798
	ctx.lr = 0x83ABC078;
	sub_831EA798(ctx, base);
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// beq cr6,0x83abc0bc
	if (cr6.eq) goto loc_83ABC0BC;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// beq cr6,0x83abc0b0
	if (cr6.eq) goto loc_83ABC0B0;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// beq cr6,0x83abc0a4
	if (cr6.eq) goto loc_83ABC0A4;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// bne cr6,0x83abc0f8
	if (!cr6.eq) goto loc_83ABC0F8;
	// lhz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x83abc0f8
	goto loc_83ABC0F8;
loc_83ABC0A4:
	// lhz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x83abc0f8
	goto loc_83ABC0F8;
loc_83ABC0B0:
	// lhz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x83abc0f8
	goto loc_83ABC0F8;
loc_83ABC0BC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,424
	ctx.r3.s64 = ctx.r11.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83ABC0D0;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abc0f0
	if (!cr0.eq) goto loc_83ABC0F0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// bl 0x831ea400
	ctx.lr = 0x83ABC0EC;
	sub_831EA400(ctx, base);
	// b 0x83abc218
	goto loc_83ABC218;
loc_83ABC0F0:
	// lhz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83ABC0F8:
	// bl 0x83aa54b8
	ctx.lr = 0x83ABC0FC;
	sub_83AA54B8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABC10C;
	sub_83ABBFC8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa3c50
	ctx.lr = 0x83ABC118;
	sub_83AA3C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abc218
	if (cr0.eq) goto loc_83ABC218;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bne cr6,0x83abc14c
	if (!cr6.eq) goto loc_83ABC14C;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea778
	ctx.lr = 0x83ABC140;
	sub_831EA778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x83abc188
	goto loc_83ABC188;
loc_83ABC14C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,424
	ctx.r3.s64 = ctx.r11.s64 + 424;
	// bl 0x83ac4a58
	ctx.lr = 0x83ABC164;
	sub_83AC4A58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
loc_83ABC188:
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// lwz r11,26596(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abc1fc
	if (cr6.eq) goto loc_83ABC1FC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABC1A8;
	sub_83AA3CE8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831ea778
	ctx.lr = 0x83ABC1C4;
	sub_831EA778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABC1CC;
	sub_83AA3CE8(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831ea778
	ctx.lr = 0x83ABC1E4;
	sub_831EA778(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,26600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26600);
	// lwz r11,26596(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26596);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABC1FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABC1FC:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// stb r25,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r25.u8);
	// bl 0x83abf778
	ctx.lr = 0x83ABC218;
	sub_83ABF778(ctx, base);
loc_83ABC218:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABC220"))) PPC_WEAK_FUNC(sub_83ABC220);
PPC_FUNC_IMPL(__imp__sub_83ABC220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABC228;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r4,48(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5690
	ctx.lr = 0x83ABC250;
	sub_83AC5690(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abc298
	if (cr6.eq) goto loc_83ABC298;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83abc284
	if (cr6.lt) goto loc_83ABC284;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27240
	ctx.r4.s64 = ctx.r11.s64 + -27240;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABC27C;
	sub_831EA3F0(ctx, base);
loc_83ABC27C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abc2d8
	goto loc_83ABC2D8;
loc_83ABC284:
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abc298
	if (cr6.eq) goto loc_83ABC298;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83abc2d4
	goto loc_83ABC2D4;
loc_83ABC298:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x83abc2bc
	if (!cr6.eq) goto loc_83ABC2BC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83abc2d4
	if (cr6.lt) goto loc_83ABC2D4;
loc_83ABC2BC:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// beq cr6,0x83abc2d4
	if (cr6.eq) goto loc_83ABC2D4;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83abc27c
	if (!cr0.gt) goto loc_83ABC27C;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x83abc27c
	if (cr6.gt) goto loc_83ABC27C;
loc_83ABC2D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ABC2D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABC2E0"))) PPC_WEAK_FUNC(sub_83ABC2E0);
PPC_FUNC_IMPL(__imp__sub_83ABC2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83ABC2E8;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83abc314
	if (cr6.eq) goto loc_83ABC314;
	// clrlwi r26,r6,16
	ctx.r26.u64 = ctx.r6.u32 & 0xFFFF;
loc_83ABC314:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83abc538
	if (cr6.eq) goto loc_83ABC538;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// addi r25,r6,-1
	ctx.r25.s64 = ctx.r6.s64 + -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// addi r20,r11,-27148
	ctx.r20.s64 = ctx.r11.s64 + -27148;
	// addi r19,r10,-27196
	ctx.r19.s64 = ctx.r10.s64 + -27196;
loc_83ABC344:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq cr6,0x83abc41c
	if (cr6.eq) goto loc_83ABC41C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,1596
	ctx.r3.s64 = ctx.r11.s64 + 1596;
	// bl 0x83ac65e0
	ctx.lr = 0x83ABC360;
	sub_83AC65E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8f478
	ctx.lr = 0x83ABC368;
	sub_83A8F478(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x83abc538
	if (cr6.eq) goto loc_83ABC538;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83a8f4d0
	ctx.lr = 0x83ABC37C;
	sub_83A8F4D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abc538
	if (cr0.eq) goto loc_83ABC538;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aaf768
	ctx.lr = 0x83ABC39C;
	sub_83AAF768(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abc414
	if (!cr6.eq) goto loc_83ABC414;
	// lhz r4,134(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83abc4d4
	if (cr6.eq) goto loc_83ABC4D4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a99898
	ctx.lr = 0x83ABC3BC;
	sub_83A99898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abc518
	if (cr0.eq) goto loc_83ABC518;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abc3e4
	if (!cr0.eq) goto loc_83ABC3E4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83ABC3D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83ABC3E0;
	sub_83AB31C0(ctx, base);
	// b 0x83abc518
	goto loc_83ABC518;
loc_83ABC3E4:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r28,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r28.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r28,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r28.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x83abc518
	goto loc_83ABC518;
loc_83ABC414:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x83abc50c
	goto loc_83ABC50C;
loc_83ABC41C:
	// lbzu r10,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,1404
	ctx.r3.s64 = ctx.r11.s64 + 1404;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r9,-1(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac6138
	ctx.lr = 0x83ABC440;
	sub_83AC6138(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x83aaf768
	ctx.lr = 0x83ABC450;
	sub_83AAF768(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abc508
	if (!cr6.eq) goto loc_83ABC508;
	// lhz r4,134(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83abc4b8
	if (cr6.eq) goto loc_83ABC4B8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,56(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x83a99898
	ctx.lr = 0x83ABC470;
	sub_83A99898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abc518
	if (cr0.eq) goto loc_83ABC518;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abc48c
	if (!cr0.eq) goto loc_83ABC48C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x83abc3d4
	goto loc_83ABC3D4;
loc_83ABC48C:
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stb r28,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r28.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r28,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r28.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// sthu r30,16(r31)
	ea = 16 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r31.u32 = ea;
	// b 0x83abc518
	goto loc_83ABC518;
loc_83ABC4B8:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83abc4d4
	if (!cr6.eq) goto loc_83ABC4D4;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83abc518
	if (cr6.eq) goto loc_83ABC518;
	// sth r30,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r30.u16);
	// b 0x83abc518
	goto loc_83ABC518;
loc_83ABC4D4:
	// lbz r11,129(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abc518
	if (cr0.eq) goto loc_83ABC518;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bl 0x83aad908
	ctx.lr = 0x83ABC4EC;
	sub_83AAD908(ctx, base);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// bne cr6,0x83abc518
	if (!cr6.eq) goto loc_83ABC518;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab1ef0
	ctx.lr = 0x83ABC504;
	sub_83AB1EF0(ctx, base);
	// b 0x83abc518
	goto loc_83ABC518;
loc_83ABC508:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_83ABC50C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83ABC518;
	sub_831EA400(ctx, base);
loc_83ABC518:
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x83abc344
	if (cr6.lt) goto loc_83ABC344;
loc_83ABC538:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABC540"))) PPC_WEAK_FUNC(sub_83ABC540);
PPC_FUNC_IMPL(__imp__sub_83ABC540) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x83abc584
	if (cr6.eq) goto loc_83ABC584;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x83abc658
	if (!cr6.eq) goto loc_83ABC658;
	// extsh. r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bge 0x83abc594
	if (!cr0.lt) goto loc_83ABC594;
loc_83ABC584:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abc644
	if (cr6.eq) goto loc_83ABC644;
loc_83ABC58C:
	// li r5,100
	ctx.r5.s64 = 100;
	// b 0x83abc64c
	goto loc_83ABC64C;
loc_83ABC594:
	// clrlwi. r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x83abc618
	if (!cr0.gt) goto loc_83ABC618;
loc_83ABC5A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abc608
	if (cr6.eq) goto loc_83ABC608;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x83abc5e4
	if (cr6.eq) goto loc_83ABC5E4;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi. r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// beq 0x83abc5e4
	if (cr0.eq) goto loc_83ABC5E4;
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
loc_83ABC5E4:
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x83abc5a0
	if (cr6.lt) goto loc_83ABC5A0;
	// b 0x83abc618
	goto loc_83ABC618;
loc_83ABC608:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r5,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
loc_83ABC618:
	// clrlwi. r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83abc62c
	if (cr0.eq) goto loc_83ABC62C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x83abc64c
	if (!cr6.lt) goto loc_83ABC64C;
loc_83ABC62C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83abc58c
	if (cr6.eq) goto loc_83ABC58C;
	// clrlwi. r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83abc58c
	if (!cr0.eq) goto loc_83ABC58C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// b 0x83abc64c
	goto loc_83ABC64C;
loc_83ABC644:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_83ABC64C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa1ee0
	ctx.lr = 0x83ABC654;
	sub_83AA1EE0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_83ABC658:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83ABC674"))) PPC_WEAK_FUNC(sub_83ABC674);
PPC_FUNC_IMPL(__imp__sub_83ABC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABC678"))) PPC_WEAK_FUNC(sub_83ABC678);
PPC_FUNC_IMPL(__imp__sub_83ABC678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83ABC680;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// clrlwi. r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq 0x83abc92c
	if (cr0.eq) goto loc_83ABC92C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83abc92c
	if (!cr6.gt) goto loc_83ABC92C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x83abc724
	if (!cr6.gt) goto loc_83ABC724;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bne cr6,0x83abc92c
	if (!cr6.eq) goto loc_83ABC92C;
	// bl 0x83aa4f98
	ctx.lr = 0x83ABC6C8;
	sub_83AA4F98(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// ld r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x83abc70c
	if (cr6.lt) goto loc_83ABC70C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addis r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -65536;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
loc_83ABC70C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// ble cr6,0x83abc92c
	if (!cr6.gt) goto loc_83ABC92C;
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// b 0x83abc92c
	goto loc_83ABC92C;
loc_83ABC724:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// blt cr6,0x83abc734
	if (cr6.lt) goto loc_83ABC734;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83ABC734:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x83abc754
	if (cr6.lt) goto loc_83ABC754;
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
loc_83ABC754:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x83abc92c
	if (!cr6.eq) goto loc_83ABC92C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// bne cr6,0x83abc7a8
	if (!cr6.eq) goto loc_83ABC7A8;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r5
	ctx.r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83abc7cc
	goto loc_83ABC7CC;
loc_83ABC7A8:
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r6,r5
	ctx.r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbz r10,-1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83ABC7CC:
	// bne cr6,0x83abc7dc
	if (!cr6.eq) goto loc_83ABC7DC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea778
	ctx.lr = 0x83ABC7DC;
	sub_831EA778(ctx, base);
loc_83ABC7DC:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abc928
	if (!cr0.eq) goto loc_83ABC928;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bne cr6,0x83abc850
	if (!cr6.eq) goto loc_83ABC850;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83abc890
	if (cr6.eq) goto loc_83ABC890;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83ABC7FC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83aa1ee0
	ctx.lr = 0x83ABC814;
	sub_83AA1EE0(ctx, base);
	// rlwinm r11,r3,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhzu r10,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blt cr6,0x83abc7fc
	if (cr6.lt) goto loc_83ABC7FC;
	// b 0x83abc890
	goto loc_83ABC890;
loc_83ABC850:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83abc890
	if (cr6.eq) goto loc_83ABC890;
loc_83ABC858:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x83aa1ee0
	ctx.lr = 0x83ABC86C;
	sub_83AA1EE0(ctx, base);
	// rlwinm r11,r3,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lhzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r31.u32);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// sthx r10,r28,r31
	PPC_STORE_U16(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u16);
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// blt cr6,0x83abc858
	if (cr6.lt) goto loc_83ABC858;
loc_83ABC890:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// ble cr6,0x83abc928
	if (!cr6.gt) goto loc_83ABC928;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bne cr6,0x83abc8c8
	if (!cr6.eq) goto loc_83ABC8C8;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_83ABC8C8:
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x83abc928
	if (!cr6.eq) goto loc_83ABC928;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa1ee0
	ctx.lr = 0x83ABC8E0;
	sub_83AA1EE0(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bne cr6,0x83abc918
	if (!cr6.eq) goto loc_83ABC918;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x83abc928
	goto loc_83ABC928;
loc_83ABC918:
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_83ABC928:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_83ABC92C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABC934"))) PPC_WEAK_FUNC(sub_83ABC934);
PPC_FUNC_IMPL(__imp__sub_83ABC934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABC938"))) PPC_WEAK_FUNC(sub_83ABC938);
PPC_FUNC_IMPL(__imp__sub_83ABC938) {
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
	ctx.lr = 0x83ABC940;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r5,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r6.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r7,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r21,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r21.u16);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// bl 0x83a9bd48
	ctx.lr = 0x83ABC9A0;
	sub_83A9BD48(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x83abc9dc
	if (cr6.eq) goto loc_83ABC9DC;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r14,r15,48
	ctx.r14.s64 = ctx.r15.s64 + 48;
	// lhz r27,32(r15)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r15.u32 + 32);
	// lbz r25,42(r15)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r15.u32 + 42);
	// lwz r24,4(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lhz r23,36(r15)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r15.u32 + 36);
	// lhz r22,34(r15)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r15.u32 + 34);
	// lwz r16,12(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// lwz r17,8(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x83abca28
	goto loc_83ABCA28;
loc_83ABC9DC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 38);
	// lhz r27,40(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// extsh. r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// blt 0x83abca00
	if (cr0.lt) goto loc_83ABCA00;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_83ABCA00:
	// sth r11,278(r26)
	PPC_STORE_U16(ctx.r26.u32 + 278, ctx.r11.u16);
	// addi r14,r30,50
	ctx.r14.s64 = ctx.r30.s64 + 50;
	// lbz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// lwz r24,8(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r23,46(r30)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// lhz r22,44(r30)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// lwz r21,4(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r20,44(r29)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// lwz r16,16(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r17,12(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_83ABCA28:
	// addi r30,r26,108
	ctx.r30.s64 = ctx.r26.s64 + 108;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r29,r26,106
	ctx.r29.s64 = ctx.r26.s64 + 106;
	// addi r28,r26,62
	ctx.r28.s64 = ctx.r26.s64 + 62;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83ABCA58;
	sub_83ABC2E0(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83ABCA7C;
	sub_83ABC2E0(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r6,r22,16
	ctx.r6.u64 = ctx.r22.u32 & 0xFFFF;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83ABCAA0;
	sub_83ABC2E0(ctx, base);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r5,0(r14)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83abc540
	ctx.lr = 0x83ABCABC;
	sub_83ABC540(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc678
	ctx.lr = 0x83ABCAE8;
	sub_83ABC678(ctx, base);
	// stw r16,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r16.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi. r27,r27,16
	ctx.r27.u64 = ctx.r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// li r19,2
	ctx.r19.s64 = 2;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lbz r20,108(r31)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// beq 0x83abd074
	if (cr0.eq) goto loc_83ABD074;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f29,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f29.f64 = double(temp.f32);
	// b 0x83abcb1c
	goto loc_83ABCB1C;
loc_83ABCB18:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83ABCB1C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r16,8
	cr6.compare<uint32_t>(ctx.r16.u32, 8, xer);
	// bgt cr6,0x83abcda4
	if (cr6.gt) goto loc_83ABCDA4;
	// mtctr r16
	ctr.u64 = ctx.r16.u64;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x83abcd24
	if (cr6.eq) goto loc_83ABCD24;
	// bdz 0x83abcb5c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCB5C;
	// bdz 0x83abcb54
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCB54;
	// bdz 0x83abcb94
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCB94;
	// bdz 0x83abcbdc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCBDC;
	// bdz 0x83abcc7c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCC7C;
	// bdz 0x83abcb5c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCB5C;
	// bdz 0x83abccb8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83ABCCB8;
	// b 0x83abcd30
	goto loc_83ABCD30;
loc_83ABCB54:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// rotlwi r29,r22,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
loc_83ABCB5C:
	// lha r11,0(r14)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r14.u32 + 0));
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83abcda4
	if (!cr6.eq) goto loc_83ABCDA4;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_83ABCB74:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// beq cr6,0x83abcc5c
	if (cr6.eq) goto loc_83ABCC5C;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// bl 0x83ac5668
	ctx.lr = 0x83ABCB90;
	sub_83AC5668(ctx, base);
	// b 0x83abcda4
	goto loc_83ABCDA4;
loc_83ABCB94:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83abcbb8
	if (cr6.eq) goto loc_83ABCBB8;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// lbz r10,-2(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + -2);
	// lbz r9,-1(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + -1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x83abcbc4
	goto loc_83ABCBC4;
loc_83ABCBB8:
	// li r10,100
	ctx.r10.s64 = 100;
	// twllei r27,0
	// divw r10,r10,r27
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
loc_83ABCBC4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r21,16
	ctx.r10.u64 = ctx.r21.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// b 0x83abccb0
	goto loc_83ABCCB0;
loc_83ABCBDC:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abcbf8
	if (cr0.eq) goto loc_83ABCBF8;
	// lha r10,0(r14)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r14.u32 + 0));
	// clrlwi r9,r25,16
	ctx.r9.u64 = ctx.r25.u32 & 0xFFFF;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x83abcc00
	if (!cr6.eq) goto loc_83ABCC00;
loc_83ABCBF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abcc6c
	if (!cr6.eq) goto loc_83ABCC6C;
loc_83ABCC00:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83abcc28
	if (cr6.eq) goto loc_83ABCC28;
	// lbz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lbz r9,1(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83abcc30
	goto loc_83ABCC30;
loc_83ABCC28:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83ABCC30:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r21,16
	ctx.r10.u64 = ctx.r21.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83abcc6c
	if (cr6.lt) goto loc_83ABCC6C;
	// sth r25,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r25.u16);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// ble cr6,0x83abcda4
	if (!cr6.gt) goto loc_83ABCDA4;
	// b 0x83abcb74
	goto loc_83ABCB74;
loc_83ABCC5C:
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x83ac5b50
	ctx.lr = 0x83ABCC68;
	sub_83AC5B50(ctx, base);
	// b 0x83abcda4
	goto loc_83ABCDA4;
loc_83ABCC6C:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83abcda4
	if (cr6.eq) goto loc_83ABCDA4;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// b 0x83abcda4
	goto loc_83ABCDA4;
loc_83ABCC7C:
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,-2(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + -2);
	// lbz r10,-1(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f13,f29,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
loc_83ABCCB0:
	// blt cr6,0x83abcda4
	if (cr6.lt) goto loc_83ABCDA4;
	// b 0x83abcd24
	goto loc_83ABCD24;
loc_83ABCCB8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abcda4
	if (cr6.eq) goto loc_83ABCDA4;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// lbz r11,-2(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + -2);
	// lbz r10,-1(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// bl 0x83ac6758
	ctx.lr = 0x83ABCCF0;
	sub_83AC6758(ctx, base);
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x83a8cc50
	ctx.lr = 0x83ABCD04;
	sub_83A8CC50(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// bl 0x83aaddb8
	ctx.lr = 0x83ABCD1C;
	sub_83AADDB8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abcda4
	if (!cr6.eq) goto loc_83ABCDA4;
loc_83ABCD24:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// b 0x83abcda4
	goto loc_83ABCDA4;
loc_83ABCD30:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ab64b0
	ctx.lr = 0x83ABCD38;
	sub_83AB64B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83abcda0
	if (cr0.eq) goto loc_83ABCDA0;
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 128));
	// lha r10,130(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 130));
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83abcd6c
	if (cr6.eq) goto loc_83ABCD6C;
	// blt cr6,0x83abcd6c
	if (cr6.lt) goto loc_83ABCD6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83ABCD6C:
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lbz r10,123(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 123);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83abcda4
	if (cr6.eq) goto loc_83ABCDA4;
	// sth r11,38(r9)
	PPC_STORE_U16(ctx.r9.u32 + 38, ctx.r11.u16);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stb r24,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r24.u8);
	// b 0x83abcda4
	goto loc_83ABCDA4;
loc_83ABCDA0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83ABCDA4:
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lbz r8,1(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x83abd054
	if (cr6.eq) goto loc_83ABD054;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5f10
	ctx.lr = 0x83ABCDF4;
	sub_83AC5F10(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5f10
	ctx.lr = 0x83ABCE0C;
	sub_83AC5F10(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABCE20;
	sub_83AC6090(ctx, base);
	// bl 0x83aa51e8
	ctx.lr = 0x83ABCE24;
	sub_83AA51E8(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq 0x83abd044
	if (cr0.eq) goto loc_83ABD044;
	// sth r25,208(r18)
	PPC_STORE_U16(ctx.r18.u32 + 208, ctx.r25.u16);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// sth r10,210(r18)
	PPC_STORE_U16(ctx.r18.u32 + 210, ctx.r10.u16);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r10.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,24(r18)
	PPC_STORE_U32(ctx.r18.u32 + 24, ctx.r10.u32);
	// stw r11,64(r18)
	PPC_STORE_U32(ctx.r18.u32 + 64, ctx.r11.u32);
	// stb r20,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r20.u8);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83abce7c
	if (!cr6.gt) goto loc_83ABCE7C;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// stb r24,17(r18)
	PPC_STORE_U8(ctx.r18.u32 + 17, ctx.r24.u8);
	// stw r19,60(r18)
	PPC_STORE_U32(ctx.r18.u32 + 60, ctx.r19.u32);
	// stw r11,28(r18)
	PPC_STORE_U32(ctx.r18.u32 + 28, ctx.r11.u32);
	// b 0x83abce88
	goto loc_83ABCE88;
loc_83ABCE7C:
	// stw r23,28(r18)
	PPC_STORE_U32(ctx.r18.u32 + 28, ctx.r23.u32);
	// stb r23,17(r18)
	PPC_STORE_U8(ctx.r18.u32 + 17, ctx.r23.u8);
	// stw r23,60(r18)
	PPC_STORE_U32(ctx.r18.u32 + 60, ctx.r23.u32);
loc_83ABCE88:
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// bl 0x83aadb98
	ctx.lr = 0x83ABCE94;
	sub_83AADB98(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abcf04
	if (cr6.eq) goto loc_83ABCF04;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABCEB0;
	sub_83AC6090(ctx, base);
	// stw r18,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r18.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// bl 0x83ab3320
	ctx.lr = 0x83ABCEDC;
	sub_83AB3320(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abcef8
	if (!cr6.eq) goto loc_83ABCEF8;
loc_83ABCEE8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa6a18
	ctx.lr = 0x83ABCEF4;
	sub_83AA6A18(ctx, base);
	// b 0x83abd054
	goto loc_83ABD054;
loc_83ABCEF8:
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// b 0x83abcf24
	goto loc_83ABCF24;
loc_83ABCF04:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83ABCF14;
	sub_83AB1EF0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83ABCF24;
	sub_83AB1EF0(ctx, base);
loc_83ABCF24:
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abcf80
	if (cr6.eq) goto loc_83ABCF80;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABCF40;
	sub_83AC6090(ctx, base);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r18,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r18.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x83ab3320
	ctx.lr = 0x83ABCF6C;
	sub_83AB3320(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83abcee8
	if (cr6.eq) goto loc_83ABCEE8;
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
loc_83ABCF80:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// stb r11,226(r18)
	PPC_STORE_U8(ctx.r18.u32 + 226, ctx.r11.u8);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abcf9c
	if (!cr6.eq) goto loc_83ABCF9C;
	// stw r18,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r18.u32);
	// b 0x83abcfa8
	goto loc_83ABCFA8;
loc_83ABCF9C:
	// stw r23,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r23.u32);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
loc_83ABCFA8:
	// lwz r11,244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	// addi r30,r18,80
	ctx.r30.s64 = ctx.r18.s64 + 80;
	// stw r18,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r18.u32);
	// addi r29,r18,227
	ctx.r29.s64 = ctx.r18.s64 + 227;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r28,r18,10
	ctx.r28.s64 = ctx.r18.s64 + 10;
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 244, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,76(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// bl 0x83abc2e0
	ctx.lr = 0x83ABCFEC;
	sub_83ABC2E0(ctx, base);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd020
	if (cr6.eq) goto loc_83ABD020;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,76(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83ABD020;
	sub_83ABC2E0(ctx, base);
loc_83ABD020:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lhz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lhz r5,194(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 194);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r4,76(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83ABD044;
	sub_83ABC2E0(ctx, base);
loc_83ABD044:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// ble cr6,0x83abd054
	if (!cr6.gt) goto loc_83ABD054;
	// cmpwi cr6,r16,6
	cr6.compare<int32_t>(ctx.r16.s32, 6, xer);
	// ble cr6,0x83abd11c
	if (!cr6.gt) goto loc_83ABD11C;
loc_83ABD054:
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// blt cr6,0x83abcb18
	if (cr6.lt) goto loc_83ABCB18;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abd118
	if (!cr6.eq) goto loc_83ABD118;
loc_83ABD074:
	// cmpwi cr6,r16,7
	cr6.compare<int32_t>(ctx.r16.s32, 7, xer);
	// beq cr6,0x83abd0b8
	if (cr6.eq) goto loc_83ABD0B8;
	// cmpwi cr6,r16,8
	cr6.compare<int32_t>(ctx.r16.s32, 8, xer);
	// bne cr6,0x83abd0c8
	if (!cr6.eq) goto loc_83ABD0C8;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x83abd0c8
	if (cr6.eq) goto loc_83ABD0C8;
	// lwz r3,76(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// bl 0x83aaddb0
	ctx.lr = 0x83ABD094;
	sub_83AADDB0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83aade18
	ctx.lr = 0x83ABD0A4;
	sub_83AADE18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abd118
	if (!cr0.eq) goto loc_83ABD118;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-27000
	ctx.r4.s64 = ctx.r11.s64 + -27000;
	// b 0x83abd0c0
	goto loc_83ABD0C0;
loc_83ABD0B8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-27096
	ctx.r4.s64 = ctx.r11.s64 + -27096;
loc_83ABD0C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABD0C8;
	sub_831EA3F0(ctx, base);
loc_83ABD0C8:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,26604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd118
	if (cr6.eq) goto loc_83ABD118;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831ea798
	ctx.lr = 0x83ABD0E8;
	sub_831EA798(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABD0FC;
	sub_83AA3CE8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r10,26604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83ABD118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABD118:
	// stb r20,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r20.u8);
loc_83ABD11C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_83ABD130"))) PPC_WEAK_FUNC(sub_83ABD130);
PPC_FUNC_IMPL(__imp__sub_83ABD130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABD138;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABD15C;
	sub_83AA5C90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abd404
	if (cr0.eq) goto loc_83ABD404;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd18c
	if (!cr6.eq) goto loc_83ABD18C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa5328
	ctx.lr = 0x83ABD178;
	sub_83AA5328(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83abd18c
	if (!cr0.eq) goto loc_83ABD18C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABD188;
	sub_83AA6E90(ctx, base);
	// b 0x83abd404
	goto loc_83ABD404;
loc_83ABD18C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd238
	if (cr6.eq) goto loc_83ABD238;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABD19C;
	sub_83AA52A0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne 0x83abd1c0
	if (!cr0.eq) goto loc_83ABD1C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABD1AC;
	sub_83AA6E90(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83abd404
	if (cr6.eq) goto loc_83ABD404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83ABD1BC;
	sub_83AA7070(ctx, base);
	// b 0x83abd404
	goto loc_83ABD404;
loc_83ABD1C0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd228
	if (cr6.eq) goto loc_83ABD228;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd1fc
	if (cr6.eq) goto loc_83ABD1FC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83abd1ec
	if (!cr6.eq) goto loc_83ABD1EC;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_83ABD1EC:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83ABD1FC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r11.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83aadb98
	ctx.lr = 0x83ABD21C;
	sub_83AADB98(ctx, base);
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x83abd230
	goto loc_83ABD230;
loc_83ABD228:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_83ABD230:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83aadb98
	ctx.lr = 0x83ABD238;
	sub_83AADB98(ctx, base);
loc_83ABD238:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abd270
	if (!cr6.eq) goto loc_83ABD270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa53b8
	ctx.lr = 0x83ABD254;
	sub_83AA53B8(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abd2cc
	if (!cr6.eq) goto loc_83ABD2CC;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x83abd2dc
	goto loc_83ABD2DC;
loc_83ABD270:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abd2b4
	if (cr6.eq) goto loc_83ABD2B4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abd294
	if (!cr6.eq) goto loc_83ABD294;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x83abd2a4
	goto loc_83ABD2A4;
loc_83ABD294:
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABD2A4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83abd2e8
	goto loc_83ABD2E8;
loc_83ABD2B4:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abd2cc
	if (!cr6.eq) goto loc_83ABD2CC;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x83abd2dc
	goto loc_83ABD2DC;
loc_83ABD2CC:
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABD2DC:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_83ABD2E8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// beq cr6,0x83abd330
	if (cr6.eq) goto loc_83ABD330;
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// bl 0x83aa51a8
	ctx.lr = 0x83ABD330;
	sub_83AA51A8(ctx, base);
loc_83ABD330:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd348
	if (cr6.eq) goto loc_83ABD348;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stb r10,67(r30)
	PPC_STORE_U8(ctx.r30.u32 + 67, ctx.r10.u8);
loc_83ABD348:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r11.u16);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// sth r28,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r28.u16);
	// bl 0x83aa51e8
	ctx.lr = 0x83ABD364;
	sub_83AA51E8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83abd404
	if (cr0.eq) goto loc_83ABD404;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r28,208(r29)
	PPC_STORE_U16(ctx.r29.u32 + 208, ctx.r28.u16);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// stw r28,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r28.u32);
	// sth r10,210(r29)
	PPC_STORE_U16(ctx.r29.u32 + 210, ctx.r10.u16);
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// stb r28,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r28.u8);
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
	// stw r28,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r28.u32);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83aadb98
	ctx.lr = 0x83ABD3B0;
	sub_83AADB98(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd3c4
	if (!cr6.eq) goto loc_83ABD3C4;
	// stw r29,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r29.u32);
	// b 0x83abd3d0
	goto loc_83ABD3D0;
loc_83ABD3C4:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_83ABD3D0:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
	// stb r27,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r27.u8);
	// bl 0x83abf778
	ctx.lr = 0x83ABD3F0;
	sub_83ABF778(ctx, base);
	// bl 0x83aa54b8
	ctx.lr = 0x83ABD3F4;
	sub_83AA54B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABD404;
	sub_83ABBFC8(ctx, base);
loc_83ABD404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABD40C"))) PPC_WEAK_FUNC(sub_83ABD40C);
PPC_FUNC_IMPL(__imp__sub_83ABD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABD410"))) PPC_WEAK_FUNC(sub_83ABD410);
PPC_FUNC_IMPL(__imp__sub_83ABD410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83ABD418;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r21,64(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi. r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// beq 0x83abd760
	if (cr0.eq) goto loc_83ABD760;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ea798
	ctx.lr = 0x83ABD458;
	sub_831EA798(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea798
	ctx.lr = 0x83ABD468;
	sub_831EA798(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r24,r11,r31
	ctx.r24.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bge cr6,0x83abd760
	if (!cr6.lt) goto loc_83ABD760;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r19,2
	ctx.r19.s64 = 2;
loc_83ABD488:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,1916
	ctx.r3.s64 = ctx.r11.s64 + 1916;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac6858
	ctx.lr = 0x83ABD49C;
	sub_83AC6858(ctx, base);
	// lbz r11,182(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83abd4d4
	if (cr6.eq) goto loc_83ABD4D4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83abd594
	if (!cr6.eq) goto loc_83ABD594;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83abd4c4
	if (cr6.eq) goto loc_83ABD4C4;
	// bl 0x83a8d380
	ctx.lr = 0x83ABD4C0;
	sub_83A8D380(ctx, base);
	// b 0x83abd4cc
	goto loc_83ABD4CC;
loc_83ABD4C4:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x83a8d410
	ctx.lr = 0x83ABD4CC;
	sub_83A8D410(ctx, base);
loc_83ABD4CC:
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// b 0x83abd594
	goto loc_83ABD594;
loc_83ABD4D4:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x83a96040
	ctx.lr = 0x83ABD4DC;
	sub_83A96040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83abd6fc
	if (cr0.eq) goto loc_83ABD6FC;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83abd528
	if (cr6.eq) goto loc_83ABD528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x83ABD4FC;
	sub_825832E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a98698
	ctx.lr = 0x83ABD508;
	sub_83A98698(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abd528
	if (!cr6.eq) goto loc_83ABD528;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abd714
	if (cr6.eq) goto loc_83ABD714;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// b 0x83abd568
	goto loc_83ABD568;
loc_83ABD528:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd570
	if (cr6.eq) goto loc_83ABD570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x83ABD540;
	sub_825832E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a98700
	ctx.lr = 0x83ABD54C;
	sub_83A98700(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abd570
	if (!cr6.eq) goto loc_83ABD570;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abd728
	if (cr6.eq) goto loc_83ABD728;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
loc_83ABD568:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_83ABD570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83ABD578;
	sub_825832E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83ABD58C;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abd760
	if (cr0.eq) goto loc_83ABD760;
loc_83ABD594:
	// bl 0x83aa5098
	ctx.lr = 0x83ABD598;
	sub_83AA5098(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abd760
	if (cr0.eq) goto loc_83ABD760;
	// lwz r29,72(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83abd5f0
	if (!cr6.eq) goto loc_83ABD5F0;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd5c8
	if (!cr6.eq) goto loc_83ABD5C8;
	// bl 0x83aa5328
	ctx.lr = 0x83ABD5C0;
	sub_83AA5328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83abd5e4
	goto loc_83ABD5E4;
loc_83ABD5C8:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83aa5328
	ctx.lr = 0x83ABD5D0;
	sub_83AA5328(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83abd73c
	if (cr0.eq) goto loc_83ABD73C;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,68(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// bl 0x83aade90
	ctx.lr = 0x83ABD5E4;
	sub_83AADE90(ctx, base);
loc_83ABD5E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83abd73c
	if (cr6.eq) goto loc_83ABD73C;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_83ABD5F0:
	// bl 0x83aa51e8
	ctx.lr = 0x83ABD5F4;
	sub_83AA51E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83abd748
	if (cr0.eq) goto loc_83ABD748;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x83abd610
	if (cr6.eq) goto loc_83ABD610;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa53b8
	ctx.lr = 0x83ABD60C;
	sub_83AA53B8(ctx, base);
	// stw r29,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r29.u32);
loc_83ABD610:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABD624;
	sub_83AC6090(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// lbz r11,183(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// stb r11,54(r30)
	PPC_STORE_U8(ctx.r30.u32 + 54, ctx.r11.u8);
	// lhz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// sth r11,56(r30)
	PPC_STORE_U16(ctx.r30.u32 + 56, ctx.r11.u16);
	// lbz r11,182(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83abd680
	if (cr6.eq) goto loc_83ABD680;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83abd6b4
	if (!cr6.eq) goto loc_83ABD6B4;
	// stb r19,55(r30)
	PPC_STORE_U8(ctx.r30.u32 + 55, ctx.r19.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,48(r30)
	PPC_STORE_U16(ctx.r30.u32 + 48, ctx.r11.u16);
	// b 0x83abd6b4
	goto loc_83ABD6B4;
loc_83ABD680:
	// stw r25,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r25.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stb r20,55(r30)
	PPC_STORE_U8(ctx.r30.u32 + 55, ctx.r20.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r4,12
	ctx.r4.s64 = 12;
	// sth r11,48(r30)
	PPC_STORE_U16(ctx.r30.u32 + 48, ctx.r11.u16);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sth r11,50(r30)
	PPC_STORE_U16(ctx.r30.u32 + 50, ctx.r11.u16);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// sth r11,52(r30)
	PPC_STORE_U16(ctx.r30.u32 + 52, ctx.r11.u16);
	// bl 0x831ea778
	ctx.lr = 0x83ABD6B4;
	sub_831EA778(ctx, base);
loc_83ABD6B4:
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd6c8
	if (!cr6.eq) goto loc_83ABD6C8;
	// stw r31,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r31.u32);
	// b 0x83abd6d4
	goto loc_83ABD6D4;
loc_83ABD6C8:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83ABD6D4:
	// lwz r11,244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// stw r31,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r31.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r11,244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 244, ctx.r11.u32);
	// cmpw cr6,r4,r24
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r24.s32, xer);
	// blt cr6,0x83abd488
	if (cr6.lt) goto loc_83ABD488;
	// b 0x83abd760
	goto loc_83ABD760;
loc_83ABD6FC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26840
	ctx.r4.s64 = ctx.r11.s64 + -26840;
loc_83ABD70C:
	// bl 0x831ea400
	ctx.lr = 0x83ABD710;
	sub_831EA400(ctx, base);
	// b 0x83abd760
	goto loc_83ABD760;
loc_83ABD714:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-26876
	ctx.r4.s64 = ctx.r11.s64 + -26876;
	// b 0x83abd70c
	goto loc_83ABD70C;
loc_83ABD728:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-26908
	ctx.r4.s64 = ctx.r11.s64 + -26908;
	// b 0x83abd70c
	goto loc_83ABD70C;
loc_83ABD73C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa5d60
	ctx.lr = 0x83ABD744;
	sub_83AA5D60(ctx, base);
	// b 0x83abd760
	goto loc_83ABD760;
loc_83ABD748:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa5d60
	ctx.lr = 0x83ABD750;
	sub_83AA5D60(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x83abd760
	if (cr6.eq) goto loc_83ABD760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83ABD760;
	sub_83AA7070(ctx, base);
loc_83ABD760:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABD768"))) PPC_WEAK_FUNC(sub_83ABD768);
PPC_FUNC_IMPL(__imp__sub_83ABD768) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd7d0
	if (!cr6.eq) goto loc_83ABD7D0;
	// bl 0x83ab59c0
	ctx.lr = 0x83ABD794;
	sub_83AB59C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83abd7cc
	if (cr0.eq) goto loc_83ABD7CC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd7b0
	if (!cr6.eq) goto loc_83ABD7B0;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x83abd7b4
	goto loc_83ABD7B4;
loc_83ABD7B0:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83ABD7B4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x83abd7d0
	goto loc_83ABD7D0;
loc_83ABD7CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83ABD7D0:
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

__attribute__((alias("__imp__sub_83ABD7EC"))) PPC_WEAK_FUNC(sub_83ABD7EC);
PPC_FUNC_IMPL(__imp__sub_83ABD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABD7F0"))) PPC_WEAK_FUNC(sub_83ABD7F0);
PPC_FUNC_IMPL(__imp__sub_83ABD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abd8c8
	if (cr6.eq) goto loc_83ABD8C8;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83abd8c8
	if (!cr6.eq) goto loc_83ABD8C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x83abd84c
	if (!cr6.eq) goto loc_83ABD84C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x83abd878
	if (!cr6.eq) goto loc_83ABD878;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x83abd878
	goto loc_83ABD878;
loc_83ABD83C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x83abd858
	if (cr6.eq) goto loc_83ABD858;
loc_83ABD84C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne 0x83abd83c
	if (!cr0.eq) goto loc_83ABD83C;
loc_83ABD858:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83abd878
	if (!cr6.eq) goto loc_83ABD878;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83ABD878:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abd8c4
	if (cr6.eq) goto loc_83ABD8C4;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd8a8
	if (!cr6.eq) goto loc_83ABD8A8;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x83abd8b4
	goto loc_83ABD8B4;
loc_83ABD8A8:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83ABD8B4:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_83ABD8C4:
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_83ABD8C8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x83abd914
	if (!cr6.eq) goto loc_83ABD914;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x83abd940
	if (!cr6.eq) goto loc_83ABD940;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x83abd940
	goto loc_83ABD940;
loc_83ABD904:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x83abd920
	if (cr6.eq) goto loc_83ABD920;
loc_83ABD914:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne 0x83abd904
	if (!cr0.eq) goto loc_83ABD904;
loc_83ABD920:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83abd940
	if (!cr6.eq) goto loc_83ABD940;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83ABD940:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abd98c
	if (cr6.eq) goto loc_83ABD98C;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abd970
	if (!cr6.eq) goto loc_83ABD970;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x83abd97c
	goto loc_83ABD97C;
loc_83ABD970:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83ABD97C:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_83ABD98C:
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABD994"))) PPC_WEAK_FUNC(sub_83ABD994);
PPC_FUNC_IMPL(__imp__sub_83ABD994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABD998"))) PPC_WEAK_FUNC(sub_83ABD998);
PPC_FUNC_IMPL(__imp__sub_83ABD998) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83ABD9C0:
	// addi r11,r31,99
	ctx.r11.s64 = ctx.r31.s64 + 99;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ab1ef0
	ctx.lr = 0x83ABD9D4;
	sub_83AB1EF0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x83abd9c0
	if (cr6.lt) goto loc_83ABD9C0;
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

__attribute__((alias("__imp__sub_83ABDA00"))) PPC_WEAK_FUNC(sub_83ABDA00);
PPC_FUNC_IMPL(__imp__sub_83ABDA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABDA08;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,26604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abda68
	if (cr6.eq) goto loc_83ABDA68;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea798
	ctx.lr = 0x83ABDA34;
	sub_831EA798(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABDA4C;
	sub_83AA3CE8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,26604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83ABDA68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABDA68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABDA70;
	sub_83AA3CE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a9d720
	ctx.lr = 0x83ABDA78;
	sub_83A9D720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83aa3bd0
	ctx.lr = 0x83ABDA88;
	sub_83AA3BD0(ctx, base);
	// bl 0x83a81ee8
	ctx.lr = 0x83ABDA8C;
	sub_83A81EE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83abdb24
	if (cr0.eq) goto loc_83ABDB24;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83ABDA9C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abdb18
	if (cr6.eq) goto loc_83ABDB18;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83abdb00
	if (!cr6.eq) goto loc_83ABDB00;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83a9ce00
	ctx.lr = 0x83ABDAC0;
	sub_83A9CE00(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83abdaf0
	if (cr0.eq) goto loc_83ABDAF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83ABDAD0;
	sub_83815CB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83abdaf4
	if (cr0.eq) goto loc_83ABDAF4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7c20
	ctx.lr = 0x83ABDAEC;
	sub_83AB7C20(ctx, base);
	// b 0x83abdb00
	goto loc_83ABDB00;
loc_83ABDAF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_83ABDAF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83a89b00
	ctx.lr = 0x83ABDB00;
	sub_83A89B00(ctx, base);
loc_83ABDB00:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83a87790
	ctx.lr = 0x83ABDB0C;
	sub_83A87790(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
loc_83ABDB18:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x83abda9c
	if (!cr0.eq) goto loc_83ABDA9C;
loc_83ABDB24:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abdb3c
	if (!cr6.eq) goto loc_83ABDB3C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abdb44
	if (cr6.eq) goto loc_83ABDB44;
loc_83ABDB3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abd7f0
	ctx.lr = 0x83ABDB44;
	sub_83ABD7F0(ctx, base);
loc_83ABDB44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABDB4C"))) PPC_WEAK_FUNC(sub_83ABDB4C);
PPC_FUNC_IMPL(__imp__sub_83ABDB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABDB50"))) PPC_WEAK_FUNC(sub_83ABDB50);
PPC_FUNC_IMPL(__imp__sub_83ABDB50) {
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
	// lha r11,14(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 14));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83abdb80
	if (!cr6.gt) goto loc_83ABDB80;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26800
	ctx.r4.s64 = ctx.r11.s64 + -26800;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABDB80;
	sub_831EA3F0(ctx, base);
loc_83ABDB80:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abdba4
	if (cr6.eq) goto loc_83ABDBA4;
	// bl 0x83a99278
	ctx.lr = 0x83ABDB90;
	sub_83A99278(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a992d0
	ctx.lr = 0x83ABDB9C;
	sub_83A992D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83ABDBA4:
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

__attribute__((alias("__imp__sub_83ABDBB8"))) PPC_WEAK_FUNC(sub_83ABDBB8);
PPC_FUNC_IMPL(__imp__sub_83ABDBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABDBC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r26,64(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x831ea798
	ctx.lr = 0x83ABDBE4;
	sub_831EA798(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r28,1852
	ctx.r3.s64 = ctx.r28.s64 + 1852;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x83ac67b8
	ctx.lr = 0x83ABDC00;
	sub_83AC67B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83abdc14
	if (cr6.eq) goto loc_83ABDC14;
	// bl 0x83a95f30
	ctx.lr = 0x83ABDC10;
	sub_83A95F30(ctx, base);
	// b 0x83abdc2c
	goto loc_83ABDC2C;
loc_83ABDC14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// addi r3,r28,1792
	ctx.r3.s64 = ctx.r28.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83ABDC24;
	sub_83AC6758(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a95fb8
	ctx.lr = 0x83ABDC2C;
	sub_83A95FB8(ctx, base);
loc_83ABDC2C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83abdc68
	if (!cr6.eq) goto loc_83ABDC68;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x83abdc54
	if (cr6.eq) goto loc_83ABDC54;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-26708
	ctx.r4.s64 = ctx.r11.s64 + -26708;
	// b 0x83abdc60
	goto loc_83ABDC60;
loc_83ABDC54:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-26764
	ctx.r4.s64 = ctx.r11.s64 + -26764;
loc_83ABDC60:
	// bl 0x831ea400
	ctx.lr = 0x83ABDC64;
	sub_831EA400(ctx, base);
	// b 0x83abdd08
	goto loc_83ABDD08;
loc_83ABDC68:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83abdc94
	if (cr6.eq) goto loc_83ABDC94;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x83ABDC80;
	sub_825832E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a99bd8
	ctx.lr = 0x83ABDC88;
	sub_83A99BD8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83abdcac
	goto loc_83ABDCAC;
loc_83ABDC94:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832e8
	ctx.lr = 0x83ABDC9C;
	sub_825832E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a99c20
	ctx.lr = 0x83ABDCA4;
	sub_83A99C20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
loc_83ABDCAC:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83ABDCC0;
	sub_825832E8(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc020
	ctx.lr = 0x83ABDCDC;
	sub_83ABC020(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x83abdd04
	if (cr6.eq) goto loc_83ABDD04;
	// bl 0x83aa54b8
	ctx.lr = 0x83ABDCF4;
	sub_83AA54B8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABDD04;
	sub_83ABBFC8(ctx, base);
loc_83ABDD04:
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
loc_83ABDD08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABDD10"))) PPC_WEAK_FUNC(sub_83ABDD10);
PPC_FUNC_IMPL(__imp__sub_83ABDD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83ABDD18;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83ABDD3C;
	sub_83A9BD48(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5c28
	ctx.lr = 0x83ABDD64;
	sub_83AC5C28(ctx, base);
	// lhz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lhz r4,146(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 146);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83abc540
	ctx.lr = 0x83ABDD94;
	sub_83ABC540(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc678
	ctx.lr = 0x83ABDDBC;
	sub_83ABC678(ctx, base);
	// clrlwi. r25,r23,16
	ctx.r25.u64 = ctx.r23.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq 0x83abdf14
	if (cr0.eq) goto loc_83ABDF14;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
loc_83ABDDD4:
	// lbzu r11,2(r23)
	ea = 2 + ctx.r23.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r23.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lbz r10,-1(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + -1);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// ble cr6,0x83abdef4
	if (!cr6.gt) goto loc_83ABDEF4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// ble cr6,0x83abdec4
	if (!cr6.gt) goto loc_83ABDEC4;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// beq cr6,0x83abde74
	if (cr6.eq) goto loc_83ABDE74;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bne cr6,0x83abdef4
	if (!cr6.eq) goto loc_83ABDEF4;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// extsh r10,r22
	ctx.r10.s64 = ctx.r22.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83abde64
	if (cr6.eq) goto loc_83ABDE64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// beq cr6,0x83abde38
	if (cr6.eq) goto loc_83ABDE38;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lbz r8,1(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83abde3c
	goto loc_83ABDE3C;
loc_83ABDE38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83ABDE3C:
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abde64
	if (cr6.lt) goto loc_83ABDE64;
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// sth r30,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r30.u16);
	// ble cr6,0x83abdef4
	if (!cr6.gt) goto loc_83ABDEF4;
	// b 0x83abdedc
	goto loc_83ABDEDC;
loc_83ABDE64:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83abdef4
	if (cr6.eq) goto loc_83ABDEF4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// b 0x83abdef4
	goto loc_83ABDEF4;
loc_83ABDE74:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// beq cr6,0x83abde98
	if (cr6.eq) goto loc_83ABDE98;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// lbz r11,-2(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -2);
	// lbz r8,-1(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x83abdea4
	goto loc_83ABDEA4;
loc_83ABDE98:
	// li r11,100
	ctx.r11.s64 = 100;
	// twllei r25,0
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
loc_83ABDEA4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abdef4
	if (cr6.lt) goto loc_83ABDEF4;
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// b 0x83abdef4
	goto loc_83ABDEF4;
loc_83ABDEC4:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// extsh r10,r22
	ctx.r10.s64 = ctx.r22.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83abdef4
	if (!cr6.eq) goto loc_83ABDEF4;
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// sth r30,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r30.u16);
loc_83ABDEDC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lhz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// bl 0x83ac5ee8
	ctx.lr = 0x83ABDEF4;
	sub_83AC5EE8(ctx, base);
loc_83ABDEF4:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83abdf14
	if (!cr6.eq) goto loc_83ABDF14;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x83abddd4
	if (cr6.lt) goto loc_83ABDDD4;
loc_83ABDF14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABDF20"))) PPC_WEAK_FUNC(sub_83ABDF20);
PPC_FUNC_IMPL(__imp__sub_83ABDF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABDF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abdf44
	if (!cr0.eq) goto loc_83ABDF44;
	// bl 0x83abd130
	ctx.lr = 0x83ABDF40;
	sub_83ABD130(ctx, base);
	// b 0x83abe1e0
	goto loc_83ABE1E0;
loc_83ABDF44:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a97fb8
	ctx.lr = 0x83ABDF54;
	sub_83A97FB8(ctx, base);
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abdf98
	if (cr0.eq) goto loc_83ABDF98;
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a99350
	ctx.lr = 0x83ABDF6C;
	sub_83A99350(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abdf98
	if (!cr0.eq) goto loc_83ABDF98;
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a99980
	ctx.lr = 0x83ABDF80;
	sub_83A99980(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26648
	ctx.r4.s64 = ctx.r11.s64 + -26648;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83ABDF94;
	sub_831EA400(ctx, base);
	// b 0x83abe1e0
	goto loc_83ABE1E0;
loc_83ABDF98:
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83ABDFA4;
	sub_831EA7A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// beq cr6,0x83abdfd4
	if (cr6.eq) goto loc_83ABDFD4;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_83ABDFD4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x83abd768
	ctx.lr = 0x83ABDFF8;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abe1e0
	if (cr0.eq) goto loc_83ABE1E0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,114
	ctx.r4.s64 = 114;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ee8
	ctx.lr = 0x83ABE014;
	sub_83AB1EE8(ctx, base);
	// lbz r11,138(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83abe05c
	if (cr6.eq) goto loc_83ABE05C;
	// lhz r11,130(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r11,0
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// divwu r11,r10,r11
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r5,r11,1000
	ctx.r5.s64 = ctx.r11.s64 * 1000;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abe04c
	if (cr6.lt) goto loc_83ABE04C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83ABE04C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,115
	ctx.r4.s64 = 115;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ee8
	ctx.lr = 0x83ABE05C;
	sub_83AB1EE8(ctx, base);
loc_83ABE05C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x83aa52a0
	ctx.lr = 0x83ABE06C;
	sub_83AA52A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abe1e0
	if (cr0.eq) goto loc_83ABE1E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lhz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// sth r10,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r10.u16);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x83aadbb8
	ctx.lr = 0x83ABE0A8;
	sub_83AADBB8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83aadb98
	ctx.lr = 0x83ABE0BC;
	sub_83AADB98(ctx, base);
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// blt cr6,0x83abe100
	if (cr6.lt) goto loc_83ABE100;
	// beq cr6,0x83abe0ec
	if (cr6.eq) goto loc_83ABE0EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83abe10c
	if (!cr6.lt) goto loc_83ABE10C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a993b8
	ctx.lr = 0x83ABE0E8;
	sub_83A993B8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_83ABE0EC:
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a993c0
	ctx.lr = 0x83ABE0F8;
	sub_83A993C0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x83abe10c
	goto loc_83ABE10C;
loc_83ABE100:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83a993b8
	ctx.lr = 0x83ABE108;
	sub_83A993B8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_83ABE10C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,29952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29952);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABE128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83abe1e0
	if (cr0.lt) goto loc_83ABE1E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83abe15c
	if (!cr6.gt) goto loc_83ABE15C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83abe160
	if (cr6.gt) goto loc_83ABE160;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// b 0x83abe164
	goto loc_83ABE164;
loc_83ABE15C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83ABE160:
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_83ABE164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa51a8
	ctx.lr = 0x83ABE16C;
	sub_83AA51A8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe19c
	if (cr6.eq) goto loc_83ABE19C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83abe18c
	if (!cr6.eq) goto loc_83ABE18C;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_83ABE18C:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_83ABE19C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// bl 0x83aa4ff8
	ctx.lr = 0x83ABE1AC;
	sub_83AA4FF8(ctx, base);
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abe1e0
	if (cr6.eq) goto loc_83ABE1E0;
	// lhz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abe1e0
	if (cr6.eq) goto loc_83ABE1E0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x83ab7108
	ctx.lr = 0x83ABE1E0;
	sub_83AB7108(ctx, base);
loc_83ABE1E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABE1E8"))) PPC_WEAK_FUNC(sub_83ABE1E8);
PPC_FUNC_IMPL(__imp__sub_83ABE1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ABE1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83ABE208;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// sth r29,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x83abd768
	ctx.lr = 0x83ABE228;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83abe23c
	if (cr0.eq) goto loc_83ABE23C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83ABE23C:
	// bl 0x83aa52a0
	ctx.lr = 0x83ABE240;
	sub_83AA52A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abe324
	if (cr0.eq) goto loc_83ABE324;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// sth r29,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r29.u16);
	// lwz r11,29952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29952);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABE280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83abe324
	if (cr0.lt) goto loc_83ABE324;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83abe2b8
	if (!cr6.gt) goto loc_83ABE2B8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83abe2bc
	if (cr6.gt) goto loc_83ABE2BC;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// b 0x83abe2c0
	goto loc_83ABE2C0;
loc_83ABE2B8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83ABE2BC:
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_83ABE2C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa51a8
	ctx.lr = 0x83ABE2C8;
	sub_83AA51A8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe310
	if (cr6.eq) goto loc_83ABE310;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe304
	if (cr6.eq) goto loc_83ABE304;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83abe2f4
	if (!cr6.eq) goto loc_83ABE2F4;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_83ABE2F4:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_83ABE304:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_83ABE310:
	// bl 0x83aa4ff8
	ctx.lr = 0x83ABE314;
	sub_83AA4FF8(ctx, base);
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_83ABE324:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABE32C"))) PPC_WEAK_FUNC(sub_83ABE32C);
PPC_FUNC_IMPL(__imp__sub_83ABE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABE330"))) PPC_WEAK_FUNC(sub_83ABE330);
PPC_FUNC_IMPL(__imp__sub_83ABE330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABE338;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe384
	if (cr6.eq) goto loc_83ABE384;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83abe36c
	if (!cr6.eq) goto loc_83ABE36C;
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
loc_83ABE36C:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83abe42c
	if (!cr6.eq) goto loc_83ABE42C;
loc_83ABE384:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83abe3e8
	if (!cr6.eq) goto loc_83ABE3E8;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,26604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe3e0
	if (cr6.eq) goto loc_83ABE3E0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea798
	ctx.lr = 0x83ABE3B0;
	sub_831EA798(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABE3C4;
	sub_83AA3CE8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,26604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83ABE3E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABE3E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abe464
	goto loc_83ABE464;
loc_83ABE3E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83abda00
	ctx.lr = 0x83ABE3FC;
	sub_83ABDA00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe42c
	if (cr6.eq) goto loc_83ABE42C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83abe41c
	if (!cr6.eq) goto loc_83ABE41C;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83ABE41C:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83ABE42C:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83abe444
	if (!cr6.eq) goto loc_83ABE444;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83abe450
	goto loc_83ABE450;
loc_83ABE444:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABE450:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83ABE464:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABE46C"))) PPC_WEAK_FUNC(sub_83ABE46C);
PPC_FUNC_IMPL(__imp__sub_83ABE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABE470"))) PPC_WEAK_FUNC(sub_83ABE470);
PPC_FUNC_IMPL(__imp__sub_83ABE470) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abe4c4
	if (cr6.eq) goto loc_83ABE4C4;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83abe330
	ctx.lr = 0x83ABE4A4;
	sub_83ABE330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe4c0
	if (!cr0.eq) goto loc_83ABE4C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x83abe4f8
	goto loc_83ABE4F8;
loc_83ABE4C0:
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
loc_83ABE4C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83abe4f4
	if (cr6.eq) goto loc_83ABE4F4;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83abe330
	ctx.lr = 0x83ABE4DC;
	sub_83ABE330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe4f0
	if (!cr0.eq) goto loc_83ABE4F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x83abe4f8
	goto loc_83ABE4F8;
loc_83ABE4F0:
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
loc_83ABE4F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ABE4F8:
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

__attribute__((alias("__imp__sub_83ABE510"))) PPC_WEAK_FUNC(sub_83ABE510);
PPC_FUNC_IMPL(__imp__sub_83ABE510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABE518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83abe5b0
	if (cr6.lt) goto loc_83ABE5B0;
	// beq cr6,0x83abe588
	if (cr6.eq) goto loc_83ABE588;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83abe560
	if (cr6.lt) goto loc_83ABE560;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-26436
	ctx.r4.s64 = ctx.r11.s64 + -26436;
loc_83ABE554:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABE55C;
	sub_831EA3F0(ctx, base);
	// b 0x83abe5dc
	goto loc_83ABE5DC;
loc_83ABE560:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98790
	ctx.lr = 0x83ABE570;
	sub_83A98790(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe5e4
	if (!cr0.eq) goto loc_83ABE5E4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lhz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r4,r11,-26476
	ctx.r4.s64 = ctx.r11.s64 + -26476;
	// b 0x83abe5d4
	goto loc_83ABE5D4;
loc_83ABE588:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98700
	ctx.lr = 0x83ABE598;
	sub_83A98700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe5e4
	if (!cr0.eq) goto loc_83ABE5E4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-26508
	ctx.r4.s64 = ctx.r11.s64 + -26508;
	// b 0x83abe5d4
	goto loc_83ABE5D4;
loc_83ABE5B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98698
	ctx.lr = 0x83ABE5C0;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe5e4
	if (!cr0.eq) goto loc_83ABE5E4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-26544
	ctx.r4.s64 = ctx.r11.s64 + -26544;
loc_83ABE5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83ABE5DC;
	sub_831EA400(ctx, base);
loc_83ABE5DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abe624
	goto loc_83ABE624;
loc_83ABE5E4:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, xer);
	// bge cr6,0x83abe5f8
	if (!cr6.lt) goto loc_83ABE5F8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-26580
	ctx.r4.s64 = ctx.r11.s64 + -26580;
	// b 0x83abe554
	goto loc_83ABE554;
loc_83ABE5F8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r10.u16);
	// sth r11,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r11.u16);
	// bl 0x83a99268
	ctx.lr = 0x83ABE614;
	sub_83A99268(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a99290
	ctx.lr = 0x83ABE620;
	sub_83A99290(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83ABE624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABE62C"))) PPC_WEAK_FUNC(sub_83ABE62C);
PPC_FUNC_IMPL(__imp__sub_83ABE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABE630"))) PPC_WEAK_FUNC(sub_83ABE630);
PPC_FUNC_IMPL(__imp__sub_83ABE630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83ABE638;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r4,48(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 48);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83ac5690
	ctx.lr = 0x83ABE674;
	sub_83AC5690(ctx, base);
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83abe758
	if (cr6.eq) goto loc_83ABE758;
	// lhz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abe6a0
	if (cr6.lt) goto loc_83ABE6A0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26404
	ctx.r4.s64 = ctx.r11.s64 + -26404;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABE69C;
	sub_831EA3F0(ctx, base);
	// b 0x83abe814
	goto loc_83ABE814;
loc_83ABE6A0:
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83abe758
	if (cr6.eq) goto loc_83ABE758;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abe6cc
	if (cr6.eq) goto loc_83ABE6CC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83ABE6B8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83abe6b8
	if (cr6.lt) goto loc_83ABE6B8;
loc_83ABE6CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r4.u16);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5c28
	ctx.lr = 0x83ABE6F8;
	sub_83AC5C28(ctx, base);
	// lhz r10,42(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83abe744
	if (cr0.eq) goto loc_83ABE744;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
loc_83ABE720:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83abe740
	if (cr6.eq) goto loc_83ABE740;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83abe720
	if (cr6.lt) goto loc_83ABE720;
	// b 0x83abe744
	goto loc_83ABE744;
loc_83ABE740:
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
loc_83ABE744:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_83ABE74C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ABE750:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83ABE758:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x83abe7dc
	if (!cr6.eq) goto loc_83ABE7DC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r8,42(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// lhz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x83abe7dc
	if (!cr6.lt) goto loc_83ABE7DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83abe7a0
	if (!cr6.gt) goto loc_83ABE7A0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83ABE78C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83abe78c
	if (cr6.lt) goto loc_83ABE78C;
loc_83ABE7A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r4.u16);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5c28
	ctx.lr = 0x83ABE7CC;
	sub_83AC5C28(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83abe80c
	goto loc_83ABE80C;
loc_83ABE7DC:
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bne cr6,0x83abe814
	if (!cr6.eq) goto loc_83ABE814;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lhz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// sth r4,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r4.u16);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5c28
	ctx.lr = 0x83ABE804;
	sub_83AC5C28(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 276);
loc_83ABE80C:
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// li r29,1
	ctx.r29.s64 = 1;
loc_83ABE814:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83abe84c
	if (!cr6.eq) goto loc_83ABE84C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83abe74c
	if (!cr6.eq) goto loc_83ABE74C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// bl 0x83a997e8
	ctx.lr = 0x83ABE848;
	sub_83A997E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83ABE84C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83abe74c
	if (!cr6.eq) goto loc_83ABE74C;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83abe8f8
	if (!cr0.gt) goto loc_83ABE8F8;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgt cr6,0x83abe8f8
	if (cr6.gt) goto loc_83ABE8F8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abdd10
	ctx.lr = 0x83ABE874;
	sub_83ABDD10(ctx, base);
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83abe8ec
	if (cr6.eq) goto loc_83ABE8EC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac5c28
	ctx.lr = 0x83ABE898;
	sub_83AC5C28(ctx, base);
	// lhz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abe8f0
	if (cr0.eq) goto loc_83ABE8F0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_83ABE8B0:
	// lbzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lbz r6,-1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rlwimi r8,r6,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x83abe8e4
	if (cr6.eq) goto loc_83ABE8E4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abe8b0
	if (cr6.lt) goto loc_83ABE8B0;
	// b 0x83abe8f0
	goto loc_83ABE8F0;
loc_83ABE8E4:
	// sth r10,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r10.u16);
	// b 0x83abe8f0
	goto loc_83ABE8F0;
loc_83ABE8EC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83ABE8F0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83abe74c
	if (!cr6.eq) goto loc_83ABE74C;
loc_83ABE8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abe750
	goto loc_83ABE750;
}

__attribute__((alias("__imp__sub_83ABE900"))) PPC_WEAK_FUNC(sub_83ABE900);
PPC_FUNC_IMPL(__imp__sub_83ABE900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83ABE908;
	__savegprlr_20(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,396
	ctx.r7.s64 = ctx.r1.s64 + 396;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83abe630
	ctx.lr = 0x83ABE938;
	sub_83ABE630(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abe960
	if (!cr0.eq) goto loc_83ABE960;
loc_83ABE940:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lha r10,272(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 272));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83abe958
	if (!cr0.gt) goto loc_83ABE958;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,272(r11)
	PPC_STORE_U16(ctx.r11.u32 + 272, ctx.r10.u16);
loc_83ABE958:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83abec50
	goto loc_83ABEC50;
loc_83ABE960:
	// lwz r20,396(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// beq cr6,0x83abe98c
	if (cr6.eq) goto loc_83ABE98C;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lha r10,272(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 272));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83abe98c
	if (!cr0.gt) goto loc_83ABE98C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,272(r11)
	PPC_STORE_U16(ctx.r11.u32 + 272, ctx.r10.u16);
	// b 0x83abec50
	goto loc_83ABEC50;
loc_83ABE98C:
	// lwz r4,68(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// lwz r5,64(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r3,56(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABE99C;
	sub_83AA5C90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83abe940
	if (cr0.eq) goto loc_83ABE940;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abe9f4
	if (cr6.eq) goto loc_83ABE9F4;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABE9B8;
	sub_83AA52A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83abe9cc
	if (!cr0.eq) goto loc_83ABE9CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABE9C8;
	sub_83AA6E90(ctx, base);
	// b 0x83abe958
	goto loc_83ABE958;
loc_83ABE9CC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// bl 0x83aa5b50
	ctx.lr = 0x83ABE9F4;
	sub_83AA5B50(ctx, base);
loc_83ABE9F4:
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// beq cr6,0x83abea04
	if (cr6.eq) goto loc_83ABEA04;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// stw r29,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r29.u32);
loc_83ABEA04:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// bne cr6,0x83abea20
	if (!cr6.eq) goto loc_83ABEA20;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x83abea2c
	goto loc_83ABEA2C;
loc_83ABEA20:
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABEA2C:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abea60
	if (cr6.eq) goto loc_83ABEA60;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// stb r23,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r23.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83ABEA60:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x83aade90
	ctx.lr = 0x83ABEA80;
	sub_83AADE90(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83aaf8b8
	ctx.lr = 0x83ABEA88;
	sub_83AAF8B8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhz r11,62(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abeb34
	if (cr6.eq) goto loc_83ABEB34;
	// lhz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abeb34
	if (cr0.eq) goto loc_83ABEB34;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r25,r11,-26360
	ctx.r25.s64 = ctx.r11.s64 + -26360;
loc_83ABEAB8:
	// lbzu r10,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r3,r11,1404
	ctx.r3.s64 = ctx.r11.s64 + 1404;
	// lbz r9,-1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + -1);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac6138
	ctx.lr = 0x83ABEAE0;
	sub_83AC6138(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83aaf768
	ctx.lr = 0x83ABEAF0;
	sub_83AAF768(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83abeb0c
	if (!cr6.eq) goto loc_83ABEB0C;
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83abeb1c
	if (!cr6.eq) goto loc_83ABEB1C;
	// sth r29,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r29.u16);
	// b 0x83abeb1c
	goto loc_83ABEB1C;
loc_83ABEB0C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83ABEB1C;
	sub_831EA400(ctx, base);
loc_83ABEB1C:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lhz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83abeab8
	if (cr6.lt) goto loc_83ABEAB8;
loc_83ABEB34:
	// std r24,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r24.u64);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// lbz r10,129(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// stb r10,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r10.u8);
	// lhz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stb r10,262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 262, ctx.r10.u8);
	// lbz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// stb r10,263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 263, ctx.r10.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r10,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r10.u16);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r10.u16);
	// sth r20,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r20.u16);
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bne cr6,0x83abeb94
	if (!cr6.eq) goto loc_83ABEB94;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
	// b 0x83abeba0
	goto loc_83ABEBA0;
loc_83ABEB94:
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r23,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r23.u32);
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
loc_83ABEBA0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83abc938
	ctx.lr = 0x83ABEBBC;
	sub_83ABC938(ctx, base);
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// beq cr6,0x83abebec
	if (cr6.eq) goto loc_83ABEBEC;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x83abebe4
	goto loc_83ABEBE4;
loc_83ABEBCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,18(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x83abebe0
	if (!cr6.eq) goto loc_83ABEBE0;
	// stb r23,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r23.u8);
loc_83ABEBE0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83ABEBE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abebcc
	if (!cr6.eq) goto loc_83ABEBCC;
loc_83ABEBEC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,142(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// bl 0x83abd410
	ctx.lr = 0x83ABEC00;
	sub_83ABD410(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x83abec28
	if (!cr6.eq) goto loc_83ABEC28;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r3,64(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABEC14;
	sub_83AA3CE8(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9ccb8
	ctx.lr = 0x83ABEC28;
	sub_83A9CCB8(ctx, base);
loc_83ABEC28:
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// bne cr6,0x83abec4c
	if (!cr6.eq) goto loc_83ABEC4C;
	// lhz r11,278(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 278);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// sth r11,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r11.u16);
	// bne cr6,0x83abec4c
	if (!cr6.eq) goto loc_83ABEC4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa5978
	ctx.lr = 0x83ABEC4C;
	sub_83AA5978(ctx, base);
loc_83ABEC4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ABEC50:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABEC58"))) PPC_WEAK_FUNC(sub_83ABEC58);
PPC_FUNC_IMPL(__imp__sub_83ABEC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ABEC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83abee14
	if (cr0.eq) goto loc_83ABEE14;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83abee14
	if (cr6.eq) goto loc_83ABEE14;
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r30,2384(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2384);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abed90
	if (!cr6.eq) goto loc_83ABED90;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abed90
	if (!cr6.eq) goto loc_83ABED90;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// ble cr6,0x83abed90
	if (!cr6.gt) goto loc_83ABED90;
loc_83ABECC4:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,2388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abed10
	if (cr6.eq) goto loc_83ABED10;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r9,2388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2388);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,2388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2388, ctx.r9.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r10,2388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83abecfc
	if (!cr6.eq) goto loc_83ABECFC;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r7,2392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2392, ctx.r7.u32);
loc_83ABECFC:
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r9,2396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2396);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,2396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2396, ctx.r9.u32);
loc_83ABED10:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bne cr6,0x83abed4c
	if (!cr6.eq) goto loc_83ABED4C;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x83abed64
	goto loc_83ABED64;
loc_83ABED4C:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_83ABED64:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83abecc4
	if (cr6.lt) goto loc_83ABECC4;
loc_83ABED90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83abeddc
	if (!cr0.eq) goto loc_83ABEDDC;
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 2));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// bl 0x83abe330
	ctx.lr = 0x83ABEDCC;
	sub_83ABE330(ctx, base);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83abede0
	goto loc_83ABEDE0;
loc_83ABEDDC:
	// li r10,2
	ctx.r10.s64 = 2;
loc_83ABEDE0:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// beq cr6,0x83abee14
	if (cr6.eq) goto loc_83ABEE14;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x83abee10
	if (!cr6.eq) goto loc_83ABEE10;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x83abee14
	goto loc_83ABEE14;
loc_83ABEE10:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_83ABEE14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABEE1C"))) PPC_WEAK_FUNC(sub_83ABEE1C);
PPC_FUNC_IMPL(__imp__sub_83ABEE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABEE20"))) PPC_WEAK_FUNC(sub_83ABEE20);
PPC_FUNC_IMPL(__imp__sub_83ABEE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ABEE28;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r10,122(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r28,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// and r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 & ctx.r8.u64;
	// bl 0x83ac52a0
	ctx.lr = 0x83ABEE7C;
	sub_83AC52A0(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABEE8C;
	sub_83AA5C90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abf278
	if (cr0.eq) goto loc_83ABF278;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abeebc
	if (!cr6.eq) goto loc_83ABEEBC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa5328
	ctx.lr = 0x83ABEEA8;
	sub_83AA5328(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83abeebc
	if (!cr0.eq) goto loc_83ABEEBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABEEB8;
	sub_83AA6E90(ctx, base);
	// b 0x83abf278
	goto loc_83ABF278;
loc_83ABEEBC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abef7c
	if (cr6.eq) goto loc_83ABEF7C;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABEECC;
	sub_83AA52A0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x83abeef0
	if (!cr0.eq) goto loc_83ABEEF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABEEDC;
	sub_83AA6E90(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83abf278
	if (cr6.eq) goto loc_83ABF278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83ABEEEC;
	sub_83AA7070(ctx, base);
	// b 0x83abf278
	goto loc_83ABF278;
loc_83ABEEF0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abef6c
	if (cr6.eq) goto loc_83ABEF6C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abef2c
	if (cr6.eq) goto loc_83ABEF2C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83abef1c
	if (!cr6.eq) goto loc_83ABEF1C;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_83ABEF1C:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_83ABEF2C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83abef40
	if (cr6.eq) goto loc_83ABEF40;
	// stw r10,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r10.u32);
loc_83ABEF40:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83aadb98
	ctx.lr = 0x83ABEF60;
	sub_83AADB98(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x83abef74
	goto loc_83ABEF74;
loc_83ABEF6C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_83ABEF74:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83aadb98
	ctx.lr = 0x83ABEF7C;
	sub_83AADB98(ctx, base);
loc_83ABEF7C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abefb4
	if (!cr6.eq) goto loc_83ABEFB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa53b8
	ctx.lr = 0x83ABEF98;
	sub_83AA53B8(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abf010
	if (!cr6.eq) goto loc_83ABF010;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x83abf020
	goto loc_83ABF020;
loc_83ABEFB4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abeff8
	if (cr6.eq) goto loc_83ABEFF8;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abefd8
	if (!cr6.eq) goto loc_83ABEFD8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x83abefe8
	goto loc_83ABEFE8;
loc_83ABEFD8:
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABEFE8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83abf02c
	goto loc_83ABF02C;
loc_83ABEFF8:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// bne cr6,0x83abf010
	if (!cr6.eq) goto loc_83ABF010;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x83abf020
	goto loc_83ABF020;
loc_83ABF010:
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABF020:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_83ABF02C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abf0ac
	if (cr6.eq) goto loc_83ABF0AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABF064;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83ab3320
	ctx.lr = 0x83ABF088;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abf0ac
	if (!cr6.eq) goto loc_83ABF0AC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83abf0a8
	if (cr6.eq) goto loc_83ABF0A8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF0A4;
	sub_83AA5E98(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83ABF0A8:
	// stb r29,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r29.u8);
loc_83ABF0AC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abf0c8
	if (cr6.eq) goto loc_83ABF0C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_83ABF0C8:
	// lbz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abf0e8
	if (!cr0.eq) goto loc_83ABF0E8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x83abf0e8
	if (!cr6.lt) goto loc_83ABF0E8;
	// stb r29,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r29.u8);
loc_83ABF0E8:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abf168
	if (cr6.eq) goto loc_83ABF168;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABF104;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83ab3320
	ctx.lr = 0x83ABF128;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abf150
	if (!cr6.eq) goto loc_83ABF150;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83abf148
	if (cr6.eq) goto loc_83ABF148;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF144;
	sub_83AA5E98(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83ABF148:
	// stb r29,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r29.u8);
	// b 0x83abf188
	goto loc_83ABF188;
loc_83ABF150:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83abf188
	if (!cr6.eq) goto loc_83ABF188;
	// stb r29,66(r30)
	PPC_STORE_U8(ctx.r30.u32 + 66, ctx.r29.u8);
	// stb r28,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r28.u8);
	// b 0x83abf188
	goto loc_83ABF188;
loc_83ABF168:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8353c978
	ctx.lr = 0x83ABF170;
	sub_8353C978(ctx, base);
	// lis r11,290
	ctx.r11.s64 = 19005440;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x83abf188
	if (!cr6.lt) goto loc_83ABF188;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83abd998
	ctx.lr = 0x83ABF188;
	sub_83ABD998(ctx, base);
loc_83ABF188:
	// lbz r11,110(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abf1e0
	if (cr0.eq) goto loc_83ABF1E0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,102(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 102);
	// sth r28,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83abec58
	ctx.lr = 0x83ABF1BC;
	sub_83ABEC58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abf1dc
	if (!cr0.eq) goto loc_83ABF1DC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83abf1d8
	if (cr6.eq) goto loc_83ABF1D8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF1D4;
	sub_83AA5E98(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83ABF1D8:
	// stb r29,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r29.u8);
loc_83ABF1DC:
	// stb r28,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r28.u8);
loc_83ABF1E0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83abf210
	if (cr6.eq) goto loc_83ABF210;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r11.u32);
	// bl 0x83aa51a8
	ctx.lr = 0x83ABF210;
	sub_83AA51A8(ctx, base);
loc_83ABF210:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abf22c
	if (cr6.eq) goto loc_83ABF22C;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stb r29,67(r30)
	PPC_STORE_U8(ctx.r30.u32 + 67, ctx.r29.u8);
loc_83ABF22C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lbz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// sth r11,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r11.u16);
	// lbz r11,111(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 111);
	// stb r11,105(r30)
	PPC_STORE_U8(ctx.r30.u32 + 105, ctx.r11.u8);
	// beq cr6,0x83abf278
	if (cr6.eq) goto loc_83ABF278;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc938
	ctx.lr = 0x83ABF264;
	sub_83ABC938(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// lhz r4,150(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// bl 0x83abd410
	ctx.lr = 0x83ABF278;
	sub_83ABD410(ctx, base);
loc_83ABF278:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABF280"))) PPC_WEAK_FUNC(sub_83ABF280);
PPC_FUNC_IMPL(__imp__sub_83ABF280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83ABF288;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lbz r10,122(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// sth r25,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r25.u16);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// and r27,r10,r23
	ctx.r27.u64 = ctx.r10.u64 & ctx.r23.u64;
	// bl 0x83ac5690
	ctx.lr = 0x83ABF2D8;
	sub_83AC5690(ctx, base);
	// bl 0x83aa5008
	ctx.lr = 0x83ABF2DC;
	sub_83AA5008(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83abf770
	if (cr0.eq) goto loc_83ABF770;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABF2F4;
	sub_83AA5C90(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x83abf770
	if (cr0.eq) goto loc_83ABF770;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abf32c
	if (!cr6.eq) goto loc_83ABF32C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa5328
	ctx.lr = 0x83ABF310;
	sub_83AA5328(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83abf32c
	if (!cr0.eq) goto loc_83ABF32C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa6f70
	ctx.lr = 0x83ABF320;
	sub_83AA6F70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABF328;
	sub_83AA6E90(ctx, base);
	// b 0x83abf770
	goto loc_83ABF770;
loc_83ABF32C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abf368
	if (cr6.eq) goto loc_83ABF368;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABF33C;
	sub_83AA52A0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne 0x83abf368
	if (!cr0.eq) goto loc_83ABF368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa6f70
	ctx.lr = 0x83ABF34C;
	sub_83AA6F70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABF354;
	sub_83AA6E90(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83abf770
	if (cr6.eq) goto loc_83ABF770;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83ABF364;
	sub_83AA7070(ctx, base);
	// b 0x83abf770
	goto loc_83ABF770;
loc_83ABF368:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abf3b8
	if (!cr6.eq) goto loc_83ABF3B8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x83abf38c
	if (!cr6.eq) goto loc_83ABF38C;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x83abf398
	goto loc_83ABF398;
loc_83ABF38C:
	// stw r25,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABF398:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x83aa53b8
	ctx.lr = 0x83ABF3B0;
	sub_83AA53B8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// b 0x83abf450
	goto loc_83ABF450;
loc_83ABF3B8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abf410
	if (cr6.eq) goto loc_83ABF410;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x83abf3dc
	if (!cr6.eq) goto loc_83ABF3DC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x83abf3ec
	goto loc_83ABF3EC;
loc_83ABF3DC:
	// stw r25,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABF3EC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x83abf450
	goto loc_83ABF450;
loc_83ABF410:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x83abf428
	if (!cr6.eq) goto loc_83ABF428;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x83abf438
	goto loc_83ABF438;
loc_83ABF428:
	// stw r25,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABF438:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83ABF450:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abf4c4
	if (cr6.eq) goto loc_83ABF4C4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABF47C;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83ab3320
	ctx.lr = 0x83ABF4A0;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abf4c4
	if (!cr6.eq) goto loc_83ABF4C4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83abf4c0
	if (cr6.eq) goto loc_83ABF4C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF4BC;
	sub_83AA5E98(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_83ABF4C0:
	// stb r24,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r24.u8);
loc_83ABF4C4:
	// lbz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83abf4e4
	if (!cr0.eq) goto loc_83ABF4E4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x83abf4e4
	if (!cr6.lt) goto loc_83ABF4E4;
	// stb r24,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r24.u8);
loc_83ABF4E4:
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abf54c
	if (cr6.eq) goto loc_83ABF54C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABF500;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83ab3320
	ctx.lr = 0x83ABF524;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abf56c
	if (!cr6.eq) goto loc_83ABF56C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83abf544
	if (cr6.eq) goto loc_83ABF544;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF540;
	sub_83AA5E98(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_83ABF544:
	// stb r24,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r24.u8);
	// b 0x83abf56c
	goto loc_83ABF56C;
loc_83ABF54C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8353c978
	ctx.lr = 0x83ABF554;
	sub_8353C978(ctx, base);
	// lis r11,290
	ctx.r11.s64 = 19005440;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x83abf56c
	if (!cr6.lt) goto loc_83ABF56C;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x83abd998
	ctx.lr = 0x83ABF56C;
	sub_83ABD998(ctx, base);
loc_83ABF56C:
	// lbz r11,110(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83abf5c4
	if (cr0.eq) goto loc_83ABF5C4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,102(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 102);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83abec58
	ctx.lr = 0x83ABF5A0;
	sub_83ABEC58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83abf5c0
	if (!cr0.eq) goto loc_83ABF5C0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83abf5bc
	if (cr6.eq) goto loc_83ABF5BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABF5B8;
	sub_83AA5E98(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_83ABF5BC:
	// stb r24,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r24.u8);
loc_83ABF5C0:
	// stb r25,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r25.u8);
loc_83ABF5C4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9ccd8
	ctx.lr = 0x83ABF5D0;
	sub_83A9CCD8(ctx, base);
	// lhz r11,234(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 234);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83abf5f8
	if (cr6.lt) goto loc_83ABF5F8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26312
	ctx.r4.s64 = ctx.r11.s64 + -26312;
	// bl 0x831ea3f0
	ctx.lr = 0x83ABF5F4;
	sub_831EA3F0(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_83ABF5F8:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// clrlwi. r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83abf61c
	if (cr0.eq) goto loc_83ABF61C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_83ABF608:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83abf608
	if (cr6.lt) goto loc_83ABF608;
loc_83ABF61C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac5c28
	ctx.lr = 0x83ABF648;
	sub_83AC5C28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83abf674
	if (cr6.eq) goto loc_83ABF674;
	// stw r23,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r23.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// bl 0x83aa51a8
	ctx.lr = 0x83ABF674;
	sub_83AA51A8(ctx, base);
loc_83ABF674:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r28,72
	ctx.r11.s64 = ctx.r28.s64 + 72;
	// bne cr6,0x83abf68c
	if (!cr6.eq) goto loc_83ABF68C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x83abf698
	goto loc_83ABF698;
loc_83ABF68C:
	// stw r25,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r25.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABF698:
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abf6c4
	if (cr6.eq) goto loc_83ABF6C4;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stb r24,67(r28)
	PPC_STORE_U8(ctx.r28.u32 + 67, ctx.r24.u8);
loc_83ABF6C4:
	// lbz r11,161(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// stb r11,261(r28)
	PPC_STORE_U8(ctx.r28.u32 + 261, ctx.r11.u8);
	// lhz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// sth r11,274(r28)
	PPC_STORE_U16(ctx.r28.u32 + 274, ctx.r11.u16);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// stb r11,262(r28)
	PPC_STORE_U8(ctx.r28.u32 + 262, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lbz r11,162(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 162);
	// stb r11,263(r28)
	PPC_STORE_U8(ctx.r28.u32 + 263, ctx.r11.u8);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r11.u32);
	// sth r30,60(r28)
	PPC_STORE_U16(ctx.r28.u32 + 60, ctx.r30.u16);
	// sth r27,276(r28)
	PPC_STORE_U16(ctx.r28.u32 + 276, ctx.r27.u16);
	// ble cr6,0x83abf720
	if (!cr6.gt) goto loc_83ABF720;
	// lhz r11,178(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 178);
	// sth r11,304(r28)
	PPC_STORE_U16(ctx.r28.u32 + 304, ctx.r11.u16);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
loc_83ABF720:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,48(r29)
	PPC_STORE_U16(ctx.r29.u32 + 48, ctx.r11.u16);
	// lbz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83abf770
	if (cr6.eq) goto loc_83ABF770;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc938
	ctx.lr = 0x83ABF75C;
	sub_83ABC938(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// lhz r4,174(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 174);
	// bl 0x83abd410
	ctx.lr = 0x83ABF770;
	sub_83ABD410(ctx, base);
loc_83ABF770:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABF778"))) PPC_WEAK_FUNC(sub_83ABF778);
PPC_FUNC_IMPL(__imp__sub_83ABF778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abf808
	if (cr6.eq) goto loc_83ABF808;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x83abf808
	if (cr6.gt) goto loc_83ABF808;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// addi r12,r12,-27352
	ctx.r12.s64 = ctx.r12.s64 + -27352;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-31828
	ctx.r12.s64 = -2085879808;
	// nop 
	// addi r12,r12,-2116
	ctx.r12.s64 = ctx.r12.s64 + -2116;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83ABF7FC;
	case 1:
		goto loc_83ABF7BC;
	case 2:
		goto loc_83ABF7C4;
	case 3:
		goto loc_83ABF7CC;
	case 4:
		goto loc_83ABF808;
	case 5:
		goto loc_83ABF7D4;
	case 6:
		goto loc_83ABF7DC;
	case 7:
		goto loc_83ABF7E4;
	case 8:
		goto loc_83ABF7F4;
	case 9:
		goto loc_83ABF7EC;
	default:
		return;
	}
loc_83ABF7BC:
	// li r9,14
	ctx.r9.s64 = 14;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7C4:
	// li r9,15
	ctx.r9.s64 = 15;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7CC:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7D4:
	// li r9,18
	ctx.r9.s64 = 18;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7DC:
	// li r9,19
	ctx.r9.s64 = 19;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7E4:
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7EC:
	// li r9,22
	ctx.r9.s64 = 22;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7F4:
	// li r9,21
	ctx.r9.s64 = 21;
	// b 0x83abf800
	goto loc_83ABF800;
loc_83ABF7FC:
	// li r9,13
	ctx.r9.s64 = 13;
loc_83ABF800:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_83ABF808:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83abf840
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF840;
	// bdzf 4*cr6+eq,0x83abf844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF844;
	// bdzf 4*cr6+eq,0x83abf85c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF85C;
	// bdzf 4*cr6+eq,0x83abf848
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF848;
	// bdzf 4*cr6+eq,0x83abf84c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF84C;
	// bdzf 4*cr6+eq,0x83abf84c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF84C;
	// bdzf 4*cr6+eq,0x83abf858
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83ABF858;
	// bne cr6,0x83abf84c
	if (!cr6.eq) goto loc_83ABF84C;
	// b 0x83abdf20
	sub_83ABDF20(ctx, base);
	return;
loc_83ABF840:
	// b 0x83ac07a0
	sub_83AC07A0(ctx, base);
	return;
loc_83ABF844:
	// b 0x83abee20
	sub_83ABEE20(ctx, base);
	return;
loc_83ABF848:
	// b 0x83abdbb8
	sub_83ABDBB8(ctx, base);
	return;
loc_83ABF84C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x83abc020
	sub_83ABC020(ctx, base);
	return;
loc_83ABF858:
	// b 0x83abf280
	sub_83ABF280(ctx, base);
	return;
loc_83ABF85C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ABF860"))) PPC_WEAK_FUNC(sub_83ABF860);
PPC_FUNC_IMPL(__imp__sub_83ABF860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83ABF868;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,64(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r20,28(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// lwz r21,108(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83abf8b4
	if (!cr6.gt) goto loc_83ABF8B4;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// b 0x83abf8ac
	goto loc_83ABF8AC;
loc_83ABF898:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplw cr6,r10,r20
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, xer);
	// beq cr6,0x83abf8d4
	if (cr6.eq) goto loc_83ABF8D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83ABF8AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abf898
	if (!cr6.eq) goto loc_83ABF898;
loc_83ABF8B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83abf98c
	if (!cr6.gt) goto loc_83ABF98C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26220
	ctx.r4.s64 = ctx.r11.s64 + -26220;
	// b 0x83abf924
	goto loc_83ABF924;
loc_83ABF8D4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac4d88
	ctx.lr = 0x83ABF8EC;
	sub_83AC4D88(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x83aa5530
	ctx.lr = 0x83ABF900;
	sub_83AA5530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq 0x83abf92c
	if (cr0.eq) goto loc_83ABF92C;
	// bl 0x83aa5960
	ctx.lr = 0x83ABF910;
	sub_83AA5960(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83abf92c
	if (!cr0.eq) goto loc_83ABF92C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-26268
	ctx.r4.s64 = ctx.r11.s64 + -26268;
loc_83ABF924:
	// bl 0x831ea3f0
	ctx.lr = 0x83ABF928;
	sub_831EA3F0(ctx, base);
	// b 0x83abfdb4
	goto loc_83ABFDB4;
loc_83ABF92C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r10.u8);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// or r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bl 0x83abf778
	ctx.lr = 0x83ABF974;
	sub_83ABF778(ctx, base);
	// bl 0x83aa54b8
	ctx.lr = 0x83ABF978;
	sub_83AA54B8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABF988;
	sub_83ABBFC8(ctx, base);
	// b 0x83abfdb4
	goto loc_83ABFDB4;
loc_83ABF98C:
	// bl 0x83aa54b8
	ctx.lr = 0x83ABF990;
	sub_83AA54B8(ctx, base);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABF9A0;
	sub_83ABBFC8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83abf9c8
	if (!cr6.gt) goto loc_83ABF9C8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83abf9c8
	if (cr6.eq) goto loc_83ABF9C8;
	// li r23,2
	ctx.r23.s64 = 2;
	// bl 0x83ab6c80
	ctx.lr = 0x83ABF9C0;
	sub_83AB6C80(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x83abf9cc
	if (!cr0.eq) goto loc_83ABF9CC;
loc_83ABF9C8:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
loc_83ABF9CC:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa3c50
	ctx.lr = 0x83ABF9D8;
	sub_83AA3C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abfdb4
	if (cr0.eq) goto loc_83ABFDB4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x831ea778
	ctx.lr = 0x83ABF9F8;
	sub_831EA778(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r24,118(r30)
	PPC_STORE_U8(ctx.r30.u32 + 118, ctx.r24.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x83aa5328
	ctx.lr = 0x83ABFA14;
	sub_83AA5328(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq 0x83abfdb4
	if (cr0.eq) goto loc_83ABFDB4;
	// bl 0x83aa53b8
	ctx.lr = 0x83ABFA24;
	sub_83AA53B8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac4d88
	ctx.lr = 0x83ABFA3C;
	sub_83AC4D88(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABFA4C;
	sub_83AA5C90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83abfdb4
	if (cr0.eq) goto loc_83ABFDB4;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABFA58;
	sub_83AA52A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83abfa6c
	if (!cr0.eq) goto loc_83ABFA6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABFA68;
	sub_83AA6E90(ctx, base);
	// b 0x83abfdb4
	goto loc_83ABFDB4;
loc_83ABFA6C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x83aadb98
	ctx.lr = 0x83ABFA7C;
	sub_83AADB98(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r29,72
	ctx.r11.s64 = ctx.r29.s64 + 72;
	// bne cr6,0x83abfaa0
	if (!cr6.eq) goto loc_83ABFAA0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x83abfab0
	goto loc_83ABFAB0;
loc_83ABFAA0:
	// stw r26,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r26.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABFAB0:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83abfb34
	if (cr6.eq) goto loc_83ABFB34;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83ABFAF0;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab3320
	ctx.lr = 0x83ABFB14;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83abfb54
	if (!cr6.eq) goto loc_83ABFB54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83ABFB28;
	sub_83AA5E98(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r24,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r24.u8);
	// b 0x83abfb54
	goto loc_83ABFB54;
loc_83ABFB34:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8353c978
	ctx.lr = 0x83ABFB3C;
	sub_8353C978(ctx, base);
	// lis r11,290
	ctx.r11.s64 = 19005440;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x83abfb54
	if (!cr6.lt) goto loc_83ABFB54;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x83abd998
	ctx.lr = 0x83ABFB54;
	sub_83ABD998(ctx, base);
loc_83ABFB54:
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83abfb84
	if (cr6.eq) goto loc_83ABFB84;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x83aa51a8
	ctx.lr = 0x83ABFB84;
	sub_83AA51A8(ctx, base);
loc_83ABFB84:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abfb98
	if (cr6.eq) goto loc_83ABFB98;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stb r24,67(r29)
	PPC_STORE_U8(ctx.r29.u32 + 67, ctx.r24.u8);
loc_83ABFB98:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,60(r29)
	PPC_STORE_U16(ctx.r29.u32 + 60, ctx.r11.u16);
	// beq cr6,0x83abfdb4
	if (cr6.eq) goto loc_83ABFDB4;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// sth r26,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r26.u16);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,112(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x83aa51e8
	ctx.lr = 0x83ABFBC8;
	sub_83AA51E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83abfdb4
	if (cr0.eq) goto loc_83ABFDB4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// sth r26,208(r30)
	PPC_STORE_U16(ctx.r30.u32 + 208, ctx.r26.u16);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// sth r11,210(r30)
	PPC_STORE_U16(ctx.r30.u32 + 210, ctx.r11.u16);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// stw r26,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r26.u32);
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// stb r24,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r24.u8);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x83aadb98
	ctx.lr = 0x83ABFC20;
	sub_83AADB98(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abfc34
	if (!cr6.eq) goto loc_83ABFC34;
	// stw r30,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r30.u32);
	// b 0x83abfc40
	goto loc_83ABFC40;
loc_83ABFC34:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83ABFC40:
	// lwz r11,244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r30,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r11.u32);
	// beq cr6,0x83abfc74
	if (cr6.eq) goto loc_83ABFC74;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x83abfc6c
	if (!cr6.eq) goto loc_83ABFC6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83ABFC6C:
	// bl 0x83ab5e40
	ctx.lr = 0x83ABFC70;
	sub_83AB5E40(ctx, base);
	// oris r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 65536;
loc_83ABFC74:
	// stb r27,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r27.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// or r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 | ctx.r10.u64;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x83abf778
	ctx.lr = 0x83ABFCBC;
	sub_83ABF778(ctx, base);
	// bl 0x83aa54b8
	ctx.lr = 0x83ABFCC0;
	sub_83AA54B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83ABFCD0;
	sub_83ABBFC8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83abfd14
	if (cr6.eq) goto loc_83ABFD14;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABFCE8;
	sub_83AA3CE8(ctx, base);
	// stw r3,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABFCF4;
	sub_83AA3CE8(ctx, base);
	// stw r20,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r20.u32);
	// stw r3,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stb r24,119(r11)
	PPC_STORE_U8(ctx.r11.u32 + 119, ctx.r24.u8);
	// bl 0x83ab6d20
	ctx.lr = 0x83ABFD10;
	sub_83AB6D20(ctx, base);
	// b 0x83abfdb4
	goto loc_83ABFDB4;
loc_83ABFD14:
	// lwz r30,112(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 112);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r26,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r26.u32);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABFD2C;
	sub_83AA3CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab65b0
	ctx.lr = 0x83ABFD38;
	sub_83AB65B0(ctx, base);
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83abfd48
	if (cr6.eq) goto loc_83ABFD48;
	// stw r20,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r20.u32);
loc_83ABFD48:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,26612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abfdb4
	if (cr6.eq) goto loc_83ABFDB4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,128(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x831ea798
	ctx.lr = 0x83ABFD70;
	sub_831EA798(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ABFD80;
	sub_83AA3CE8(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r3,r11,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// bl 0x83a8cd50
	ctx.lr = 0x83ABFD9C;
	sub_83A8CD50(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,26616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26616);
	// lwz r11,26612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26612);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ABFDB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ABFDB4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ABFDBC"))) PPC_WEAK_FUNC(sub_83ABFDBC);
PPC_FUNC_IMPL(__imp__sub_83ABFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ABFDC0"))) PPC_WEAK_FUNC(sub_83ABFDC0);
PPC_FUNC_IMPL(__imp__sub_83ABFDC0) {
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
	ctx.lr = 0x83ABFDC8;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r23,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r23.u16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r10,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r10.u16);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x83a9bd48
	ctx.lr = 0x83ABFE14;
	sub_83A9BD48(ctx, base);
	// lbz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// and r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x831ea798
	ctx.lr = 0x83ABFE3C;
	sub_831EA798(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac4d88
	ctx.lr = 0x83ABFE54;
	sub_83AC4D88(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83aa5c90
	ctx.lr = 0x83ABFE64;
	sub_83AA5C90(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq 0x83ac078c
	if (cr0.eq) goto loc_83AC078C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83abfe94
	if (!cr6.eq) goto loc_83ABFE94;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa5328
	ctx.lr = 0x83ABFE80;
	sub_83AA5328(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83abfe94
	if (!cr0.eq) goto loc_83ABFE94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABFE90;
	sub_83AA6E90(ctx, base);
	// b 0x83ac078c
	goto loc_83AC078C;
loc_83ABFE94:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abff40
	if (cr6.eq) goto loc_83ABFF40;
	// bl 0x83aa52a0
	ctx.lr = 0x83ABFEA4;
	sub_83AA52A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83abfec8
	if (!cr0.eq) goto loc_83ABFEC8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83aa6e90
	ctx.lr = 0x83ABFEB4;
	sub_83AA6E90(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ac078c
	if (cr6.eq) goto loc_83AC078C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa7070
	ctx.lr = 0x83ABFEC4;
	sub_83AA7070(ctx, base);
	// b 0x83ac078c
	goto loc_83AC078C;
loc_83ABFEC8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abff30
	if (cr6.eq) goto loc_83ABFF30;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83abff04
	if (cr6.eq) goto loc_83ABFF04;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x83abfef4
	if (!cr6.eq) goto loc_83ABFEF4;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_83ABFEF4:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83ABFF04:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83aadb98
	ctx.lr = 0x83ABFF24;
	sub_83AADB98(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x83abff38
	goto loc_83ABFF38;
loc_83ABFF30:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_83ABFF38:
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// bl 0x83aadb98
	ctx.lr = 0x83ABFF40;
	sub_83AADB98(ctx, base);
loc_83ABFF40:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83abff78
	if (!cr6.eq) goto loc_83ABFF78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa53b8
	ctx.lr = 0x83ABFF5C;
	sub_83AA53B8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// bne cr6,0x83abffd4
	if (!cr6.eq) goto loc_83ABFFD4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x83abffe4
	goto loc_83ABFFE4;
loc_83ABFF78:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83abffbc
	if (cr6.eq) goto loc_83ABFFBC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// bne cr6,0x83abff9c
	if (!cr6.eq) goto loc_83ABFF9C;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x83abffac
	goto loc_83ABFFAC;
loc_83ABFF9C:
	// stw r23,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r23.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABFFAC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83abfff0
	goto loc_83ABFFF0;
loc_83ABFFBC:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// bne cr6,0x83abffd4
	if (!cr6.eq) goto loc_83ABFFD4;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x83abffe4
	goto loc_83ABFFE4;
loc_83ABFFD4:
	// stw r23,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r23.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83ABFFE4:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_83ABFFF0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lbz r11,154(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bne 0x83ac0044
	if (!cr0.eq) goto loc_83AC0044;
	// lhz r11,170(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ac0044
	if (!cr0.eq) goto loc_83AC0044;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26180
	ctx.r4.s64 = ctx.r11.s64 + -26180;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC0038;
	sub_831EA3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r11.u8);
	// b 0x83ac078c
	goto loc_83AC078C;
loc_83AC0044:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r15,1
	ctx.r15.s64 = 1;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83ac00ac
	if (cr6.eq) goto loc_83AC00AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC0064;
	sub_83AC6090(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab3320
	ctx.lr = 0x83AC0088;
	sub_83AB3320(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac00ac
	if (!cr6.eq) goto loc_83AC00AC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ac00a8
	if (cr6.eq) goto loc_83AC00A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83AC00A4;
	sub_83AA5E98(ctx, base);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_83AC00A8:
	// stb r15,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r15.u8);
loc_83AC00AC:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83ac0114
	if (cr6.eq) goto loc_83AC0114;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC00C8;
	sub_83AC6090(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab3320
	ctx.lr = 0x83AC00EC;
	sub_83AB3320(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac0134
	if (!cr6.eq) goto loc_83AC0134;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ac010c
	if (cr6.eq) goto loc_83AC010C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa5e98
	ctx.lr = 0x83AC0108;
	sub_83AA5E98(ctx, base);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_83AC010C:
	// stb r15,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r15.u8);
	// b 0x83ac0134
	goto loc_83AC0134;
loc_83AC0114:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8353c978
	ctx.lr = 0x83AC011C;
	sub_8353C978(ctx, base);
	// lis r11,290
	ctx.r11.s64 = 19005440;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac0134
	if (!cr6.lt) goto loc_83AC0134;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// bl 0x83abd998
	ctx.lr = 0x83AC0134;
	sub_83ABD998(ctx, base);
loc_83AC0134:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac0150
	if (cr6.eq) goto loc_83AC0150;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,284(r26)
	PPC_STORE_U32(ctx.r26.u32 + 284, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,288(r26)
	PPC_STORE_U32(ctx.r26.u32 + 288, ctx.r11.u32);
loc_83AC0150:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ac0180
	if (cr6.eq) goto loc_83AC0180;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// bl 0x83aa51a8
	ctx.lr = 0x83AC0180;
	sub_83AA51A8(ctx, base);
loc_83AC0180:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac0194
	if (cr6.eq) goto loc_83AC0194;
	// stw r11,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
	// stb r15,67(r26)
	PPC_STORE_U8(ctx.r26.u32 + 67, ctx.r15.u8);
loc_83AC0194:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,60(r26)
	PPC_STORE_U16(ctx.r26.u32 + 60, ctx.r11.u16);
	// beq cr6,0x83ac078c
	if (cr6.eq) goto loc_83AC078C;
	// lbz r5,155(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 155);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x83ac01e0
	if (cr0.eq) goto loc_83AC01E0;
	// addi r10,r26,108
	ctx.r10.s64 = ctx.r26.s64 + 108;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r9,r26,106
	ctx.r9.s64 = ctx.r26.s64 + 106;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83AC01E0;
	sub_83ABC2E0(ctx, base);
loc_83AC01E0:
	// lhz r5,150(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x83ac020c
	if (cr0.eq) goto loc_83AC020C;
	// addi r10,r26,108
	ctx.r10.s64 = ctx.r26.s64 + 108;
	// lhz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r9,r26,106
	ctx.r9.s64 = ctx.r26.s64 + 106;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83AC020C;
	sub_83ABC2E0(ctx, base);
loc_83AC020C:
	// lbz r30,154(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 154);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x83abc540
	ctx.lr = 0x83AC0234;
	sub_83ABC540(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc678
	ctx.lr = 0x83AC025C;
	sub_83ABC678(ctx, base);
	// li r16,2
	ctx.r16.s64 = 2;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// sth r23,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r23.u16);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq 0x83ac0714
	if (cr0.eq) goto loc_83AC0714;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// addi r22,r11,-2
	ctx.r22.s64 = ctx.r11.s64 + -2;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lfs f30,23372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f30.f64 = double(temp.f32);
	// addi r17,r11,-22544
	ctx.r17.s64 = ctx.r11.s64 + -22544;
loc_83AC0290:
	// cmplwi cr6,r20,7
	cr6.compare<uint32_t>(ctx.r20.u32, 7, xer);
	// bgt cr6,0x83ac0360
	if (cr6.gt) goto loc_83AC0360;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83ac02ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC02EC;
	// bdzf 4*cr6+eq,0x83ac02ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC02EC;
	// bdzf 4*cr6+eq,0x83ac0318
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC0318;
	// bdzf 4*cr6+eq,0x83ac036c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC036C;
	// bdzf 4*cr6+eq,0x83ac03e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC03E4;
	// bdzf 4*cr6+eq,0x83ac02ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AC02EC;
	// bne cr6,0x83ac0420
	if (!cr6.eq) goto loc_83AC0420;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// sth r24,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r24.u16);
loc_83AC02C4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x839f82f0
	ctx.lr = 0x83AC02D4;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac0488
	if (cr0.eq) goto loc_83AC0488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8d120
	ctx.lr = 0x83AC02E4;
	sub_83A8D120(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// b 0x83ac0490
	goto loc_83AC0490;
loc_83AC02EC:
	// lha r11,152(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 152));
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83ac0360
	if (!cr6.eq) goto loc_83AC0360;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
loc_83AC0300:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// bl 0x83ac4f48
	ctx.lr = 0x83AC0314;
	sub_83AC4F48(ctx, base);
	// b 0x83ac02c4
	goto loc_83AC02C4;
loc_83AC0318:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83ac0340
	if (cr6.eq) goto loc_83AC0340;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// clrlwi r11,r14,16
	ctx.r11.u64 = ctx.r14.u32 & 0xFFFF;
	// lbz r10,-2(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -2);
	// lbz r9,-1(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r14,r11,16
	ctx.r14.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AC0340:
	// clrlwi r11,r14,16
	ctx.r11.u64 = ctx.r14.u32 & 0xFFFF;
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83ac0480
	if (!cr6.lt) goto loc_83AC0480;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83ac0360
	if (!cr6.eq) goto loc_83AC0360;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r14,r11,16
	ctx.r14.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AC0360:
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x83ac06f4
	goto loc_83AC06F4;
loc_83AC036C:
	// lha r11,152(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 152));
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83ac03d4
	if (cr6.eq) goto loc_83AC03D4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83ac03a0
	if (cr6.eq) goto loc_83AC03A0;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r11,r14,16
	ctx.r11.u64 = ctx.r14.u32 & 0xFFFF;
	// lbz r9,1(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r14,r11,16
	ctx.r14.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AC03A0:
	// clrlwi r11,r14,16
	ctx.r11.u64 = ctx.r14.u32 & 0xFFFF;
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83ac03c4
	if (cr6.lt) goto loc_83AC03C4;
	// sth r24,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r24.u16);
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(ctx.r19.u32, 1, xer);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// ble cr6,0x83ac02c4
	if (!cr6.gt) goto loc_83AC02C4;
	// b 0x83ac0300
	goto loc_83AC0300;
loc_83AC03C4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83ac03dc
	if (!cr6.eq) goto loc_83AC03DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r14,r11,16
	ctx.r14.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AC03D4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83ac0360
	if (cr6.eq) goto loc_83AC0360;
loc_83AC03DC:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// b 0x83ac0360
	goto loc_83AC0360;
loc_83AC03E4:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,-2(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -2);
	// lbz r10,-1(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f13,f30,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83ac0360
	if (cr6.lt) goto loc_83AC0360;
	// b 0x83ac0480
	goto loc_83AC0480;
loc_83AC0420:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// lbz r11,-2(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -2);
	// lbz r10,-1(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r14,r11,16
	ctx.r14.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x83ac6758
	ctx.lr = 0x83AC044C;
	sub_83AC6758(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a8cc50
	ctx.lr = 0x83AC0460;
	sub_83A8CC50(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// bl 0x83aaddb8
	ctx.lr = 0x83AC0478;
	sub_83AADDB8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ac0360
	if (!cr6.eq) goto loc_83AC0360;
loc_83AC0480:
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// b 0x83ac02c4
	goto loc_83AC02C4;
loc_83AC0488:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
loc_83AC0490:
	// lbzu r11,2(r22)
	ea = 2 + ctx.r22.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// lbzu r8,2(r21)
	ea = 2 + ctx.r21.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r21.u32 = ea;
	// rlwimi r8,r11,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbzu r10,2(r22)
	ea = 2 + ctx.r22.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lbzu r9,2(r21)
	ea = 2 + ctx.r21.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r21.u32 = ea;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r4,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r4.u16);
	// beq cr6,0x83ac06b4
	if (cr6.eq) goto loc_83AC06B4;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ac0674
	if (cr6.eq) goto loc_83AC0674;
	// bl 0x83aa51e8
	ctx.lr = 0x83AC04CC;
	sub_83AA51E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83ac0764
	if (cr0.eq) goto loc_83AC0764;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r24,208(r30)
	PPC_STORE_U16(ctx.r30.u32 + 208, ctx.r24.u16);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// stw r23,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r23.u32);
	// stw r23,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r23.u32);
	// sth r10,210(r30)
	PPC_STORE_U16(ctx.r30.u32 + 210, ctx.r10.u16);
	// stw r23,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r23.u32);
	// stb r23,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r23.u8);
	// stw r23,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r23.u32);
	// stw r23,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r23.u32);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac4d88
	ctx.lr = 0x83AC0524;
	sub_83AC4D88(ctx, base);
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83aadb98
	ctx.lr = 0x83AC0530;
	sub_83AADB98(ctx, base);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83ac0594
	if (cr6.eq) goto loc_83AC0594;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC054C;
	sub_83AC6090(ctx, base);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x83ab3320
	ctx.lr = 0x83AC0570;
	sub_83AB3320(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac058c
	if (!cr6.eq) goto loc_83AC058C;
loc_83AC057C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83aa6a18
	ctx.lr = 0x83AC0588;
	sub_83AA6A18(ctx, base);
	// b 0x83ac06f4
	goto loc_83AC06F4;
loc_83AC058C:
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
loc_83AC0594:
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83ac05f0
	if (cr6.eq) goto loc_83AC05F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC05B0;
	sub_83AC6090(ctx, base);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83ab3320
	ctx.lr = 0x83AC05DC;
	sub_83AB3320(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac057c
	if (cr6.eq) goto loc_83AC057C;
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
loc_83AC05F0:
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac0604
	if (!cr6.eq) goto loc_83AC0604;
	// stw r30,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r30.u32);
	// b 0x83ac0610
	goto loc_83AC0610;
loc_83AC0604:
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AC0610:
	// lwz r11,244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// stw r30,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r30.u32);
	// addi r28,r30,227
	ctx.r28.s64 = ctx.r30.s64 + 227;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r30,10
	ctx.r27.s64 = ctx.r30.s64 + 10;
	// stw r11,244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 244, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lbz r5,235(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 235);
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x83abc2e0
	ctx.lr = 0x83AC0650;
	sub_83ABC2E0(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lhz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 228);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhz r5,230(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 230);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc2e0
	ctx.lr = 0x83AC0674;
	sub_83ABC2E0(ctx, base);
loc_83AC0674:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac06e4
	if (cr6.eq) goto loc_83AC06E4;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r16,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r16.u8);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x83abf778
	ctx.lr = 0x83AC06B0;
	sub_83ABF778(ctx, base);
	// b 0x83ac06e4
	goto loc_83AC06E4;
loc_83AC06B4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83ac52a0
	ctx.lr = 0x83AC06C8;
	sub_83AC52A0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abc938
	ctx.lr = 0x83AC06E4;
	sub_83ABC938(ctx, base);
loc_83AC06E4:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// ble cr6,0x83ac06f4
	if (!cr6.gt) goto loc_83AC06F4;
	// cmpwi cr6,r20,6
	cr6.compare<int32_t>(ctx.r20.s32, 6, xer);
	// ble cr6,0x83ac0764
	if (!cr6.gt) goto loc_83AC0764;
loc_83AC06F4:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, xer);
	// blt cr6,0x83ac0290
	if (cr6.lt) goto loc_83AC0290;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac0764
	if (!cr6.eq) goto loc_83AC0764;
loc_83AC0714:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,26604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac0764
	if (cr6.eq) goto loc_83AC0764;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831ea798
	ctx.lr = 0x83AC0734;
	sub_831EA798(ctx, base);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83AC0748;
	sub_83AA3CE8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r10,26604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83AC0764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC0764:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r5,170(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// bl 0x83abd410
	ctx.lr = 0x83AC0778;
	sub_83ABD410(ctx, base);
	// bl 0x83aa54b8
	ctx.lr = 0x83AC077C;
	sub_83AA54B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83AC078C;
	sub_83ABBFC8(ctx, base);
loc_83AC078C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC079C"))) PPC_WEAK_FUNC(sub_83AC079C);
PPC_FUNC_IMPL(__imp__sub_83AC079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC07A0"))) PPC_WEAK_FUNC(sub_83AC07A0);
PPC_FUNC_IMPL(__imp__sub_83AC07A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AC07A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r24,64(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r23,60(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bne 0x83ac07d4
	if (!cr0.eq) goto loc_83AC07D4;
	// bl 0x83abfdc0
	ctx.lr = 0x83AC07D0;
	sub_83ABFDC0(ctx, base);
	// b 0x83ac09a4
	goto loc_83AC09A4;
loc_83AC07D4:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x83ac07e8
	if (!cr6.eq) goto loc_83AC07E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abf860
	ctx.lr = 0x83AC07E4;
	sub_83ABF860(ctx, base);
	// b 0x83ac09a4
	goto loc_83AC09A4;
loc_83AC07E8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// sth r27,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r27.u16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r29,588
	ctx.r3.s64 = ctx.r29.s64 + 588;
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x83ac4d88
	ctx.lr = 0x83AC0814;
	sub_83AC4D88(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,11
	ctx.r28.s64 = 11;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// lbz r11,-2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2);
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x83ac08a0
	if (cr6.eq) goto loc_83AC08A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abd768
	ctx.lr = 0x83AC0844;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac09a4
	if (cr0.eq) goto loc_83AC09A4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC0860;
	sub_83AC6090(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab3320
	ctx.lr = 0x83AC0894;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac09a4
	if (cr6.eq) goto loc_83AC09A4;
loc_83AC08A0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83ac091c
	if (cr6.eq) goto loc_83AC091C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abd768
	ctx.lr = 0x83AC08B4;
	sub_83ABD768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac09a4
	if (cr0.eq) goto loc_83AC09A4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83AC08D0;
	sub_83AC6090(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// beq cr6,0x83ac08ec
	if (cr6.eq) goto loc_83AC08EC;
	// li r8,4
	ctx.r8.s64 = 4;
loc_83AC08EC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab3320
	ctx.lr = 0x83AC0910;
	sub_83AB3320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac09a4
	if (cr6.eq) goto loc_83AC09A4;
loc_83AC091C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x839f82f0
	ctx.lr = 0x83AC0930;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac0948
	if (cr0.eq) goto loc_83AC0948;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a8d120
	ctx.lr = 0x83AC0940;
	sub_83A8D120(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// b 0x83ac094c
	goto loc_83AC094C;
loc_83AC0948:
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
loc_83AC094C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// stb r10,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x83abf778
	ctx.lr = 0x83AC0974;
	sub_83ABF778(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// sth r25,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r25.u16);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// beq cr6,0x83ac099c
	if (cr6.eq) goto loc_83AC099C;
	// bl 0x83aa54b8
	ctx.lr = 0x83AC098C;
	sub_83AA54B8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83abbfc8
	ctx.lr = 0x83AC099C;
	sub_83ABBFC8(ctx, base);
loc_83AC099C:
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r23,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r23.u32);
loc_83AC09A4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC09AC"))) PPC_WEAK_FUNC(sub_83AC09AC);
PPC_FUNC_IMPL(__imp__sub_83AC09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC09B0"))) PPC_WEAK_FUNC(sub_83AC09B0);
PPC_FUNC_IMPL(__imp__sub_83AC09B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC09B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC09D8;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// sth r31,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r31.u16);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// sth r9,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r9.u16);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// sth r9,232(r1)
	PPC_STORE_U16(ctx.r1.u32 + 232, ctx.r9.u16);
	// bl 0x83a81ee8
	ctx.lr = 0x83AC0A28;
	sub_83A81EE8(ctx, base);
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x831ea798
	ctx.lr = 0x83AC0A38;
	sub_831EA798(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// beq cr6,0x83ac0a60
	if (cr6.eq) goto loc_83AC0A60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aad150
	ctx.lr = 0x83AC0A5C;
	sub_83AAD150(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_83AC0A60:
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x83a9bd40
	ctx.lr = 0x83AC0A6C;
	sub_83A9BD40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83aaf8d8
	ctx.lr = 0x83AC0A80;
	sub_83AAF8D8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// ble 0x83ac0b40
	if (!cr0.gt) goto loc_83AC0B40;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83ac0b40
	if (!cr6.gt) goto loc_83AC0B40;
loc_83AC0A98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aaf8e0
	ctx.lr = 0x83AC0AA4;
	sub_83AAF8E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r3,17
	ctx.r3.u64 = ctx.r3.u32 & 0x7FFF;
	// bl 0x83a8f4d0
	ctx.lr = 0x83AC0AB4;
	sub_83A8F4D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac0b34
	if (cr0.eq) goto loc_83AC0B34;
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ac0afc
	if (cr6.eq) goto loc_83AC0AFC;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a99898
	ctx.lr = 0x83AC0AD4;
	sub_83A99898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac0b34
	if (cr0.eq) goto loc_83AC0B34;
	// lbz r11,257(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 257);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83ac0b34
	if (!cr6.eq) goto loc_83AC0B34;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83AC0AF8;
	sub_83AB31C0(ctx, base);
	// b 0x83ac0b34
	goto loc_83AC0B34;
loc_83AC0AFC:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ac0b34
	if (cr0.eq) goto loc_83AC0B34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x83aad908
	ctx.lr = 0x83AC0B14;
	sub_83AAD908(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ac0b34
	if (!cr6.eq) goto loc_83AC0B34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab1ef0
	ctx.lr = 0x83AC0B34;
	sub_83AB1EF0(ctx, base);
loc_83AC0B34:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83ac0a98
	if (cr6.lt) goto loc_83AC0A98;
loc_83AC0B40:
	// stb r27,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r27.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83abf778
	ctx.lr = 0x83AC0B50;
	sub_83ABF778(ctx, base);
loc_83AC0B50:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac0b9c
	if (cr6.eq) goto loc_83AC0B9C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x83ab5a70
	ctx.lr = 0x83AC0B98;
	sub_83AB5A70(ctx, base);
	// b 0x83ac0b50
	goto loc_83AC0B50;
loc_83AC0B9C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC0BA4"))) PPC_WEAK_FUNC(sub_83AC0BA4);
PPC_FUNC_IMPL(__imp__sub_83AC0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC0BA8"))) PPC_WEAK_FUNC(sub_83AC0BA8);
PPC_FUNC_IMPL(__imp__sub_83AC0BA8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,29952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29952);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ac0bdc
	if (!cr6.eq) goto loc_83AC0BDC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,29952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29952, ctx.r10.u32);
loc_83AC0BDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r3,r11,424
	ctx.r3.s64 = ctx.r11.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83AC0BF0;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac0c0c
	if (!cr0.eq) goto loc_83AC0C0C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26144
	ctx.r4.s64 = ctx.r11.s64 + -26144;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC0C08;
	sub_831EA3F0(ctx, base);
	// b 0x83ac0c24
	goto loc_83AC0C24;
loc_83AC0C0C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x83ac09b0
	ctx.lr = 0x83AC0C24;
	sub_83AC09B0(ctx, base);
loc_83AC0C24:
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

__attribute__((alias("__imp__sub_83AC0C3C"))) PPC_WEAK_FUNC(sub_83AC0C3C);
PPC_FUNC_IMPL(__imp__sub_83AC0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC0C40"))) PPC_WEAK_FUNC(sub_83AC0C40);
PPC_FUNC_IMPL(__imp__sub_83AC0C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// stw r11,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_83AC0C5C:
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83ac0c5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC0C5C;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r11.u32);
	// addi r8,r3,608
	ctx.r8.s64 = ctx.r3.s64 + 608;
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AC0C88:
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83ac0c88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC0C88;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r11.u32);
	// addi r8,r3,640
	ctx.r8.s64 = ctx.r3.s64 + 640;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AC0CA4:
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83ac0ca4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC0CA4;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
	// addi r9,r3,656
	ctx.r9.s64 = ctx.r3.s64 + 656;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AC0CC4:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83ac0cc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC0CC4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r11.u32);
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r9.u32);
	// addi r9,r3,712
	ctx.r9.s64 = ctx.r3.s64 + 712;
	// stw r11,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r11.u32);
loc_83AC0CE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// lwz r8,748(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83ac0ce8
	if (cr6.lt) goto loc_83AC0CE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC0D00"))) PPC_WEAK_FUNC(sub_83AC0D00);
PPC_FUNC_IMPL(__imp__sub_83AC0D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AC0D08;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,688(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 688);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0d74
	if (!cr6.gt) goto loc_83AC0D74;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// bgt cr6,0x83ac0d74
	if (cr6.gt) goto loc_83AC0D74;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0d74
	if (!cr6.gt) goto loc_83AC0D74;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AC0D38:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x83ac0d68
	if (cr6.eq) goto loc_83AC0D68;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ac0d68
	if (cr6.eq) goto loc_83AC0D68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AC0D68;
	sub_83AB1EE8(ctx, base);
loc_83AC0D68:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83ac0d38
	if (!cr0.eq) goto loc_83AC0D38;
loc_83AC0D74:
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0ddc
	if (!cr6.gt) goto loc_83AC0DDC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x83ac0ddc
	if (cr6.gt) goto loc_83AC0DDC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0ddc
	if (!cr6.gt) goto loc_83AC0DDC;
	// addi r31,r28,516
	ctx.r31.s64 = ctx.r28.s64 + 516;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AC0D98:
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ac0db4
	if (cr0.eq) goto loc_83AC0DB4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aad7a0
	ctx.lr = 0x83AC0DB4;
	sub_83AAD7A0(ctx, base);
loc_83AC0DB4:
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ac0dd0
	if (cr0.eq) goto loc_83AC0DD0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aad7b8
	ctx.lr = 0x83AC0DD0;
	sub_83AAD7B8(ctx, base);
loc_83AC0DD0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x83ac0d98
	if (!cr0.eq) goto loc_83AC0D98;
loc_83AC0DDC:
	// lwz r11,696(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 696);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0e38
	if (!cr6.gt) goto loc_83AC0E38;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bgt cr6,0x83ac0e38
	if (cr6.gt) goto loc_83AC0E38;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0e38
	if (!cr6.gt) goto loc_83AC0E38;
	// addi r31,r28,608
	ctx.r31.s64 = ctx.r28.s64 + 608;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83AC0E00:
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x83ac0e2c
	if (cr6.eq) goto loc_83AC0E2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83AC0E18;
	sub_83A90E48(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83aafa70
	ctx.lr = 0x83AC0E2C;
	sub_83AAFA70(ctx, base);
loc_83AC0E2C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x83ac0e00
	if (!cr0.eq) goto loc_83AC0E00;
loc_83AC0E38:
	// lwz r11,700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0e80
	if (!cr6.gt) goto loc_83AC0E80;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x83ac0e80
	if (cr6.gt) goto loc_83AC0E80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0e80
	if (!cr6.gt) goto loc_83AC0E80;
	// addi r31,r28,640
	ctx.r31.s64 = ctx.r28.s64 + 640;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AC0E5C:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ac0e74
	if (cr6.eq) goto loc_83AC0E74;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf768
	ctx.lr = 0x83AC0E74;
	sub_83AAF768(ctx, base);
loc_83AC0E74:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x83ac0e5c
	if (!cr0.eq) goto loc_83AC0E5C;
loc_83AC0E80:
	// lwz r4,708(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// lwz r31,712(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ac0e98
	if (cr6.eq) goto loc_83AC0E98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aafb00
	ctx.lr = 0x83AC0E98;
	sub_83AAFB00(ctx, base);
loc_83AC0E98:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac0eac
	if (cr6.eq) goto loc_83AC0EAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aafb20
	ctx.lr = 0x83AC0EAC;
	sub_83AAFB20(ctx, base);
loc_83AC0EAC:
	// lwz r11,704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0ee8
	if (!cr6.gt) goto loc_83AC0EE8;
	// addi r31,r28,656
	ctx.r31.s64 = ctx.r28.s64 + 656;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AC0EC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r11,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ac0edc
	if (cr6.eq) goto loc_83AC0EDC;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aadcd0
	ctx.lr = 0x83AC0EDC;
	sub_83AADCD0(ctx, base);
loc_83AC0EDC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83ac0ec0
	if (!cr0.eq) goto loc_83AC0EC0;
loc_83AC0EE8:
	// lwz r11,752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 752);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0f2c
	if (!cr6.gt) goto loc_83AC0F2C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x83ac0f2c
	if (cr6.gt) goto loc_83AC0F2C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac0f2c
	if (!cr6.gt) goto loc_83AC0F2C;
	// addi r31,r28,716
	ctx.r31.s64 = ctx.r28.s64 + 716;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AC0F0C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ac0f20
	if (cr6.eq) goto loc_83AC0F20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aadc30
	ctx.lr = 0x83AC0F20;
	sub_83AADC30(ctx, base);
loc_83AC0F20:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83ac0f0c
	if (!cr0.eq) goto loc_83AC0F0C;
loc_83AC0F2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aad118
	ctx.lr = 0x83AC0F34;
	sub_83AAD118(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC0F3C"))) PPC_WEAK_FUNC(sub_83AC0F3C);
PPC_FUNC_IMPL(__imp__sub_83AC0F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC0F40"))) PPC_WEAK_FUNC(sub_83AC0F40);
PPC_FUNC_IMPL(__imp__sub_83AC0F40) {
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
	// lwz r8,688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83ac0f90
	if (!cr6.gt) goto loc_83AC0F90;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83AC0F70:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ac0fcc
	if (cr6.eq) goto loc_83AC0FCC;
	// lwz r7,688(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ac0f70
	if (cr6.lt) goto loc_83AC0F70;
loc_83AC0F90:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83AC0F94:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ac0ff8
	if (!cr6.eq) goto loc_83AC0FF8;
	// cmpwi cr6,r8,64
	cr6.compare<int32_t>(ctx.r8.s32, 64, xer);
	// bge cr6,0x83ac0fd8
	if (!cr6.lt) goto loc_83AC0FD8;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// sthx r4,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r11.u32);
	// b 0x83ac0fe8
	goto loc_83AC0FE8;
loc_83AC0FCC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x83ac0f94
	goto loc_83AC0F94;
loc_83AC0FD8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-26028
	ctx.r4.s64 = ctx.r11.s64 + -26028;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC0FE8;
	sub_831EA3F0(ctx, base);
loc_83AC0FE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ac0ff8
	if (!cr6.eq) goto loc_83AC0FF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac1000
	goto loc_83AC1000;
loc_83AC0FF8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC1000:
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

__attribute__((alias("__imp__sub_83AC1018"))) PPC_WEAK_FUNC(sub_83AC1018);
PPC_FUNC_IMPL(__imp__sub_83AC1018) {
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83ac0f40
	ctx.lr = 0x83AC1030;
	sub_83AC0F40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1040"))) PPC_WEAK_FUNC(sub_83AC1040);
PPC_FUNC_IMPL(__imp__sub_83AC1040) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac0f40
	sub_83AC0F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1044"))) PPC_WEAK_FUNC(sub_83AC1044);
PPC_FUNC_IMPL(__imp__sub_83AC1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1048"))) PPC_WEAK_FUNC(sub_83AC1048);
PPC_FUNC_IMPL(__imp__sub_83AC1048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,688(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83ac107c
	if (!cr6.gt) goto loc_83AC107C;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83AC1060:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac1094
	if (cr6.eq) goto loc_83AC1094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83ac1060
	if (cr6.lt) goto loc_83AC1060;
loc_83AC107C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AC1080:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac10a0
	if (!cr6.eq) goto loc_83AC10A0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_83AC1094:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x83ac1080
	goto loc_83AC1080;
loc_83AC10A0:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC10A8"))) PPC_WEAK_FUNC(sub_83AC10A8);
PPC_FUNC_IMPL(__imp__sub_83AC10A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,688(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83ac10e0
	if (!cr6.gt) goto loc_83AC10E0;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83AC10C0:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac1130
	if (cr6.eq) goto loc_83AC1130;
	// lwz r7,688(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ac10c0
	if (cr6.lt) goto loc_83AC10C0;
loc_83AC10E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AC10E4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r9.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ac1118
	if (cr6.eq) goto loc_83AC1118;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83AC1118:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r9,-1
	ctx.r9.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_83AC1130:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x83ac10e4
	goto loc_83AC10E4;
}

__attribute__((alias("__imp__sub_83AC113C"))) PPC_WEAK_FUNC(sub_83AC113C);
PPC_FUNC_IMPL(__imp__sub_83AC113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1140"))) PPC_WEAK_FUNC(sub_83AC1140);
PPC_FUNC_IMPL(__imp__sub_83AC1140) {
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
	// lwz r10,692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83ac11b4
	if (!cr6.gt) goto loc_83AC11B4;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,512
	ctx.r10.s64 = ctx.r3.s64 + 512;
loc_83AC1164:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ac11a4
	if (cr6.eq) goto loc_83AC11A4;
	// lwz r8,692(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83ac1164
	if (cr6.lt) goto loc_83AC1164;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83ac11a4
	if (cr6.lt) goto loc_83AC11A4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-25984
	ctx.r4.s64 = ctx.r11.s64 + -25984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC11A0;
	sub_831EA400(ctx, base);
	// b 0x83ac11ac
	goto loc_83AC11AC;
loc_83AC11A4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83ac11b4
	if (!cr6.lt) goto loc_83AC11B4;
loc_83AC11AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac11ec
	goto loc_83AC11EC;
loc_83AC11B4:
	// addi r9,r11,43
	ctx.r9.s64 = ctx.r11.s64 + 43;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// stfsx f1,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r4,512(r10)
	PPC_STORE_U16(ctx.r10.u32 + 512, ctx.r4.u16);
	// stb r9,514(r10)
	PPC_STORE_U8(ctx.r10.u32 + 514, ctx.r9.u8);
	// lwz r10,692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ac11e8
	if (cr6.lt) goto loc_83AC11E8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r11.u32);
loc_83AC11E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC11EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC11FC"))) PPC_WEAK_FUNC(sub_83AC11FC);
PPC_FUNC_IMPL(__imp__sub_83AC11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1200"))) PPC_WEAK_FUNC(sub_83AC1200);
PPC_FUNC_IMPL(__imp__sub_83AC1200) {
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
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac1274
	if (!cr6.gt) goto loc_83AC1274;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
loc_83AC1224:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ac1264
	if (cr6.eq) goto loc_83AC1264;
	// lwz r8,692(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83ac1224
	if (cr6.lt) goto loc_83AC1224;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83ac1264
	if (cr6.lt) goto loc_83AC1264;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-25984
	ctx.r4.s64 = ctx.r11.s64 + -25984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC1260;
	sub_831EA400(ctx, base);
	// b 0x83ac126c
	goto loc_83AC126C;
loc_83AC1264:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x83ac1274
	if (!cr6.lt) goto loc_83AC1274;
loc_83AC126C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac12a4
	goto loc_83AC12A4;
loc_83AC1274:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f1,520(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// sth r4,512(r11)
	PPC_STORE_U16(ctx.r11.u32 + 512, ctx.r4.u16);
	// stb r9,515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 515, ctx.r9.u8);
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ac12a0
	if (cr6.lt) goto loc_83AC12A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r11.u32);
loc_83AC12A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC12A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC12B4"))) PPC_WEAK_FUNC(sub_83AC12B4);
PPC_FUNC_IMPL(__imp__sub_83AC12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC12B8"))) PPC_WEAK_FUNC(sub_83AC12B8);
PPC_FUNC_IMPL(__imp__sub_83AC12B8) {
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
	// lwz r10,696(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x83ac12ec
	if (cr6.lt) goto loc_83AC12EC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25896
	ctx.r4.s64 = ctx.r11.s64 + -25896;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC12E4;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac1308
	goto loc_83AC1308;
loc_83AC12EC:
	// addi r10,r10,304
	ctx.r10.s64 = ctx.r10.s64 + 304;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// lwz r10,696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r10.u32);
loc_83AC1308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1318"))) PPC_WEAK_FUNC(sub_83AC1318);
PPC_FUNC_IMPL(__imp__sub_83AC1318) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,304
	ctx.r11.s64 = ctx.r4.s64 + 304;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1328"))) PPC_WEAK_FUNC(sub_83AC1328);
PPC_FUNC_IMPL(__imp__sub_83AC1328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1330"))) PPC_WEAK_FUNC(sub_83AC1330);
PPC_FUNC_IMPL(__imp__sub_83AC1330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r10,700(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,640
	ctx.r11.s64 = ctx.r3.s64 + 640;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AC135C:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac135c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC135C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1368"))) PPC_WEAK_FUNC(sub_83AC1368);
PPC_FUNC_IMPL(__imp__sub_83AC1368) {
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
	// lwz r10,700(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83ac13d4
	if (!cr6.gt) goto loc_83AC13D4;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,640
	ctx.r10.s64 = ctx.r3.s64 + 640;
loc_83AC1390:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac13ec
	if (cr6.eq) goto loc_83AC13EC;
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ac1390
	if (cr6.lt) goto loc_83AC1390;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// blt cr6,0x83ac13d4
	if (cr6.lt) goto loc_83AC13D4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-25856
	ctx.r4.s64 = ctx.r11.s64 + -25856;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC13CC;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac13f0
	goto loc_83AC13F0;
loc_83AC13D4:
	// addi r10,r9,320
	ctx.r10.s64 = ctx.r9.s64 + 320;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r10.u32);
loc_83AC13EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC13F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1400"))) PPC_WEAK_FUNC(sub_83AC1400);
PPC_FUNC_IMPL(__imp__sub_83AC1400) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,320
	ctx.r11.s64 = ctx.r4.s64 + 320;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1410"))) PPC_WEAK_FUNC(sub_83AC1410);
PPC_FUNC_IMPL(__imp__sub_83AC1410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,700(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83ac144c
	if (!cr6.gt) goto loc_83AC144C;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,640
	ctx.r10.s64 = ctx.r3.s64 + 640;
loc_83AC142C:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac1454
	if (cr6.eq) goto loc_83AC1454;
	// lwz r6,700(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x83ac142c
	if (cr6.lt) goto loc_83AC142C;
loc_83AC144C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC1454:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// stw r10,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r10.u32);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x83ac147c
	if (cr6.eq) goto loc_83AC147C;
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// addi r9,r9,320
	ctx.r9.s64 = ctx.r9.s64 + 320;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
loc_83AC147C:
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1494"))) PPC_WEAK_FUNC(sub_83AC1494);
PPC_FUNC_IMPL(__imp__sub_83AC1494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1498"))) PPC_WEAK_FUNC(sub_83AC1498);
PPC_FUNC_IMPL(__imp__sub_83AC1498) {
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
	// lwz r9,704(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwimi r5,r4,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83ac1514
	if (!cr6.gt) goto loc_83AC1514;
	// addi r9,r3,656
	ctx.r9.s64 = ctx.r3.s64 + 656;
loc_83AC14C4:
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac1504
	if (cr6.eq) goto loc_83AC1504;
	// lwz r7,704(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ac14c4
	if (cr6.lt) goto loc_83AC14C4;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83ac1514
	if (cr6.lt) goto loc_83AC1514;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25776
	ctx.r4.s64 = ctx.r11.s64 + -25776;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC14FC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac1530
	goto loc_83AC1530;
loc_83AC1504:
	// addi r10,r10,164
	ctx.r10.s64 = ctx.r10.s64 + 164;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// b 0x83ac152c
	goto loc_83AC152C;
loc_83AC1514:
	// addi r10,r10,164
	ctx.r10.s64 = ctx.r10.s64 + 164;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r10.u32);
loc_83AC152C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC1530:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1540"))) PPC_WEAK_FUNC(sub_83AC1540);
PPC_FUNC_IMPL(__imp__sub_83AC1540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r9,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// ble cr6,0x83ac1578
	if (!cr6.gt) goto loc_83AC1578;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC1564:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac1564
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC1564;
loc_83AC1578:
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// stw r9,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r9.u32);
	// ble cr6,0x83ac15a8
	if (!cr6.gt) goto loc_83AC15A8;
	// addi r10,r3,608
	ctx.r10.s64 = ctx.r3.s64 + 608;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq 0x83ac15a8
	if (cr0.eq) goto loc_83AC15A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC15A0:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac15a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC15A0;
loc_83AC15A8:
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// stw r9,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac15d4
	if (!cr6.gt) goto loc_83AC15D4;
	// addi r10,r3,640
	ctx.r10.s64 = ctx.r3.s64 + 640;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq 0x83ac15d4
	if (cr0.eq) goto loc_83AC15D4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC15CC:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac15cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC15CC;
loc_83AC15D4:
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// stw r9,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac1604
	if (!cr6.gt) goto loc_83AC1604;
	// addi r10,r3,656
	ctx.r10.s64 = ctx.r3.s64 + 656;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ac1604
	if (cr0.eq) goto loc_83AC1604;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC15FC:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac15fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC15FC;
loc_83AC1604:
	// lwz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// stw r9,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r9.u32);
	// stw r9,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r3,716
	ctx.r10.s64 = ctx.r3.s64 + 716;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beqlr 
	if (cr0.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC1630:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac1630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC1630;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC163C"))) PPC_WEAK_FUNC(sub_83AC163C);
PPC_FUNC_IMPL(__imp__sub_83AC163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1640"))) PPC_WEAK_FUNC(sub_83AC1640);
PPC_FUNC_IMPL(__imp__sub_83AC1640) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac1540
	sub_83AC1540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1644"))) PPC_WEAK_FUNC(sub_83AC1644);
PPC_FUNC_IMPL(__imp__sub_83AC1644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1648"))) PPC_WEAK_FUNC(sub_83AC1648);
PPC_FUNC_IMPL(__imp__sub_83AC1648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC165C"))) PPC_WEAK_FUNC(sub_83AC165C);
PPC_FUNC_IMPL(__imp__sub_83AC165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1660"))) PPC_WEAK_FUNC(sub_83AC1660);
PPC_FUNC_IMPL(__imp__sub_83AC1660) {
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
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac168c
	if (cr6.eq) goto loc_83AC168C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83ac16cc
	goto loc_83AC16CC;
loc_83AC168C:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83ac16b8
	if (cr6.eq) goto loc_83AC16B8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83ac16ac
	if (cr6.eq) goto loc_83AC16AC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-25584
	ctx.r4.s64 = ctx.r11.s64 + -25584;
	// b 0x83ac16c4
	goto loc_83AC16C4;
loc_83AC16AC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-25624
	ctx.r4.s64 = ctx.r11.s64 + -25624;
	// b 0x83ac16c4
	goto loc_83AC16C4;
loc_83AC16B8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25660
	ctx.r4.s64 = ctx.r11.s64 + -25660;
loc_83AC16C4:
	// bl 0x831ea3f0
	ctx.lr = 0x83AC16C8;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AC16CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC16DC"))) PPC_WEAK_FUNC(sub_83AC16DC);
PPC_FUNC_IMPL(__imp__sub_83AC16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC16E0"))) PPC_WEAK_FUNC(sub_83AC16E0);
PPC_FUNC_IMPL(__imp__sub_83AC16E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83ac1660
	ctx.lr = 0x83AC1700;
	sub_83AC1660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac1710
	if (!cr0.eq) goto loc_83AC1710;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac1730
	goto loc_83AC1730;
loc_83AC1710:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC1730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC1730:
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

__attribute__((alias("__imp__sub_83AC1748"))) PPC_WEAK_FUNC(sub_83AC1748);
PPC_FUNC_IMPL(__imp__sub_83AC1748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC1750;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83ac1660
	ctx.lr = 0x83AC1768;
	sub_83AC1660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac1798
	if (cr0.eq) goto loc_83AC1798;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC1798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC1798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC17A0"))) PPC_WEAK_FUNC(sub_83AC17A0);
PPC_FUNC_IMPL(__imp__sub_83AC17A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x83ac1660
	ctx.lr = 0x83AC17B8;
	sub_83AC1660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac17dc
	if (cr0.eq) goto loc_83AC17DC;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC17DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC17DC:
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

__attribute__((alias("__imp__sub_83AC17F0"))) PPC_WEAK_FUNC(sub_83AC17F0);
PPC_FUNC_IMPL(__imp__sub_83AC17F0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,29956
	ctx.r30.s64 = ctx.r11.s64 + 29956;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_83AC1810:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac1828
	if (cr6.eq) goto loc_83AC1828;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC1828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC1828:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ac1810
	if (cr6.lt) goto loc_83AC1810;
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

__attribute__((alias("__imp__sub_83AC1850"))) PPC_WEAK_FUNC(sub_83AC1850);
PPC_FUNC_IMPL(__imp__sub_83AC1850) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,29956
	ctx.r30.s64 = ctx.r11.s64 + 29956;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
loc_83AC1870:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac1888
	if (cr6.eq) goto loc_83AC1888;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC1888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC1888:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x83ac1870
	if (!cr6.lt) goto loc_83AC1870;
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

__attribute__((alias("__imp__sub_83AC18B0"))) PPC_WEAK_FUNC(sub_83AC18B0);
PPC_FUNC_IMPL(__imp__sub_83AC18B0) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83ac18d0
	if (!cr6.eq) goto loc_83AC18D0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83AC18D0:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29956
	ctx.r10.s64 = ctx.r10.s64 + 29956;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac1900
	if (!cr6.eq) goto loc_83AC1900;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25496
	ctx.r4.s64 = ctx.r11.s64 + -25496;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC18F8;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac1914
	goto loc_83AC1914;
loc_83AC1900:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC1910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_83AC1914:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1924"))) PPC_WEAK_FUNC(sub_83AC1924);
PPC_FUNC_IMPL(__imp__sub_83AC1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1928"))) PPC_WEAK_FUNC(sub_83AC1928);
PPC_FUNC_IMPL(__imp__sub_83AC1928) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83ac1954
	if (!cr6.eq) goto loc_83AC1954;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83AC1954:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29956
	ctx.r10.s64 = ctx.r10.s64 + 29956;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac1984
	if (!cr6.eq) goto loc_83AC1984;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25360
	ctx.r4.s64 = ctx.r11.s64 + -25360;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC197C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac19b0
	goto loc_83AC19B0;
loc_83AC1984:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r6,-8
	ctx.r5.s64 = ctx.r6.s64 + -8;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC19A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_83AC19B0:
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

__attribute__((alias("__imp__sub_83AC19C4"))) PPC_WEAK_FUNC(sub_83AC19C4);
PPC_FUNC_IMPL(__imp__sub_83AC19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC19C8"))) PPC_WEAK_FUNC(sub_83AC19C8);
PPC_FUNC_IMPL(__imp__sub_83AC19C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83AC19D0;
	__savegprlr_20(ctx, base);
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// divwu r10,r10,r6
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r6.u32);
	// twllei r6,0
	// blt cr6,0x83ac19ec
	if (cr6.lt) goto loc_83AC19EC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83AC19EC:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blt cr6,0x83ac19fc
	if (cr6.lt) goto loc_83AC19FC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83AC19FC:
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac1ae8
	if (!cr6.gt) goto loc_83AC1AE8;
	// addi r23,r3,-7
	ctx.r23.s64 = ctx.r3.s64 + -7;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subf r21,r4,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r4.s64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83AC1A1C:
	// add r11,r21,r24
	ctx.r11.u64 = ctx.r21.u64 + ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83ac1aac
	if (!cr6.gt) goto loc_83AC1AAC;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r6,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r6,12
	ctx.r30.s64 = ctx.r6.s64 * 12;
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r28,r6,20
	ctx.r28.s64 = ctx.r6.s64 * 20;
	// mulli r27,r6,24
	ctx.r27.s64 = ctx.r6.s64 * 24;
	// mulli r26,r6,28
	ctx.r26.s64 = ctx.r6.s64 * 28;
	// rlwinm r25,r6,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83AC1A54:
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfsx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpw cr6,r8,r23
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, xer);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f13,r4,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r31,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// stfsx f11,r30,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f10,r29,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f9,r28,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f8,r27,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r26,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// blt cr6,0x83ac1a54
	if (cr6.lt) goto loc_83AC1A54;
loc_83AC1AAC:
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ac1adc
	if (!cr6.lt) goto loc_83AC1ADC;
	// subf r4,r8,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83AC1ACC:
	// lfsx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfsux f0,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac1acc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC1ACC;
loc_83AC1ADC:
	// addic. r20,r20,-1
	xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x83ac1a1c
	if (!cr0.eq) goto loc_83AC1A1C;
loc_83AC1AE8:
	// cmpw cr6,r22,r6
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r6.s32, xer);
	// bge cr6,0x83ac1b94
	if (!cr6.lt) goto loc_83AC1B94;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r3,-7
	ctx.r28.s64 = ctx.r3.s64 + -7;
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r26,r22,r6
	ctx.r26.s64 = ctx.r6.s64 - ctx.r22.s64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83AC1B08:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83ac1b68
	if (!cr6.gt) goto loc_83AC1B68;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r4,r6,20
	ctx.r4.s64 = ctx.r6.s64 * 20;
	// mulli r31,r6,24
	ctx.r31.s64 = ctx.r6.s64 * 24;
	// mulli r30,r6,28
	ctx.r30.s64 = ctx.r6.s64 * 28;
	// rlwinm r29,r6,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
loc_83AC1B38:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r30,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// blt cr6,0x83ac1b38
	if (cr6.lt) goto loc_83AC1B38;
loc_83AC1B68:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ac1b88
	if (!cr6.lt) goto loc_83AC1B88;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AC1B80:
	// stfsux f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac1b80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC1B80;
loc_83AC1B88:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x83ac1b08
	if (!cr0.eq) goto loc_83AC1B08;
loc_83AC1B94:
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1B98"))) PPC_WEAK_FUNC(sub_83AC1B98);
PPC_FUNC_IMPL(__imp__sub_83AC1B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1BA4"))) PPC_WEAK_FUNC(sub_83AC1BA4);
PPC_FUNC_IMPL(__imp__sub_83AC1BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1BA8"))) PPC_WEAK_FUNC(sub_83AC1BA8);
PPC_FUNC_IMPL(__imp__sub_83AC1BA8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29988
	ctx.r31.s64 = ctx.r11.s64 + 29988;
	// lwz r3,29988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x831eee28
	ctx.lr = 0x83AC1BCC;
	sub_831EEE28(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83a94020
	ctx.lr = 0x83AC1BD8;
	sub_83A94020(ctx, base);
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

__attribute__((alias("__imp__sub_83AC1BEC"))) PPC_WEAK_FUNC(sub_83AC1BEC);
PPC_FUNC_IMPL(__imp__sub_83AC1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1BF0"))) PPC_WEAK_FUNC(sub_83AC1BF0);
PPC_FUNC_IMPL(__imp__sub_83AC1BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a950a0
	sub_83A950A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1BF4"))) PPC_WEAK_FUNC(sub_83AC1BF4);
PPC_FUNC_IMPL(__imp__sub_83AC1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1BF8"))) PPC_WEAK_FUNC(sub_83AC1BF8);
PPC_FUNC_IMPL(__imp__sub_83AC1BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,29988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29988, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1C04"))) PPC_WEAK_FUNC(sub_83AC1C04);
PPC_FUNC_IMPL(__imp__sub_83AC1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1C08"))) PPC_WEAK_FUNC(sub_83AC1C08);
PPC_FUNC_IMPL(__imp__sub_83AC1C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC1C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,332
	ctx.r31.s64 = ctx.r3.s64 + 332;
	// li r30,4
	ctx.r30.s64 = 4;
loc_83AC1C24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC1C48;
	sub_83A7A0D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83ac1c24
	if (!cr0.eq) goto loc_83AC1C24;
	// stw r29,220(r28)
	PPC_STORE_U32(ctx.r28.u32 + 220, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1C5C"))) PPC_WEAK_FUNC(sub_83AC1C5C);
PPC_FUNC_IMPL(__imp__sub_83AC1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1C60"))) PPC_WEAK_FUNC(sub_83AC1C60);
PPC_FUNC_IMPL(__imp__sub_83AC1C60) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83ac1ca8
	if (!cr0.gt) goto loc_83AC1CA8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x83ac1ca8
	if (cr6.gt) goto loc_83AC1CA8;
	// ld r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// beq cr6,0x83ac1ca8
	if (cr6.eq) goto loc_83AC1CA8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-25000
	ctx.r4.s64 = ctx.r11.s64 + -25000;
loc_83AC1C9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC1CA4;
	sub_831EA3F0(ctx, base);
	// b 0x83ac1d64
	goto loc_83AC1D64;
loc_83AC1CA8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ac1cc0
	if (cr6.eq) goto loc_83AC1CC0;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x83ac1d64
	if (!cr6.eq) goto loc_83AC1D64;
loc_83AC1CC0:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ac1cfc
	if (cr6.eq) goto loc_83AC1CFC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83ac1cfc
	if (!cr6.eq) goto loc_83AC1CFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ac1ce8
	if (!cr6.eq) goto loc_83AC1CE8;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83ac1cfc
	if (cr6.eq) goto loc_83AC1CFC;
loc_83AC1CE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// addi r4,r10,-25072
	ctx.r4.s64 = ctx.r10.s64 + -25072;
	// b 0x83ac1c9c
	goto loc_83AC1C9C;
loc_83AC1CFC:
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// std r10,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r10.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r10.u64);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r10,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r10.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r10.u64);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ac1d40
	if (cr6.eq) goto loc_83AC1D40;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2bb8
	ctx.lr = 0x83AC1D3C;
	sub_83AE2BB8(ctx, base);
	// b 0x83ac1d5c
	goto loc_83AC1D5C;
loc_83AC1D40:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83ac1d64
	if (cr6.eq) goto loc_83AC1D64;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2c40
	ctx.lr = 0x83AC1D5C;
	sub_83AE2C40(ctx, base);
loc_83AC1D5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_83AC1D64:
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

__attribute__((alias("__imp__sub_83AC1D78"))) PPC_WEAK_FUNC(sub_83AC1D78);
PPC_FUNC_IMPL(__imp__sub_83AC1D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC1D80"))) PPC_WEAK_FUNC(sub_83AC1D80);
PPC_FUNC_IMPL(__imp__sub_83AC1D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

