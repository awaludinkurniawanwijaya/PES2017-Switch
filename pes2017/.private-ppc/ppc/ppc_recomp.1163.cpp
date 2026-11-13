#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D2AB1C"))) PPC_WEAK_FUNC(sub_83D2AB1C);
PPC_FUNC_IMPL(__imp__sub_83D2AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB20"))) PPC_WEAK_FUNC(sub_83D2AB20);
PPC_FUNC_IMPL(__imp__sub_83D2AB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB24"))) PPC_WEAK_FUNC(sub_83D2AB24);
PPC_FUNC_IMPL(__imp__sub_83D2AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB28"))) PPC_WEAK_FUNC(sub_83D2AB28);
PPC_FUNC_IMPL(__imp__sub_83D2AB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB2C"))) PPC_WEAK_FUNC(sub_83D2AB2C);
PPC_FUNC_IMPL(__imp__sub_83D2AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB30"))) PPC_WEAK_FUNC(sub_83D2AB30);
PPC_FUNC_IMPL(__imp__sub_83D2AB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB34"))) PPC_WEAK_FUNC(sub_83D2AB34);
PPC_FUNC_IMPL(__imp__sub_83D2AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB38"))) PPC_WEAK_FUNC(sub_83D2AB38);
PPC_FUNC_IMPL(__imp__sub_83D2AB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB3C"))) PPC_WEAK_FUNC(sub_83D2AB3C);
PPC_FUNC_IMPL(__imp__sub_83D2AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB40"))) PPC_WEAK_FUNC(sub_83D2AB40);
PPC_FUNC_IMPL(__imp__sub_83D2AB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB44"))) PPC_WEAK_FUNC(sub_83D2AB44);
PPC_FUNC_IMPL(__imp__sub_83D2AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB48"))) PPC_WEAK_FUNC(sub_83D2AB48);
PPC_FUNC_IMPL(__imp__sub_83D2AB48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB4C"))) PPC_WEAK_FUNC(sub_83D2AB4C);
PPC_FUNC_IMPL(__imp__sub_83D2AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB50"))) PPC_WEAK_FUNC(sub_83D2AB50);
PPC_FUNC_IMPL(__imp__sub_83D2AB50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB54"))) PPC_WEAK_FUNC(sub_83D2AB54);
PPC_FUNC_IMPL(__imp__sub_83D2AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB58"))) PPC_WEAK_FUNC(sub_83D2AB58);
PPC_FUNC_IMPL(__imp__sub_83D2AB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AB5C"))) PPC_WEAK_FUNC(sub_83D2AB5C);
PPC_FUNC_IMPL(__imp__sub_83D2AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB60"))) PPC_WEAK_FUNC(sub_83D2AB60);
PPC_FUNC_IMPL(__imp__sub_83D2AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2AB6C"))) PPC_WEAK_FUNC(sub_83D2AB6C);
PPC_FUNC_IMPL(__imp__sub_83D2AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AB70"))) PPC_WEAK_FUNC(sub_83D2AB70);
PPC_FUNC_IMPL(__imp__sub_83D2AB70) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-4076
	ctx.r31.s64 = ctx.r11.s64 + -4076;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2aba8
	if (cr6.lt) goto loc_83D2ABA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2ABA8;
	sub_825952B8(ctx, base);
loc_83D2ABA8:
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

__attribute__((alias("__imp__sub_83D2ABD4"))) PPC_WEAK_FUNC(sub_83D2ABD4);
PPC_FUNC_IMPL(__imp__sub_83D2ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ABD8"))) PPC_WEAK_FUNC(sub_83D2ABD8);
PPC_FUNC_IMPL(__imp__sub_83D2ABD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ABDC"))) PPC_WEAK_FUNC(sub_83D2ABDC);
PPC_FUNC_IMPL(__imp__sub_83D2ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ABE0"))) PPC_WEAK_FUNC(sub_83D2ABE0);
PPC_FUNC_IMPL(__imp__sub_83D2ABE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ABE4"))) PPC_WEAK_FUNC(sub_83D2ABE4);
PPC_FUNC_IMPL(__imp__sub_83D2ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ABE8"))) PPC_WEAK_FUNC(sub_83D2ABE8);
PPC_FUNC_IMPL(__imp__sub_83D2ABE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ABEC"))) PPC_WEAK_FUNC(sub_83D2ABEC);
PPC_FUNC_IMPL(__imp__sub_83D2ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ABF0"))) PPC_WEAK_FUNC(sub_83D2ABF0);
PPC_FUNC_IMPL(__imp__sub_83D2ABF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ABF4"))) PPC_WEAK_FUNC(sub_83D2ABF4);
PPC_FUNC_IMPL(__imp__sub_83D2ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ABF8"))) PPC_WEAK_FUNC(sub_83D2ABF8);
PPC_FUNC_IMPL(__imp__sub_83D2ABF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ABFC"))) PPC_WEAK_FUNC(sub_83D2ABFC);
PPC_FUNC_IMPL(__imp__sub_83D2ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC00"))) PPC_WEAK_FUNC(sub_83D2AC00);
PPC_FUNC_IMPL(__imp__sub_83D2AC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC04"))) PPC_WEAK_FUNC(sub_83D2AC04);
PPC_FUNC_IMPL(__imp__sub_83D2AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC08"))) PPC_WEAK_FUNC(sub_83D2AC08);
PPC_FUNC_IMPL(__imp__sub_83D2AC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC0C"))) PPC_WEAK_FUNC(sub_83D2AC0C);
PPC_FUNC_IMPL(__imp__sub_83D2AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC10"))) PPC_WEAK_FUNC(sub_83D2AC10);
PPC_FUNC_IMPL(__imp__sub_83D2AC10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC14"))) PPC_WEAK_FUNC(sub_83D2AC14);
PPC_FUNC_IMPL(__imp__sub_83D2AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC18"))) PPC_WEAK_FUNC(sub_83D2AC18);
PPC_FUNC_IMPL(__imp__sub_83D2AC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC1C"))) PPC_WEAK_FUNC(sub_83D2AC1C);
PPC_FUNC_IMPL(__imp__sub_83D2AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC20"))) PPC_WEAK_FUNC(sub_83D2AC20);
PPC_FUNC_IMPL(__imp__sub_83D2AC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC24"))) PPC_WEAK_FUNC(sub_83D2AC24);
PPC_FUNC_IMPL(__imp__sub_83D2AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC28"))) PPC_WEAK_FUNC(sub_83D2AC28);
PPC_FUNC_IMPL(__imp__sub_83D2AC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC2C"))) PPC_WEAK_FUNC(sub_83D2AC2C);
PPC_FUNC_IMPL(__imp__sub_83D2AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC30"))) PPC_WEAK_FUNC(sub_83D2AC30);
PPC_FUNC_IMPL(__imp__sub_83D2AC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC34"))) PPC_WEAK_FUNC(sub_83D2AC34);
PPC_FUNC_IMPL(__imp__sub_83D2AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC38"))) PPC_WEAK_FUNC(sub_83D2AC38);
PPC_FUNC_IMPL(__imp__sub_83D2AC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-24924
	ctx.r3.s64 = ctx.r11.s64 + -24924;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2AC44"))) PPC_WEAK_FUNC(sub_83D2AC44);
PPC_FUNC_IMPL(__imp__sub_83D2AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC48"))) PPC_WEAK_FUNC(sub_83D2AC48);
PPC_FUNC_IMPL(__imp__sub_83D2AC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC4C"))) PPC_WEAK_FUNC(sub_83D2AC4C);
PPC_FUNC_IMPL(__imp__sub_83D2AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC50"))) PPC_WEAK_FUNC(sub_83D2AC50);
PPC_FUNC_IMPL(__imp__sub_83D2AC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC54"))) PPC_WEAK_FUNC(sub_83D2AC54);
PPC_FUNC_IMPL(__imp__sub_83D2AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC58"))) PPC_WEAK_FUNC(sub_83D2AC58);
PPC_FUNC_IMPL(__imp__sub_83D2AC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC5C"))) PPC_WEAK_FUNC(sub_83D2AC5C);
PPC_FUNC_IMPL(__imp__sub_83D2AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC60"))) PPC_WEAK_FUNC(sub_83D2AC60);
PPC_FUNC_IMPL(__imp__sub_83D2AC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC64"))) PPC_WEAK_FUNC(sub_83D2AC64);
PPC_FUNC_IMPL(__imp__sub_83D2AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC68"))) PPC_WEAK_FUNC(sub_83D2AC68);
PPC_FUNC_IMPL(__imp__sub_83D2AC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC6C"))) PPC_WEAK_FUNC(sub_83D2AC6C);
PPC_FUNC_IMPL(__imp__sub_83D2AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC70"))) PPC_WEAK_FUNC(sub_83D2AC70);
PPC_FUNC_IMPL(__imp__sub_83D2AC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC74"))) PPC_WEAK_FUNC(sub_83D2AC74);
PPC_FUNC_IMPL(__imp__sub_83D2AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC78"))) PPC_WEAK_FUNC(sub_83D2AC78);
PPC_FUNC_IMPL(__imp__sub_83D2AC78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC7C"))) PPC_WEAK_FUNC(sub_83D2AC7C);
PPC_FUNC_IMPL(__imp__sub_83D2AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC80"))) PPC_WEAK_FUNC(sub_83D2AC80);
PPC_FUNC_IMPL(__imp__sub_83D2AC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC84"))) PPC_WEAK_FUNC(sub_83D2AC84);
PPC_FUNC_IMPL(__imp__sub_83D2AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC88"))) PPC_WEAK_FUNC(sub_83D2AC88);
PPC_FUNC_IMPL(__imp__sub_83D2AC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC8C"))) PPC_WEAK_FUNC(sub_83D2AC8C);
PPC_FUNC_IMPL(__imp__sub_83D2AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC90"))) PPC_WEAK_FUNC(sub_83D2AC90);
PPC_FUNC_IMPL(__imp__sub_83D2AC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC94"))) PPC_WEAK_FUNC(sub_83D2AC94);
PPC_FUNC_IMPL(__imp__sub_83D2AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AC98"))) PPC_WEAK_FUNC(sub_83D2AC98);
PPC_FUNC_IMPL(__imp__sub_83D2AC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AC9C"))) PPC_WEAK_FUNC(sub_83D2AC9C);
PPC_FUNC_IMPL(__imp__sub_83D2AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACA0"))) PPC_WEAK_FUNC(sub_83D2ACA0);
PPC_FUNC_IMPL(__imp__sub_83D2ACA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACA4"))) PPC_WEAK_FUNC(sub_83D2ACA4);
PPC_FUNC_IMPL(__imp__sub_83D2ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACA8"))) PPC_WEAK_FUNC(sub_83D2ACA8);
PPC_FUNC_IMPL(__imp__sub_83D2ACA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACAC"))) PPC_WEAK_FUNC(sub_83D2ACAC);
PPC_FUNC_IMPL(__imp__sub_83D2ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACB0"))) PPC_WEAK_FUNC(sub_83D2ACB0);
PPC_FUNC_IMPL(__imp__sub_83D2ACB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACB4"))) PPC_WEAK_FUNC(sub_83D2ACB4);
PPC_FUNC_IMPL(__imp__sub_83D2ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACB8"))) PPC_WEAK_FUNC(sub_83D2ACB8);
PPC_FUNC_IMPL(__imp__sub_83D2ACB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACBC"))) PPC_WEAK_FUNC(sub_83D2ACBC);
PPC_FUNC_IMPL(__imp__sub_83D2ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACC0"))) PPC_WEAK_FUNC(sub_83D2ACC0);
PPC_FUNC_IMPL(__imp__sub_83D2ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-24548
	ctx.r3.s64 = ctx.r11.s64 + -24548;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2ACCC"))) PPC_WEAK_FUNC(sub_83D2ACCC);
PPC_FUNC_IMPL(__imp__sub_83D2ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACD0"))) PPC_WEAK_FUNC(sub_83D2ACD0);
PPC_FUNC_IMPL(__imp__sub_83D2ACD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACD4"))) PPC_WEAK_FUNC(sub_83D2ACD4);
PPC_FUNC_IMPL(__imp__sub_83D2ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACD8"))) PPC_WEAK_FUNC(sub_83D2ACD8);
PPC_FUNC_IMPL(__imp__sub_83D2ACD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACDC"))) PPC_WEAK_FUNC(sub_83D2ACDC);
PPC_FUNC_IMPL(__imp__sub_83D2ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACE0"))) PPC_WEAK_FUNC(sub_83D2ACE0);
PPC_FUNC_IMPL(__imp__sub_83D2ACE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACE4"))) PPC_WEAK_FUNC(sub_83D2ACE4);
PPC_FUNC_IMPL(__imp__sub_83D2ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACE8"))) PPC_WEAK_FUNC(sub_83D2ACE8);
PPC_FUNC_IMPL(__imp__sub_83D2ACE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACEC"))) PPC_WEAK_FUNC(sub_83D2ACEC);
PPC_FUNC_IMPL(__imp__sub_83D2ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACF0"))) PPC_WEAK_FUNC(sub_83D2ACF0);
PPC_FUNC_IMPL(__imp__sub_83D2ACF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACF4"))) PPC_WEAK_FUNC(sub_83D2ACF4);
PPC_FUNC_IMPL(__imp__sub_83D2ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ACF8"))) PPC_WEAK_FUNC(sub_83D2ACF8);
PPC_FUNC_IMPL(__imp__sub_83D2ACF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ACFC"))) PPC_WEAK_FUNC(sub_83D2ACFC);
PPC_FUNC_IMPL(__imp__sub_83D2ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD00"))) PPC_WEAK_FUNC(sub_83D2AD00);
PPC_FUNC_IMPL(__imp__sub_83D2AD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD04"))) PPC_WEAK_FUNC(sub_83D2AD04);
PPC_FUNC_IMPL(__imp__sub_83D2AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD08"))) PPC_WEAK_FUNC(sub_83D2AD08);
PPC_FUNC_IMPL(__imp__sub_83D2AD08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD0C"))) PPC_WEAK_FUNC(sub_83D2AD0C);
PPC_FUNC_IMPL(__imp__sub_83D2AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD10"))) PPC_WEAK_FUNC(sub_83D2AD10);
PPC_FUNC_IMPL(__imp__sub_83D2AD10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD14"))) PPC_WEAK_FUNC(sub_83D2AD14);
PPC_FUNC_IMPL(__imp__sub_83D2AD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD18"))) PPC_WEAK_FUNC(sub_83D2AD18);
PPC_FUNC_IMPL(__imp__sub_83D2AD18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD1C"))) PPC_WEAK_FUNC(sub_83D2AD1C);
PPC_FUNC_IMPL(__imp__sub_83D2AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD20"))) PPC_WEAK_FUNC(sub_83D2AD20);
PPC_FUNC_IMPL(__imp__sub_83D2AD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD24"))) PPC_WEAK_FUNC(sub_83D2AD24);
PPC_FUNC_IMPL(__imp__sub_83D2AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD28"))) PPC_WEAK_FUNC(sub_83D2AD28);
PPC_FUNC_IMPL(__imp__sub_83D2AD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD2C"))) PPC_WEAK_FUNC(sub_83D2AD2C);
PPC_FUNC_IMPL(__imp__sub_83D2AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD30"))) PPC_WEAK_FUNC(sub_83D2AD30);
PPC_FUNC_IMPL(__imp__sub_83D2AD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD34"))) PPC_WEAK_FUNC(sub_83D2AD34);
PPC_FUNC_IMPL(__imp__sub_83D2AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD38"))) PPC_WEAK_FUNC(sub_83D2AD38);
PPC_FUNC_IMPL(__imp__sub_83D2AD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD3C"))) PPC_WEAK_FUNC(sub_83D2AD3C);
PPC_FUNC_IMPL(__imp__sub_83D2AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD40"))) PPC_WEAK_FUNC(sub_83D2AD40);
PPC_FUNC_IMPL(__imp__sub_83D2AD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD44"))) PPC_WEAK_FUNC(sub_83D2AD44);
PPC_FUNC_IMPL(__imp__sub_83D2AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD48"))) PPC_WEAK_FUNC(sub_83D2AD48);
PPC_FUNC_IMPL(__imp__sub_83D2AD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD4C"))) PPC_WEAK_FUNC(sub_83D2AD4C);
PPC_FUNC_IMPL(__imp__sub_83D2AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD50"))) PPC_WEAK_FUNC(sub_83D2AD50);
PPC_FUNC_IMPL(__imp__sub_83D2AD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD54"))) PPC_WEAK_FUNC(sub_83D2AD54);
PPC_FUNC_IMPL(__imp__sub_83D2AD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD58"))) PPC_WEAK_FUNC(sub_83D2AD58);
PPC_FUNC_IMPL(__imp__sub_83D2AD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD5C"))) PPC_WEAK_FUNC(sub_83D2AD5C);
PPC_FUNC_IMPL(__imp__sub_83D2AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD60"))) PPC_WEAK_FUNC(sub_83D2AD60);
PPC_FUNC_IMPL(__imp__sub_83D2AD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD64"))) PPC_WEAK_FUNC(sub_83D2AD64);
PPC_FUNC_IMPL(__imp__sub_83D2AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD68"))) PPC_WEAK_FUNC(sub_83D2AD68);
PPC_FUNC_IMPL(__imp__sub_83D2AD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD6C"))) PPC_WEAK_FUNC(sub_83D2AD6C);
PPC_FUNC_IMPL(__imp__sub_83D2AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD70"))) PPC_WEAK_FUNC(sub_83D2AD70);
PPC_FUNC_IMPL(__imp__sub_83D2AD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD74"))) PPC_WEAK_FUNC(sub_83D2AD74);
PPC_FUNC_IMPL(__imp__sub_83D2AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD78"))) PPC_WEAK_FUNC(sub_83D2AD78);
PPC_FUNC_IMPL(__imp__sub_83D2AD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD7C"))) PPC_WEAK_FUNC(sub_83D2AD7C);
PPC_FUNC_IMPL(__imp__sub_83D2AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD80"))) PPC_WEAK_FUNC(sub_83D2AD80);
PPC_FUNC_IMPL(__imp__sub_83D2AD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD84"))) PPC_WEAK_FUNC(sub_83D2AD84);
PPC_FUNC_IMPL(__imp__sub_83D2AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD88"))) PPC_WEAK_FUNC(sub_83D2AD88);
PPC_FUNC_IMPL(__imp__sub_83D2AD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD8C"))) PPC_WEAK_FUNC(sub_83D2AD8C);
PPC_FUNC_IMPL(__imp__sub_83D2AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD90"))) PPC_WEAK_FUNC(sub_83D2AD90);
PPC_FUNC_IMPL(__imp__sub_83D2AD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD94"))) PPC_WEAK_FUNC(sub_83D2AD94);
PPC_FUNC_IMPL(__imp__sub_83D2AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AD98"))) PPC_WEAK_FUNC(sub_83D2AD98);
PPC_FUNC_IMPL(__imp__sub_83D2AD98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AD9C"))) PPC_WEAK_FUNC(sub_83D2AD9C);
PPC_FUNC_IMPL(__imp__sub_83D2AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADA0"))) PPC_WEAK_FUNC(sub_83D2ADA0);
PPC_FUNC_IMPL(__imp__sub_83D2ADA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADA4"))) PPC_WEAK_FUNC(sub_83D2ADA4);
PPC_FUNC_IMPL(__imp__sub_83D2ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADA8"))) PPC_WEAK_FUNC(sub_83D2ADA8);
PPC_FUNC_IMPL(__imp__sub_83D2ADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-24164
	ctx.r3.s64 = ctx.r11.s64 + -24164;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2ADB4"))) PPC_WEAK_FUNC(sub_83D2ADB4);
PPC_FUNC_IMPL(__imp__sub_83D2ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADB8"))) PPC_WEAK_FUNC(sub_83D2ADB8);
PPC_FUNC_IMPL(__imp__sub_83D2ADB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADBC"))) PPC_WEAK_FUNC(sub_83D2ADBC);
PPC_FUNC_IMPL(__imp__sub_83D2ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADC0"))) PPC_WEAK_FUNC(sub_83D2ADC0);
PPC_FUNC_IMPL(__imp__sub_83D2ADC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADC4"))) PPC_WEAK_FUNC(sub_83D2ADC4);
PPC_FUNC_IMPL(__imp__sub_83D2ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADC8"))) PPC_WEAK_FUNC(sub_83D2ADC8);
PPC_FUNC_IMPL(__imp__sub_83D2ADC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADCC"))) PPC_WEAK_FUNC(sub_83D2ADCC);
PPC_FUNC_IMPL(__imp__sub_83D2ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADD0"))) PPC_WEAK_FUNC(sub_83D2ADD0);
PPC_FUNC_IMPL(__imp__sub_83D2ADD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADD4"))) PPC_WEAK_FUNC(sub_83D2ADD4);
PPC_FUNC_IMPL(__imp__sub_83D2ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADD8"))) PPC_WEAK_FUNC(sub_83D2ADD8);
PPC_FUNC_IMPL(__imp__sub_83D2ADD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADDC"))) PPC_WEAK_FUNC(sub_83D2ADDC);
PPC_FUNC_IMPL(__imp__sub_83D2ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADE0"))) PPC_WEAK_FUNC(sub_83D2ADE0);
PPC_FUNC_IMPL(__imp__sub_83D2ADE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADE4"))) PPC_WEAK_FUNC(sub_83D2ADE4);
PPC_FUNC_IMPL(__imp__sub_83D2ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADE8"))) PPC_WEAK_FUNC(sub_83D2ADE8);
PPC_FUNC_IMPL(__imp__sub_83D2ADE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADEC"))) PPC_WEAK_FUNC(sub_83D2ADEC);
PPC_FUNC_IMPL(__imp__sub_83D2ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADF0"))) PPC_WEAK_FUNC(sub_83D2ADF0);
PPC_FUNC_IMPL(__imp__sub_83D2ADF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADF4"))) PPC_WEAK_FUNC(sub_83D2ADF4);
PPC_FUNC_IMPL(__imp__sub_83D2ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2ADF8"))) PPC_WEAK_FUNC(sub_83D2ADF8);
PPC_FUNC_IMPL(__imp__sub_83D2ADF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2ADFC"))) PPC_WEAK_FUNC(sub_83D2ADFC);
PPC_FUNC_IMPL(__imp__sub_83D2ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE00"))) PPC_WEAK_FUNC(sub_83D2AE00);
PPC_FUNC_IMPL(__imp__sub_83D2AE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE04"))) PPC_WEAK_FUNC(sub_83D2AE04);
PPC_FUNC_IMPL(__imp__sub_83D2AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE08"))) PPC_WEAK_FUNC(sub_83D2AE08);
PPC_FUNC_IMPL(__imp__sub_83D2AE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE0C"))) PPC_WEAK_FUNC(sub_83D2AE0C);
PPC_FUNC_IMPL(__imp__sub_83D2AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE10"))) PPC_WEAK_FUNC(sub_83D2AE10);
PPC_FUNC_IMPL(__imp__sub_83D2AE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE14"))) PPC_WEAK_FUNC(sub_83D2AE14);
PPC_FUNC_IMPL(__imp__sub_83D2AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE18"))) PPC_WEAK_FUNC(sub_83D2AE18);
PPC_FUNC_IMPL(__imp__sub_83D2AE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE1C"))) PPC_WEAK_FUNC(sub_83D2AE1C);
PPC_FUNC_IMPL(__imp__sub_83D2AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE20"))) PPC_WEAK_FUNC(sub_83D2AE20);
PPC_FUNC_IMPL(__imp__sub_83D2AE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE24"))) PPC_WEAK_FUNC(sub_83D2AE24);
PPC_FUNC_IMPL(__imp__sub_83D2AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE28"))) PPC_WEAK_FUNC(sub_83D2AE28);
PPC_FUNC_IMPL(__imp__sub_83D2AE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE2C"))) PPC_WEAK_FUNC(sub_83D2AE2C);
PPC_FUNC_IMPL(__imp__sub_83D2AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE30"))) PPC_WEAK_FUNC(sub_83D2AE30);
PPC_FUNC_IMPL(__imp__sub_83D2AE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE34"))) PPC_WEAK_FUNC(sub_83D2AE34);
PPC_FUNC_IMPL(__imp__sub_83D2AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE38"))) PPC_WEAK_FUNC(sub_83D2AE38);
PPC_FUNC_IMPL(__imp__sub_83D2AE38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE3C"))) PPC_WEAK_FUNC(sub_83D2AE3C);
PPC_FUNC_IMPL(__imp__sub_83D2AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE40"))) PPC_WEAK_FUNC(sub_83D2AE40);
PPC_FUNC_IMPL(__imp__sub_83D2AE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE44"))) PPC_WEAK_FUNC(sub_83D2AE44);
PPC_FUNC_IMPL(__imp__sub_83D2AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE48"))) PPC_WEAK_FUNC(sub_83D2AE48);
PPC_FUNC_IMPL(__imp__sub_83D2AE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE4C"))) PPC_WEAK_FUNC(sub_83D2AE4C);
PPC_FUNC_IMPL(__imp__sub_83D2AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE50"))) PPC_WEAK_FUNC(sub_83D2AE50);
PPC_FUNC_IMPL(__imp__sub_83D2AE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE54"))) PPC_WEAK_FUNC(sub_83D2AE54);
PPC_FUNC_IMPL(__imp__sub_83D2AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE58"))) PPC_WEAK_FUNC(sub_83D2AE58);
PPC_FUNC_IMPL(__imp__sub_83D2AE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE5C"))) PPC_WEAK_FUNC(sub_83D2AE5C);
PPC_FUNC_IMPL(__imp__sub_83D2AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE60"))) PPC_WEAK_FUNC(sub_83D2AE60);
PPC_FUNC_IMPL(__imp__sub_83D2AE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE64"))) PPC_WEAK_FUNC(sub_83D2AE64);
PPC_FUNC_IMPL(__imp__sub_83D2AE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE68"))) PPC_WEAK_FUNC(sub_83D2AE68);
PPC_FUNC_IMPL(__imp__sub_83D2AE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE6C"))) PPC_WEAK_FUNC(sub_83D2AE6C);
PPC_FUNC_IMPL(__imp__sub_83D2AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE70"))) PPC_WEAK_FUNC(sub_83D2AE70);
PPC_FUNC_IMPL(__imp__sub_83D2AE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE74"))) PPC_WEAK_FUNC(sub_83D2AE74);
PPC_FUNC_IMPL(__imp__sub_83D2AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE78"))) PPC_WEAK_FUNC(sub_83D2AE78);
PPC_FUNC_IMPL(__imp__sub_83D2AE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE7C"))) PPC_WEAK_FUNC(sub_83D2AE7C);
PPC_FUNC_IMPL(__imp__sub_83D2AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE80"))) PPC_WEAK_FUNC(sub_83D2AE80);
PPC_FUNC_IMPL(__imp__sub_83D2AE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE84"))) PPC_WEAK_FUNC(sub_83D2AE84);
PPC_FUNC_IMPL(__imp__sub_83D2AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE88"))) PPC_WEAK_FUNC(sub_83D2AE88);
PPC_FUNC_IMPL(__imp__sub_83D2AE88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE8C"))) PPC_WEAK_FUNC(sub_83D2AE8C);
PPC_FUNC_IMPL(__imp__sub_83D2AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE90"))) PPC_WEAK_FUNC(sub_83D2AE90);
PPC_FUNC_IMPL(__imp__sub_83D2AE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE94"))) PPC_WEAK_FUNC(sub_83D2AE94);
PPC_FUNC_IMPL(__imp__sub_83D2AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AE98"))) PPC_WEAK_FUNC(sub_83D2AE98);
PPC_FUNC_IMPL(__imp__sub_83D2AE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AE9C"))) PPC_WEAK_FUNC(sub_83D2AE9C);
PPC_FUNC_IMPL(__imp__sub_83D2AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEA0"))) PPC_WEAK_FUNC(sub_83D2AEA0);
PPC_FUNC_IMPL(__imp__sub_83D2AEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEA4"))) PPC_WEAK_FUNC(sub_83D2AEA4);
PPC_FUNC_IMPL(__imp__sub_83D2AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEA8"))) PPC_WEAK_FUNC(sub_83D2AEA8);
PPC_FUNC_IMPL(__imp__sub_83D2AEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEAC"))) PPC_WEAK_FUNC(sub_83D2AEAC);
PPC_FUNC_IMPL(__imp__sub_83D2AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEB0"))) PPC_WEAK_FUNC(sub_83D2AEB0);
PPC_FUNC_IMPL(__imp__sub_83D2AEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEB4"))) PPC_WEAK_FUNC(sub_83D2AEB4);
PPC_FUNC_IMPL(__imp__sub_83D2AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEB8"))) PPC_WEAK_FUNC(sub_83D2AEB8);
PPC_FUNC_IMPL(__imp__sub_83D2AEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEBC"))) PPC_WEAK_FUNC(sub_83D2AEBC);
PPC_FUNC_IMPL(__imp__sub_83D2AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEC0"))) PPC_WEAK_FUNC(sub_83D2AEC0);
PPC_FUNC_IMPL(__imp__sub_83D2AEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEC4"))) PPC_WEAK_FUNC(sub_83D2AEC4);
PPC_FUNC_IMPL(__imp__sub_83D2AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEC8"))) PPC_WEAK_FUNC(sub_83D2AEC8);
PPC_FUNC_IMPL(__imp__sub_83D2AEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AECC"))) PPC_WEAK_FUNC(sub_83D2AECC);
PPC_FUNC_IMPL(__imp__sub_83D2AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AED0"))) PPC_WEAK_FUNC(sub_83D2AED0);
PPC_FUNC_IMPL(__imp__sub_83D2AED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AED4"))) PPC_WEAK_FUNC(sub_83D2AED4);
PPC_FUNC_IMPL(__imp__sub_83D2AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AED8"))) PPC_WEAK_FUNC(sub_83D2AED8);
PPC_FUNC_IMPL(__imp__sub_83D2AED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEDC"))) PPC_WEAK_FUNC(sub_83D2AEDC);
PPC_FUNC_IMPL(__imp__sub_83D2AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEE0"))) PPC_WEAK_FUNC(sub_83D2AEE0);
PPC_FUNC_IMPL(__imp__sub_83D2AEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEE4"))) PPC_WEAK_FUNC(sub_83D2AEE4);
PPC_FUNC_IMPL(__imp__sub_83D2AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEE8"))) PPC_WEAK_FUNC(sub_83D2AEE8);
PPC_FUNC_IMPL(__imp__sub_83D2AEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEEC"))) PPC_WEAK_FUNC(sub_83D2AEEC);
PPC_FUNC_IMPL(__imp__sub_83D2AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEF0"))) PPC_WEAK_FUNC(sub_83D2AEF0);
PPC_FUNC_IMPL(__imp__sub_83D2AEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEF4"))) PPC_WEAK_FUNC(sub_83D2AEF4);
PPC_FUNC_IMPL(__imp__sub_83D2AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AEF8"))) PPC_WEAK_FUNC(sub_83D2AEF8);
PPC_FUNC_IMPL(__imp__sub_83D2AEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AEFC"))) PPC_WEAK_FUNC(sub_83D2AEFC);
PPC_FUNC_IMPL(__imp__sub_83D2AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF00"))) PPC_WEAK_FUNC(sub_83D2AF00);
PPC_FUNC_IMPL(__imp__sub_83D2AF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF04"))) PPC_WEAK_FUNC(sub_83D2AF04);
PPC_FUNC_IMPL(__imp__sub_83D2AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF08"))) PPC_WEAK_FUNC(sub_83D2AF08);
PPC_FUNC_IMPL(__imp__sub_83D2AF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF0C"))) PPC_WEAK_FUNC(sub_83D2AF0C);
PPC_FUNC_IMPL(__imp__sub_83D2AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF10"))) PPC_WEAK_FUNC(sub_83D2AF10);
PPC_FUNC_IMPL(__imp__sub_83D2AF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF14"))) PPC_WEAK_FUNC(sub_83D2AF14);
PPC_FUNC_IMPL(__imp__sub_83D2AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF18"))) PPC_WEAK_FUNC(sub_83D2AF18);
PPC_FUNC_IMPL(__imp__sub_83D2AF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF1C"))) PPC_WEAK_FUNC(sub_83D2AF1C);
PPC_FUNC_IMPL(__imp__sub_83D2AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF20"))) PPC_WEAK_FUNC(sub_83D2AF20);
PPC_FUNC_IMPL(__imp__sub_83D2AF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF24"))) PPC_WEAK_FUNC(sub_83D2AF24);
PPC_FUNC_IMPL(__imp__sub_83D2AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF28"))) PPC_WEAK_FUNC(sub_83D2AF28);
PPC_FUNC_IMPL(__imp__sub_83D2AF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF2C"))) PPC_WEAK_FUNC(sub_83D2AF2C);
PPC_FUNC_IMPL(__imp__sub_83D2AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF30"))) PPC_WEAK_FUNC(sub_83D2AF30);
PPC_FUNC_IMPL(__imp__sub_83D2AF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF34"))) PPC_WEAK_FUNC(sub_83D2AF34);
PPC_FUNC_IMPL(__imp__sub_83D2AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF38"))) PPC_WEAK_FUNC(sub_83D2AF38);
PPC_FUNC_IMPL(__imp__sub_83D2AF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF3C"))) PPC_WEAK_FUNC(sub_83D2AF3C);
PPC_FUNC_IMPL(__imp__sub_83D2AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF40"))) PPC_WEAK_FUNC(sub_83D2AF40);
PPC_FUNC_IMPL(__imp__sub_83D2AF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF44"))) PPC_WEAK_FUNC(sub_83D2AF44);
PPC_FUNC_IMPL(__imp__sub_83D2AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF48"))) PPC_WEAK_FUNC(sub_83D2AF48);
PPC_FUNC_IMPL(__imp__sub_83D2AF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF4C"))) PPC_WEAK_FUNC(sub_83D2AF4C);
PPC_FUNC_IMPL(__imp__sub_83D2AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF50"))) PPC_WEAK_FUNC(sub_83D2AF50);
PPC_FUNC_IMPL(__imp__sub_83D2AF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-23764
	ctx.r3.s64 = ctx.r11.s64 + -23764;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2AF5C"))) PPC_WEAK_FUNC(sub_83D2AF5C);
PPC_FUNC_IMPL(__imp__sub_83D2AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF60"))) PPC_WEAK_FUNC(sub_83D2AF60);
PPC_FUNC_IMPL(__imp__sub_83D2AF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF64"))) PPC_WEAK_FUNC(sub_83D2AF64);
PPC_FUNC_IMPL(__imp__sub_83D2AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF68"))) PPC_WEAK_FUNC(sub_83D2AF68);
PPC_FUNC_IMPL(__imp__sub_83D2AF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF6C"))) PPC_WEAK_FUNC(sub_83D2AF6C);
PPC_FUNC_IMPL(__imp__sub_83D2AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF70"))) PPC_WEAK_FUNC(sub_83D2AF70);
PPC_FUNC_IMPL(__imp__sub_83D2AF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF74"))) PPC_WEAK_FUNC(sub_83D2AF74);
PPC_FUNC_IMPL(__imp__sub_83D2AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF78"))) PPC_WEAK_FUNC(sub_83D2AF78);
PPC_FUNC_IMPL(__imp__sub_83D2AF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF7C"))) PPC_WEAK_FUNC(sub_83D2AF7C);
PPC_FUNC_IMPL(__imp__sub_83D2AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF80"))) PPC_WEAK_FUNC(sub_83D2AF80);
PPC_FUNC_IMPL(__imp__sub_83D2AF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF84"))) PPC_WEAK_FUNC(sub_83D2AF84);
PPC_FUNC_IMPL(__imp__sub_83D2AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF88"))) PPC_WEAK_FUNC(sub_83D2AF88);
PPC_FUNC_IMPL(__imp__sub_83D2AF88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF8C"))) PPC_WEAK_FUNC(sub_83D2AF8C);
PPC_FUNC_IMPL(__imp__sub_83D2AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF90"))) PPC_WEAK_FUNC(sub_83D2AF90);
PPC_FUNC_IMPL(__imp__sub_83D2AF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF94"))) PPC_WEAK_FUNC(sub_83D2AF94);
PPC_FUNC_IMPL(__imp__sub_83D2AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AF98"))) PPC_WEAK_FUNC(sub_83D2AF98);
PPC_FUNC_IMPL(__imp__sub_83D2AF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2AF9C"))) PPC_WEAK_FUNC(sub_83D2AF9C);
PPC_FUNC_IMPL(__imp__sub_83D2AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2AFA0"))) PPC_WEAK_FUNC(sub_83D2AFA0);
PPC_FUNC_IMPL(__imp__sub_83D2AFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

