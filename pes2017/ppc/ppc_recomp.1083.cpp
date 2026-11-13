#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D110F0"))) PPC_WEAK_FUNC(sub_83D110F0);
PPC_FUNC_IMPL(__imp__sub_83D110F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D110F4"))) PPC_WEAK_FUNC(sub_83D110F4);
PPC_FUNC_IMPL(__imp__sub_83D110F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D110F8"))) PPC_WEAK_FUNC(sub_83D110F8);
PPC_FUNC_IMPL(__imp__sub_83D110F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D110FC"))) PPC_WEAK_FUNC(sub_83D110FC);
PPC_FUNC_IMPL(__imp__sub_83D110FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11100"))) PPC_WEAK_FUNC(sub_83D11100);
PPC_FUNC_IMPL(__imp__sub_83D11100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1110C"))) PPC_WEAK_FUNC(sub_83D1110C);
PPC_FUNC_IMPL(__imp__sub_83D1110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11110"))) PPC_WEAK_FUNC(sub_83D11110);
PPC_FUNC_IMPL(__imp__sub_83D11110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11114"))) PPC_WEAK_FUNC(sub_83D11114);
PPC_FUNC_IMPL(__imp__sub_83D11114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11118"))) PPC_WEAK_FUNC(sub_83D11118);
PPC_FUNC_IMPL(__imp__sub_83D11118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1111C"))) PPC_WEAK_FUNC(sub_83D1111C);
PPC_FUNC_IMPL(__imp__sub_83D1111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11120"))) PPC_WEAK_FUNC(sub_83D11120);
PPC_FUNC_IMPL(__imp__sub_83D11120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11124"))) PPC_WEAK_FUNC(sub_83D11124);
PPC_FUNC_IMPL(__imp__sub_83D11124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11128"))) PPC_WEAK_FUNC(sub_83D11128);
PPC_FUNC_IMPL(__imp__sub_83D11128) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,9252
	ctx.r31.s64 = ctx.r11.s64 + 9252;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11160
	if (cr6.lt) goto loc_83D11160;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11160;
	sub_825952B8(ctx, base);
loc_83D11160:
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

__attribute__((alias("__imp__sub_83D1118C"))) PPC_WEAK_FUNC(sub_83D1118C);
PPC_FUNC_IMPL(__imp__sub_83D1118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11190"))) PPC_WEAK_FUNC(sub_83D11190);
PPC_FUNC_IMPL(__imp__sub_83D11190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11194"))) PPC_WEAK_FUNC(sub_83D11194);
PPC_FUNC_IMPL(__imp__sub_83D11194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11198"))) PPC_WEAK_FUNC(sub_83D11198);
PPC_FUNC_IMPL(__imp__sub_83D11198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1119C"))) PPC_WEAK_FUNC(sub_83D1119C);
PPC_FUNC_IMPL(__imp__sub_83D1119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111A0"))) PPC_WEAK_FUNC(sub_83D111A0);
PPC_FUNC_IMPL(__imp__sub_83D111A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111A4"))) PPC_WEAK_FUNC(sub_83D111A4);
PPC_FUNC_IMPL(__imp__sub_83D111A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111A8"))) PPC_WEAK_FUNC(sub_83D111A8);
PPC_FUNC_IMPL(__imp__sub_83D111A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111AC"))) PPC_WEAK_FUNC(sub_83D111AC);
PPC_FUNC_IMPL(__imp__sub_83D111AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111B0"))) PPC_WEAK_FUNC(sub_83D111B0);
PPC_FUNC_IMPL(__imp__sub_83D111B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111B4"))) PPC_WEAK_FUNC(sub_83D111B4);
PPC_FUNC_IMPL(__imp__sub_83D111B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111B8"))) PPC_WEAK_FUNC(sub_83D111B8);
PPC_FUNC_IMPL(__imp__sub_83D111B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111BC"))) PPC_WEAK_FUNC(sub_83D111BC);
PPC_FUNC_IMPL(__imp__sub_83D111BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111C0"))) PPC_WEAK_FUNC(sub_83D111C0);
PPC_FUNC_IMPL(__imp__sub_83D111C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111C4"))) PPC_WEAK_FUNC(sub_83D111C4);
PPC_FUNC_IMPL(__imp__sub_83D111C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111C8"))) PPC_WEAK_FUNC(sub_83D111C8);
PPC_FUNC_IMPL(__imp__sub_83D111C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111CC"))) PPC_WEAK_FUNC(sub_83D111CC);
PPC_FUNC_IMPL(__imp__sub_83D111CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111D0"))) PPC_WEAK_FUNC(sub_83D111D0);
PPC_FUNC_IMPL(__imp__sub_83D111D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111D4"))) PPC_WEAK_FUNC(sub_83D111D4);
PPC_FUNC_IMPL(__imp__sub_83D111D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111D8"))) PPC_WEAK_FUNC(sub_83D111D8);
PPC_FUNC_IMPL(__imp__sub_83D111D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111DC"))) PPC_WEAK_FUNC(sub_83D111DC);
PPC_FUNC_IMPL(__imp__sub_83D111DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111E0"))) PPC_WEAK_FUNC(sub_83D111E0);
PPC_FUNC_IMPL(__imp__sub_83D111E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111E4"))) PPC_WEAK_FUNC(sub_83D111E4);
PPC_FUNC_IMPL(__imp__sub_83D111E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111E8"))) PPC_WEAK_FUNC(sub_83D111E8);
PPC_FUNC_IMPL(__imp__sub_83D111E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D111EC"))) PPC_WEAK_FUNC(sub_83D111EC);
PPC_FUNC_IMPL(__imp__sub_83D111EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D111F0"))) PPC_WEAK_FUNC(sub_83D111F0);
PPC_FUNC_IMPL(__imp__sub_83D111F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D111FC"))) PPC_WEAK_FUNC(sub_83D111FC);
PPC_FUNC_IMPL(__imp__sub_83D111FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11200"))) PPC_WEAK_FUNC(sub_83D11200);
PPC_FUNC_IMPL(__imp__sub_83D11200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11204"))) PPC_WEAK_FUNC(sub_83D11204);
PPC_FUNC_IMPL(__imp__sub_83D11204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11208"))) PPC_WEAK_FUNC(sub_83D11208);
PPC_FUNC_IMPL(__imp__sub_83D11208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1120C"))) PPC_WEAK_FUNC(sub_83D1120C);
PPC_FUNC_IMPL(__imp__sub_83D1120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11210"))) PPC_WEAK_FUNC(sub_83D11210);
PPC_FUNC_IMPL(__imp__sub_83D11210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11214"))) PPC_WEAK_FUNC(sub_83D11214);
PPC_FUNC_IMPL(__imp__sub_83D11214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11218"))) PPC_WEAK_FUNC(sub_83D11218);
PPC_FUNC_IMPL(__imp__sub_83D11218) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,9408
	ctx.r31.s64 = ctx.r11.s64 + 9408;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11250
	if (cr6.lt) goto loc_83D11250;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11250;
	sub_825952B8(ctx, base);
loc_83D11250:
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

__attribute__((alias("__imp__sub_83D1127C"))) PPC_WEAK_FUNC(sub_83D1127C);
PPC_FUNC_IMPL(__imp__sub_83D1127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11280"))) PPC_WEAK_FUNC(sub_83D11280);
PPC_FUNC_IMPL(__imp__sub_83D11280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11284"))) PPC_WEAK_FUNC(sub_83D11284);
PPC_FUNC_IMPL(__imp__sub_83D11284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11288"))) PPC_WEAK_FUNC(sub_83D11288);
PPC_FUNC_IMPL(__imp__sub_83D11288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1128C"))) PPC_WEAK_FUNC(sub_83D1128C);
PPC_FUNC_IMPL(__imp__sub_83D1128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11290"))) PPC_WEAK_FUNC(sub_83D11290);
PPC_FUNC_IMPL(__imp__sub_83D11290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11294"))) PPC_WEAK_FUNC(sub_83D11294);
PPC_FUNC_IMPL(__imp__sub_83D11294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11298"))) PPC_WEAK_FUNC(sub_83D11298);
PPC_FUNC_IMPL(__imp__sub_83D11298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1129C"))) PPC_WEAK_FUNC(sub_83D1129C);
PPC_FUNC_IMPL(__imp__sub_83D1129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112A0"))) PPC_WEAK_FUNC(sub_83D112A0);
PPC_FUNC_IMPL(__imp__sub_83D112A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112A4"))) PPC_WEAK_FUNC(sub_83D112A4);
PPC_FUNC_IMPL(__imp__sub_83D112A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112A8"))) PPC_WEAK_FUNC(sub_83D112A8);
PPC_FUNC_IMPL(__imp__sub_83D112A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112AC"))) PPC_WEAK_FUNC(sub_83D112AC);
PPC_FUNC_IMPL(__imp__sub_83D112AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112B0"))) PPC_WEAK_FUNC(sub_83D112B0);
PPC_FUNC_IMPL(__imp__sub_83D112B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112B4"))) PPC_WEAK_FUNC(sub_83D112B4);
PPC_FUNC_IMPL(__imp__sub_83D112B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112B8"))) PPC_WEAK_FUNC(sub_83D112B8);
PPC_FUNC_IMPL(__imp__sub_83D112B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112BC"))) PPC_WEAK_FUNC(sub_83D112BC);
PPC_FUNC_IMPL(__imp__sub_83D112BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112C0"))) PPC_WEAK_FUNC(sub_83D112C0);
PPC_FUNC_IMPL(__imp__sub_83D112C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112C4"))) PPC_WEAK_FUNC(sub_83D112C4);
PPC_FUNC_IMPL(__imp__sub_83D112C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112C8"))) PPC_WEAK_FUNC(sub_83D112C8);
PPC_FUNC_IMPL(__imp__sub_83D112C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112CC"))) PPC_WEAK_FUNC(sub_83D112CC);
PPC_FUNC_IMPL(__imp__sub_83D112CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112D0"))) PPC_WEAK_FUNC(sub_83D112D0);
PPC_FUNC_IMPL(__imp__sub_83D112D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112D4"))) PPC_WEAK_FUNC(sub_83D112D4);
PPC_FUNC_IMPL(__imp__sub_83D112D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112D8"))) PPC_WEAK_FUNC(sub_83D112D8);
PPC_FUNC_IMPL(__imp__sub_83D112D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112DC"))) PPC_WEAK_FUNC(sub_83D112DC);
PPC_FUNC_IMPL(__imp__sub_83D112DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112E0"))) PPC_WEAK_FUNC(sub_83D112E0);
PPC_FUNC_IMPL(__imp__sub_83D112E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D112EC"))) PPC_WEAK_FUNC(sub_83D112EC);
PPC_FUNC_IMPL(__imp__sub_83D112EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112F0"))) PPC_WEAK_FUNC(sub_83D112F0);
PPC_FUNC_IMPL(__imp__sub_83D112F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112F4"))) PPC_WEAK_FUNC(sub_83D112F4);
PPC_FUNC_IMPL(__imp__sub_83D112F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D112F8"))) PPC_WEAK_FUNC(sub_83D112F8);
PPC_FUNC_IMPL(__imp__sub_83D112F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D112FC"))) PPC_WEAK_FUNC(sub_83D112FC);
PPC_FUNC_IMPL(__imp__sub_83D112FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11300"))) PPC_WEAK_FUNC(sub_83D11300);
PPC_FUNC_IMPL(__imp__sub_83D11300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11304"))) PPC_WEAK_FUNC(sub_83D11304);
PPC_FUNC_IMPL(__imp__sub_83D11304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11308"))) PPC_WEAK_FUNC(sub_83D11308);
PPC_FUNC_IMPL(__imp__sub_83D11308) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,9564
	ctx.r31.s64 = ctx.r11.s64 + 9564;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11340
	if (cr6.lt) goto loc_83D11340;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11340;
	sub_825952B8(ctx, base);
loc_83D11340:
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

__attribute__((alias("__imp__sub_83D1136C"))) PPC_WEAK_FUNC(sub_83D1136C);
PPC_FUNC_IMPL(__imp__sub_83D1136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11370"))) PPC_WEAK_FUNC(sub_83D11370);
PPC_FUNC_IMPL(__imp__sub_83D11370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11374"))) PPC_WEAK_FUNC(sub_83D11374);
PPC_FUNC_IMPL(__imp__sub_83D11374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11378"))) PPC_WEAK_FUNC(sub_83D11378);
PPC_FUNC_IMPL(__imp__sub_83D11378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1137C"))) PPC_WEAK_FUNC(sub_83D1137C);
PPC_FUNC_IMPL(__imp__sub_83D1137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11380"))) PPC_WEAK_FUNC(sub_83D11380);
PPC_FUNC_IMPL(__imp__sub_83D11380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11384"))) PPC_WEAK_FUNC(sub_83D11384);
PPC_FUNC_IMPL(__imp__sub_83D11384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11388"))) PPC_WEAK_FUNC(sub_83D11388);
PPC_FUNC_IMPL(__imp__sub_83D11388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1138C"))) PPC_WEAK_FUNC(sub_83D1138C);
PPC_FUNC_IMPL(__imp__sub_83D1138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11390"))) PPC_WEAK_FUNC(sub_83D11390);
PPC_FUNC_IMPL(__imp__sub_83D11390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11394"))) PPC_WEAK_FUNC(sub_83D11394);
PPC_FUNC_IMPL(__imp__sub_83D11394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11398"))) PPC_WEAK_FUNC(sub_83D11398);
PPC_FUNC_IMPL(__imp__sub_83D11398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1139C"))) PPC_WEAK_FUNC(sub_83D1139C);
PPC_FUNC_IMPL(__imp__sub_83D1139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113A0"))) PPC_WEAK_FUNC(sub_83D113A0);
PPC_FUNC_IMPL(__imp__sub_83D113A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113A4"))) PPC_WEAK_FUNC(sub_83D113A4);
PPC_FUNC_IMPL(__imp__sub_83D113A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113A8"))) PPC_WEAK_FUNC(sub_83D113A8);
PPC_FUNC_IMPL(__imp__sub_83D113A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113AC"))) PPC_WEAK_FUNC(sub_83D113AC);
PPC_FUNC_IMPL(__imp__sub_83D113AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113B0"))) PPC_WEAK_FUNC(sub_83D113B0);
PPC_FUNC_IMPL(__imp__sub_83D113B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113B4"))) PPC_WEAK_FUNC(sub_83D113B4);
PPC_FUNC_IMPL(__imp__sub_83D113B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113B8"))) PPC_WEAK_FUNC(sub_83D113B8);
PPC_FUNC_IMPL(__imp__sub_83D113B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113BC"))) PPC_WEAK_FUNC(sub_83D113BC);
PPC_FUNC_IMPL(__imp__sub_83D113BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113C0"))) PPC_WEAK_FUNC(sub_83D113C0);
PPC_FUNC_IMPL(__imp__sub_83D113C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113C4"))) PPC_WEAK_FUNC(sub_83D113C4);
PPC_FUNC_IMPL(__imp__sub_83D113C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113C8"))) PPC_WEAK_FUNC(sub_83D113C8);
PPC_FUNC_IMPL(__imp__sub_83D113C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113CC"))) PPC_WEAK_FUNC(sub_83D113CC);
PPC_FUNC_IMPL(__imp__sub_83D113CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113D0"))) PPC_WEAK_FUNC(sub_83D113D0);
PPC_FUNC_IMPL(__imp__sub_83D113D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D113DC"))) PPC_WEAK_FUNC(sub_83D113DC);
PPC_FUNC_IMPL(__imp__sub_83D113DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113E0"))) PPC_WEAK_FUNC(sub_83D113E0);
PPC_FUNC_IMPL(__imp__sub_83D113E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113E4"))) PPC_WEAK_FUNC(sub_83D113E4);
PPC_FUNC_IMPL(__imp__sub_83D113E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113E8"))) PPC_WEAK_FUNC(sub_83D113E8);
PPC_FUNC_IMPL(__imp__sub_83D113E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113EC"))) PPC_WEAK_FUNC(sub_83D113EC);
PPC_FUNC_IMPL(__imp__sub_83D113EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113F0"))) PPC_WEAK_FUNC(sub_83D113F0);
PPC_FUNC_IMPL(__imp__sub_83D113F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D113F4"))) PPC_WEAK_FUNC(sub_83D113F4);
PPC_FUNC_IMPL(__imp__sub_83D113F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D113F8"))) PPC_WEAK_FUNC(sub_83D113F8);
PPC_FUNC_IMPL(__imp__sub_83D113F8) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,9720
	ctx.r31.s64 = ctx.r11.s64 + 9720;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11430
	if (cr6.lt) goto loc_83D11430;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11430;
	sub_825952B8(ctx, base);
loc_83D11430:
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

__attribute__((alias("__imp__sub_83D1145C"))) PPC_WEAK_FUNC(sub_83D1145C);
PPC_FUNC_IMPL(__imp__sub_83D1145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11460"))) PPC_WEAK_FUNC(sub_83D11460);
PPC_FUNC_IMPL(__imp__sub_83D11460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11464"))) PPC_WEAK_FUNC(sub_83D11464);
PPC_FUNC_IMPL(__imp__sub_83D11464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11468"))) PPC_WEAK_FUNC(sub_83D11468);
PPC_FUNC_IMPL(__imp__sub_83D11468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1146C"))) PPC_WEAK_FUNC(sub_83D1146C);
PPC_FUNC_IMPL(__imp__sub_83D1146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11470"))) PPC_WEAK_FUNC(sub_83D11470);
PPC_FUNC_IMPL(__imp__sub_83D11470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11474"))) PPC_WEAK_FUNC(sub_83D11474);
PPC_FUNC_IMPL(__imp__sub_83D11474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11478"))) PPC_WEAK_FUNC(sub_83D11478);
PPC_FUNC_IMPL(__imp__sub_83D11478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1147C"))) PPC_WEAK_FUNC(sub_83D1147C);
PPC_FUNC_IMPL(__imp__sub_83D1147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11480"))) PPC_WEAK_FUNC(sub_83D11480);
PPC_FUNC_IMPL(__imp__sub_83D11480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11484"))) PPC_WEAK_FUNC(sub_83D11484);
PPC_FUNC_IMPL(__imp__sub_83D11484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11488"))) PPC_WEAK_FUNC(sub_83D11488);
PPC_FUNC_IMPL(__imp__sub_83D11488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1148C"))) PPC_WEAK_FUNC(sub_83D1148C);
PPC_FUNC_IMPL(__imp__sub_83D1148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11490"))) PPC_WEAK_FUNC(sub_83D11490);
PPC_FUNC_IMPL(__imp__sub_83D11490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11494"))) PPC_WEAK_FUNC(sub_83D11494);
PPC_FUNC_IMPL(__imp__sub_83D11494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11498"))) PPC_WEAK_FUNC(sub_83D11498);
PPC_FUNC_IMPL(__imp__sub_83D11498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1149C"))) PPC_WEAK_FUNC(sub_83D1149C);
PPC_FUNC_IMPL(__imp__sub_83D1149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114A0"))) PPC_WEAK_FUNC(sub_83D114A0);
PPC_FUNC_IMPL(__imp__sub_83D114A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114A4"))) PPC_WEAK_FUNC(sub_83D114A4);
PPC_FUNC_IMPL(__imp__sub_83D114A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114A8"))) PPC_WEAK_FUNC(sub_83D114A8);
PPC_FUNC_IMPL(__imp__sub_83D114A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114AC"))) PPC_WEAK_FUNC(sub_83D114AC);
PPC_FUNC_IMPL(__imp__sub_83D114AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114B0"))) PPC_WEAK_FUNC(sub_83D114B0);
PPC_FUNC_IMPL(__imp__sub_83D114B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114B4"))) PPC_WEAK_FUNC(sub_83D114B4);
PPC_FUNC_IMPL(__imp__sub_83D114B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114B8"))) PPC_WEAK_FUNC(sub_83D114B8);
PPC_FUNC_IMPL(__imp__sub_83D114B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114BC"))) PPC_WEAK_FUNC(sub_83D114BC);
PPC_FUNC_IMPL(__imp__sub_83D114BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114C0"))) PPC_WEAK_FUNC(sub_83D114C0);
PPC_FUNC_IMPL(__imp__sub_83D114C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D114CC"))) PPC_WEAK_FUNC(sub_83D114CC);
PPC_FUNC_IMPL(__imp__sub_83D114CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114D0"))) PPC_WEAK_FUNC(sub_83D114D0);
PPC_FUNC_IMPL(__imp__sub_83D114D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114D4"))) PPC_WEAK_FUNC(sub_83D114D4);
PPC_FUNC_IMPL(__imp__sub_83D114D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114D8"))) PPC_WEAK_FUNC(sub_83D114D8);
PPC_FUNC_IMPL(__imp__sub_83D114D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114DC"))) PPC_WEAK_FUNC(sub_83D114DC);
PPC_FUNC_IMPL(__imp__sub_83D114DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114E0"))) PPC_WEAK_FUNC(sub_83D114E0);
PPC_FUNC_IMPL(__imp__sub_83D114E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D114E4"))) PPC_WEAK_FUNC(sub_83D114E4);
PPC_FUNC_IMPL(__imp__sub_83D114E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D114E8"))) PPC_WEAK_FUNC(sub_83D114E8);
PPC_FUNC_IMPL(__imp__sub_83D114E8) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,9904
	ctx.r31.s64 = ctx.r11.s64 + 9904;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11520
	if (cr6.lt) goto loc_83D11520;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11520;
	sub_825952B8(ctx, base);
loc_83D11520:
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

__attribute__((alias("__imp__sub_83D1154C"))) PPC_WEAK_FUNC(sub_83D1154C);
PPC_FUNC_IMPL(__imp__sub_83D1154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11550"))) PPC_WEAK_FUNC(sub_83D11550);
PPC_FUNC_IMPL(__imp__sub_83D11550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11554"))) PPC_WEAK_FUNC(sub_83D11554);
PPC_FUNC_IMPL(__imp__sub_83D11554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11558"))) PPC_WEAK_FUNC(sub_83D11558);
PPC_FUNC_IMPL(__imp__sub_83D11558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1155C"))) PPC_WEAK_FUNC(sub_83D1155C);
PPC_FUNC_IMPL(__imp__sub_83D1155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11560"))) PPC_WEAK_FUNC(sub_83D11560);
PPC_FUNC_IMPL(__imp__sub_83D11560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11564"))) PPC_WEAK_FUNC(sub_83D11564);
PPC_FUNC_IMPL(__imp__sub_83D11564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11568"))) PPC_WEAK_FUNC(sub_83D11568);
PPC_FUNC_IMPL(__imp__sub_83D11568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1156C"))) PPC_WEAK_FUNC(sub_83D1156C);
PPC_FUNC_IMPL(__imp__sub_83D1156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11570"))) PPC_WEAK_FUNC(sub_83D11570);
PPC_FUNC_IMPL(__imp__sub_83D11570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11574"))) PPC_WEAK_FUNC(sub_83D11574);
PPC_FUNC_IMPL(__imp__sub_83D11574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11578"))) PPC_WEAK_FUNC(sub_83D11578);
PPC_FUNC_IMPL(__imp__sub_83D11578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1157C"))) PPC_WEAK_FUNC(sub_83D1157C);
PPC_FUNC_IMPL(__imp__sub_83D1157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11580"))) PPC_WEAK_FUNC(sub_83D11580);
PPC_FUNC_IMPL(__imp__sub_83D11580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11584"))) PPC_WEAK_FUNC(sub_83D11584);
PPC_FUNC_IMPL(__imp__sub_83D11584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11588"))) PPC_WEAK_FUNC(sub_83D11588);
PPC_FUNC_IMPL(__imp__sub_83D11588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1158C"))) PPC_WEAK_FUNC(sub_83D1158C);
PPC_FUNC_IMPL(__imp__sub_83D1158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11590"))) PPC_WEAK_FUNC(sub_83D11590);
PPC_FUNC_IMPL(__imp__sub_83D11590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11594"))) PPC_WEAK_FUNC(sub_83D11594);
PPC_FUNC_IMPL(__imp__sub_83D11594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11598"))) PPC_WEAK_FUNC(sub_83D11598);
PPC_FUNC_IMPL(__imp__sub_83D11598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1159C"))) PPC_WEAK_FUNC(sub_83D1159C);
PPC_FUNC_IMPL(__imp__sub_83D1159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115A0"))) PPC_WEAK_FUNC(sub_83D115A0);
PPC_FUNC_IMPL(__imp__sub_83D115A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D115A4"))) PPC_WEAK_FUNC(sub_83D115A4);
PPC_FUNC_IMPL(__imp__sub_83D115A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115A8"))) PPC_WEAK_FUNC(sub_83D115A8);
PPC_FUNC_IMPL(__imp__sub_83D115A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D115AC"))) PPC_WEAK_FUNC(sub_83D115AC);
PPC_FUNC_IMPL(__imp__sub_83D115AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115B0"))) PPC_WEAK_FUNC(sub_83D115B0);
PPC_FUNC_IMPL(__imp__sub_83D115B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D115BC"))) PPC_WEAK_FUNC(sub_83D115BC);
PPC_FUNC_IMPL(__imp__sub_83D115BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115C0"))) PPC_WEAK_FUNC(sub_83D115C0);
PPC_FUNC_IMPL(__imp__sub_83D115C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D115C4"))) PPC_WEAK_FUNC(sub_83D115C4);
PPC_FUNC_IMPL(__imp__sub_83D115C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115C8"))) PPC_WEAK_FUNC(sub_83D115C8);
PPC_FUNC_IMPL(__imp__sub_83D115C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D115CC"))) PPC_WEAK_FUNC(sub_83D115CC);
PPC_FUNC_IMPL(__imp__sub_83D115CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115D0"))) PPC_WEAK_FUNC(sub_83D115D0);
PPC_FUNC_IMPL(__imp__sub_83D115D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D115D4"))) PPC_WEAK_FUNC(sub_83D115D4);
PPC_FUNC_IMPL(__imp__sub_83D115D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D115D8"))) PPC_WEAK_FUNC(sub_83D115D8);
PPC_FUNC_IMPL(__imp__sub_83D115D8) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,10060
	ctx.r31.s64 = ctx.r11.s64 + 10060;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11610
	if (cr6.lt) goto loc_83D11610;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11610;
	sub_825952B8(ctx, base);
loc_83D11610:
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

__attribute__((alias("__imp__sub_83D1163C"))) PPC_WEAK_FUNC(sub_83D1163C);
PPC_FUNC_IMPL(__imp__sub_83D1163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11640"))) PPC_WEAK_FUNC(sub_83D11640);
PPC_FUNC_IMPL(__imp__sub_83D11640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11644"))) PPC_WEAK_FUNC(sub_83D11644);
PPC_FUNC_IMPL(__imp__sub_83D11644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11648"))) PPC_WEAK_FUNC(sub_83D11648);
PPC_FUNC_IMPL(__imp__sub_83D11648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1164C"))) PPC_WEAK_FUNC(sub_83D1164C);
PPC_FUNC_IMPL(__imp__sub_83D1164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11650"))) PPC_WEAK_FUNC(sub_83D11650);
PPC_FUNC_IMPL(__imp__sub_83D11650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11654"))) PPC_WEAK_FUNC(sub_83D11654);
PPC_FUNC_IMPL(__imp__sub_83D11654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11658"))) PPC_WEAK_FUNC(sub_83D11658);
PPC_FUNC_IMPL(__imp__sub_83D11658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1165C"))) PPC_WEAK_FUNC(sub_83D1165C);
PPC_FUNC_IMPL(__imp__sub_83D1165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11660"))) PPC_WEAK_FUNC(sub_83D11660);
PPC_FUNC_IMPL(__imp__sub_83D11660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11664"))) PPC_WEAK_FUNC(sub_83D11664);
PPC_FUNC_IMPL(__imp__sub_83D11664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11668"))) PPC_WEAK_FUNC(sub_83D11668);
PPC_FUNC_IMPL(__imp__sub_83D11668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1166C"))) PPC_WEAK_FUNC(sub_83D1166C);
PPC_FUNC_IMPL(__imp__sub_83D1166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11670"))) PPC_WEAK_FUNC(sub_83D11670);
PPC_FUNC_IMPL(__imp__sub_83D11670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11674"))) PPC_WEAK_FUNC(sub_83D11674);
PPC_FUNC_IMPL(__imp__sub_83D11674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11678"))) PPC_WEAK_FUNC(sub_83D11678);
PPC_FUNC_IMPL(__imp__sub_83D11678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1167C"))) PPC_WEAK_FUNC(sub_83D1167C);
PPC_FUNC_IMPL(__imp__sub_83D1167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11680"))) PPC_WEAK_FUNC(sub_83D11680);
PPC_FUNC_IMPL(__imp__sub_83D11680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11684"))) PPC_WEAK_FUNC(sub_83D11684);
PPC_FUNC_IMPL(__imp__sub_83D11684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11688"))) PPC_WEAK_FUNC(sub_83D11688);
PPC_FUNC_IMPL(__imp__sub_83D11688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1168C"))) PPC_WEAK_FUNC(sub_83D1168C);
PPC_FUNC_IMPL(__imp__sub_83D1168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11690"))) PPC_WEAK_FUNC(sub_83D11690);
PPC_FUNC_IMPL(__imp__sub_83D11690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11694"))) PPC_WEAK_FUNC(sub_83D11694);
PPC_FUNC_IMPL(__imp__sub_83D11694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11698"))) PPC_WEAK_FUNC(sub_83D11698);
PPC_FUNC_IMPL(__imp__sub_83D11698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1169C"))) PPC_WEAK_FUNC(sub_83D1169C);
PPC_FUNC_IMPL(__imp__sub_83D1169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D116A0"))) PPC_WEAK_FUNC(sub_83D116A0);
PPC_FUNC_IMPL(__imp__sub_83D116A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D116AC"))) PPC_WEAK_FUNC(sub_83D116AC);
PPC_FUNC_IMPL(__imp__sub_83D116AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D116B0"))) PPC_WEAK_FUNC(sub_83D116B0);
PPC_FUNC_IMPL(__imp__sub_83D116B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D116B4"))) PPC_WEAK_FUNC(sub_83D116B4);
PPC_FUNC_IMPL(__imp__sub_83D116B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D116B8"))) PPC_WEAK_FUNC(sub_83D116B8);
PPC_FUNC_IMPL(__imp__sub_83D116B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D116BC"))) PPC_WEAK_FUNC(sub_83D116BC);
PPC_FUNC_IMPL(__imp__sub_83D116BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D116C0"))) PPC_WEAK_FUNC(sub_83D116C0);
PPC_FUNC_IMPL(__imp__sub_83D116C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D116C4"))) PPC_WEAK_FUNC(sub_83D116C4);
PPC_FUNC_IMPL(__imp__sub_83D116C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D116C8"))) PPC_WEAK_FUNC(sub_83D116C8);
PPC_FUNC_IMPL(__imp__sub_83D116C8) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,10216
	ctx.r31.s64 = ctx.r11.s64 + 10216;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d11700
	if (cr6.lt) goto loc_83D11700;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D11700;
	sub_825952B8(ctx, base);
loc_83D11700:
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

__attribute__((alias("__imp__sub_83D1172C"))) PPC_WEAK_FUNC(sub_83D1172C);
PPC_FUNC_IMPL(__imp__sub_83D1172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11730"))) PPC_WEAK_FUNC(sub_83D11730);
PPC_FUNC_IMPL(__imp__sub_83D11730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11734"))) PPC_WEAK_FUNC(sub_83D11734);
PPC_FUNC_IMPL(__imp__sub_83D11734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11738"))) PPC_WEAK_FUNC(sub_83D11738);
PPC_FUNC_IMPL(__imp__sub_83D11738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1173C"))) PPC_WEAK_FUNC(sub_83D1173C);
PPC_FUNC_IMPL(__imp__sub_83D1173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11740"))) PPC_WEAK_FUNC(sub_83D11740);
PPC_FUNC_IMPL(__imp__sub_83D11740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11744"))) PPC_WEAK_FUNC(sub_83D11744);
PPC_FUNC_IMPL(__imp__sub_83D11744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11748"))) PPC_WEAK_FUNC(sub_83D11748);
PPC_FUNC_IMPL(__imp__sub_83D11748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1174C"))) PPC_WEAK_FUNC(sub_83D1174C);
PPC_FUNC_IMPL(__imp__sub_83D1174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11750"))) PPC_WEAK_FUNC(sub_83D11750);
PPC_FUNC_IMPL(__imp__sub_83D11750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11754"))) PPC_WEAK_FUNC(sub_83D11754);
PPC_FUNC_IMPL(__imp__sub_83D11754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11758"))) PPC_WEAK_FUNC(sub_83D11758);
PPC_FUNC_IMPL(__imp__sub_83D11758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1175C"))) PPC_WEAK_FUNC(sub_83D1175C);
PPC_FUNC_IMPL(__imp__sub_83D1175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11760"))) PPC_WEAK_FUNC(sub_83D11760);
PPC_FUNC_IMPL(__imp__sub_83D11760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11764"))) PPC_WEAK_FUNC(sub_83D11764);
PPC_FUNC_IMPL(__imp__sub_83D11764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11768"))) PPC_WEAK_FUNC(sub_83D11768);
PPC_FUNC_IMPL(__imp__sub_83D11768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1176C"))) PPC_WEAK_FUNC(sub_83D1176C);
PPC_FUNC_IMPL(__imp__sub_83D1176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11770"))) PPC_WEAK_FUNC(sub_83D11770);
PPC_FUNC_IMPL(__imp__sub_83D11770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11774"))) PPC_WEAK_FUNC(sub_83D11774);
PPC_FUNC_IMPL(__imp__sub_83D11774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11778"))) PPC_WEAK_FUNC(sub_83D11778);
PPC_FUNC_IMPL(__imp__sub_83D11778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1177C"))) PPC_WEAK_FUNC(sub_83D1177C);
PPC_FUNC_IMPL(__imp__sub_83D1177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11780"))) PPC_WEAK_FUNC(sub_83D11780);
PPC_FUNC_IMPL(__imp__sub_83D11780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D11784"))) PPC_WEAK_FUNC(sub_83D11784);
PPC_FUNC_IMPL(__imp__sub_83D11784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11788"))) PPC_WEAK_FUNC(sub_83D11788);
PPC_FUNC_IMPL(__imp__sub_83D11788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1178C"))) PPC_WEAK_FUNC(sub_83D1178C);
PPC_FUNC_IMPL(__imp__sub_83D1178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D11790"))) PPC_WEAK_FUNC(sub_83D11790);
PPC_FUNC_IMPL(__imp__sub_83D11790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-8007
	ctx.r3.s64 = ctx.r11.s64 + -8007;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1179C"))) PPC_WEAK_FUNC(sub_83D1179C);
PPC_FUNC_IMPL(__imp__sub_83D1179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117A0"))) PPC_WEAK_FUNC(sub_83D117A0);
PPC_FUNC_IMPL(__imp__sub_83D117A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D117A4"))) PPC_WEAK_FUNC(sub_83D117A4);
PPC_FUNC_IMPL(__imp__sub_83D117A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117A8"))) PPC_WEAK_FUNC(sub_83D117A8);
PPC_FUNC_IMPL(__imp__sub_83D117A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D117AC"))) PPC_WEAK_FUNC(sub_83D117AC);
PPC_FUNC_IMPL(__imp__sub_83D117AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117B0"))) PPC_WEAK_FUNC(sub_83D117B0);
PPC_FUNC_IMPL(__imp__sub_83D117B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D117B4"))) PPC_WEAK_FUNC(sub_83D117B4);
PPC_FUNC_IMPL(__imp__sub_83D117B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117B8"))) PPC_WEAK_FUNC(sub_83D117B8);
PPC_FUNC_IMPL(__imp__sub_83D117B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-7584
	ctx.r3.s64 = ctx.r11.s64 + -7584;
	// b 0x837e3e90
	sub_837E3E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D117C4"))) PPC_WEAK_FUNC(sub_83D117C4);
PPC_FUNC_IMPL(__imp__sub_83D117C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117C8"))) PPC_WEAK_FUNC(sub_83D117C8);
PPC_FUNC_IMPL(__imp__sub_83D117C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-8004
	ctx.r3.s64 = ctx.r11.s64 + -8004;
	// b 0x837e3e90
	sub_837E3E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D117D4"))) PPC_WEAK_FUNC(sub_83D117D4);
PPC_FUNC_IMPL(__imp__sub_83D117D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D117D8"))) PPC_WEAK_FUNC(sub_83D117D8);
PPC_FUNC_IMPL(__imp__sub_83D117D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D117DC"))) PPC_WEAK_FUNC(sub_83D117DC);
PPC_FUNC_IMPL(__imp__sub_83D117DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

