#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D49308"))) PPC_WEAK_FUNC(sub_83D49308);
PPC_FUNC_IMPL(__imp__sub_83D49308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4930C"))) PPC_WEAK_FUNC(sub_83D4930C);
PPC_FUNC_IMPL(__imp__sub_83D4930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49310"))) PPC_WEAK_FUNC(sub_83D49310);
PPC_FUNC_IMPL(__imp__sub_83D49310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49314"))) PPC_WEAK_FUNC(sub_83D49314);
PPC_FUNC_IMPL(__imp__sub_83D49314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49318"))) PPC_WEAK_FUNC(sub_83D49318);
PPC_FUNC_IMPL(__imp__sub_83D49318) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-14196
	ctx.r31.s64 = ctx.r11.s64 + -14196;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d49350
	if (cr6.lt) goto loc_83D49350;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D49350;
	sub_825952B8(ctx, base);
loc_83D49350:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D4937C"))) PPC_WEAK_FUNC(sub_83D4937C);
PPC_FUNC_IMPL(__imp__sub_83D4937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49380"))) PPC_WEAK_FUNC(sub_83D49380);
PPC_FUNC_IMPL(__imp__sub_83D49380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49384"))) PPC_WEAK_FUNC(sub_83D49384);
PPC_FUNC_IMPL(__imp__sub_83D49384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49388"))) PPC_WEAK_FUNC(sub_83D49388);
PPC_FUNC_IMPL(__imp__sub_83D49388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4938C"))) PPC_WEAK_FUNC(sub_83D4938C);
PPC_FUNC_IMPL(__imp__sub_83D4938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49390"))) PPC_WEAK_FUNC(sub_83D49390);
PPC_FUNC_IMPL(__imp__sub_83D49390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49394"))) PPC_WEAK_FUNC(sub_83D49394);
PPC_FUNC_IMPL(__imp__sub_83D49394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49398"))) PPC_WEAK_FUNC(sub_83D49398);
PPC_FUNC_IMPL(__imp__sub_83D49398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4939C"))) PPC_WEAK_FUNC(sub_83D4939C);
PPC_FUNC_IMPL(__imp__sub_83D4939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493A0"))) PPC_WEAK_FUNC(sub_83D493A0);
PPC_FUNC_IMPL(__imp__sub_83D493A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493A4"))) PPC_WEAK_FUNC(sub_83D493A4);
PPC_FUNC_IMPL(__imp__sub_83D493A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493A8"))) PPC_WEAK_FUNC(sub_83D493A8);
PPC_FUNC_IMPL(__imp__sub_83D493A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493AC"))) PPC_WEAK_FUNC(sub_83D493AC);
PPC_FUNC_IMPL(__imp__sub_83D493AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493B0"))) PPC_WEAK_FUNC(sub_83D493B0);
PPC_FUNC_IMPL(__imp__sub_83D493B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493B4"))) PPC_WEAK_FUNC(sub_83D493B4);
PPC_FUNC_IMPL(__imp__sub_83D493B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493B8"))) PPC_WEAK_FUNC(sub_83D493B8);
PPC_FUNC_IMPL(__imp__sub_83D493B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493BC"))) PPC_WEAK_FUNC(sub_83D493BC);
PPC_FUNC_IMPL(__imp__sub_83D493BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493C0"))) PPC_WEAK_FUNC(sub_83D493C0);
PPC_FUNC_IMPL(__imp__sub_83D493C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493C4"))) PPC_WEAK_FUNC(sub_83D493C4);
PPC_FUNC_IMPL(__imp__sub_83D493C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493C8"))) PPC_WEAK_FUNC(sub_83D493C8);
PPC_FUNC_IMPL(__imp__sub_83D493C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493CC"))) PPC_WEAK_FUNC(sub_83D493CC);
PPC_FUNC_IMPL(__imp__sub_83D493CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493D0"))) PPC_WEAK_FUNC(sub_83D493D0);
PPC_FUNC_IMPL(__imp__sub_83D493D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493D4"))) PPC_WEAK_FUNC(sub_83D493D4);
PPC_FUNC_IMPL(__imp__sub_83D493D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493D8"))) PPC_WEAK_FUNC(sub_83D493D8);
PPC_FUNC_IMPL(__imp__sub_83D493D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493DC"))) PPC_WEAK_FUNC(sub_83D493DC);
PPC_FUNC_IMPL(__imp__sub_83D493DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493E0"))) PPC_WEAK_FUNC(sub_83D493E0);
PPC_FUNC_IMPL(__imp__sub_83D493E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D493EC"))) PPC_WEAK_FUNC(sub_83D493EC);
PPC_FUNC_IMPL(__imp__sub_83D493EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493F0"))) PPC_WEAK_FUNC(sub_83D493F0);
PPC_FUNC_IMPL(__imp__sub_83D493F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493F4"))) PPC_WEAK_FUNC(sub_83D493F4);
PPC_FUNC_IMPL(__imp__sub_83D493F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D493F8"))) PPC_WEAK_FUNC(sub_83D493F8);
PPC_FUNC_IMPL(__imp__sub_83D493F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D493FC"))) PPC_WEAK_FUNC(sub_83D493FC);
PPC_FUNC_IMPL(__imp__sub_83D493FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49400"))) PPC_WEAK_FUNC(sub_83D49400);
PPC_FUNC_IMPL(__imp__sub_83D49400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49404"))) PPC_WEAK_FUNC(sub_83D49404);
PPC_FUNC_IMPL(__imp__sub_83D49404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49408"))) PPC_WEAK_FUNC(sub_83D49408);
PPC_FUNC_IMPL(__imp__sub_83D49408) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-14032
	ctx.r31.s64 = ctx.r11.s64 + -14032;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d49440
	if (cr6.lt) goto loc_83D49440;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D49440;
	sub_825952B8(ctx, base);
loc_83D49440:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D4946C"))) PPC_WEAK_FUNC(sub_83D4946C);
PPC_FUNC_IMPL(__imp__sub_83D4946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49470"))) PPC_WEAK_FUNC(sub_83D49470);
PPC_FUNC_IMPL(__imp__sub_83D49470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49474"))) PPC_WEAK_FUNC(sub_83D49474);
PPC_FUNC_IMPL(__imp__sub_83D49474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49478"))) PPC_WEAK_FUNC(sub_83D49478);
PPC_FUNC_IMPL(__imp__sub_83D49478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4947C"))) PPC_WEAK_FUNC(sub_83D4947C);
PPC_FUNC_IMPL(__imp__sub_83D4947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49480"))) PPC_WEAK_FUNC(sub_83D49480);
PPC_FUNC_IMPL(__imp__sub_83D49480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49484"))) PPC_WEAK_FUNC(sub_83D49484);
PPC_FUNC_IMPL(__imp__sub_83D49484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49488"))) PPC_WEAK_FUNC(sub_83D49488);
PPC_FUNC_IMPL(__imp__sub_83D49488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4948C"))) PPC_WEAK_FUNC(sub_83D4948C);
PPC_FUNC_IMPL(__imp__sub_83D4948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49490"))) PPC_WEAK_FUNC(sub_83D49490);
PPC_FUNC_IMPL(__imp__sub_83D49490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49494"))) PPC_WEAK_FUNC(sub_83D49494);
PPC_FUNC_IMPL(__imp__sub_83D49494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49498"))) PPC_WEAK_FUNC(sub_83D49498);
PPC_FUNC_IMPL(__imp__sub_83D49498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4949C"))) PPC_WEAK_FUNC(sub_83D4949C);
PPC_FUNC_IMPL(__imp__sub_83D4949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494A0"))) PPC_WEAK_FUNC(sub_83D494A0);
PPC_FUNC_IMPL(__imp__sub_83D494A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494A4"))) PPC_WEAK_FUNC(sub_83D494A4);
PPC_FUNC_IMPL(__imp__sub_83D494A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494A8"))) PPC_WEAK_FUNC(sub_83D494A8);
PPC_FUNC_IMPL(__imp__sub_83D494A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494AC"))) PPC_WEAK_FUNC(sub_83D494AC);
PPC_FUNC_IMPL(__imp__sub_83D494AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494B0"))) PPC_WEAK_FUNC(sub_83D494B0);
PPC_FUNC_IMPL(__imp__sub_83D494B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494B4"))) PPC_WEAK_FUNC(sub_83D494B4);
PPC_FUNC_IMPL(__imp__sub_83D494B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494B8"))) PPC_WEAK_FUNC(sub_83D494B8);
PPC_FUNC_IMPL(__imp__sub_83D494B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494BC"))) PPC_WEAK_FUNC(sub_83D494BC);
PPC_FUNC_IMPL(__imp__sub_83D494BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494C0"))) PPC_WEAK_FUNC(sub_83D494C0);
PPC_FUNC_IMPL(__imp__sub_83D494C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494C4"))) PPC_WEAK_FUNC(sub_83D494C4);
PPC_FUNC_IMPL(__imp__sub_83D494C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494C8"))) PPC_WEAK_FUNC(sub_83D494C8);
PPC_FUNC_IMPL(__imp__sub_83D494C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494CC"))) PPC_WEAK_FUNC(sub_83D494CC);
PPC_FUNC_IMPL(__imp__sub_83D494CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494D0"))) PPC_WEAK_FUNC(sub_83D494D0);
PPC_FUNC_IMPL(__imp__sub_83D494D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-6136
	ctx.r3.s64 = ctx.r11.s64 + -6136;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D494DC"))) PPC_WEAK_FUNC(sub_83D494DC);
PPC_FUNC_IMPL(__imp__sub_83D494DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494E0"))) PPC_WEAK_FUNC(sub_83D494E0);
PPC_FUNC_IMPL(__imp__sub_83D494E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494E4"))) PPC_WEAK_FUNC(sub_83D494E4);
PPC_FUNC_IMPL(__imp__sub_83D494E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494E8"))) PPC_WEAK_FUNC(sub_83D494E8);
PPC_FUNC_IMPL(__imp__sub_83D494E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494EC"))) PPC_WEAK_FUNC(sub_83D494EC);
PPC_FUNC_IMPL(__imp__sub_83D494EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494F0"))) PPC_WEAK_FUNC(sub_83D494F0);
PPC_FUNC_IMPL(__imp__sub_83D494F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D494F4"))) PPC_WEAK_FUNC(sub_83D494F4);
PPC_FUNC_IMPL(__imp__sub_83D494F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D494F8"))) PPC_WEAK_FUNC(sub_83D494F8);
PPC_FUNC_IMPL(__imp__sub_83D494F8) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-13876
	ctx.r31.s64 = ctx.r11.s64 + -13876;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d49530
	if (cr6.lt) goto loc_83D49530;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D49530;
	sub_825952B8(ctx, base);
loc_83D49530:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D4955C"))) PPC_WEAK_FUNC(sub_83D4955C);
PPC_FUNC_IMPL(__imp__sub_83D4955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49560"))) PPC_WEAK_FUNC(sub_83D49560);
PPC_FUNC_IMPL(__imp__sub_83D49560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49564"))) PPC_WEAK_FUNC(sub_83D49564);
PPC_FUNC_IMPL(__imp__sub_83D49564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49568"))) PPC_WEAK_FUNC(sub_83D49568);
PPC_FUNC_IMPL(__imp__sub_83D49568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4956C"))) PPC_WEAK_FUNC(sub_83D4956C);
PPC_FUNC_IMPL(__imp__sub_83D4956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49570"))) PPC_WEAK_FUNC(sub_83D49570);
PPC_FUNC_IMPL(__imp__sub_83D49570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49574"))) PPC_WEAK_FUNC(sub_83D49574);
PPC_FUNC_IMPL(__imp__sub_83D49574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49578"))) PPC_WEAK_FUNC(sub_83D49578);
PPC_FUNC_IMPL(__imp__sub_83D49578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4957C"))) PPC_WEAK_FUNC(sub_83D4957C);
PPC_FUNC_IMPL(__imp__sub_83D4957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49580"))) PPC_WEAK_FUNC(sub_83D49580);
PPC_FUNC_IMPL(__imp__sub_83D49580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49584"))) PPC_WEAK_FUNC(sub_83D49584);
PPC_FUNC_IMPL(__imp__sub_83D49584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49588"))) PPC_WEAK_FUNC(sub_83D49588);
PPC_FUNC_IMPL(__imp__sub_83D49588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4958C"))) PPC_WEAK_FUNC(sub_83D4958C);
PPC_FUNC_IMPL(__imp__sub_83D4958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49590"))) PPC_WEAK_FUNC(sub_83D49590);
PPC_FUNC_IMPL(__imp__sub_83D49590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49594"))) PPC_WEAK_FUNC(sub_83D49594);
PPC_FUNC_IMPL(__imp__sub_83D49594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49598"))) PPC_WEAK_FUNC(sub_83D49598);
PPC_FUNC_IMPL(__imp__sub_83D49598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4959C"))) PPC_WEAK_FUNC(sub_83D4959C);
PPC_FUNC_IMPL(__imp__sub_83D4959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495A0"))) PPC_WEAK_FUNC(sub_83D495A0);
PPC_FUNC_IMPL(__imp__sub_83D495A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495A4"))) PPC_WEAK_FUNC(sub_83D495A4);
PPC_FUNC_IMPL(__imp__sub_83D495A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495A8"))) PPC_WEAK_FUNC(sub_83D495A8);
PPC_FUNC_IMPL(__imp__sub_83D495A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495AC"))) PPC_WEAK_FUNC(sub_83D495AC);
PPC_FUNC_IMPL(__imp__sub_83D495AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495B0"))) PPC_WEAK_FUNC(sub_83D495B0);
PPC_FUNC_IMPL(__imp__sub_83D495B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495B4"))) PPC_WEAK_FUNC(sub_83D495B4);
PPC_FUNC_IMPL(__imp__sub_83D495B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495B8"))) PPC_WEAK_FUNC(sub_83D495B8);
PPC_FUNC_IMPL(__imp__sub_83D495B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495BC"))) PPC_WEAK_FUNC(sub_83D495BC);
PPC_FUNC_IMPL(__imp__sub_83D495BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495C0"))) PPC_WEAK_FUNC(sub_83D495C0);
PPC_FUNC_IMPL(__imp__sub_83D495C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495C4"))) PPC_WEAK_FUNC(sub_83D495C4);
PPC_FUNC_IMPL(__imp__sub_83D495C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495C8"))) PPC_WEAK_FUNC(sub_83D495C8);
PPC_FUNC_IMPL(__imp__sub_83D495C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495CC"))) PPC_WEAK_FUNC(sub_83D495CC);
PPC_FUNC_IMPL(__imp__sub_83D495CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495D0"))) PPC_WEAK_FUNC(sub_83D495D0);
PPC_FUNC_IMPL(__imp__sub_83D495D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495D4"))) PPC_WEAK_FUNC(sub_83D495D4);
PPC_FUNC_IMPL(__imp__sub_83D495D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495D8"))) PPC_WEAK_FUNC(sub_83D495D8);
PPC_FUNC_IMPL(__imp__sub_83D495D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495DC"))) PPC_WEAK_FUNC(sub_83D495DC);
PPC_FUNC_IMPL(__imp__sub_83D495DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495E0"))) PPC_WEAK_FUNC(sub_83D495E0);
PPC_FUNC_IMPL(__imp__sub_83D495E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495E4"))) PPC_WEAK_FUNC(sub_83D495E4);
PPC_FUNC_IMPL(__imp__sub_83D495E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495E8"))) PPC_WEAK_FUNC(sub_83D495E8);
PPC_FUNC_IMPL(__imp__sub_83D495E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495EC"))) PPC_WEAK_FUNC(sub_83D495EC);
PPC_FUNC_IMPL(__imp__sub_83D495EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495F0"))) PPC_WEAK_FUNC(sub_83D495F0);
PPC_FUNC_IMPL(__imp__sub_83D495F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495F4"))) PPC_WEAK_FUNC(sub_83D495F4);
PPC_FUNC_IMPL(__imp__sub_83D495F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D495F8"))) PPC_WEAK_FUNC(sub_83D495F8);
PPC_FUNC_IMPL(__imp__sub_83D495F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D495FC"))) PPC_WEAK_FUNC(sub_83D495FC);
PPC_FUNC_IMPL(__imp__sub_83D495FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49600"))) PPC_WEAK_FUNC(sub_83D49600);
PPC_FUNC_IMPL(__imp__sub_83D49600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49604"))) PPC_WEAK_FUNC(sub_83D49604);
PPC_FUNC_IMPL(__imp__sub_83D49604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49608"))) PPC_WEAK_FUNC(sub_83D49608);
PPC_FUNC_IMPL(__imp__sub_83D49608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4960C"))) PPC_WEAK_FUNC(sub_83D4960C);
PPC_FUNC_IMPL(__imp__sub_83D4960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49610"))) PPC_WEAK_FUNC(sub_83D49610);
PPC_FUNC_IMPL(__imp__sub_83D49610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49614"))) PPC_WEAK_FUNC(sub_83D49614);
PPC_FUNC_IMPL(__imp__sub_83D49614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49618"))) PPC_WEAK_FUNC(sub_83D49618);
PPC_FUNC_IMPL(__imp__sub_83D49618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4961C"))) PPC_WEAK_FUNC(sub_83D4961C);
PPC_FUNC_IMPL(__imp__sub_83D4961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49620"))) PPC_WEAK_FUNC(sub_83D49620);
PPC_FUNC_IMPL(__imp__sub_83D49620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4962C"))) PPC_WEAK_FUNC(sub_83D4962C);
PPC_FUNC_IMPL(__imp__sub_83D4962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49630"))) PPC_WEAK_FUNC(sub_83D49630);
PPC_FUNC_IMPL(__imp__sub_83D49630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49634"))) PPC_WEAK_FUNC(sub_83D49634);
PPC_FUNC_IMPL(__imp__sub_83D49634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49638"))) PPC_WEAK_FUNC(sub_83D49638);
PPC_FUNC_IMPL(__imp__sub_83D49638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4963C"))) PPC_WEAK_FUNC(sub_83D4963C);
PPC_FUNC_IMPL(__imp__sub_83D4963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49640"))) PPC_WEAK_FUNC(sub_83D49640);
PPC_FUNC_IMPL(__imp__sub_83D49640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49644"))) PPC_WEAK_FUNC(sub_83D49644);
PPC_FUNC_IMPL(__imp__sub_83D49644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49648"))) PPC_WEAK_FUNC(sub_83D49648);
PPC_FUNC_IMPL(__imp__sub_83D49648) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-13616
	ctx.r31.s64 = ctx.r11.s64 + -13616;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d49680
	if (cr6.lt) goto loc_83D49680;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D49680;
	sub_825952B8(ctx, base);
loc_83D49680:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D496AC"))) PPC_WEAK_FUNC(sub_83D496AC);
PPC_FUNC_IMPL(__imp__sub_83D496AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496B0"))) PPC_WEAK_FUNC(sub_83D496B0);
PPC_FUNC_IMPL(__imp__sub_83D496B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496B4"))) PPC_WEAK_FUNC(sub_83D496B4);
PPC_FUNC_IMPL(__imp__sub_83D496B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496B8"))) PPC_WEAK_FUNC(sub_83D496B8);
PPC_FUNC_IMPL(__imp__sub_83D496B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496BC"))) PPC_WEAK_FUNC(sub_83D496BC);
PPC_FUNC_IMPL(__imp__sub_83D496BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496C0"))) PPC_WEAK_FUNC(sub_83D496C0);
PPC_FUNC_IMPL(__imp__sub_83D496C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496C4"))) PPC_WEAK_FUNC(sub_83D496C4);
PPC_FUNC_IMPL(__imp__sub_83D496C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496C8"))) PPC_WEAK_FUNC(sub_83D496C8);
PPC_FUNC_IMPL(__imp__sub_83D496C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496CC"))) PPC_WEAK_FUNC(sub_83D496CC);
PPC_FUNC_IMPL(__imp__sub_83D496CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496D0"))) PPC_WEAK_FUNC(sub_83D496D0);
PPC_FUNC_IMPL(__imp__sub_83D496D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496D4"))) PPC_WEAK_FUNC(sub_83D496D4);
PPC_FUNC_IMPL(__imp__sub_83D496D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496D8"))) PPC_WEAK_FUNC(sub_83D496D8);
PPC_FUNC_IMPL(__imp__sub_83D496D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496DC"))) PPC_WEAK_FUNC(sub_83D496DC);
PPC_FUNC_IMPL(__imp__sub_83D496DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496E0"))) PPC_WEAK_FUNC(sub_83D496E0);
PPC_FUNC_IMPL(__imp__sub_83D496E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496E4"))) PPC_WEAK_FUNC(sub_83D496E4);
PPC_FUNC_IMPL(__imp__sub_83D496E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496E8"))) PPC_WEAK_FUNC(sub_83D496E8);
PPC_FUNC_IMPL(__imp__sub_83D496E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496EC"))) PPC_WEAK_FUNC(sub_83D496EC);
PPC_FUNC_IMPL(__imp__sub_83D496EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496F0"))) PPC_WEAK_FUNC(sub_83D496F0);
PPC_FUNC_IMPL(__imp__sub_83D496F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496F4"))) PPC_WEAK_FUNC(sub_83D496F4);
PPC_FUNC_IMPL(__imp__sub_83D496F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D496F8"))) PPC_WEAK_FUNC(sub_83D496F8);
PPC_FUNC_IMPL(__imp__sub_83D496F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D496FC"))) PPC_WEAK_FUNC(sub_83D496FC);
PPC_FUNC_IMPL(__imp__sub_83D496FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49700"))) PPC_WEAK_FUNC(sub_83D49700);
PPC_FUNC_IMPL(__imp__sub_83D49700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49704"))) PPC_WEAK_FUNC(sub_83D49704);
PPC_FUNC_IMPL(__imp__sub_83D49704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49708"))) PPC_WEAK_FUNC(sub_83D49708);
PPC_FUNC_IMPL(__imp__sub_83D49708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4970C"))) PPC_WEAK_FUNC(sub_83D4970C);
PPC_FUNC_IMPL(__imp__sub_83D4970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49710"))) PPC_WEAK_FUNC(sub_83D49710);
PPC_FUNC_IMPL(__imp__sub_83D49710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4971C"))) PPC_WEAK_FUNC(sub_83D4971C);
PPC_FUNC_IMPL(__imp__sub_83D4971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49720"))) PPC_WEAK_FUNC(sub_83D49720);
PPC_FUNC_IMPL(__imp__sub_83D49720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49724"))) PPC_WEAK_FUNC(sub_83D49724);
PPC_FUNC_IMPL(__imp__sub_83D49724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49728"))) PPC_WEAK_FUNC(sub_83D49728);
PPC_FUNC_IMPL(__imp__sub_83D49728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4972C"))) PPC_WEAK_FUNC(sub_83D4972C);
PPC_FUNC_IMPL(__imp__sub_83D4972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49730"))) PPC_WEAK_FUNC(sub_83D49730);
PPC_FUNC_IMPL(__imp__sub_83D49730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49734"))) PPC_WEAK_FUNC(sub_83D49734);
PPC_FUNC_IMPL(__imp__sub_83D49734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49738"))) PPC_WEAK_FUNC(sub_83D49738);
PPC_FUNC_IMPL(__imp__sub_83D49738) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-13436
	ctx.r31.s64 = ctx.r11.s64 + -13436;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d49770
	if (cr6.lt) goto loc_83D49770;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D49770;
	sub_825952B8(ctx, base);
loc_83D49770:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D4979C"))) PPC_WEAK_FUNC(sub_83D4979C);
PPC_FUNC_IMPL(__imp__sub_83D4979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497A0"))) PPC_WEAK_FUNC(sub_83D497A0);
PPC_FUNC_IMPL(__imp__sub_83D497A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497A4"))) PPC_WEAK_FUNC(sub_83D497A4);
PPC_FUNC_IMPL(__imp__sub_83D497A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497A8"))) PPC_WEAK_FUNC(sub_83D497A8);
PPC_FUNC_IMPL(__imp__sub_83D497A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497AC"))) PPC_WEAK_FUNC(sub_83D497AC);
PPC_FUNC_IMPL(__imp__sub_83D497AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497B0"))) PPC_WEAK_FUNC(sub_83D497B0);
PPC_FUNC_IMPL(__imp__sub_83D497B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497B4"))) PPC_WEAK_FUNC(sub_83D497B4);
PPC_FUNC_IMPL(__imp__sub_83D497B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497B8"))) PPC_WEAK_FUNC(sub_83D497B8);
PPC_FUNC_IMPL(__imp__sub_83D497B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497BC"))) PPC_WEAK_FUNC(sub_83D497BC);
PPC_FUNC_IMPL(__imp__sub_83D497BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497C0"))) PPC_WEAK_FUNC(sub_83D497C0);
PPC_FUNC_IMPL(__imp__sub_83D497C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497C4"))) PPC_WEAK_FUNC(sub_83D497C4);
PPC_FUNC_IMPL(__imp__sub_83D497C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497C8"))) PPC_WEAK_FUNC(sub_83D497C8);
PPC_FUNC_IMPL(__imp__sub_83D497C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497CC"))) PPC_WEAK_FUNC(sub_83D497CC);
PPC_FUNC_IMPL(__imp__sub_83D497CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497D0"))) PPC_WEAK_FUNC(sub_83D497D0);
PPC_FUNC_IMPL(__imp__sub_83D497D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497D4"))) PPC_WEAK_FUNC(sub_83D497D4);
PPC_FUNC_IMPL(__imp__sub_83D497D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497D8"))) PPC_WEAK_FUNC(sub_83D497D8);
PPC_FUNC_IMPL(__imp__sub_83D497D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497DC"))) PPC_WEAK_FUNC(sub_83D497DC);
PPC_FUNC_IMPL(__imp__sub_83D497DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497E0"))) PPC_WEAK_FUNC(sub_83D497E0);
PPC_FUNC_IMPL(__imp__sub_83D497E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497E4"))) PPC_WEAK_FUNC(sub_83D497E4);
PPC_FUNC_IMPL(__imp__sub_83D497E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497E8"))) PPC_WEAK_FUNC(sub_83D497E8);
PPC_FUNC_IMPL(__imp__sub_83D497E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497EC"))) PPC_WEAK_FUNC(sub_83D497EC);
PPC_FUNC_IMPL(__imp__sub_83D497EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497F0"))) PPC_WEAK_FUNC(sub_83D497F0);
PPC_FUNC_IMPL(__imp__sub_83D497F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497F4"))) PPC_WEAK_FUNC(sub_83D497F4);
PPC_FUNC_IMPL(__imp__sub_83D497F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D497F8"))) PPC_WEAK_FUNC(sub_83D497F8);
PPC_FUNC_IMPL(__imp__sub_83D497F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D497FC"))) PPC_WEAK_FUNC(sub_83D497FC);
PPC_FUNC_IMPL(__imp__sub_83D497FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49800"))) PPC_WEAK_FUNC(sub_83D49800);
PPC_FUNC_IMPL(__imp__sub_83D49800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4980C"))) PPC_WEAK_FUNC(sub_83D4980C);
PPC_FUNC_IMPL(__imp__sub_83D4980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49810"))) PPC_WEAK_FUNC(sub_83D49810);
PPC_FUNC_IMPL(__imp__sub_83D49810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49814"))) PPC_WEAK_FUNC(sub_83D49814);
PPC_FUNC_IMPL(__imp__sub_83D49814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49818"))) PPC_WEAK_FUNC(sub_83D49818);
PPC_FUNC_IMPL(__imp__sub_83D49818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4981C"))) PPC_WEAK_FUNC(sub_83D4981C);
PPC_FUNC_IMPL(__imp__sub_83D4981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49820"))) PPC_WEAK_FUNC(sub_83D49820);
PPC_FUNC_IMPL(__imp__sub_83D49820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49824"))) PPC_WEAK_FUNC(sub_83D49824);
PPC_FUNC_IMPL(__imp__sub_83D49824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49828"))) PPC_WEAK_FUNC(sub_83D49828);
PPC_FUNC_IMPL(__imp__sub_83D49828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4982C"))) PPC_WEAK_FUNC(sub_83D4982C);
PPC_FUNC_IMPL(__imp__sub_83D4982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49830"))) PPC_WEAK_FUNC(sub_83D49830);
PPC_FUNC_IMPL(__imp__sub_83D49830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49834"))) PPC_WEAK_FUNC(sub_83D49834);
PPC_FUNC_IMPL(__imp__sub_83D49834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49838"))) PPC_WEAK_FUNC(sub_83D49838);
PPC_FUNC_IMPL(__imp__sub_83D49838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4983C"))) PPC_WEAK_FUNC(sub_83D4983C);
PPC_FUNC_IMPL(__imp__sub_83D4983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49840"))) PPC_WEAK_FUNC(sub_83D49840);
PPC_FUNC_IMPL(__imp__sub_83D49840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49844"))) PPC_WEAK_FUNC(sub_83D49844);
PPC_FUNC_IMPL(__imp__sub_83D49844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49848"))) PPC_WEAK_FUNC(sub_83D49848);
PPC_FUNC_IMPL(__imp__sub_83D49848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4984C"))) PPC_WEAK_FUNC(sub_83D4984C);
PPC_FUNC_IMPL(__imp__sub_83D4984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49850"))) PPC_WEAK_FUNC(sub_83D49850);
PPC_FUNC_IMPL(__imp__sub_83D49850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49854"))) PPC_WEAK_FUNC(sub_83D49854);
PPC_FUNC_IMPL(__imp__sub_83D49854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49858"))) PPC_WEAK_FUNC(sub_83D49858);
PPC_FUNC_IMPL(__imp__sub_83D49858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4985C"))) PPC_WEAK_FUNC(sub_83D4985C);
PPC_FUNC_IMPL(__imp__sub_83D4985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49860"))) PPC_WEAK_FUNC(sub_83D49860);
PPC_FUNC_IMPL(__imp__sub_83D49860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49864"))) PPC_WEAK_FUNC(sub_83D49864);
PPC_FUNC_IMPL(__imp__sub_83D49864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49868"))) PPC_WEAK_FUNC(sub_83D49868);
PPC_FUNC_IMPL(__imp__sub_83D49868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4986C"))) PPC_WEAK_FUNC(sub_83D4986C);
PPC_FUNC_IMPL(__imp__sub_83D4986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49870"))) PPC_WEAK_FUNC(sub_83D49870);
PPC_FUNC_IMPL(__imp__sub_83D49870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49874"))) PPC_WEAK_FUNC(sub_83D49874);
PPC_FUNC_IMPL(__imp__sub_83D49874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49878"))) PPC_WEAK_FUNC(sub_83D49878);
PPC_FUNC_IMPL(__imp__sub_83D49878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4987C"))) PPC_WEAK_FUNC(sub_83D4987C);
PPC_FUNC_IMPL(__imp__sub_83D4987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49880"))) PPC_WEAK_FUNC(sub_83D49880);
PPC_FUNC_IMPL(__imp__sub_83D49880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49884"))) PPC_WEAK_FUNC(sub_83D49884);
PPC_FUNC_IMPL(__imp__sub_83D49884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49888"))) PPC_WEAK_FUNC(sub_83D49888);
PPC_FUNC_IMPL(__imp__sub_83D49888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D49894"))) PPC_WEAK_FUNC(sub_83D49894);
PPC_FUNC_IMPL(__imp__sub_83D49894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49898"))) PPC_WEAK_FUNC(sub_83D49898);
PPC_FUNC_IMPL(__imp__sub_83D49898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4989C"))) PPC_WEAK_FUNC(sub_83D4989C);
PPC_FUNC_IMPL(__imp__sub_83D4989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498A0"))) PPC_WEAK_FUNC(sub_83D498A0);
PPC_FUNC_IMPL(__imp__sub_83D498A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498A4"))) PPC_WEAK_FUNC(sub_83D498A4);
PPC_FUNC_IMPL(__imp__sub_83D498A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498A8"))) PPC_WEAK_FUNC(sub_83D498A8);
PPC_FUNC_IMPL(__imp__sub_83D498A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498AC"))) PPC_WEAK_FUNC(sub_83D498AC);
PPC_FUNC_IMPL(__imp__sub_83D498AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498B0"))) PPC_WEAK_FUNC(sub_83D498B0);
PPC_FUNC_IMPL(__imp__sub_83D498B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498B4"))) PPC_WEAK_FUNC(sub_83D498B4);
PPC_FUNC_IMPL(__imp__sub_83D498B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498B8"))) PPC_WEAK_FUNC(sub_83D498B8);
PPC_FUNC_IMPL(__imp__sub_83D498B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498BC"))) PPC_WEAK_FUNC(sub_83D498BC);
PPC_FUNC_IMPL(__imp__sub_83D498BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498C0"))) PPC_WEAK_FUNC(sub_83D498C0);
PPC_FUNC_IMPL(__imp__sub_83D498C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498C4"))) PPC_WEAK_FUNC(sub_83D498C4);
PPC_FUNC_IMPL(__imp__sub_83D498C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498C8"))) PPC_WEAK_FUNC(sub_83D498C8);
PPC_FUNC_IMPL(__imp__sub_83D498C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498CC"))) PPC_WEAK_FUNC(sub_83D498CC);
PPC_FUNC_IMPL(__imp__sub_83D498CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498D0"))) PPC_WEAK_FUNC(sub_83D498D0);
PPC_FUNC_IMPL(__imp__sub_83D498D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498D4"))) PPC_WEAK_FUNC(sub_83D498D4);
PPC_FUNC_IMPL(__imp__sub_83D498D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498D8"))) PPC_WEAK_FUNC(sub_83D498D8);
PPC_FUNC_IMPL(__imp__sub_83D498D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498DC"))) PPC_WEAK_FUNC(sub_83D498DC);
PPC_FUNC_IMPL(__imp__sub_83D498DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498E0"))) PPC_WEAK_FUNC(sub_83D498E0);
PPC_FUNC_IMPL(__imp__sub_83D498E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498E4"))) PPC_WEAK_FUNC(sub_83D498E4);
PPC_FUNC_IMPL(__imp__sub_83D498E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498E8"))) PPC_WEAK_FUNC(sub_83D498E8);
PPC_FUNC_IMPL(__imp__sub_83D498E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498EC"))) PPC_WEAK_FUNC(sub_83D498EC);
PPC_FUNC_IMPL(__imp__sub_83D498EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498F0"))) PPC_WEAK_FUNC(sub_83D498F0);
PPC_FUNC_IMPL(__imp__sub_83D498F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498F4"))) PPC_WEAK_FUNC(sub_83D498F4);
PPC_FUNC_IMPL(__imp__sub_83D498F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D498F8"))) PPC_WEAK_FUNC(sub_83D498F8);
PPC_FUNC_IMPL(__imp__sub_83D498F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D498FC"))) PPC_WEAK_FUNC(sub_83D498FC);
PPC_FUNC_IMPL(__imp__sub_83D498FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49900"))) PPC_WEAK_FUNC(sub_83D49900);
PPC_FUNC_IMPL(__imp__sub_83D49900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D49904"))) PPC_WEAK_FUNC(sub_83D49904);
PPC_FUNC_IMPL(__imp__sub_83D49904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49908"))) PPC_WEAK_FUNC(sub_83D49908);
PPC_FUNC_IMPL(__imp__sub_83D49908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4990C"))) PPC_WEAK_FUNC(sub_83D4990C);
PPC_FUNC_IMPL(__imp__sub_83D4990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D49910"))) PPC_WEAK_FUNC(sub_83D49910);
PPC_FUNC_IMPL(__imp__sub_83D49910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4991C"))) PPC_WEAK_FUNC(sub_83D4991C);
PPC_FUNC_IMPL(__imp__sub_83D4991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

