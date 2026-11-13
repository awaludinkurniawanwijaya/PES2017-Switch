#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D4A250"))) PPC_WEAK_FUNC(sub_83D4A250);
PPC_FUNC_IMPL(__imp__sub_83D4A250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A254"))) PPC_WEAK_FUNC(sub_83D4A254);
PPC_FUNC_IMPL(__imp__sub_83D4A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A258"))) PPC_WEAK_FUNC(sub_83D4A258);
PPC_FUNC_IMPL(__imp__sub_83D4A258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A25C"))) PPC_WEAK_FUNC(sub_83D4A25C);
PPC_FUNC_IMPL(__imp__sub_83D4A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A260"))) PPC_WEAK_FUNC(sub_83D4A260);
PPC_FUNC_IMPL(__imp__sub_83D4A260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A264"))) PPC_WEAK_FUNC(sub_83D4A264);
PPC_FUNC_IMPL(__imp__sub_83D4A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A268"))) PPC_WEAK_FUNC(sub_83D4A268);
PPC_FUNC_IMPL(__imp__sub_83D4A268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-896
	ctx.r3.s64 = ctx.r11.s64 + -896;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A274"))) PPC_WEAK_FUNC(sub_83D4A274);
PPC_FUNC_IMPL(__imp__sub_83D4A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A278"))) PPC_WEAK_FUNC(sub_83D4A278);
PPC_FUNC_IMPL(__imp__sub_83D4A278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A27C"))) PPC_WEAK_FUNC(sub_83D4A27C);
PPC_FUNC_IMPL(__imp__sub_83D4A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A280"))) PPC_WEAK_FUNC(sub_83D4A280);
PPC_FUNC_IMPL(__imp__sub_83D4A280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A284"))) PPC_WEAK_FUNC(sub_83D4A284);
PPC_FUNC_IMPL(__imp__sub_83D4A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A288"))) PPC_WEAK_FUNC(sub_83D4A288);
PPC_FUNC_IMPL(__imp__sub_83D4A288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A28C"))) PPC_WEAK_FUNC(sub_83D4A28C);
PPC_FUNC_IMPL(__imp__sub_83D4A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A290"))) PPC_WEAK_FUNC(sub_83D4A290);
PPC_FUNC_IMPL(__imp__sub_83D4A290) {
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
	// addi r31,r11,-10860
	ctx.r31.s64 = ctx.r11.s64 + -10860;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d4a2c8
	if (cr6.lt) goto loc_83D4A2C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D4A2C8;
	sub_825952B8(ctx, base);
loc_83D4A2C8:
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

__attribute__((alias("__imp__sub_83D4A2F4"))) PPC_WEAK_FUNC(sub_83D4A2F4);
PPC_FUNC_IMPL(__imp__sub_83D4A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A2F8"))) PPC_WEAK_FUNC(sub_83D4A2F8);
PPC_FUNC_IMPL(__imp__sub_83D4A2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A2FC"))) PPC_WEAK_FUNC(sub_83D4A2FC);
PPC_FUNC_IMPL(__imp__sub_83D4A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A300"))) PPC_WEAK_FUNC(sub_83D4A300);
PPC_FUNC_IMPL(__imp__sub_83D4A300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A304"))) PPC_WEAK_FUNC(sub_83D4A304);
PPC_FUNC_IMPL(__imp__sub_83D4A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A308"))) PPC_WEAK_FUNC(sub_83D4A308);
PPC_FUNC_IMPL(__imp__sub_83D4A308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A30C"))) PPC_WEAK_FUNC(sub_83D4A30C);
PPC_FUNC_IMPL(__imp__sub_83D4A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A310"))) PPC_WEAK_FUNC(sub_83D4A310);
PPC_FUNC_IMPL(__imp__sub_83D4A310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A314"))) PPC_WEAK_FUNC(sub_83D4A314);
PPC_FUNC_IMPL(__imp__sub_83D4A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A318"))) PPC_WEAK_FUNC(sub_83D4A318);
PPC_FUNC_IMPL(__imp__sub_83D4A318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A31C"))) PPC_WEAK_FUNC(sub_83D4A31C);
PPC_FUNC_IMPL(__imp__sub_83D4A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A320"))) PPC_WEAK_FUNC(sub_83D4A320);
PPC_FUNC_IMPL(__imp__sub_83D4A320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A324"))) PPC_WEAK_FUNC(sub_83D4A324);
PPC_FUNC_IMPL(__imp__sub_83D4A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A328"))) PPC_WEAK_FUNC(sub_83D4A328);
PPC_FUNC_IMPL(__imp__sub_83D4A328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A32C"))) PPC_WEAK_FUNC(sub_83D4A32C);
PPC_FUNC_IMPL(__imp__sub_83D4A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A330"))) PPC_WEAK_FUNC(sub_83D4A330);
PPC_FUNC_IMPL(__imp__sub_83D4A330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A334"))) PPC_WEAK_FUNC(sub_83D4A334);
PPC_FUNC_IMPL(__imp__sub_83D4A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A338"))) PPC_WEAK_FUNC(sub_83D4A338);
PPC_FUNC_IMPL(__imp__sub_83D4A338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A33C"))) PPC_WEAK_FUNC(sub_83D4A33C);
PPC_FUNC_IMPL(__imp__sub_83D4A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A340"))) PPC_WEAK_FUNC(sub_83D4A340);
PPC_FUNC_IMPL(__imp__sub_83D4A340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A344"))) PPC_WEAK_FUNC(sub_83D4A344);
PPC_FUNC_IMPL(__imp__sub_83D4A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A348"))) PPC_WEAK_FUNC(sub_83D4A348);
PPC_FUNC_IMPL(__imp__sub_83D4A348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A34C"))) PPC_WEAK_FUNC(sub_83D4A34C);
PPC_FUNC_IMPL(__imp__sub_83D4A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A350"))) PPC_WEAK_FUNC(sub_83D4A350);
PPC_FUNC_IMPL(__imp__sub_83D4A350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A354"))) PPC_WEAK_FUNC(sub_83D4A354);
PPC_FUNC_IMPL(__imp__sub_83D4A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A358"))) PPC_WEAK_FUNC(sub_83D4A358);
PPC_FUNC_IMPL(__imp__sub_83D4A358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-528
	ctx.r3.s64 = ctx.r11.s64 + -528;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A364"))) PPC_WEAK_FUNC(sub_83D4A364);
PPC_FUNC_IMPL(__imp__sub_83D4A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A368"))) PPC_WEAK_FUNC(sub_83D4A368);
PPC_FUNC_IMPL(__imp__sub_83D4A368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A36C"))) PPC_WEAK_FUNC(sub_83D4A36C);
PPC_FUNC_IMPL(__imp__sub_83D4A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A370"))) PPC_WEAK_FUNC(sub_83D4A370);
PPC_FUNC_IMPL(__imp__sub_83D4A370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A374"))) PPC_WEAK_FUNC(sub_83D4A374);
PPC_FUNC_IMPL(__imp__sub_83D4A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A378"))) PPC_WEAK_FUNC(sub_83D4A378);
PPC_FUNC_IMPL(__imp__sub_83D4A378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A37C"))) PPC_WEAK_FUNC(sub_83D4A37C);
PPC_FUNC_IMPL(__imp__sub_83D4A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A380"))) PPC_WEAK_FUNC(sub_83D4A380);
PPC_FUNC_IMPL(__imp__sub_83D4A380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A384"))) PPC_WEAK_FUNC(sub_83D4A384);
PPC_FUNC_IMPL(__imp__sub_83D4A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A388"))) PPC_WEAK_FUNC(sub_83D4A388);
PPC_FUNC_IMPL(__imp__sub_83D4A388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A38C"))) PPC_WEAK_FUNC(sub_83D4A38C);
PPC_FUNC_IMPL(__imp__sub_83D4A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A390"))) PPC_WEAK_FUNC(sub_83D4A390);
PPC_FUNC_IMPL(__imp__sub_83D4A390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A394"))) PPC_WEAK_FUNC(sub_83D4A394);
PPC_FUNC_IMPL(__imp__sub_83D4A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A398"))) PPC_WEAK_FUNC(sub_83D4A398);
PPC_FUNC_IMPL(__imp__sub_83D4A398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A39C"))) PPC_WEAK_FUNC(sub_83D4A39C);
PPC_FUNC_IMPL(__imp__sub_83D4A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3A0"))) PPC_WEAK_FUNC(sub_83D4A3A0);
PPC_FUNC_IMPL(__imp__sub_83D4A3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3A4"))) PPC_WEAK_FUNC(sub_83D4A3A4);
PPC_FUNC_IMPL(__imp__sub_83D4A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3A8"))) PPC_WEAK_FUNC(sub_83D4A3A8);
PPC_FUNC_IMPL(__imp__sub_83D4A3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3AC"))) PPC_WEAK_FUNC(sub_83D4A3AC);
PPC_FUNC_IMPL(__imp__sub_83D4A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3B0"))) PPC_WEAK_FUNC(sub_83D4A3B0);
PPC_FUNC_IMPL(__imp__sub_83D4A3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3B4"))) PPC_WEAK_FUNC(sub_83D4A3B4);
PPC_FUNC_IMPL(__imp__sub_83D4A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3B8"))) PPC_WEAK_FUNC(sub_83D4A3B8);
PPC_FUNC_IMPL(__imp__sub_83D4A3B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3BC"))) PPC_WEAK_FUNC(sub_83D4A3BC);
PPC_FUNC_IMPL(__imp__sub_83D4A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3C0"))) PPC_WEAK_FUNC(sub_83D4A3C0);
PPC_FUNC_IMPL(__imp__sub_83D4A3C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3C4"))) PPC_WEAK_FUNC(sub_83D4A3C4);
PPC_FUNC_IMPL(__imp__sub_83D4A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3C8"))) PPC_WEAK_FUNC(sub_83D4A3C8);
PPC_FUNC_IMPL(__imp__sub_83D4A3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3CC"))) PPC_WEAK_FUNC(sub_83D4A3CC);
PPC_FUNC_IMPL(__imp__sub_83D4A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3D0"))) PPC_WEAK_FUNC(sub_83D4A3D0);
PPC_FUNC_IMPL(__imp__sub_83D4A3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3D4"))) PPC_WEAK_FUNC(sub_83D4A3D4);
PPC_FUNC_IMPL(__imp__sub_83D4A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3D8"))) PPC_WEAK_FUNC(sub_83D4A3D8);
PPC_FUNC_IMPL(__imp__sub_83D4A3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3DC"))) PPC_WEAK_FUNC(sub_83D4A3DC);
PPC_FUNC_IMPL(__imp__sub_83D4A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3E0"))) PPC_WEAK_FUNC(sub_83D4A3E0);
PPC_FUNC_IMPL(__imp__sub_83D4A3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A3EC"))) PPC_WEAK_FUNC(sub_83D4A3EC);
PPC_FUNC_IMPL(__imp__sub_83D4A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3F0"))) PPC_WEAK_FUNC(sub_83D4A3F0);
PPC_FUNC_IMPL(__imp__sub_83D4A3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3F4"))) PPC_WEAK_FUNC(sub_83D4A3F4);
PPC_FUNC_IMPL(__imp__sub_83D4A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A3F8"))) PPC_WEAK_FUNC(sub_83D4A3F8);
PPC_FUNC_IMPL(__imp__sub_83D4A3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A3FC"))) PPC_WEAK_FUNC(sub_83D4A3FC);
PPC_FUNC_IMPL(__imp__sub_83D4A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A400"))) PPC_WEAK_FUNC(sub_83D4A400);
PPC_FUNC_IMPL(__imp__sub_83D4A400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A404"))) PPC_WEAK_FUNC(sub_83D4A404);
PPC_FUNC_IMPL(__imp__sub_83D4A404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A408"))) PPC_WEAK_FUNC(sub_83D4A408);
PPC_FUNC_IMPL(__imp__sub_83D4A408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A40C"))) PPC_WEAK_FUNC(sub_83D4A40C);
PPC_FUNC_IMPL(__imp__sub_83D4A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A410"))) PPC_WEAK_FUNC(sub_83D4A410);
PPC_FUNC_IMPL(__imp__sub_83D4A410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A414"))) PPC_WEAK_FUNC(sub_83D4A414);
PPC_FUNC_IMPL(__imp__sub_83D4A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A418"))) PPC_WEAK_FUNC(sub_83D4A418);
PPC_FUNC_IMPL(__imp__sub_83D4A418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A41C"))) PPC_WEAK_FUNC(sub_83D4A41C);
PPC_FUNC_IMPL(__imp__sub_83D4A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A420"))) PPC_WEAK_FUNC(sub_83D4A420);
PPC_FUNC_IMPL(__imp__sub_83D4A420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A424"))) PPC_WEAK_FUNC(sub_83D4A424);
PPC_FUNC_IMPL(__imp__sub_83D4A424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A428"))) PPC_WEAK_FUNC(sub_83D4A428);
PPC_FUNC_IMPL(__imp__sub_83D4A428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A42C"))) PPC_WEAK_FUNC(sub_83D4A42C);
PPC_FUNC_IMPL(__imp__sub_83D4A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A430"))) PPC_WEAK_FUNC(sub_83D4A430);
PPC_FUNC_IMPL(__imp__sub_83D4A430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A434"))) PPC_WEAK_FUNC(sub_83D4A434);
PPC_FUNC_IMPL(__imp__sub_83D4A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A438"))) PPC_WEAK_FUNC(sub_83D4A438);
PPC_FUNC_IMPL(__imp__sub_83D4A438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A43C"))) PPC_WEAK_FUNC(sub_83D4A43C);
PPC_FUNC_IMPL(__imp__sub_83D4A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A440"))) PPC_WEAK_FUNC(sub_83D4A440);
PPC_FUNC_IMPL(__imp__sub_83D4A440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A444"))) PPC_WEAK_FUNC(sub_83D4A444);
PPC_FUNC_IMPL(__imp__sub_83D4A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A448"))) PPC_WEAK_FUNC(sub_83D4A448);
PPC_FUNC_IMPL(__imp__sub_83D4A448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A44C"))) PPC_WEAK_FUNC(sub_83D4A44C);
PPC_FUNC_IMPL(__imp__sub_83D4A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A450"))) PPC_WEAK_FUNC(sub_83D4A450);
PPC_FUNC_IMPL(__imp__sub_83D4A450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A454"))) PPC_WEAK_FUNC(sub_83D4A454);
PPC_FUNC_IMPL(__imp__sub_83D4A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A458"))) PPC_WEAK_FUNC(sub_83D4A458);
PPC_FUNC_IMPL(__imp__sub_83D4A458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A45C"))) PPC_WEAK_FUNC(sub_83D4A45C);
PPC_FUNC_IMPL(__imp__sub_83D4A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A460"))) PPC_WEAK_FUNC(sub_83D4A460);
PPC_FUNC_IMPL(__imp__sub_83D4A460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A464"))) PPC_WEAK_FUNC(sub_83D4A464);
PPC_FUNC_IMPL(__imp__sub_83D4A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A468"))) PPC_WEAK_FUNC(sub_83D4A468);
PPC_FUNC_IMPL(__imp__sub_83D4A468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A474"))) PPC_WEAK_FUNC(sub_83D4A474);
PPC_FUNC_IMPL(__imp__sub_83D4A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A478"))) PPC_WEAK_FUNC(sub_83D4A478);
PPC_FUNC_IMPL(__imp__sub_83D4A478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A47C"))) PPC_WEAK_FUNC(sub_83D4A47C);
PPC_FUNC_IMPL(__imp__sub_83D4A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A480"))) PPC_WEAK_FUNC(sub_83D4A480);
PPC_FUNC_IMPL(__imp__sub_83D4A480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A484"))) PPC_WEAK_FUNC(sub_83D4A484);
PPC_FUNC_IMPL(__imp__sub_83D4A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A488"))) PPC_WEAK_FUNC(sub_83D4A488);
PPC_FUNC_IMPL(__imp__sub_83D4A488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A48C"))) PPC_WEAK_FUNC(sub_83D4A48C);
PPC_FUNC_IMPL(__imp__sub_83D4A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A490"))) PPC_WEAK_FUNC(sub_83D4A490);
PPC_FUNC_IMPL(__imp__sub_83D4A490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A494"))) PPC_WEAK_FUNC(sub_83D4A494);
PPC_FUNC_IMPL(__imp__sub_83D4A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A498"))) PPC_WEAK_FUNC(sub_83D4A498);
PPC_FUNC_IMPL(__imp__sub_83D4A498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A49C"))) PPC_WEAK_FUNC(sub_83D4A49C);
PPC_FUNC_IMPL(__imp__sub_83D4A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4A0"))) PPC_WEAK_FUNC(sub_83D4A4A0);
PPC_FUNC_IMPL(__imp__sub_83D4A4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4A4"))) PPC_WEAK_FUNC(sub_83D4A4A4);
PPC_FUNC_IMPL(__imp__sub_83D4A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4A8"))) PPC_WEAK_FUNC(sub_83D4A4A8);
PPC_FUNC_IMPL(__imp__sub_83D4A4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4AC"))) PPC_WEAK_FUNC(sub_83D4A4AC);
PPC_FUNC_IMPL(__imp__sub_83D4A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4B0"))) PPC_WEAK_FUNC(sub_83D4A4B0);
PPC_FUNC_IMPL(__imp__sub_83D4A4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4B4"))) PPC_WEAK_FUNC(sub_83D4A4B4);
PPC_FUNC_IMPL(__imp__sub_83D4A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4B8"))) PPC_WEAK_FUNC(sub_83D4A4B8);
PPC_FUNC_IMPL(__imp__sub_83D4A4B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4BC"))) PPC_WEAK_FUNC(sub_83D4A4BC);
PPC_FUNC_IMPL(__imp__sub_83D4A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4C0"))) PPC_WEAK_FUNC(sub_83D4A4C0);
PPC_FUNC_IMPL(__imp__sub_83D4A4C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4C4"))) PPC_WEAK_FUNC(sub_83D4A4C4);
PPC_FUNC_IMPL(__imp__sub_83D4A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4C8"))) PPC_WEAK_FUNC(sub_83D4A4C8);
PPC_FUNC_IMPL(__imp__sub_83D4A4C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4CC"))) PPC_WEAK_FUNC(sub_83D4A4CC);
PPC_FUNC_IMPL(__imp__sub_83D4A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4D0"))) PPC_WEAK_FUNC(sub_83D4A4D0);
PPC_FUNC_IMPL(__imp__sub_83D4A4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4D4"))) PPC_WEAK_FUNC(sub_83D4A4D4);
PPC_FUNC_IMPL(__imp__sub_83D4A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4D8"))) PPC_WEAK_FUNC(sub_83D4A4D8);
PPC_FUNC_IMPL(__imp__sub_83D4A4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4DC"))) PPC_WEAK_FUNC(sub_83D4A4DC);
PPC_FUNC_IMPL(__imp__sub_83D4A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4E0"))) PPC_WEAK_FUNC(sub_83D4A4E0);
PPC_FUNC_IMPL(__imp__sub_83D4A4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4E4"))) PPC_WEAK_FUNC(sub_83D4A4E4);
PPC_FUNC_IMPL(__imp__sub_83D4A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4E8"))) PPC_WEAK_FUNC(sub_83D4A4E8);
PPC_FUNC_IMPL(__imp__sub_83D4A4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A4EC"))) PPC_WEAK_FUNC(sub_83D4A4EC);
PPC_FUNC_IMPL(__imp__sub_83D4A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A4F0"))) PPC_WEAK_FUNC(sub_83D4A4F0);
PPC_FUNC_IMPL(__imp__sub_83D4A4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A4FC"))) PPC_WEAK_FUNC(sub_83D4A4FC);
PPC_FUNC_IMPL(__imp__sub_83D4A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A500"))) PPC_WEAK_FUNC(sub_83D4A500);
PPC_FUNC_IMPL(__imp__sub_83D4A500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A504"))) PPC_WEAK_FUNC(sub_83D4A504);
PPC_FUNC_IMPL(__imp__sub_83D4A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A508"))) PPC_WEAK_FUNC(sub_83D4A508);
PPC_FUNC_IMPL(__imp__sub_83D4A508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A50C"))) PPC_WEAK_FUNC(sub_83D4A50C);
PPC_FUNC_IMPL(__imp__sub_83D4A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A510"))) PPC_WEAK_FUNC(sub_83D4A510);
PPC_FUNC_IMPL(__imp__sub_83D4A510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A514"))) PPC_WEAK_FUNC(sub_83D4A514);
PPC_FUNC_IMPL(__imp__sub_83D4A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A518"))) PPC_WEAK_FUNC(sub_83D4A518);
PPC_FUNC_IMPL(__imp__sub_83D4A518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A51C"))) PPC_WEAK_FUNC(sub_83D4A51C);
PPC_FUNC_IMPL(__imp__sub_83D4A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A520"))) PPC_WEAK_FUNC(sub_83D4A520);
PPC_FUNC_IMPL(__imp__sub_83D4A520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A524"))) PPC_WEAK_FUNC(sub_83D4A524);
PPC_FUNC_IMPL(__imp__sub_83D4A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A528"))) PPC_WEAK_FUNC(sub_83D4A528);
PPC_FUNC_IMPL(__imp__sub_83D4A528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A52C"))) PPC_WEAK_FUNC(sub_83D4A52C);
PPC_FUNC_IMPL(__imp__sub_83D4A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A530"))) PPC_WEAK_FUNC(sub_83D4A530);
PPC_FUNC_IMPL(__imp__sub_83D4A530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A534"))) PPC_WEAK_FUNC(sub_83D4A534);
PPC_FUNC_IMPL(__imp__sub_83D4A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A538"))) PPC_WEAK_FUNC(sub_83D4A538);
PPC_FUNC_IMPL(__imp__sub_83D4A538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A53C"))) PPC_WEAK_FUNC(sub_83D4A53C);
PPC_FUNC_IMPL(__imp__sub_83D4A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A540"))) PPC_WEAK_FUNC(sub_83D4A540);
PPC_FUNC_IMPL(__imp__sub_83D4A540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A544"))) PPC_WEAK_FUNC(sub_83D4A544);
PPC_FUNC_IMPL(__imp__sub_83D4A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A548"))) PPC_WEAK_FUNC(sub_83D4A548);
PPC_FUNC_IMPL(__imp__sub_83D4A548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A54C"))) PPC_WEAK_FUNC(sub_83D4A54C);
PPC_FUNC_IMPL(__imp__sub_83D4A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A550"))) PPC_WEAK_FUNC(sub_83D4A550);
PPC_FUNC_IMPL(__imp__sub_83D4A550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A554"))) PPC_WEAK_FUNC(sub_83D4A554);
PPC_FUNC_IMPL(__imp__sub_83D4A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A558"))) PPC_WEAK_FUNC(sub_83D4A558);
PPC_FUNC_IMPL(__imp__sub_83D4A558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A55C"))) PPC_WEAK_FUNC(sub_83D4A55C);
PPC_FUNC_IMPL(__imp__sub_83D4A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A560"))) PPC_WEAK_FUNC(sub_83D4A560);
PPC_FUNC_IMPL(__imp__sub_83D4A560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A564"))) PPC_WEAK_FUNC(sub_83D4A564);
PPC_FUNC_IMPL(__imp__sub_83D4A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A568"))) PPC_WEAK_FUNC(sub_83D4A568);
PPC_FUNC_IMPL(__imp__sub_83D4A568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A56C"))) PPC_WEAK_FUNC(sub_83D4A56C);
PPC_FUNC_IMPL(__imp__sub_83D4A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A570"))) PPC_WEAK_FUNC(sub_83D4A570);
PPC_FUNC_IMPL(__imp__sub_83D4A570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A574"))) PPC_WEAK_FUNC(sub_83D4A574);
PPC_FUNC_IMPL(__imp__sub_83D4A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A578"))) PPC_WEAK_FUNC(sub_83D4A578);
PPC_FUNC_IMPL(__imp__sub_83D4A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A584"))) PPC_WEAK_FUNC(sub_83D4A584);
PPC_FUNC_IMPL(__imp__sub_83D4A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A588"))) PPC_WEAK_FUNC(sub_83D4A588);
PPC_FUNC_IMPL(__imp__sub_83D4A588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A58C"))) PPC_WEAK_FUNC(sub_83D4A58C);
PPC_FUNC_IMPL(__imp__sub_83D4A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A590"))) PPC_WEAK_FUNC(sub_83D4A590);
PPC_FUNC_IMPL(__imp__sub_83D4A590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A594"))) PPC_WEAK_FUNC(sub_83D4A594);
PPC_FUNC_IMPL(__imp__sub_83D4A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A598"))) PPC_WEAK_FUNC(sub_83D4A598);
PPC_FUNC_IMPL(__imp__sub_83D4A598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A59C"))) PPC_WEAK_FUNC(sub_83D4A59C);
PPC_FUNC_IMPL(__imp__sub_83D4A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5A0"))) PPC_WEAK_FUNC(sub_83D4A5A0);
PPC_FUNC_IMPL(__imp__sub_83D4A5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5A4"))) PPC_WEAK_FUNC(sub_83D4A5A4);
PPC_FUNC_IMPL(__imp__sub_83D4A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5A8"))) PPC_WEAK_FUNC(sub_83D4A5A8);
PPC_FUNC_IMPL(__imp__sub_83D4A5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5AC"))) PPC_WEAK_FUNC(sub_83D4A5AC);
PPC_FUNC_IMPL(__imp__sub_83D4A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5B0"))) PPC_WEAK_FUNC(sub_83D4A5B0);
PPC_FUNC_IMPL(__imp__sub_83D4A5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5B4"))) PPC_WEAK_FUNC(sub_83D4A5B4);
PPC_FUNC_IMPL(__imp__sub_83D4A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5B8"))) PPC_WEAK_FUNC(sub_83D4A5B8);
PPC_FUNC_IMPL(__imp__sub_83D4A5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5BC"))) PPC_WEAK_FUNC(sub_83D4A5BC);
PPC_FUNC_IMPL(__imp__sub_83D4A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5C0"))) PPC_WEAK_FUNC(sub_83D4A5C0);
PPC_FUNC_IMPL(__imp__sub_83D4A5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5C4"))) PPC_WEAK_FUNC(sub_83D4A5C4);
PPC_FUNC_IMPL(__imp__sub_83D4A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5C8"))) PPC_WEAK_FUNC(sub_83D4A5C8);
PPC_FUNC_IMPL(__imp__sub_83D4A5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5CC"))) PPC_WEAK_FUNC(sub_83D4A5CC);
PPC_FUNC_IMPL(__imp__sub_83D4A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5D0"))) PPC_WEAK_FUNC(sub_83D4A5D0);
PPC_FUNC_IMPL(__imp__sub_83D4A5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5D4"))) PPC_WEAK_FUNC(sub_83D4A5D4);
PPC_FUNC_IMPL(__imp__sub_83D4A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5D8"))) PPC_WEAK_FUNC(sub_83D4A5D8);
PPC_FUNC_IMPL(__imp__sub_83D4A5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5DC"))) PPC_WEAK_FUNC(sub_83D4A5DC);
PPC_FUNC_IMPL(__imp__sub_83D4A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5E0"))) PPC_WEAK_FUNC(sub_83D4A5E0);
PPC_FUNC_IMPL(__imp__sub_83D4A5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5E4"))) PPC_WEAK_FUNC(sub_83D4A5E4);
PPC_FUNC_IMPL(__imp__sub_83D4A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5E8"))) PPC_WEAK_FUNC(sub_83D4A5E8);
PPC_FUNC_IMPL(__imp__sub_83D4A5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,956
	ctx.r3.s64 = ctx.r11.s64 + 956;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A5F4"))) PPC_WEAK_FUNC(sub_83D4A5F4);
PPC_FUNC_IMPL(__imp__sub_83D4A5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A5F8"))) PPC_WEAK_FUNC(sub_83D4A5F8);
PPC_FUNC_IMPL(__imp__sub_83D4A5F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A5FC"))) PPC_WEAK_FUNC(sub_83D4A5FC);
PPC_FUNC_IMPL(__imp__sub_83D4A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A600"))) PPC_WEAK_FUNC(sub_83D4A600);
PPC_FUNC_IMPL(__imp__sub_83D4A600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A604"))) PPC_WEAK_FUNC(sub_83D4A604);
PPC_FUNC_IMPL(__imp__sub_83D4A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A608"))) PPC_WEAK_FUNC(sub_83D4A608);
PPC_FUNC_IMPL(__imp__sub_83D4A608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A60C"))) PPC_WEAK_FUNC(sub_83D4A60C);
PPC_FUNC_IMPL(__imp__sub_83D4A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A610"))) PPC_WEAK_FUNC(sub_83D4A610);
PPC_FUNC_IMPL(__imp__sub_83D4A610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A614"))) PPC_WEAK_FUNC(sub_83D4A614);
PPC_FUNC_IMPL(__imp__sub_83D4A614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A618"))) PPC_WEAK_FUNC(sub_83D4A618);
PPC_FUNC_IMPL(__imp__sub_83D4A618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A61C"))) PPC_WEAK_FUNC(sub_83D4A61C);
PPC_FUNC_IMPL(__imp__sub_83D4A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A620"))) PPC_WEAK_FUNC(sub_83D4A620);
PPC_FUNC_IMPL(__imp__sub_83D4A620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A624"))) PPC_WEAK_FUNC(sub_83D4A624);
PPC_FUNC_IMPL(__imp__sub_83D4A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A628"))) PPC_WEAK_FUNC(sub_83D4A628);
PPC_FUNC_IMPL(__imp__sub_83D4A628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A62C"))) PPC_WEAK_FUNC(sub_83D4A62C);
PPC_FUNC_IMPL(__imp__sub_83D4A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A630"))) PPC_WEAK_FUNC(sub_83D4A630);
PPC_FUNC_IMPL(__imp__sub_83D4A630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A634"))) PPC_WEAK_FUNC(sub_83D4A634);
PPC_FUNC_IMPL(__imp__sub_83D4A634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A638"))) PPC_WEAK_FUNC(sub_83D4A638);
PPC_FUNC_IMPL(__imp__sub_83D4A638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A63C"))) PPC_WEAK_FUNC(sub_83D4A63C);
PPC_FUNC_IMPL(__imp__sub_83D4A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A640"))) PPC_WEAK_FUNC(sub_83D4A640);
PPC_FUNC_IMPL(__imp__sub_83D4A640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A644"))) PPC_WEAK_FUNC(sub_83D4A644);
PPC_FUNC_IMPL(__imp__sub_83D4A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A648"))) PPC_WEAK_FUNC(sub_83D4A648);
PPC_FUNC_IMPL(__imp__sub_83D4A648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A64C"))) PPC_WEAK_FUNC(sub_83D4A64C);
PPC_FUNC_IMPL(__imp__sub_83D4A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A650"))) PPC_WEAK_FUNC(sub_83D4A650);
PPC_FUNC_IMPL(__imp__sub_83D4A650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A654"))) PPC_WEAK_FUNC(sub_83D4A654);
PPC_FUNC_IMPL(__imp__sub_83D4A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A658"))) PPC_WEAK_FUNC(sub_83D4A658);
PPC_FUNC_IMPL(__imp__sub_83D4A658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,968
	ctx.r3.s64 = ctx.r11.s64 + 968;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A664"))) PPC_WEAK_FUNC(sub_83D4A664);
PPC_FUNC_IMPL(__imp__sub_83D4A664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A668"))) PPC_WEAK_FUNC(sub_83D4A668);
PPC_FUNC_IMPL(__imp__sub_83D4A668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A66C"))) PPC_WEAK_FUNC(sub_83D4A66C);
PPC_FUNC_IMPL(__imp__sub_83D4A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A670"))) PPC_WEAK_FUNC(sub_83D4A670);
PPC_FUNC_IMPL(__imp__sub_83D4A670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A674"))) PPC_WEAK_FUNC(sub_83D4A674);
PPC_FUNC_IMPL(__imp__sub_83D4A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A678"))) PPC_WEAK_FUNC(sub_83D4A678);
PPC_FUNC_IMPL(__imp__sub_83D4A678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A67C"))) PPC_WEAK_FUNC(sub_83D4A67C);
PPC_FUNC_IMPL(__imp__sub_83D4A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A680"))) PPC_WEAK_FUNC(sub_83D4A680);
PPC_FUNC_IMPL(__imp__sub_83D4A680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A684"))) PPC_WEAK_FUNC(sub_83D4A684);
PPC_FUNC_IMPL(__imp__sub_83D4A684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A688"))) PPC_WEAK_FUNC(sub_83D4A688);
PPC_FUNC_IMPL(__imp__sub_83D4A688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A68C"))) PPC_WEAK_FUNC(sub_83D4A68C);
PPC_FUNC_IMPL(__imp__sub_83D4A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A690"))) PPC_WEAK_FUNC(sub_83D4A690);
PPC_FUNC_IMPL(__imp__sub_83D4A690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A694"))) PPC_WEAK_FUNC(sub_83D4A694);
PPC_FUNC_IMPL(__imp__sub_83D4A694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A698"))) PPC_WEAK_FUNC(sub_83D4A698);
PPC_FUNC_IMPL(__imp__sub_83D4A698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A69C"))) PPC_WEAK_FUNC(sub_83D4A69C);
PPC_FUNC_IMPL(__imp__sub_83D4A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6A0"))) PPC_WEAK_FUNC(sub_83D4A6A0);
PPC_FUNC_IMPL(__imp__sub_83D4A6A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6A4"))) PPC_WEAK_FUNC(sub_83D4A6A4);
PPC_FUNC_IMPL(__imp__sub_83D4A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6A8"))) PPC_WEAK_FUNC(sub_83D4A6A8);
PPC_FUNC_IMPL(__imp__sub_83D4A6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6AC"))) PPC_WEAK_FUNC(sub_83D4A6AC);
PPC_FUNC_IMPL(__imp__sub_83D4A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6B0"))) PPC_WEAK_FUNC(sub_83D4A6B0);
PPC_FUNC_IMPL(__imp__sub_83D4A6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6B4"))) PPC_WEAK_FUNC(sub_83D4A6B4);
PPC_FUNC_IMPL(__imp__sub_83D4A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6B8"))) PPC_WEAK_FUNC(sub_83D4A6B8);
PPC_FUNC_IMPL(__imp__sub_83D4A6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6BC"))) PPC_WEAK_FUNC(sub_83D4A6BC);
PPC_FUNC_IMPL(__imp__sub_83D4A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6C0"))) PPC_WEAK_FUNC(sub_83D4A6C0);
PPC_FUNC_IMPL(__imp__sub_83D4A6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6C4"))) PPC_WEAK_FUNC(sub_83D4A6C4);
PPC_FUNC_IMPL(__imp__sub_83D4A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6C8"))) PPC_WEAK_FUNC(sub_83D4A6C8);
PPC_FUNC_IMPL(__imp__sub_83D4A6C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6CC"))) PPC_WEAK_FUNC(sub_83D4A6CC);
PPC_FUNC_IMPL(__imp__sub_83D4A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6D0"))) PPC_WEAK_FUNC(sub_83D4A6D0);
PPC_FUNC_IMPL(__imp__sub_83D4A6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6D4"))) PPC_WEAK_FUNC(sub_83D4A6D4);
PPC_FUNC_IMPL(__imp__sub_83D4A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6D8"))) PPC_WEAK_FUNC(sub_83D4A6D8);
PPC_FUNC_IMPL(__imp__sub_83D4A6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6DC"))) PPC_WEAK_FUNC(sub_83D4A6DC);
PPC_FUNC_IMPL(__imp__sub_83D4A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6E0"))) PPC_WEAK_FUNC(sub_83D4A6E0);
PPC_FUNC_IMPL(__imp__sub_83D4A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D4A6EC"))) PPC_WEAK_FUNC(sub_83D4A6EC);
PPC_FUNC_IMPL(__imp__sub_83D4A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D4A6F0"))) PPC_WEAK_FUNC(sub_83D4A6F0);
PPC_FUNC_IMPL(__imp__sub_83D4A6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4A6F4"))) PPC_WEAK_FUNC(sub_83D4A6F4);
PPC_FUNC_IMPL(__imp__sub_83D4A6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

