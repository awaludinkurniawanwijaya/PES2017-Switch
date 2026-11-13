#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D740E0"))) PPC_WEAK_FUNC(sub_83D740E0);
PPC_FUNC_IMPL(__imp__sub_83D740E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D740E4"))) PPC_WEAK_FUNC(sub_83D740E4);
PPC_FUNC_IMPL(__imp__sub_83D740E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D740E8"))) PPC_WEAK_FUNC(sub_83D740E8);
PPC_FUNC_IMPL(__imp__sub_83D740E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D740EC"))) PPC_WEAK_FUNC(sub_83D740EC);
PPC_FUNC_IMPL(__imp__sub_83D740EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D740F0"))) PPC_WEAK_FUNC(sub_83D740F0);
PPC_FUNC_IMPL(__imp__sub_83D740F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D740F4"))) PPC_WEAK_FUNC(sub_83D740F4);
PPC_FUNC_IMPL(__imp__sub_83D740F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D740F8"))) PPC_WEAK_FUNC(sub_83D740F8);
PPC_FUNC_IMPL(__imp__sub_83D740F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D740FC"))) PPC_WEAK_FUNC(sub_83D740FC);
PPC_FUNC_IMPL(__imp__sub_83D740FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74100"))) PPC_WEAK_FUNC(sub_83D74100);
PPC_FUNC_IMPL(__imp__sub_83D74100) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,8240
	ctx.r11.s64 = ctx.r11.s64 + 8240;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D74124:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D74130;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d74124
	if (!cr0.lt) goto loc_83D74124;
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

__attribute__((alias("__imp__sub_83D74150"))) PPC_WEAK_FUNC(sub_83D74150);
PPC_FUNC_IMPL(__imp__sub_83D74150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74154"))) PPC_WEAK_FUNC(sub_83D74154);
PPC_FUNC_IMPL(__imp__sub_83D74154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74158"))) PPC_WEAK_FUNC(sub_83D74158);
PPC_FUNC_IMPL(__imp__sub_83D74158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7415C"))) PPC_WEAK_FUNC(sub_83D7415C);
PPC_FUNC_IMPL(__imp__sub_83D7415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74160"))) PPC_WEAK_FUNC(sub_83D74160);
PPC_FUNC_IMPL(__imp__sub_83D74160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74164"))) PPC_WEAK_FUNC(sub_83D74164);
PPC_FUNC_IMPL(__imp__sub_83D74164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74168"))) PPC_WEAK_FUNC(sub_83D74168);
PPC_FUNC_IMPL(__imp__sub_83D74168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7416C"))) PPC_WEAK_FUNC(sub_83D7416C);
PPC_FUNC_IMPL(__imp__sub_83D7416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74170"))) PPC_WEAK_FUNC(sub_83D74170);
PPC_FUNC_IMPL(__imp__sub_83D74170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74174"))) PPC_WEAK_FUNC(sub_83D74174);
PPC_FUNC_IMPL(__imp__sub_83D74174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74178"))) PPC_WEAK_FUNC(sub_83D74178);
PPC_FUNC_IMPL(__imp__sub_83D74178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7417C"))) PPC_WEAK_FUNC(sub_83D7417C);
PPC_FUNC_IMPL(__imp__sub_83D7417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74180"))) PPC_WEAK_FUNC(sub_83D74180);
PPC_FUNC_IMPL(__imp__sub_83D74180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74184"))) PPC_WEAK_FUNC(sub_83D74184);
PPC_FUNC_IMPL(__imp__sub_83D74184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74188"))) PPC_WEAK_FUNC(sub_83D74188);
PPC_FUNC_IMPL(__imp__sub_83D74188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7418C"))) PPC_WEAK_FUNC(sub_83D7418C);
PPC_FUNC_IMPL(__imp__sub_83D7418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74190"))) PPC_WEAK_FUNC(sub_83D74190);
PPC_FUNC_IMPL(__imp__sub_83D74190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74194"))) PPC_WEAK_FUNC(sub_83D74194);
PPC_FUNC_IMPL(__imp__sub_83D74194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74198"))) PPC_WEAK_FUNC(sub_83D74198);
PPC_FUNC_IMPL(__imp__sub_83D74198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7419C"))) PPC_WEAK_FUNC(sub_83D7419C);
PPC_FUNC_IMPL(__imp__sub_83D7419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741A0"))) PPC_WEAK_FUNC(sub_83D741A0);
PPC_FUNC_IMPL(__imp__sub_83D741A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741A4"))) PPC_WEAK_FUNC(sub_83D741A4);
PPC_FUNC_IMPL(__imp__sub_83D741A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741A8"))) PPC_WEAK_FUNC(sub_83D741A8);
PPC_FUNC_IMPL(__imp__sub_83D741A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741AC"))) PPC_WEAK_FUNC(sub_83D741AC);
PPC_FUNC_IMPL(__imp__sub_83D741AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741B0"))) PPC_WEAK_FUNC(sub_83D741B0);
PPC_FUNC_IMPL(__imp__sub_83D741B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8284
	ctx.r3.s64 = ctx.r11.s64 + 8284;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D741BC"))) PPC_WEAK_FUNC(sub_83D741BC);
PPC_FUNC_IMPL(__imp__sub_83D741BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741C0"))) PPC_WEAK_FUNC(sub_83D741C0);
PPC_FUNC_IMPL(__imp__sub_83D741C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741C4"))) PPC_WEAK_FUNC(sub_83D741C4);
PPC_FUNC_IMPL(__imp__sub_83D741C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741C8"))) PPC_WEAK_FUNC(sub_83D741C8);
PPC_FUNC_IMPL(__imp__sub_83D741C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741CC"))) PPC_WEAK_FUNC(sub_83D741CC);
PPC_FUNC_IMPL(__imp__sub_83D741CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741D0"))) PPC_WEAK_FUNC(sub_83D741D0);
PPC_FUNC_IMPL(__imp__sub_83D741D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741D4"))) PPC_WEAK_FUNC(sub_83D741D4);
PPC_FUNC_IMPL(__imp__sub_83D741D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741D8"))) PPC_WEAK_FUNC(sub_83D741D8);
PPC_FUNC_IMPL(__imp__sub_83D741D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741DC"))) PPC_WEAK_FUNC(sub_83D741DC);
PPC_FUNC_IMPL(__imp__sub_83D741DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741E0"))) PPC_WEAK_FUNC(sub_83D741E0);
PPC_FUNC_IMPL(__imp__sub_83D741E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741E4"))) PPC_WEAK_FUNC(sub_83D741E4);
PPC_FUNC_IMPL(__imp__sub_83D741E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741E8"))) PPC_WEAK_FUNC(sub_83D741E8);
PPC_FUNC_IMPL(__imp__sub_83D741E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741EC"))) PPC_WEAK_FUNC(sub_83D741EC);
PPC_FUNC_IMPL(__imp__sub_83D741EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741F0"))) PPC_WEAK_FUNC(sub_83D741F0);
PPC_FUNC_IMPL(__imp__sub_83D741F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741F4"))) PPC_WEAK_FUNC(sub_83D741F4);
PPC_FUNC_IMPL(__imp__sub_83D741F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D741F8"))) PPC_WEAK_FUNC(sub_83D741F8);
PPC_FUNC_IMPL(__imp__sub_83D741F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D741FC"))) PPC_WEAK_FUNC(sub_83D741FC);
PPC_FUNC_IMPL(__imp__sub_83D741FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74200"))) PPC_WEAK_FUNC(sub_83D74200);
PPC_FUNC_IMPL(__imp__sub_83D74200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74204"))) PPC_WEAK_FUNC(sub_83D74204);
PPC_FUNC_IMPL(__imp__sub_83D74204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74208"))) PPC_WEAK_FUNC(sub_83D74208);
PPC_FUNC_IMPL(__imp__sub_83D74208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7420C"))) PPC_WEAK_FUNC(sub_83D7420C);
PPC_FUNC_IMPL(__imp__sub_83D7420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74210"))) PPC_WEAK_FUNC(sub_83D74210);
PPC_FUNC_IMPL(__imp__sub_83D74210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74214"))) PPC_WEAK_FUNC(sub_83D74214);
PPC_FUNC_IMPL(__imp__sub_83D74214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74218"))) PPC_WEAK_FUNC(sub_83D74218);
PPC_FUNC_IMPL(__imp__sub_83D74218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7421C"))) PPC_WEAK_FUNC(sub_83D7421C);
PPC_FUNC_IMPL(__imp__sub_83D7421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74220"))) PPC_WEAK_FUNC(sub_83D74220);
PPC_FUNC_IMPL(__imp__sub_83D74220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// addi r11,r11,27304
	ctx.r11.s64 = ctx.r11.s64 + 27304;
	// stw r11,8304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74234"))) PPC_WEAK_FUNC(sub_83D74234);
PPC_FUNC_IMPL(__imp__sub_83D74234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74238"))) PPC_WEAK_FUNC(sub_83D74238);
PPC_FUNC_IMPL(__imp__sub_83D74238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7423C"))) PPC_WEAK_FUNC(sub_83D7423C);
PPC_FUNC_IMPL(__imp__sub_83D7423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74240"))) PPC_WEAK_FUNC(sub_83D74240);
PPC_FUNC_IMPL(__imp__sub_83D74240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74244"))) PPC_WEAK_FUNC(sub_83D74244);
PPC_FUNC_IMPL(__imp__sub_83D74244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74248"))) PPC_WEAK_FUNC(sub_83D74248);
PPC_FUNC_IMPL(__imp__sub_83D74248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7424C"))) PPC_WEAK_FUNC(sub_83D7424C);
PPC_FUNC_IMPL(__imp__sub_83D7424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74250"))) PPC_WEAK_FUNC(sub_83D74250);
PPC_FUNC_IMPL(__imp__sub_83D74250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74254"))) PPC_WEAK_FUNC(sub_83D74254);
PPC_FUNC_IMPL(__imp__sub_83D74254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74258"))) PPC_WEAK_FUNC(sub_83D74258);
PPC_FUNC_IMPL(__imp__sub_83D74258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7425C"))) PPC_WEAK_FUNC(sub_83D7425C);
PPC_FUNC_IMPL(__imp__sub_83D7425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74260"))) PPC_WEAK_FUNC(sub_83D74260);
PPC_FUNC_IMPL(__imp__sub_83D74260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74264"))) PPC_WEAK_FUNC(sub_83D74264);
PPC_FUNC_IMPL(__imp__sub_83D74264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74268"))) PPC_WEAK_FUNC(sub_83D74268);
PPC_FUNC_IMPL(__imp__sub_83D74268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7426C"))) PPC_WEAK_FUNC(sub_83D7426C);
PPC_FUNC_IMPL(__imp__sub_83D7426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74270"))) PPC_WEAK_FUNC(sub_83D74270);
PPC_FUNC_IMPL(__imp__sub_83D74270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74274"))) PPC_WEAK_FUNC(sub_83D74274);
PPC_FUNC_IMPL(__imp__sub_83D74274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74278"))) PPC_WEAK_FUNC(sub_83D74278);
PPC_FUNC_IMPL(__imp__sub_83D74278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7427C"))) PPC_WEAK_FUNC(sub_83D7427C);
PPC_FUNC_IMPL(__imp__sub_83D7427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74280"))) PPC_WEAK_FUNC(sub_83D74280);
PPC_FUNC_IMPL(__imp__sub_83D74280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74284"))) PPC_WEAK_FUNC(sub_83D74284);
PPC_FUNC_IMPL(__imp__sub_83D74284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74288"))) PPC_WEAK_FUNC(sub_83D74288);
PPC_FUNC_IMPL(__imp__sub_83D74288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7428C"))) PPC_WEAK_FUNC(sub_83D7428C);
PPC_FUNC_IMPL(__imp__sub_83D7428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74290"))) PPC_WEAK_FUNC(sub_83D74290);
PPC_FUNC_IMPL(__imp__sub_83D74290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74294"))) PPC_WEAK_FUNC(sub_83D74294);
PPC_FUNC_IMPL(__imp__sub_83D74294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74298"))) PPC_WEAK_FUNC(sub_83D74298);
PPC_FUNC_IMPL(__imp__sub_83D74298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7429C"))) PPC_WEAK_FUNC(sub_83D7429C);
PPC_FUNC_IMPL(__imp__sub_83D7429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742A0"))) PPC_WEAK_FUNC(sub_83D742A0);
PPC_FUNC_IMPL(__imp__sub_83D742A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742A4"))) PPC_WEAK_FUNC(sub_83D742A4);
PPC_FUNC_IMPL(__imp__sub_83D742A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742A8"))) PPC_WEAK_FUNC(sub_83D742A8);
PPC_FUNC_IMPL(__imp__sub_83D742A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742AC"))) PPC_WEAK_FUNC(sub_83D742AC);
PPC_FUNC_IMPL(__imp__sub_83D742AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742B0"))) PPC_WEAK_FUNC(sub_83D742B0);
PPC_FUNC_IMPL(__imp__sub_83D742B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742B4"))) PPC_WEAK_FUNC(sub_83D742B4);
PPC_FUNC_IMPL(__imp__sub_83D742B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742B8"))) PPC_WEAK_FUNC(sub_83D742B8);
PPC_FUNC_IMPL(__imp__sub_83D742B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742BC"))) PPC_WEAK_FUNC(sub_83D742BC);
PPC_FUNC_IMPL(__imp__sub_83D742BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742C0"))) PPC_WEAK_FUNC(sub_83D742C0);
PPC_FUNC_IMPL(__imp__sub_83D742C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742C4"))) PPC_WEAK_FUNC(sub_83D742C4);
PPC_FUNC_IMPL(__imp__sub_83D742C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742C8"))) PPC_WEAK_FUNC(sub_83D742C8);
PPC_FUNC_IMPL(__imp__sub_83D742C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742CC"))) PPC_WEAK_FUNC(sub_83D742CC);
PPC_FUNC_IMPL(__imp__sub_83D742CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742D0"))) PPC_WEAK_FUNC(sub_83D742D0);
PPC_FUNC_IMPL(__imp__sub_83D742D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742D4"))) PPC_WEAK_FUNC(sub_83D742D4);
PPC_FUNC_IMPL(__imp__sub_83D742D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742D8"))) PPC_WEAK_FUNC(sub_83D742D8);
PPC_FUNC_IMPL(__imp__sub_83D742D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742DC"))) PPC_WEAK_FUNC(sub_83D742DC);
PPC_FUNC_IMPL(__imp__sub_83D742DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742E0"))) PPC_WEAK_FUNC(sub_83D742E0);
PPC_FUNC_IMPL(__imp__sub_83D742E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742E4"))) PPC_WEAK_FUNC(sub_83D742E4);
PPC_FUNC_IMPL(__imp__sub_83D742E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742E8"))) PPC_WEAK_FUNC(sub_83D742E8);
PPC_FUNC_IMPL(__imp__sub_83D742E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742EC"))) PPC_WEAK_FUNC(sub_83D742EC);
PPC_FUNC_IMPL(__imp__sub_83D742EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742F0"))) PPC_WEAK_FUNC(sub_83D742F0);
PPC_FUNC_IMPL(__imp__sub_83D742F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742F4"))) PPC_WEAK_FUNC(sub_83D742F4);
PPC_FUNC_IMPL(__imp__sub_83D742F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D742F8"))) PPC_WEAK_FUNC(sub_83D742F8);
PPC_FUNC_IMPL(__imp__sub_83D742F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D742FC"))) PPC_WEAK_FUNC(sub_83D742FC);
PPC_FUNC_IMPL(__imp__sub_83D742FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74300"))) PPC_WEAK_FUNC(sub_83D74300);
PPC_FUNC_IMPL(__imp__sub_83D74300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74304"))) PPC_WEAK_FUNC(sub_83D74304);
PPC_FUNC_IMPL(__imp__sub_83D74304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74308"))) PPC_WEAK_FUNC(sub_83D74308);
PPC_FUNC_IMPL(__imp__sub_83D74308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7430C"))) PPC_WEAK_FUNC(sub_83D7430C);
PPC_FUNC_IMPL(__imp__sub_83D7430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74310"))) PPC_WEAK_FUNC(sub_83D74310);
PPC_FUNC_IMPL(__imp__sub_83D74310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74314"))) PPC_WEAK_FUNC(sub_83D74314);
PPC_FUNC_IMPL(__imp__sub_83D74314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74318"))) PPC_WEAK_FUNC(sub_83D74318);
PPC_FUNC_IMPL(__imp__sub_83D74318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7431C"))) PPC_WEAK_FUNC(sub_83D7431C);
PPC_FUNC_IMPL(__imp__sub_83D7431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74320"))) PPC_WEAK_FUNC(sub_83D74320);
PPC_FUNC_IMPL(__imp__sub_83D74320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74324"))) PPC_WEAK_FUNC(sub_83D74324);
PPC_FUNC_IMPL(__imp__sub_83D74324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74328"))) PPC_WEAK_FUNC(sub_83D74328);
PPC_FUNC_IMPL(__imp__sub_83D74328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7432C"))) PPC_WEAK_FUNC(sub_83D7432C);
PPC_FUNC_IMPL(__imp__sub_83D7432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74330"))) PPC_WEAK_FUNC(sub_83D74330);
PPC_FUNC_IMPL(__imp__sub_83D74330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74334"))) PPC_WEAK_FUNC(sub_83D74334);
PPC_FUNC_IMPL(__imp__sub_83D74334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74338"))) PPC_WEAK_FUNC(sub_83D74338);
PPC_FUNC_IMPL(__imp__sub_83D74338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7433C"))) PPC_WEAK_FUNC(sub_83D7433C);
PPC_FUNC_IMPL(__imp__sub_83D7433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74340"))) PPC_WEAK_FUNC(sub_83D74340);
PPC_FUNC_IMPL(__imp__sub_83D74340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74344"))) PPC_WEAK_FUNC(sub_83D74344);
PPC_FUNC_IMPL(__imp__sub_83D74344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74348"))) PPC_WEAK_FUNC(sub_83D74348);
PPC_FUNC_IMPL(__imp__sub_83D74348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7434C"))) PPC_WEAK_FUNC(sub_83D7434C);
PPC_FUNC_IMPL(__imp__sub_83D7434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74350"))) PPC_WEAK_FUNC(sub_83D74350);
PPC_FUNC_IMPL(__imp__sub_83D74350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74354"))) PPC_WEAK_FUNC(sub_83D74354);
PPC_FUNC_IMPL(__imp__sub_83D74354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74358"))) PPC_WEAK_FUNC(sub_83D74358);
PPC_FUNC_IMPL(__imp__sub_83D74358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7435C"))) PPC_WEAK_FUNC(sub_83D7435C);
PPC_FUNC_IMPL(__imp__sub_83D7435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74360"))) PPC_WEAK_FUNC(sub_83D74360);
PPC_FUNC_IMPL(__imp__sub_83D74360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74364"))) PPC_WEAK_FUNC(sub_83D74364);
PPC_FUNC_IMPL(__imp__sub_83D74364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74368"))) PPC_WEAK_FUNC(sub_83D74368);
PPC_FUNC_IMPL(__imp__sub_83D74368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7436C"))) PPC_WEAK_FUNC(sub_83D7436C);
PPC_FUNC_IMPL(__imp__sub_83D7436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74370"))) PPC_WEAK_FUNC(sub_83D74370);
PPC_FUNC_IMPL(__imp__sub_83D74370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74374"))) PPC_WEAK_FUNC(sub_83D74374);
PPC_FUNC_IMPL(__imp__sub_83D74374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74378"))) PPC_WEAK_FUNC(sub_83D74378);
PPC_FUNC_IMPL(__imp__sub_83D74378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7437C"))) PPC_WEAK_FUNC(sub_83D7437C);
PPC_FUNC_IMPL(__imp__sub_83D7437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74380"))) PPC_WEAK_FUNC(sub_83D74380);
PPC_FUNC_IMPL(__imp__sub_83D74380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74384"))) PPC_WEAK_FUNC(sub_83D74384);
PPC_FUNC_IMPL(__imp__sub_83D74384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74388"))) PPC_WEAK_FUNC(sub_83D74388);
PPC_FUNC_IMPL(__imp__sub_83D74388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7438C"))) PPC_WEAK_FUNC(sub_83D7438C);
PPC_FUNC_IMPL(__imp__sub_83D7438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74390"))) PPC_WEAK_FUNC(sub_83D74390);
PPC_FUNC_IMPL(__imp__sub_83D74390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74394"))) PPC_WEAK_FUNC(sub_83D74394);
PPC_FUNC_IMPL(__imp__sub_83D74394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74398"))) PPC_WEAK_FUNC(sub_83D74398);
PPC_FUNC_IMPL(__imp__sub_83D74398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7439C"))) PPC_WEAK_FUNC(sub_83D7439C);
PPC_FUNC_IMPL(__imp__sub_83D7439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743A0"))) PPC_WEAK_FUNC(sub_83D743A0);
PPC_FUNC_IMPL(__imp__sub_83D743A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743A4"))) PPC_WEAK_FUNC(sub_83D743A4);
PPC_FUNC_IMPL(__imp__sub_83D743A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743A8"))) PPC_WEAK_FUNC(sub_83D743A8);
PPC_FUNC_IMPL(__imp__sub_83D743A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743AC"))) PPC_WEAK_FUNC(sub_83D743AC);
PPC_FUNC_IMPL(__imp__sub_83D743AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743B0"))) PPC_WEAK_FUNC(sub_83D743B0);
PPC_FUNC_IMPL(__imp__sub_83D743B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743B4"))) PPC_WEAK_FUNC(sub_83D743B4);
PPC_FUNC_IMPL(__imp__sub_83D743B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743B8"))) PPC_WEAK_FUNC(sub_83D743B8);
PPC_FUNC_IMPL(__imp__sub_83D743B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743BC"))) PPC_WEAK_FUNC(sub_83D743BC);
PPC_FUNC_IMPL(__imp__sub_83D743BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743C0"))) PPC_WEAK_FUNC(sub_83D743C0);
PPC_FUNC_IMPL(__imp__sub_83D743C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743C4"))) PPC_WEAK_FUNC(sub_83D743C4);
PPC_FUNC_IMPL(__imp__sub_83D743C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743C8"))) PPC_WEAK_FUNC(sub_83D743C8);
PPC_FUNC_IMPL(__imp__sub_83D743C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743CC"))) PPC_WEAK_FUNC(sub_83D743CC);
PPC_FUNC_IMPL(__imp__sub_83D743CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743D0"))) PPC_WEAK_FUNC(sub_83D743D0);
PPC_FUNC_IMPL(__imp__sub_83D743D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743D4"))) PPC_WEAK_FUNC(sub_83D743D4);
PPC_FUNC_IMPL(__imp__sub_83D743D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743D8"))) PPC_WEAK_FUNC(sub_83D743D8);
PPC_FUNC_IMPL(__imp__sub_83D743D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743DC"))) PPC_WEAK_FUNC(sub_83D743DC);
PPC_FUNC_IMPL(__imp__sub_83D743DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743E0"))) PPC_WEAK_FUNC(sub_83D743E0);
PPC_FUNC_IMPL(__imp__sub_83D743E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743E4"))) PPC_WEAK_FUNC(sub_83D743E4);
PPC_FUNC_IMPL(__imp__sub_83D743E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743E8"))) PPC_WEAK_FUNC(sub_83D743E8);
PPC_FUNC_IMPL(__imp__sub_83D743E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743EC"))) PPC_WEAK_FUNC(sub_83D743EC);
PPC_FUNC_IMPL(__imp__sub_83D743EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743F0"))) PPC_WEAK_FUNC(sub_83D743F0);
PPC_FUNC_IMPL(__imp__sub_83D743F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743F4"))) PPC_WEAK_FUNC(sub_83D743F4);
PPC_FUNC_IMPL(__imp__sub_83D743F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D743F8"))) PPC_WEAK_FUNC(sub_83D743F8);
PPC_FUNC_IMPL(__imp__sub_83D743F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D743FC"))) PPC_WEAK_FUNC(sub_83D743FC);
PPC_FUNC_IMPL(__imp__sub_83D743FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74400"))) PPC_WEAK_FUNC(sub_83D74400);
PPC_FUNC_IMPL(__imp__sub_83D74400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74404"))) PPC_WEAK_FUNC(sub_83D74404);
PPC_FUNC_IMPL(__imp__sub_83D74404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74408"))) PPC_WEAK_FUNC(sub_83D74408);
PPC_FUNC_IMPL(__imp__sub_83D74408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7440C"))) PPC_WEAK_FUNC(sub_83D7440C);
PPC_FUNC_IMPL(__imp__sub_83D7440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74410"))) PPC_WEAK_FUNC(sub_83D74410);
PPC_FUNC_IMPL(__imp__sub_83D74410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74414"))) PPC_WEAK_FUNC(sub_83D74414);
PPC_FUNC_IMPL(__imp__sub_83D74414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74418"))) PPC_WEAK_FUNC(sub_83D74418);
PPC_FUNC_IMPL(__imp__sub_83D74418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D74424"))) PPC_WEAK_FUNC(sub_83D74424);
PPC_FUNC_IMPL(__imp__sub_83D74424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74428"))) PPC_WEAK_FUNC(sub_83D74428);
PPC_FUNC_IMPL(__imp__sub_83D74428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7442C"))) PPC_WEAK_FUNC(sub_83D7442C);
PPC_FUNC_IMPL(__imp__sub_83D7442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74430"))) PPC_WEAK_FUNC(sub_83D74430);
PPC_FUNC_IMPL(__imp__sub_83D74430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74434"))) PPC_WEAK_FUNC(sub_83D74434);
PPC_FUNC_IMPL(__imp__sub_83D74434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74438"))) PPC_WEAK_FUNC(sub_83D74438);
PPC_FUNC_IMPL(__imp__sub_83D74438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7443C"))) PPC_WEAK_FUNC(sub_83D7443C);
PPC_FUNC_IMPL(__imp__sub_83D7443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74440"))) PPC_WEAK_FUNC(sub_83D74440);
PPC_FUNC_IMPL(__imp__sub_83D74440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74444"))) PPC_WEAK_FUNC(sub_83D74444);
PPC_FUNC_IMPL(__imp__sub_83D74444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74448"))) PPC_WEAK_FUNC(sub_83D74448);
PPC_FUNC_IMPL(__imp__sub_83D74448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7444C"))) PPC_WEAK_FUNC(sub_83D7444C);
PPC_FUNC_IMPL(__imp__sub_83D7444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74450"))) PPC_WEAK_FUNC(sub_83D74450);
PPC_FUNC_IMPL(__imp__sub_83D74450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74454"))) PPC_WEAK_FUNC(sub_83D74454);
PPC_FUNC_IMPL(__imp__sub_83D74454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74458"))) PPC_WEAK_FUNC(sub_83D74458);
PPC_FUNC_IMPL(__imp__sub_83D74458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7445C"))) PPC_WEAK_FUNC(sub_83D7445C);
PPC_FUNC_IMPL(__imp__sub_83D7445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74460"))) PPC_WEAK_FUNC(sub_83D74460);
PPC_FUNC_IMPL(__imp__sub_83D74460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74464"))) PPC_WEAK_FUNC(sub_83D74464);
PPC_FUNC_IMPL(__imp__sub_83D74464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74468"))) PPC_WEAK_FUNC(sub_83D74468);
PPC_FUNC_IMPL(__imp__sub_83D74468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7446C"))) PPC_WEAK_FUNC(sub_83D7446C);
PPC_FUNC_IMPL(__imp__sub_83D7446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74470"))) PPC_WEAK_FUNC(sub_83D74470);
PPC_FUNC_IMPL(__imp__sub_83D74470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74474"))) PPC_WEAK_FUNC(sub_83D74474);
PPC_FUNC_IMPL(__imp__sub_83D74474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74478"))) PPC_WEAK_FUNC(sub_83D74478);
PPC_FUNC_IMPL(__imp__sub_83D74478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7447C"))) PPC_WEAK_FUNC(sub_83D7447C);
PPC_FUNC_IMPL(__imp__sub_83D7447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74480"))) PPC_WEAK_FUNC(sub_83D74480);
PPC_FUNC_IMPL(__imp__sub_83D74480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74484"))) PPC_WEAK_FUNC(sub_83D74484);
PPC_FUNC_IMPL(__imp__sub_83D74484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74488"))) PPC_WEAK_FUNC(sub_83D74488);
PPC_FUNC_IMPL(__imp__sub_83D74488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8368
	ctx.r3.s64 = ctx.r11.s64 + 8368;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D74494"))) PPC_WEAK_FUNC(sub_83D74494);
PPC_FUNC_IMPL(__imp__sub_83D74494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74498"))) PPC_WEAK_FUNC(sub_83D74498);
PPC_FUNC_IMPL(__imp__sub_83D74498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7449C"))) PPC_WEAK_FUNC(sub_83D7449C);
PPC_FUNC_IMPL(__imp__sub_83D7449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744A0"))) PPC_WEAK_FUNC(sub_83D744A0);
PPC_FUNC_IMPL(__imp__sub_83D744A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744A4"))) PPC_WEAK_FUNC(sub_83D744A4);
PPC_FUNC_IMPL(__imp__sub_83D744A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744A8"))) PPC_WEAK_FUNC(sub_83D744A8);
PPC_FUNC_IMPL(__imp__sub_83D744A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744AC"))) PPC_WEAK_FUNC(sub_83D744AC);
PPC_FUNC_IMPL(__imp__sub_83D744AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744B0"))) PPC_WEAK_FUNC(sub_83D744B0);
PPC_FUNC_IMPL(__imp__sub_83D744B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744B4"))) PPC_WEAK_FUNC(sub_83D744B4);
PPC_FUNC_IMPL(__imp__sub_83D744B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744B8"))) PPC_WEAK_FUNC(sub_83D744B8);
PPC_FUNC_IMPL(__imp__sub_83D744B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744BC"))) PPC_WEAK_FUNC(sub_83D744BC);
PPC_FUNC_IMPL(__imp__sub_83D744BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744C0"))) PPC_WEAK_FUNC(sub_83D744C0);
PPC_FUNC_IMPL(__imp__sub_83D744C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744C4"))) PPC_WEAK_FUNC(sub_83D744C4);
PPC_FUNC_IMPL(__imp__sub_83D744C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744C8"))) PPC_WEAK_FUNC(sub_83D744C8);
PPC_FUNC_IMPL(__imp__sub_83D744C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744CC"))) PPC_WEAK_FUNC(sub_83D744CC);
PPC_FUNC_IMPL(__imp__sub_83D744CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744D0"))) PPC_WEAK_FUNC(sub_83D744D0);
PPC_FUNC_IMPL(__imp__sub_83D744D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744D4"))) PPC_WEAK_FUNC(sub_83D744D4);
PPC_FUNC_IMPL(__imp__sub_83D744D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744D8"))) PPC_WEAK_FUNC(sub_83D744D8);
PPC_FUNC_IMPL(__imp__sub_83D744D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744DC"))) PPC_WEAK_FUNC(sub_83D744DC);
PPC_FUNC_IMPL(__imp__sub_83D744DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744E0"))) PPC_WEAK_FUNC(sub_83D744E0);
PPC_FUNC_IMPL(__imp__sub_83D744E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744E4"))) PPC_WEAK_FUNC(sub_83D744E4);
PPC_FUNC_IMPL(__imp__sub_83D744E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744E8"))) PPC_WEAK_FUNC(sub_83D744E8);
PPC_FUNC_IMPL(__imp__sub_83D744E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744EC"))) PPC_WEAK_FUNC(sub_83D744EC);
PPC_FUNC_IMPL(__imp__sub_83D744EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744F0"))) PPC_WEAK_FUNC(sub_83D744F0);
PPC_FUNC_IMPL(__imp__sub_83D744F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744F4"))) PPC_WEAK_FUNC(sub_83D744F4);
PPC_FUNC_IMPL(__imp__sub_83D744F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D744F8"))) PPC_WEAK_FUNC(sub_83D744F8);
PPC_FUNC_IMPL(__imp__sub_83D744F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D744FC"))) PPC_WEAK_FUNC(sub_83D744FC);
PPC_FUNC_IMPL(__imp__sub_83D744FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74500"))) PPC_WEAK_FUNC(sub_83D74500);
PPC_FUNC_IMPL(__imp__sub_83D74500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74504"))) PPC_WEAK_FUNC(sub_83D74504);
PPC_FUNC_IMPL(__imp__sub_83D74504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74508"))) PPC_WEAK_FUNC(sub_83D74508);
PPC_FUNC_IMPL(__imp__sub_83D74508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7450C"))) PPC_WEAK_FUNC(sub_83D7450C);
PPC_FUNC_IMPL(__imp__sub_83D7450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74510"))) PPC_WEAK_FUNC(sub_83D74510);
PPC_FUNC_IMPL(__imp__sub_83D74510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8736
	ctx.r3.s64 = ctx.r11.s64 + 8736;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D7451C"))) PPC_WEAK_FUNC(sub_83D7451C);
PPC_FUNC_IMPL(__imp__sub_83D7451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74520"))) PPC_WEAK_FUNC(sub_83D74520);
PPC_FUNC_IMPL(__imp__sub_83D74520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74524"))) PPC_WEAK_FUNC(sub_83D74524);
PPC_FUNC_IMPL(__imp__sub_83D74524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74528"))) PPC_WEAK_FUNC(sub_83D74528);
PPC_FUNC_IMPL(__imp__sub_83D74528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7452C"))) PPC_WEAK_FUNC(sub_83D7452C);
PPC_FUNC_IMPL(__imp__sub_83D7452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74530"))) PPC_WEAK_FUNC(sub_83D74530);
PPC_FUNC_IMPL(__imp__sub_83D74530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74534"))) PPC_WEAK_FUNC(sub_83D74534);
PPC_FUNC_IMPL(__imp__sub_83D74534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74538"))) PPC_WEAK_FUNC(sub_83D74538);
PPC_FUNC_IMPL(__imp__sub_83D74538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7453C"))) PPC_WEAK_FUNC(sub_83D7453C);
PPC_FUNC_IMPL(__imp__sub_83D7453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74540"))) PPC_WEAK_FUNC(sub_83D74540);
PPC_FUNC_IMPL(__imp__sub_83D74540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74544"))) PPC_WEAK_FUNC(sub_83D74544);
PPC_FUNC_IMPL(__imp__sub_83D74544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74548"))) PPC_WEAK_FUNC(sub_83D74548);
PPC_FUNC_IMPL(__imp__sub_83D74548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D7454C"))) PPC_WEAK_FUNC(sub_83D7454C);
PPC_FUNC_IMPL(__imp__sub_83D7454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74550"))) PPC_WEAK_FUNC(sub_83D74550);
PPC_FUNC_IMPL(__imp__sub_83D74550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D74554"))) PPC_WEAK_FUNC(sub_83D74554);
PPC_FUNC_IMPL(__imp__sub_83D74554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D74558"))) PPC_WEAK_FUNC(sub_83D74558);
PPC_FUNC_IMPL(__imp__sub_83D74558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

