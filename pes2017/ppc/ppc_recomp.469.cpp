#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_838E7F68"))) PPC_WEAK_FUNC(sub_838E7F68);
PPC_FUNC_IMPL(__imp__sub_838E7F68) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838e7d58
	ctx.lr = 0x838E7F94;
	sub_838E7D58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e7fcc
	if (cr6.eq) goto loc_838E7FCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x838e7fb4
	if (cr6.eq) goto loc_838E7FB4;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838e7fcc
	if (!cr6.eq) goto loc_838E7FCC;
loc_838E7FB4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
loc_838E7FCC:
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
}

__attribute__((alias("__imp__sub_838E7FE4"))) PPC_WEAK_FUNC(sub_838E7FE4);
PPC_FUNC_IMPL(__imp__sub_838E7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E7FE8"))) PPC_WEAK_FUNC(sub_838E7FE8);
PPC_FUNC_IMPL(__imp__sub_838E7FE8) {
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
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x838e80bc
	if (cr6.eq) goto loc_838E80BC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x838e809c
	if (cr6.eq) goto loc_838E809C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838e809c
	if (cr6.eq) goto loc_838E809C;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f0,15760(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 15760);
	// fmul f8,f11,f10
	ctx.f8.f64 = ctx.f11.f64 * ctx.f10.f64;
	// fdiv f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 / ctx.f9.f64;
	// fadd f1,f7,f0
	ctx.f1.f64 = ctx.f7.f64 + ctx.f0.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E805C;
	sub_831D1CA8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,-2104(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + -2104);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x838e80bc
	if (cr6.gt) goto loc_838E80BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2096(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2096);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838e80bc
	if (cr6.lt) goto loc_838E80BC;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
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
loc_838E809C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_838E80BC:
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
}

__attribute__((alias("__imp__sub_838E80D4"))) PPC_WEAK_FUNC(sub_838E80D4);
PPC_FUNC_IMPL(__imp__sub_838E80D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E80D8"))) PPC_WEAK_FUNC(sub_838E80D8);
PPC_FUNC_IMPL(__imp__sub_838E80D8) {
	PPC_FUNC_PROLOGUE();
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
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,15736(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15736);
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,15760(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 15760);
	// fadd f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 + ctx.f0.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E8110;
	sub_831D1CA8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f0,-2104(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -2104);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x838e814c
	if (cr6.gt) goto loc_838E814C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2096(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2096);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838e814c
	if (cr6.lt) goto loc_838E814C;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838E814C:
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

__attribute__((alias("__imp__sub_838E8160"))) PPC_WEAK_FUNC(sub_838E8160);
PPC_FUNC_IMPL(__imp__sub_838E8160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,29464
	ctx.r10.u64 = ctx.r11.u64 | 29464;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x838e8184
	if (cr6.lt) goto loc_838E8184;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,39464
	ctx.r10.u64 = ctx.r11.u64 | 39464;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!cr6.gt) return;
loc_838E8184:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E818C"))) PPC_WEAK_FUNC(sub_838E818C);
PPC_FUNC_IMPL(__imp__sub_838E818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E8190"))) PPC_WEAK_FUNC(sub_838E8190);
PPC_FUNC_IMPL(__imp__sub_838E8190) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8228
	if (cr6.eq) goto loc_838E8228;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x838e8228
	if (cr6.eq) goto loc_838E8228;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,9184(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9184);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fdiv f9,f0,f11
	ctx.f9.f64 = ctx.f0.f64 / ctx.f11.f64;
	// lfd f0,15760(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 15760);
	// fdiv f8,f9,f10
	ctx.f8.f64 = ctx.f9.f64 / ctx.f10.f64;
	// fadd f1,f8,f0
	ctx.f1.f64 = ctx.f8.f64 + ctx.f0.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E81EC;
	sub_831D1CA8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,-2104(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + -2104);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x838e8228
	if (cr6.gt) goto loc_838E8228;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2096(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2096);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838e8228
	if (cr6.lt) goto loc_838E8228;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838E8228:
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

__attribute__((alias("__imp__sub_838E823C"))) PPC_WEAK_FUNC(sub_838E823C);
PPC_FUNC_IMPL(__imp__sub_838E823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E8240"))) PPC_WEAK_FUNC(sub_838E8240);
PPC_FUNC_IMPL(__imp__sub_838E8240) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e82cc
	if (cr6.eq) goto loc_838E82CC;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bge cr6,0x838e82cc
	if (!cr6.lt) goto loc_838E82CC;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lfd f0,9176(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9176);
	// lfd f13,18432(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18432);
	// fmul f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x831d20a0
	ctx.lr = 0x838E8298;
	sub_831D20A0(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f0,9192(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 9192);
	// lfd f13,15760(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 15760);
	// fmadd f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E82B0;
	sub_831D1CA8(ctx, base);
	// fctidz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838E82CC:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E82E0"))) PPC_WEAK_FUNC(sub_838E82E0);
PPC_FUNC_IMPL(__imp__sub_838E82E0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e836c
	if (cr6.eq) goto loc_838E836C;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bge cr6,0x838e836c
	if (!cr6.lt) goto loc_838E836C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lfd f0,9176(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9176);
	// lfd f13,9208(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 9208);
	// fmul f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x831d20a0
	ctx.lr = 0x838E8338;
	sub_831D20A0(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f0,9200(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 9200);
	// lfd f13,15760(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 15760);
	// fmadd f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E8350;
	sub_831D1CA8(ctx, base);
	// fctidz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838E836C:
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E8380"))) PPC_WEAK_FUNC(sub_838E8380);
PPC_FUNC_IMPL(__imp__sub_838E8380) {
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
	// lbz r10,1616(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x838e83bc
	if (!cr6.eq) goto loc_838E83BC;
	// bl 0x838e8240
	ctx.lr = 0x838E83A8;
	sub_838E8240(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838E83BC:
	// bl 0x838e82e0
	ctx.lr = 0x838E83C0;
	sub_838E82E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E83D0"))) PPC_WEAK_FUNC(sub_838E83D0);
PPC_FUNC_IMPL(__imp__sub_838E83D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x838E83D8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce774
	ctx.lr = 0x838E83E0;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r28,r5,8
	xer.ca = ctx.r5.u32 <= 8;
	ctx.r28.s64 = 8 - ctx.r5.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r5,16
	xer.ca = ctx.r5.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r5.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lfd f0,17056(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17056);
	// slw r26,r10,r28
	ctx.r26.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subfic r6,r5,15
	xer.ca = ctx.r5.u32 <= 15;
	ctx.r6.s64 = 15 - ctx.r5.s64;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// slw r24,r10,r6
	ctx.r24.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f28,f0,f12
	ctx.f28.f64 = ctx.f0.f64 / ctx.f12.f64;
	// bl 0x838f2238
	ctx.lr = 0x838E843C;
	sub_838F2238(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838e854c
	if (cr6.eq) goto loc_838E854C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838e8160
	ctx.lr = 0x838E8458;
	sub_838E8160(ctx, base);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lfd f29,15760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
	// lfd f30,9200(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9200);
	// lfd f27,9176(r9)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9176);
loc_838E8478:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x838f2120
	ctx.lr = 0x838E8484;
	sub_838F2120(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// beq cr6,0x838e84f8
	if (cr6.eq) goto loc_838E84F8;
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r30,r3,-2
	ctx.r30.s64 = ctx.r3.s64 + -2;
	// fmul f31,f13,f27
	ctx.f31.f64 = ctx.f13.f64 * ctx.f27.f64;
loc_838E84AC:
	// slw r11,r31,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r28.u8 & 0x3F));
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f1,f13,f28
	ctx.f1.f64 = ctx.f13.f64 * ctx.f28.f64;
	// bl 0x831d20a0
	ctx.lr = 0x838E84D0;
	sub_831D20A0(ctx, base);
	// fmadd f1,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f29.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E84D8;
	sub_831D1CA8(ctx, base);
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lhz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(ctx.r31.u32, 256, xer);
	// sthu r9,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r30.u32 = ea;
	// blt cr6,0x838e84ac
	if (cr6.lt) goto loc_838E84AC;
	// b 0x838e853c
	goto loc_838E853C;
loc_838E84F8:
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838E8508:
	// slw r11,r10,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838e852c
	if (cr6.eq) goto loc_838E852C;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// twllei r25,0
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// divwu r11,r7,r25
	ctx.r11.u32 = PPCDivide(ctx.r7.u32, ctx.r25.u32);
loc_838E852C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x838e8508
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E8508;
loc_838E853C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x838e8478
	if (cr6.lt) goto loc_838E8478;
loc_838E854C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c0
	ctx.lr = 0x838E8558;
	__restfpr_27(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E855C"))) PPC_WEAK_FUNC(sub_838E855C);
PPC_FUNC_IMPL(__imp__sub_838E855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E8560"))) PPC_WEAK_FUNC(sub_838E8560);
PPC_FUNC_IMPL(__imp__sub_838E8560) {
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
	ctx.lr = 0x838E8568;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce778
	ctx.lr = 0x838E8570;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r27,r5,8
	xer.ca = ctx.r5.u32 <= 8;
	ctx.r27.s64 = 8 - ctx.r5.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r10,r5,16
	xer.ca = ctx.r5.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r5.s64;
	// slw r24,r11,r27
	ctx.r24.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
	// bl 0x838f2238
	ctx.lr = 0x838E85A4;
	sub_838F2238(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838e85d4
	if (cr6.eq) goto loc_838E85D4;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_838E85BC:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2120
	ctx.lr = 0x838E85C8;
	sub_838F2120(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x838e85bc
	if (!cr0.eq) goto loc_838E85BC;
loc_838E85D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfd f28,15760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
	// lfd f29,9200(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9200);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f30,9208(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9208);
	// li r21,0
	ctx.r21.s64 = 0;
	// lfd f31,9176(r8)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 9176);
	// ori r26,r7,32768
	ctx.r26.u64 = ctx.r7.u64 | 32768;
	// ori r29,r6,65535
	ctx.r29.u64 = ctx.r6.u64 | 65535;
	// li r23,255
	ctx.r23.s64 = 255;
loc_838E8610:
	// clrlwi r30,r21,16
	ctx.r30.u64 = ctx.r21.u32 & 0xFFFF;
	// addic. r11,r30,128
	xer.ca = ctx.r30.u32 > 4294967167;
	ctx.r11.s64 = ctx.r30.s64 + 128;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x838e8668
	if (cr0.eq) goto loc_838E8668;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x838e8668
	if (!cr6.lt) goto loc_838E8668;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r10,r20
	ctx.r10.s64 = ctx.r20.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f2,f11,f31
	ctx.f2.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fmul f1,f12,f30
	ctx.f1.f64 = ctx.f12.f64 * ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x838E8650;
	sub_831D20A0(ctx, base);
	// fmadd f1,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f29.f64 + ctx.f28.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E8658;
	sub_831D1CA8(ctx, base);
	// fctidz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// b 0x838e866c
	goto loc_838E866C;
loc_838E8668:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_838E866C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// divwu r11,r9,r29
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x838e86b4
	if (!cr6.lt) goto loc_838E86B4;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srw r11,r23,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r25.u8 & 0x3F));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838E8694:
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// srw r9,r31,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r8,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// sthx r30,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u16);
	// bdnz 0x838e8694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E8694;
loc_838E86B4:
	// addi r21,r21,257
	ctx.r21.s64 = ctx.r21.s64 + 257;
	// cmplwi cr6,r21,65535
	cr6.compare<uint32_t>(ctx.r21.u32, 65535, xer);
	// blt cr6,0x838e8610
	if (cr6.lt) goto loc_838E8610;
	// rlwinm r11,r24,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x838e86f8
	if (!cr6.lt) goto loc_838E86F8;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// sraw r11,r23,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r23.s32 < 0) & (((ctx.r23.s32 >> temp.u32) << temp.u32) != ctx.r23.s32);
	ctx.r11.s64 = ctx.r23.s32 >> temp.u32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838E86D8:
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// srw r9,r31,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r8,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// sthx r29,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r29.u16);
	// bdnz 0x838e86d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E86D8;
loc_838E86F8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x838E8704;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E8708"))) PPC_WEAK_FUNC(sub_838E8708);
PPC_FUNC_IMPL(__imp__sub_838E8708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838E8710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838f2120
	ctx.lr = 0x838E8724;
	sub_838F2120(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// ori r10,r11,29464
	ctx.r10.u64 = ctx.r11.u64 | 29464;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x838e874c
	if (cr6.lt) goto loc_838E874C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,39464
	ctx.r10.u64 = ctx.r11.u64 | 39464;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x838e8774
	if (!cr6.gt) goto loc_838E8774;
loc_838E874C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838E8750:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8240
	ctx.lr = 0x838E875C;
	sub_838E8240(ctx, base);
	// stbx r3,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(ctx.r31.u32, 256, xer);
	// blt cr6,0x838e8750
	if (cr6.lt) goto loc_838E8750;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838E8774:
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838E8780:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838e8780
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E8780;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E8798"))) PPC_WEAK_FUNC(sub_838E8798);
PPC_FUNC_IMPL(__imp__sub_838E8798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838E87A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,1672(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838f2288
	ctx.lr = 0x838E87B0;
	sub_838F2288(ctx, base);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r28,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e8808
	if (cr6.eq) goto loc_838E8808;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// subfic r10,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r11.s64;
	// slw. r30,r27,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x838e87f8
	if (!cr0.gt) goto loc_838E87F8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_838E87DC:
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x838f2288
	ctx.lr = 0x838E87EC;
	sub_838F2288(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x838e87dc
	if (!cr0.eq) goto loc_838E87DC;
loc_838E87F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// bl 0x838f2288
	ctx.lr = 0x838E8804;
	sub_838F2288(ctx, base);
	// stw r28,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r28.u32);
loc_838E8808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// bl 0x838f2288
	ctx.lr = 0x838E8814;
	sub_838F2288(ctx, base);
	// stw r28,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1684(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// bl 0x838f2288
	ctx.lr = 0x838E8824;
	sub_838F2288(ctx, base);
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// stw r28,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e8874
	if (cr6.eq) goto loc_838E8874;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// subfic r10,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r11.s64;
	// slw. r30,r27,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x838e8864
	if (!cr0.gt) goto loc_838E8864;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_838E8848:
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x838f2288
	ctx.lr = 0x838E8858;
	sub_838F2288(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x838e8848
	if (!cr0.eq) goto loc_838E8848;
loc_838E8864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1688(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// bl 0x838f2288
	ctx.lr = 0x838E8870;
	sub_838F2288(ctx, base);
	// stw r28,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r28.u32);
loc_838E8874:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e88c0
	if (cr6.eq) goto loc_838E88C0;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// subfic r10,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r11.s64;
	// slw. r30,r27,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x838e88b0
	if (!cr0.gt) goto loc_838E88B0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_838E8894:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x838f2288
	ctx.lr = 0x838E88A4;
	sub_838F2288(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x838e8894
	if (!cr0.eq) goto loc_838E8894;
loc_838E88B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// bl 0x838f2288
	ctx.lr = 0x838E88BC;
	sub_838F2288(ctx, base);
	// stw r28,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r28.u32);
loc_838E88C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E88C8"))) PPC_WEAK_FUNC(sub_838E88C8);
PPC_FUNC_IMPL(__imp__sub_838E88C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838E88D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,1672
	ctx.r29.s64 = ctx.r3.s64 + 1672;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838e88f8
	if (!cr6.eq) goto loc_838E88F8;
	// lwz r11,1676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e8910
	if (cr6.eq) goto loc_838E8910;
loc_838E88F8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,17996
	ctx.r4.s64 = ctx.r11.s64 + 17996;
	// bl 0x838e5cc0
	ctx.lr = 0x838E8908;
	sub_838E5CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8798
	ctx.lr = 0x838E8910;
	sub_838E8798(ctx, base);
loc_838E8910:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bgt cr6,0x838e89b4
	if (cr6.gt) goto loc_838E89B4;
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x838e8934
	if (!cr6.gt) goto loc_838E8934;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e8190
	ctx.lr = 0x838E892C;
	sub_838E8190(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x838e893c
	goto loc_838E893C;
loc_838E8934:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r5,r5,34464
	ctx.r5.u64 = ctx.r5.u64 | 34464;
loc_838E893C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8708
	ctx.lr = 0x838E8948;
	sub_838E8708(ctx, base);
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,9,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFF80;
	// rlwinm r10,r10,0,24,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE000FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e8bbc
	if (cr6.eq) goto loc_838E8BBC;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e80d8
	ctx.lr = 0x838E8964;
	sub_838E80D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1684
	ctx.r4.s64 = ctx.r31.s64 + 1684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8708
	ctx.lr = 0x838E8974;
	sub_838E8708(ctx, base);
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x838e899c
	if (!cr6.gt) goto loc_838E899C;
	// bl 0x838e80d8
	ctx.lr = 0x838E8984;
	sub_838E80D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1680
	ctx.r4.s64 = ctx.r31.s64 + 1680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8708
	ctx.lr = 0x838E8994;
	sub_838E8708(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838E899C:
	// addi r4,r31,1680
	ctx.r4.s64 = ctx.r31.s64 + 1680;
	// lwz r5,1980(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8708
	ctx.lr = 0x838E89AC;
	sub_838E8708(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838E89B4:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e89fc
	if (cr6.eq) goto loc_838E89FC;
	// lbz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1696);
	// lbz r10,1697(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1697);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x838e89e0
	if (!cr6.gt) goto loc_838E89E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838E89E0:
	// lbz r10,1698(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1698);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x838e8a00
	if (!cr6.gt) goto loc_838E8A00;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x838e8a00
	goto loc_838E8A00;
loc_838E89FC:
	// lbz r11,1699(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1699);
loc_838E8A00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e8a20
	if (cr6.eq) goto loc_838E8A20;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x838e8a20
	if (!cr6.lt) goto loc_838E8A20;
	// subfic r11,r11,16
	xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x838e8a24
	goto loc_838E8A24;
loc_838E8A20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_838E8A24:
	// lwz r10,1404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r10,0,5,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFFC00;
	// rlwinm r10,r10,0,21,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC0007FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e8a48
	if (cr6.eq) goto loc_838E8A48;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x838e8a48
	if (!cr6.lt) goto loc_838E8A48;
	// li r11,5
	ctx.r11.s64 = 5;
loc_838E8A48:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// ble cr6,0x838e8a58
	if (!cr6.gt) goto loc_838E8A58;
	// li r11,8
	ctx.r11.s64 = 8;
loc_838E8A58:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// beq cr6,0x838e8b2c
	if (cr6.eq) goto loc_838E8B2C;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838e8b10
	if (!cr6.gt) goto loc_838E8B10;
	// lwz r10,1980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,9176(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9176);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f13,15760(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 15760);
	// fmul f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fadd f1,f8,f13
	ctx.f1.f64 = ctx.f8.f64 + ctx.f13.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838E8AB8;
	sub_831D1CA8(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f0,-2104(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2104);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x838e8af8
	if (cr6.gt) goto loc_838E8AF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2096(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2096);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838e8af8
	if (cr6.lt) goto loc_838E8AF8;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1676
	ctx.r4.s64 = ctx.r31.s64 + 1676;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x838e8560
	ctx.lr = 0x838E8AF4;
	sub_838E8560(ctx, base);
	// b 0x838e8b60
	goto loc_838E8B60;
loc_838E8AF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1676
	ctx.r4.s64 = ctx.r31.s64 + 1676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8560
	ctx.lr = 0x838E8B0C;
	sub_838E8560(ctx, base);
	// b 0x838e8b60
	goto loc_838E8B60;
loc_838E8B10:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r6,r6,34464
	ctx.r6.u64 = ctx.r6.u64 | 34464;
	// addi r4,r31,1676
	ctx.r4.s64 = ctx.r31.s64 + 1676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8560
	ctx.lr = 0x838E8B28;
	sub_838E8560(ctx, base);
	// b 0x838e8b60
	goto loc_838E8B60;
loc_838E8B2C:
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x838e8b48
	if (!cr6.gt) goto loc_838E8B48;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e8190
	ctx.lr = 0x838E8B40;
	sub_838E8190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x838e8b50
	goto loc_838E8B50;
loc_838E8B48:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r6,r6,34464
	ctx.r6.u64 = ctx.r6.u64 | 34464;
loc_838E8B50:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1676
	ctx.r4.s64 = ctx.r31.s64 + 1676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e83d0
	ctx.lr = 0x838E8B60;
	sub_838E83D0(ctx, base);
loc_838E8B60:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,9,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFF80;
	// rlwinm r10,r10,0,24,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE000FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e8bbc
	if (cr6.eq) goto loc_838E8BBC;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e80d8
	ctx.lr = 0x838E8B7C;
	sub_838E80D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1692
	ctx.r4.s64 = ctx.r31.s64 + 1692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e83d0
	ctx.lr = 0x838E8B90;
	sub_838E83D0(ctx, base);
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x838e8ba8
	if (!cr6.gt) goto loc_838E8BA8;
	// bl 0x838e80d8
	ctx.lr = 0x838E8BA0;
	sub_838E80D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x838e8bac
	goto loc_838E8BAC;
loc_838E8BA8:
	// lwz r6,1980(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
loc_838E8BAC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1688
	ctx.r4.s64 = ctx.r31.s64 + 1688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e83d0
	ctx.lr = 0x838E8BBC;
	sub_838E83D0(ctx, base);
loc_838E8BBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E8BC4"))) PPC_WEAK_FUNC(sub_838E8BC4);
PPC_FUNC_IMPL(__imp__sub_838E8BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E8BC8"))) PPC_WEAK_FUNC(sub_838E8BC8);
PPC_FUNC_IMPL(__imp__sub_838E8BC8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e8c30
	if (cr6.eq) goto loc_838E8C30;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838e8c30
	if (cr6.eq) goto loc_838E8C30;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838e8c30
	if (cr6.eq) goto loc_838E8C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r5,32767
	ctx.r5.s64 = 32767;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838e66e8
	ctx.lr = 0x838E8C14;
	sub_838E66E8(ctx, base);
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x838E8C24;
	sub_831CDCF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2288
	ctx.lr = 0x838E8C30;
	sub_838F2288(ctx, base);
loc_838E8C30:
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

__attribute__((alias("__imp__sub_838E8C48"))) PPC_WEAK_FUNC(sub_838E8C48);
PPC_FUNC_IMPL(__imp__sub_838E8C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838E8C50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// blt cr6,0x838e8d5c
	if (cr6.lt) goto loc_838E8D5C;
	// lis r11,9536
	ctx.r11.s64 = 624951296;
	// ori r10,r11,48704
	ctx.r10.u64 = ctx.r11.u64 | 48704;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838e8d5c
	if (cr6.gt) goto loc_838E8D5C;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e8ca8
	if (cr6.eq) goto loc_838E8CA8;
	// lhz r11,74(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 74);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e8ca8
	if (cr6.eq) goto loc_838E8CA8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,16144
	ctx.r11.s64 = ctx.r11.s64 + 16144;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// b 0x838e8d68
	goto loc_838E8D68;
loc_838E8CA8:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838e8d80
	if (!cr6.eq) goto loc_838E8D80;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e8d2c
	if (cr6.eq) goto loc_838E8D2C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,34464
	ctx.r5.u64 = ctx.r5.u64 | 34464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8CDC;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8d08
	if (cr6.eq) goto loc_838E8D08;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,29464
	ctx.r9.u64 = ctx.r10.u64 | 29464;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x838e8d08
	if (cr6.lt) goto loc_838E8D08;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,39464
	ctx.r9.u64 = ctx.r10.u64 | 39464;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x838e8d2c
	if (!cr6.gt) goto loc_838E8D2C;
loc_838E8D08:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838e8d44
	if (!cr6.eq) goto loc_838E8D44;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16144
	ctx.r4.s64 = ctx.r11.s64 + 16144;
	// bl 0x838e5fb0
	ctx.lr = 0x838E8D2C;
	sub_838E5FB0(ctx, base);
loc_838E8D2C:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// sth r10,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838E8D44:
	// addi r11,r11,16144
	ctx.r11.s64 = ctx.r11.s64 + 16144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x838e5fb0
	ctx.lr = 0x838E8D54;
	sub_838E5FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838E8D5C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,16144
	ctx.r11.s64 = ctx.r11.s64 + 16144;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
loc_838E8D68:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r10.u16);
	// bl 0x838e5fb0
	ctx.lr = 0x838E8D80;
	sub_838E5FB0(ctx, base);
loc_838E8D80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E8D88"))) PPC_WEAK_FUNC(sub_838E8D88);
PPC_FUNC_IMPL(__imp__sub_838E8D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838E8D90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r29,r9,34464
	ctx.r29.u64 = ctx.r9.u64 | 34464;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8DC4;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838e8dd8
	if (!cr6.eq) goto loc_838E8DD8;
loc_838E8DCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838E8DD8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8DEC;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8E24;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8E40;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 + ctx.r25.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8E80;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8E9C;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r26,r10
	ctx.r4.u64 = ctx.r26.u64 + ctx.r10.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8EC8;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8dcc
	if (cr6.eq) goto loc_838E8DCC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8EE4;
	sub_838E7FE8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E8EF4"))) PPC_WEAK_FUNC(sub_838E8EF4);
PPC_FUNC_IMPL(__imp__sub_838E8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E8EF8"))) PPC_WEAK_FUNC(sub_838E8EF8);
PPC_FUNC_IMPL(__imp__sub_838E8EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838E8F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r30,r10,34464
	ctx.r30.u64 = ctx.r10.u64 | 34464;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// subf r10,r7,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r7.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x838e9288
	if (cr6.lt) goto loc_838E9288;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838e9288
	if (cr6.gt) goto loc_838E9288;
	// li r6,7
	ctx.r6.s64 = 7;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r4,r8,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e7fe8
	ctx.lr = 0x838E8FD8;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838e8fec
	if (!cr6.eq) goto loc_838E8FEC;
loc_838E8FE0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838E8FEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9010;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8fe0
	if (cr6.eq) goto loc_838E8FE0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r28,r11,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r11.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9048;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8fe0
	if (cr6.eq) goto loc_838E8FE0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9074;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8fe0
	if (cr6.eq) goto loc_838E8FE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9098;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// ble cr6,0x838e9288
	if (!cr6.gt) goto loc_838E9288;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E90D4;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8fe0
	if (cr6.eq) goto loc_838E8FE0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9100;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e8fe0
	if (cr6.eq) goto loc_838E8FE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9124;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, xer);
	// ble cr6,0x838e9288
	if (!cr6.gt) goto loc_838E9288;
	// bl 0x838e80d8
	ctx.lr = 0x838E9140;
	sub_838E80D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e80d8
	ctx.lr = 0x838E914C;
	sub_838E80D8(ctx, base);
	// subf r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e80d8
	ctx.lr = 0x838E9158;
	sub_838E80D8(ctx, base);
	// subf. r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x838e9288
	if (!cr0.gt) goto loc_838E9288;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9174;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9190;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E91B8;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x838e7fe8
	ctx.lr = 0x838E91D4;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x838e7fe8
	ctx.lr = 0x838E91F0;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 + 20;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9218;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9234;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9250;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9288
	if (cr6.eq) goto loc_838E9288;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9278;
	sub_838E7FE8(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838E9288:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9294"))) PPC_WEAK_FUNC(sub_838E9294);
PPC_FUNC_IMPL(__imp__sub_838E9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E9298"))) PPC_WEAK_FUNC(sub_838E9298);
PPC_FUNC_IMPL(__imp__sub_838E9298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838E92A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x838e8ef8
	ctx.lr = 0x838E92C0;
	sub_838E8EF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838e92f4
	if (!cr6.eq) goto loc_838E92F4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e8d88
	ctx.lr = 0x838E92D4;
	sub_838E8D88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838e92f4
	if (!cr6.eq) goto loc_838E92F4;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e6e50
	ctx.lr = 0x838E92EC;
	sub_838E6E50(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_838E92F4:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x838e9334
	if (cr6.lt) goto loc_838E9334;
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// sth r9,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r9.u16);
	// beq cr6,0x838e931c
	if (cr6.eq) goto loc_838E931C;
	// addi r4,r10,16280
	ctx.r4.s64 = ctx.r10.s64 + 16280;
	// bl 0x838e5e88
	ctx.lr = 0x838E931C;
	sub_838E5E88(ctx, base);
loc_838E931C:
	// addi r11,r10,16280
	ctx.r11.s64 = ctx.r10.s64 + 16280;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e61a0
	ctx.lr = 0x838E9328;
	sub_838E61A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838E9334:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838e6f60
	ctx.lr = 0x838E9348;
	sub_838E6F60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9350"))) PPC_WEAK_FUNC(sub_838E9350);
PPC_FUNC_IMPL(__imp__sub_838E9350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838E9358;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,74(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 74);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838e93d4
	if (!cr6.eq) goto loc_838E93D4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x838e94ec
	if (cr6.lt) goto loc_838E94EC;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bge cr6,0x838e94ec
	if (!cr6.lt) goto loc_838E94EC;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e93b4
	if (cr6.eq) goto loc_838E93B4;
	// lhz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// beq cr6,0x838e93b4
	if (cr6.eq) goto loc_838E93B4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// addi r7,r11,328
	ctx.r7.s64 = ctx.r11.s64 + 328;
	// addi r5,r11,360
	ctx.r5.s64 = ctx.r11.s64 + 360;
	// b 0x838e94fc
	goto loc_838E94FC;
loc_838E93B4:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e93e0
	if (cr6.eq) goto loc_838E93E0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// addi r4,r11,368
	ctx.r4.s64 = ctx.r11.s64 + 368;
	// bl 0x838e61a0
	ctx.lr = 0x838E93D4;
	sub_838E61A0(ctx, base);
loc_838E93D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838E93E0:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r11,6852
	ctx.r30.s64 = ctx.r11.s64 + 6852;
	// addi r28,r10,16112
	ctx.r28.s64 = ctx.r10.s64 + 16112;
	// beq cr6,0x838e9424
	if (cr6.eq) goto loc_838E9424;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x838e6e50
	ctx.lr = 0x838E940C;
	sub_838E6E50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838e9424
	if (!cr6.eq) goto loc_838E9424;
	// addi r4,r28,404
	ctx.r4.s64 = ctx.r28.s64 + 404;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e5fb0
	ctx.lr = 0x838E9424;
	sub_838E5FB0(ctx, base);
loc_838E9424:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// ori r26,r10,45455
	ctx.r26.u64 = ctx.r10.u64 | 45455;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838e9490
	if (cr6.eq) goto loc_838E9490;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r5,r5,34464
	ctx.r5.u64 = ctx.r5.u64 | 34464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9454;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9480
	if (cr6.eq) goto loc_838E9480;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,29464
	ctx.r9.u64 = ctx.r10.u64 | 29464;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x838e9480
	if (cr6.lt) goto loc_838E9480;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,39464
	ctx.r9.u64 = ctx.r10.u64 | 39464;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x838e9490
	if (!cr6.gt) goto loc_838E9490;
loc_838E9480:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e5fb0
	ctx.lr = 0x838E9490;
	sub_838E5FB0(ctx, base);
loc_838E9490:
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r29,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r29.u16);
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838E94A8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x838e94a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E94A8;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838E94C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x838e94c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E94C4;
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// ori r10,r11,231
	ctx.r10.u64 = ctx.r11.u64 | 231;
	// sth r10,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838E94EC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// addi r7,r11,288
	ctx.r7.s64 = ctx.r11.s64 + 288;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
loc_838E94FC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e7180
	ctx.lr = 0x838E950C;
	sub_838E7180(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9514"))) PPC_WEAK_FUNC(sub_838E9514);
PPC_FUNC_IMPL(__imp__sub_838E9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E9518"))) PPC_WEAK_FUNC(sub_838E9518);
PPC_FUNC_IMPL(__imp__sub_838E9518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838E9520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x838e7850
	ctx.lr = 0x838E953C;
	sub_838E7850(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9578
	if (cr6.eq) goto loc_838E9578;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,65(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,66(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// lbz r10,67(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x838e9350
	ctx.lr = 0x838E9578;
	sub_838E9350(ctx, base);
loc_838E9578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9580"))) PPC_WEAK_FUNC(sub_838E9580);
PPC_FUNC_IMPL(__imp__sub_838E9580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838E9588;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1857(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1857);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838e970c
	if (!cr6.eq) goto loc_838E970C;
	// lhz r11,2054(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2054);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e970c
	if (cr6.eq) goto loc_838E970C;
	// lwz r29,2032(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// lwz r28,2044(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// lwz r4,2020(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2020);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add. r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ble 0x838e9714
	if (!cr0.gt) goto loc_838E9714;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x838e7fe8
	ctx.lr = 0x838E95F0;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9714
	if (cr6.eq) goto loc_838E9714;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// bgt cr6,0x838e9714
	if (cr6.gt) goto loc_838E9714;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9628;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9714
	if (cr6.eq) goto loc_838E9714;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// bgt cr6,0x838e9714
	if (cr6.gt) goto loc_838E9714;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838e7fe8
	ctx.lr = 0x838E9660;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9714
	if (cr6.eq) goto loc_838E9714;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x838e9714
	if (cr6.lt) goto loc_838E9714;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bgt cr6,0x838e9714
	if (cr6.gt) goto loc_838E9714;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ori r8,r9,32769
	ctx.r8.u64 = ctx.r9.u64 | 32769;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x838e9714
	if (cr6.gt) goto loc_838E9714;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// ble cr6,0x838e96a4
	if (!cr6.gt) goto loc_838E96A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x838e96ac
	goto loc_838E96AC;
loc_838E96A4:
	// bge cr6,0x838e96e0
	if (!cr6.lt) goto loc_838E96E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_838E96AC:
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, xer);
	// bgt cr6,0x838e96cc
	if (cr6.gt) goto loc_838E96CC;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x838e96c4
	if (cr6.lt) goto loc_838E96C4;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x838e96e0
	goto loc_838E96E0;
loc_838E96C4:
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, xer);
	// blt cr6,0x838e96dc
	if (cr6.lt) goto loc_838E96DC;
loc_838E96CC:
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x838e96dc
	if (cr6.lt) goto loc_838E96DC;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x838e96e0
	goto loc_838E96E0;
loc_838E96DC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_838E96E0:
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// beq cr6,0x838e9704
	if (cr6.eq) goto loc_838E9704;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,17292
	ctx.r11.s64 = ctx.r11.s64 + 17292;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x838e5e88
	ctx.lr = 0x838E9704;
	sub_838E5E88(ctx, base);
loc_838E9704:
	// sth r27,1858(r26)
	PPC_STORE_U16(ctx.r26.u32 + 1858, ctx.r27.u16);
	// sth r29,1860(r26)
	PPC_STORE_U16(ctx.r26.u32 + 1860, ctx.r29.u16);
loc_838E970C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838E9714:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,17292
	ctx.r4.s64 = ctx.r11.s64 + 17292;
	// bl 0x838e5e88
	ctx.lr = 0x838E9724;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838E9724"))) PPC_WEAK_FUNC(sub_838E9724);
PPC_FUNC_IMPL(__imp__sub_838E9724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E9728"))) PPC_WEAK_FUNC(sub_838E9728);
PPC_FUNC_IMPL(__imp__sub_838E9728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e973c
	if (cr6.eq) goto loc_838E973C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_838E973C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,18024
	ctx.r4.s64 = ctx.r11.s64 + 18024;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9748"))) PPC_WEAK_FUNC(sub_838E9748);
PPC_FUNC_IMPL(__imp__sub_838E9748) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838e9794
	if (cr6.eq) goto loc_838E9794;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,1376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// bl 0x831d7270
	ctx.lr = 0x838E977C;
	sub_831D7270(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838e9794
	if (cr6.eq) goto loc_838E9794;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18052
	ctx.r4.s64 = ctx.r11.s64 + 18052;
	// bl 0x838e5e88
	ctx.lr = 0x838E9794;
	sub_838E5E88(ctx, base);
loc_838E9794:
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

__attribute__((alias("__imp__sub_838E97AC"))) PPC_WEAK_FUNC(sub_838E97AC);
PPC_FUNC_IMPL(__imp__sub_838E97AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E97B0"))) PPC_WEAK_FUNC(sub_838E97B0);
PPC_FUNC_IMPL(__imp__sub_838E97B0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e9818
	if (cr6.eq) goto loc_838E9818;
	// stw r4,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r4.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838e97e4
	if (cr6.eq) goto loc_838E97E4;
	// stw r5,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r5.u32);
	// b 0x838e97f0
	goto loc_838E97F0;
loc_838E97E4:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,-26808
	ctx.r10.s64 = ctx.r11.s64 + -26808;
	// stw r10,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r10.u32);
loc_838E97F0:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e9814
	if (cr6.eq) goto loc_838E9814;
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18064
	ctx.r4.s64 = ctx.r11.s64 + 18064;
	// bl 0x838e5cc0
	ctx.lr = 0x838E9814;
	sub_838E5CC0(ctx, base);
loc_838E9814:
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
loc_838E9818:
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

__attribute__((alias("__imp__sub_838E9830"))) PPC_WEAK_FUNC(sub_838E9830);
PPC_FUNC_IMPL(__imp__sub_838E9830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e9844
	if (cr6.eq) goto loc_838E9844;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_838E9844:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,18136
	ctx.r4.s64 = ctx.r11.s64 + 18136;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9850"))) PPC_WEAK_FUNC(sub_838E9850);
PPC_FUNC_IMPL(__imp__sub_838E9850) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838e989c
	if (cr6.eq) goto loc_838E989C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,1376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// bl 0x831d03a0
	ctx.lr = 0x838E9884;
	sub_831D03A0(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838e989c
	if (cr6.eq) goto loc_838E989C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18164
	ctx.r4.s64 = ctx.r11.s64 + 18164;
	// bl 0x838e5e88
	ctx.lr = 0x838E989C;
	sub_838E5E88(ctx, base);
loc_838E989C:
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

__attribute__((alias("__imp__sub_838E98B4"))) PPC_WEAK_FUNC(sub_838E98B4);
PPC_FUNC_IMPL(__imp__sub_838E98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E98B8"))) PPC_WEAK_FUNC(sub_838E98B8);
PPC_FUNC_IMPL(__imp__sub_838E98B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838E98CC"))) PPC_WEAK_FUNC(sub_838E98CC);
PPC_FUNC_IMPL(__imp__sub_838E98CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E98D0"))) PPC_WEAK_FUNC(sub_838E98D0);
PPC_FUNC_IMPL(__imp__sub_838E98D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,1376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// b 0x831cfe08
	sub_831CFE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E98E0"))) PPC_WEAK_FUNC(sub_838E98E0);
PPC_FUNC_IMPL(__imp__sub_838E98E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E98E4"))) PPC_WEAK_FUNC(sub_838E98E4);
PPC_FUNC_IMPL(__imp__sub_838E98E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E98E8"))) PPC_WEAK_FUNC(sub_838E98E8);
PPC_FUNC_IMPL(__imp__sub_838E98E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r4.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838e9904
	if (cr6.eq) goto loc_838E9904;
	// stw r5,1368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1368, ctx.r5.u32);
	// b 0x838e9910
	goto loc_838E9910;
loc_838E9904:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,-26544
	ctx.r10.s64 = ctx.r11.s64 + -26544;
	// stw r10,1368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1368, ctx.r10.u32);
loc_838E9910:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838e9920
	if (cr6.eq) goto loc_838E9920;
	// stw r6,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r6.u32);
	// b 0x838e992c
	goto loc_838E992C;
loc_838E9920:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,-26416
	ctx.r10.s64 = ctx.r11.s64 + -26416;
	// stw r10,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r10.u32);
loc_838E992C:
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// addi r4,r10,18176
	ctx.r4.s64 = ctx.r10.s64 + 18176;
	// b 0x838e5cc0
	sub_838E5CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E994C"))) PPC_WEAK_FUNC(sub_838E994C);
PPC_FUNC_IMPL(__imp__sub_838E994C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E9950"))) PPC_WEAK_FUNC(sub_838E9950);
PPC_FUNC_IMPL(__imp__sub_838E9950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x838E9958;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e9ca0
	if (cr6.eq) goto loc_838E9CA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838e9ca0
	if (cr6.eq) goto loc_838E9CA0;
	// bl 0x838f59e8
	ctx.lr = 0x838E9978;
	sub_838F59E8(ctx, base);
	// lis r10,18756
	ctx.r10.s64 = 1229193216;
	// lis r27,26964
	ctx.r27.s64 = 1767112704;
	// lis r24,29778
	ctx.r24.s64 = 1951531008;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r9,20556
	ctx.r9.s64 = 1347158016;
	// lis r8,29507
	ctx.r8.s64 = 1933770752;
	// lis r7,28744
	ctx.r7.s64 = 1883766784;
	// lis r6,29506
	ctx.r6.s64 = 1933705216;
	// lis r5,29522
	ctx.r5.s64 = 1934753792;
	// lis r4,26947
	ctx.r4.s64 = 1765998592;
	// lis r3,29520
	ctx.r3.s64 = 1934622720;
	// lis r31,29765
	ctx.r31.s64 = 1950679040;
	// lis r29,29769
	ctx.r29.s64 = 1950941184;
	// lis r23,31316
	ctx.r23.s64 = 2052325376;
	// ori r26,r10,16724
	ctx.r26.u64 = ctx.r10.u64 | 16724;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r22,r24,20051
	ctx.r22.u64 = ctx.r24.u64 | 20051;
	// ori r27,r9,21573
	ctx.r27.u64 = ctx.r9.u64 | 21573;
	// addi r25,r11,18248
	ctx.r25.s64 = ctx.r11.s64 + 18248;
	// ori r14,r8,16716
	ctx.r14.u64 = ctx.r8.u64 | 16716;
	// ori r15,r7,22899
	ctx.r15.u64 = ctx.r7.u64 | 22899;
	// ori r16,r6,18772
	ctx.r16.u64 = ctx.r6.u64 | 18772;
	// ori r17,r5,18242
	ctx.r17.u64 = ctx.r5.u64 | 18242;
	// ori r18,r4,17232
	ctx.r18.u64 = ctx.r4.u64 | 17232;
	// ori r19,r3,19540
	ctx.r19.u64 = ctx.r3.u64 | 19540;
	// ori r20,r31,22644
	ctx.r20.u64 = ctx.r31.u64 | 22644;
	// ori r21,r29,19781
	ctx.r21.u64 = ctx.r29.u64 | 19781;
	// ori r23,r23,22644
	ctx.r23.u64 = ctx.r23.u64 | 22644;
	// ori r24,r10,22644
	ctx.r24.u64 = ctx.r10.u64 | 22644;
loc_838E99F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7268
	ctx.lr = 0x838E99F8;
	sub_838F7268(ctx, base);
	// lwz r31,1564(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x838e9a94
	if (!cr6.eq) goto loc_838E9A94;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e9c84
	if (cr6.eq) goto loc_838E9C84;
	// lbz r10,1615(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1615);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838e9a30
	if (!cr6.eq) goto loc_838E9A30;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e9c90
	if (cr6.eq) goto loc_838E9C90;
loc_838E9A30:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e9a48
	if (cr6.eq) goto loc_838E9A48;
	// addi r4,r25,56
	ctx.r4.s64 = ctx.r25.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838E9A48;
	sub_838E5F50(ctx, base);
loc_838E9A48:
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
loc_838E9A54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e6c08
	ctx.lr = 0x838E9A60;
	sub_838E6C08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838e9b08
	if (cr6.eq) goto loc_838E9B08;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fa568
	ctx.lr = 0x838E9A7C;
	sub_838FA568(ctx, base);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x838e9af0
	if (!cr6.eq) goto loc_838E9AF0;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9A94:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e9aa8
	if (cr6.eq) goto loc_838E9AA8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r11.u32);
loc_838E9AA8:
	// lis r11,18760
	ctx.r11.s64 = 1229455360;
	// ori r10,r11,17490
	ctx.r10.u64 = ctx.r11.u64 | 17490;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9acc
	if (!cr6.eq) goto loc_838E9ACC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7458
	ctx.lr = 0x838E9AC8;
	sub_838F7458(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9ACC:
	// lis r11,18757
	ctx.r11.s64 = 1229258752;
	// ori r10,r11,20036
	ctx.r10.u64 = ctx.r11.u64 | 20036;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9a54
	if (!cr6.eq) goto loc_838E9A54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f78a8
	ctx.lr = 0x838E9AEC;
	sub_838F78A8(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9AF0:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x838e99f0
	if (!cr6.eq) goto loc_838E99F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1588, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_838E9B08:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x838e9b24
	if (!cr6.eq) goto loc_838E9B24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7638
	ctx.lr = 0x838E9B20;
	sub_838F7638(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9B24:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// beq cr6,0x838e9c9c
	if (cr6.eq) goto loc_838E9C9C;
	// lis r11,25163
	ctx.r11.s64 = 1649082368;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r11,18244
	ctx.r10.u64 = ctx.r11.u64 | 18244;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x838e9b50
	if (!cr6.eq) goto loc_838E9B50;
	// bl 0x838f8d20
	ctx.lr = 0x838E9B4C;
	sub_838F8D20(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9B50:
	// lis r11,25416
	ctx.r11.s64 = 1665662976;
	// ori r10,r11,21069
	ctx.r10.u64 = ctx.r11.u64 | 21069;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9b68
	if (!cr6.eq) goto loc_838E9B68;
	// bl 0x838f7c70
	ctx.lr = 0x838E9B64;
	sub_838F7C70(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9B68:
	// lis r11,26433
	ctx.r11.s64 = 1732313088;
	// ori r10,r11,19777
	ctx.r10.u64 = ctx.r11.u64 | 19777;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9b80
	if (!cr6.eq) goto loc_838E9B80;
	// bl 0x838f7938
	ctx.lr = 0x838E9B7C;
	sub_838F7938(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9B80:
	// lis r11,26697
	ctx.r11.s64 = 1749614592;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9b98
	if (!cr6.eq) goto loc_838E9B98;
	// bl 0x838f8fb8
	ctx.lr = 0x838E9B94;
	sub_838F8FB8(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9B98:
	// lis r11,28486
	ctx.r11.s64 = 1866858496;
	// ori r10,r11,18035
	ctx.r10.u64 = ctx.r11.u64 | 18035;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9bb0
	if (!cr6.eq) goto loc_838E9BB0;
	// bl 0x838f9298
	ctx.lr = 0x838E9BAC;
	sub_838F9298(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9BB0:
	// lis r11,28739
	ctx.r11.s64 = 1883439104;
	// ori r10,r11,16716
	ctx.r10.u64 = ctx.r11.u64 | 16716;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838e9bc8
	if (!cr6.eq) goto loc_838E9BC8;
	// bl 0x838f9448
	ctx.lr = 0x838E9BC4;
	sub_838F9448(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9BC8:
	// cmplw cr6,r31,r14
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r14.u32, xer);
	// bne cr6,0x838e9bd8
	if (!cr6.eq) goto loc_838E9BD8;
	// bl 0x838f9810
	ctx.lr = 0x838E9BD4;
	sub_838F9810(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9BD8:
	// cmplw cr6,r31,r15
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r15.u32, xer);
	// bne cr6,0x838e9be8
	if (!cr6.eq) goto loc_838E9BE8;
	// bl 0x838f9120
	ctx.lr = 0x838E9BE4;
	sub_838F9120(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9BE8:
	// cmplw cr6,r31,r16
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, xer);
	// bne cr6,0x838e9bf8
	if (!cr6.eq) goto loc_838E9BF8;
	// bl 0x838f7a60
	ctx.lr = 0x838E9BF4;
	sub_838F7A60(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9BF8:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, xer);
	// bne cr6,0x838e9c08
	if (!cr6.eq) goto loc_838E9C08;
	// bl 0x838f7fe8
	ctx.lr = 0x838E9C04;
	sub_838F7FE8(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C08:
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, xer);
	// bne cr6,0x838e9c18
	if (!cr6.eq) goto loc_838E9C18;
	// bl 0x838f8120
	ctx.lr = 0x838E9C14;
	sub_838F8120(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C18:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, xer);
	// bne cr6,0x838e9c28
	if (!cr6.eq) goto loc_838E9C28;
	// bl 0x838f86c0
	ctx.lr = 0x838E9C24;
	sub_838F86C0(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C28:
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// bne cr6,0x838e9c38
	if (!cr6.eq) goto loc_838E9C38;
	// bl 0x838f9c40
	ctx.lr = 0x838E9C34;
	sub_838F9C40(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C38:
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// bne cr6,0x838e9c48
	if (!cr6.eq) goto loc_838E9C48;
	// bl 0x838f9af8
	ctx.lr = 0x838E9C44;
	sub_838F9AF8(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C48:
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// bne cr6,0x838e9c58
	if (!cr6.eq) goto loc_838E9C58;
	// bl 0x838f8a50
	ctx.lr = 0x838E9C54;
	sub_838F8A50(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C58:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x838e9c68
	if (!cr6.eq) goto loc_838E9C68;
	// bl 0x838f9e40
	ctx.lr = 0x838E9C64;
	sub_838F9E40(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C68:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x838e9c78
	if (!cr6.eq) goto loc_838E9C78;
	// bl 0x838fa0f0
	ctx.lr = 0x838E9C74;
	sub_838FA0F0(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C78:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838fa568
	ctx.lr = 0x838E9C80;
	sub_838FA568(ctx, base);
	// b 0x838e99f0
	goto loc_838E99F0;
loc_838E9C84:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f10
	ctx.lr = 0x838E9C90;
	sub_838E5F10(ctx, base);
loc_838E9C90:
	// addi r4,r25,28
	ctx.r4.s64 = ctx.r25.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f10
	ctx.lr = 0x838E9C9C;
	sub_838E5F10(ctx, base);
loc_838E9C9C:
	// stw r29,1588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1588, ctx.r29.u32);
loc_838E9CA0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838E9CA8"))) PPC_WEAK_FUNC(sub_838E9CA8);
PPC_FUNC_IMPL(__imp__sub_838E9CA8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838e9cfc
	if (cr6.eq) goto loc_838E9CFC;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838e9cf0
	if (!cr6.eq) goto loc_838E9CF0;
	// bl 0x838f6ec8
	ctx.lr = 0x838E9CE0;
	sub_838F6EC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838ebc48
	ctx.lr = 0x838E9CEC;
	sub_838EBC48(ctx, base);
	// b 0x838e9cfc
	goto loc_838E9CFC;
loc_838E9CF0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,18328
	ctx.r4.s64 = ctx.r11.s64 + 18328;
	// bl 0x838e5ef8
	ctx.lr = 0x838E9CFC;
	sub_838E5EF8(ctx, base);
loc_838E9CFC:
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

__attribute__((alias("__imp__sub_838E9D14"))) PPC_WEAK_FUNC(sub_838E9D14);
PPC_FUNC_IMPL(__imp__sub_838E9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838E9D18"))) PPC_WEAK_FUNC(sub_838E9D18);
PPC_FUNC_IMPL(__imp__sub_838E9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e9e38
	if (cr6.eq) goto loc_838E9E38;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838e9d9c
	if (!cr6.eq) goto loc_838E9D9C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838e9d4c
	if (!cr6.eq) goto loc_838E9D4C;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x838e9d58
	goto loc_838E9D58;
loc_838E9D4C:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x838e9e38
	if (!cr6.eq) goto loc_838E9E38;
	// li r6,4
	ctx.r6.s64 = 4;
loc_838E9D58:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e9e38
	if (cr6.eq) goto loc_838E9E38;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838E9D68:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r3.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x838e9d68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E9D68;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_838E9D9C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x838e9e38
	if (!cr6.eq) goto loc_838E9E38;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838e9db4
	if (!cr6.eq) goto loc_838E9DB4;
	// li r7,6
	ctx.r7.s64 = 6;
	// b 0x838e9dc0
	goto loc_838E9DC0;
loc_838E9DB4:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x838e9e38
	if (!cr6.eq) goto loc_838E9E38;
	// li r7,8
	ctx.r7.s64 = 8;
loc_838E9DC0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838e9e38
	if (cr6.eq) goto loc_838E9E38;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838E9DD0:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r4,r9,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r3,r5,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r3,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r3.u8);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bdnz 0x838e9dd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838E9DD0;
loc_838E9E38:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838E9E40"))) PPC_WEAK_FUNC(sub_838E9E40);
PPC_FUNC_IMPL(__imp__sub_838E9E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838E9E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ea27c
	if (cr6.eq) goto loc_838EA27C;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838e9e74
	if (!cr6.eq) goto loc_838E9E74;
	// bl 0x838f6ec8
	ctx.lr = 0x838E9E74;
	sub_838F6EC8(ctx, base);
loc_838E9E74:
	// lbz r11,1618(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1618);
	// lbz r9,1615(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// lbz r8,1616(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// lbz r7,1619(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1619);
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x838e9eb0
	if (cr6.lt) goto loc_838E9EB0;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x838e9ebc
	goto loc_838E9EBC;
loc_838E9EB0:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838E9EBC:
	// lbz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea0a0
	if (cr6.eq) goto loc_838EA0A0;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ea0a0
	if (cr6.eq) goto loc_838EA0A0;
	// lbz r11,1613(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x838ea090
	if (cr6.gt) goto loc_838EA090;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838e9f3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838E9F3C;
	// bdzf 4*cr6+eq,0x838e9f80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838E9F80;
	// bdzf 4*cr6+eq,0x838e9fc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838E9FC4;
	// bdzf 4*cr6+eq,0x838ea008
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EA008;
	// bne cr6,0x838ea04c
	if (!cr6.eq) goto loc_838EA04C;
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ea0a0
	if (cr6.eq) goto loc_838EA0A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838e9f2c
	if (cr6.eq) goto loc_838E9F2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838E9F2C;
	sub_838F6158(ctx, base);
loc_838E9F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838E9F34;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838E9F3C:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838e9f58
	if (!cr6.eq) goto loc_838E9F58;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x838ea0a0
	if (!cr6.lt) goto loc_838EA0A0;
loc_838E9F58:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838e9f70
	if (cr6.eq) goto loc_838E9F70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838E9F70;
	sub_838F6158(ctx, base);
loc_838E9F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838E9F78;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838E9F80:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x838ea0a0
	if (cr6.eq) goto loc_838EA0A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838e9fb4
	if (cr6.eq) goto loc_838E9FB4;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838e9fb4
	if (cr6.eq) goto loc_838E9FB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838E9FB4;
	sub_838F6158(ctx, base);
loc_838E9FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838E9FBC;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838E9FC4:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838e9fe0
	if (!cr6.eq) goto loc_838E9FE0;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x838ea0a0
	if (!cr6.lt) goto loc_838EA0A0;
loc_838E9FE0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838e9ff8
	if (cr6.eq) goto loc_838E9FF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838E9FF8;
	sub_838F6158(ctx, base);
loc_838E9FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838EA000;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838EA008:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x838ea0a0
	if (cr6.eq) goto loc_838EA0A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838ea03c
	if (cr6.eq) goto loc_838EA03C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea03c
	if (cr6.eq) goto loc_838EA03C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838EA03C;
	sub_838F6158(ctx, base);
loc_838EA03C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838EA044;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838EA04C:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ea068
	if (!cr6.eq) goto loc_838EA068;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x838ea0a0
	if (!cr6.lt) goto loc_838EA0A0;
loc_838EA068:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838ea080
	if (cr6.eq) goto loc_838EA080;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838EA080;
	sub_838F6158(ctx, base);
loc_838EA080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838EA088;
	sub_838FAA08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838EA090:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838e9f2c
	if (cr6.eq) goto loc_838E9F2C;
loc_838EA0A0:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ea0c4
	if (!cr6.eq) goto loc_838EA0C4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x838e5e88
	ctx.lr = 0x838EA0C4;
	sub_838E5E88(ctx, base);
loc_838EA0C4:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r4,1572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// bl 0x838fa710
	ctx.lr = 0x838EA0D0;
	sub_838FA710(ctx, base);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838ea100
	if (cr6.eq) goto loc_838EA100;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bge cr6,0x838ea190
	if (!cr6.lt) goto loc_838EA190;
	// lwz r10,1568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6e30
	ctx.lr = 0x838EA100;
	sub_838F6E30(ctx, base);
loc_838EA100:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,1572(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838EA118;
	sub_831CE980(ctx, base);
	// lwz r10,1864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ea140
	if (cr6.eq) goto loc_838EA140;
	// lbz r11,1868(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1868);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bne cr6,0x838ea140
	if (!cr6.eq) goto loc_838EA140;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9d18
	ctx.lr = 0x838EA140;
	sub_838E9D18(ctx, base);
loc_838EA140:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea158
	if (cr6.eq) goto loc_838EA158;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838eeee0
	ctx.lr = 0x838EA158;
	sub_838EEEE0(ctx, base);
loc_838EA158:
	// lbz r11,1623(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1623);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ea1a4
	if (!cr6.eq) goto loc_838EA1A4;
	// lbz r11,91(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r10,1622(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1622);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stb r11,1623(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1623, ctx.r11.u8);
	// ble cr6,0x838ea1c0
	if (!cr6.gt) goto loc_838EA1C0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5e88
	ctx.lr = 0x838EA190;
	sub_838E5E88(ctx, base);
loc_838EA190:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5e88
	ctx.lr = 0x838EA1A4;
	sub_838E5E88(ctx, base);
loc_838EA1A4:
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x838ea1c0
	if (cr6.eq) goto loc_838EA1C0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18536
	ctx.r4.s64 = ctx.r11.s64 + 18536;
	// bl 0x838e5e88
	ctx.lr = 0x838EA1C0;
	sub_838E5E88(ctx, base);
loc_838EA1C0:
	// lbz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea224
	if (cr6.eq) goto loc_838EA224;
	// lwz r6,1404(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea224
	if (cr6.eq) goto loc_838EA224;
	// lbz r5,1613(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x838ea1f8
	if (!cr6.lt) goto loc_838EA1F8;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838f6770
	ctx.lr = 0x838EA1F8;
	sub_838F6770(ctx, base);
loc_838EA1F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838ea210
	if (cr6.eq) goto loc_838EA210;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838EA210;
	sub_838F6158(ctx, base);
loc_838EA210:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838ea254
	if (cr6.eq) goto loc_838EA254;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x838ea24c
	goto loc_838EA24C;
loc_838EA224:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838ea23c
	if (cr6.eq) goto loc_838EA23C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838EA23C;
	sub_838F6158(ctx, base);
loc_838EA23C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838ea254
	if (cr6.eq) goto loc_838EA254;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_838EA24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6158
	ctx.lr = 0x838EA254;
	sub_838F6158(ctx, base);
loc_838EA254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838faa08
	ctx.lr = 0x838EA25C;
	sub_838FAA08(ctx, base);
	// lwz r11,1724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea27c
	if (cr6.eq) goto loc_838EA27C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,1613(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838EA27C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838EA27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EA284"))) PPC_WEAK_FUNC(sub_838EA284);
PPC_FUNC_IMPL(__imp__sub_838EA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EA288"))) PPC_WEAK_FUNC(sub_838EA288);
PPC_FUNC_IMPL(__imp__sub_838EA288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838EA290;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ea36c
	if (cr6.eq) goto loc_838EA36C;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ea2e8
	if (!cr6.eq) goto loc_838EA2E8;
	// bl 0x838ef930
	ctx.lr = 0x838EA2B8;
	sub_838EF930(ctx, base);
	// lwz r11,1400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ea2d8
	if (!cr6.eq) goto loc_838EA2D8;
	// bl 0x838f6ec8
	ctx.lr = 0x838EA2D4;
	sub_838F6EC8(ctx, base);
	// b 0x838ea32c
	goto loc_838EA32C;
loc_838EA2D8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,18388
	ctx.r4.s64 = ctx.r11.s64 + 18388;
	// bl 0x838e5ef8
	ctx.lr = 0x838EA2E4;
	sub_838E5EF8(ctx, base);
	// b 0x838ea32c
	goto loc_838EA32C;
loc_838EA2E8:
	// lbz r11,1612(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ea320
	if (cr6.eq) goto loc_838EA320;
	// lwz r11,1404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1404);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ea320
	if (!cr6.eq) goto loc_838EA320;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,18388
	ctx.r11.s64 = ctx.r11.s64 + 18388;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x838e5cc0
	ctx.lr = 0x838EA318;
	sub_838E5CC0(ctx, base);
	// lwz r10,1540(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1540);
	// stw r10,1544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1544, ctx.r10.u32);
loc_838EA320:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838ef930
	ctx.lr = 0x838EA328;
	sub_838EF930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_838EA32C:
	// lwz r28,1540(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1540);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x838ea36c
	if (!cr6.gt) goto loc_838EA36C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_838EA33C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838ea364
	if (cr6.eq) goto loc_838EA364;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r26,-4
	ctx.r30.s64 = ctx.r26.s64 + -4;
loc_838EA34C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9e40
	ctx.lr = 0x838EA35C;
	sub_838E9E40(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838ea34c
	if (!cr0.eq) goto loc_838EA34C;
loc_838EA364:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x838ea33c
	if (!cr0.eq) goto loc_838EA33C;
loc_838EA36C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EA374"))) PPC_WEAK_FUNC(sub_838EA374);
PPC_FUNC_IMPL(__imp__sub_838EA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EA378"))) PPC_WEAK_FUNC(sub_838EA378);
PPC_FUNC_IMPL(__imp__sub_838EA378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x838EA380;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ea6e0
	if (cr6.eq) goto loc_838EA6E0;
	// lis r4,18756
	ctx.r4.s64 = 1229193216;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x838e6c08
	ctx.lr = 0x838EA3A0;
	sub_838E6C08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838ea3b0
	if (!cr6.eq) goto loc_838EA3B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fa960
	ctx.lr = 0x838EA3B0;
	sub_838FA960(ctx, base);
loc_838EA3B0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lbz r10,1615(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1615);
	// addi r11,r11,18720
	ctx.r11.s64 = ctx.r11.s64 + 18720;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x838ea3e4
	if (!cr6.eq) goto loc_838EA3E4;
	// lhz r10,1600(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1600);
	// lwz r9,1604(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x838ea3e4
	if (!cr6.gt) goto loc_838EA3E4;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e61a0
	ctx.lr = 0x838EA3E4;
	sub_838E61A0(ctx, base);
loc_838EA3E4:
	// lis r11,18757
	ctx.r11.s64 = 1229258752;
	// lis r10,20556
	ctx.r10.s64 = 1347158016;
	// lis r9,29507
	ctx.r9.s64 = 1933770752;
	// lis r8,28744
	ctx.r8.s64 = 1883766784;
	// lis r7,29506
	ctx.r7.s64 = 1933705216;
	// lis r6,29522
	ctx.r6.s64 = 1934753792;
	// lis r5,26947
	ctx.r5.s64 = 1765998592;
	// lis r4,29520
	ctx.r4.s64 = 1934622720;
	// lis r3,29765
	ctx.r3.s64 = 1950679040;
	// lis r31,29769
	ctx.r31.s64 = 1950941184;
	// lis r29,29778
	ctx.r29.s64 = 1951531008;
	// lis r28,31316
	ctx.r28.s64 = 2052325376;
	// lis r24,26964
	ctx.r24.s64 = 1767112704;
	// ori r25,r11,20036
	ctx.r25.u64 = ctx.r11.u64 | 20036;
	// ori r26,r10,21573
	ctx.r26.u64 = ctx.r10.u64 | 21573;
	// ori r14,r9,16716
	ctx.r14.u64 = ctx.r9.u64 | 16716;
	// ori r15,r8,22899
	ctx.r15.u64 = ctx.r8.u64 | 22899;
	// ori r16,r7,18772
	ctx.r16.u64 = ctx.r7.u64 | 18772;
	// ori r17,r6,18242
	ctx.r17.u64 = ctx.r6.u64 | 18242;
	// ori r18,r5,17232
	ctx.r18.u64 = ctx.r5.u64 | 17232;
	// ori r19,r4,19540
	ctx.r19.u64 = ctx.r4.u64 | 19540;
	// ori r20,r3,22644
	ctx.r20.u64 = ctx.r3.u64 | 22644;
	// ori r21,r31,19781
	ctx.r21.u64 = ctx.r31.u64 | 19781;
	// ori r22,r29,20051
	ctx.r22.u64 = ctx.r29.u64 | 20051;
	// ori r23,r28,22644
	ctx.r23.u64 = ctx.r28.u64 | 22644;
	// ori r24,r24,22644
	ctx.r24.u64 = ctx.r24.u64 | 22644;
loc_838EA44C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7268
	ctx.lr = 0x838EA454;
	sub_838F7268(ctx, base);
	// lwz r31,1564(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x838ea478
	if (!cr6.eq) goto loc_838EA478;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x838f78a8
	ctx.lr = 0x838EA474;
	sub_838F78A8(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA478:
	// lis r11,18760
	ctx.r11.s64 = 1229455360;
	// ori r10,r11,17490
	ctx.r10.u64 = ctx.r11.u64 | 17490;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea498
	if (!cr6.eq) goto loc_838EA498;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x838f7458
	ctx.lr = 0x838EA494;
	sub_838F7458(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA498:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x838ea4ac
	if (!cr6.eq) goto loc_838EA4AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838EA4A8;
	sub_838F7388(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA4AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838e6c08
	ctx.lr = 0x838EA4B4;
	sub_838E6C08(ctx, base);
	// lis r11,18756
	ctx.r11.s64 = 1229193216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// beq cr6,0x838ea524
	if (cr6.eq) goto loc_838EA524;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea4f8
	if (!cr6.eq) goto loc_838EA4F8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x838ea4e8
	if (!cr6.eq) goto loc_838EA4E8;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ea4f8
	if (cr6.eq) goto loc_838EA4F8;
loc_838EA4E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e61a0
	ctx.lr = 0x838EA4F8;
	sub_838E61A0(ctx, base);
loc_838EA4F8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fa568
	ctx.lr = 0x838EA50C;
	sub_838FA568(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x838ea6d0
	if (!cr6.eq) goto loc_838EA6D0;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA524:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea560
	if (!cr6.eq) goto loc_838EA560;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x838ea544
	if (!cr6.eq) goto loc_838EA544;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ea550
	if (cr6.eq) goto loc_838EA550;
loc_838EA544:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x838e61a0
	ctx.lr = 0x838EA550;
	sub_838E61A0(ctx, base);
loc_838EA550:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7388
	ctx.lr = 0x838EA55C;
	sub_838F7388(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA560:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x838ea57c
	if (!cr6.eq) goto loc_838EA57C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7638
	ctx.lr = 0x838EA578;
	sub_838F7638(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA57C:
	// lis r11,25163
	ctx.r11.s64 = 1649082368;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r11,18244
	ctx.r10.u64 = ctx.r11.u64 | 18244;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x838ea5a0
	if (!cr6.eq) goto loc_838EA5A0;
	// bl 0x838f8d20
	ctx.lr = 0x838EA59C;
	sub_838F8D20(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA5A0:
	// lis r11,25416
	ctx.r11.s64 = 1665662976;
	// ori r10,r11,21069
	ctx.r10.u64 = ctx.r11.u64 | 21069;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea5b8
	if (!cr6.eq) goto loc_838EA5B8;
	// bl 0x838f7c70
	ctx.lr = 0x838EA5B4;
	sub_838F7C70(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA5B8:
	// lis r11,26433
	ctx.r11.s64 = 1732313088;
	// ori r10,r11,19777
	ctx.r10.u64 = ctx.r11.u64 | 19777;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea5d0
	if (!cr6.eq) goto loc_838EA5D0;
	// bl 0x838f7938
	ctx.lr = 0x838EA5CC;
	sub_838F7938(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA5D0:
	// lis r11,26697
	ctx.r11.s64 = 1749614592;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea5e8
	if (!cr6.eq) goto loc_838EA5E8;
	// bl 0x838f8fb8
	ctx.lr = 0x838EA5E4;
	sub_838F8FB8(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA5E8:
	// lis r11,28486
	ctx.r11.s64 = 1866858496;
	// ori r10,r11,18035
	ctx.r10.u64 = ctx.r11.u64 | 18035;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea600
	if (!cr6.eq) goto loc_838EA600;
	// bl 0x838f9298
	ctx.lr = 0x838EA5FC;
	sub_838F9298(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA600:
	// lis r11,28739
	ctx.r11.s64 = 1883439104;
	// ori r10,r11,16716
	ctx.r10.u64 = ctx.r11.u64 | 16716;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ea618
	if (!cr6.eq) goto loc_838EA618;
	// bl 0x838f9448
	ctx.lr = 0x838EA614;
	sub_838F9448(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA618:
	// cmplw cr6,r31,r14
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r14.u32, xer);
	// bne cr6,0x838ea628
	if (!cr6.eq) goto loc_838EA628;
	// bl 0x838f9810
	ctx.lr = 0x838EA624;
	sub_838F9810(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA628:
	// cmplw cr6,r31,r15
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r15.u32, xer);
	// bne cr6,0x838ea638
	if (!cr6.eq) goto loc_838EA638;
	// bl 0x838f9120
	ctx.lr = 0x838EA634;
	sub_838F9120(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA638:
	// cmplw cr6,r31,r16
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, xer);
	// bne cr6,0x838ea648
	if (!cr6.eq) goto loc_838EA648;
	// bl 0x838f7a60
	ctx.lr = 0x838EA644;
	sub_838F7A60(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA648:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, xer);
	// bne cr6,0x838ea658
	if (!cr6.eq) goto loc_838EA658;
	// bl 0x838f7fe8
	ctx.lr = 0x838EA654;
	sub_838F7FE8(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA658:
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, xer);
	// bne cr6,0x838ea668
	if (!cr6.eq) goto loc_838EA668;
	// bl 0x838f8120
	ctx.lr = 0x838EA664;
	sub_838F8120(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA668:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, xer);
	// bne cr6,0x838ea678
	if (!cr6.eq) goto loc_838EA678;
	// bl 0x838f86c0
	ctx.lr = 0x838EA674;
	sub_838F86C0(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA678:
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// bne cr6,0x838ea688
	if (!cr6.eq) goto loc_838EA688;
	// bl 0x838f9c40
	ctx.lr = 0x838EA684;
	sub_838F9C40(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA688:
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// bne cr6,0x838ea698
	if (!cr6.eq) goto loc_838EA698;
	// bl 0x838f9af8
	ctx.lr = 0x838EA694;
	sub_838F9AF8(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA698:
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// bne cr6,0x838ea6a8
	if (!cr6.eq) goto loc_838EA6A8;
	// bl 0x838f8a50
	ctx.lr = 0x838EA6A4;
	sub_838F8A50(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA6A8:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x838ea6b8
	if (!cr6.eq) goto loc_838EA6B8;
	// bl 0x838f9e40
	ctx.lr = 0x838EA6B4;
	sub_838F9E40(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA6B8:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x838ea6c8
	if (!cr6.eq) goto loc_838EA6C8;
	// bl 0x838fa0f0
	ctx.lr = 0x838EA6C4;
	sub_838FA0F0(ctx, base);
	// b 0x838ea6d0
	goto loc_838EA6D0;
loc_838EA6C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838fa568
	ctx.lr = 0x838EA6D0;
	sub_838FA568(ctx, base);
loc_838EA6D0:
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ea44c
	if (cr6.eq) goto loc_838EA44C;
loc_838EA6E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EA6E8"))) PPC_WEAK_FUNC(sub_838EA6E8);
PPC_FUNC_IMPL(__imp__sub_838EA6E8) {
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
	// bl 0x838e8798
	ctx.lr = 0x838EA704;
	sub_838E8798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1884(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// bl 0x838f2288
	ctx.lr = 0x838EA710;
	sub_838F2288(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// bl 0x838f2288
	ctx.lr = 0x838EA724;
	sub_838F2288(ctx, base);
	// stw r30,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// bl 0x838f2288
	ctx.lr = 0x838EA734;
	sub_838F2288(ctx, base);
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1792(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// bl 0x838f2288
	ctx.lr = 0x838EA744;
	sub_838F2288(ctx, base);
	// stw r30,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// bl 0x838f2288
	ctx.lr = 0x838EA754;
	sub_838F2288(ctx, base);
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r30,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ea778
	if (cr6.eq) goto loc_838EA778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// bl 0x838e6360
	ctx.lr = 0x838EA774;
	sub_838E6360(ctx, base);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
loc_838EA778:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// stw r10,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ea7a0
	if (cr6.eq) goto loc_838EA7A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// bl 0x838f2288
	ctx.lr = 0x838EA79C;
	sub_838F2288(ctx, base);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
loc_838EA7A0:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r10.u32);
	// bl 0x8255cfb8
	ctx.lr = 0x838EA7B4;
	sub_8255CFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// bl 0x838f2288
	ctx.lr = 0x838EA7C0;
	sub_838F2288(ctx, base);
	// stw r30,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1928(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// bl 0x838f2288
	ctx.lr = 0x838EA7D0;
	sub_838F2288(ctx, base);
	// stw r30,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1852(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// bl 0x838f2288
	ctx.lr = 0x838EA7E0;
	sub_838F2288(ctx, base);
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_838EA7FC"))) PPC_WEAK_FUNC(sub_838EA7FC);
PPC_FUNC_IMPL(__imp__sub_838EA7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EA800"))) PPC_WEAK_FUNC(sub_838EA800);
PPC_FUNC_IMPL(__imp__sub_838EA800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838EA808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ea858
	if (cr6.eq) goto loc_838EA858;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838ea858
	if (cr6.eq) goto loc_838EA858;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8bc8
	ctx.lr = 0x838EA834;
	sub_838E8BC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8bc8
	ctx.lr = 0x838EA840;
	sub_838E8BC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x838ea6e8
	ctx.lr = 0x838EA850;
	sub_838EA6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f22b8
	ctx.lr = 0x838EA858;
	sub_838F22B8(ctx, base);
loc_838EA858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EA860"))) PPC_WEAK_FUNC(sub_838EA860);
PPC_FUNC_IMPL(__imp__sub_838EA860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838EA868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838eaab8
	if (cr6.eq) goto loc_838EAAB8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838eaab8
	if (cr6.eq) goto loc_838EAAB8;
	// bl 0x838e9950
	ctx.lr = 0x838EA88C;
	sub_838E9950(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x838ea8b0
	if (!cr6.gt) goto loc_838EA8B0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,18744
	ctx.r4.s64 = ctx.r11.s64 + 18744;
	// bl 0x838e5e88
	ctx.lr = 0x838EA8B0;
	sub_838E5E88(ctx, base);
loc_838EA8B0:
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea8c4
	if (cr6.eq) goto loc_838EA8C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eab30
	ctx.lr = 0x838EA8C4;
	sub_838EAB30(ctx, base);
loc_838EA8C4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea8d8
	if (cr6.eq) goto loc_838EA8D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eab70
	ctx.lr = 0x838EA8D8;
	sub_838EAB70(ctx, base);
loc_838EA8D8:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea8ec
	if (cr6.eq) goto loc_838EA8EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eabb0
	ctx.lr = 0x838EA8EC;
	sub_838EABB0(ctx, base);
loc_838EA8EC:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea900
	if (cr6.eq) goto loc_838EA900;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef8a0
	ctx.lr = 0x838EA900;
	sub_838EF8A0(ctx, base);
loc_838EA900:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea914
	if (cr6.eq) goto loc_838EA914;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef8d0
	ctx.lr = 0x838EA914;
	sub_838EF8D0(ctx, base);
loc_838EA914:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea928
	if (cr6.eq) goto loc_838EA928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eae00
	ctx.lr = 0x838EA928;
	sub_838EAE00(ctx, base);
loc_838EA928:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea93c
	if (cr6.eq) goto loc_838EA93C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef998
	ctx.lr = 0x838EA93C;
	sub_838EF998(ctx, base);
loc_838EA93C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea964
	if (cr6.eq) goto loc_838EA964;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ea964
	if (cr6.eq) goto loc_838EA964;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef8f8
	ctx.lr = 0x838EA964;
	sub_838EF8F8(ctx, base);
loc_838EA964:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea978
	if (cr6.eq) goto loc_838EA978;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef860
	ctx.lr = 0x838EA978;
	sub_838EF860(ctx, base);
loc_838EA978:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea98c
	if (cr6.eq) goto loc_838EA98C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef968
	ctx.lr = 0x838EA98C;
	sub_838EF968(ctx, base);
loc_838EA98C:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea9a0
	if (cr6.eq) goto loc_838EA9A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef878
	ctx.lr = 0x838EA9A0;
	sub_838EF878(ctx, base);
loc_838EA9A0:
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea9b4
	if (cr6.eq) goto loc_838EA9B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef980
	ctx.lr = 0x838EA9B4;
	sub_838EF980(ctx, base);
loc_838EA9B4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea9c8
	if (cr6.eq) goto loc_838EA9C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eae80
	ctx.lr = 0x838EA9C8;
	sub_838EAE80(ctx, base);
loc_838EA9C8:
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ea9dc
	if (cr6.eq) goto loc_838EA9DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838eae40
	ctx.lr = 0x838EA9DC;
	sub_838EAE40(ctx, base);
loc_838EA9DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838ef930
	ctx.lr = 0x838EA9E4;
	sub_838EF930(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e9ca8
	ctx.lr = 0x838EA9F0;
	sub_838E9CA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e66e8
	ctx.lr = 0x838EAA04;
	sub_838E66E8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eaa94
	if (!cr6.eq) goto loc_838EAA94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x838f2120
	ctx.lr = 0x838EAA20;
	sub_838F2120(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x838eaa54
	if (cr6.eq) goto loc_838EAA54;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838EAA40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x838eaa40
	if (cr6.lt) goto loc_838EAA40;
loc_838EAA54:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// beq cr6,0x838eaa94
	if (cr6.eq) goto loc_838EAA94;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_838EAA6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838f2120
	ctx.lr = 0x838EAA78;
	sub_838F2120(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// blt cr6,0x838eaa6c
	if (cr6.lt) goto loc_838EAA6C;
loc_838EAA94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x838ea288
	ctx.lr = 0x838EAAA0;
	sub_838EA288(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x838ea378
	ctx.lr = 0x838EAAB8;
	sub_838EA378(ctx, base);
loc_838EAAB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EAAC0"))) PPC_WEAK_FUNC(sub_838EAAC0);
PPC_FUNC_IMPL(__imp__sub_838EAAC0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x838e6558
	ctx.lr = 0x838EAAE0;
	sub_838E6558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838eab1c
	if (cr6.eq) goto loc_838EAB1C;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// oris r7,r11,48
	ctx.r7.u64 = ctx.r11.u64 | 3145728;
	// stw r9,1952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1952, ctx.r9.u32);
	// stw r8,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838e97b0
	ctx.lr = 0x838EAB18;
	sub_838E97B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838EAB1C:
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

__attribute__((alias("__imp__sub_838EAB30"))) PPC_WEAK_FUNC(sub_838EAB30);
PPC_FUNC_IMPL(__imp__sub_838EAB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eab54
	if (cr6.eq) goto loc_838EAB54;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EAB54:
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// oris r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 67108864;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EAB6C"))) PPC_WEAK_FUNC(sub_838EAB6C);
PPC_FUNC_IMPL(__imp__sub_838EAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EAB70"))) PPC_WEAK_FUNC(sub_838EAB70);
PPC_FUNC_IMPL(__imp__sub_838EAB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eab94
	if (cr6.eq) goto loc_838EAB94;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EAB94:
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EABAC"))) PPC_WEAK_FUNC(sub_838EABAC);
PPC_FUNC_IMPL(__imp__sub_838EABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EABB0"))) PPC_WEAK_FUNC(sub_838EABB0);
PPC_FUNC_IMPL(__imp__sub_838EABB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eabd4
	if (cr6.eq) goto loc_838EABD4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EABD4:
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// oris r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 262144;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EABEC"))) PPC_WEAK_FUNC(sub_838EABEC);
PPC_FUNC_IMPL(__imp__sub_838EABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EABF0"))) PPC_WEAK_FUNC(sub_838EABF0);
PPC_FUNC_IMPL(__imp__sub_838EABF0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x838eac30
	if (!cr6.gt) goto loc_838EAC30;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,680(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 680);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x838eac30
	if (!cr6.lt) goto loc_838EAC30;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfd f0,-18760(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18760);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
loc_838EAC30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,15760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + ctx.f0.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x838EAC40;
	sub_831D1CA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-2104(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2104);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x838eac80
	if (cr6.gt) goto loc_838EAC80;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfd f0,9536(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9536);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838eac80
	if (cr6.lt) goto loc_838EAC80;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
loc_838EAC80:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20688
	ctx.r4.s64 = ctx.r11.s64 + 20688;
	// bl 0x838e6050
	ctx.lr = 0x838EAC90;
	sub_838E6050(ctx, base);
}

__attribute__((alias("__imp__sub_838EAC90"))) PPC_WEAK_FUNC(sub_838EAC90);
PPC_FUNC_IMPL(__imp__sub_838EAC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eacb4
	if (cr6.eq) goto loc_838EACB4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EACB4:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// ori r8,r10,15536
	ctx.r8.u64 = ctx.r10.u64 | 15536;
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// ori r9,r9,31072
	ctx.r9.u64 = ctx.r9.u64 | 31072;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x838eacfc
	if (cr6.eq) goto loc_838EACFC;
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// beq cr6,0x838eacfc
	if (cr6.eq) goto loc_838EACFC;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x838eacf0
	if (cr6.eq) goto loc_838EACF0;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bne cr6,0x838ead0c
	if (!cr6.eq) goto loc_838EAD0C;
loc_838EACF0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,20652
	ctx.r10.u64 = ctx.r10.u64 | 20652;
	// b 0x838ead0c
	goto loc_838EAD0C;
loc_838EACFC:
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// ori r10,r10,23392
	ctx.r10.u64 = ctx.r10.u64 | 23392;
loc_838EAD0C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x838ead50
	if (cr6.eq) goto loc_838EAD50;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x838ead50
	if (cr6.eq) goto loc_838EAD50;
	// cmpwi cr6,r5,-2
	cr6.compare<int32_t>(ctx.r5.s32, -2, xer);
	// beq cr6,0x838ead30
	if (cr6.eq) goto loc_838EAD30;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x838ead68
	if (!cr6.eq) goto loc_838EAD68;
loc_838EAD30:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,373
	ctx.r11.u64 = ctx.r11.u64 | 373;
loc_838EAD38:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x838ead80
	if (cr6.gt) goto loc_838EAD80;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,20512
	ctx.r11.s64 = ctx.r11.s64 + 20512;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
loc_838EAD50:
	// lwz r9,1400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,4096
	ctx.r8.u64 = ctx.r9.u64 | 4096;
	// ori r11,r11,45455
	ctx.r11.u64 = ctx.r11.u64 | 45455;
	// stw r8,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r8.u32);
	// b 0x838ead38
	goto loc_838EAD38;
loc_838EAD68:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x838ead38
	if (cr6.gt) goto loc_838EAD38;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,20512
	ctx.r11.s64 = ctx.r11.s64 + 20512;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
loc_838EAD80:
	// lhz r9,2054(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2054);
	// stw r11,1980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1980, ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r10,1668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1668, ctx.r10.u32);
	// sth r8,2054(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2054, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EAD98"))) PPC_WEAK_FUNC(sub_838EAD98);
PPC_FUNC_IMPL(__imp__sub_838EAD98) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x838eabf0
	ctx.lr = 0x838EADC0;
	sub_838EABF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838eabf0
	ctx.lr = 0x838EADD0;
	sub_838EABF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x838eac90
	ctx.lr = 0x838EADE0;
	sub_838EAC90(ctx, base);
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

__attribute__((alias("__imp__sub_838EADFC"))) PPC_WEAK_FUNC(sub_838EADFC);
PPC_FUNC_IMPL(__imp__sub_838EADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EAE00"))) PPC_WEAK_FUNC(sub_838EAE00);
PPC_FUNC_IMPL(__imp__sub_838EAE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eae24
	if (cr6.eq) goto loc_838EAE24;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EAE24:
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// oris r8,r10,512
	ctx.r8.u64 = ctx.r10.u64 | 33554432;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// ori r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 4096;
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EAE40"))) PPC_WEAK_FUNC(sub_838EAE40);
PPC_FUNC_IMPL(__imp__sub_838EAE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eae64
	if (cr6.eq) goto loc_838EAE64;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// b 0x838e5ef8
	sub_838E5EF8(ctx, base);
	return;
loc_838EAE64:
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// oris r8,r10,512
	ctx.r8.u64 = ctx.r10.u64 | 33554432;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// ori r8,r8,4608
	ctx.r8.u64 = ctx.r8.u64 | 4608;
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EAE80"))) PPC_WEAK_FUNC(sub_838EAE80);
PPC_FUNC_IMPL(__imp__sub_838EAE80) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838eaf14
	if (cr6.eq) goto loc_838EAF14;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eaecc
	if (cr6.eq) goto loc_838EAECC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// bl 0x838e5ef8
	ctx.lr = 0x838EAEB8;
	sub_838E5EF8(ctx, base);
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
loc_838EAECC:
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eaef4
	if (cr6.eq) goto loc_838EAEF4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20512
	ctx.r4.s64 = ctx.r11.s64 + 20512;
	// bl 0x838e5ef8
	ctx.lr = 0x838EAEF0;
	sub_838E5EF8(ctx, base);
	// b 0x838eaf08
	goto loc_838EAF08;
loc_838EAEF4:
	// lwz r10,1404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// ori r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 4096;
	// stw r9,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
	// stw r8,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r8.u32);
loc_838EAF08:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
loc_838EAF14:
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

__attribute__((alias("__imp__sub_838EAF28"))) PPC_WEAK_FUNC(sub_838EAF28);
PPC_FUNC_IMPL(__imp__sub_838EAF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r7,1608(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1608);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838eaf70
	if (cr6.eq) goto loc_838EAF70;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x838eaf70
	if (!cr6.gt) goto loc_838EAF70;
	// lwz r9,1708(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
loc_838EAF48:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x838eaf60
	if (cr6.eq) goto loc_838EAF60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eaf98
	if (!cr6.eq) goto loc_838EAF98;
	// li r8,1
	ctx.r8.s64 = 1;
loc_838EAF60:
	// lhz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1608);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x838eaf48
	if (cr6.lt) goto loc_838EAF48;
loc_838EAF70:
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r9,r11,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r11,r10,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
	// bne cr6,0x838eaf98
	if (!cr6.eq) goto loc_838EAF98;
	// rlwinm r11,r11,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
loc_838EAF98:
	// lwz r8,1404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r11,r8,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,1632(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// rlwinm r6,r8,0,12,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	// lwz r10,1596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// sth r5,1634(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1634, ctx.r5.u16);
	// sth r4,1636(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1636, ctx.r4.u16);
	// sth r11,1638(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1638, ctx.r11.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r8,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,1708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_838EB008:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subfic r8,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r9.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838eb008
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EB008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EB024"))) PPC_WEAK_FUNC(sub_838EB024);
PPC_FUNC_IMPL(__imp__sub_838EB024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EB028"))) PPC_WEAK_FUNC(sub_838EB028);
PPC_FUNC_IMPL(__imp__sub_838EB028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1608);
	// lbz r10,1615(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1615);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x838eb06c
	if (!cr6.eq) goto loc_838EB06C;
	// lwz r9,1400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r8,1404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r7,r9,0,19,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r11,r8,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r7,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r7.u32);
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
	// bne cr6,0x838eb06c
	if (!cr6.eq) goto loc_838EB06C;
	// rlwinm r11,r11,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
loc_838EB06C:
	// lwz r7,1404(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r11,r7,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r7,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r9,1616(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// lhz r11,1640(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1640);
	// lhz r10,1720(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1720);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x838eb0d8
	if (cr6.eq) goto loc_838EB0D8;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x838eb0cc
	if (cr6.eq) goto loc_838EB0CC;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x838eb0e8
	if (!cr6.eq) goto loc_838EB0E8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x838eb0e8
	goto loc_838EB0E8;
loc_838EB0CC:
	// mulli r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 * 85;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// b 0x838eb0e8
	goto loc_838EB0E8;
loc_838EB0D8:
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_838EB0E8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r7,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	// sth r11,1638(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1638, ctx.r11.u16);
	// sth r11,1636(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1636, ctx.r11.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r11,1634(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1634, ctx.r11.u16);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,1718(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1718, ctx.r11.u16);
	// sth r11,1716(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1716, ctx.r11.u16);
	// sth r11,1714(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1714, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EB118"))) PPC_WEAK_FUNC(sub_838EB118);
PPC_FUNC_IMPL(__imp__sub_838EB118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838EB120;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,1980(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1980);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,34464
	ctx.r30.u64 = ctx.r11.u64 | 34464;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x838eb188
	if (cr6.eq) goto loc_838EB188;
	// lwz r5,1668(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1668);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838eb178
	if (cr6.eq) goto loc_838EB178;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e7fe8
	ctx.lr = 0x838EB158;
	sub_838E7FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838eb170
	if (cr6.eq) goto loc_838EB170;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x838e8160
	ctx.lr = 0x838EB168;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838eb1a8
	if (cr6.eq) goto loc_838EB1A8;
loc_838EB170:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x838eb1a8
	goto loc_838EB1A8;
loc_838EB178:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x838e80d8
	ctx.lr = 0x838EB180;
	sub_838E80D8(ctx, base);
	// stw r3,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r3.u32);
	// b 0x838eb1a8
	goto loc_838EB1A8;
loc_838EB188:
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838eb1a0
	if (cr6.eq) goto loc_838EB1A0;
	// bl 0x838e80d8
	ctx.lr = 0x838EB198;
	sub_838E80D8(ctx, base);
	// stw r3,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r3.u32);
	// b 0x838eb1a8
	goto loc_838EB1A8;
loc_838EB1A0:
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
loc_838EB1A8:
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// bne cr6,0x838eb1c8
	if (!cr6.eq) goto loc_838EB1C8;
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_838EB1C8:
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb20c
	if (cr6.eq) goto loc_838EB20C;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eb20c
	if (!cr6.eq) goto loc_838EB20C;
	// lis r12,-641
	ctx.r12.s64 = -42008576;
	// lwz r10,1400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// rlwinm r7,r10,0,19,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// sth r8,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r8.u16);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r7,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r7.u32);
	// stw r9,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r9.u32);
loc_838EB20C:
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x838e8160
	ctx.lr = 0x838EB214;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb234
	if (!cr6.eq) goto loc_838EB234;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// lwz r10,1400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// rlwinm r9,r11,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// rlwinm r8,r10,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r9,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r9.u32);
	// stw r8,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r8.u32);
loc_838EB234:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,9,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb24c
	if (cr6.eq) goto loc_838EB24C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9580
	ctx.lr = 0x838EB24C;
	sub_838E9580(ctx, base);
loc_838EB24C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb270
	if (cr6.eq) goto loc_838EB270;
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eb2b8
	if (!cr6.eq) goto loc_838EB2B8;
	// b 0x838eb2ac
	goto loc_838EB2AC;
loc_838EB270:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb2b8
	if (cr6.eq) goto loc_838EB2B8;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb2b8
	if (cr6.eq) goto loc_838EB2B8;
	// lhz r10,1634(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r9,1636(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x838eb2b8
	if (!cr6.eq) goto loc_838EB2B8;
	// lhz r9,1638(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x838eb2b8
	if (!cr6.eq) goto loc_838EB2B8;
	// sth r10,1640(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1640, ctx.r10.u16);
loc_838EB2AC:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_838EB2B8:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838eb2d0
	if (!cr6.eq) goto loc_838EB2D0;
	// bl 0x838eaf28
	ctx.lr = 0x838EB2CC;
	sub_838EAF28(ctx, base);
	// b 0x838eb2d4
	goto loc_838EB2D4;
loc_838EB2D0:
	// bl 0x838eb028
	ctx.lr = 0x838EB2D4;
	sub_838EB028(ctx, base);
loc_838EB2D4:
	// lwz r3,1404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r11,r3,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb368
	if (cr6.eq) goto loc_838EB368;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb368
	if (cr6.eq) goto loc_838EB368;
	// rlwinm r11,r3,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eb368
	if (!cr6.eq) goto loc_838EB368;
	// lbz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x838eb368
	if (cr6.eq) goto loc_838EB368;
	// lhz r11,1634(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r10,1636(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r9,1638(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// addi r11,r11,129
	ctx.r11.s64 = ctx.r11.s64 + 129;
	// lhz r8,1640(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1640);
	// addi r10,r10,129
	ctx.r10.s64 = ctx.r10.s64 + 129;
	// addi r9,r9,129
	ctx.r9.s64 = ctx.r9.s64 + 129;
	// addi r8,r8,129
	ctx.r8.s64 = ctx.r8.s64 + 129;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r9,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r8,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r7,1634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1634, ctx.r7.u16);
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r6,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r6.u16);
	// sth r5,1638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1638, ctx.r5.u16);
	// sth r4,1640(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1640, ctx.r4.u16);
loc_838EB368:
	// rlwinm r11,r3,0,5,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7FFFC00;
	// rlwinm r11,r11,0,21,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC0007FF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb3dc
	if (cr6.eq) goto loc_838EB3DC;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb3dc
	if (cr6.eq) goto loc_838EB3DC;
	// rlwinm r11,r3,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eb3dc
	if (!cr6.eq) goto loc_838EB3DC;
	// lbz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x838eb3dc
	if (!cr6.eq) goto loc_838EB3DC;
	// lhz r11,1634(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r10,1636(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r9,1638(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhz r8,1640(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1640);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// sth r11,1634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1634, ctx.r11.u16);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// sth r10,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r10.u16);
	// sth r9,1638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1638, ctx.r9.u16);
	// sth r8,1640(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1640, ctx.r8.u16);
loc_838EB3DC:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,1630
	ctx.r11.s64 = ctx.r31.s64 + 1630;
	// addi r10,r31,1640
	ctx.r10.s64 = ctx.r31.s64 + 1640;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EB3EC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x838eb3ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EB3EC;
	// rlwinm r11,r3,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
	// rlwinm r11,r3,0,9,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838eb430
	if (cr6.eq) goto loc_838EB430;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e8160
	ctx.lr = 0x838EB418;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x838e8160
	ctx.lr = 0x838EB428;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
loc_838EB430:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb47c
	if (cr6.eq) goto loc_838EB47C;
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e8160
	ctx.lr = 0x838EB448;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x838e8160
	ctx.lr = 0x838EB458;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
	// lbz r11,1626(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1626);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838eb47c
	if (!cr6.eq) goto loc_838EB47C;
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x838e8160
	ctx.lr = 0x838EB474;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
loc_838EB47C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eb49c
	if (cr6.eq) goto loc_838EB49C;
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x838e8160
	ctx.lr = 0x838EB494;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838eb5f4
	if (!cr6.eq) goto loc_838EB5F4;
loc_838EB49C:
	// lwz r30,1404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebb14
	if (cr6.eq) goto loc_838EBB14;
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838ebb14
	if (!cr6.eq) goto loc_838EBB14;
	// lhz r11,1634(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,1636(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r7,1638(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r8,1608(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// ble cr6,0x838eb5ec
	if (!cr6.gt) goto loc_838EB5EC;
	// lwz r9,1708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_838EB4FC:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838eb52c
	if (!cr6.eq) goto loc_838EB52C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r29,1(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x838eb5dc
	goto loc_838EB5DC;
loc_838EB52C:
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// beq cr6,0x838eb5dc
	if (cr6.eq) goto loc_838EB5DC;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lbz r26,-1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lbz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r27,r27,255
	xer.ca = ctx.r27.u32 <= 255;
	ctx.r27.s64 = 255 - ctx.r27.s64;
	// mullw r8,r27,r29
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subfic r8,r8,255
	xer.ca = ctx.r8.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r8.s64;
	// mullw r7,r26,r7
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// subfic r7,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r7.s64;
	// mullw r8,r8,r25
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_838EB5DC:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x838eb4fc
	if (!cr0.eq) goto loc_838EB4FC;
loc_838EB5EC:
	// rlwinm r11,r30,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// b 0x838ebb10
	goto loc_838EBB10;
loc_838EB5F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,1616(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// bl 0x838e88c8
	ctx.lr = 0x838EB600;
	sub_838E88C8(ctx, base);
	// lwz r8,1404(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r11,r8,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebaa0
	if (cr6.eq) goto loc_838EBAA0;
	// rlwinm r10,r8,0,9,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x600000;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r28,r11,21084
	ctx.r28.s64 = ctx.r11.s64 + 21084;
	// beq cr6,0x838eb630
	if (cr6.eq) goto loc_838EB630;
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838EB630;
	sub_838E5CC0(ctx, base);
loc_838EB630:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lbz r11,1626(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1626);
	// bne cr6,0x838eb900
	if (!cr6.eq) goto loc_838EB900;
	// lwz r27,1596(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lhz r28,1600(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1600);
	// bne cr6,0x838eb68c
	if (!cr6.eq) goto loc_838EB68C;
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lhz r10,1634(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r9,1636(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r8,1638(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// lwz r7,1684(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// b 0x838eb77c
	goto loc_838EB77C;
loc_838EB68C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838eb6c4
	if (cr6.eq) goto loc_838EB6C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838eb6a4
	if (cr6.eq) goto loc_838EB6A4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x838eb6c8
	goto loc_838EB6C8;
loc_838EB6A4:
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x838e80d8
	ctx.lr = 0x838EB6AC;
	sub_838E80D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x838e8190
	ctx.lr = 0x838EB6BC;
	sub_838E8190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x838eb6c8
	goto loc_838EB6C8;
loc_838EB6C4:
	// lwz r29,1668(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
loc_838EB6C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e8160
	ctx.lr = 0x838EB6D0;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838eb70c
	if (cr6.eq) goto loc_838EB70C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,1634(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// bl 0x838e8240
	ctx.lr = 0x838EB6E4;
	sub_838E8240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lhz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// bl 0x838e8240
	ctx.lr = 0x838EB6F4;
	sub_838E8240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lhz r3,1638(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// bl 0x838e8240
	ctx.lr = 0x838EB704;
	sub_838E8240(ctx, base);
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// b 0x838eb724
	goto loc_838EB724;
loc_838EB70C:
	// lhz r11,1634(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r10,1636(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r9,1638(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_838EB724:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e8160
	ctx.lr = 0x838EB72C;
	sub_838E8160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838eb764
	if (cr6.eq) goto loc_838EB764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r3,1634(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// bl 0x838e8240
	ctx.lr = 0x838EB740;
	sub_838E8240(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// bl 0x838e8240
	ctx.lr = 0x838EB750;
	sub_838E8240(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,1638(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// bl 0x838e8240
	ctx.lr = 0x838EB760;
	sub_838E8240(ctx, base);
	// b 0x838eb77c
	goto loc_838EB77C;
loc_838EB764:
	// lhz r11,1634(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// lhz r10,1636(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r9,1638(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
loc_838EB77C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x838eb8ec
	if (!cr6.gt) goto loc_838EB8EC;
	// lhz r6,1608(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
loc_838EB790:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x838eb8b4
	if (!cr6.lt) goto loc_838EB8B4;
	// lwz r10,1708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// beq cr6,0x838eb8b4
	if (cr6.eq) goto loc_838EB8B4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838eb7d4
	if (!cr6.eq) goto loc_838EB7D4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
	// stb r5,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// b 0x838eb8dc
	goto loc_838EB8DC;
loc_838EB7D4:
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// lwz r5,1684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// lbz r27,-2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r24,1680(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// subfic r8,r8,255
	xer.ca = ctx.r8.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r8.s64;
	// lbz r26,-1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r22,r3,24
	ctx.r22.u64 = ctx.r3.u32 & 0xFF;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r7,r27,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// mullw r7,r7,r25
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r7,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lbzx r8,r26,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subfic r27,r27,255
	xer.ca = ctx.r27.u32 <= 255;
	ctx.r27.s64 = 255 - ctx.r27.s64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// mullw r7,r27,r4
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r8,r4,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r24.u32);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbzx r7,r23,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r5.u32);
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// subfic r10,r5,255
	xer.ca = ctx.r5.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r5.s64;
	// mullw r8,r10,r22
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r5,r7,r24
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// b 0x838eb8dc
	goto loc_838EB8DC;
loc_838EB8B4:
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r4,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r4.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbzx r7,r5,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_838EB8DC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x838eb790
	if (!cr0.eq) goto loc_838EB790;
loc_838EB8EC:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
	// b 0x838ebb14
	goto loc_838EBB14;
loc_838EB900:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838eb968
	if (cr6.eq) goto loc_838EB968;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838eb948
	if (cr6.eq) goto loc_838EB948;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838eb928
	if (cr6.eq) goto loc_838EB928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e88
	ctx.lr = 0x838EB928;
	sub_838E5E88(ctx, base);
loc_838EB928:
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x838e80d8
	ctx.lr = 0x838EB930;
	sub_838E80D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// bl 0x838e8190
	ctx.lr = 0x838EB940;
	sub_838E8190(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x838eb96c
	goto loc_838EB96C;
loc_838EB948:
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e80d8
	ctx.lr = 0x838EB950;
	sub_838E80D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r3,1980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// bl 0x838e8190
	ctx.lr = 0x838EB960;
	sub_838E8190(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x838eb96c
	goto loc_838EB96C;
loc_838EB968:
	// lwz r30,1668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
loc_838EB96C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e8160
	ctx.lr = 0x838EB974;
	sub_838E8160(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e8160
	ctx.lr = 0x838EB980;
	sub_838E8160(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x838eb9a0
	if (cr6.eq) goto loc_838EB9A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,1640(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1640);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EB99C;
	sub_838E8380(ctx, base);
	// sth r3,1650(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1650, ctx.r3.u16);
loc_838EB9A0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x838eb9bc
	if (cr6.eq) goto loc_838EB9BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r4,1640(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1640);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EB9B8;
	sub_838E8380(ctx, base);
	// sth r3,1640(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1640, ctx.r3.u16);
loc_838EB9BC:
	// lhz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// lhz r4,1634(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x838eba10
	if (!cr6.eq) goto loc_838EBA10;
	// lhz r11,1638(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x838eba10
	if (!cr6.eq) goto loc_838EBA10;
	// lhz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1640);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x838eba10
	if (!cr6.eq) goto loc_838EBA10;
	// lhz r10,1650(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1650);
	// sth r11,1638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1638, ctx.r11.u16);
	// sth r11,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r11.u16);
	// sth r11,1634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1634, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1648(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1648, ctx.r10.u16);
	// sth r10,1646(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1646, ctx.r10.u16);
	// sth r10,1644(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1644, ctx.r10.u16);
	// stb r11,1626(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1626, ctx.r11.u8);
	// b 0x838ebb14
	goto loc_838EBB14;
loc_838EBA10:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x838eba50
	if (cr6.eq) goto loc_838EBA50;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA24;
	sub_838E8380(ctx, base);
	// sth r3,1644(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1644, ctx.r3.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,1636(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA38;
	sub_838E8380(ctx, base);
	// sth r3,1646(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1646, ctx.r3.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,1638(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA4C;
	sub_838E8380(ctx, base);
	// sth r3,1648(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1648, ctx.r3.u16);
loc_838EBA50:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x838eba94
	if (cr6.eq) goto loc_838EBA94;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r4,1634(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1634);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA68;
	sub_838E8380(ctx, base);
	// sth r3,1634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1634, ctx.r3.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r4,1636(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1636);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA7C;
	sub_838E8380(ctx, base);
	// sth r3,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r3.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r4,1638(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1638);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8380
	ctx.lr = 0x838EBA90;
	sub_838E8380(ctx, base);
	// sth r3,1638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1638, ctx.r3.u16);
loc_838EBA94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1626(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1626, ctx.r11.u8);
	// b 0x838ebb14
	goto loc_838EBB14;
loc_838EBAA0:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838ebb14
	if (!cr6.eq) goto loc_838EBB14;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebac4
	if (cr6.eq) goto loc_838EBAC4;
	// rlwinm r11,r8,0,9,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x600000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ebb14
	if (!cr6.eq) goto loc_838EBB14;
loc_838EBAC4:
	// lhz r9,1600(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1600);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x838ebb0c
	if (!cr6.gt) goto loc_838EBB0C;
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EBAE0:
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lbzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbzx r7,r4,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbzx r6,r5,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stbu r6,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ebae0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBAE0;
loc_838EBB0C:
	// rlwinm r11,r8,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_838EBB10:
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
loc_838EBB14:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ebc3c
	if (cr6.eq) goto loc_838EBC3C;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ebc3c
	if (!cr6.eq) goto loc_838EBC3C;
	// lbz r10,1615(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838ebc3c
	if (!cr6.eq) goto loc_838EBC3C;
	// lbz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1696);
	// rlwinm r9,r11,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lhz r6,1600(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1600);
	// subfic r11,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r10.s64;
	// stw r9,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838ebb94
	if (!cr6.gt) goto loc_838EBB94;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x838ebb94
	if (!cr6.lt) goto loc_838EBB94;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838ebb94
	if (!cr6.gt) goto loc_838EBB94;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_838EBB78:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// srw r4,r8,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x838ebb78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBB78;
loc_838EBB94:
	// lbz r11,1697(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1697);
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838ebbe8
	if (!cr6.gt) goto loc_838EBBE8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x838ebbe8
	if (!cr6.lt) goto loc_838EBBE8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838ebbe8
	if (!cr6.gt) goto loc_838EBBE8;
	// lwz r8,1596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_838EBBC4:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// bdnz 0x838ebbc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBBC4;
loc_838EBBE8:
	// lbz r11,1698(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1698);
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838ebc3c
	if (!cr6.gt) goto loc_838EBC3C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x838ebc3c
	if (!cr6.lt) goto loc_838EBC3C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838ebc3c
	if (!cr6.gt) goto loc_838EBC3C;
	// lwz r8,1596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_838EBC18:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// srw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// bdnz 0x838ebc18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBC18;
loc_838EBC3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EBC44"))) PPC_WEAK_FUNC(sub_838EBC44);
PPC_FUNC_IMPL(__imp__sub_838EBC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EBC48"))) PPC_WEAK_FUNC(sub_838EBC48);
PPC_FUNC_IMPL(__imp__sub_838EBC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r7,1404(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r7,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebcdc
	if (cr6.eq) goto loc_838EBCDC;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838ebca4
	if (!cr6.eq) goto loc_838EBCA4;
	// lhz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1608);
	// lwz r10,1596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stb r8,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
	// sth r6,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// bne cr6,0x838ebcdc
	if (!cr6.eq) goto loc_838EBCDC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,21116
	ctx.r4.s64 = ctx.r11.s64 + 21116;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
loc_838EBCA4:
	// lhz r10,1608(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ebcc8
	if (cr6.eq) goto loc_838EBCC8;
	// rlwinm r10,r7,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ebcc8
	if (cr6.eq) goto loc_838EBCC8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r10.u8);
loc_838EBCC8:
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x838ebcd8
	if (!cr6.lt) goto loc_838EBCD8;
	// stb r8,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
loc_838EBCD8:
	// sth r6,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
loc_838EBCDC:
	// rlwinm r11,r7,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebd04
	if (cr6.eq) goto loc_838EBD04;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r3,1630
	ctx.r11.s64 = ctx.r3.s64 + 1630;
	// addi r10,r4,168
	ctx.r10.s64 = ctx.r4.s64 + 168;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EBCF8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x838ebcf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBCF8;
loc_838EBD04:
	// lwz r11,1980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1980);
	// lbz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// bne cr6,0x838ebd38
	if (!cr6.eq) goto loc_838EBD38;
	// rlwinm r11,r7,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebd28
	if (cr6.eq) goto loc_838EBD28;
	// stb r8,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
loc_838EBD28:
	// rlwinm r11,r7,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebd38
	if (cr6.eq) goto loc_838EBD38;
	// stb r8,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
loc_838EBD38:
	// rlwinm r11,r7,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebd50
	if (cr6.eq) goto loc_838EBD50;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r10.u8);
loc_838EBD50:
	// rlwinm r11,r7,0,9,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x600000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebd6c
	if (cr6.eq) goto loc_838EBD6C;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r10.u8);
loc_838EBD6C:
	// rlwinm r11,r7,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebdac
	if (cr6.eq) goto loc_838EBDAC;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838ebd90
	if (cr6.eq) goto loc_838EBD90;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x838ebdac
	if (!cr6.eq) goto loc_838EBDAC;
loc_838EBD90:
	// lwz r11,1792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1792);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebdac
	if (cr6.eq) goto loc_838EBDAC;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ebdac
	if (!cr6.eq) goto loc_838EBDAC;
	// stb r10,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r10.u8);
loc_838EBDAC:
	// rlwinm r11,r7,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebdd8
	if (cr6.eq) goto loc_838EBDD8;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ebdd8
	if (!cr6.eq) goto loc_838EBDD8;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838ebdd8
	if (cr6.eq) goto loc_838EBDD8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
loc_838EBDD8:
	// rlwinm r11,r7,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebdf4
	if (cr6.eq) goto loc_838EBDF4;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x838ebdf4
	if (!cr6.lt) goto loc_838EBDF4;
	// stb r8,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
loc_838EBDF4:
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838ebe0c
	if (cr6.eq) goto loc_838EBE0C;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ebe10
	if (!cr6.eq) goto loc_838EBE10;
loc_838EBE0C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_838EBE10:
	// stb r10,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r10.u8);
	// rlwinm r10,r7,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ebe30
	if (cr6.eq) goto loc_838EBE30;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r6,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
loc_838EBE30:
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebe4c
	if (cr6.eq) goto loc_838EBE4C;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_838EBE4C:
	// rlwinm r11,r7,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebe8c
	if (cr6.eq) goto loc_838EBE8C;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838ebe68
	if (cr6.eq) goto loc_838EBE68;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ebe8c
	if (!cr6.eq) goto loc_838EBE8C;
loc_838EBE68:
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// rlwinm r9,r7,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000000;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r8,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r8.u8);
	// beq cr6,0x838ebe8c
	if (cr6.eq) goto loc_838EBE8C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r10.u8);
loc_838EBE8C:
	// rlwinm r11,r7,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebeb8
	if (cr6.eq) goto loc_838EBEB8;
	// lbz r11,1392(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebea8
	if (cr6.eq) goto loc_838EBEA8;
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
loc_838EBEA8:
	// lbz r11,1393(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1393);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ebeb8
	if (cr6.eq) goto loc_838EBEB8;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_838EBEB8:
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lbz r10,29(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,30(r4)
	PPC_STORE_U8(ctx.r4.u32 + 30, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838ebeec
	if (cr6.lt) goto loc_838EBEEC;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// blr 
	return;
loc_838EBEEC:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EBF04"))) PPC_WEAK_FUNC(sub_838EBF04);
PPC_FUNC_IMPL(__imp__sub_838EBF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EBF08"))) PPC_WEAK_FUNC(sub_838EBF08);
PPC_FUNC_IMPL(__imp__sub_838EBF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x838ebff8
	if (cr6.eq) goto loc_838EBFF8;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838ebf94
	if (cr6.eq) goto loc_838EBF94;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x838ec054
	if (!cr6.eq) goto loc_838EC054;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r7,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r9.s64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ec054
	if (cr6.eq) goto loc_838EC054;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838EBF5C:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// srw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// bne cr6,0x838ebf84
	if (!cr6.eq) goto loc_838EBF84;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ebf88
	goto loc_838EBF88;
loc_838EBF84:
	// li r10,4
	ctx.r10.s64 = 4;
loc_838EBF88:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ebf5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBF5C;
	// b 0x838ec054
	goto loc_838EC054;
loc_838EBF94:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r7,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r9.s64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ec054
	if (cr6.eq) goto loc_838EC054;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838EBFC0:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// srw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r4,30
	ctx.r7.u64 = ctx.r4.u32 & 0x3;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// bne cr6,0x838ebfe8
	if (!cr6.eq) goto loc_838EBFE8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ebfec
	goto loc_838EBFEC;
loc_838EBFE8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_838EBFEC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ebfc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EBFC0;
	// b 0x838ec054
	goto loc_838EC054;
loc_838EBFF8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfic r10,r10,7
	xer.ca = ctx.r10.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ec054
	if (cr6.eq) goto loc_838EC054;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838EC020:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// srw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// bne cr6,0x838ec048
	if (!cr6.eq) goto loc_838EC048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ec04c
	goto loc_838EC04C;
loc_838EC048:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_838EC04C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ec020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC020;
loc_838EC054:
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r8,r10,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EC074"))) PPC_WEAK_FUNC(sub_838EC074);
PPC_FUNC_IMPL(__imp__sub_838EC074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EC078"))) PPC_WEAK_FUNC(sub_838EC078);
PPC_FUNC_IMPL(__imp__sub_838EC078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x838ec320
	if (cr6.eq) goto loc_838EC320;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lbz r6,9(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838ec0cc
	if (cr6.eq) goto loc_838EC0CC;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subf r4,r4,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r4.s64;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// b 0x838ec0dc
	goto loc_838EC0DC;
loc_838EC0CC:
	// lbz r9,3(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
loc_838EC0DC:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x838ec100
	if (cr6.eq) goto loc_838EC100;
	// lbz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r5,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
loc_838EC100:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// ble cr6,0x838ec320
	if (!cr6.gt) goto loc_838EC320;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_838EC118:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x838ec134
	if (!cr6.gt) goto loc_838EC134;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x838ec134
	if (!cr6.lt) goto loc_838EC134;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x838ec138
	goto loc_838EC138;
loc_838EC134:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_838EC138:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x838ec118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC118;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838ec320
	if (cr6.eq) goto loc_838EC320;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r9,14
	cr6.compare<uint32_t>(ctx.r9.u32, 14, xer);
	// bgt cr6,0x838ec320
	if (cr6.gt) goto loc_838EC320;
	// lis r12,-31857
	ctx.r12.s64 = -2087780352;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16020
	ctx.r12.s64 = ctx.r12.s64 + -16020;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_838EC1A8;
	case 1:
		goto loc_838EC320;
	case 2:
		goto loc_838EC1E8;
	case 3:
		goto loc_838EC320;
	case 4:
		goto loc_838EC320;
	case 5:
		goto loc_838EC320;
	case 6:
		goto loc_838EC248;
	case 7:
		goto loc_838EC320;
	case 8:
		goto loc_838EC320;
	case 9:
		goto loc_838EC320;
	case 10:
		goto loc_838EC320;
	case 11:
		goto loc_838EC320;
	case 12:
		goto loc_838EC320;
	case 13:
		goto loc_838EC320;
	case 14:
		goto loc_838EC2B0;
	default:
		return;
	}
	// lwz r28,-15960(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15960);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15896(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15896);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15800(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15800);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15584(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15584);
	// lwz r28,-15696(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15696);
loc_838EC1A8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838ec320
	if (!cr6.lt) goto loc_838EC320;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EC1C4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r12,-43
	ctx.r12.s64 = -43;
	// rlwinm r9,r10,31,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec1c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC1C4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_838EC1E8:
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// sraw r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bge cr6,0x838ec320
	if (!cr6.lt) goto loc_838EC320;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_838EC220:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec220
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC220;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_838EC248:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x838ec320
	if (!cr6.lt) goto loc_838EC320;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_838EC26C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r8,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// subfc r10,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// srw r8,r5,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bdnz 0x838ec26c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC26C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_838EC2B0:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x838ec320
	if (!cr6.lt) goto loc_838EC320;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
loc_838EC2C8:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r31,r10,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sraw r8,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r8.s64 = ctx.r6.s32 >> temp.u32;
	// subfc r6,r7,r10
	xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// subfe r3,r31,r3
	temp.u8 = (~ctx.r31.u32 + ctx.r3.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r31.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x838ec2c8
	if (cr6.lt) goto loc_838EC2C8;
loc_838EC320:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EC32C"))) PPC_WEAK_FUNC(sub_838EC32C);
PPC_FUNC_IMPL(__imp__sub_838EC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EC330"))) PPC_WEAK_FUNC(sub_838EC330);
PPC_FUNC_IMPL(__imp__sub_838EC330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x838ec3e0
	if (!cr6.eq) goto loc_838EC3E0;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x838ec38c
	if (!cr6.eq) goto loc_838EC38C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC364:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ec364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC364;
	// blr 
	return;
loc_838EC38C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC398:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ec398
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC398;
	// blr 
	return;
loc_838EC3E0:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x838ec424
	if (!cr6.eq) goto loc_838EC424;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC40C:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ec40c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC40C;
	// blr 
	return;
loc_838EC424:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC430:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ec430
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC430;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EC458"))) PPC_WEAK_FUNC(sub_838EC458);
PPC_FUNC_IMPL(__imp__sub_838EC458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x838ec4e8
	if (!cr6.eq) goto loc_838EC4E8;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x838ec4a8
	if (!cr6.eq) goto loc_838EC4A8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC488:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r8,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r9.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// bdnz 0x838ec488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC488;
	// blr 
	return;
loc_838EC4A8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC4B4:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r8,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r9.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subfic r5,r6,255
	xer.ca = ctx.r6.u32 <= 255;
	ctx.r5.s64 = 255 - ctx.r6.s64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// bdnz 0x838ec4b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC4B4;
	// blr 
	return;
loc_838EC4E8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x838ec534
	if (!cr6.eq) goto loc_838EC534;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC514:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subfic r8,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r9.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ec514
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC514;
	// blr 
	return;
loc_838EC534:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC544:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r8,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r9.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subfic r5,r6,255
	xer.ca = ctx.r6.u32 <= 255;
	ctx.r5.s64 = 255 - ctx.r6.s64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// bdnz 0x838ec544
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EC578"))) PPC_WEAK_FUNC(sub_838EC578);
PPC_FUNC_IMPL(__imp__sub_838EC578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r7,r5,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ec6dc
	if (!cr6.eq) goto loc_838EC6DC;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ec628
	if (!cr6.eq) goto loc_838EC628;
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x838ec5f0
	if (cr6.eq) goto loc_838EC5F0;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x838ec5d0
	if (!cr6.gt) goto loc_838EC5D0;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_838EC5C0:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec5c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC5C0;
loc_838EC5D0:
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_838EC5F0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ec60c
	if (cr6.eq) goto loc_838EC60C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC5FC:
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec5fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC5FC;
loc_838EC60C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_838EC628:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x838ec698
	if (cr6.eq) goto loc_838EC698;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x838ec674
	if (!cr6.gt) goto loc_838EC674;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_838EC658:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec658
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC658;
loc_838EC674:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
loc_838EC698:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ec6c0
	if (cr6.eq) goto loc_838EC6C0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC6A4:
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec6a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC6A4;
loc_838EC6C0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_838EC6DC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ec7a4
	if (!cr6.eq) goto loc_838EC7A4;
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x838ec75c
	if (cr6.eq) goto loc_838EC75C;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x838ec73c
	if (!cr6.gt) goto loc_838EC73C;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_838EC71C:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec71c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC71C;
loc_838EC73C:
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,32
	ctx.r8.s64 = 32;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_838EC75C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ec788
	if (cr6.eq) goto loc_838EC788;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC768:
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec768
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC768;
loc_838EC788:
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// blr 
	return;
loc_838EC7A4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x838ec840
	if (cr6.eq) goto loc_838EC840;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x838ec81c
	if (!cr6.gt) goto loc_838EC81C;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_838EC7E0:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec7e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC7E0;
loc_838EC81C:
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
loc_838EC840:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ec888
	if (cr6.eq) goto loc_838EC888;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC84C:
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ec84c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC84C;
loc_838EC888:
	// li r10,64
	ctx.r10.s64 = 64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EC8A4"))) PPC_WEAK_FUNC(sub_838EC8A4);
PPC_FUNC_IMPL(__imp__sub_838EC8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EC8A8"))) PPC_WEAK_FUNC(sub_838EC8A8);
PPC_FUNC_IMPL(__imp__sub_838EC8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ec980
	if (!cr6.eq) goto loc_838EC980;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838ec91c
	if (!cr6.eq) goto loc_838EC91C;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x838eca48
	if (cr6.eq) goto loc_838ECA48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_838EC8F8:
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,-1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ec8f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC8F8;
	// b 0x838eca48
	goto loc_838ECA48;
loc_838EC91C:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x838eca48
	if (cr6.eq) goto loc_838ECA48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC93C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stbu r4,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ec93c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC93C;
	// b 0x838eca48
	goto loc_838ECA48;
loc_838EC980:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x838eca48
	if (!cr6.eq) goto loc_838ECA48;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838ec9dc
	if (!cr6.eq) goto loc_838EC9DC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x838eca48
	if (cr6.eq) goto loc_838ECA48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC9AC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ec9ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC9AC;
	// b 0x838eca48
	goto loc_838ECA48;
loc_838EC9DC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x838eca48
	if (cr6.eq) goto loc_838ECA48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EC9F8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbzu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbz r5,-1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbu r4,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// lbz r7,-1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stbu r6,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ec9f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EC9F8;
loc_838ECA48:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// ori r5,r7,2
	ctx.r5.u64 = ctx.r7.u64 | 2;
	// mullw r4,r10,r6
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// stb r6,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r5,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r5.u8);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838eca8c
	if (cr6.lt) goto loc_838ECA8C;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838ECA8C:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838ECAA0"))) PPC_WEAK_FUNC(sub_838ECAA0);
PPC_FUNC_IMPL(__imp__sub_838ECAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838ECAA8;
	__savegprlr_22(ctx, base);
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eceb0
	if (!cr6.eq) goto loc_838ECEB0;
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eceb0
	if (cr6.eq) goto loc_838ECEB0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lhz r29,1860(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1860);
	// rlwinm r26,r9,30,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// lhz r28,1858(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1858);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// lbz r8,9(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lwz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// subf r27,r28,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r28.s64;
	// bne cr6,0x838ecc48
	if (!cr6.eq) goto loc_838ECC48;
	// lwz r31,1680(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838ecbc0
	if (cr6.eq) goto loc_838ECBC0;
	// lwz r8,1684(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838ecbc0
	if (cr6.eq) goto loc_838ECBC0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ece58
	if (cr6.eq) goto loc_838ECE58;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838ECB28:
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne cr6,0x838ecb68
	if (!cr6.eq) goto loc_838ECB68;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r5,r24
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, xer);
	// bne cr6,0x838ecb68
	if (!cr6.eq) goto loc_838ECB68;
	// lwz r9,1672(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ecb60
	if (cr6.eq) goto loc_838ECB60;
	// lbzx r5,r9,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
loc_838ECB60:
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// b 0x838ecba0
	goto loc_838ECBA0;
loc_838ECB68:
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbzx r24,r10,r8
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// mullw r10,r5,r29
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// lbzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r24,r28
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r28.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,16384
	ctx.r6.s64 = ctx.r10.s64 + 16384;
	// rlwinm r5,r6,17,15,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// lbzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_838ECBA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x838ecbb8
	if (cr6.eq) goto loc_838ECBB8;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
loc_838ECBB8:
	// bdnz 0x838ecb28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ECB28;
	// b 0x838ece58
	goto loc_838ECE58;
loc_838ECBC0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ece58
	if (cr6.eq) goto loc_838ECE58;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838ECBD4:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x838ecc04
	if (!cr6.eq) goto loc_838ECC04;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x838ecc04
	if (!cr6.eq) goto loc_838ECC04;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// b 0x838ecc28
	goto loc_838ECC28;
loc_838ECC04:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mullw r7,r7,r27
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// rlwinm r5,r6,17,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFF;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
loc_838ECC28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x838ecc40
	if (cr6.eq) goto loc_838ECC40;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
loc_838ECC40:
	// bdnz 0x838ecbd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ECBD4;
	// b 0x838ece58
	goto loc_838ECE58;
loc_838ECC48:
	// lwz r6,1692(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838ecda4
	if (cr6.eq) goto loc_838ECDA4;
	// lwz r31,1688(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838ecda4
	if (cr6.eq) goto loc_838ECDA4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// beq cr6,0x838ece58
	if (cr6.eq) goto loc_838ECE58;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_838ECC70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// bne cr6,0x838ecce4
	if (!cr6.eq) goto loc_838ECCE4;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x838ecce4
	if (!cr6.eq) goto loc_838ECCE4;
	// lwz r9,1676(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ecd6c
	if (cr6.eq) goto loc_838ECD6C;
	// lwz r8,1664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,25,7,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFE;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// srw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x838ecd68
	goto loc_838ECD68;
loc_838ECCE4:
	// lwz r7,1664(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// clrlwi r24,r10,24
	ctx.r24.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r23,r9,24
	ctx.r23.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r22,r8,24
	ctx.r22.u64 = ctx.r8.u32 & 0xFF;
	// srw r23,r23,r7
	ctx.r23.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r24,r24,r7
	ctx.r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r22,r22,r7
	ctx.r22.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r23,r6
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// rlwinm r10,r10,25,7,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFE;
	// lwzx r24,r24,r6
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r6.u32);
	// rlwinm r9,r9,25,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FE;
	// rlwinm r8,r8,25,7,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFE;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwzx r22,r22,r6
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// lhzx r10,r24,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r10.u32);
	// lhzx r9,r23,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r9.u32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lhzx r8,r22,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r8.u32);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// rlwinm r9,r10,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r10,r9,25,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FE;
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
loc_838ECD68:
	// lhzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
loc_838ECD6C:
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// stbu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq cr6,0x838ecd9c
	if (cr6.eq) goto loc_838ECD9C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_838ECD9C:
	// bdnz 0x838ecc70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ECC70;
	// b 0x838ece58
	goto loc_838ECE58;
loc_838ECDA4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x838ece58
	if (cr6.eq) goto loc_838ECE58;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_838ECDB4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r6,r8,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r5,r7,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// bne cr6,0x838ece00
	if (!cr6.eq) goto loc_838ECE00;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x838ece04
	if (cr6.eq) goto loc_838ECE04;
loc_838ECE00:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_838ECE04:
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r6,r28
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r8,r9,16384
	ctx.r8.s64 = ctx.r9.s64 + 16384;
	// rlwinm r7,r8,17,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x838ece54
	if (cr6.eq) goto loc_838ECE54;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_838ECE54:
	// bdnz 0x838ecdb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ECDB4;
loc_838ECE58:
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addi r9,r11,254
	ctx.r9.s64 = ctx.r11.s64 + 254;
	// lbz r10,9(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r6,r6,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mullw r5,r10,r7
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stb r7,10(r4)
	PPC_STORE_U8(ctx.r4.u32 + 10, ctx.r7.u8);
	// stb r6,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r6.u8);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stb r11,11(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838ecea0
	if (cr6.lt) goto loc_838ECEA0;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838ECEA0:
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_838ECEB0:
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838ECEB4"))) PPC_WEAK_FUNC(sub_838ECEB4);
PPC_FUNC_IMPL(__imp__sub_838ECEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838ECEB8"))) PPC_WEAK_FUNC(sub_838ECEB8);
PPC_FUNC_IMPL(__imp__sub_838ECEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838ECEC0;
	__savegprlr_25(ctx, base);
	// lwz r10,1400(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1400);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r31,r10,19,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// lwz r25,1672(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1672);
	// lwz r28,1680(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1680);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// lwz r6,1684(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1684);
	// lwz r26,1676(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1676);
	// lwz r27,1688(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1688);
	// lwz r30,1692(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1692);
	// lwz r29,1664(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bgt cr6,0x838edfc4
	if (cr6.gt) goto loc_838EDFC4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838edfc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EDFC4;
	// bdzf 4*cr6+eq,0x838ed368
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838ED368;
	// bdzf 4*cr6+eq,0x838edfc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EDFC4;
	// bdzf 4*cr6+eq,0x838ed664
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838ED664;
	// bdzf 4*cr6+eq,0x838edfc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EDFC4;
	// bne cr6,0x838ed968
	if (!cr6.eq) goto loc_838ED968;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x838edfc4
	if (cr6.gt) goto loc_838EDFC4;
	// lis r12,-31857
	ctx.r12.s64 = -2087780352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12484
	ctx.r12.s64 = ctx.r12.s64 + -12484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_838ECF7C;
	case 1:
		goto loc_838ECFEC;
	case 2:
		goto loc_838EDFC4;
	case 3:
		goto loc_838ED114;
	case 4:
		goto loc_838EDFC4;
	case 5:
		goto loc_838EDFC4;
	case 6:
		goto loc_838EDFC4;
	case 7:
		goto loc_838ED228;
	case 8:
		goto loc_838EDFC4;
	case 9:
		goto loc_838EDFC4;
	case 10:
		goto loc_838EDFC4;
	case 11:
		goto loc_838EDFC4;
	case 12:
		goto loc_838EDFC4;
	case 13:
		goto loc_838EDFC4;
	case 14:
		goto loc_838EDFC4;
	case 15:
		goto loc_838ED2A0;
	default:
		return;
	}
	// lwz r28,-12420(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12420);
	// lwz r28,-12308(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12308);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-12012(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12012);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-11736(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11736);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-8252(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8252);
	// lwz r28,-11616(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11616);
loc_838ECF7C:
	// li r11,7
	ctx.r11.s64 = 7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r8,1720(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,32639
	ctx.r9.s64 = 32639;
loc_838ECF94:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// srw r3,r10,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r7,r3,31
	ctx.r7.u64 = ctx.r3.u32 & 0x1;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ecfcc
	if (!cr6.eq) goto loc_838ECFCC;
	// subfic r7,r11,7
	xer.ca = ctx.r11.u32 <= 7;
	ctx.r7.s64 = 7 - ctx.r11.s64;
	// lhz r6,1640(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// sraw r10,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// and r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 & ctx.r3.u64;
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_838ECFCC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838ecfe0
	if (!cr6.eq) goto loc_838ECFE0;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x838ecfe4
	goto loc_838ECFE4;
loc_838ECFE0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838ECFE4:
	// bdnz 0x838ecf94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ECF94;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ECFEC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ed0a4
	if (cr6.eq) goto loc_838ED0A4;
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r7,1720(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r8,16191
	ctx.r8.s64 = 16191;
loc_838ED00C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x838ed048
	if (!cr6.eq) goto loc_838ED048;
	// subfic r11,r9,6
	xer.ca = ctx.r9.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r9.s64;
	// lhz r6,1640(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// sraw r11,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// b 0x838ed084
	goto loc_838ED084;
loc_838ED048:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r3,r9,6
	xer.ca = ctx.r9.u32 <= 6;
	ctx.r3.s64 = 6 - ctx.r9.s64;
	// or r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 | ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r3,r8,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r3.s64 = ctx.r8.s32 >> temp.u32;
	// or r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 | ctx.r11.u64;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbzx r11,r6,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_838ED084:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x838ed098
	if (!cr6.eq) goto loc_838ED098;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x838ed09c
	goto loc_838ED09C;
loc_838ED098:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_838ED09C:
	// bdnz 0x838ed00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED00C;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED0A4:
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1720(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r8,16191
	ctx.r8.s64 = 16191;
loc_838ED0BC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// srw r3,r10,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r7,r3,30
	ctx.r7.u64 = ctx.r3.u32 & 0x3;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed0f4
	if (!cr6.eq) goto loc_838ED0F4;
	// subfic r7,r11,6
	xer.ca = ctx.r11.u32 <= 6;
	ctx.r7.s64 = 6 - ctx.r11.s64;
	// lhz r6,1640(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// and r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 & ctx.r3.u64;
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_838ED0F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838ed108
	if (!cr6.eq) goto loc_838ED108;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x838ed10c
	goto loc_838ED10C;
loc_838ED108:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_838ED10C:
	// bdnz 0x838ed0bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED0BC;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED114:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x838ed1bc
	if (cr6.eq) goto loc_838ED1BC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r7,1720(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r8,3855
	ctx.r8.s64 = 3855;
loc_838ED134:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// srw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x838ed170
	if (!cr6.eq) goto loc_838ED170;
	// subfic r10,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r11.s64;
	// lhz r6,1640(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// b 0x838ed19c
	goto loc_838ED19C;
loc_838ED170:
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subfic r3,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r3.s64 = 4 - ctx.r11.s64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// sraw r6,r8,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r3,r10,r25
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// and r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 & ctx.r9.u64;
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_838ED19C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838ed1b0
	if (!cr6.eq) goto loc_838ED1B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x838ed1b4
	goto loc_838ED1B4;
loc_838ED1B0:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_838ED1B4:
	// bdnz 0x838ed134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED134;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED1BC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1720(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r8,3855
	ctx.r8.s64 = 3855;
loc_838ED1D0:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// srw r3,r10,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r7,r3,28
	ctx.r7.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed208
	if (!cr6.eq) goto loc_838ED208;
	// subfic r7,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r7.s64 = 4 - ctx.r11.s64;
	// lhz r6,1640(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// and r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 & ctx.r3.u64;
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_838ED208:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838ed21c
	if (!cr6.eq) goto loc_838ED21C;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x838ed220
	goto loc_838ED220;
loc_838ED21C:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_838ED220:
	// bdnz 0x838ed1d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED1D0;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED228:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ed270
	if (cr6.eq) goto loc_838ED270;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1720(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED240:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed25c
	if (!cr6.eq) goto loc_838ED25C;
	// lhz r11,1640(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// b 0x838ed264
	goto loc_838ED264;
loc_838ED25C:
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_838ED264:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x838ed240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED270:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r11,1720(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED280:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x838ed294
	if (!cr6.eq) goto loc_838ED294;
	// lhz r10,1640(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_838ED294:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x838ed280
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED280;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED2A0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838ed320
	if (cr6.eq) goto loc_838ED320;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r7,1720(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED2B8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x838ed2ec
	if (!cr6.eq) goto loc_838ED2EC;
	// lhz r11,1640(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// b 0x838ed314
	goto loc_838ED314;
loc_838ED2EC:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r6,r11,1,23,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// srw r3,r8,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lhzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
loc_838ED314:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bdnz 0x838ed2b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED2B8;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED320:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1720(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1720);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED330:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed35c
	if (!cr6.eq) goto loc_838ED35C;
	// lhz r11,1640(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_838ED35C:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bdnz 0x838ed330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED330;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED368:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ed474
	if (!cr6.eq) goto loc_838ED474;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ed410
	if (cr6.eq) goto loc_838ED410;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1714(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1714);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED390:
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed3e4
	if (!cr6.eq) goto loc_838ED3E4;
	// lhz r8,1716(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1716);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ed3e4
	if (!cr6.eq) goto loc_838ED3E4;
	// lhz r8,1718(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1718);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ed3e4
	if (!cr6.eq) goto loc_838ED3E4;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r8,1636(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r7,1638(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r6.u8);
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// b 0x838ed404
	goto loc_838ED404;
loc_838ED3E4:
	// lbzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
	// lbzx r6,r8,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// lbzx r4,r7,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
loc_838ED404:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x838ed390
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED390;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED410:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r9,1714(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1714);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED424:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ed468
	if (!cr6.eq) goto loc_838ED468;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lhz r8,1716(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1716);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ed468
	if (!cr6.eq) goto loc_838ED468;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lhz r8,1718(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1718);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ed468
	if (!cr6.eq) goto loc_838ED468;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r8,1636(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r7,1638(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// stb r10,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_838ED468:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x838ed424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED424;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED474:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838ed5b0
	if (cr6.eq) goto loc_838ED5B0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r6,1714(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1714);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED490:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x838ed52c
	if (!cr6.eq) goto loc_838ED52C;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lhz r4,1716(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1716);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x838ed52c
	if (!cr6.eq) goto loc_838ED52C;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lhz r4,1718(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1718);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x838ed52c
	if (!cr6.eq) goto loc_838ED52C;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r9,1636(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r8,1638(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r3,r9,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// rlwinm r9,r8,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// b 0x838ed5a4
	goto loc_838ED5A4;
loc_838ED52C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r3,r8,1,23,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FE;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// lhzx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stb r10,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
	// rotlwi r3,r31,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lwzx r10,r9,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lhzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lwzx r10,r7,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_838ED5A4:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bdnz 0x838ed490
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED490;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED5B0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// lhz r8,1714(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1714);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED5C4:
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bne cr6,0x838ed658
	if (!cr6.eq) goto loc_838ED658;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lhz r6,1716(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1716);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x838ed658
	if (!cr6.eq) goto loc_838ED658;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lhz r6,1718(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1718);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x838ed658
	if (!cr6.eq) goto loc_838ED658;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r9,1636(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r7,1638(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// rlwinm r6,r10,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r3,r9,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r6,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r6.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// rlwinm r9,r7,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
loc_838ED658:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bdnz 0x838ed5c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED5C4;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED664:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ed798
	if (!cr6.eq) goto loc_838ED798;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838ed724
	if (cr6.eq) goto loc_838ED724;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838ed724
	if (cr6.eq) goto loc_838ED724;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ed724
	if (cr6.eq) goto loc_838ED724;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED694:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x838ed6b4
	if (!cr6.eq) goto loc_838ED6B4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// b 0x838ed718
	goto loc_838ED718;
loc_838ED6B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ed6cc
	if (!cr6.eq) goto loc_838ED6CC;
	// lhz r11,1640(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// b 0x838ed718
	goto loc_838ED718;
loc_838ED6CC:
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subfic r9,r11,255
	xer.ca = ctx.r11.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r11.s64;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r8,1650(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1650);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lbzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// bne cr6,0x838ed714
	if (!cr6.eq) goto loc_838ED714;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_838ED714:
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_838ED718:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bdnz 0x838ed694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED694;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED724:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED730:
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ed750
	if (!cr6.eq) goto loc_838ED750;
	// lhz r11,1640(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// b 0x838ed78c
	goto loc_838ED78C;
loc_838ED750:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x838ed78c
	if (!cr6.lt) goto loc_838ED78C;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subfic r8,r11,255
	xer.ca = ctx.r11.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r11.s64;
	// lhz r7,1640(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r3,r6
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
loc_838ED78C:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bdnz 0x838ed730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED730;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED798:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838ed8bc
	if (cr6.eq) goto loc_838ED8BC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838ed8bc
	if (cr6.eq) goto loc_838ED8BC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838ed8bc
	if (cr6.eq) goto loc_838ED8BC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// ori r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 32768;
loc_838ED7D0:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x838ed820
	if (!cr6.eq) goto loc_838ED820;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r9,r4,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// lhzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// b 0x838ed8b0
	goto loc_838ED8B0;
loc_838ED820:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ed83c
	if (!cr6.eq) goto loc_838ED83C;
	// lhz r9,1640(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x838ed8ac
	goto loc_838ED8AC;
loc_838ED83C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// subf r4,r9,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// srw r3,r8,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lhz r8,1650(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1650);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// lwzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lhzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// bne cr6,0x838ed8a4
	if (!cr6.eq) goto loc_838ED8A4;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r6,r9,25,23,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FE;
	// srw r4,r8,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lhzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
loc_838ED8A4:
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_838ED8AC:
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
loc_838ED8B0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x838ed7d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED7D0;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED8BC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// ori r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 32768;
loc_838ED8DC:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ed910
	if (!cr6.eq) goto loc_838ED910;
	// lhz r9,1640(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x838ed95c
	goto loc_838ED95C;
loc_838ED910:
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bge cr6,0x838ed95c
	if (!cr6.lt) goto loc_838ED95C;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r6,r9,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lhz r4,1640(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1640);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r4,r6,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// rlwinm r3,r4,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r3,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r3.u8);
loc_838ED95C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x838ed8dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED8DC;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838ED968:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838edbec
	if (!cr6.eq) goto loc_838EDBEC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838edaf8
	if (cr6.eq) goto loc_838EDAF8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838edaf8
	if (cr6.eq) goto loc_838EDAF8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838edaf8
	if (cr6.eq) goto loc_838EDAF8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838ED99C:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x838ed9d4
	if (!cr6.eq) goto loc_838ED9D4;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r7,r10,r25
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// lbzx r4,r9,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r3,r8,r25
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// b 0x838edaec
	goto loc_838EDAEC;
loc_838ED9D4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eda04
	if (!cr6.eq) goto loc_838EDA04;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r9,1636(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r8,1638(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// b 0x838edaec
	goto loc_838EDAEC;
loc_838EDA04:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subfic r4,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r4.s64 = 255 - ctx.r10.s64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lhz r3,1644(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1644);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lbzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// bne cr6,0x838eda50
	if (!cr6.eq) goto loc_838EDA50;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
loc_838EDA50:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r8,1646(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1646);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// lbzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// bne cr6,0x838eda9c
	if (!cr6.eq) goto loc_838EDA9C;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
loc_838EDA9C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r3,1648(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1648);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lbzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r4,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// bne cr6,0x838edae8
	if (!cr6.eq) goto loc_838EDAE8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
loc_838EDAE8:
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_838EDAEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x838ed99c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838ED99C;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838EDAF8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EDB08:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838edb40
	if (!cr6.eq) goto loc_838EDB40;
	// lhz r10,1634(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r9,1636(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r8,1638(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// b 0x838edbe0
	goto loc_838EDBE0;
loc_838EDB40:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x838edbe0
	if (!cr6.lt) goto loc_838EDBE0;
	// subfic r10,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r10.s64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lhz r4,1634(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lhz r8,1636(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r31,1638(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r6,r9
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mullw r4,r31,r3
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r6,r30
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r9,128
	ctx.r7.s64 = ctx.r9.s64 + 128;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// srawi r3,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// stb r3,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r3.u8);
	// srawi r8,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
loc_838EDBE0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x838edb08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EDB08;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838EDBEC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838ede6c
	if (cr6.eq) goto loc_838EDE6C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838ede6c
	if (cr6.eq) goto loc_838EDE6C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838ede6c
	if (cr6.eq) goto loc_838EDE6C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// ori r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 32768;
loc_838EDC24:
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x838edcc8
	if (!cr6.eq) goto loc_838EDCC8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r4,r4,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// lbz r25,3(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwzx r3,r3,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// srw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// lhzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// rotlwi r3,r25,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwzx r4,r4,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// lhzx r9,r4,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lhzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// b 0x838ede60
	goto loc_838EDE60;
loc_838EDCC8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838edd0c
	if (!cr6.eq) goto loc_838EDD0C;
	// lhz r9,1634(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r8,1636(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r7,1638(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// rlwinm r6,r9,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// rlwinm r8,r7,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x838ede5c
	goto loc_838EDE5C;
loc_838EDD0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r6,r9,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r9.s64;
	// srw r3,r8,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lhz r8,1644(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1644);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lhzx r4,r3,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// bne cr6,0x838edd74
	if (!cr6.eq) goto loc_838EDD74;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r8,r8,25,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FE;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r3,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lhzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
loc_838EDD74:
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// lbz r25,1(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r3,r3,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// lhz r8,1646(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1646);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// lhzx r4,r3,r25
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r25.u32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// bne cr6,0x838edde4
	if (!cr6.eq) goto loc_838EDDE4;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r8,r8,25,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FE;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r3,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lhzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
loc_838EDDE4:
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// srw r3,r3,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
	// lhz r8,1648(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1648);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,3(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rotlwi r4,r25,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// lhzx r4,r6,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// bne cr6,0x838ede54
	if (!cr6.eq) goto loc_838EDE54;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r6,r9,25,23,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FE;
	// srw r4,r8,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lhzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
loc_838EDE54:
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_838EDE5C:
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_838EDE60:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x838edc24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EDC24;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838EDE6C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838edfc4
	if (cr6.eq) goto loc_838EDFC4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// ori r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 32768;
loc_838EDE8C:
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838edee8
	if (!cr6.eq) goto loc_838EDEE8;
	// lhz r9,1634(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// lhz r8,1636(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// lhz r7,1638(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// rlwinm r6,r9,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// rlwinm r8,r7,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x838edfbc
	goto loc_838EDFBC;
loc_838EDEE8:
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bge cr6,0x838edfbc
	if (!cr6.lt) goto loc_838EDFBC;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r29,r9,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r3,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lhz r30,1638(r5)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1638);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lhz r4,1634(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1634);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r31,1636(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 1636);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r30,r29
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mullw r30,r4,r29
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// mullw r29,r31,r29
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r3,r7,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r4,r8,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r3,r7,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r6,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r4,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rlwinm r6,r3,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r3,r9,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
loc_838EDFBC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x838ede8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EDE8C;
loc_838EDFC4:
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EDFC8"))) PPC_WEAK_FUNC(sub_838EDFC8);
PPC_FUNC_IMPL(__imp__sub_838EDFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838EDFD0;
	__savegprlr_24(ctx, base);
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r8,1672(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1672);
	// lwz r9,1676(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1676);
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// lwz r5,1664(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bgt cr6,0x838edff8
	if (cr6.gt) goto loc_838EDFF8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838ee008
	if (!cr6.eq) goto loc_838EE008;
loc_838EDFF8:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bne cr6,0x838ee468
	if (!cr6.eq) goto loc_838EE468;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
loc_838EE008:
	// lbz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// bgt cr6,0x838ee468
	if (cr6.gt) goto loc_838EE468;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x838ee2b0
	if (cr6.eq) goto loc_838EE2B0;
	// bdz 0x838ee468
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838EE468;
	// bdz 0x838ee038
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838EE038;
	// bdz 0x838ee468
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838EE468;
	// bdz 0x838ee234
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838EE234;
	// bdz 0x838ee468
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838EE468;
	// b 0x838ee138
	goto loc_838EE138;
loc_838EE038:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bne cr6,0x838ee080
	if (!cr6.eq) goto loc_838EE080;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE04C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lbzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838ee04c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE04C;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE080:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE090:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srw r4,r7,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// lwzx r4,r3,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r7,r3,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r3,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r3,r4,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r4,r6,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r6,r7,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r3,r4,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lwzx r7,r5,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// bdnz 0x838ee090
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE090;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE138:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bne cr6,0x838ee180
	if (!cr6.eq) goto loc_838EE180;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE14C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lbzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x838ee14c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE14C;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE180:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE190:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// srw r4,r10,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lwzx r6,r3,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lhzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r5,r6,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r3,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwzx r5,r4,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lhzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r4,r5,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r5,r3,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lhzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// bdnz 0x838ee190
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE190;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE234:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bne cr6,0x838ee264
	if (!cr6.eq) goto loc_838EE264;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_838EE24C:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ee24c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE24C;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE264:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_838EE278:
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// srw r3,r5,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// stbu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ee278
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE278;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE2B0:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x838ee388
	if (!cr6.eq) goto loc_838EE388;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee388
	if (cr6.eq) goto loc_838EE388;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_838EE2D4:
	// lbz r6,1(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// clrlwi r4,r6,30
	ctx.r4.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r30,r6,0,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// rlwinm r31,r6,2,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r28,r6,2,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x30;
	// or r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 | ctx.r4.u64;
	// rlwinm r29,r6,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// or r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 | ctx.r30.u64;
	// srawi r27,r30,2
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r30.s32 >> 2;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r26,r29,2
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 2;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// or r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 | ctx.r29.u64;
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// rlwinm r25,r6,0,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r6,r6,2,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC0;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// srawi r26,r26,2
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// srawi r24,r25,2
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r25.s32 >> 2;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 | ctx.r6.u64;
	// or r31,r24,r25
	ctx.r31.u64 = ctx.r24.u64 | ctx.r25.u64;
	// lbzx r30,r30,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// or r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 | ctx.r29.u64;
	// srawi r31,r31,2
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// or r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 | ctx.r25.u64;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r30,r30,0,28,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// srawi r31,r31,2
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// or r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 | ctx.r4.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// or r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 | ctx.r25.u64;
	// rlwinm r6,r6,0,30,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// rlwinm r4,r4,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lbzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwimi r6,r4,30,26,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x3F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC0);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x838ee2d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE2D4;
loc_838EE388:
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// bne cr6,0x838ee3e8
	if (!cr6.eq) goto loc_838EE3E8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE3B0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r5,r10,4,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// srawi r6,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// or r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lbzx r9,r3,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// lbzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// rlwimi r10,r9,28,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ee3b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE3B0;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE3E8:
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bne cr6,0x838ee418
	if (!cr6.eq) goto loc_838EE418;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838EE400:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ee400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838EE418:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bne cr6,0x838ee468
	if (!cr6.eq) goto loc_838EE468;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee468
	if (cr6.eq) goto loc_838EE468;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838EE434:
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// srw r3,r5,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stbu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ee434
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE434;
loc_838EE468:
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EE46C"))) PPC_WEAK_FUNC(sub_838EE46C);
PPC_FUNC_IMPL(__imp__sub_838EE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EE470"))) PPC_WEAK_FUNC(sub_838EE470);
PPC_FUNC_IMPL(__imp__sub_838EE470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838ee560
	if (cr6.eq) goto loc_838EE560;
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ee4e0
	if (!cr6.eq) goto loc_838EE4E0;
	// lwz r8,1680(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1680);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838ee560
	if (cr6.eq) goto loc_838EE560;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x838ee4dc
	if (cr6.eq) goto loc_838EE4DC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EE4C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x838ee4c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE4C8;
loc_838EE4DC:
	// blr 
	return;
loc_838EE4E0:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x838ee560
	if (!cr6.eq) goto loc_838EE560;
	// lwz r7,1688(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1688);
	// lwz r8,1664(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1664);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838ee560
	if (cr6.eq) goto loc_838EE560;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// beq cr6,0x838ee4dc
	if (cr6.eq) goto loc_838EE4DC;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EE524:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// srw r4,r9,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lhzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x838ee524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE524;
	// blr 
	return;
loc_838EE560:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,21152
	ctx.r4.s64 = ctx.r11.s64 + 21152;
	// b 0x838e5cc0
	sub_838E5CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EE570"))) PPC_WEAK_FUNC(sub_838EE570);
PPC_FUNC_IMPL(__imp__sub_838EE570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838EE578;
	__savegprlr_29(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838ee850
	if (!cr6.eq) goto loc_838EE850;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r30,8
	ctx.r30.s64 = 8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x838ee6e0
	if (!cr6.lt) goto loc_838EE6E0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838ee674
	if (cr6.eq) goto loc_838EE674;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838ee60c
	if (cr6.eq) goto loc_838EE60C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x838ee6d4
	if (!cr6.eq) goto loc_838EE6D4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r11,r10,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee6d4
	if (cr6.eq) goto loc_838EE6D4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE5D4:
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// srw r31,r31,r29
	ctx.r31.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r31,r31,28
	ctx.r31.u64 = ctx.r31.u32 & 0xF;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bne cr6,0x838ee5fc
	if (!cr6.eq) goto loc_838EE5FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ee600
	goto loc_838EE600;
loc_838EE5FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_838EE600:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ee5d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE5D4;
	// b 0x838ee6d4
	goto loc_838EE6D4;
loc_838EE60C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subfic r31,r8,3
	xer.ca = ctx.r8.u32 <= 3;
	ctx.r31.s64 = 3 - ctx.r8.s64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee6d4
	if (cr6.eq) goto loc_838EE6D4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE63C:
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// srw r31,r31,r29
	ctx.r31.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r31,r31,30
	ctx.r31.u64 = ctx.r31.u32 & 0x3;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bne cr6,0x838ee664
	if (!cr6.eq) goto loc_838EE664;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ee668
	goto loc_838EE668;
loc_838EE664:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_838EE668:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ee63c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE63C;
	// b 0x838ee6d4
	goto loc_838EE6D4;
loc_838EE674:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// clrlwi r31,r8,29
	ctx.r31.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r11,r31,7
	xer.ca = ctx.r31.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r31.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ee6d4
	if (cr6.eq) goto loc_838EE6D4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EE6A0:
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// srw r31,r31,r29
	ctx.r31.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bne cr6,0x838ee6c8
	if (!cr6.eq) goto loc_838EE6C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838ee6cc
	goto loc_838EE6CC;
loc_838EE6C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838EE6CC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x838ee6a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE6A0;
loc_838EE6D4:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stb r30,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r30.u8);
loc_838EE6E0:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ee850
	if (!cr6.eq) goto loc_838EE850;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// ble cr6,0x838ee7b8
	if (!cr6.gt) goto loc_838EE7B8;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x838ee794
	if (cr6.eq) goto loc_838EE794;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// li r4,255
	ctx.r4.s64 = 255;
loc_838EE71C:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x838ee730
	if (cr6.lt) goto loc_838EE730;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// b 0x838ee738
	goto loc_838EE738;
loc_838EE730:
	// lbzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_838EE738:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ee71c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE71C;
loc_838EE794:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838EE7B8:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x838ee830
	if (cr6.eq) goto loc_838EE830;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
loc_838EE7DC:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r6,2(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r8,r4,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stbu r4,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838ee7dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE7DC;
loc_838EE830:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
loc_838EE850:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EE854"))) PPC_WEAK_FUNC(sub_838EE854);
PPC_FUNC_IMPL(__imp__sub_838EE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EE858"))) PPC_WEAK_FUNC(sub_838EE858);
PPC_FUNC_IMPL(__imp__sub_838EE858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838EE860;
	__savegprlr_27(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eeb5c
	if (!cr6.eq) goto loc_838EEB5C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ee884
	if (cr6.eq) goto loc_838EE884;
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// b 0x838ee888
	goto loc_838EE888;
loc_838EE884:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_838EE888:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r29,255
	ctx.r29.s64 = 255;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x838eea38
	if (!cr6.lt) goto loc_838EEA38;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x838ee9b0
	if (cr6.eq) goto loc_838EE9B0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838ee928
	if (cr6.eq) goto loc_838EE928;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x838eea28
	if (!cr6.eq) goto loc_838EEA28;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r6,r6,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfic r10,r6,4
	xer.ca = ctx.r6.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r6.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eea28
	if (cr6.eq) goto loc_838EEA28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EE8E8:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// srw r6,r6,r31
	ctx.r6.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// bne cr6,0x838ee918
	if (!cr6.eq) goto loc_838EE918;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x838ee91c
	goto loc_838EE91C;
loc_838EE918:
	// li r10,4
	ctx.r10.s64 = 4;
loc_838EE91C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// bdnz 0x838ee8e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE8E8;
	// b 0x838eea28
	goto loc_838EEA28;
loc_838EE928:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r31,r7,3
	xer.ca = ctx.r7.u32 <= 3;
	ctx.r31.s64 = 3 - ctx.r7.s64;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mulli r11,r6,85
	ctx.r11.s64 = ctx.r6.s64 * 85;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eea28
	if (cr6.eq) goto loc_838EEA28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EE960:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// srw r6,r6,r31
	ctx.r6.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// or r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 | ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 | ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 | ctx.r6.u64;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// bne cr6,0x838ee9a0
	if (!cr6.eq) goto loc_838EE9A0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x838ee9a4
	goto loc_838EE9A4;
loc_838EE9A0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_838EE9A4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// bdnz 0x838ee960
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE960;
	// b 0x838eea28
	goto loc_838EEA28;
loc_838EE9B0:
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r31,r7,29
	ctx.r31.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r11,r11,8,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x100;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subfic r10,r31,7
	xer.ca = ctx.r31.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r31.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eea28
	if (cr6.eq) goto loc_838EEA28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EE9E8:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// srw r6,r6,r31
	ctx.r6.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// subfic r6,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// bne cr6,0x838eea1c
	if (!cr6.eq) goto loc_838EEA1C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x838eea20
	goto loc_838EEA20;
loc_838EEA1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_838EEA20:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// bdnz 0x838ee9e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EE9E8;
loc_838EEA28:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
loc_838EEA38:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838eed74
	if (cr6.eq) goto loc_838EED74;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838eeaa4
	if (!cr6.eq) goto loc_838EEAA4;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eeb28
	if (cr6.eq) goto loc_838EEB28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_838EEA78:
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x838eea8c
	if (!cr6.eq) goto loc_838EEA8C;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// b 0x838eea90
	goto loc_838EEA90;
loc_838EEA8C:
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
loc_838EEA90:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838eea78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEA78;
	// b 0x838eeb28
	goto loc_838EEB28;
loc_838EEAA4:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x838eeb28
	if (!cr6.eq) goto loc_838EEB28;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eeb28
	if (cr6.eq) goto loc_838EEB28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EEAD8:
	// lbz r5,-1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bne cr6,0x838eeb00
	if (!cr6.eq) goto loc_838EEB00;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x838eeb00
	if (!cr6.eq) goto loc_838EEB00;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stbu r28,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// b 0x838eeb08
	goto loc_838EEB08;
loc_838EEB00:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stbu r29,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r29.u8);
	ctx.r11.u32 = ea;
loc_838EEB08:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stbu r4,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x838eead8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEAD8;
loc_838EEB28:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838eed64
	if (cr6.lt) goto loc_838EED64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838EEB5C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x838eed74
	if (!cr6.eq) goto loc_838EED74;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838eed74
	if (cr6.eq) goto loc_838EED74;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838eec24
	if (!cr6.eq) goto loc_838EEC24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,2(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r6,6(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x838eed30
	if (cr6.eq) goto loc_838EED30;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
loc_838EEBC0:
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x838eebf4
	if (!cr6.eq) goto loc_838EEBF4;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x838eebf4
	if (!cr6.eq) goto loc_838EEBF4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x838eebf4
	if (!cr6.eq) goto loc_838EEBF4;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// b 0x838eebf8
	goto loc_838EEBF8;
loc_838EEBF4:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
loc_838EEBF8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x838eebc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEBC0;
	// b 0x838eed30
	goto loc_838EED30;
loc_838EEC24:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x838eed30
	if (!cr6.eq) goto loc_838EED30;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r30,6(r5)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r31,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r6,r30,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x838eed30
	if (cr6.eq) goto loc_838EED30;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
loc_838EEC80:
	// lbz r8,-5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// clrlwi r27,r4,24
	ctx.r27.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r27,r6,24
	ctx.r27.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// bne cr6,0x838eece8
	if (!cr6.eq) goto loc_838EECE8;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// stbu r28,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r10.u32 = ea;
	// b 0x838eecf0
	goto loc_838EECF0;
loc_838EECE8:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// stbu r29,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r29.u8);
	ctx.r10.u32 = ea;
loc_838EECF0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x838eec80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEC80;
loc_838EED30:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r11,r11,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838eed64
	if (cr6.lt) goto loc_838EED64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838EED64:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_838EED74:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EED78"))) PPC_WEAK_FUNC(sub_838EED78);
PPC_FUNC_IMPL(__imp__sub_838EED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x838eee10
	if (!cr6.eq) goto loc_838EEE10;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838eee10
	if (cr6.eq) goto loc_838EEE10;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838eeddc
	if (cr6.eq) goto loc_838EEDDC;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_838EEDB0:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r4,r6,5,19,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0x1F00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r4,2,17,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x7FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r6,r8,17
	ctx.r6.u64 = ctx.r8.u32 & 0x7FFF;
	// lbzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stbu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838eedb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEDB0;
loc_838EEDDC:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// blt cr6,0x838eee90
	if (cr6.lt) goto loc_838EEE90;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838EEE10:
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x838eeea4
	if (!cr6.eq) goto loc_838EEEA4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838eeea4
	if (cr6.eq) goto loc_838EEEA4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838eee5c
	if (cr6.eq) goto loc_838EEE5C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_838EEE30:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r4,r6,5,19,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0x1F00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwimi r8,r4,2,17,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x7FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r6,r8,17
	ctx.r6.u64 = ctx.r8.u32 & 0x7FFF;
	// lbzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stbu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838eee30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEE30;
loc_838EEE5C:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// blt cr6,0x838eee90
	if (cr6.lt) goto loc_838EEE90;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838EEE90:
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838EEEA4:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_838EEEC4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838eeec4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EEEC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EEEDC"))) PPC_WEAK_FUNC(sub_838EEEDC);
PPC_FUNC_IMPL(__imp__sub_838EEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EEEE0"))) PPC_WEAK_FUNC(sub_838EEEE0);
PPC_FUNC_IMPL(__imp__sub_838EEEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838EEEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eef10
	if (!cr6.eq) goto loc_838EEF10;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,21308
	ctx.r11.s64 = ctx.r11.s64 + 21308;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x838e5e88
	ctx.lr = 0x838EEF10;
	sub_838E5E88(ctx, base);
loc_838EEF10:
	// lwz r10,1400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eef40
	if (cr6.eq) goto loc_838EEF40;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eef40
	if (!cr6.eq) goto loc_838EEF40;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,21308
	ctx.r11.s64 = ctx.r11.s64 + 21308;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x838e5e88
	ctx.lr = 0x838EEF40;
	sub_838E5E88(ctx, base);
loc_838EEF40:
	// lwz r10,1404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eefa4
	if (cr6.eq) goto loc_838EEFA4;
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x838eef78
	if (!cr6.eq) goto loc_838EEF78;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhz r7,1608(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,1708(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// lwz r5,1596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// bl 0x838ee570
	ctx.lr = 0x838EEF74;
	sub_838EE570(ctx, base);
	// b 0x838eefa4
	goto loc_838EEFA4;
loc_838EEF78:
	// lhz r9,1608(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838eef94
	if (cr6.eq) goto loc_838EEF94;
	// rlwinm r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// addi r5,r31,1712
	ctx.r5.s64 = ctx.r31.s64 + 1712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838eef98
	if (!cr6.eq) goto loc_838EEF98;
loc_838EEF94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_838EEF98:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838ee858
	ctx.lr = 0x838EEFA4;
	sub_838EE858(ctx, base);
loc_838EEFA4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838eefe8
	if (cr6.eq) goto loc_838EEFE8;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838eefe8
	if (!cr6.eq) goto loc_838EEFE8;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x838eefd4
	if (cr6.eq) goto loc_838EEFD4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x838eefe8
	if (!cr6.eq) goto loc_838EEFE8;
loc_838EEFD4:
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efb60
	ctx.lr = 0x838EEFE8;
	sub_838EFB60(ctx, base);
loc_838EEFE8:
	// lwz r10,1404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r9,r10,0,9,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600000;
	// addi r29,r11,21308
	ctx.r29.s64 = ctx.r11.s64 + 21308;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ef064
	if (cr6.eq) goto loc_838EF064;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x838ecaa0
	ctx.lr = 0x838EF014;
	sub_838ECAA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838ef064
	if (cr6.eq) goto loc_838EF064;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// rlwinm r8,r11,0,9,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600000;
	// stb r10,1856(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1856, ctx.r10.u8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x838ef044
	if (!cr6.eq) goto loc_838EF044;
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838EF044;
	sub_838E5CC0(ctx, base);
loc_838EF044:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// rlwinm r9,r11,0,9,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x838ef064
	if (!cr6.eq) goto loc_838EF064;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e88
	ctx.lr = 0x838EF064;
	sub_838E5E88(ctx, base);
loc_838EF064:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef094
	if (cr6.eq) goto loc_838EF094;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ef094
	if (!cr6.eq) goto loc_838EF094;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ec8a8
	ctx.lr = 0x838EF094;
	sub_838EC8A8(ctx, base);
loc_838EF094:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef0b8
	if (cr6.eq) goto loc_838EF0B8;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838eceb8
	ctx.lr = 0x838EF0B8;
	sub_838ECEB8(ctx, base);
loc_838EF0B8:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef11c
	if (cr6.eq) goto loc_838EF11C;
	// rlwinm r10,r11,0,9,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ef11c
	if (!cr6.eq) goto loc_838EF11C;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef0fc
	if (cr6.eq) goto loc_838EF0FC;
	// lhz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ef11c
	if (!cr6.eq) goto loc_838EF11C;
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ef11c
	if (!cr6.eq) goto loc_838EF11C;
loc_838EF0FC:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838ef11c
	if (cr6.eq) goto loc_838EF11C;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838edfc8
	ctx.lr = 0x838EF11C;
	sub_838EDFC8(ctx, base);
loc_838EF11C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef160
	if (cr6.eq) goto loc_838EF160;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef160
	if (cr6.eq) goto loc_838EF160;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x838ef14c
	if (cr6.eq) goto loc_838EF14C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x838ef160
	if (!cr6.eq) goto loc_838EF160;
loc_838EF14C:
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efb60
	ctx.lr = 0x838EF160;
	sub_838EFB60(ctx, base);
loc_838EF160:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef194
	if (cr6.eq) goto loc_838EF194;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef194
	if (cr6.eq) goto loc_838EF194;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ee470
	ctx.lr = 0x838EF194;
	sub_838EE470(ctx, base);
loc_838EF194:
	// lwz r6,1404(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r6,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef224
	if (cr6.eq) goto loc_838EF224;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x838ef224
	if (!cr6.eq) goto loc_838EF224;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x838ef204
	if (!cr6.lt) goto loc_838EF204;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_838EF1D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// rlwinm r4,r10,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r10,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r3,24
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// blt cr6,0x838ef1d0
	if (cr6.lt) goto loc_838EF1D0;
loc_838EF204:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r5,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r5.u8);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stb r8,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r8.u8);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_838EF224:
	// rlwinm r11,r6,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef29c
	if (cr6.eq) goto loc_838EF29C;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x838ef29c
	if (!cr6.eq) goto loc_838EF29C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838ef27c
	if (!cr6.lt) goto loc_838EF27C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EF270:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ef270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EF270;
loc_838EF27C:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r5,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r5.u8);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stb r8,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r8.u8);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_838EF29C:
	// rlwinm r11,r6,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef2d8
	if (cr6.eq) goto loc_838EF2D8;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,1796(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r5,1792(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// bl 0x838eed78
	ctx.lr = 0x838EF2C0;
	sub_838EED78(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ef2d8
	if (!cr6.eq) goto loc_838EF2D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e88
	ctx.lr = 0x838EF2D8;
	sub_838E5E88(ctx, base);
loc_838EF2D8:
	// lwz r7,1404(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r11,r7,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef358
	if (cr6.eq) goto loc_838EF358;
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838ef358
	if (!cr6.eq) goto loc_838EF358;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838ef358
	if (cr6.eq) goto loc_838EF358;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,1572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x838ef338
	if (!cr6.gt) goto loc_838EF338;
loc_838EF31C:
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x838ef31c
	if (cr6.gt) goto loc_838EF31C;
loc_838EF338:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r10.u8);
	// rlwinm r6,r9,4,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF0;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// stb r6,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r6.u8);
loc_838EF358:
	// rlwinm r11,r7,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef384
	if (cr6.eq) goto loc_838EF384;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef384
	if (cr6.eq) goto loc_838EF384;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ec8a8
	ctx.lr = 0x838EF384;
	sub_838EC8A8(ctx, base);
loc_838EF384:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef3a4
	if (cr6.eq) goto loc_838EF3A4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ef9b0
	ctx.lr = 0x838EF3A4;
	sub_838EF9B0(ctx, base);
loc_838EF3A4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef3c4
	if (cr6.eq) goto loc_838EF3C4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ec458
	ctx.lr = 0x838EF3C4;
	sub_838EC458(ctx, base);
loc_838EF3C4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef3e8
	if (cr6.eq) goto loc_838EF3E8;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r5,r31,1701
	ctx.r5.s64 = ctx.r31.s64 + 1701;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ec078
	ctx.lr = 0x838EF3E8;
	sub_838EC078(ctx, base);
loc_838EF3E8:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef408
	if (cr6.eq) goto loc_838EF408;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ebf08
	ctx.lr = 0x838EF408;
	sub_838EBF08(ctx, base);
loc_838EF408:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838ef42c
	if (!cr6.eq) goto loc_838EF42C;
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x838ef42c
	if (cr6.lt) goto loc_838EF42C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838efe50
	ctx.lr = 0x838EF42C;
	sub_838EFE50(ctx, base);
loc_838EF42C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef44c
	if (cr6.eq) goto loc_838EF44C;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efd48
	ctx.lr = 0x838EF44C;
	sub_838EFD48(ctx, base);
loc_838EF44C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef46c
	if (cr6.eq) goto loc_838EF46C;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efae0
	ctx.lr = 0x838EF46C;
	sub_838EFAE0(ctx, base);
loc_838EF46C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef494
	if (cr6.eq) goto loc_838EF494;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,1400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhz r5,1624(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1624);
	// bl 0x838ec578
	ctx.lr = 0x838EF494;
	sub_838EC578(ctx, base);
loc_838EF494:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef4b4
	if (cr6.eq) goto loc_838EF4B4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ec330
	ctx.lr = 0x838EF4B4;
	sub_838EC330(ctx, base);
loc_838EF4B4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef4d4
	if (cr6.eq) goto loc_838EF4D4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efaa0
	ctx.lr = 0x838EF4D4;
	sub_838EFAA0(ctx, base);
loc_838EF4D4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef56c
	if (cr6.eq) goto loc_838EF56C;
	// lwz r11,1380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef508
	if (cr6.eq) goto loc_838EF508;
	// lwz r10,1572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// bctrl 
	ctx.lr = 0x838EF508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838EF508:
	// lbz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef518
	if (cr6.eq) goto loc_838EF518;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
loc_838EF518:
	// lbz r11,1393(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1393);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef528
	if (cr6.eq) goto loc_838EF528;
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
loc_838EF528:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838ef55c
	if (cr6.lt) goto loc_838EF55C;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838EF55C:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_838EF56C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838EF574"))) PPC_WEAK_FUNC(sub_838EF574);
PPC_FUNC_IMPL(__imp__sub_838EF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF578"))) PPC_WEAK_FUNC(sub_838EF578);
PPC_FUNC_IMPL(__imp__sub_838EF578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef594
	if (cr6.eq) goto loc_838EF594;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef594
	if (cr6.eq) goto loc_838EF594;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// and r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ctx.r5.u64;
	// blr 
	return;
loc_838EF594:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF59C"))) PPC_WEAK_FUNC(sub_838EF59C);
PPC_FUNC_IMPL(__imp__sub_838EF59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF5A0"))) PPC_WEAK_FUNC(sub_838EF5A0);
PPC_FUNC_IMPL(__imp__sub_838EF5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef5b8
	if (cr6.eq) goto loc_838EF5B8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef5b8
	if (cr6.eq) goto loc_838EF5B8;
	// lwz r3,264(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// blr 
	return;
loc_838EF5B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF5C0"))) PPC_WEAK_FUNC(sub_838EF5C0);
PPC_FUNC_IMPL(__imp__sub_838EF5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef5d8
	if (cr6.eq) goto loc_838EF5D8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef5d8
	if (cr6.eq) goto loc_838EF5D8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
loc_838EF5D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF5E0"))) PPC_WEAK_FUNC(sub_838EF5E0);
PPC_FUNC_IMPL(__imp__sub_838EF5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef5f8
	if (cr6.eq) goto loc_838EF5F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef5f8
	if (cr6.eq) goto loc_838EF5F8;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// blr 
	return;
loc_838EF5F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF600"))) PPC_WEAK_FUNC(sub_838EF600);
PPC_FUNC_IMPL(__imp__sub_838EF600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef618
	if (cr6.eq) goto loc_838EF618;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef618
	if (cr6.eq) goto loc_838EF618;
	// lbz r3,27(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// blr 
	return;
loc_838EF618:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF620"))) PPC_WEAK_FUNC(sub_838EF620);
PPC_FUNC_IMPL(__imp__sub_838EF620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef638
	if (cr6.eq) goto loc_838EF638;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef638
	if (cr6.eq) goto loc_838EF638;
	// lbz r3,29(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// blr 
	return;
loc_838EF638:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF640"))) PPC_WEAK_FUNC(sub_838EF640);
PPC_FUNC_IMPL(__imp__sub_838EF640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef694
	if (cr6.eq) goto loc_838EF694;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef694
	if (cr6.eq) goto loc_838EF694;
	// lhz r11,114(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 114);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef694
	if (cr6.eq) goto loc_838EF694;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ef694
	if (cr6.eq) goto loc_838EF694;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r3,1
	ctx.r3.s64 = 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,9176(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9176);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f12,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f12.u64);
	// blr 
	return;
loc_838EF694:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF69C"))) PPC_WEAK_FUNC(sub_838EF69C);
PPC_FUNC_IMPL(__imp__sub_838EF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF6A0"))) PPC_WEAK_FUNC(sub_838EF6A0);
PPC_FUNC_IMPL(__imp__sub_838EF6A0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef764
	if (cr6.eq) goto loc_838EF764;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef764
	if (cr6.eq) goto loc_838EF764;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ef6cc
	if (cr6.eq) goto loc_838EF6CC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_838EF6CC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838ef6dc
	if (cr6.eq) goto loc_838EF6DC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_838EF6DC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838ef6ec
	if (cr6.eq) goto loc_838EF6EC;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_838EF6EC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838ef6fc
	if (cr6.eq) goto loc_838EF6FC;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_838EF6FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef70c
	if (cr6.eq) goto loc_838EF70C;
	// lbz r11,26(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_838EF70C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ef720
	if (cr6.eq) goto loc_838EF720;
	// lbz r10,27(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_838EF720:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ef730
	if (cr6.eq) goto loc_838EF730;
	// lbz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_838EF730:
	// lbz r10,27(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// lbz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// lbz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// lbz r7,25(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// lbz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x838e7ad8
	ctx.lr = 0x838EF750;
	sub_838E7AD8(ctx, base);
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
loc_838EF764:
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

__attribute__((alias("__imp__sub_838EF778"))) PPC_WEAK_FUNC(sub_838EF778);
PPC_FUNC_IMPL(__imp__sub_838EF778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef7b8
	if (cr6.eq) goto loc_838EF7B8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef7b8
	if (cr6.eq) goto loc_838EF7B8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef7b8
	if (cr6.eq) goto loc_838EF7B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ef7b8
	if (cr6.eq) goto loc_838EF7B8;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r3,8
	ctx.r3.s64 = 8;
	// lhz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_838EF7B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF7C0"))) PPC_WEAK_FUNC(sub_838EF7C0);
PPC_FUNC_IMPL(__imp__sub_838EF7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef854
	if (cr6.eq) goto loc_838EF854;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838ef854
	if (cr6.eq) goto loc_838EF854;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838ef854
	if (cr6.eq) goto loc_838EF854;
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838ef818
	if (!cr6.eq) goto loc_838EF818;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ef804
	if (cr6.eq) goto loc_838EF804;
	// lwz r10,156(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_838EF804:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838ef83c
	if (cr6.eq) goto loc_838EF83C;
	// addi r10,r4,160
	ctx.r10.s64 = ctx.r4.s64 + 160;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x838ef83c
	goto loc_838EF83C;
loc_838EF818:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838ef82c
	if (cr6.eq) goto loc_838EF82C;
	// addi r10,r4,160
	ctx.r10.s64 = ctx.r4.s64 + 160;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_838EF82C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838ef83c
	if (cr6.eq) goto loc_838EF83C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_838EF83C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838ef854
	if (cr6.eq) goto loc_838EF854;
	// lhz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_838EF854:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF85C"))) PPC_WEAK_FUNC(sub_838EF85C);
PPC_FUNC_IMPL(__imp__sub_838EF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF860"))) PPC_WEAK_FUNC(sub_838EF860);
PPC_FUNC_IMPL(__imp__sub_838EF860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF878"))) PPC_WEAK_FUNC(sub_838EF878);
PPC_FUNC_IMPL(__imp__sub_838EF878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF89C"))) PPC_WEAK_FUNC(sub_838EF89C);
PPC_FUNC_IMPL(__imp__sub_838EF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF8A0"))) PPC_WEAK_FUNC(sub_838EF8A0);
PPC_FUNC_IMPL(__imp__sub_838EF8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// stb r10,1617(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1617, ctx.r10.u8);
	// stw r9,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF8CC"))) PPC_WEAK_FUNC(sub_838EF8CC);
PPC_FUNC_IMPL(__imp__sub_838EF8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF8D0"))) PPC_WEAK_FUNC(sub_838EF8D0);
PPC_FUNC_IMPL(__imp__sub_838EF8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF8F4"))) PPC_WEAK_FUNC(sub_838EF8F4);
PPC_FUNC_IMPL(__imp__sub_838EF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF8F8"))) PPC_WEAK_FUNC(sub_838EF8F8);
PPC_FUNC_IMPL(__imp__sub_838EF8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,1700
	ctx.r10.s64 = ctx.r3.s64 + 1700;
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r8,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EF91C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838ef91c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EF91C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF92C"))) PPC_WEAK_FUNC(sub_838EF92C);
PPC_FUNC_IMPL(__imp__sub_838EF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF930"))) PPC_WEAK_FUNC(sub_838EF930);
PPC_FUNC_IMPL(__imp__sub_838EF930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ef95c
	if (cr6.eq) goto loc_838EF95C;
	// lbz r10,1612(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ef95c
	if (cr6.eq) goto loc_838EF95C;
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r3,7
	ctx.r3.s64 = 7;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,1404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1404, ctx.r9.u32);
	// blr 
	return;
loc_838EF95C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF964"))) PPC_WEAK_FUNC(sub_838EF964);
PPC_FUNC_IMPL(__imp__sub_838EF964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EF968"))) PPC_WEAK_FUNC(sub_838EF968);
PPC_FUNC_IMPL(__imp__sub_838EF968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF980"))) PPC_WEAK_FUNC(sub_838EF980);
PPC_FUNC_IMPL(__imp__sub_838EF980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF998"))) PPC_WEAK_FUNC(sub_838EF998);
PPC_FUNC_IMPL(__imp__sub_838EF998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EF9B0"))) PPC_WEAK_FUNC(sub_838EF9B0);
PPC_FUNC_IMPL(__imp__sub_838EF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ef9ec
	if (!cr6.eq) goto loc_838EF9EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_838EF9D0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838ef9d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EF9D0;
	// blr 
	return;
loc_838EF9EC:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838efa3c
	if (!cr6.eq) goto loc_838EFA3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EFA20:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efa20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFA20;
	// blr 
	return;
loc_838EFA3C:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838EFA70:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// not r6,r10
	ctx.r6.u64 = ~ctx.r10.u64;
	// not r5,r9
	ctx.r5.u64 = ~ctx.r9.u64;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stbu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efa70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFA70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFAA0"))) PPC_WEAK_FUNC(sub_838EFAA0);
PPC_FUNC_IMPL(__imp__sub_838EFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_838EFAC4:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efac4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFAC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFADC"))) PPC_WEAK_FUNC(sub_838EFADC);
PPC_FUNC_IMPL(__imp__sub_838EFADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EFAE0"))) PPC_WEAK_FUNC(sub_838EFAE0);
PPC_FUNC_IMPL(__imp__sub_838EFAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x838efb0c
	if (!cr6.eq) goto loc_838EFB0C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// addi r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -512;
	// b 0x838efb34
	goto loc_838EFB34;
loc_838EFB0C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x838efb24
	if (!cr6.eq) goto loc_838EFB24;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// b 0x838efb34
	goto loc_838EFB34;
loc_838EFB24:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,10200
	ctx.r10.s64 = ctx.r11.s64 + 10200;
loc_838EFB34:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EFB48:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efb48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFB48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFB60"))) PPC_WEAK_FUNC(sub_838EFB60);
PPC_FUNC_IMPL(__imp__sub_838EFB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x838efc4c
	if (!cr6.eq) goto loc_838EFC4C;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838efbd4
	if (!cr6.eq) goto loc_838EFBD4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838efb94
	if (cr6.eq) goto loc_838EFB94;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// b 0x838efb9c
	goto loc_838EFB9C;
loc_838EFB94:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_838EFB9C:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838efbcc
	if (!cr6.lt) goto loc_838EFBCC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838EFBBC:
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838efbbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFBBC;
loc_838EFBCC:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x838efc20
	goto loc_838EFC20;
loc_838EFBD4:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838efbec
	if (cr6.eq) goto loc_838EFBEC;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// b 0x838efbf4
	goto loc_838EFBF4;
loc_838EFBEC:
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
loc_838EFBF4:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838efc1c
	if (!cr6.lt) goto loc_838EFC1C;
loc_838EFBFC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x838efbfc
	if (cr6.lt) goto loc_838EFBFC;
loc_838EFC1C:
	// li r10,16
	ctx.r10.s64 = 16;
loc_838EFC20:
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x838efd3c
	if (!cr6.eq) goto loc_838EFD3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838EFC4C:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838efcb0
	if (!cr6.eq) goto loc_838EFCB0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838efc70
	if (cr6.eq) goto loc_838EFC70;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// b 0x838efc78
	goto loc_838EFC78;
loc_838EFC70:
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
loc_838EFC78:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838efca8
	if (!cr6.lt) goto loc_838EFCA8;
loc_838EFC80:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x838efc80
	if (cr6.lt) goto loc_838EFC80;
loc_838EFCA8:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x838efd1c
	goto loc_838EFD1C;
loc_838EFCB0:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838efcc8
	if (cr6.eq) goto loc_838EFCC8;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// b 0x838efcd0
	goto loc_838EFCD0;
loc_838EFCC8:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
loc_838EFCD0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838efd18
	if (!cr6.lt) goto loc_838EFD18;
loc_838EFCD8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x838efcd8
	if (cr6.lt) goto loc_838EFCD8;
loc_838EFD18:
	// li r10,48
	ctx.r10.s64 = 48;
loc_838EFD1C:
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r9,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x838efd3c
	if (!cr6.eq) goto loc_838EFD3C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
loc_838EFD3C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFD48"))) PPC_WEAK_FUNC(sub_838EFD48);
PPC_FUNC_IMPL(__imp__sub_838EFD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838efdc8
	if (!cr6.eq) goto loc_838EFDC8;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838efd98
	if (!cr6.eq) goto loc_838EFD98;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_838EFD80:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efd80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFD80;
	// blr 
	return;
loc_838EFD98:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_838EFDB0:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838efdb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFDB0;
	// blr 
	return;
loc_838EFDC8:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838efe10
	if (!cr6.eq) goto loc_838EFE10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838EFDE8:
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stbu r7,6(r10)
	ea = 6 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838efde8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFDE8;
	// blr 
	return;
loc_838EFE10:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_838EFE28:
	// lbz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// stbu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838efe28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838EFE28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFE50"))) PPC_WEAK_FUNC(sub_838EFE50);
PPC_FUNC_IMPL(__imp__sub_838EFE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r10,1600(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1600);
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,11(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r8,7
	cr6.compare<uint32_t>(ctx.r8.u32, 7, xer);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,1572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838efef4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFEF4;
	// bdzf 4*cr6+eq,0x838efff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFFF0;
	// bdzf 4*cr6+eq,0x838eff70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFF70;
	// bdzf 4*cr6+eq,0x838efff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFFF0;
	// bdzf 4*cr6+eq,0x838efff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFFF0;
	// bdzf 4*cr6+eq,0x838efff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838EFFF0;
	// bne cr6,0x838effc4
	if (!cr6.eq) goto loc_838EFFC4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_838EFEC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// srw. r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x838efedc
	if (cr0.eq) goto loc_838EFEDC;
	// stw r7,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r7.u32);
loc_838EFEDC:
	// lwz r9,1572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838efec8
	if (cr6.gt) goto loc_838EFEC8;
	// blr 
	return;
loc_838EFEF4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_838EFEFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r7,1604(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x838eff1c
	if (!cr6.gt) goto loc_838EFF1C;
	// stw r9,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_838EFF1C:
	// lwz r8,1604(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x838eff30
	if (!cr6.gt) goto loc_838EFF30;
	// stw r9,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_838EFF30:
	// lwz r8,1604(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// rlwinm r9,r10,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x838eff44
	if (!cr6.gt) goto loc_838EFF44;
	// stw r9,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_838EFF44:
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x838eff58
	if (!cr6.gt) goto loc_838EFF58;
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
loc_838EFF58:
	// lwz r9,1572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838efefc
	if (cr6.gt) goto loc_838EFEFC;
	// blr 
	return;
loc_838EFF70:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_838EFF78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r7,1604(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// ble cr6,0x838eff98
	if (!cr6.gt) goto loc_838EFF98;
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
loc_838EFF98:
	// lwz r8,1604(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x838effac
	if (!cr6.gt) goto loc_838EFFAC;
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
loc_838EFFAC:
	// lwz r9,1572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838eff78
	if (cr6.gt) goto loc_838EFF78;
	// blr 
	return;
loc_838EFFC4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_838EFFCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x838effe0
	if (!cr6.gt) goto loc_838EFFE0;
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
loc_838EFFE0:
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838effcc
	if (cr6.gt) goto loc_838EFFCC;
loc_838EFFF0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838EFFF4"))) PPC_WEAK_FUNC(sub_838EFFF4);
PPC_FUNC_IMPL(__imp__sub_838EFFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838EFFF8"))) PPC_WEAK_FUNC(sub_838EFFF8);
PPC_FUNC_IMPL(__imp__sub_838EFFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F0000;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838f00ec
	if (cr6.eq) goto loc_838F00EC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,236(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x838f00ec
	if (!cr6.lt) goto loc_838F00EC;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r27,r11,21532
	ctx.r27.s64 = ctx.r11.s64 + 21532;
loc_838F0044:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// and r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f00c4
	if (cr6.eq) goto loc_838F00C4;
	// addi r30,r31,-12
	ctx.r30.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838e6b88
	ctx.lr = 0x838F0064;
	sub_838E6B88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x838f00c4
	if (cr6.eq) goto loc_838F00C4;
	// lbz r11,-9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -9);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0098
	if (!cr6.eq) goto loc_838F0098;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x838f0098
	if (cr6.eq) goto loc_838F0098;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f00c4
	if (!cr6.eq) goto loc_838F00C4;
	// lwz r11,1844(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x838f00c4
	if (!cr6.eq) goto loc_838F00C4;
loc_838F0098:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f00b0
	if (!cr6.eq) goto loc_838F00B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F00B0;
	sub_838E5CC0(ctx, base);
loc_838F00B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x838f2588
	ctx.lr = 0x838F00C4;
	sub_838F2588(ctx, base);
loc_838F00C4:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r10,236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-12
	ctx.r8.s64 = ctx.r31.s64 + -12;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x838f0044
	if (cr6.lt) goto loc_838F0044;
loc_838F00EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F00F4"))) PPC_WEAK_FUNC(sub_838F00F4);
PPC_FUNC_IMPL(__imp__sub_838F00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F00F8"))) PPC_WEAK_FUNC(sub_838F00F8);
PPC_FUNC_IMPL(__imp__sub_838F00F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F0100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f02a8
	if (cr6.eq) goto loc_838F02A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f02a8
	if (cr6.eq) goto loc_838F02A8;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f02a8
	if (!cr6.eq) goto loc_838F02A8;
	// bl 0x838f2358
	ctx.lr = 0x838F0130;
	sub_838F2358(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r29,r11,21620
	ctx.r29.s64 = ctx.r11.s64 + 21620;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0168
	if (cr6.eq) goto loc_838F0168;
	// lwz r11,1864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f0168
	if (cr6.eq) goto loc_838F0168;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F0160;
	sub_838E5CC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1864, ctx.r11.u32);
loc_838F0168:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lbz r9,27(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lbz r8,26(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r7,25(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x838f2e10
	ctx.lr = 0x838F018C;
	sub_838F2E10(ctx, base);
	// lhz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f01c4
	if (!cr6.eq) goto loc_838F01C4;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f01c4
	if (cr6.eq) goto loc_838F01C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f01c4
	if (cr6.eq) goto loc_838F01C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x838f3600
	ctx.lr = 0x838F01C4;
	sub_838F3600(ctx, base);
loc_838F01C4:
	// lhz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0234
	if (!cr6.eq) goto loc_838F0234;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f0210
	if (cr6.eq) goto loc_838F0210;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f01fc
	if (cr6.eq) goto loc_838F01FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5ee0
	ctx.lr = 0x838F01FC;
	sub_838E5EE0(ctx, base);
loc_838F01FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x838f3718
	ctx.lr = 0x838F020C;
	sub_838F3718(ctx, base);
	// b 0x838f0234
	goto loc_838F0234;
loc_838F0210:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0234
	if (!cr6.eq) goto loc_838F0234;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0234
	if (cr6.eq) goto loc_838F0234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 112);
	// bl 0x838f3688
	ctx.lr = 0x838F0234;
	sub_838F3688(ctx, base);
loc_838F0234:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0254
	if (cr6.eq) goto loc_838F0254;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// lbz r5,25(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f3ab8
	ctx.lr = 0x838F0254;
	sub_838F3AB8(ctx, base);
loc_838F0254:
	// lhz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f028c
	if (!cr6.eq) goto loc_838F028C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f028c
	if (cr6.eq) goto loc_838F028C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f028c
	if (cr6.eq) goto loc_838F028C;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f3c18
	ctx.lr = 0x838F028C;
	sub_838F3C18(ctx, base);
loc_838F028C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838efff8
	ctx.lr = 0x838F029C;
	sub_838EFFF8(ctx, base);
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
loc_838F02A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F02B0"))) PPC_WEAK_FUNC(sub_838F02B0);
PPC_FUNC_IMPL(__imp__sub_838F02B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F02B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f05bc
	if (cr6.eq) goto loc_838F05BC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f05bc
	if (cr6.eq) goto loc_838F05BC;
	// bl 0x838f00f8
	ctx.lr = 0x838F02D8;
	sub_838F00F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0534
	if (cr6.eq) goto loc_838F0534;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x838f3190
	ctx.lr = 0x838F02F8;
	sub_838F3190(ctx, base);
loc_838F02F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0378
	if (cr6.eq) goto loc_838F0378;
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0360
	if (cr6.eq) goto loc_838F0360;
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f0360
	if (!cr6.eq) goto loc_838F0360;
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// ble cr6,0x838f0334
	if (!cr6.gt) goto loc_838F0334;
	// li r10,256
	ctx.r10.s64 = 256;
loc_838F0334:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x838f0360
	if (!cr6.gt) goto loc_838F0360;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838F0348:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subfic r8,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r10.s64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838f0348
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F0348;
loc_838F0360:
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// lbz r7,25(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r6,22(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x838f3cf0
	ctx.lr = 0x838F0378;
	sub_838F3CF0(ctx, base);
loc_838F0378:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0398
	if (cr6.eq) goto loc_838F0398;
	// addi r4,r31,170
	ctx.r4.s64 = ctx.r31.s64 + 170;
	// lbz r5,25(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f3ec8
	ctx.lr = 0x838F0398;
	sub_838F3EC8(ctx, base);
loc_838F0398:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f03b8
	if (cr6.eq) goto loc_838F03B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x838f40b8
	ctx.lr = 0x838F03B8;
	sub_838F40B8(ctx, base);
loc_838F03B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f03dc
	if (cr6.eq) goto loc_838F03DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x838f46f0
	ctx.lr = 0x838F03DC;
	sub_838F46F0(ctx, base);
loc_838F03DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0410
	if (cr6.eq) goto loc_838F0410;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lbz r8,229(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 229);
	// lbz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// lwz r6,216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x838f4788
	ctx.lr = 0x838F0410;
	sub_838F4788(ctx, base);
loc_838F0410:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0434
	if (cr6.eq) goto loc_838F0434;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lbz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// bl 0x838f4a00
	ctx.lr = 0x838F0434;
	sub_838F4A00(ctx, base);
loc_838F0434:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0458
	if (cr6.eq) goto loc_838F0458;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x838f4ad0
	ctx.lr = 0x838F0458;
	sub_838F4AD0(ctx, base);
loc_838F0458:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0480
	if (cr6.eq) goto loc_838F0480;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f4b88
	ctx.lr = 0x838F0474;
	sub_838F4B88(ctx, base);
	// lwz r11,1396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1396);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,1396(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1396, ctx.r10.u32);
loc_838F0480:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f04c8
	if (cr6.eq) goto loc_838F04C8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838f04c8
	if (!cr6.gt) goto loc_838F04C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_838F04A4:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x838f3888
	ctx.lr = 0x838F04B4;
	sub_838F3888(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x838f04a4
	if (cr6.lt) goto loc_838F04A4;
loc_838F04C8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838f05ac
	if (!cr6.gt) goto loc_838F05AC;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-2
	ctx.r27.s64 = -2;
	// li r29,-3
	ctx.r29.s64 = -3;
loc_838F04E8:
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x838f0550
	if (!cr6.gt) goto loc_838F0550;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f4400
	ctx.lr = 0x838F0510;
	sub_838F4400(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stwx r7,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x838f0598
	goto loc_838F0598;
loc_838F0534:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f02f8
	if (!cr6.eq) goto loc_838F02F8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,21668
	ctx.r4.s64 = ctx.r11.s64 + 21668;
	// bl 0x838e5e88
	ctx.lr = 0x838F0550;
	sub_838E5E88(ctx, base);
loc_838F0550:
	// bne cr6,0x838f0574
	if (!cr6.eq) goto loc_838F0574;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f42c0
	ctx.lr = 0x838F0568;
	sub_838F42C0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stwx r27,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u32);
	// b 0x838f0598
	goto loc_838F0598;
loc_838F0574:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x838f0598
	if (!cr6.eq) goto loc_838F0598;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f4188
	ctx.lr = 0x838F0590;
	sub_838F4188(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stwx r29,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r29.u32);
loc_838F0598:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x838f04e8
	if (cr6.lt) goto loc_838F04E8;
loc_838F05AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838efff8
	ctx.lr = 0x838F05BC;
	sub_838EFFF8(ctx, base);
loc_838F05BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F05C4"))) PPC_WEAK_FUNC(sub_838F05C4);
PPC_FUNC_IMPL(__imp__sub_838F05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F05C8"))) PPC_WEAK_FUNC(sub_838F05C8);
PPC_FUNC_IMPL(__imp__sub_838F05C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F05D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f0744
	if (cr6.eq) goto loc_838F0744;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0604
	if (!cr6.eq) goto loc_838F0604;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,21740
	ctx.r11.s64 = ctx.r11.s64 + 21740;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5e88
	ctx.lr = 0x838F0604;
	sub_838E5E88(ctx, base);
loc_838F0604:
	// lhz r11,1600(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1600);
	// lwz r10,1604(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x838f0624
	if (!cr6.gt) goto loc_838F0624;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,21740
	ctx.r4.s64 = ctx.r11.s64 + 21740;
	// bl 0x838e61a0
	ctx.lr = 0x838F0624;
	sub_838E61A0(ctx, base);
loc_838F0624:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f0730
	if (cr6.eq) goto loc_838F0730;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0658
	if (cr6.eq) goto loc_838F0658;
	// lwz r11,1396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1396);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0658
	if (!cr6.eq) goto loc_838F0658;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f4b88
	ctx.lr = 0x838F0658;
	sub_838F4B88(ctx, base);
loc_838F0658:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838f0720
	if (!cr6.gt) goto loc_838F0720;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,-2
	ctx.r27.s64 = -2;
	// li r28,-3
	ctx.r28.s64 = -3;
loc_838F0678:
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x838f06c4
	if (!cr6.gt) goto loc_838F06C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f4400
	ctx.lr = 0x838F06A0;
	sub_838F4400(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stwx r7,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x838f070c
	goto loc_838F070C;
loc_838F06C4:
	// blt cr6,0x838f06e8
	if (cr6.lt) goto loc_838F06E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f42c0
	ctx.lr = 0x838F06DC;
	sub_838F42C0(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// b 0x838f070c
	goto loc_838F070C;
loc_838F06E8:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x838f070c
	if (!cr6.eq) goto loc_838F070C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838f4188
	ctx.lr = 0x838F0704;
	sub_838F4188(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
loc_838F070C:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x838f0678
	if (cr6.lt) goto loc_838F0678;
loc_838F0720:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838efff8
	ctx.lr = 0x838F0730;
	sub_838EFFF8(ctx, base);
loc_838F0730:
	// lwz r11,1396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1396);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,1396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1396, ctx.r10.u32);
	// bl 0x838f35a8
	ctx.lr = 0x838F0744;
	sub_838F35A8(ctx, base);
loc_838F0744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F074C"))) PPC_WEAK_FUNC(sub_838F074C);
PPC_FUNC_IMPL(__imp__sub_838F074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0750"))) PPC_WEAK_FUNC(sub_838F0750);
PPC_FUNC_IMPL(__imp__sub_838F0750) {
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
	// bl 0x838e6558
	ctx.lr = 0x838F0764;
	sub_838E6558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f07d0
	if (cr6.eq) goto loc_838F07D0;
	// lwz r8,1400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1488, ctx.r11.u32);
	// li r7,8192
	ctx.r7.s64 = 8192;
	// stw r9,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,1472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1472, ctx.r7.u32);
	// oris r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 2097152;
	// stw r6,1492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1492, ctx.r6.u32);
	// stw r11,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,1496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1496, ctx.r9.u32);
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// stw r10,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r10.u32);
	// stw r11,1500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1500, ctx.r11.u32);
	// stw r8,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r8.u32);
	// bl 0x838e98e8
	ctx.lr = 0x838F07CC;
	sub_838E98E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838F07D0:
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

__attribute__((alias("__imp__sub_838F07E4"))) PPC_WEAK_FUNC(sub_838F07E4);
PPC_FUNC_IMPL(__imp__sub_838F07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F07E8"))) PPC_WEAK_FUNC(sub_838F07E8);
PPC_FUNC_IMPL(__imp__sub_838F07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838f086c
	if (!cr6.eq) goto loc_838F086C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838f0818
	if (!cr6.eq) goto loc_838F0818;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x838f0824
	goto loc_838F0824;
loc_838F0818:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r9,4
	ctx.r9.s64 = 4;
loc_838F0824:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838F0834:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r3,r10,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r10.s64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stb r10,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x838f0834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F0834;
	// blr 
	return;
loc_838F086C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838f0884
	if (!cr6.eq) goto loc_838F0884;
	// li r9,6
	ctx.r9.s64 = 6;
	// b 0x838f0890
	goto loc_838F0890;
loc_838F0884:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r9,8
	ctx.r9.s64 = 8;
loc_838F0890:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838F08A0:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 | ctx.r8.u64;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// stb r4,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x838f08a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F08A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F090C"))) PPC_WEAK_FUNC(sub_838F090C);
PPC_FUNC_IMPL(__imp__sub_838F090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0910"))) PPC_WEAK_FUNC(sub_838F0910);
PPC_FUNC_IMPL(__imp__sub_838F0910) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f095c
	if (cr6.eq) goto loc_838F095C;
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// lwz r10,1544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838f095c
	if (!cr6.lt) goto loc_838F095C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838f32f0
	ctx.lr = 0x838F094C;
	sub_838F32F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// bl 0x838e98b8
	ctx.lr = 0x838F095C;
	sub_838E98B8(ctx, base);
loc_838F095C:
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

__attribute__((alias("__imp__sub_838F0970"))) PPC_WEAK_FUNC(sub_838F0970);
PPC_FUNC_IMPL(__imp__sub_838F0970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F0978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f0a20
	if (cr6.eq) goto loc_838F0A20;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f0a20
	if (cr6.eq) goto loc_838F0A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8bc8
	ctx.lr = 0x838F099C;
	sub_838E8BC8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f09bc
	if (cr6.eq) goto loc_838F09BC;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x83301278
	ctx.lr = 0x838F09BC;
	sub_83301278(ctx, base);
loc_838F09BC:
	// addi r4,r31,1468
	ctx.r4.s64 = ctx.r31.s64 + 1468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2a10
	ctx.lr = 0x838F09C8;
	sub_838F2A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// bl 0x838f2288
	ctx.lr = 0x838F09D4;
	sub_838F2288(ctx, base);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// bl 0x838f2288
	ctx.lr = 0x838F09E4;
	sub_838F2288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// bl 0x838f2288
	ctx.lr = 0x838F09F0;
	sub_838F2288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x838f2288
	ctx.lr = 0x838F09FC;
	sub_838F2288(ctx, base);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// lwz r4,1852(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// bl 0x838f2288
	ctx.lr = 0x838F0A14;
	sub_838F2288(ctx, base);
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f22b8
	ctx.lr = 0x838F0A20;
	sub_838F22B8(ctx, base);
loc_838F0A20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F0A28"))) PPC_WEAK_FUNC(sub_838F0A28);
PPC_FUNC_IMPL(__imp__sub_838F0A28) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x838f0750
	sub_838F0750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F0A38"))) PPC_WEAK_FUNC(sub_838F0A38);
PPC_FUNC_IMPL(__imp__sub_838F0A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838F0A40;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f0d64
	if (cr6.eq) goto loc_838F0D64;
	// bl 0x838ef930
	ctx.lr = 0x838F0A58;
	sub_838EF930(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x838f0d64
	if (!cr6.gt) goto loc_838F0D64;
loc_838F0A68:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838f0d58
	if (!cr6.gt) goto loc_838F0D58;
loc_838F0A7C:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f0ab0
	if (!cr6.eq) goto loc_838F0AB0;
	// lbz r11,1613(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f0ab0
	if (!cr6.eq) goto loc_838F0AB0;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0d6c
	if (cr6.eq) goto loc_838F0D6C;
	// bl 0x838f4c88
	ctx.lr = 0x838F0AB0;
	sub_838F4C88(ctx, base);
loc_838F0AB0:
	// lbz r29,1612(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f0be0
	if (cr6.eq) goto loc_838F0BE0;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0be0
	if (cr6.eq) goto loc_838F0BE0;
	// lbz r11,1613(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x838f0be0
	if (cr6.gt) goto loc_838F0BE0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838f0b14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F0B14;
	// bdzf 4*cr6+eq,0x838f0b3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F0B3C;
	// bdzf 4*cr6+eq,0x838f0b58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F0B58;
	// bdzf 4*cr6+eq,0x838f0b80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F0B80;
	// bdzf 4*cr6+eq,0x838f0b9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F0B9C;
	// bne cr6,0x838f0bc4
	if (!cr6.eq) goto loc_838F0BC4;
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0be0
	if (cr6.eq) goto loc_838F0BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0B10;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0B14:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0b30
	if (!cr6.eq) goto loc_838F0B30;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x838f0be0
	if (!cr6.lt) goto loc_838F0BE0;
loc_838F0B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0B38;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0B3C:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x838f0be0
	if (cr6.eq) goto loc_838F0BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0B54;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0B58:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0b74
	if (!cr6.eq) goto loc_838F0B74;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x838f0be0
	if (!cr6.lt) goto loc_838F0BE0;
loc_838F0B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0B7C;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0B80:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838f0be0
	if (cr6.eq) goto loc_838F0BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0B98;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0B9C:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0bb8
	if (!cr6.eq) goto loc_838F0BB8;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x838f0be0
	if (!cr6.lt) goto loc_838F0BE0;
loc_838F0BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0BC0;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0BC4:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f0be0
	if (!cr6.eq) goto loc_838F0BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0BDC;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0BE0:
	// lbz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1620);
	// lbz r9,1617(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1617);
	// lbz r7,1615(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r10,1548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f0c28
	if (cr6.lt) goto loc_838F0C28;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x838f0c34
	goto loc_838F0C34;
loc_838F0C28:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F0C34:
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F0C4C;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f0c94
	if (cr6.eq) goto loc_838F0C94;
	// lbz r5,1613(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x838f0c94
	if (!cr6.lt) goto loc_838F0C94;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0c94
	if (cr6.eq) goto loc_838F0C94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838f4fc0
	ctx.lr = 0x838F0C7C;
	sub_838F4FC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f0c94
	if (!cr6.eq) goto loc_838F0C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F0C90;
	sub_838F4E28(ctx, base);
	// b 0x838f0d44
	goto loc_838F0D44;
loc_838F0C94:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f0cac
	if (cr6.eq) goto loc_838F0CAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fb1d0
	ctx.lr = 0x838F0CAC;
	sub_838FB1D0(ctx, base);
loc_838F0CAC:
	// lbz r11,91(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r10,1618(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1618);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838f0d7c
	if (!cr6.eq) goto loc_838F0D7C;
	// lbz r10,1623(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1623);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838f0d7c
	if (!cr6.eq) goto loc_838F0D7C;
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f0cf4
	if (cr6.eq) goto loc_838F0CF4;
	// lbz r11,1868(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1868);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bne cr6,0x838f0cf4
	if (!cr6.eq) goto loc_838F0CF4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838f07e8
	ctx.lr = 0x838F0CF4;
	sub_838F07E8(ctx, base);
loc_838F0CF4:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f0d18
	if (!cr6.eq) goto loc_838F0D18;
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x838f0d18
	if (cr6.lt) goto loc_838F0D18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838efe50
	ctx.lr = 0x838F0D18;
	sub_838EFE50(ctx, base);
loc_838F0D18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f56d0
	ctx.lr = 0x838F0D24;
	sub_838F56D0(ctx, base);
	// lwz r11,1728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f0d44
	if (cr6.eq) goto loc_838F0D44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,1613(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838F0D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838F0D44:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f0a7c
	if (cr6.lt) goto loc_838F0A7C;
loc_838F0D58:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, xer);
	// blt cr6,0x838f0a68
	if (cr6.lt) goto loc_838F0A68;
loc_838F0D64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838F0D6C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,21840
	ctx.r11.s64 = ctx.r11.s64 + 21840;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x838e5e88
	ctx.lr = 0x838F0D7C;
	sub_838E5E88(ctx, base);
loc_838F0D7C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21840
	ctx.r4.s64 = ctx.r11.s64 + 21840;
	// bl 0x838e5e88
	ctx.lr = 0x838F0D8C;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F0D8C"))) PPC_WEAK_FUNC(sub_838F0D8C);
PPC_FUNC_IMPL(__imp__sub_838F0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0D90"))) PPC_WEAK_FUNC(sub_838F0D90);
PPC_FUNC_IMPL(__imp__sub_838F0D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r4,168
	ctx.r10.s64 = ctx.r4.s64 + 168;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838F0DB8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x838f0db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F0DB8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F0DD4"))) PPC_WEAK_FUNC(sub_838F0DD4);
PPC_FUNC_IMPL(__imp__sub_838F0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0DD8"))) PPC_WEAK_FUNC(sub_838F0DD8);
PPC_FUNC_IMPL(__imp__sub_838F0DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F0DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f0eb4
	if (cr6.eq) goto loc_838F0EB4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f0eb4
	if (cr6.eq) goto loc_838F0EB4;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f0ea0
	if (cr6.eq) goto loc_838F0EA0;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bgt cr6,0x838f0ea0
	if (cr6.gt) goto loc_838F0EA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x838e66e8
	ctx.lr = 0x838F0E20;
	sub_838E66E8(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F0E2C;
	sub_838F21A0(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f0e50
	if (!cr6.eq) goto loc_838F0E50;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23064
	ctx.r4.s64 = ctx.r11.s64 + 23064;
	// bl 0x838e5cc0
	ctx.lr = 0x838F0E48;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F0E50:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// beq cr6,0x838f0e8c
	if (cr6.eq) goto loc_838F0E8C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_838F0E74:
	// lhzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// sthx r8,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x838f0e74
	if (cr6.lt) goto loc_838F0E74;
loc_838F0E8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F0EA0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,23064
	ctx.r11.s64 = ctx.r11.s64 + 23064;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x838e5cc0
	ctx.lr = 0x838F0EB4;
	sub_838E5CC0(ctx, base);
loc_838F0EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F0EBC"))) PPC_WEAK_FUNC(sub_838F0EBC);
PPC_FUNC_IMPL(__imp__sub_838F0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0EC0"))) PPC_WEAK_FUNC(sub_838F0EC0);
PPC_FUNC_IMPL(__imp__sub_838F0EC0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f0fa8
	if (cr6.eq) goto loc_838F0FA8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f0fa8
	if (cr6.eq) goto loc_838F0FA8;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// stb r6,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r6.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r7,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r7.u8);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r10,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r10.u8);
	// stb r4,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r4.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838e7ad8
	ctx.lr = 0x838F0F34;
	sub_838E7AD8(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838f0f50
	if (cr6.eq) goto loc_838F0F50;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// bne cr6,0x838f0f54
	if (!cr6.eq) goto loc_838F0F54;
loc_838F0F50:
	// li r10,1
	ctx.r10.s64 = 1;
loc_838F0F54:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stb r10,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f0f70
	if (cr6.eq) goto loc_838F0F70;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
loc_838F0F70:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r10,29(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f0f98
	if (cr6.lt) goto loc_838F0F98;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// b 0x838f0fa4
	goto loc_838F0FA4;
loc_838F0F98:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F0FA4:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_838F0FA8:
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

__attribute__((alias("__imp__sub_838F0FC0"))) PPC_WEAK_FUNC(sub_838F0FC0);
PPC_FUNC_IMPL(__imp__sub_838F0FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,180(r4)
	PPC_STORE_U32(ctx.r4.u32 + 180, ctx.r5.u32);
	// ori r9,r11,256
	ctx.r9.u64 = ctx.r11.u64 | 256;
	// stw r6,184(r4)
	PPC_STORE_U32(ctx.r4.u32 + 184, ctx.r6.u32);
	// stb r7,188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 188, ctx.r7.u8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F0FEC"))) PPC_WEAK_FUNC(sub_838F0FEC);
PPC_FUNC_IMPL(__imp__sub_838F0FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F0FF0"))) PPC_WEAK_FUNC(sub_838F0FF0);
PPC_FUNC_IMPL(__imp__sub_838F0FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x838F0FF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1118
	if (cr6.eq) goto loc_838F1118;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1118
	if (cr6.eq) goto loc_838F1118;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f1118
	if (cr6.eq) goto loc_838F1118;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f1118
	if (cr6.eq) goto loc_838F1118;
	// lwz r20,276(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x838f1050
	if (!cr6.gt) goto loc_838F1050;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x838f1118
	if (cr6.eq) goto loc_838F1118;
loc_838F1050:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F1054:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f1054
	if (!cr6.eq) goto loc_838F1054;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x838f12bc
	if (cr6.lt) goto loc_838F12BC;
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(ctx.r25.s32, 3, xer);
	// bgt cr6,0x838f12bc
	if (cr6.gt) goto loc_838F12BC;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x838f12a8
	if (cr6.lt) goto loc_838F12A8;
	// cmpwi cr6,r23,255
	cr6.compare<int32_t>(ctx.r23.s32, 255, xer);
	// bgt cr6,0x838f12a8
	if (cr6.gt) goto loc_838F12A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x838f10ec
	if (!cr6.gt) goto loc_838F10EC;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_838F10A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1120
	if (cr6.eq) goto loc_838F1120;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_838F10B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f10b4
	if (!cr6.eq) goto loc_838F10B4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838e7f68
	ctx.lr = 0x838F10D4;
	sub_838E7F68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f1120
	if (cr6.eq) goto loc_838F1120;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, xer);
	// blt cr6,0x838f10a4
	if (cr6.lt) goto loc_838F10A4;
loc_838F10EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F10F8;
	sub_838F21A0(ctx, base);
	// stw r3,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f1134
	if (!cr6.eq) goto loc_838F1134;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x838e5cc0
	ctx.lr = 0x838F1118;
	sub_838E5CC0(ctx, base);
loc_838F1118:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F1120:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x838e5e88
	ctx.lr = 0x838F1134;
	sub_838E5E88(ctx, base);
loc_838F1134:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F1140;
	sub_831CE980(ctx, base);
	// stw r22,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r22.u32);
	// stw r21,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r21.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r25,228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 228, ctx.r25.u8);
	// stb r23,229(r29)
	PPC_STORE_U8(ctx.r29.u32 + 229, ctx.r23.u8);
loc_838F1154:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f1154
	if (!cr6.eq) goto loc_838F1154;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F1180;
	sub_838F21A0(ctx, base);
	// stw r3,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f11a8
	if (!cr6.eq) goto loc_838F11A8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x838e5cc0
	ctx.lr = 0x838F11A0;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F11A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F11B4;
	sub_831CE980(ctx, base);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F11C8;
	sub_838F21A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r3.u32);
	// bne cr6,0x838f11f0
	if (!cr6.eq) goto loc_838F11F0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x838e5cc0
	ctx.lr = 0x838F11E8;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F11F0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x838F11FC;
	sub_831CDCF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x838f1270
	if (!cr6.gt) goto loc_838F1270;
	// li r31,0
	ctx.r31.s64 = 0;
loc_838F120C:
	// lwzx r11,r31,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_838F1214:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f1214
	if (!cr6.eq) goto loc_838F1214;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F1240;
	sub_838F21A0(ctx, base);
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x838f1290
	if (cr6.eq) goto loc_838F1290;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// bl 0x831ce980
	ctx.lr = 0x838F1260;
	sub_831CE980(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, xer);
	// blt cr6,0x838f120c
	if (cr6.lt) goto loc_838F120C;
loc_838F1270:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// ori r9,r11,1024
	ctx.r9.u64 = ctx.r11.u64 | 1024;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r8,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F1290:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,23312
	ctx.r4.s64 = ctx.r11.s64 + 23312;
	// bl 0x838e5cc0
	ctx.lr = 0x838F12A0;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F12A8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x838e5e88
	ctx.lr = 0x838F12BC;
	sub_838E5E88(ctx, base);
loc_838F12BC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x838e5e88
	ctx.lr = 0x838F12D0;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F12D0"))) PPC_WEAK_FUNC(sub_838F12D0);
PPC_FUNC_IMPL(__imp__sub_838F12D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838F12D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f13f4
	if (cr6.eq) goto loc_838F13F4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f13f4
	if (cr6.eq) goto loc_838F13F4;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x838f1320
	if (cr6.eq) goto loc_838F1320;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x838f1320
	if (cr6.eq) goto loc_838F1320;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,23460
	ctx.r11.s64 = ctx.r11.s64 + 23460;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x838e5e88
	ctx.lr = 0x838F1320;
	sub_838E5E88(ctx, base);
loc_838F1320:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f1490
	if (cr6.eq) goto loc_838F1490;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F132C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f132c
	if (!cr6.eq) goto loc_838F132C;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f1490
	if (cr6.eq) goto loc_838F1490;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x838f1490
	if (cr6.eq) goto loc_838F1490;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e7f68
	ctx.lr = 0x838F1368;
	sub_838E7F68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f1490
	if (cr6.eq) goto loc_838F1490;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838f147c
	if (cr6.eq) goto loc_838F147C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_838F137C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f137c
	if (!cr6.eq) goto loc_838F137C;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f147c
	if (cr6.eq) goto loc_838F147C;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x838f147c
	if (cr6.eq) goto loc_838F147C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838e7f68
	ctx.lr = 0x838F13B8;
	sub_838E7F68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f147c
	if (cr6.eq) goto loc_838F147C;
	// stb r26,252(r30)
	PPC_STORE_U8(ctx.r30.u32 + 252, ctx.r26.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F13D4;
	sub_838F21A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r3.u32);
	// bne cr6,0x838f13fc
	if (!cr6.eq) goto loc_838F13FC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,23460
	ctx.r11.s64 = ctx.r11.s64 + 23460;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x838e5cc0
	ctx.lr = 0x838F13F4;
	sub_838E5CC0(ctx, base);
loc_838F13F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838F13FC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F1408;
	sub_831CE980(ctx, base);
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838F1418;
	sub_838F21A0(ctx, base);
	// stw r3,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f1450
	if (!cr6.eq) goto loc_838F1450;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x838f2288
	ctx.lr = 0x838F1430;
	sub_838F2288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// stw r11,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,23460
	ctx.r4.s64 = ctx.r10.s64 + 23460;
	// bl 0x838e5cc0
	ctx.lr = 0x838F1448;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838F1450:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F145C;
	sub_831CE980(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// ori r8,r10,256
	ctx.r8.u64 = ctx.r10.u64 | 256;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838F147C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,23460
	ctx.r11.s64 = ctx.r11.s64 + 23460;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x838e5e88
	ctx.lr = 0x838F1490;
	sub_838E5E88(ctx, base);
loc_838F1490:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,23460
	ctx.r11.s64 = ctx.r11.s64 + 23460;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x838e5e88
	ctx.lr = 0x838F14A4;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F14A4"))) PPC_WEAK_FUNC(sub_838F14A4);
PPC_FUNC_IMPL(__imp__sub_838F14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F14A8"))) PPC_WEAK_FUNC(sub_838F14A8);
PPC_FUNC_IMPL(__imp__sub_838F14A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 192, ctx.r5.u32);
	// ori r9,r11,128
	ctx.r9.u64 = ctx.r11.u64 | 128;
	// stw r6,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r6.u32);
	// stb r7,200(r4)
	PPC_STORE_U8(ctx.r4.u32 + 200, ctx.r7.u8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F14D4"))) PPC_WEAK_FUNC(sub_838F14D4);
PPC_FUNC_IMPL(__imp__sub_838F14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F14D8"))) PPC_WEAK_FUNC(sub_838F14D8);
PPC_FUNC_IMPL(__imp__sub_838F14D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F14E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1604
	if (cr6.eq) goto loc_838F1604;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1604
	if (cr6.eq) goto loc_838F1604;
	// lbz r11,1615(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f1520
	if (!cr6.eq) goto loc_838F1520;
	// lbz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x838f1524
	goto loc_838F1524;
loc_838F1520:
	// li r11,256
	ctx.r11.s64 = 256;
loc_838F1524:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x838f15dc
	if (cr6.lt) goto loc_838F15DC;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838f15dc
	if (cr6.gt) goto loc_838F15DC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x838f1548
	if (!cr6.gt) goto loc_838F1548;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f155c
	if (cr6.eq) goto loc_838F155C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
loc_838F1548:
	// bne cr6,0x838f156c
	if (!cr6.eq) goto loc_838F156C;
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f156c
	if (!cr6.eq) goto loc_838F156C;
loc_838F155C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23668
	ctx.r4.s64 = ctx.r11.s64 + 23668;
	// bl 0x838e5e88
	ctx.lr = 0x838F156C;
	sub_838E5E88(ctx, base);
loc_838F156C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e66e8
	ctx.lr = 0x838F1580;
	sub_838E66E8(ctx, base);
	// li r4,768
	ctx.r4.s64 = 768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2238
	ctx.lr = 0x838F158C;
	sub_838F2238(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r3,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r3.u32);
	// ble cr6,0x838f15ac
	if (!cr6.gt) goto loc_838F15AC;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F15AC;
	sub_831CE980(ctx, base);
loc_838F15AC:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r8,r11,4096
	ctx.r8.u64 = ctx.r11.u64 | 4096;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// ori r7,r9,8
	ctx.r7.u64 = ctx.r9.u64 | 8;
	// sth r10,1600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1600, ctx.r10.u16);
	// sth r10,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r10.u16);
	// stw r8,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r8.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F15DC:
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,23668
	ctx.r11.s64 = ctx.r11.s64 + 23668;
	// bne cr6,0x838f15fc
	if (!cr6.eq) goto loc_838F15FC;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x838e5e88
	ctx.lr = 0x838F15FC;
	sub_838E5E88(ctx, base);
loc_838F15FC:
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5cc0
	ctx.lr = 0x838F1604;
	sub_838E5CC0(ctx, base);
loc_838F1604:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F160C"))) PPC_WEAK_FUNC(sub_838F160C);
PPC_FUNC_IMPL(__imp__sub_838F160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F1610"))) PPC_WEAK_FUNC(sub_838F1610);
PPC_FUNC_IMPL(__imp__sub_838F1610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r4,147
	ctx.r10.s64 = ctx.r4.s64 + 147;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838F1638:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838f1638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F1638;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F1654"))) PPC_WEAK_FUNC(sub_838F1654);
PPC_FUNC_IMPL(__imp__sub_838F1654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F1658"))) PPC_WEAK_FUNC(sub_838F1658);
PPC_FUNC_IMPL(__imp__sub_838F1658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x838F1660;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f19a8
	if (cr6.eq) goto loc_838F19A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f19a8
	if (cr6.eq) goto loc_838F19A8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838f19a8
	if (!cr6.gt) goto loc_838F19A8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f19a8
	if (cr6.eq) goto loc_838F19A8;
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// lwz r5,128(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// ble cr6,0x838f173c
	if (!cr6.gt) goto loc_838F173C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// subf r10,r5,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r5.s64;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838f16f8
	if (cr6.gt) goto loc_838F16F8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// ori r9,r10,65527
	ctx.r9.u64 = ctx.r10.u64 | 65527;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x838f16d8
	if (!cr6.lt) goto loc_838F16D8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_838F16D8:
	// subf r6,r5,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r5.s64;
	// lwz r4,136(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// li r7,28
	ctx.r7.s64 = 28;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838f2060
	ctx.lr = 0x838F16EC;
	sub_838F2060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f171c
	if (!cr6.eq) goto loc_838F171C;
loc_838F16F8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1710;
	sub_838E5FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_838F171C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,136(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// bl 0x838f2288
	ctx.lr = 0x838F1728;
	sub_838F2288(ctx, base);
	// lwz r11,232(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// stw r31,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r31.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r30,132(r24)
	PPC_STORE_U32(ctx.r24.u32 + 132, ctx.r30.u32);
	// stw r10,232(r24)
	PPC_STORE_U32(ctx.r24.u32 + 232, ctx.r10.u32);
loc_838F173C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// ble cr6,0x838f19a8
	if (!cr6.gt) goto loc_838F19A8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r26,r29,20
	ctx.r26.s64 = ctx.r29.s64 + 20;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r19,-1
	ctx.r19.s64 = -1;
	// addi r21,r11,23904
	ctx.r21.s64 = ctx.r11.s64 + 23904;
loc_838F1760:
	// lwz r9,128(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// lwz r10,136(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// lwz r11,-16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1998
	if (cr6.eq) goto loc_838F1998;
	// lwz r9,-20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// blt cr6,0x838f1988
	if (cr6.lt) goto loc_838F1988;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x838f1988
	if (!cr6.lt) goto loc_838F1988;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_838F1794:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f1794
	if (!cr6.eq) goto loc_838F1794;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bgt cr6,0x838f1800
	if (cr6.gt) goto loc_838F1800;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_838F17BC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_838F17C0:
	// lwz r10,-12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f1864
	if (cr6.eq) goto loc_838F1864;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1864
	if (cr6.eq) goto loc_838F1864;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F17DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f17dc
	if (!cr6.eq) goto loc_838F17DC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838f187c
	goto loc_838F187C;
loc_838F1800:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f1830
	if (cr6.eq) goto loc_838F1830;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F1810:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f1810
	if (!cr6.eq) goto loc_838F1810;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838f1834
	goto loc_838F1834;
loc_838F1830:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_838F1834:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f17bc
	if (cr6.eq) goto loc_838F17BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F1844:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f1844
	if (!cr6.eq) goto loc_838F1844;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838f17c0
	goto loc_838F17C0;
loc_838F1864:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x838f1878
	if (!cr6.gt) goto loc_838F1878;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// b 0x838f187c
	goto loc_838F187C;
loc_838F1878:
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_838F187C:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x838f1f78
	ctx.lr = 0x838F1894;
	sub_838F1F78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x838f19b4
	if (cr6.eq) goto loc_838F19B4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// bl 0x831ce980
	ctx.lr = 0x838F18AC;
	sub_831CE980(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stbx r25,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r25.u8);
	// lwz r10,-20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ble cr6,0x838f191c
	if (!cr6.gt) goto loc_838F191C;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x838F18DC;
	sub_831CE980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stbx r25,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x831ce980
	ctx.lr = 0x838F1900;
	sub_831CE980(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stbx r25,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x838f192c
	goto loc_838F192C;
loc_838F191C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_838F192C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f1944
	if (cr6.eq) goto loc_838F1944;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ce980
	ctx.lr = 0x838F1944;
	sub_831CE980(ctx, base);
loc_838F1944:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r25,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r25.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x838f1970
	if (!cr6.gt) goto loc_838F1970;
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r11,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r11.u32);
	// b 0x838f1998
	goto loc_838F1998;
loc_838F1970:
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r11,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r11.u32);
	// b 0x838f1998
	goto loc_838F1998;
loc_838F1988:
	// addi r4,r21,-40
	ctx.r4.s64 = ctx.r21.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1998;
	sub_838E5FB0(ctx, base);
loc_838F1998:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// cmpw cr6,r22,r20
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r20.s32, xer);
	// blt cr6,0x838f1760
	if (cr6.lt) goto loc_838F1760;
loc_838F19A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_838F19B4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838e5fb0
	ctx.lr = 0x838F19C4;
	sub_838E5FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F19D0"))) PPC_WEAK_FUNC(sub_838F19D0);
PPC_FUNC_IMPL(__imp__sub_838F19D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1a74
	if (cr6.eq) goto loc_838F1A74;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x838f1a74
	if (cr6.gt) goto loc_838F1A74;
	// lbz r11,3(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1a74
	if (cr6.eq) goto loc_838F1A74;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x838f1a74
	if (cr6.gt) goto loc_838F1A74;
	// lbz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bgt cr6,0x838f1a74
	if (cr6.gt) goto loc_838F1A74;
	// lbz r11,5(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bgt cr6,0x838f1a74
	if (cr6.gt) goto loc_838F1A74;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bgt cr6,0x838f1a74
	if (cr6.gt) goto loc_838F1A74;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lhz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// ori r8,r11,512
	ctx.r8.u64 = ctx.r11.u64 | 512;
	// lhz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lhz r6,6(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// sth r10,140(r4)
	PPC_STORE_U16(ctx.r4.u32 + 140, ctx.r10.u16);
	// sth r9,142(r4)
	PPC_STORE_U16(ctx.r4.u32 + 142, ctx.r9.u16);
	// sth r7,144(r4)
	PPC_STORE_U16(ctx.r4.u32 + 144, ctx.r7.u16);
	// sth r6,146(r4)
	PPC_STORE_U16(ctx.r4.u32 + 146, ctx.r6.u16);
	// blr 
	return;
loc_838F1A74:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// b 0x838e5cc0
	sub_838E5CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F1A80"))) PPC_WEAK_FUNC(sub_838F1A80);
PPC_FUNC_IMPL(__imp__sub_838F1A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F1A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1bb4
	if (cr6.eq) goto loc_838F1BB4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1bb4
	if (cr6.eq) goto loc_838F1BB4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f1af4
	if (cr6.eq) goto loc_838F1AF4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x838e66e8
	ctx.lr = 0x838F1AC4;
	sub_838E66E8(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f2120
	ctx.lr = 0x838F1AD0;
	sub_838F2120(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// stw r3,1708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1708, ctx.r3.u32);
	// ble cr6,0x838f1af4
	if (!cr6.gt) goto loc_838F1AF4;
	// cmpwi cr6,r27,256
	cr6.compare<int32_t>(ctx.r27.s32, 256, xer);
	// bgt cr6,0x838f1af4
	if (cr6.gt) goto loc_838F1AF4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F1AF4;
	sub_831CE980(ctx, base);
loc_838F1AF4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f1b90
	if (cr6.eq) goto loc_838F1B90;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x838f1b68
	if (!cr6.lt) goto loc_838F1B68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f1b2c
	if (!cr6.eq) goto loc_838F1B2C;
	// lhz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838f1b58
	if (cr6.gt) goto loc_838F1B58;
loc_838F1B2C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x838f1b68
	if (!cr6.eq) goto loc_838F1B68;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838f1b58
	if (cr6.gt) goto loc_838F1B58;
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838f1b58
	if (cr6.gt) goto loc_838F1B58;
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x838f1b68
	if (!cr6.gt) goto loc_838F1B68;
loc_838F1B58:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// bl 0x838e5cc0
	ctx.lr = 0x838F1B68;
	sub_838E5CC0(ctx, base);
loc_838F1B68:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838F1B78:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x838f1b78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F1B78;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x838f1b90
	if (!cr6.eq) goto loc_838F1B90;
	// li r27,1
	ctx.r27.s64 = 1;
loc_838F1B90:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// sth r27,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r27.u16);
	// beq cr6,0x838f1bb4
	if (cr6.eq) goto loc_838F1BB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// ori r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 8192;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
loc_838F1BB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F1BBC"))) PPC_WEAK_FUNC(sub_838F1BBC);
PPC_FUNC_IMPL(__imp__sub_838F1BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F1BC0"))) PPC_WEAK_FUNC(sub_838F1BC0);
PPC_FUNC_IMPL(__imp__sub_838F1BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838F1BC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1d78
	if (cr6.eq) goto loc_838F1D78;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1d78
	if (cr6.eq) goto loc_838F1D78;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838f1d78
	if (!cr6.gt) goto loc_838F1D78;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f1d78
	if (cr6.eq) goto loc_838F1D78;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,248(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// lwz r4,244(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// bl 0x838f2060
	ctx.lr = 0x838F1C0C;
	sub_838F2060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x838f1c38
	if (!cr6.eq) goto loc_838F1C38;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1C30;
	sub_838E5FB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838F1C38:
	// lwz r4,244(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// bl 0x838f2288
	ctx.lr = 0x838F1C40;
	sub_838F2288(ctx, base);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,248(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// stw r30,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r30.u32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r9.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r25,r11,24064
	ctx.r25.s64 = ctx.r11.s64 + 24064;
loc_838F1C68:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1d30
	if (cr6.eq) goto loc_838F1D30;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1d30
	if (cr6.eq) goto loc_838F1D30;
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F1C90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f1c90
	if (!cr6.eq) goto loc_838F1C90;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F1CBC;
	sub_838F1F78(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1d60
	if (cr6.eq) goto loc_838F1D60;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x831ce980
	ctx.lr = 0x838F1CD4;
	sub_831CE980(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x838f2040
	ctx.lr = 0x838F1CE4;
	sub_838F2040(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1d4c
	if (cr6.eq) goto loc_838F1D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x831ce980
	ctx.lr = 0x838F1D10;
	sub_831CE980(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// ori r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 8192;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// stw r7,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r7.u32);
	// b 0x838f1d3c
	goto loc_838F1D3C;
loc_838F1D30:
	// addi r4,r25,-28
	ctx.r4.s64 = ctx.r25.s64 + -28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e5ef8
	ctx.lr = 0x838F1D3C;
	sub_838E5EF8(ctx, base);
loc_838F1D3C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x838f1c68
	if (!cr0.eq) goto loc_838F1C68;
	// b 0x838f1d60
	goto loc_838F1D60;
loc_838F1D4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x838f2288
	ctx.lr = 0x838F1D58;
	sub_838F2288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_838F1D60:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x838f1d78
	if (!cr6.gt) goto loc_838F1D78;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1D78;
	sub_838E5FB0(ctx, base);
loc_838F1D78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F1D80"))) PPC_WEAK_FUNC(sub_838F1D80);
PPC_FUNC_IMPL(__imp__sub_838F1D80) {
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
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838f1de8
	if (!cr6.eq) goto loc_838F1DE8;
	// lwz r10,1396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// addi r30,r11,24136
	ctx.r30.s64 = ctx.r11.s64 + 24136;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f1ddc
	if (!cr6.eq) goto loc_838F1DDC;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// bl 0x838e5ee0
	ctx.lr = 0x838F1DC8;
	sub_838E5EE0(ctx, base);
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838f1de8
	if (!cr6.eq) goto loc_838F1DE8;
loc_838F1DDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e88
	ctx.lr = 0x838F1DE8;
	sub_838E5E88(ctx, base);
loc_838F1DE8:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x838f1e0c
	if (cr6.eq) goto loc_838F1E0C;
loc_838F1DF8:
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x838f1df8
	if (!cr6.eq) goto loc_838F1DF8;
loc_838F1E0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_838F1E28"))) PPC_WEAK_FUNC(sub_838F1E28);
PPC_FUNC_IMPL(__imp__sub_838F1E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838F1E30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1f70
	if (cr6.eq) goto loc_838F1F70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1f70
	if (cr6.eq) goto loc_838F1F70;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838f1f70
	if (!cr6.gt) goto loc_838F1F70;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f1f70
	if (cr6.eq) goto loc_838F1F70;
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r5,240(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// lwz r4,236(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// bl 0x838f2060
	ctx.lr = 0x838F1E74;
	sub_838F2060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x838f1ea0
	if (!cr6.eq) goto loc_838F1EA0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,24204
	ctx.r11.s64 = ctx.r11.s64 + 24204;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1E98;
	sub_838E5FB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838F1EA0:
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x838f2288
	ctx.lr = 0x838F1EA8;
	sub_838F2288(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r31,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r31.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r25,r11,24204
	ctx.r25.s64 = ctx.r11.s64 + 24204;
	// lwz r10,232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r9.u32);
loc_838F1EDC:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// bl 0x838f1d80
	ctx.lr = 0x838F1EFC;
	sub_838F1D80(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838f1f18
	if (!cr6.eq) goto loc_838F1F18;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// b 0x838f1f54
	goto loc_838F1F54;
loc_838F1F18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F1F20;
	sub_838F1F78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f1f40
	if (!cr6.eq) goto loc_838F1F40;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e5fb0
	ctx.lr = 0x838F1F3C;
	sub_838E5FB0(ctx, base);
	// b 0x838f1f64
	goto loc_838F1F64;
loc_838F1F40:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x831ce980
	ctx.lr = 0x838F1F4C;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_838F1F54:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r11.u32);
loc_838F1F64:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bgt 0x838f1edc
	if (cr0.gt) goto loc_838F1EDC;
loc_838F1F70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F1F78"))) PPC_WEAK_FUNC(sub_838F1F78);
PPC_FUNC_IMPL(__imp__sub_838F1F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f1fb0
	if (cr6.eq) goto loc_838F1FB0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f1fb0
	if (cr6.gt) goto loc_838F1FB0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f1fa8
	if (cr6.eq) goto loc_838F1FA8;
	// lwz r11,1876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f1fa8
	if (cr6.eq) goto loc_838F1FA8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_838F1FA8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831d2bf8
	sub_831D2BF8(ctx, base);
	return;
loc_838F1FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F1FB8"))) PPC_WEAK_FUNC(sub_838F1FB8);
PPC_FUNC_IMPL(__imp__sub_838F1FB8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r5,0
	// divwu r10,r11,r5
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r5.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838f202c
	if (cr6.gt) goto loc_838F202C;
	// mullw. r4,r4,r5
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x838f202c
	if (cr0.eq) goto loc_838F202C;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f202c
	if (cr6.gt) goto loc_838F202C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f2014
	if (cr6.eq) goto loc_838F2014;
	// lwz r11,1876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2014
	if (cr6.eq) goto loc_838F2014;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838F2004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838F2014:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x838F201C;
	sub_831D2BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838F202C:
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

__attribute__((alias("__imp__sub_838F2040"))) PPC_WEAK_FUNC(sub_838F2040);
PPC_FUNC_IMPL(__imp__sub_838F2040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x838f2054
	if (!cr6.gt) goto loc_838F2054;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f2054
	if (cr6.eq) goto loc_838F2054;
	// b 0x838f1fb8
	sub_838F1FB8(ctx, base);
	return;
loc_838F2054:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,24604
	ctx.r4.s64 = ctx.r11.s64 + 24604;
	// b 0x838e5e88
	sub_838E5E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2060"))) PPC_WEAK_FUNC(sub_838F2060);
PPC_FUNC_IMPL(__imp__sub_838F2060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F2068;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838f2110
	if (!cr6.gt) goto loc_838F2110;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838f2110
	if (cr6.eq) goto loc_838F2110;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x838f2110
	if (cr6.lt) goto loc_838F2110;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838f20a4
	if (!cr6.eq) goto loc_838F20A4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x838f2110
	if (cr6.gt) goto loc_838F2110;
loc_838F20A4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bgt cr6,0x838f2104
	if (cr6.gt) goto loc_838F2104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x838f1fb8
	ctx.lr = 0x838F20C4;
	sub_838F1FB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f2104
	if (cr6.eq) goto loc_838F2104;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x838f20e4
	if (!cr6.gt) goto loc_838F20E4;
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F20E4;
	sub_831CE980(ctx, base);
loc_838F20E4:
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r28,r29
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x838F20F8;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F2104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F2110:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,24632
	ctx.r4.s64 = ctx.r11.s64 + 24632;
	// bl 0x838e5e88
	ctx.lr = 0x838F211C;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F211C"))) PPC_WEAK_FUNC(sub_838F211C);
PPC_FUNC_IMPL(__imp__sub_838F211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F2120"))) PPC_WEAK_FUNC(sub_838F2120);
PPC_FUNC_IMPL(__imp__sub_838F2120) {
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
	// bne cr6,0x838f2150
	if (!cr6.eq) goto loc_838F2150;
loc_838F213C:
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
loc_838F2150:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f2190
	if (cr6.eq) goto loc_838F2190;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f2190
	if (cr6.gt) goto loc_838F2190;
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2180
	if (cr6.eq) goto loc_838F2180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838F217C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838f2188
	goto loc_838F2188;
loc_838F2180:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x838F2188;
	sub_831D2BF8(ctx, base);
loc_838F2188:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f213c
	if (!cr6.eq) goto loc_838F213C;
loc_838F2190:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24664
	ctx.r4.s64 = ctx.r11.s64 + 24664;
	// bl 0x838e5e88
	ctx.lr = 0x838F21A0;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F21A0"))) PPC_WEAK_FUNC(sub_838F21A0);
PPC_FUNC_IMPL(__imp__sub_838F21A0) {
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
	// beq cr6,0x838f2208
	if (cr6.eq) goto loc_838F2208;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f21f8
	if (cr6.eq) goto loc_838F21F8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f21f8
	if (cr6.gt) goto loc_838F21F8;
	// lwz r11,1876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f21e8
	if (cr6.eq) goto loc_838F21E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838F21E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838f21f0
	goto loc_838F21F0;
loc_838F21E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x838F21F0;
	sub_831D2BF8(ctx, base);
loc_838F21F0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f220c
	if (!cr6.eq) goto loc_838F220C;
loc_838F21F8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24696
	ctx.r4.s64 = ctx.r11.s64 + 24696;
	// bl 0x838e5cc0
	ctx.lr = 0x838F2208;
	sub_838E5CC0(ctx, base);
loc_838F2208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838F220C:
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

__attribute__((alias("__imp__sub_838F2220"))) PPC_WEAK_FUNC(sub_838F2220);
PPC_FUNC_IMPL(__imp__sub_838F2220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,1872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1872, ctx.r4.u32);
	// stw r5,1876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1876, ctx.r5.u32);
	// stw r6,1880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1880, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F2238"))) PPC_WEAK_FUNC(sub_838F2238);
PPC_FUNC_IMPL(__imp__sub_838F2238) {
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
	// bl 0x838f2120
	ctx.lr = 0x838F2254;
	sub_838F2120(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f2270
	if (cr6.eq) goto loc_838F2270;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x838F226C;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838F2270:
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

__attribute__((alias("__imp__sub_838F2288"))) PPC_WEAK_FUNC(sub_838F2288);
PPC_FUNC_IMPL(__imp__sub_838F2288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1880);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f22ac
	if (cr6.eq) goto loc_838F22AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_838F22AC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831cf100
	sub_831CF100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F22B4"))) PPC_WEAK_FUNC(sub_838F22B4);
PPC_FUNC_IMPL(__imp__sub_838F22B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F22B8"))) PPC_WEAK_FUNC(sub_838F22B8);
PPC_FUNC_IMPL(__imp__sub_838F22B8) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f2324
	if (cr6.eq) goto loc_838F2324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,2064
	ctx.r5.s64 = 2064;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F22E4;
	sub_831CE980(ctx, base);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x838F22F4;
	sub_831CDCF0(ctx, base);
	// lwz r11,1960(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2314
	if (cr6.eq) goto loc_838F2314;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x838F2310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838f231c
	goto loc_838F231C;
loc_838F2314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf100
	ctx.lr = 0x838F231C;
	sub_831CF100(ctx, base);
loc_838F231C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e5c00
	ctx.lr = 0x838F2324;
	sub_838E5C00(ctx, base);
loc_838F2324:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F2338"))) PPC_WEAK_FUNC(sub_838F2338);
PPC_FUNC_IMPL(__imp__sub_838F2338) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F2358"))) PPC_WEAK_FUNC(sub_838F2358);
PPC_FUNC_IMPL(__imp__sub_838F2358) {
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
	// li r9,18
	ctx.r9.s64 = 18;
	// lbz r11,1621(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1621);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r8,137
	ctx.r8.s64 = 137;
	// li r7,80
	ctx.r7.s64 = 80;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// li r6,78
	ctx.r6.s64 = 78;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// li r5,71
	ctx.r5.s64 = 71;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// li r4,13
	ctx.r4.s64 = 13;
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// li r3,26
	ctx.r3.s64 = 26;
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r3,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r3.u8);
	// subfic r5,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r5.s64 = 8 - ctx.r11.s64;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F23C8;
	sub_838E9830(ctx, base);
	// lbz r11,1621(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1621);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x838f23e0
	if (!cr6.lt) goto loc_838F23E0;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_838F23E0:
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

__attribute__((alias("__imp__sub_838F23F4"))) PPC_WEAK_FUNC(sub_838F23F4);
PPC_FUNC_IMPL(__imp__sub_838F23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F23F8"))) PPC_WEAK_FUNC(sub_838F23F8);
PPC_FUNC_IMPL(__imp__sub_838F23F8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f248c
	if (cr6.eq) goto loc_838F248C;
	// rlwinm r11,r5,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// rlwinm r10,r5,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// rlwinm r5,r4,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rlwinm r6,r4,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rlwinm r4,r4,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// li r7,34
	ctx.r7.s64 = 34;
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9830
	ctx.lr = 0x838F2468;
	sub_838E9830(ctx, base);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6368
	ctx.lr = 0x838F2474;
	sub_838E6368(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F2484;
	sub_838E63A8(ctx, base);
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
loc_838F248C:
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

__attribute__((alias("__imp__sub_838F24A4"))) PPC_WEAK_FUNC(sub_838F24A4);
PPC_FUNC_IMPL(__imp__sub_838F24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F24A8"))) PPC_WEAK_FUNC(sub_838F24A8);
PPC_FUNC_IMPL(__imp__sub_838F24A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f24f0
	if (cr6.eq) goto loc_838F24F0;
	// lwz r11,1592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1592);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r10.u32);
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F24F0;
	sub_838E9830(ctx, base);
loc_838F24F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F2500"))) PPC_WEAK_FUNC(sub_838F2500);
PPC_FUNC_IMPL(__imp__sub_838F2500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F2508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f257c
	if (cr6.eq) goto loc_838F257C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// ble cr6,0x838f253c
	if (!cr6.gt) goto loc_838F253C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,24712
	ctx.r4.s64 = ctx.r11.s64 + 24712;
	// bl 0x838e5e88
	ctx.lr = 0x838F253C;
	sub_838E5E88(ctx, base);
loc_838F253C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F2544;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f2574
	if (cr6.eq) goto loc_838F2574;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f2574
	if (cr6.eq) goto loc_838F2574;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F2564;
	sub_838E9830(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F2574;
	sub_838E63A8(ctx, base);
loc_838F2574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F257C;
	sub_838F24A8(ctx, base);
loc_838F257C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2584"))) PPC_WEAK_FUNC(sub_838F2584);
PPC_FUNC_IMPL(__imp__sub_838F2584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F2588"))) PPC_WEAK_FUNC(sub_838F2588);
PPC_FUNC_IMPL(__imp__sub_838F2588) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 | ctx.r7.u64;
	// b 0x838f2500
	sub_838F2500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F25B4"))) PPC_WEAK_FUNC(sub_838F25B4);
PPC_FUNC_IMPL(__imp__sub_838F25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F25B8"))) PPC_WEAK_FUNC(sub_838F25B8);
PPC_FUNC_IMPL(__imp__sub_838F25B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F25C0;
	__savegprlr_29(ctx, base);
	// lwz r11,1552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// lwz r30,1540(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// bge cr6,0x838f26f8
	if (!cr6.lt) goto loc_838F26F8;
	// cmplwi cr6,r30,32768
	cr6.compare<uint32_t>(ctx.r30.u32, 32768, xer);
	// bge cr6,0x838f26f8
	if (!cr6.lt) goto loc_838F26F8;
	// lbz r10,1612(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f26ec
	if (cr6.eq) goto loc_838F26EC;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r4,1536(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// lbz r31,1618(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1618);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838F2604:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838f2618
	if (!cr6.gt) goto loc_838F2618;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x838f261c
	goto loc_838F261C;
loc_838F2618:
	// li r10,3
	ctx.r10.s64 = 3;
loc_838F261C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838f2630
	if (!cr6.gt) goto loc_838F2630;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x838f2634
	goto loc_838F2634;
loc_838F2630:
	// li r9,3
	ctx.r9.s64 = 3;
loc_838F2634:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r29,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 1;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// subfic r29,r29,3
	xer.ca = ctx.r29.u32 <= 3;
	ctx.r29.s64 = 3 - ctx.r29.s64;
	// slw r8,r8,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x838f26dc
	if (cr0.eq) goto loc_838F26DC;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x838f2678
	if (cr6.lt) goto loc_838F2678;
	// rlwinm r9,r31,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// b 0x838f2684
	goto loc_838F2684;
loc_838F2678:
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F2684:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// srawi r9,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// bgt cr6,0x838f2698
	if (cr6.gt) goto loc_838F2698;
	// li r9,3
	ctx.r9.s64 = 3;
	// ble cr6,0x838f26a0
	if (!cr6.gt) goto loc_838F26A0;
loc_838F2698:
	// srawi r10,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// b 0x838f26a4
	goto loc_838F26A4;
loc_838F26A0:
	// li r10,3
	ctx.r10.s64 = 3;
loc_838F26A4:
	// srawi r29,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// subfic r29,r29,3
	xer.ca = ctx.r29.u32 <= 3;
	ctx.r29.s64 = 3 - ctx.r29.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_838F26DC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// bdnz 0x838f2604
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F2604;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F26EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F26F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2700"))) PPC_WEAK_FUNC(sub_838F2700);
PPC_FUNC_IMPL(__imp__sub_838F2700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,16384
	cr6.compare<uint32_t>(ctx.r4.u32, 16384, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,112
	cr6.compare<uint32_t>(ctx.r10.u32, 112, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_838F273C:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x838f2750
	if (cr0.eq) goto loc_838F2750;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x838f273c
	if (!cr6.gt) goto loc_838F273C;
loc_838F2750:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// ori r7,r9,4229
	ctx.r7.u64 = ctx.r9.u64 | 4229;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r9,r11,r7
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r5,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// stb r5,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F27A4"))) PPC_WEAK_FUNC(sub_838F27A4);
PPC_FUNC_IMPL(__imp__sub_838F27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F27A8"))) PPC_WEAK_FUNC(sub_838F27A8);
PPC_FUNC_IMPL(__imp__sub_838F27A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838F27B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lis r10,18756
	ctx.r10.s64 = 1229193216;
	// addi r23,r11,24800
	ctx.r23.s64 = ctx.r11.s64 + 24800;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// ori r30,r10,16724
	ctx.r30.u64 = ctx.r10.u64 | 16724;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2870
	if (cr6.eq) goto loc_838F2870;
	// lbz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1408);
	// rlwinm r5,r4,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// lbz r6,1410(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1410);
	// rlwinm r7,r4,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// lbz r8,1409(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1409);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r4,r4,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// li r11,58
	ctx.r11.s64 = 58;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// addi r6,r23,-60
	ctx.r6.s64 = ctx.r23.s64 + -60;
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stb r24,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r24.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// bl 0x838e57d8
	ctx.lr = 0x838F2840;
	sub_838E57D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F284C;
	sub_838E5CC0(ctx, base);
	// lwz r9,1408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bne cr6,0x838f286c
	if (!cr6.eq) goto loc_838F286C;
	// addi r11,r23,-44
	ctx.r11.s64 = ctx.r23.s64 + -44;
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F286C:
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
loc_838F2870:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r28,1476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lwz r27,1480(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// lwz r30,1484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// lwz r26,1488(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bne cr6,0x838f28b8
	if (!cr6.eq) goto loc_838F28B8;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f28a4
	if (cr6.eq) goto loc_838F28A4;
	// lwz r29,1492(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// b 0x838f28cc
	goto loc_838F28CC;
loc_838F28A4:
	// lbz r11,1614(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1614);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x838f28cc
	goto loc_838F28CC;
loc_838F28B8:
	// lwz r28,1496(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// lwz r27,1500(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lwz r30,1504(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r26,1508(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r29,1512(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
loc_838F28CC:
	// cmplwi cr6,r25,16384
	cr6.compare<uint32_t>(ctx.r25.u32, 16384, xer);
	// bgt cr6,0x838f28fc
	if (cr6.gt) goto loc_838F28FC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r25,262
	ctx.r10.s64 = ctx.r25.s64 + 262;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f28fc
	if (cr6.gt) goto loc_838F28FC;
loc_838F28EC:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f28ec
	if (!cr6.gt) goto loc_838F28EC;
loc_838F28FC:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f2970
	if (cr6.eq) goto loc_838F2970;
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x838f2948
	if (!cr6.eq) goto loc_838F2948;
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x838f2948
	if (!cr6.eq) goto loc_838F2948;
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x838f2948
	if (!cr6.eq) goto loc_838F2948;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x838f2948
	if (!cr6.eq) goto loc_838F2948;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x838f2970
	if (cr6.eq) goto loc_838F2970;
loc_838F2948:
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x83301278
	ctx.lr = 0x838F2950;
	sub_83301278(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f2964
	if (cr6.eq) goto loc_838F2964;
	// addi r4,r23,-28
	ctx.r4.s64 = ctx.r23.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F2964;
	sub_838E5CC0(ctx, base);
loc_838F2964:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
loc_838F2970:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r22,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r22.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r22,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r22.u32);
	// stw r22,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r22.u32);
	// stw r22,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r22.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f29b0
	if (cr6.eq) goto loc_838F29B0;
	// bl 0x83302a38
	ctx.lr = 0x838F2998;
	sub_83302A38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f29f4
	if (!cr6.eq) goto loc_838F29F4;
	// stw r24,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F29B0:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r10,56
	ctx.r10.s64 = 56;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83303768
	ctx.lr = 0x838F29D0;
	sub_83303768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f29f4
	if (!cr6.eq) goto loc_838F29F4;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// stw r24,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r24.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F29F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F2A00;
	sub_838E6C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2A0C"))) PPC_WEAK_FUNC(sub_838F2A0C);
PPC_FUNC_IMPL(__imp__sub_838F2A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F2A10"))) PPC_WEAK_FUNC(sub_838F2A10);
PPC_FUNC_IMPL(__imp__sub_838F2A10) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2a58
	if (cr6.eq) goto loc_838F2A58;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_838F2A3C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F2A4C;
	sub_838F2288(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838f2a3c
	if (!cr6.eq) goto loc_838F2A3C;
loc_838F2A58:
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

__attribute__((alias("__imp__sub_838F2A70"))) PPC_WEAK_FUNC(sub_838F2A70);
PPC_FUNC_IMPL(__imp__sub_838F2A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x838F2A78;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x838f27a8
	ctx.lr = 0x838F2A90;
	sub_838F27A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f2be8
	if (!cr6.eq) goto loc_838F2BE8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,1024
	ctx.r28.s64 = 1024;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r19,r24,12
	ctx.r19.s64 = ctx.r24.s64 + 12;
	// stw r28,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r28.u32);
	// addi r25,r31,1412
	ctx.r25.s64 = ctx.r31.s64 + 1412;
	// stw r27,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r27.u32);
	// addi r26,r31,1468
	ctx.r26.s64 = ctx.r31.s64 + 1468;
	// stw r19,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r19.u32);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
	// li r23,4
	ctx.r23.s64 = 4;
loc_838F2AD4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// bge cr6,0x838f2ae4
	if (!cr6.lt) goto loc_838F2AE4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_838F2AE4:
	// lwz r10,1428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f2b48
	if (!cr6.eq) goto loc_838F2B48;
	// add r11,r28,r20
	ctx.r11.u64 = ctx.r28.u64 + ctx.r20.u64;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bgt cr6,0x838f2b78
	if (cr6.gt) goto loc_838F2B78;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f2b30
	if (!cr6.eq) goto loc_838F2B30;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x838f1f78
	ctx.lr = 0x838F2B20;
	sub_838F1F78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f2b78
	if (cr6.eq) goto loc_838F2B78;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_838F2B30:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_838F2B48:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 & ctx.r23.u64;
	// bl 0x83302b10
	ctx.lr = 0x838F2B5C;
	sub_83302B10(ctx, base);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r27.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f2ad4
	if (cr6.eq) goto loc_838F2AD4;
	// b 0x838f2b7c
	goto loc_838F2B7C;
loc_838F2B78:
	// li r30,-4
	ctx.r30.s64 = -4;
loc_838F2B7C:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r27,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r27.u32);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// blt cr6,0x838f2bac
	if (cr6.lt) goto loc_838F2BAC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r30,-4
	ctx.r30.s64 = -4;
	// addi r10,r11,24808
	ctx.r10.s64 = ctx.r11.s64 + 24808;
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// b 0x838f2bb8
	goto loc_838F2BB8;
loc_838F2BAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F2BB8;
	sub_838E6C50(ctx, base);
loc_838F2BB8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r27,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r27.u32);
	// bne cr6,0x838f2be4
	if (!cr6.eq) goto loc_838F2BE4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x838f2be4
	if (!cr6.eq) goto loc_838F2BE4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x838f2700
	ctx.lr = 0x838F2BD8;
	sub_838F2700(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F2BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_838F2BE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2BF0"))) PPC_WEAK_FUNC(sub_838F2BF0);
PPC_FUNC_IMPL(__imp__sub_838F2BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F2BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,1468(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
	// li r31,1024
	ctx.r31.s64 = 1024;
loc_838F2C10:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x838f2c1c
	if (!cr6.gt) goto loc_838F2C1C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_838F2C1C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f2c4c
	if (cr6.eq) goto loc_838F2C4C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f2c4c
	if (cr6.eq) goto loc_838F2C4C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F2C3C;
	sub_838E9830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F2C4C;
	sub_838E63A8(ctx, base);
loc_838F2C4C:
	// subf. r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x838f2c6c
	if (cr0.eq) goto loc_838F2C6C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f2c6c
	if (cr6.eq) goto loc_838F2C6C;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// lwz r31,1472(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x838f2c10
	goto loc_838F2C10;
loc_838F2C6C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f2c84
	if (cr6.eq) goto loc_838F2C84;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,24836
	ctx.r4.s64 = ctx.r11.s64 + 24836;
	// bl 0x838e5e88
	ctx.lr = 0x838F2C84;
	sub_838E5E88(ctx, base);
loc_838F2C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2C8C"))) PPC_WEAK_FUNC(sub_838F2C8C);
PPC_FUNC_IMPL(__imp__sub_838F2C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F2C90"))) PPC_WEAK_FUNC(sub_838F2C90);
PPC_FUNC_IMPL(__imp__sub_838F2C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F2C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838f2cd0
	if (!cr6.eq) goto loc_838F2CD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F2CD0:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f2d80
	if (cr6.eq) goto loc_838F2D80;
	// li r7,32
	ctx.r7.s64 = 32;
loc_838F2CE0:
	// cmplwi cr6,r31,79
	cr6.compare<uint32_t>(ctx.r31.u32, 79, xer);
	// bge cr6,0x838f2d5c
	if (!cr6.lt) goto loc_838F2D5C;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// ble cr6,0x838f2d00
	if (!cr6.gt) goto loc_838F2D00;
	// cmplwi cr6,r10,126
	cr6.compare<uint32_t>(ctx.r10.u32, 126, xer);
	// ble cr6,0x838f2d08
	if (!cr6.gt) goto loc_838F2D08;
loc_838F2D00:
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x838f2d1c
	if (cr6.lt) goto loc_838F2D1C;
loc_838F2D08:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x838f2d4c
	goto loc_838F2D4C;
loc_838F2D1C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x838f2d40
	if (!cr6.eq) goto loc_838F2D40;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x838f2d4c
	if (cr6.eq) goto loc_838F2D4C;
	// b 0x838f2d48
	goto loc_838F2D48;
loc_838F2D40:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x838f2d4c
	if (!cr6.eq) goto loc_838F2D4C;
loc_838F2D48:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_838F2D4C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x838f2ce0
	if (!cr6.eq) goto loc_838F2CE0;
loc_838F2D5C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f2d80
	if (cr6.eq) goto loc_838F2D80;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x838f2d80
	if (cr6.eq) goto loc_838F2D80;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x838f2d80
	if (!cr6.eq) goto loc_838F2D80;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_838F2D80:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// bne cr6,0x838f2d98
	if (!cr6.eq) goto loc_838F2D98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F2D98:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f2dc4
	if (cr6.eq) goto loc_838F2DC4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,24904
	ctx.r11.s64 = ctx.r11.s64 + 24904;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x838e5cc0
	ctx.lr = 0x838F2DB8;
	sub_838E5CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F2DC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x838f2e00
	if (cr6.eq) goto loc_838F2E00;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e5998
	ctx.lr = 0x838F2DD8;
	sub_838E5998(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e59c8
	ctx.lr = 0x838F2DEC;
	sub_838E59C8(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,24904
	ctx.r5.s64 = ctx.r11.s64 + 24904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e5d28
	ctx.lr = 0x838F2E00;
	sub_838E5D28(ctx, base);
loc_838F2E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F2E0C"))) PPC_WEAK_FUNC(sub_838F2E0C);
PPC_FUNC_IMPL(__imp__sub_838F2E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F2E10"))) PPC_WEAK_FUNC(sub_838F2E10);
PPC_FUNC_IMPL(__imp__sub_838F2E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838F2E18;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// bgt cr6,0x838f317c
	if (cr6.gt) goto loc_838F317C;
	// li r22,1
	ctx.r22.s64 = 1;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838f317c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F317C;
	// bdzf 4*cr6+eq,0x838f2ee8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F2EE8;
	// bdzf 4*cr6+eq,0x838f2f14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F2F14;
	// bdzf 4*cr6+eq,0x838f2f58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F2F58;
	// bdzf 4*cr6+eq,0x838f317c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F317C;
	// bne cr6,0x838f2f84
	if (!cr6.eq) goto loc_838F2F84;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x838f2ed4
	if (cr6.gt) goto loc_838F2ED4;
	// lis r12,-31857
	ctx.r12.s64 = -2087780352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11916
	ctx.r12.s64 = ctx.r12.s64 + 11916;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_838F2ECC;
	case 1:
		goto loc_838F2ECC;
	case 2:
		goto loc_838F2ED4;
	case 3:
		goto loc_838F2ECC;
	case 4:
		goto loc_838F2ED4;
	case 5:
		goto loc_838F2ED4;
	case 6:
		goto loc_838F2ED4;
	case 7:
		goto loc_838F2ECC;
	case 8:
		goto loc_838F2ED4;
	case 9:
		goto loc_838F2ED4;
	case 10:
		goto loc_838F2ED4;
	case 11:
		goto loc_838F2ED4;
	case 12:
		goto loc_838F2ED4;
	case 13:
		goto loc_838F2ED4;
	case 14:
		goto loc_838F2ED4;
	case 15:
		goto loc_838F2ECC;
	default:
		return;
	}
	// lwz r28,11980(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11980);
	// lwz r28,11980(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11980);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11980(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11980);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11980(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11980);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11988(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11988);
	// lwz r28,11980(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11980);
loc_838F2ECC:
	// stb r22,1619(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1619, ctx.r22.u8);
	// b 0x838f2fb0
	goto loc_838F2FB0;
loc_838F2ED4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-296
	ctx.r4.s64 = ctx.r11.s64 + -296;
	// bl 0x838e5e88
	ctx.lr = 0x838F2EE8;
	sub_838E5E88(ctx, base);
loc_838F2EE8:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x838f2f0c
	if (cr6.eq) goto loc_838F2F0C;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, xer);
	// beq cr6,0x838f2f0c
	if (cr6.eq) goto loc_838F2F0C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x838e5e88
	ctx.lr = 0x838F2F0C;
	sub_838E5E88(ctx, base);
loc_838F2F0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x838f2fac
	goto loc_838F2FAC;
loc_838F2F14:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x838f2f44
	if (cr6.gt) goto loc_838F2F44;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838f2ecc
	if (cr6.eq) goto loc_838F2ECC;
	// bdz 0x838f2ecc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838F2ECC;
	// bdz 0x838f2f44
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838F2F44;
	// bdz 0x838f2ecc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838F2ECC;
	// bdz 0x838f2f44
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838F2F44;
	// bdz 0x838f2f44
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838F2F44;
	// bdnz 0x838f2ecc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F2ECC;
loc_838F2F44:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-224
	ctx.r4.s64 = ctx.r11.s64 + -224;
	// bl 0x838e5e88
	ctx.lr = 0x838F2F58;
	sub_838E5E88(ctx, base);
loc_838F2F58:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x838f2f7c
	if (cr6.eq) goto loc_838F2F7C;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, xer);
	// beq cr6,0x838f2f7c
	if (cr6.eq) goto loc_838F2F7C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x838e5e88
	ctx.lr = 0x838F2F7C;
	sub_838E5E88(ctx, base);
loc_838F2F7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x838f2fac
	goto loc_838F2FAC;
loc_838F2F84:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x838f2fa8
	if (cr6.eq) goto loc_838F2FA8;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, xer);
	// beq cr6,0x838f2fa8
	if (cr6.eq) goto loc_838F2FA8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x838e5e88
	ctx.lr = 0x838F2FA8;
	sub_838E5E88(ctx, base);
loc_838F2FA8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_838F2FAC:
	// stb r11,1619(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1619, ctx.r11.u8);
loc_838F2FB0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r11,25236
	ctx.r27.s64 = ctx.r11.s64 + 25236;
	// beq cr6,0x838f2fd0
	if (cr6.eq) goto loc_838F2FD0;
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F2FCC;
	sub_838E5CC0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_838F2FD0:
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f3008
	if (cr6.eq) goto loc_838F3008;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f3008
	if (!cr6.eq) goto loc_838F3008;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// beq cr6,0x838f3000
	if (cr6.eq) goto loc_838F3000;
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(ctx.r25.s32, 6, xer);
	// bne cr6,0x838f3008
	if (!cr6.eq) goto loc_838F3008;
loc_838F3000:
	// cmpwi cr6,r23,64
	cr6.compare<int32_t>(ctx.r23.s32, 64, xer);
	// beq cr6,0x838f3020
	if (cr6.eq) goto loc_838F3020;
loc_838F3008:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x838f3020
	if (cr6.eq) goto loc_838F3020;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F301C;
	sub_838E5CC0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
loc_838F3020:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x838f3040
	if (cr6.eq) goto loc_838F3040;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x838f3040
	if (cr6.eq) goto loc_838F3040;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F303C;
	sub_838E5CC0(ctx, base);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_838F3040:
	// lbz r9,1619(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1619);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// mullw r6,r9,r29
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// stb r10,1616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1616, ctx.r10.u8);
	// stb r8,1615(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1615, ctx.r8.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r24,24
	ctx.r7.u64 = ctx.r24.u32 & 0xFF;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// stb r11,1618(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1618, ctx.r11.u8);
	// clrlwi r29,r26,24
	ctx.r29.u64 = ctx.r26.u32 & 0xFF;
	// stb r7,1612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1612, ctx.r7.u8);
	// stb r6,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r6.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// stb r29,1900(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1900, ctx.r29.u8);
	// blt cr6,0x838f3098
	if (cr6.lt) goto loc_838F3098;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// b 0x838f30a4
	goto loc_838F30A4;
loc_838F3098:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F30A4:
	// rlwinm r5,r30,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// rlwinm r3,r30,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// rlwinm r4,r30,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// rlwinm r5,r28,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFF;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// rlwinm r3,r28,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// stb r10,1617(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1617, ctx.r10.u8);
	// rlwinm r30,r28,16,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stb r3,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r3.u8);
	// lis r4,18760
	ctx.r4.s64 = 1229455360;
	// stb r9,1620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1620, ctx.r9.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// ori r4,r4,17490
	ctx.r4.u64 = ctx.r4.u64 | 17490;
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// stb r6,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// bl 0x838f23f8
	ctx.lr = 0x838F3118;
	sub_838F23F8(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3128;
	sub_838E9830(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3138;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3140;
	sub_838F24A8(ctx, base);
	// lbz r8,1614(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1614);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f3170
	if (!cr6.eq) goto loc_838F3170;
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x838f3168
	if (cr6.eq) goto loc_838F3168;
	// lbz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// li r11,248
	ctx.r11.s64 = 248;
	// bge cr6,0x838f316c
	if (!cr6.lt) goto loc_838F316C;
loc_838F3168:
	// li r11,8
	ctx.r11.s64 = 8;
loc_838F316C:
	// stb r11,1614(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1614, ctx.r11.u8);
loc_838F3170:
	// stw r22,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F317C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x838e5e88
	ctx.lr = 0x838F3190;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F3190"))) PPC_WEAK_FUNC(sub_838F3190);
PPC_FUNC_IMPL(__imp__sub_838F3190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F3198;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,1615(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1615);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f31c4
	if (!cr6.eq) goto loc_838F31C4;
	// lbz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1616);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x838f31c8
	goto loc_838F31C8;
loc_838F31C4:
	// li r11,256
	ctx.r11.s64 = 256;
loc_838F31C8:
	// lwz r9,1864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f31e0
	if (!cr6.eq) goto loc_838F31E0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f31e8
	if (cr6.eq) goto loc_838F31E8;
loc_838F31E0:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f3214
	if (!cr6.gt) goto loc_838F3214;
loc_838F31E8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// bne cr6,0x838f3204
	if (!cr6.eq) goto loc_838F3204;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x838e5e88
	ctx.lr = 0x838F3204;
	sub_838E5E88(ctx, base);
loc_838F3204:
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x838e5cc0
	ctx.lr = 0x838F320C;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F3214:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f3238
	if (!cr6.eq) goto loc_838F3238;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25344
	ctx.r4.s64 = ctx.r11.s64 + 25344;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3230;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F3238:
	// sth r29,1600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1600, ctx.r29.u16);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,20556
	ctx.r4.s64 = 1347158016;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F3254;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f32a0
	if (cr6.eq) goto loc_838F32A0;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_838F3260:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzu r9,3(r30)
	ea = 3 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F3288;
	sub_838E9830(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3298;
	sub_838E63A8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x838f3260
	if (!cr0.eq) goto loc_838F3260;
loc_838F32A0:
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r10.u32);
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F32D8;
	sub_838E9830(ctx, base);
	// lwz r5,1396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// stw r4,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F32EC"))) PPC_WEAK_FUNC(sub_838F32EC);
PPC_FUNC_IMPL(__imp__sub_838F32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F32F0"))) PPC_WEAK_FUNC(sub_838F32F0);
PPC_FUNC_IMPL(__imp__sub_838F32F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x838F32F8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,18756
	ctx.r11.s64 = 1229193216;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r20,r11,16724
	ctx.r20.u64 = ctx.r11.u64 | 16724;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r10,r20
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, xer);
	// beq cr6,0x838f338c
	if (cr6.eq) goto loc_838F338C;
	// lwz r4,1468(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838f3348
	if (!cr6.eq) goto loc_838F3348;
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x838f2120
	ctx.lr = 0x838F333C;
	sub_838F2120(ctx, base);
	// stw r3,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r3.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// b 0x838f334c
	goto loc_838F334C;
loc_838F3348:
	// bl 0x838f2a10
	ctx.lr = 0x838F334C;
	sub_838F2A10(ctx, base);
loc_838F334C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f25b8
	ctx.lr = 0x838F3354;
	sub_838F25B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f27a8
	ctx.lr = 0x838F3364;
	sub_838F27A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f3378
	if (cr6.eq) goto loc_838F3378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F3378;
	sub_838E5E88(ctx, base);
loc_838F3378:
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
	// stw r10,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
loc_838F338C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// addi r26,r31,1412
	ctx.r26.s64 = ctx.r31.s64 + 1412;
	// stw r25,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r25.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r21,r11,65535
	ctx.r21.u64 = ctx.r11.u64 | 65535;
	// li r22,130
	ctx.r22.s64 = 130;
loc_838F33A8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// bge cr6,0x838f33b8
	if (!cr6.lt) goto loc_838F33B8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F33B8:
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// subf r30,r11,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 & ctx.r24.u64;
	// bl 0x83302b10
	ctx.lr = 0x838F33D4;
	sub_83302B10(ctx, base);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r8,1428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r25.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f34d0
	if (!cr6.eq) goto loc_838F34D0;
	// lwz r10,1396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r30,1472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f342c
	if (!cr6.eq) goto loc_838F342C;
	// lbz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f342c
	if (!cr6.eq) goto loc_838F342C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f25b8
	ctx.lr = 0x838F3420;
	sub_838F25B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f2700
	ctx.lr = 0x838F342C;
	sub_838F2700(ctx, base);
loc_838F342C:
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x838f34fc
	if (cr6.gt) goto loc_838F34FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F3444;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f3474
	if (cr6.eq) goto loc_838F3474;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f3474
	if (cr6.eq) goto loc_838F3474;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3464;
	sub_838E9830(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3474;
	sub_838E63A8(ctx, base);
loc_838F3474:
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r22,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r22.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F34A8;
	sub_838E9830(ctx, base);
	// lwz r6,1396(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// stw r29,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r29.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ori r5,r6,4
	ctx.r5.u64 = ctx.r6.u64 | 4;
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r5,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r5.u32);
	// bne cr6,0x838f3508
	if (!cr6.eq) goto loc_838F3508;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x838f33a8
	if (!cr6.eq) goto loc_838F33A8;
	// b 0x838f34d8
	goto loc_838F34D8;
loc_838F34D0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x838f3508
	if (!cr6.eq) goto loc_838F3508;
loc_838F34D8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x838f33a8
	if (!cr6.eq) goto loc_838F33A8;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, xer);
	// bne cr6,0x838f3588
	if (!cr6.eq) goto loc_838F3588;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24712
	ctx.r11.s64 = ctx.r11.s64 + 24712;
	// addi r4,r11,688
	ctx.r4.s64 = ctx.r11.s64 + 688;
	// bl 0x838e5e88
	ctx.lr = 0x838F34FC;
	sub_838E5E88(ctx, base);
loc_838F34FC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,24712
	ctx.r4.s64 = ctx.r11.s64 + 24712;
	// bl 0x838e5e88
	ctx.lr = 0x838F3508;
	sub_838E5E88(ctx, base);
loc_838F3508:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x838f3590
	if (!cr6.eq) goto loc_838F3590;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, xer);
	// bne cr6,0x838f3590
	if (!cr6.eq) goto loc_838F3590;
	// lwz r10,1396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r9,1472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r7,1428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// subf r29,r7,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r7.s64;
	// bne cr6,0x838f355c
	if (!cr6.eq) goto loc_838F355C;
	// lbz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f355c
	if (!cr6.eq) goto loc_838F355C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f25b8
	ctx.lr = 0x838F3550;
	sub_838F25B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2700
	ctx.lr = 0x838F355C;
	sub_838F2700(ctx, base);
loc_838F355C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2500
	ctx.lr = 0x838F3570;
	sub_838F2500(ctx, base);
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// stw r25,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r25.u32);
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r25,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r25.u32);
	// stw r25,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r25.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_838F3588:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838F3590:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F359C;
	sub_838E6C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F35A8;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F35A8"))) PPC_WEAK_FUNC(sub_838F35A8);
PPC_FUNC_IMPL(__imp__sub_838F35A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f35dc
	if (cr6.eq) goto loc_838F35DC;
	// lis r4,18757
	ctx.r4.s64 = 1229258752;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20036
	ctx.r4.u64 = ctx.r4.u64 | 20036;
	// bl 0x838f23f8
	ctx.lr = 0x838F35D4;
	sub_838F23F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F35DC;
	sub_838F24A8(ctx, base);
loc_838F35DC:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838F35FC"))) PPC_WEAK_FUNC(sub_838F35FC);
PPC_FUNC_IMPL(__imp__sub_838F35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F3600"))) PPC_WEAK_FUNC(sub_838F3600);
PPC_FUNC_IMPL(__imp__sub_838F3600) {
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
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f3670
	if (cr6.eq) goto loc_838F3670;
	// lis r4,26433
	ctx.r4.s64 = 1732313088;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,19777
	ctx.r4.u64 = ctx.r4.u64 | 19777;
	// bl 0x838f23f8
	ctx.lr = 0x838F3648;
	sub_838F23F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3658;
	sub_838E9830(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3668;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3670;
	sub_838F24A8(ctx, base);
loc_838F3670:
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

__attribute__((alias("__imp__sub_838F3684"))) PPC_WEAK_FUNC(sub_838F3684);
PPC_FUNC_IMPL(__imp__sub_838F3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F3688"))) PPC_WEAK_FUNC(sub_838F3688);
PPC_FUNC_IMPL(__imp__sub_838F3688) {
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
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x838f36b8
	if (cr6.lt) goto loc_838F36B8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,25436
	ctx.r4.s64 = ctx.r11.s64 + 25436;
	// bl 0x838e5cc0
	ctx.lr = 0x838F36B8;
	sub_838E5CC0(ctx, base);
loc_838F36B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// beq cr6,0x838f3700
	if (cr6.eq) goto loc_838F3700;
	// lis r4,29522
	ctx.r4.s64 = 1934753792;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,18242
	ctx.r4.u64 = ctx.r4.u64 | 18242;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F36D8;
	sub_838F23F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F36E8;
	sub_838E9830(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F36F8;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3700;
	sub_838F24A8(ctx, base);
loc_838F3700:
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

__attribute__((alias("__imp__sub_838F3718"))) PPC_WEAK_FUNC(sub_838F3718);
PPC_FUNC_IMPL(__imp__sub_838F3718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F3720;
	__savegprlr_29(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x838f3744
	if (!cr6.eq) goto loc_838F3744;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25620
	ctx.r11.s64 = ctx.r11.s64 + 25620;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x838e5e88
	ctx.lr = 0x838F3744;
	sub_838E5E88(ctx, base);
loc_838F3744:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,132
	cr6.compare<uint32_t>(ctx.r29.u32, 132, xer);
	// bge cr6,0x838f3788
	if (!cr6.lt) goto loc_838F3788;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25620
	ctx.r11.s64 = ctx.r11.s64 + 25620;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x838e5e88
	ctx.lr = 0x838F3788;
	sub_838E5E88(ctx, base);
loc_838F3788:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x838f37b4
	if (!cr6.gt) goto loc_838F37B4;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f37b4
	if (cr6.eq) goto loc_838F37B4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25620
	ctx.r11.s64 = ctx.r11.s64 + 25620;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x838e5e88
	ctx.lr = 0x838F37B4;
	sub_838E5E88(ctx, base);
loc_838F37B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2c90
	ctx.lr = 0x838F37C0;
	sub_838F2C90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f37d8
	if (!cr6.eq) goto loc_838F37D8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,25620
	ctx.r4.s64 = ctx.r11.s64 + 25620;
	// bl 0x838e5e88
	ctx.lr = 0x838F37D8;
	sub_838E5E88(ctx, base);
loc_838F37D8:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lis r4,26947
	ctx.r4.s64 = 1765998592;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// ori r4,r4,17232
	ctx.r4.u64 = ctx.r4.u64 | 17232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x838f2a70
	ctx.lr = 0x838F3810;
	sub_838F2A70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x838f3824
	if (cr6.eq) goto loc_838F3824;
	// lwz r4,1436(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F3824;
	sub_838E5E88(ctx, base);
loc_838F3824:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r4,26947
	ctx.r4.s64 = 1765998592;
	// ori r4,r4,17232
	ctx.r4.u64 = ctx.r4.u64 | 17232;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F3838;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f3868
	if (cr6.eq) goto loc_838F3868;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f3868
	if (cr6.eq) goto loc_838F3868;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3858;
	sub_838E9830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3868;
	sub_838E63A8(ctx, base);
loc_838F3868:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2bf0
	ctx.lr = 0x838F3874;
	sub_838F2BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F387C;
	sub_838F24A8(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F3884"))) PPC_WEAK_FUNC(sub_838F3884);
PPC_FUNC_IMPL(__imp__sub_838F3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F3888"))) PPC_WEAK_FUNC(sub_838F3888);
PPC_FUNC_IMPL(__imp__sub_838F3888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F3890;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r26,r4,4
	ctx.r26.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// li r27,6
	ctx.r27.s64 = 6;
	// beq cr6,0x838f38b4
	if (cr6.eq) goto loc_838F38B4;
	// li r27,10
	ctx.r27.s64 = 10;
loc_838F38B4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r28,r11,r27
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// bl 0x838f2c90
	ctx.lr = 0x838F38CC;
	sub_838F2C90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x838f38e8
	if (!cr6.eq) goto loc_838F38E8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,25644
	ctx.r4.s64 = ctx.r11.s64 + 25644;
	// bl 0x838e5e88
	ctx.lr = 0x838F38E8;
	sub_838E5E88(ctx, base);
loc_838F38E8:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lis r4,29520
	ctx.r4.s64 = 1934622720;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// ori r4,r4,19540
	ctx.r4.u64 = ctx.r4.u64 | 19540;
	// bl 0x838f23f8
	ctx.lr = 0x838F38FC;
	sub_838F23F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f3960
	if (cr6.eq) goto loc_838F3960;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f3930
	if (cr6.eq) goto loc_838F3930;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3920;
	sub_838E9830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3930;
	sub_838E63A8(ctx, base);
loc_838F3930:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f3960
	if (cr6.eq) goto loc_838F3960;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f3960
	if (cr6.eq) goto loc_838F3960;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3950;
	sub_838E9830(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3960;
	sub_838E63A8(ctx, base);
loc_838F3960:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x838f3a6c
	if (!cr6.lt) goto loc_838F3A6C;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_838F3984:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x838f39c4
	if (!cr6.eq) goto loc_838F39C4;
	// lhz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lhz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stb r5,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r5.u8);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r3,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r3.u8);
	// b 0x838f3a14
	goto loc_838F3A14;
loc_838F39C4:
	// lhz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lhz r8,-2(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// stb r4,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r4.u8);
	// stb r5,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r5.u8);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// stb r8,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
loc_838F3A14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f3a44
	if (cr6.eq) goto loc_838F3A44;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f3a44
	if (cr6.eq) goto loc_838F3A44;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3A34;
	sub_838E9830(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3A44;
	sub_838E63A8(ctx, base);
loc_838F3A44:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x838f3984
	if (cr6.lt) goto loc_838F3984;
loc_838F3A6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f3aac
	if (cr6.eq) goto loc_838F3AAC;
	// lwz r11,1592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,1956(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1956, ctx.r10.u32);
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F3AAC;
	sub_838E9830(ctx, base);
loc_838F3AAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F3AB4"))) PPC_WEAK_FUNC(sub_838F3AB4);
PPC_FUNC_IMPL(__imp__sub_838F3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F3AB8"))) PPC_WEAK_FUNC(sub_838F3AB8);
PPC_FUNC_IMPL(__imp__sub_838F3AB8) {
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
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838f3b64
	if (cr6.eq) goto loc_838F3B64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x838f3ae0
	if (cr6.eq) goto loc_838F3AE0;
	// lbz r11,1617(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1617);
loc_838F3AE0:
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838f3b44
	if (cr6.eq) goto loc_838F3B44;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838f3b44
	if (cr6.gt) goto loc_838F3B44;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f3b44
	if (cr6.eq) goto loc_838F3B44;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838f3b44
	if (cr6.gt) goto loc_838F3B44;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f3b44
	if (cr6.eq) goto loc_838F3B44;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838f3b44
	if (cr6.gt) goto loc_838F3B44;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// b 0x838f3b88
	goto loc_838F3B88;
loc_838F3B44:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25732
	ctx.r11.s64 = ctx.r11.s64 + 25732;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3B54;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838F3B64:
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f3bf8
	if (cr6.eq) goto loc_838F3BF8;
	// lbz r9,1617(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1617);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838f3bf8
	if (cr6.gt) goto loc_838F3BF8;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r6,1
	ctx.r6.s64 = 1;
loc_838F3B88:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838f3bbc
	if (cr6.eq) goto loc_838F3BBC;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f3bdc
	if (cr6.eq) goto loc_838F3BDC;
	// lbz r9,1617(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1617);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x838f3bdc
	if (cr6.gt) goto loc_838F3BDC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r10,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_838F3BBC:
	// lis r4,29506
	ctx.r4.s64 = 1933705216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,18772
	ctx.r4.u64 = ctx.r4.u64 | 18772;
	// bl 0x838f2500
	ctx.lr = 0x838F3BCC;
	sub_838F2500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838F3BDC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,25732
	ctx.r4.s64 = ctx.r11.s64 + 25732;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3BE8;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838F3BF8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25732
	ctx.r11.s64 = ctx.r11.s64 + 25732;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3C08;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F3C18"))) PPC_WEAK_FUNC(sub_838F3C18);
PPC_FUNC_IMPL(__imp__sub_838F3C18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C40;
	sub_838E6B80(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C4C;
	sub_838E6B80(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C58;
	sub_838E6B80(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C64;
	sub_838E6B80(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C70;
	sub_838E6B80(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C7C;
	sub_838E6B80(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C88;
	sub_838E6B80(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x838e6b80
	ctx.lr = 0x838F3C94;
	sub_838E6B80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f3cd8
	if (cr6.eq) goto loc_838F3CD8;
	// lis r4,25416
	ctx.r4.s64 = 1665662976;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,21069
	ctx.r4.u64 = ctx.r4.u64 | 21069;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F3CB0;
	sub_838F23F8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3CC0;
	sub_838E9830(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3CD0;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3CD8;
	sub_838F24A8(ctx, base);
loc_838F3CD8:
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

__attribute__((alias("__imp__sub_838F3CF0"))) PPC_WEAK_FUNC(sub_838F3CF0);
PPC_FUNC_IMPL(__imp__sub_838F3CF0) {
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
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x838f3d54
	if (!cr6.eq) goto loc_838F3D54;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x838f3d44
	if (!cr6.gt) goto loc_838F3D44;
	// lhz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1600);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// bgt cr6,0x838f3d44
	if (cr6.gt) goto loc_838F3D44;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,29778
	ctx.r4.s64 = 1951531008;
	// ori r4,r4,20051
	ctx.r4.u64 = ctx.r4.u64 | 20051;
	// bl 0x838f2500
	ctx.lr = 0x838F3D30;
	sub_838F2500(ctx, base);
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
loc_838F3D44:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25944
	ctx.r11.s64 = ctx.r11.s64 + 25944;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// b 0x838f3ea8
	goto loc_838F3EA8;
loc_838F3D54:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x838f3de0
	if (!cr6.eq) goto loc_838F3DE0;
	// lbz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x838f3d88
	if (cr6.lt) goto loc_838F3D88;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25944
	ctx.r11.s64 = ctx.r11.s64 + 25944;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// b 0x838f3eac
	goto loc_838F3EAC;
loc_838F3D88:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r4,29778
	ctx.r4.s64 = 1951531008;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,20051
	ctx.r4.u64 = ctx.r4.u64 | 20051;
	// bl 0x838f23f8
	ctx.lr = 0x838F3DA4;
	sub_838F23F8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3DB4;
	sub_838E9830(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3DC4;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3DCC;
	sub_838F24A8(ctx, base);
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
loc_838F3DE0:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x838f3ea0
	if (!cr6.eq) goto loc_838F3EA0;
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lhz r9,6(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// lbz r7,1616(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// bne cr6,0x838f3e50
	if (!cr6.eq) goto loc_838F3E50;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f3e50
	if (cr6.eq) goto loc_838F3E50;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,25944
	ctx.r11.s64 = ctx.r11.s64 + 25944;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// b 0x838f3ea8
	goto loc_838F3EA8;
loc_838F3E50:
	// lis r4,29778
	ctx.r4.s64 = 1951531008;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,20051
	ctx.r4.u64 = ctx.r4.u64 | 20051;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F3E64;
	sub_838F23F8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3E74;
	sub_838E9830(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F3E84;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F3E8C;
	sub_838F24A8(ctx, base);
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
loc_838F3EA0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,25944
	ctx.r4.s64 = ctx.r11.s64 + 25944;
loc_838F3EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838F3EAC:
	// bl 0x838e5ee0
	ctx.lr = 0x838F3EB0;
	sub_838E5EE0(ctx, base);
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

__attribute__((alias("__imp__sub_838F3EC4"))) PPC_WEAK_FUNC(sub_838F3EC4);
PPC_FUNC_IMPL(__imp__sub_838F3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F3EC8"))) PPC_WEAK_FUNC(sub_838F3EC8);
PPC_FUNC_IMPL(__imp__sub_838F3EC8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x838f3f68
	if (!cr6.eq) goto loc_838F3F68;
	// lhz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f3f00
	if (!cr6.eq) goto loc_838F3F00;
	// lwz r10,1864(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f3f34
	if (!cr6.eq) goto loc_838F3F34;
loc_838F3F00:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f3f34
	if (cr6.lt) goto loc_838F3F34;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26136
	ctx.r11.s64 = ctx.r11.s64 + 26136;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3F20;
	sub_838E5CC0(ctx, base);
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
loc_838F3F34:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r4,25163
	ctx.r4.s64 = 1649082368;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,18244
	ctx.r4.u64 = ctx.r4.u64 | 18244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x838f23f8
	ctx.lr = 0x838F3F50;
	sub_838F23F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F3F60;
	sub_838E9830(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x838f408c
	goto loc_838F408C;
loc_838F3F68:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838f4020
	if (cr6.eq) goto loc_838F4020;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lbz r7,1616(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// bne cr6,0x838f3ff4
	if (!cr6.eq) goto loc_838F3FF4;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f3ff4
	if (cr6.eq) goto loc_838F3FF4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26136
	ctx.r11.s64 = ctx.r11.s64 + 26136;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x838e5cc0
	ctx.lr = 0x838F3FE0;
	sub_838E5CC0(ctx, base);
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
loc_838F3FF4:
	// lis r4,25163
	ctx.r4.s64 = 1649082368;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,18244
	ctx.r4.u64 = ctx.r4.u64 | 18244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F4008;
	sub_838F23F8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4018;
	sub_838E9830(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x838f408c
	goto loc_838F408C;
loc_838F4020:
	// lbz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x838f405c
	if (cr6.lt) goto loc_838F405C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26136
	ctx.r4.s64 = ctx.r11.s64 + 26136;
	// bl 0x838e5cc0
	ctx.lr = 0x838F4048;
	sub_838E5CC0(ctx, base);
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
loc_838F405C:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r4,25163
	ctx.r4.s64 = 1649082368;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,18244
	ctx.r4.u64 = ctx.r4.u64 | 18244;
	// bl 0x838f23f8
	ctx.lr = 0x838F4078;
	sub_838F23F8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4088;
	sub_838E9830(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_838F408C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4098;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F40A0;
	sub_838F24A8(ctx, base);
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

__attribute__((alias("__imp__sub_838F40B4"))) PPC_WEAK_FUNC(sub_838F40B4);
PPC_FUNC_IMPL(__imp__sub_838F40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F40B8"))) PPC_WEAK_FUNC(sub_838F40B8);
PPC_FUNC_IMPL(__imp__sub_838F40B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F40C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1600);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// ble cr6,0x838f40f0
	if (!cr6.gt) goto loc_838F40F0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26020
	ctx.r4.s64 = ctx.r11.s64 + 26020;
	// bl 0x838e5cc0
	ctx.lr = 0x838F40E8;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F40F0:
	// lis r4,26697
	ctx.r4.s64 = 1749614592;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r4,r4,21332
	ctx.r4.u64 = ctx.r4.u64 | 21332;
	// bl 0x838f23f8
	ctx.lr = 0x838F4100;
	sub_838F23F8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x838f4144
	if (!cr6.gt) goto loc_838F4144;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
loc_838F410C:
	// lhzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F412C;
	sub_838E9830(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F413C;
	sub_838E63A8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838f410c
	if (!cr0.eq) goto loc_838F410C;
loc_838F4144:
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,1956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1956, ctx.r10.u32);
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F417C;
	sub_838E9830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4184"))) PPC_WEAK_FUNC(sub_838F4184);
PPC_FUNC_IMPL(__imp__sub_838F4184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F4188"))) PPC_WEAK_FUNC(sub_838F4188);
PPC_FUNC_IMPL(__imp__sub_838F4188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F4190;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x838f2c90
	ctx.lr = 0x838F41A4;
	sub_838F2C90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f41c4
	if (!cr6.eq) goto loc_838F41C4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,26224
	ctx.r11.s64 = ctx.r11.s64 + 26224;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5e88
	ctx.lr = 0x838F41C4;
	sub_838E5E88(ctx, base);
loc_838F41C4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f41fc
	if (cr6.eq) goto loc_838F41FC;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f41fc
	if (cr6.eq) goto loc_838F41FC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_838F41DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f41dc
	if (!cr6.eq) goto loc_838F41DC;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838f4200
	goto loc_838F4200;
loc_838F41FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838F4200:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,65534
	ctx.r10.u64 = ctx.r11.u64 | 65534;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x838f4224
	if (!cr6.gt) goto loc_838F4224;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26224
	ctx.r4.s64 = ctx.r11.s64 + 26224;
	// bl 0x838e5e88
	ctx.lr = 0x838F4224;
	sub_838E5E88(ctx, base);
loc_838F4224:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lis r4,29765
	ctx.r4.s64 = 1950679040;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,22644
	ctx.r4.u64 = ctx.r4.u64 | 22644;
	// bl 0x838f23f8
	ctx.lr = 0x838F4238;
	sub_838F23F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f426c
	if (cr6.eq) goto loc_838F426C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f426c
	if (cr6.eq) goto loc_838F426C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F425C;
	sub_838E9830(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F426C;
	sub_838E63A8(ctx, base);
loc_838F426C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f42ac
	if (cr6.eq) goto loc_838F42AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f42ac
	if (cr6.eq) goto loc_838F42AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f42ac
	if (cr6.eq) goto loc_838F42AC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f42ac
	if (cr6.eq) goto loc_838F42AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F429C;
	sub_838E9830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F42AC;
	sub_838E63A8(ctx, base);
loc_838F42AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F42B4;
	sub_838F24A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F42BC"))) PPC_WEAK_FUNC(sub_838F42BC);
PPC_FUNC_IMPL(__imp__sub_838F42BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F42C0"))) PPC_WEAK_FUNC(sub_838F42C0);
PPC_FUNC_IMPL(__imp__sub_838F42C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F42C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x838f42ec
	if (!cr6.eq) goto loc_838F42EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838f4188
	ctx.lr = 0x838F42E4;
	sub_838F4188(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F42EC:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x838f4304
	if (cr6.eq) goto loc_838F4304;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,26276
	ctx.r11.s64 = ctx.r11.s64 + 26276;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x838e5e88
	ctx.lr = 0x838F4304;
	sub_838E5E88(ctx, base);
loc_838F4304:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x838f2c90
	ctx.lr = 0x838F430C;
	sub_838F2C90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f4324
	if (!cr6.eq) goto loc_838F4324;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26276
	ctx.r4.s64 = ctx.r11.s64 + 26276;
	// bl 0x838e5e88
	ctx.lr = 0x838F4324;
	sub_838E5E88(ctx, base);
loc_838F4324:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// bne cr6,0x838f4348
	if (!cr6.eq) goto loc_838F4348;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x838f4368
	goto loc_838F4368;
loc_838F4348:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838F434C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f434c
	if (!cr6.eq) goto loc_838F434C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_838F4368:
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r4,31316
	ctx.r4.s64 = 2052325376;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,22644
	ctx.r4.u64 = ctx.r4.u64 | 22644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2a70
	ctx.lr = 0x838F438C;
	sub_838F2A70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f43a0
	if (cr6.eq) goto loc_838F43A0;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F43A0;
	sub_838E5E88(ctx, base);
loc_838F43A0:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r4,31316
	ctx.r4.s64 = 2052325376;
	// ori r4,r4,22644
	ctx.r4.u64 = ctx.r4.u64 | 22644;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F43B4;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838f43e4
	if (cr6.eq) goto loc_838F43E4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f43e4
	if (cr6.eq) goto loc_838F43E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F43D4;
	sub_838E9830(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F43E4;
	sub_838E63A8(ctx, base);
loc_838F43E4:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2bf0
	ctx.lr = 0x838F43F0;
	sub_838F2BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F43F8;
	sub_838F24A8(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4400"))) PPC_WEAK_FUNC(sub_838F4400);
PPC_FUNC_IMPL(__imp__sub_838F4400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838F4408;
	__savegprlr_23(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x838f2c90
	ctx.lr = 0x838F442C;
	sub_838F2C90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f4448
	if (!cr6.eq) goto loc_838F4448;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5e88
	ctx.lr = 0x838F4448;
	sub_838E5E88(ctx, base);
loc_838F4448:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x838f46dc
	if (cr6.gt) goto loc_838F46DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838f4480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F4480;
	// bdzf 4*cr6+eq,0x838f446c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838F446C;
	// bne cr6,0x838f4480
	if (!cr6.eq) goto loc_838F4480;
loc_838F446C:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x838f4490
	goto loc_838F4490;
loc_838F4480:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r23,1
	ctx.r23.s64 = 1;
	// stbx r23,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u8);
loc_838F4490:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// addi r10,r10,15364
	ctx.r10.s64 = ctx.r10.s64 + 15364;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// bne cr6,0x838f44b4
	if (!cr6.eq) goto loc_838F44B4;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_838F44B4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F44B8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f44b8
	if (!cr6.eq) goto loc_838F44B8;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x838f44e4
	if (!cr6.eq) goto loc_838F44E4;
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
loc_838F44E4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_838F44E8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f44e8
	if (!cr6.eq) goto loc_838F44E8;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x838f4514
	if (!cr6.eq) goto loc_838F4514;
	// addi r25,r10,2
	ctx.r25.s64 = ctx.r10.s64 + 2;
loc_838F4514:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// subf r8,r26,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r26.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bgt cr6,0x838f4530
	if (cr6.gt) goto loc_838F4530;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_838F4530:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bgt cr6,0x838f4544
	if (cr6.gt) goto loc_838F4544;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_838F4544:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_838F4548:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838f4548
	if (!cr6.eq) goto loc_838F4548;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// beq cr6,0x838f45a4
	if (cr6.eq) goto loc_838F45A4;
	// lis r4,26964
	ctx.r4.s64 = 1767112704;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,22644
	ctx.r4.u64 = ctx.r4.u64 | 22644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f2a70
	ctx.lr = 0x838F4590;
	sub_838F2A70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f45c4
	if (cr6.eq) goto loc_838F45C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1436(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F45A4;
	sub_838E5E88(ctx, base);
loc_838F45A4:
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x838f45c0
	if (!cr6.gt) goto loc_838F45C0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,26352
	ctx.r4.s64 = ctx.r11.s64 + 26352;
	// bl 0x838e5e88
	ctx.lr = 0x838F45C0;
	sub_838E5E88(ctx, base);
loc_838F45C0:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_838F45C4:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r4,26964
	ctx.r4.s64 = 1767112704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r4,r4,22644
	ctx.r4.u64 = ctx.r4.u64 | 22644;
	// bl 0x838f23f8
	ctx.lr = 0x838F45DC;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f466c
	if (cr6.eq) goto loc_838F466C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f460c
	if (cr6.eq) goto loc_838F460C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F45FC;
	sub_838E9830(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F460C;
	sub_838E63A8(ctx, base);
loc_838F460C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f463c
	if (cr6.eq) goto loc_838F463C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f463c
	if (cr6.eq) goto loc_838F463C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F462C;
	sub_838E9830(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F463C;
	sub_838E63A8(ctx, base);
loc_838F463C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838f466c
	if (cr6.eq) goto loc_838F466C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f466c
	if (cr6.eq) goto loc_838F466C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F465C;
	sub_838E9830(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F466C;
	sub_838E63A8(ctx, base);
loc_838F466C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x838f4690
	if (cr6.eq) goto loc_838F4690;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f2bf0
	ctx.lr = 0x838F4680;
	sub_838F2BF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F4688;
	sub_838F24A8(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838F4690:
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// beq cr6,0x838f46cc
	if (cr6.eq) goto loc_838F46CC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838f46cc
	if (cr6.eq) goto loc_838F46CC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f46cc
	if (cr6.eq) goto loc_838F46CC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F46BC;
	sub_838E9830(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F46CC;
	sub_838E63A8(ctx, base);
loc_838F46CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F46D4;
	sub_838F24A8(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838F46DC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5e88
	ctx.lr = 0x838F46F0;
	sub_838E5E88(ctx, base);
}

__attribute__((alias("__imp__sub_838F46F0"))) PPC_WEAK_FUNC(sub_838F46F0);
PPC_FUNC_IMPL(__imp__sub_838F46F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F46F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x838f4720
	if (cr6.lt) goto loc_838F4720;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26388
	ctx.r4.s64 = ctx.r11.s64 + 26388;
	// bl 0x838e5cc0
	ctx.lr = 0x838F4720;
	sub_838E5CC0(ctx, base);
loc_838F4720:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838e6b80
	ctx.lr = 0x838F472C;
	sub_838E6B80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838e6b80
	ctx.lr = 0x838F4738;
	sub_838E6B80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// beq cr6,0x838f4780
	if (cr6.eq) goto loc_838F4780;
	// lis r4,28486
	ctx.r4.s64 = 1866858496;
	// li r5,9
	ctx.r5.s64 = 9;
	// ori r4,r4,18035
	ctx.r4.u64 = ctx.r4.u64 | 18035;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F4758;
	sub_838F23F8(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4768;
	sub_838E9830(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4778;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F4780;
	sub_838F24A8(ctx, base);
loc_838F4780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4788"))) PPC_WEAK_FUNC(sub_838F4788);
PPC_FUNC_IMPL(__imp__sub_838F4788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838F4790;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x838f47c8
	if (cr6.lt) goto loc_838F47C8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,26472
	ctx.r11.s64 = ctx.r11.s64 + 26472;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x838e5e88
	ctx.lr = 0x838F47C8;
	sub_838E5E88(ctx, base);
loc_838F47C8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x838f2c90
	ctx.lr = 0x838F47D0;
	sub_838F2C90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f47e8
	if (!cr6.eq) goto loc_838F47E8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,26472
	ctx.r4.s64 = ctx.r11.s64 + 26472;
	// bl 0x838e5e88
	ctx.lr = 0x838F47E8;
	sub_838E5E88(ctx, base);
loc_838F47E8:
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_838F47F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f47f0
	if (!cr6.eq) goto loc_838F47F0;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addic r10,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r30
	temp.u8 = (~ctx.r10.u32 + ctx.r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 10;
	// bl 0x838f2120
	ctx.lr = 0x838F482C;
	sub_838F2120(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x838f4894
	if (!cr6.gt) goto loc_838F4894;
	// addi r7,r30,-1
	ctx.r7.s64 = ctx.r30.s64 + -1;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r3,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r3.s64;
loc_838F484C:
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_838F4854:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x838f4854
	if (!cr6.eq) goto loc_838F4854;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subfe r10,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x838f484c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F484C;
loc_838F4894:
	// lis r4,28739
	ctx.r4.s64 = 1883439104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,16716
	ctx.r4.u64 = ctx.r4.u64 | 16716;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F48A8;
	sub_838F23F8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f48d8
	if (cr6.eq) goto loc_838F48D8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f48d8
	if (cr6.eq) goto loc_838F48D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F48C8;
	sub_838E9830(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F48D8;
	sub_838E63A8(ctx, base);
loc_838F48D8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838e6b80
	ctx.lr = 0x838F48E4;
	sub_838E6B80(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x838e6b80
	ctx.lr = 0x838F48F0;
	sub_838E6B80(ctx, base);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// beq cr6,0x838f4950
	if (cr6.eq) goto loc_838F4950;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4910;
	sub_838E9830(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4920;
	sub_838E63A8(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f4950
	if (cr6.eq) goto loc_838F4950;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f4950
	if (cr6.eq) goto loc_838F4950;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4940;
	sub_838E9830(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4950;
	sub_838E63A8(ctx, base);
loc_838F4950:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x838f49ac
	if (!cr6.gt) goto loc_838F49AC;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// subf r26,r23,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r23.s64;
loc_838F4960:
	// lwzx r29,r26,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x838f49a0
	if (cr6.eq) goto loc_838F49A0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f49a0
	if (cr6.eq) goto loc_838F49A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f49a0
	if (cr6.eq) goto loc_838F49A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4990;
	sub_838E9830(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F49A0;
	sub_838E63A8(ctx, base);
loc_838F49A0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x838f4960
	if (!cr0.eq) goto loc_838F4960;
loc_838F49AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F49B8;
	sub_838F2288(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f49f8
	if (cr6.eq) goto loc_838F49F8;
	// lwz r11,1592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1592);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,1956(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1956, ctx.r10.u32);
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x838e9830
	ctx.lr = 0x838F49F8;
	sub_838E9830(ctx, base);
loc_838F49F8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4A00"))) PPC_WEAK_FUNC(sub_838F4A00);
PPC_FUNC_IMPL(__imp__sub_838F4A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F4A08;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_838F4A1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f4a1c
	if (!cr6.eq) goto loc_838F4A1C;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r31,r9,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_838F4A3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f4a3c
	if (!cr6.eq) goto loc_838F4A3C;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// ble cr6,0x838f4a80
	if (!cr6.gt) goto loc_838F4A80;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,26496
	ctx.r4.s64 = ctx.r11.s64 + 26496;
	// bl 0x838e5cc0
	ctx.lr = 0x838F4A78;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F4A80:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831ce980
	ctx.lr = 0x838F4A98;
	sub_831CE980(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F4AAC;
	sub_831CE980(ctx, base);
	// lis r4,29507
	ctx.r4.s64 = 1933770752;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,16716
	ctx.r4.u64 = ctx.r4.u64 | 16716;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838f2500
	ctx.lr = 0x838F4AC4;
	sub_838F2500(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4ACC"))) PPC_WEAK_FUNC(sub_838F4ACC);
PPC_FUNC_IMPL(__imp__sub_838F4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F4AD0"))) PPC_WEAK_FUNC(sub_838F4AD0);
PPC_FUNC_IMPL(__imp__sub_838F4AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F4AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x838f4b00
	if (cr6.lt) goto loc_838F4B00;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26532
	ctx.r4.s64 = ctx.r11.s64 + 26532;
	// bl 0x838e5cc0
	ctx.lr = 0x838F4B00;
	sub_838E5CC0(ctx, base);
loc_838F4B00:
	// rlwinm r11,r31,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// rlwinm r10,r31,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// rlwinm r9,r31,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// rlwinm r7,r30,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rlwinm r6,r30,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rlwinm r5,r30,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// beq cr6,0x838f4b80
	if (cr6.eq) goto loc_838F4B80;
	// lis r4,28744
	ctx.r4.s64 = 1883766784;
	// li r5,9
	ctx.r5.s64 = 9;
	// ori r4,r4,22899
	ctx.r4.u64 = ctx.r4.u64 | 22899;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f23f8
	ctx.lr = 0x838F4B58;
	sub_838F23F8(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4B68;
	sub_838E9830(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4B78;
	sub_838E63A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F4B80;
	sub_838F24A8(ctx, base);
loc_838F4B80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4B88"))) PPC_WEAK_FUNC(sub_838F4B88);
PPC_FUNC_IMPL(__imp__sub_838F4B88) {
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
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// bgt cr6,0x838f4c60
	if (cr6.gt) goto loc_838F4C60;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x838f4c60
	if (cr6.lt) goto loc_838F4C60;
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bgt cr6,0x838f4c60
	if (cr6.gt) goto loc_838F4C60;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x838f4c60
	if (cr6.lt) goto loc_838F4C60;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bgt cr6,0x838f4c60
	if (cr6.gt) goto loc_838F4C60;
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bgt cr6,0x838f4c60
	if (cr6.gt) goto loc_838F4C60;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// beq cr6,0x838f4c70
	if (cr6.eq) goto loc_838F4C70;
	// lis r4,29769
	ctx.r4.s64 = 1950941184;
	// li r5,7
	ctx.r5.s64 = 7;
	// ori r4,r4,19781
	ctx.r4.u64 = ctx.r4.u64 | 19781;
	// bl 0x838f23f8
	ctx.lr = 0x838F4C24;
	sub_838F23F8(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9830
	ctx.lr = 0x838F4C34;
	sub_838E9830(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F4C44;
	sub_838E63A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f24a8
	ctx.lr = 0x838F4C4C;
	sub_838F24A8(ctx, base);
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
loc_838F4C60:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26572
	ctx.r4.s64 = ctx.r11.s64 + 26572;
	// bl 0x838e5cc0
	ctx.lr = 0x838F4C70;
	sub_838E5CC0(ctx, base);
loc_838F4C70:
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

__attribute__((alias("__imp__sub_838F4C84"))) PPC_WEAK_FUNC(sub_838F4C84);
PPC_FUNC_IMPL(__imp__sub_838F4C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F4C88"))) PPC_WEAK_FUNC(sub_838F4C88);
PPC_FUNC_IMPL(__imp__sub_838F4C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F4C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,1617(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1617);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1620(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1620);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,1536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x838f4cbc
	if (cr6.lt) goto loc_838F4CBC;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// b 0x838f4cc8
	goto loc_838F4CC8;
loc_838F4CBC:
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F4CC8:
	// lbz r9,1618(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1618);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// stb r11,1622(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1622, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,1623(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1623, ctx.r9.u8);
	// bl 0x838f2120
	ctx.lr = 0x838F4CE4;
	sub_838F2120(ctx, base);
	// lwz r7,1540(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,1614(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1614);
	// stw r3,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r3.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bne cr6,0x838f4d04
	if (!cr6.eq) goto loc_838F4D04;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
loc_838F4D04:
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x838f4d18
	if (!cr6.eq) goto loc_838F4D18;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_838F4D18:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f4d28
	if (!cr6.eq) goto loc_838F4D28;
	// li r11,8
	ctx.r11.s64 = 8;
loc_838F4D28:
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// stb r11,1614(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1614, ctx.r11.u8);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f4db0
	if (cr6.eq) goto loc_838F4DB0;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f4db0
	if (!cr6.eq) goto loc_838F4DB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2120
	ctx.lr = 0x838F4D54;
	sub_838F2120(ctx, base);
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// stw r3,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4d68
	if (cr6.eq) goto loc_838F4D68;
	// li r30,1
	ctx.r30.s64 = 1;
loc_838F4D68:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4d78
	if (cr6.eq) goto loc_838F4D78;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_838F4D78:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4d88
	if (cr6.eq) goto loc_838F4D88;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_838F4D88:
	// rlwinm r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4d98
	if (cr6.eq) goto loc_838F4D98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_838F4D98:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// ble cr6,0x838f4db0
	if (!cr6.gt) goto loc_838F4DB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2120
	ctx.lr = 0x838F4DAC;
	sub_838F2120(ctx, base);
	// stw r3,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r3.u32);
loc_838F4DB0:
	// rlwinm r11,r29,0,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4dcc
	if (cr6.eq) goto loc_838F4DCC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2238
	ctx.lr = 0x838F4DC8;
	sub_838F2238(ctx, base);
	// stw r3,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r3.u32);
loc_838F4DCC:
	// lbz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4e10
	if (cr6.eq) goto loc_838F4E10;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f4e10
	if (!cr6.eq) goto loc_838F4E10;
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r9,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r8,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r8.u32);
	// stw r7,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F4E10:
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4E28"))) PPC_WEAK_FUNC(sub_838F4E28);
PPC_FUNC_IMPL(__imp__sub_838F4E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F4E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// lwz r10,1544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x838f4fb4
	if (cr6.lt) goto loc_838F4FB4;
	// lbz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f4fa4
	if (cr6.eq) goto loc_838F4FA4;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r10,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f4e80
	if (cr6.eq) goto loc_838F4E80;
	// lbz r11,1613(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1613);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1613(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1613, ctx.r11.u8);
	// b 0x838f4f30
	goto loc_838F4F30;
loc_838F4E80:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lbz r10,1613(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1613);
	// addi r11,r11,10876
	ctx.r11.s64 = ctx.r11.s64 + 10876;
loc_838F4E8C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,1613(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1613, ctx.r9.u8);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bge cr6,0x838f4f30
	if (!cr6.lt) goto loc_838F4F30;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbz r8,1613(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1613);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lwz r6,1536(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// lbzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lbzx r5,r8,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r7,1540(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r7,r4,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// lbzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// divwu r8,r6,r7
	ctx.r8.u32 = PPCDivide(ctx.r6.u32, ctx.r7.u32);
	// twllei r7,0
	// divwu r9,r4,r5
	ctx.r9.u32 = PPCDivide(ctx.r4.u32, ctx.r5.u32);
	// stw r8,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// twllei r5,0
	// stw r9,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838f4e8c
	if (cr6.eq) goto loc_838F4E8C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f4e8c
	if (cr6.eq) goto loc_838F4E8C;
loc_838F4F30:
	// lbz r11,1613(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1613);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bge cr6,0x838f4fa4
	if (!cr6.lt) goto loc_838F4FA4;
	// lwz r10,1568(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f4fb4
	if (cr6.eq) goto loc_838F4FB4;
	// lbz r9,1617(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1617);
	// lbz r11,1620(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1620);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,1536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x838f4f80
	if (cr6.lt) goto loc_838F4F80;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x838F4F78;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F4F80:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831cdcf0
	ctx.lr = 0x838F4F9C;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F4FA4:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838f32f0
	ctx.lr = 0x838F4FB4;
	sub_838F32F0(ctx, base);
loc_838F4FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F4FBC"))) PPC_WEAK_FUNC(sub_838F4FBC);
PPC_FUNC_IMPL(__imp__sub_838F4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F4FC0"))) PPC_WEAK_FUNC(sub_838F4FC0);
PPC_FUNC_IMPL(__imp__sub_838F4FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838F4FC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// bge cr6,0x838f5228
	if (!cr6.lt) goto loc_838F5228;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// addi r30,r11,10900
	ctx.r30.s64 = ctx.r11.s64 + 10900;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// add r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x838f5154
	if (cr6.eq) goto loc_838F5154;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838f50d8
	if (cr6.eq) goto loc_838F50D8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x838f5058
	if (cr6.eq) goto loc_838F5058;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbzx r31,r11,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r28,r10,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bge cr6,0x838f51d4
	if (!cr6.lt) goto loc_838F51D4;
loc_838F5024:
	// mullw r11,r31,r28
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x838f5040
	if (cr6.eq) goto loc_838F5040;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F5040;
	sub_831CE980(ctx, base);
loc_838F5040:
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x838f5024
	if (cr6.lt) goto loc_838F5024;
	// b 0x838f51d4
	goto loc_838F51D4;
loc_838F5058:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x838f51d4
	if (!cr6.lt) goto loc_838F51D4;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_838F5078:
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// lbzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mulli r8,r5,252
	ctx.r8.s64 = ctx.r5.s64 * 252;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// srw r5,r4,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r4,r5,28
	ctx.r4.u64 = ctx.r5.u32 & 0xF;
	// slw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// bne cr6,0x838f50b8
	if (!cr6.eq) goto loc_838F50B8;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x838f50bc
	goto loc_838F50BC;
loc_838F50B8:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_838F50BC:
	// lbzx r8,r30,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blt cr6,0x838f5078
	if (cr6.lt) goto loc_838F5078;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// b 0x838f51cc
	goto loc_838F51CC;
loc_838F50D8:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x838f51d4
	if (!cr6.lt) goto loc_838F51D4;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_838F50F8:
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// lbzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfic r3,r5,3
	xer.ca = ctx.r5.u32 <= 3;
	ctx.r3.s64 = 3 - ctx.r5.s64;
	// rlwinm r8,r3,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// srw r5,r4,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// slw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// bne cr6,0x838f5134
	if (!cr6.eq) goto loc_838F5134;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x838f5138
	goto loc_838F5138;
loc_838F5134:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_838F5138:
	// lbzx r8,r30,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// blt cr6,0x838f50f8
	if (cr6.lt) goto loc_838F50F8;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// b 0x838f51cc
	goto loc_838F51CC;
loc_838F5154:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x838f51d4
	if (!cr6.lt) goto loc_838F51D4;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F5174:
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// lbzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfic r3,r5,7
	xer.ca = ctx.r5.u32 <= 7;
	ctx.r3.s64 = 7 - ctx.r5.s64;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// srw r5,r4,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// slw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// bne cr6,0x838f51b0
	if (!cr6.eq) goto loc_838F51B0;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x838f51b4
	goto loc_838F51B4;
loc_838F51B0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_838F51B4:
	// lbzx r8,r30,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// blt cr6,0x838f5174
	if (cr6.lt) goto loc_838F5174;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
loc_838F51CC:
	// beq cr6,0x838f51d4
	if (cr6.eq) goto loc_838F51D4;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
loc_838F51D4:
	// lbzx r8,r30,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// lbz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// twllei r8,0
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lbz r11,11(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// divwu r10,r6,r8
	ctx.r10.u32 = PPCDivide(ctx.r6.u32, ctx.r8.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// blt cr6,0x838f5218
	if (cr6.lt) goto loc_838F5218;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838F5218:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_838F5228:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5230"))) PPC_WEAK_FUNC(sub_838F5230);
PPC_FUNC_IMPL(__imp__sub_838F5230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F5238;
	__savegprlr_28(ctx, base);
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x838f52bc
	if (cr6.lt) goto loc_838F52BC;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
loc_838F5270:
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,128
	cr6.compare<int32_t>(ctx.r28.s32, 128, xer);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// blt cr6,0x838f5288
	if (cr6.lt) goto loc_838F5288;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F5288:
	// lbz r28,1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,128
	cr6.compare<int32_t>(ctx.r28.s32, 128, xer);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// blt cr6,0x838f52a4
	if (cr6.lt) goto loc_838F52A4;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F52A4:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// blt cr6,0x838f5270
	if (cr6.lt) goto loc_838F5270;
loc_838F52BC:
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x838f52ec
	if (!cr6.lt) goto loc_838F52EC;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,128
	cr6.compare<int32_t>(ctx.r4.s32, 128, xer);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// blt cr6,0x838f52dc
	if (cr6.lt) goto loc_838F52DC;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F52DC:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_838F52EC:
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bge cr6,0x838f5340
	if (!cr6.lt) goto loc_838F5340;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_838F5304:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r10,128
	cr6.compare<int32_t>(ctx.r10.s32, 128, xer);
	// blt cr6,0x838f5324
	if (cr6.lt) goto loc_838F5324;
	// subfic r10,r10,256
	xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
loc_838F5324:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bgt cr6,0x838f5340
	if (cr6.gt) goto loc_838F5340;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x838f5304
	if (cr6.lt) goto loc_838F5304;
loc_838F5340:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5344"))) PPC_WEAK_FUNC(sub_838F5344);
PPC_FUNC_IMPL(__imp__sub_838F5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F5348"))) PPC_WEAK_FUNC(sub_838F5348);
PPC_FUNC_IMPL(__imp__sub_838F5348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r9,1572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r8,1568(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1568);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_838F5384:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u8);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x838f53a4
	if (cr6.lt) goto loc_838F53A4;
	// subfic r11,r11,256
	xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_838F53A4:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x838f5384
	if (cr6.lt) goto loc_838F5384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F53C8"))) PPC_WEAK_FUNC(sub_838F53C8);
PPC_FUNC_IMPL(__imp__sub_838F53C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F53D0;
	__savegprlr_27(ctx, base);
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r8,1568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x838f5478
	if (cr6.lt) goto loc_838F5478;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
loc_838F5410:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r27,r8,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r8.s64;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f5434
	if (cr6.lt) goto loc_838F5434;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F5434:
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r27,r27,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r27.s64;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// stb r27,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f545c
	if (cr6.lt) goto loc_838F545C;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F545C:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// blt cr6,0x838f5410
	if (cr6.lt) goto loc_838F5410;
loc_838F5478:
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x838f54b8
	if (!cr6.lt) goto loc_838F54B8;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f54a4
	if (cr6.lt) goto loc_838F54A4;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F54A4:
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_838F54B8:
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bge cr6,0x838f5520
	if (!cr6.lt) goto loc_838F5520;
	// subf r8,r11,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_838F54D4:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r30,r4,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,128
	cr6.compare<int32_t>(ctx.r10.s32, 128, xer);
	// blt cr6,0x838f5508
	if (cr6.lt) goto loc_838F5508;
	// subfic r10,r10,256
	xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
loc_838F5508:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bgt cr6,0x838f5520
	if (cr6.gt) goto loc_838F5520;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x838f54d4
	if (cr6.lt) goto loc_838F54D4;
loc_838F5520:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5524"))) PPC_WEAK_FUNC(sub_838F5524);
PPC_FUNC_IMPL(__imp__sub_838F5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F5528"))) PPC_WEAK_FUNC(sub_838F5528);
PPC_FUNC_IMPL(__imp__sub_838F5528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838F5530;
	__savegprlr_23(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// li r31,4
	ctx.r31.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,1568(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1568);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 1;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x838f55d8
	if (cr6.lt) goto loc_838F55D8;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
loc_838F5578:
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f5598
	if (cr6.lt) goto loc_838F5598;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F5598:
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f55bc
	if (cr6.lt) goto loc_838F55BC;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F55BC:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, xer);
	// blt cr6,0x838f5578
	if (cr6.lt) goto loc_838F5578;
loc_838F55D8:
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// bge cr6,0x838f5614
	if (!cr6.lt) goto loc_838F5614;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// blt cr6,0x838f5600
	if (cr6.lt) goto loc_838F5600;
	// subfic r8,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r8.s64;
loc_838F5600:
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_838F5614:
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, xer);
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bge cr6,0x838f56cc
	if (!cr6.lt) goto loc_838F56CC;
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r28,r9,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r9.s64;
	// subf r26,r31,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_838F5630:
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// lbzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r30,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 31;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r24,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// srawi r23,r25,31
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r25.s32 >> 31;
	// xor r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r24.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// xor r30,r25,r23
	ctx.r30.u64 = ctx.r25.u64 ^ ctx.r23.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// subf r30,r23,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r23.s64;
	// bgt cr6,0x838f5688
	if (cr6.gt) goto loc_838F5688;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838f5688
	if (cr6.gt) goto loc_838F5688;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x838f5694
	goto loc_838F5694;
loc_838F5688:
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bgt cr6,0x838f5694
	if (cr6.gt) goto loc_838F5694;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_838F5694:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stbx r11,r26,r31
	PPC_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x838f56b4
	if (cr6.lt) goto loc_838F56B4;
	// subfic r11,r11,256
	xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_838F56B4:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bgt cr6,0x838f56cc
	if (cr6.gt) goto loc_838F56CC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, xer);
	// blt cr6,0x838f5630
	if (cr6.lt) goto loc_838F5630;
loc_838F56CC:
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F56D0"))) PPC_WEAK_FUNC(sub_838F56D0);
PPC_FUNC_IMPL(__imp__sub_838F56D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838F56D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,1614(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1614);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// rlwinm r8,r10,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,-257
	ctx.r30.s64 = -257;
	// srawi r27,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f57ec
	if (cr6.eq) goto loc_838F57EC;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x838f57ec
	if (cr6.eq) goto loc_838F57EC;
	// lis r10,511
	ctx.r10.s64 = 33488896;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x838f5774
	if (cr6.lt) goto loc_838F5774;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f57ec
	if (cr6.eq) goto loc_838F57EC;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// ori r8,r11,65279
	ctx.r8.u64 = ctx.r11.u64 | 65279;
loc_838F5748:
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bgt cr6,0x838f57ec
	if (cr6.gt) goto loc_838F57EC;
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x838f5760
	if (cr6.lt) goto loc_838F5760;
	// subfic r11,r11,256
	xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_838F5760:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// blt cr6,0x838f5748
	if (cr6.lt) goto loc_838F5748;
	// b 0x838f57ec
	goto loc_838F57EC;
loc_838F5774:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x838f57c8
	if (cr6.lt) goto loc_838F57C8;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
loc_838F5790:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,128
	cr6.compare<int32_t>(ctx.r9.s32, 128, xer);
	// blt cr6,0x838f57a0
	if (cr6.lt) goto loc_838F57A0;
	// subfic r9,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
loc_838F57A0:
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x838f57b4
	if (cr6.lt) goto loc_838F57B4;
	// subfic r11,r11,256
	xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_838F57B4:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x838f5790
	if (cr6.lt) goto loc_838F5790;
loc_838F57C8:
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f57e4
	if (!cr6.lt) goto loc_838F57E4;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x838f57e0
	if (cr6.lt) goto loc_838F57E0;
	// subfic r11,r11,256
	xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
loc_838F57E0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_838F57E4:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_838F57EC:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// bne cr6,0x838f5810
	if (!cr6.eq) goto loc_838F5810;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5230
	ctx.lr = 0x838F5808;
	sub_838F5230(ctx, base);
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// b 0x838f5854
	goto loc_838F5854;
loc_838F5810:
	// rlwinm r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5854
	if (cr6.eq) goto loc_838F5854;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5230
	ctx.lr = 0x838F5830;
	sub_838F5230(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x838f5854
	if (!cr6.lt) goto loc_838F5854;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5854
	if (cr6.eq) goto loc_838F5854;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
loc_838F5854:
	// cmplwi cr6,r26,32
	cr6.compare<uint32_t>(ctx.r26.u32, 32, xer);
	// bne cr6,0x838f5874
	if (!cr6.eq) goto loc_838F5874;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5348
	ctx.lr = 0x838F586C;
	sub_838F5348(ctx, base);
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// b 0x838f58b4
	goto loc_838F58B4;
loc_838F5874:
	// rlwinm r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f58b4
	if (cr6.eq) goto loc_838F58B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5348
	ctx.lr = 0x838F5890;
	sub_838F5348(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x838f58b4
	if (!cr6.lt) goto loc_838F58B4;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f58b4
	if (cr6.eq) goto loc_838F58B4;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
loc_838F58B4:
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(ctx.r26.u32, 64, xer);
	// bne cr6,0x838f58d8
	if (!cr6.eq) goto loc_838F58D8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f53c8
	ctx.lr = 0x838F58D0;
	sub_838F53C8(ctx, base);
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// b 0x838f591c
	goto loc_838F591C;
loc_838F58D8:
	// rlwinm r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f591c
	if (cr6.eq) goto loc_838F591C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f53c8
	ctx.lr = 0x838F58F8;
	sub_838F53C8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x838f591c
	if (!cr6.lt) goto loc_838F591C;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f591c
	if (cr6.eq) goto loc_838F591C;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
loc_838F591C:
	// cmplwi cr6,r26,128
	cr6.compare<uint32_t>(ctx.r26.u32, 128, xer);
	// bne cr6,0x838f5940
	if (!cr6.eq) goto loc_838F5940;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5528
	ctx.lr = 0x838F5938;
	sub_838F5528(ctx, base);
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// b 0x838f5980
	goto loc_838F5980;
loc_838F5940:
	// rlwinm r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5980
	if (cr6.eq) goto loc_838F5980;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5528
	ctx.lr = 0x838F5960;
	sub_838F5528(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x838f5980
	if (!cr6.lt) goto loc_838F5980;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r28,1576(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5980
	if (cr6.eq) goto loc_838F5980;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
loc_838F5980:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f32f0
	ctx.lr = 0x838F5998;
	sub_838F32F0(ctx, base);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f59b0
	if (cr6.eq) goto loc_838F59B0;
	// lwz r10,1572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// stw r10,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r10.u32);
loc_838F59B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f4e28
	ctx.lr = 0x838F59B8;
	sub_838F4E28(ctx, base);
	// lwz r10,1660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
	// beq cr6,0x838f59e0
	if (cr6.eq) goto loc_838F59E0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f59e0
	if (cr6.lt) goto loc_838F59E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f0910
	ctx.lr = 0x838F59E0;
	sub_838F0910(ctx, base);
loc_838F59E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F59E8"))) PPC_WEAK_FUNC(sub_838F59E8);
PPC_FUNC_IMPL(__imp__sub_838F59E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F59F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,1621(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1621);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// bge cr6,0x838f5aa0
	if (!cr6.lt) goto loc_838F5AA0;
	// li r11,17
	ctx.r11.s64 = 17;
	// subfic r29,r31,8
	xer.ca = ctx.r31.u32 <= 8;
	ctx.r29.s64 = 8 - ctx.r31.s64;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x838e9728
	ctx.lr = 0x838F5A24;
	sub_838E9728(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stb r10,1621(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1621, ctx.r10.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e6250
	ctx.lr = 0x838F5A40;
	sub_838E6250(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f5a8c
	if (cr6.eq) goto loc_838F5A8C;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x838f5a7c
	if (!cr6.lt) goto loc_838F5A7C;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e6250
	ctx.lr = 0x838F5A60;
	sub_838E6250(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f5a7c
	if (cr6.eq) goto loc_838F5A7C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,26708
	ctx.r11.s64 = ctx.r11.s64 + 26708;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x838e5e88
	ctx.lr = 0x838F5A7C;
	sub_838E5E88(ctx, base);
loc_838F5A7C:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,26708
	ctx.r4.s64 = ctx.r11.s64 + 26708;
	// bl 0x838e5e88
	ctx.lr = 0x838F5A8C;
	sub_838E5E88(ctx, base);
loc_838F5A8C:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x838f5aa0
	if (!cr6.lt) goto loc_838F5AA0;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
loc_838F5AA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5AA8"))) PPC_WEAK_FUNC(sub_838F5AA8);
PPC_FUNC_IMPL(__imp__sub_838F5AA8) {
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
	// lwz r11,1564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f5aec
	if (cr6.eq) goto loc_838F5AEC;
	// rlwinm r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// bne cr6,0x838f5afc
	if (!cr6.eq) goto loc_838F5AFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x838f5afc
	goto loc_838F5AFC;
loc_838F5AEC:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
loc_838F5AFC:
	// li r11,129
	ctx.r11.s64 = 129;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F5B14;
	sub_838E9728(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x838f5b58
	if (cr6.eq) goto loc_838F5B58;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,1592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r11,r3,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r3.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x838f5b5c
	goto loc_838F5B5C;
loc_838F5B58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838F5B5C:
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

__attribute__((alias("__imp__sub_838F5B74"))) PPC_WEAK_FUNC(sub_838F5B74);
PPC_FUNC_IMPL(__imp__sub_838F5B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F5B78"))) PPC_WEAK_FUNC(sub_838F5B78);
PPC_FUNC_IMPL(__imp__sub_838F5B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F5B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,26860
	ctx.r29.s64 = ctx.r11.s64 + 26860;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5be4
	if (cr6.eq) goto loc_838F5BE4;
	// lbz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1408);
	// addi r6,r29,-16
	ctx.r6.s64 = ctx.r29.s64 + -16;
	// lbz r8,1409(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1409);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r7,1410(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1410);
	// li r4,64
	ctx.r4.s64 = 64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// bl 0x838e57d8
	ctx.lr = 0x838F5BD4;
	sub_838E57D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e38
	ctx.lr = 0x838F5BE0;
	sub_838E5E38(ctx, base);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
loc_838F5BE4:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f5c24
	if (cr6.eq) goto loc_838F5C24;
	// bl 0x8255b3c0
	ctx.lr = 0x838F5C0C;
	sub_8255B3C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f5c54
	if (!cr6.eq) goto loc_838F5C54;
	// stw r28,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F5C24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8255b5d8
	ctx.lr = 0x838F5C30;
	sub_8255B5D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f5c54
	if (!cr6.eq) goto loc_838F5C54;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// stw r28,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F5C54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F5C60;
	sub_838E6C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5C6C"))) PPC_WEAK_FUNC(sub_838F5C6C);
PPC_FUNC_IMPL(__imp__sub_838F5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

