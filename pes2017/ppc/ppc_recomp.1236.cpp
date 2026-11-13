#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D3EFA0"))) PPC_WEAK_FUNC(sub_83D3EFA0);
PPC_FUNC_IMPL(__imp__sub_83D3EFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3EFAC"))) PPC_WEAK_FUNC(sub_83D3EFAC);
PPC_FUNC_IMPL(__imp__sub_83D3EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3EFB0"))) PPC_WEAK_FUNC(sub_83D3EFB0);
PPC_FUNC_IMPL(__imp__sub_83D3EFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3EFB4"))) PPC_WEAK_FUNC(sub_83D3EFB4);
PPC_FUNC_IMPL(__imp__sub_83D3EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3EFB8"))) PPC_WEAK_FUNC(sub_83D3EFB8);
PPC_FUNC_IMPL(__imp__sub_83D3EFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3EFBC"))) PPC_WEAK_FUNC(sub_83D3EFBC);
PPC_FUNC_IMPL(__imp__sub_83D3EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3EFC0"))) PPC_WEAK_FUNC(sub_83D3EFC0);
PPC_FUNC_IMPL(__imp__sub_83D3EFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3EFC4"))) PPC_WEAK_FUNC(sub_83D3EFC4);
PPC_FUNC_IMPL(__imp__sub_83D3EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3EFC8"))) PPC_WEAK_FUNC(sub_83D3EFC8);
PPC_FUNC_IMPL(__imp__sub_83D3EFC8) {
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
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r31,r11,12668
	ctx.r31.s64 = ctx.r11.s64 + 12668;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d3f000
	if (cr6.lt) goto loc_83D3F000;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D3F000;
	sub_825952B8(ctx, base);
loc_83D3F000:
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

__attribute__((alias("__imp__sub_83D3F02C"))) PPC_WEAK_FUNC(sub_83D3F02C);
PPC_FUNC_IMPL(__imp__sub_83D3F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F030"))) PPC_WEAK_FUNC(sub_83D3F030);
PPC_FUNC_IMPL(__imp__sub_83D3F030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F034"))) PPC_WEAK_FUNC(sub_83D3F034);
PPC_FUNC_IMPL(__imp__sub_83D3F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F038"))) PPC_WEAK_FUNC(sub_83D3F038);
PPC_FUNC_IMPL(__imp__sub_83D3F038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F03C"))) PPC_WEAK_FUNC(sub_83D3F03C);
PPC_FUNC_IMPL(__imp__sub_83D3F03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F040"))) PPC_WEAK_FUNC(sub_83D3F040);
PPC_FUNC_IMPL(__imp__sub_83D3F040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F044"))) PPC_WEAK_FUNC(sub_83D3F044);
PPC_FUNC_IMPL(__imp__sub_83D3F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F048"))) PPC_WEAK_FUNC(sub_83D3F048);
PPC_FUNC_IMPL(__imp__sub_83D3F048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F04C"))) PPC_WEAK_FUNC(sub_83D3F04C);
PPC_FUNC_IMPL(__imp__sub_83D3F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F050"))) PPC_WEAK_FUNC(sub_83D3F050);
PPC_FUNC_IMPL(__imp__sub_83D3F050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F054"))) PPC_WEAK_FUNC(sub_83D3F054);
PPC_FUNC_IMPL(__imp__sub_83D3F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F058"))) PPC_WEAK_FUNC(sub_83D3F058);
PPC_FUNC_IMPL(__imp__sub_83D3F058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F05C"))) PPC_WEAK_FUNC(sub_83D3F05C);
PPC_FUNC_IMPL(__imp__sub_83D3F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F060"))) PPC_WEAK_FUNC(sub_83D3F060);
PPC_FUNC_IMPL(__imp__sub_83D3F060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F064"))) PPC_WEAK_FUNC(sub_83D3F064);
PPC_FUNC_IMPL(__imp__sub_83D3F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F068"))) PPC_WEAK_FUNC(sub_83D3F068);
PPC_FUNC_IMPL(__imp__sub_83D3F068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F06C"))) PPC_WEAK_FUNC(sub_83D3F06C);
PPC_FUNC_IMPL(__imp__sub_83D3F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F070"))) PPC_WEAK_FUNC(sub_83D3F070);
PPC_FUNC_IMPL(__imp__sub_83D3F070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F074"))) PPC_WEAK_FUNC(sub_83D3F074);
PPC_FUNC_IMPL(__imp__sub_83D3F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F078"))) PPC_WEAK_FUNC(sub_83D3F078);
PPC_FUNC_IMPL(__imp__sub_83D3F078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F07C"))) PPC_WEAK_FUNC(sub_83D3F07C);
PPC_FUNC_IMPL(__imp__sub_83D3F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F080"))) PPC_WEAK_FUNC(sub_83D3F080);
PPC_FUNC_IMPL(__imp__sub_83D3F080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F084"))) PPC_WEAK_FUNC(sub_83D3F084);
PPC_FUNC_IMPL(__imp__sub_83D3F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F088"))) PPC_WEAK_FUNC(sub_83D3F088);
PPC_FUNC_IMPL(__imp__sub_83D3F088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F08C"))) PPC_WEAK_FUNC(sub_83D3F08C);
PPC_FUNC_IMPL(__imp__sub_83D3F08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F090"))) PPC_WEAK_FUNC(sub_83D3F090);
PPC_FUNC_IMPL(__imp__sub_83D3F090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,27540
	ctx.r3.s64 = ctx.r11.s64 + 27540;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F09C"))) PPC_WEAK_FUNC(sub_83D3F09C);
PPC_FUNC_IMPL(__imp__sub_83D3F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0A0"))) PPC_WEAK_FUNC(sub_83D3F0A0);
PPC_FUNC_IMPL(__imp__sub_83D3F0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0A4"))) PPC_WEAK_FUNC(sub_83D3F0A4);
PPC_FUNC_IMPL(__imp__sub_83D3F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0A8"))) PPC_WEAK_FUNC(sub_83D3F0A8);
PPC_FUNC_IMPL(__imp__sub_83D3F0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0AC"))) PPC_WEAK_FUNC(sub_83D3F0AC);
PPC_FUNC_IMPL(__imp__sub_83D3F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0B0"))) PPC_WEAK_FUNC(sub_83D3F0B0);
PPC_FUNC_IMPL(__imp__sub_83D3F0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0B4"))) PPC_WEAK_FUNC(sub_83D3F0B4);
PPC_FUNC_IMPL(__imp__sub_83D3F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0B8"))) PPC_WEAK_FUNC(sub_83D3F0B8);
PPC_FUNC_IMPL(__imp__sub_83D3F0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0BC"))) PPC_WEAK_FUNC(sub_83D3F0BC);
PPC_FUNC_IMPL(__imp__sub_83D3F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0C0"))) PPC_WEAK_FUNC(sub_83D3F0C0);
PPC_FUNC_IMPL(__imp__sub_83D3F0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0C4"))) PPC_WEAK_FUNC(sub_83D3F0C4);
PPC_FUNC_IMPL(__imp__sub_83D3F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0C8"))) PPC_WEAK_FUNC(sub_83D3F0C8);
PPC_FUNC_IMPL(__imp__sub_83D3F0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0CC"))) PPC_WEAK_FUNC(sub_83D3F0CC);
PPC_FUNC_IMPL(__imp__sub_83D3F0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0D0"))) PPC_WEAK_FUNC(sub_83D3F0D0);
PPC_FUNC_IMPL(__imp__sub_83D3F0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0D4"))) PPC_WEAK_FUNC(sub_83D3F0D4);
PPC_FUNC_IMPL(__imp__sub_83D3F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0D8"))) PPC_WEAK_FUNC(sub_83D3F0D8);
PPC_FUNC_IMPL(__imp__sub_83D3F0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0DC"))) PPC_WEAK_FUNC(sub_83D3F0DC);
PPC_FUNC_IMPL(__imp__sub_83D3F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0E0"))) PPC_WEAK_FUNC(sub_83D3F0E0);
PPC_FUNC_IMPL(__imp__sub_83D3F0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0E4"))) PPC_WEAK_FUNC(sub_83D3F0E4);
PPC_FUNC_IMPL(__imp__sub_83D3F0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0E8"))) PPC_WEAK_FUNC(sub_83D3F0E8);
PPC_FUNC_IMPL(__imp__sub_83D3F0E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0EC"))) PPC_WEAK_FUNC(sub_83D3F0EC);
PPC_FUNC_IMPL(__imp__sub_83D3F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0F0"))) PPC_WEAK_FUNC(sub_83D3F0F0);
PPC_FUNC_IMPL(__imp__sub_83D3F0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0F4"))) PPC_WEAK_FUNC(sub_83D3F0F4);
PPC_FUNC_IMPL(__imp__sub_83D3F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F0F8"))) PPC_WEAK_FUNC(sub_83D3F0F8);
PPC_FUNC_IMPL(__imp__sub_83D3F0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F0FC"))) PPC_WEAK_FUNC(sub_83D3F0FC);
PPC_FUNC_IMPL(__imp__sub_83D3F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F100"))) PPC_WEAK_FUNC(sub_83D3F100);
PPC_FUNC_IMPL(__imp__sub_83D3F100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F104"))) PPC_WEAK_FUNC(sub_83D3F104);
PPC_FUNC_IMPL(__imp__sub_83D3F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F108"))) PPC_WEAK_FUNC(sub_83D3F108);
PPC_FUNC_IMPL(__imp__sub_83D3F108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F10C"))) PPC_WEAK_FUNC(sub_83D3F10C);
PPC_FUNC_IMPL(__imp__sub_83D3F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F110"))) PPC_WEAK_FUNC(sub_83D3F110);
PPC_FUNC_IMPL(__imp__sub_83D3F110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F114"))) PPC_WEAK_FUNC(sub_83D3F114);
PPC_FUNC_IMPL(__imp__sub_83D3F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F118"))) PPC_WEAK_FUNC(sub_83D3F118);
PPC_FUNC_IMPL(__imp__sub_83D3F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F124"))) PPC_WEAK_FUNC(sub_83D3F124);
PPC_FUNC_IMPL(__imp__sub_83D3F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F128"))) PPC_WEAK_FUNC(sub_83D3F128);
PPC_FUNC_IMPL(__imp__sub_83D3F128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F12C"))) PPC_WEAK_FUNC(sub_83D3F12C);
PPC_FUNC_IMPL(__imp__sub_83D3F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F130"))) PPC_WEAK_FUNC(sub_83D3F130);
PPC_FUNC_IMPL(__imp__sub_83D3F130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F134"))) PPC_WEAK_FUNC(sub_83D3F134);
PPC_FUNC_IMPL(__imp__sub_83D3F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F138"))) PPC_WEAK_FUNC(sub_83D3F138);
PPC_FUNC_IMPL(__imp__sub_83D3F138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F13C"))) PPC_WEAK_FUNC(sub_83D3F13C);
PPC_FUNC_IMPL(__imp__sub_83D3F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F140"))) PPC_WEAK_FUNC(sub_83D3F140);
PPC_FUNC_IMPL(__imp__sub_83D3F140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F144"))) PPC_WEAK_FUNC(sub_83D3F144);
PPC_FUNC_IMPL(__imp__sub_83D3F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F148"))) PPC_WEAK_FUNC(sub_83D3F148);
PPC_FUNC_IMPL(__imp__sub_83D3F148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F14C"))) PPC_WEAK_FUNC(sub_83D3F14C);
PPC_FUNC_IMPL(__imp__sub_83D3F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F150"))) PPC_WEAK_FUNC(sub_83D3F150);
PPC_FUNC_IMPL(__imp__sub_83D3F150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F154"))) PPC_WEAK_FUNC(sub_83D3F154);
PPC_FUNC_IMPL(__imp__sub_83D3F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F158"))) PPC_WEAK_FUNC(sub_83D3F158);
PPC_FUNC_IMPL(__imp__sub_83D3F158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F15C"))) PPC_WEAK_FUNC(sub_83D3F15C);
PPC_FUNC_IMPL(__imp__sub_83D3F15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F160"))) PPC_WEAK_FUNC(sub_83D3F160);
PPC_FUNC_IMPL(__imp__sub_83D3F160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F164"))) PPC_WEAK_FUNC(sub_83D3F164);
PPC_FUNC_IMPL(__imp__sub_83D3F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F168"))) PPC_WEAK_FUNC(sub_83D3F168);
PPC_FUNC_IMPL(__imp__sub_83D3F168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F16C"))) PPC_WEAK_FUNC(sub_83D3F16C);
PPC_FUNC_IMPL(__imp__sub_83D3F16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F170"))) PPC_WEAK_FUNC(sub_83D3F170);
PPC_FUNC_IMPL(__imp__sub_83D3F170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F174"))) PPC_WEAK_FUNC(sub_83D3F174);
PPC_FUNC_IMPL(__imp__sub_83D3F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F178"))) PPC_WEAK_FUNC(sub_83D3F178);
PPC_FUNC_IMPL(__imp__sub_83D3F178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F17C"))) PPC_WEAK_FUNC(sub_83D3F17C);
PPC_FUNC_IMPL(__imp__sub_83D3F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F180"))) PPC_WEAK_FUNC(sub_83D3F180);
PPC_FUNC_IMPL(__imp__sub_83D3F180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F184"))) PPC_WEAK_FUNC(sub_83D3F184);
PPC_FUNC_IMPL(__imp__sub_83D3F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F188"))) PPC_WEAK_FUNC(sub_83D3F188);
PPC_FUNC_IMPL(__imp__sub_83D3F188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F18C"))) PPC_WEAK_FUNC(sub_83D3F18C);
PPC_FUNC_IMPL(__imp__sub_83D3F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F190"))) PPC_WEAK_FUNC(sub_83D3F190);
PPC_FUNC_IMPL(__imp__sub_83D3F190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F194"))) PPC_WEAK_FUNC(sub_83D3F194);
PPC_FUNC_IMPL(__imp__sub_83D3F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F198"))) PPC_WEAK_FUNC(sub_83D3F198);
PPC_FUNC_IMPL(__imp__sub_83D3F198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F19C"))) PPC_WEAK_FUNC(sub_83D3F19C);
PPC_FUNC_IMPL(__imp__sub_83D3F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1A0"))) PPC_WEAK_FUNC(sub_83D3F1A0);
PPC_FUNC_IMPL(__imp__sub_83D3F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F1AC"))) PPC_WEAK_FUNC(sub_83D3F1AC);
PPC_FUNC_IMPL(__imp__sub_83D3F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1B0"))) PPC_WEAK_FUNC(sub_83D3F1B0);
PPC_FUNC_IMPL(__imp__sub_83D3F1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1B4"))) PPC_WEAK_FUNC(sub_83D3F1B4);
PPC_FUNC_IMPL(__imp__sub_83D3F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1B8"))) PPC_WEAK_FUNC(sub_83D3F1B8);
PPC_FUNC_IMPL(__imp__sub_83D3F1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1BC"))) PPC_WEAK_FUNC(sub_83D3F1BC);
PPC_FUNC_IMPL(__imp__sub_83D3F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1C0"))) PPC_WEAK_FUNC(sub_83D3F1C0);
PPC_FUNC_IMPL(__imp__sub_83D3F1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1C4"))) PPC_WEAK_FUNC(sub_83D3F1C4);
PPC_FUNC_IMPL(__imp__sub_83D3F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1C8"))) PPC_WEAK_FUNC(sub_83D3F1C8);
PPC_FUNC_IMPL(__imp__sub_83D3F1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1CC"))) PPC_WEAK_FUNC(sub_83D3F1CC);
PPC_FUNC_IMPL(__imp__sub_83D3F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1D0"))) PPC_WEAK_FUNC(sub_83D3F1D0);
PPC_FUNC_IMPL(__imp__sub_83D3F1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1D4"))) PPC_WEAK_FUNC(sub_83D3F1D4);
PPC_FUNC_IMPL(__imp__sub_83D3F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1D8"))) PPC_WEAK_FUNC(sub_83D3F1D8);
PPC_FUNC_IMPL(__imp__sub_83D3F1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1DC"))) PPC_WEAK_FUNC(sub_83D3F1DC);
PPC_FUNC_IMPL(__imp__sub_83D3F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1E0"))) PPC_WEAK_FUNC(sub_83D3F1E0);
PPC_FUNC_IMPL(__imp__sub_83D3F1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1E4"))) PPC_WEAK_FUNC(sub_83D3F1E4);
PPC_FUNC_IMPL(__imp__sub_83D3F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1E8"))) PPC_WEAK_FUNC(sub_83D3F1E8);
PPC_FUNC_IMPL(__imp__sub_83D3F1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1EC"))) PPC_WEAK_FUNC(sub_83D3F1EC);
PPC_FUNC_IMPL(__imp__sub_83D3F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1F0"))) PPC_WEAK_FUNC(sub_83D3F1F0);
PPC_FUNC_IMPL(__imp__sub_83D3F1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1F4"))) PPC_WEAK_FUNC(sub_83D3F1F4);
PPC_FUNC_IMPL(__imp__sub_83D3F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F1F8"))) PPC_WEAK_FUNC(sub_83D3F1F8);
PPC_FUNC_IMPL(__imp__sub_83D3F1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F1FC"))) PPC_WEAK_FUNC(sub_83D3F1FC);
PPC_FUNC_IMPL(__imp__sub_83D3F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F200"))) PPC_WEAK_FUNC(sub_83D3F200);
PPC_FUNC_IMPL(__imp__sub_83D3F200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F204"))) PPC_WEAK_FUNC(sub_83D3F204);
PPC_FUNC_IMPL(__imp__sub_83D3F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F208"))) PPC_WEAK_FUNC(sub_83D3F208);
PPC_FUNC_IMPL(__imp__sub_83D3F208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F20C"))) PPC_WEAK_FUNC(sub_83D3F20C);
PPC_FUNC_IMPL(__imp__sub_83D3F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F210"))) PPC_WEAK_FUNC(sub_83D3F210);
PPC_FUNC_IMPL(__imp__sub_83D3F210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F214"))) PPC_WEAK_FUNC(sub_83D3F214);
PPC_FUNC_IMPL(__imp__sub_83D3F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F218"))) PPC_WEAK_FUNC(sub_83D3F218);
PPC_FUNC_IMPL(__imp__sub_83D3F218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F21C"))) PPC_WEAK_FUNC(sub_83D3F21C);
PPC_FUNC_IMPL(__imp__sub_83D3F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F220"))) PPC_WEAK_FUNC(sub_83D3F220);
PPC_FUNC_IMPL(__imp__sub_83D3F220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F224"))) PPC_WEAK_FUNC(sub_83D3F224);
PPC_FUNC_IMPL(__imp__sub_83D3F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F228"))) PPC_WEAK_FUNC(sub_83D3F228);
PPC_FUNC_IMPL(__imp__sub_83D3F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,28648
	ctx.r3.s64 = ctx.r11.s64 + 28648;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F234"))) PPC_WEAK_FUNC(sub_83D3F234);
PPC_FUNC_IMPL(__imp__sub_83D3F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F238"))) PPC_WEAK_FUNC(sub_83D3F238);
PPC_FUNC_IMPL(__imp__sub_83D3F238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F23C"))) PPC_WEAK_FUNC(sub_83D3F23C);
PPC_FUNC_IMPL(__imp__sub_83D3F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F240"))) PPC_WEAK_FUNC(sub_83D3F240);
PPC_FUNC_IMPL(__imp__sub_83D3F240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F244"))) PPC_WEAK_FUNC(sub_83D3F244);
PPC_FUNC_IMPL(__imp__sub_83D3F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F248"))) PPC_WEAK_FUNC(sub_83D3F248);
PPC_FUNC_IMPL(__imp__sub_83D3F248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F24C"))) PPC_WEAK_FUNC(sub_83D3F24C);
PPC_FUNC_IMPL(__imp__sub_83D3F24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F250"))) PPC_WEAK_FUNC(sub_83D3F250);
PPC_FUNC_IMPL(__imp__sub_83D3F250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F254"))) PPC_WEAK_FUNC(sub_83D3F254);
PPC_FUNC_IMPL(__imp__sub_83D3F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F258"))) PPC_WEAK_FUNC(sub_83D3F258);
PPC_FUNC_IMPL(__imp__sub_83D3F258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F25C"))) PPC_WEAK_FUNC(sub_83D3F25C);
PPC_FUNC_IMPL(__imp__sub_83D3F25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F260"))) PPC_WEAK_FUNC(sub_83D3F260);
PPC_FUNC_IMPL(__imp__sub_83D3F260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F264"))) PPC_WEAK_FUNC(sub_83D3F264);
PPC_FUNC_IMPL(__imp__sub_83D3F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F268"))) PPC_WEAK_FUNC(sub_83D3F268);
PPC_FUNC_IMPL(__imp__sub_83D3F268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F26C"))) PPC_WEAK_FUNC(sub_83D3F26C);
PPC_FUNC_IMPL(__imp__sub_83D3F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F270"))) PPC_WEAK_FUNC(sub_83D3F270);
PPC_FUNC_IMPL(__imp__sub_83D3F270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F274"))) PPC_WEAK_FUNC(sub_83D3F274);
PPC_FUNC_IMPL(__imp__sub_83D3F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F278"))) PPC_WEAK_FUNC(sub_83D3F278);
PPC_FUNC_IMPL(__imp__sub_83D3F278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F27C"))) PPC_WEAK_FUNC(sub_83D3F27C);
PPC_FUNC_IMPL(__imp__sub_83D3F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F280"))) PPC_WEAK_FUNC(sub_83D3F280);
PPC_FUNC_IMPL(__imp__sub_83D3F280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F284"))) PPC_WEAK_FUNC(sub_83D3F284);
PPC_FUNC_IMPL(__imp__sub_83D3F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F288"))) PPC_WEAK_FUNC(sub_83D3F288);
PPC_FUNC_IMPL(__imp__sub_83D3F288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F28C"))) PPC_WEAK_FUNC(sub_83D3F28C);
PPC_FUNC_IMPL(__imp__sub_83D3F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F290"))) PPC_WEAK_FUNC(sub_83D3F290);
PPC_FUNC_IMPL(__imp__sub_83D3F290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F294"))) PPC_WEAK_FUNC(sub_83D3F294);
PPC_FUNC_IMPL(__imp__sub_83D3F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F298"))) PPC_WEAK_FUNC(sub_83D3F298);
PPC_FUNC_IMPL(__imp__sub_83D3F298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F29C"))) PPC_WEAK_FUNC(sub_83D3F29C);
PPC_FUNC_IMPL(__imp__sub_83D3F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2A0"))) PPC_WEAK_FUNC(sub_83D3F2A0);
PPC_FUNC_IMPL(__imp__sub_83D3F2A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2A4"))) PPC_WEAK_FUNC(sub_83D3F2A4);
PPC_FUNC_IMPL(__imp__sub_83D3F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2A8"))) PPC_WEAK_FUNC(sub_83D3F2A8);
PPC_FUNC_IMPL(__imp__sub_83D3F2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2AC"))) PPC_WEAK_FUNC(sub_83D3F2AC);
PPC_FUNC_IMPL(__imp__sub_83D3F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2B0"))) PPC_WEAK_FUNC(sub_83D3F2B0);
PPC_FUNC_IMPL(__imp__sub_83D3F2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F2BC"))) PPC_WEAK_FUNC(sub_83D3F2BC);
PPC_FUNC_IMPL(__imp__sub_83D3F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2C0"))) PPC_WEAK_FUNC(sub_83D3F2C0);
PPC_FUNC_IMPL(__imp__sub_83D3F2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2C4"))) PPC_WEAK_FUNC(sub_83D3F2C4);
PPC_FUNC_IMPL(__imp__sub_83D3F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2C8"))) PPC_WEAK_FUNC(sub_83D3F2C8);
PPC_FUNC_IMPL(__imp__sub_83D3F2C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2CC"))) PPC_WEAK_FUNC(sub_83D3F2CC);
PPC_FUNC_IMPL(__imp__sub_83D3F2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2D0"))) PPC_WEAK_FUNC(sub_83D3F2D0);
PPC_FUNC_IMPL(__imp__sub_83D3F2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2D4"))) PPC_WEAK_FUNC(sub_83D3F2D4);
PPC_FUNC_IMPL(__imp__sub_83D3F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2D8"))) PPC_WEAK_FUNC(sub_83D3F2D8);
PPC_FUNC_IMPL(__imp__sub_83D3F2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2DC"))) PPC_WEAK_FUNC(sub_83D3F2DC);
PPC_FUNC_IMPL(__imp__sub_83D3F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2E0"))) PPC_WEAK_FUNC(sub_83D3F2E0);
PPC_FUNC_IMPL(__imp__sub_83D3F2E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2E4"))) PPC_WEAK_FUNC(sub_83D3F2E4);
PPC_FUNC_IMPL(__imp__sub_83D3F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2E8"))) PPC_WEAK_FUNC(sub_83D3F2E8);
PPC_FUNC_IMPL(__imp__sub_83D3F2E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2EC"))) PPC_WEAK_FUNC(sub_83D3F2EC);
PPC_FUNC_IMPL(__imp__sub_83D3F2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2F0"))) PPC_WEAK_FUNC(sub_83D3F2F0);
PPC_FUNC_IMPL(__imp__sub_83D3F2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2F4"))) PPC_WEAK_FUNC(sub_83D3F2F4);
PPC_FUNC_IMPL(__imp__sub_83D3F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F2F8"))) PPC_WEAK_FUNC(sub_83D3F2F8);
PPC_FUNC_IMPL(__imp__sub_83D3F2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F2FC"))) PPC_WEAK_FUNC(sub_83D3F2FC);
PPC_FUNC_IMPL(__imp__sub_83D3F2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F300"))) PPC_WEAK_FUNC(sub_83D3F300);
PPC_FUNC_IMPL(__imp__sub_83D3F300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F304"))) PPC_WEAK_FUNC(sub_83D3F304);
PPC_FUNC_IMPL(__imp__sub_83D3F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F308"))) PPC_WEAK_FUNC(sub_83D3F308);
PPC_FUNC_IMPL(__imp__sub_83D3F308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F30C"))) PPC_WEAK_FUNC(sub_83D3F30C);
PPC_FUNC_IMPL(__imp__sub_83D3F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F310"))) PPC_WEAK_FUNC(sub_83D3F310);
PPC_FUNC_IMPL(__imp__sub_83D3F310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F314"))) PPC_WEAK_FUNC(sub_83D3F314);
PPC_FUNC_IMPL(__imp__sub_83D3F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F318"))) PPC_WEAK_FUNC(sub_83D3F318);
PPC_FUNC_IMPL(__imp__sub_83D3F318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F31C"))) PPC_WEAK_FUNC(sub_83D3F31C);
PPC_FUNC_IMPL(__imp__sub_83D3F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F320"))) PPC_WEAK_FUNC(sub_83D3F320);
PPC_FUNC_IMPL(__imp__sub_83D3F320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F324"))) PPC_WEAK_FUNC(sub_83D3F324);
PPC_FUNC_IMPL(__imp__sub_83D3F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F328"))) PPC_WEAK_FUNC(sub_83D3F328);
PPC_FUNC_IMPL(__imp__sub_83D3F328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F32C"))) PPC_WEAK_FUNC(sub_83D3F32C);
PPC_FUNC_IMPL(__imp__sub_83D3F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F330"))) PPC_WEAK_FUNC(sub_83D3F330);
PPC_FUNC_IMPL(__imp__sub_83D3F330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F334"))) PPC_WEAK_FUNC(sub_83D3F334);
PPC_FUNC_IMPL(__imp__sub_83D3F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F338"))) PPC_WEAK_FUNC(sub_83D3F338);
PPC_FUNC_IMPL(__imp__sub_83D3F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F344"))) PPC_WEAK_FUNC(sub_83D3F344);
PPC_FUNC_IMPL(__imp__sub_83D3F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F348"))) PPC_WEAK_FUNC(sub_83D3F348);
PPC_FUNC_IMPL(__imp__sub_83D3F348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F34C"))) PPC_WEAK_FUNC(sub_83D3F34C);
PPC_FUNC_IMPL(__imp__sub_83D3F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F350"))) PPC_WEAK_FUNC(sub_83D3F350);
PPC_FUNC_IMPL(__imp__sub_83D3F350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F354"))) PPC_WEAK_FUNC(sub_83D3F354);
PPC_FUNC_IMPL(__imp__sub_83D3F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F358"))) PPC_WEAK_FUNC(sub_83D3F358);
PPC_FUNC_IMPL(__imp__sub_83D3F358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F35C"))) PPC_WEAK_FUNC(sub_83D3F35C);
PPC_FUNC_IMPL(__imp__sub_83D3F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F360"))) PPC_WEAK_FUNC(sub_83D3F360);
PPC_FUNC_IMPL(__imp__sub_83D3F360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F364"))) PPC_WEAK_FUNC(sub_83D3F364);
PPC_FUNC_IMPL(__imp__sub_83D3F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F368"))) PPC_WEAK_FUNC(sub_83D3F368);
PPC_FUNC_IMPL(__imp__sub_83D3F368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F36C"))) PPC_WEAK_FUNC(sub_83D3F36C);
PPC_FUNC_IMPL(__imp__sub_83D3F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F370"))) PPC_WEAK_FUNC(sub_83D3F370);
PPC_FUNC_IMPL(__imp__sub_83D3F370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F374"))) PPC_WEAK_FUNC(sub_83D3F374);
PPC_FUNC_IMPL(__imp__sub_83D3F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F378"))) PPC_WEAK_FUNC(sub_83D3F378);
PPC_FUNC_IMPL(__imp__sub_83D3F378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F37C"))) PPC_WEAK_FUNC(sub_83D3F37C);
PPC_FUNC_IMPL(__imp__sub_83D3F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F380"))) PPC_WEAK_FUNC(sub_83D3F380);
PPC_FUNC_IMPL(__imp__sub_83D3F380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F384"))) PPC_WEAK_FUNC(sub_83D3F384);
PPC_FUNC_IMPL(__imp__sub_83D3F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F388"))) PPC_WEAK_FUNC(sub_83D3F388);
PPC_FUNC_IMPL(__imp__sub_83D3F388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F38C"))) PPC_WEAK_FUNC(sub_83D3F38C);
PPC_FUNC_IMPL(__imp__sub_83D3F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F390"))) PPC_WEAK_FUNC(sub_83D3F390);
PPC_FUNC_IMPL(__imp__sub_83D3F390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F394"))) PPC_WEAK_FUNC(sub_83D3F394);
PPC_FUNC_IMPL(__imp__sub_83D3F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F398"))) PPC_WEAK_FUNC(sub_83D3F398);
PPC_FUNC_IMPL(__imp__sub_83D3F398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F39C"))) PPC_WEAK_FUNC(sub_83D3F39C);
PPC_FUNC_IMPL(__imp__sub_83D3F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3A0"))) PPC_WEAK_FUNC(sub_83D3F3A0);
PPC_FUNC_IMPL(__imp__sub_83D3F3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3A4"))) PPC_WEAK_FUNC(sub_83D3F3A4);
PPC_FUNC_IMPL(__imp__sub_83D3F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3A8"))) PPC_WEAK_FUNC(sub_83D3F3A8);
PPC_FUNC_IMPL(__imp__sub_83D3F3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3AC"))) PPC_WEAK_FUNC(sub_83D3F3AC);
PPC_FUNC_IMPL(__imp__sub_83D3F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3B0"))) PPC_WEAK_FUNC(sub_83D3F3B0);
PPC_FUNC_IMPL(__imp__sub_83D3F3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3B4"))) PPC_WEAK_FUNC(sub_83D3F3B4);
PPC_FUNC_IMPL(__imp__sub_83D3F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3B8"))) PPC_WEAK_FUNC(sub_83D3F3B8);
PPC_FUNC_IMPL(__imp__sub_83D3F3B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3BC"))) PPC_WEAK_FUNC(sub_83D3F3BC);
PPC_FUNC_IMPL(__imp__sub_83D3F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3C0"))) PPC_WEAK_FUNC(sub_83D3F3C0);
PPC_FUNC_IMPL(__imp__sub_83D3F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3F3CC"))) PPC_WEAK_FUNC(sub_83D3F3CC);
PPC_FUNC_IMPL(__imp__sub_83D3F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3D0"))) PPC_WEAK_FUNC(sub_83D3F3D0);
PPC_FUNC_IMPL(__imp__sub_83D3F3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3D4"))) PPC_WEAK_FUNC(sub_83D3F3D4);
PPC_FUNC_IMPL(__imp__sub_83D3F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3D8"))) PPC_WEAK_FUNC(sub_83D3F3D8);
PPC_FUNC_IMPL(__imp__sub_83D3F3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3DC"))) PPC_WEAK_FUNC(sub_83D3F3DC);
PPC_FUNC_IMPL(__imp__sub_83D3F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3E0"))) PPC_WEAK_FUNC(sub_83D3F3E0);
PPC_FUNC_IMPL(__imp__sub_83D3F3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3E4"))) PPC_WEAK_FUNC(sub_83D3F3E4);
PPC_FUNC_IMPL(__imp__sub_83D3F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3E8"))) PPC_WEAK_FUNC(sub_83D3F3E8);
PPC_FUNC_IMPL(__imp__sub_83D3F3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3EC"))) PPC_WEAK_FUNC(sub_83D3F3EC);
PPC_FUNC_IMPL(__imp__sub_83D3F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3F0"))) PPC_WEAK_FUNC(sub_83D3F3F0);
PPC_FUNC_IMPL(__imp__sub_83D3F3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3F4"))) PPC_WEAK_FUNC(sub_83D3F3F4);
PPC_FUNC_IMPL(__imp__sub_83D3F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F3F8"))) PPC_WEAK_FUNC(sub_83D3F3F8);
PPC_FUNC_IMPL(__imp__sub_83D3F3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F3FC"))) PPC_WEAK_FUNC(sub_83D3F3FC);
PPC_FUNC_IMPL(__imp__sub_83D3F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F400"))) PPC_WEAK_FUNC(sub_83D3F400);
PPC_FUNC_IMPL(__imp__sub_83D3F400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F404"))) PPC_WEAK_FUNC(sub_83D3F404);
PPC_FUNC_IMPL(__imp__sub_83D3F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F408"))) PPC_WEAK_FUNC(sub_83D3F408);
PPC_FUNC_IMPL(__imp__sub_83D3F408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F40C"))) PPC_WEAK_FUNC(sub_83D3F40C);
PPC_FUNC_IMPL(__imp__sub_83D3F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F410"))) PPC_WEAK_FUNC(sub_83D3F410);
PPC_FUNC_IMPL(__imp__sub_83D3F410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F414"))) PPC_WEAK_FUNC(sub_83D3F414);
PPC_FUNC_IMPL(__imp__sub_83D3F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F418"))) PPC_WEAK_FUNC(sub_83D3F418);
PPC_FUNC_IMPL(__imp__sub_83D3F418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F41C"))) PPC_WEAK_FUNC(sub_83D3F41C);
PPC_FUNC_IMPL(__imp__sub_83D3F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F420"))) PPC_WEAK_FUNC(sub_83D3F420);
PPC_FUNC_IMPL(__imp__sub_83D3F420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F424"))) PPC_WEAK_FUNC(sub_83D3F424);
PPC_FUNC_IMPL(__imp__sub_83D3F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F428"))) PPC_WEAK_FUNC(sub_83D3F428);
PPC_FUNC_IMPL(__imp__sub_83D3F428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F42C"))) PPC_WEAK_FUNC(sub_83D3F42C);
PPC_FUNC_IMPL(__imp__sub_83D3F42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F430"))) PPC_WEAK_FUNC(sub_83D3F430);
PPC_FUNC_IMPL(__imp__sub_83D3F430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F434"))) PPC_WEAK_FUNC(sub_83D3F434);
PPC_FUNC_IMPL(__imp__sub_83D3F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D3F438"))) PPC_WEAK_FUNC(sub_83D3F438);
PPC_FUNC_IMPL(__imp__sub_83D3F438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3F43C"))) PPC_WEAK_FUNC(sub_83D3F43C);
PPC_FUNC_IMPL(__imp__sub_83D3F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

