#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D6118C"))) PPC_WEAK_FUNC(sub_83D6118C);
PPC_FUNC_IMPL(__imp__sub_83D6118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61190"))) PPC_WEAK_FUNC(sub_83D61190);
PPC_FUNC_IMPL(__imp__sub_83D61190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61194"))) PPC_WEAK_FUNC(sub_83D61194);
PPC_FUNC_IMPL(__imp__sub_83D61194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61198"))) PPC_WEAK_FUNC(sub_83D61198);
PPC_FUNC_IMPL(__imp__sub_83D61198) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-24176
	ctx.r11.s64 = ctx.r11.s64 + -24176;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D611BC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D611C8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d611bc
	if (!cr0.lt) goto loc_83D611BC;
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

__attribute__((alias("__imp__sub_83D611E8"))) PPC_WEAK_FUNC(sub_83D611E8);
PPC_FUNC_IMPL(__imp__sub_83D611E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D611EC"))) PPC_WEAK_FUNC(sub_83D611EC);
PPC_FUNC_IMPL(__imp__sub_83D611EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D611F0"))) PPC_WEAK_FUNC(sub_83D611F0);
PPC_FUNC_IMPL(__imp__sub_83D611F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D611F4"))) PPC_WEAK_FUNC(sub_83D611F4);
PPC_FUNC_IMPL(__imp__sub_83D611F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D611F8"))) PPC_WEAK_FUNC(sub_83D611F8);
PPC_FUNC_IMPL(__imp__sub_83D611F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D611FC"))) PPC_WEAK_FUNC(sub_83D611FC);
PPC_FUNC_IMPL(__imp__sub_83D611FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61200"))) PPC_WEAK_FUNC(sub_83D61200);
PPC_FUNC_IMPL(__imp__sub_83D61200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61204"))) PPC_WEAK_FUNC(sub_83D61204);
PPC_FUNC_IMPL(__imp__sub_83D61204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61208"))) PPC_WEAK_FUNC(sub_83D61208);
PPC_FUNC_IMPL(__imp__sub_83D61208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6120C"))) PPC_WEAK_FUNC(sub_83D6120C);
PPC_FUNC_IMPL(__imp__sub_83D6120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61210"))) PPC_WEAK_FUNC(sub_83D61210);
PPC_FUNC_IMPL(__imp__sub_83D61210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61214"))) PPC_WEAK_FUNC(sub_83D61214);
PPC_FUNC_IMPL(__imp__sub_83D61214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61218"))) PPC_WEAK_FUNC(sub_83D61218);
PPC_FUNC_IMPL(__imp__sub_83D61218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6121C"))) PPC_WEAK_FUNC(sub_83D6121C);
PPC_FUNC_IMPL(__imp__sub_83D6121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61220"))) PPC_WEAK_FUNC(sub_83D61220);
PPC_FUNC_IMPL(__imp__sub_83D61220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61224"))) PPC_WEAK_FUNC(sub_83D61224);
PPC_FUNC_IMPL(__imp__sub_83D61224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61228"))) PPC_WEAK_FUNC(sub_83D61228);
PPC_FUNC_IMPL(__imp__sub_83D61228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6122C"))) PPC_WEAK_FUNC(sub_83D6122C);
PPC_FUNC_IMPL(__imp__sub_83D6122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61230"))) PPC_WEAK_FUNC(sub_83D61230);
PPC_FUNC_IMPL(__imp__sub_83D61230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61234"))) PPC_WEAK_FUNC(sub_83D61234);
PPC_FUNC_IMPL(__imp__sub_83D61234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61238"))) PPC_WEAK_FUNC(sub_83D61238);
PPC_FUNC_IMPL(__imp__sub_83D61238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6123C"))) PPC_WEAK_FUNC(sub_83D6123C);
PPC_FUNC_IMPL(__imp__sub_83D6123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61240"))) PPC_WEAK_FUNC(sub_83D61240);
PPC_FUNC_IMPL(__imp__sub_83D61240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61244"))) PPC_WEAK_FUNC(sub_83D61244);
PPC_FUNC_IMPL(__imp__sub_83D61244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61248"))) PPC_WEAK_FUNC(sub_83D61248);
PPC_FUNC_IMPL(__imp__sub_83D61248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6124C"))) PPC_WEAK_FUNC(sub_83D6124C);
PPC_FUNC_IMPL(__imp__sub_83D6124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61250"))) PPC_WEAK_FUNC(sub_83D61250);
PPC_FUNC_IMPL(__imp__sub_83D61250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61254"))) PPC_WEAK_FUNC(sub_83D61254);
PPC_FUNC_IMPL(__imp__sub_83D61254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61258"))) PPC_WEAK_FUNC(sub_83D61258);
PPC_FUNC_IMPL(__imp__sub_83D61258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6125C"))) PPC_WEAK_FUNC(sub_83D6125C);
PPC_FUNC_IMPL(__imp__sub_83D6125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61260"))) PPC_WEAK_FUNC(sub_83D61260);
PPC_FUNC_IMPL(__imp__sub_83D61260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61264"))) PPC_WEAK_FUNC(sub_83D61264);
PPC_FUNC_IMPL(__imp__sub_83D61264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61268"))) PPC_WEAK_FUNC(sub_83D61268);
PPC_FUNC_IMPL(__imp__sub_83D61268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6126C"))) PPC_WEAK_FUNC(sub_83D6126C);
PPC_FUNC_IMPL(__imp__sub_83D6126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61270"))) PPC_WEAK_FUNC(sub_83D61270);
PPC_FUNC_IMPL(__imp__sub_83D61270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61274"))) PPC_WEAK_FUNC(sub_83D61274);
PPC_FUNC_IMPL(__imp__sub_83D61274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61278"))) PPC_WEAK_FUNC(sub_83D61278);
PPC_FUNC_IMPL(__imp__sub_83D61278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6127C"))) PPC_WEAK_FUNC(sub_83D6127C);
PPC_FUNC_IMPL(__imp__sub_83D6127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61280"))) PPC_WEAK_FUNC(sub_83D61280);
PPC_FUNC_IMPL(__imp__sub_83D61280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61284"))) PPC_WEAK_FUNC(sub_83D61284);
PPC_FUNC_IMPL(__imp__sub_83D61284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61288"))) PPC_WEAK_FUNC(sub_83D61288);
PPC_FUNC_IMPL(__imp__sub_83D61288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6128C"))) PPC_WEAK_FUNC(sub_83D6128C);
PPC_FUNC_IMPL(__imp__sub_83D6128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61290"))) PPC_WEAK_FUNC(sub_83D61290);
PPC_FUNC_IMPL(__imp__sub_83D61290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61294"))) PPC_WEAK_FUNC(sub_83D61294);
PPC_FUNC_IMPL(__imp__sub_83D61294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61298"))) PPC_WEAK_FUNC(sub_83D61298);
PPC_FUNC_IMPL(__imp__sub_83D61298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6129C"))) PPC_WEAK_FUNC(sub_83D6129C);
PPC_FUNC_IMPL(__imp__sub_83D6129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612A0"))) PPC_WEAK_FUNC(sub_83D612A0);
PPC_FUNC_IMPL(__imp__sub_83D612A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612A4"))) PPC_WEAK_FUNC(sub_83D612A4);
PPC_FUNC_IMPL(__imp__sub_83D612A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612A8"))) PPC_WEAK_FUNC(sub_83D612A8);
PPC_FUNC_IMPL(__imp__sub_83D612A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612AC"))) PPC_WEAK_FUNC(sub_83D612AC);
PPC_FUNC_IMPL(__imp__sub_83D612AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612B0"))) PPC_WEAK_FUNC(sub_83D612B0);
PPC_FUNC_IMPL(__imp__sub_83D612B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612B4"))) PPC_WEAK_FUNC(sub_83D612B4);
PPC_FUNC_IMPL(__imp__sub_83D612B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612B8"))) PPC_WEAK_FUNC(sub_83D612B8);
PPC_FUNC_IMPL(__imp__sub_83D612B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612BC"))) PPC_WEAK_FUNC(sub_83D612BC);
PPC_FUNC_IMPL(__imp__sub_83D612BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612C0"))) PPC_WEAK_FUNC(sub_83D612C0);
PPC_FUNC_IMPL(__imp__sub_83D612C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612C4"))) PPC_WEAK_FUNC(sub_83D612C4);
PPC_FUNC_IMPL(__imp__sub_83D612C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612C8"))) PPC_WEAK_FUNC(sub_83D612C8);
PPC_FUNC_IMPL(__imp__sub_83D612C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612CC"))) PPC_WEAK_FUNC(sub_83D612CC);
PPC_FUNC_IMPL(__imp__sub_83D612CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612D0"))) PPC_WEAK_FUNC(sub_83D612D0);
PPC_FUNC_IMPL(__imp__sub_83D612D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612D4"))) PPC_WEAK_FUNC(sub_83D612D4);
PPC_FUNC_IMPL(__imp__sub_83D612D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612D8"))) PPC_WEAK_FUNC(sub_83D612D8);
PPC_FUNC_IMPL(__imp__sub_83D612D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612DC"))) PPC_WEAK_FUNC(sub_83D612DC);
PPC_FUNC_IMPL(__imp__sub_83D612DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612E0"))) PPC_WEAK_FUNC(sub_83D612E0);
PPC_FUNC_IMPL(__imp__sub_83D612E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612E4"))) PPC_WEAK_FUNC(sub_83D612E4);
PPC_FUNC_IMPL(__imp__sub_83D612E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612E8"))) PPC_WEAK_FUNC(sub_83D612E8);
PPC_FUNC_IMPL(__imp__sub_83D612E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612EC"))) PPC_WEAK_FUNC(sub_83D612EC);
PPC_FUNC_IMPL(__imp__sub_83D612EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612F0"))) PPC_WEAK_FUNC(sub_83D612F0);
PPC_FUNC_IMPL(__imp__sub_83D612F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612F4"))) PPC_WEAK_FUNC(sub_83D612F4);
PPC_FUNC_IMPL(__imp__sub_83D612F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D612F8"))) PPC_WEAK_FUNC(sub_83D612F8);
PPC_FUNC_IMPL(__imp__sub_83D612F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D612FC"))) PPC_WEAK_FUNC(sub_83D612FC);
PPC_FUNC_IMPL(__imp__sub_83D612FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61300"))) PPC_WEAK_FUNC(sub_83D61300);
PPC_FUNC_IMPL(__imp__sub_83D61300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61304"))) PPC_WEAK_FUNC(sub_83D61304);
PPC_FUNC_IMPL(__imp__sub_83D61304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61308"))) PPC_WEAK_FUNC(sub_83D61308);
PPC_FUNC_IMPL(__imp__sub_83D61308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6130C"))) PPC_WEAK_FUNC(sub_83D6130C);
PPC_FUNC_IMPL(__imp__sub_83D6130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61310"))) PPC_WEAK_FUNC(sub_83D61310);
PPC_FUNC_IMPL(__imp__sub_83D61310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61314"))) PPC_WEAK_FUNC(sub_83D61314);
PPC_FUNC_IMPL(__imp__sub_83D61314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61318"))) PPC_WEAK_FUNC(sub_83D61318);
PPC_FUNC_IMPL(__imp__sub_83D61318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6131C"))) PPC_WEAK_FUNC(sub_83D6131C);
PPC_FUNC_IMPL(__imp__sub_83D6131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61320"))) PPC_WEAK_FUNC(sub_83D61320);
PPC_FUNC_IMPL(__imp__sub_83D61320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61324"))) PPC_WEAK_FUNC(sub_83D61324);
PPC_FUNC_IMPL(__imp__sub_83D61324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61328"))) PPC_WEAK_FUNC(sub_83D61328);
PPC_FUNC_IMPL(__imp__sub_83D61328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6132C"))) PPC_WEAK_FUNC(sub_83D6132C);
PPC_FUNC_IMPL(__imp__sub_83D6132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61330"))) PPC_WEAK_FUNC(sub_83D61330);
PPC_FUNC_IMPL(__imp__sub_83D61330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61334"))) PPC_WEAK_FUNC(sub_83D61334);
PPC_FUNC_IMPL(__imp__sub_83D61334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61338"))) PPC_WEAK_FUNC(sub_83D61338);
PPC_FUNC_IMPL(__imp__sub_83D61338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6133C"))) PPC_WEAK_FUNC(sub_83D6133C);
PPC_FUNC_IMPL(__imp__sub_83D6133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61340"))) PPC_WEAK_FUNC(sub_83D61340);
PPC_FUNC_IMPL(__imp__sub_83D61340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61344"))) PPC_WEAK_FUNC(sub_83D61344);
PPC_FUNC_IMPL(__imp__sub_83D61344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61348"))) PPC_WEAK_FUNC(sub_83D61348);
PPC_FUNC_IMPL(__imp__sub_83D61348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6134C"))) PPC_WEAK_FUNC(sub_83D6134C);
PPC_FUNC_IMPL(__imp__sub_83D6134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61350"))) PPC_WEAK_FUNC(sub_83D61350);
PPC_FUNC_IMPL(__imp__sub_83D61350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61354"))) PPC_WEAK_FUNC(sub_83D61354);
PPC_FUNC_IMPL(__imp__sub_83D61354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61358"))) PPC_WEAK_FUNC(sub_83D61358);
PPC_FUNC_IMPL(__imp__sub_83D61358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6135C"))) PPC_WEAK_FUNC(sub_83D6135C);
PPC_FUNC_IMPL(__imp__sub_83D6135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61360"))) PPC_WEAK_FUNC(sub_83D61360);
PPC_FUNC_IMPL(__imp__sub_83D61360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61364"))) PPC_WEAK_FUNC(sub_83D61364);
PPC_FUNC_IMPL(__imp__sub_83D61364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61368"))) PPC_WEAK_FUNC(sub_83D61368);
PPC_FUNC_IMPL(__imp__sub_83D61368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6136C"))) PPC_WEAK_FUNC(sub_83D6136C);
PPC_FUNC_IMPL(__imp__sub_83D6136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61370"))) PPC_WEAK_FUNC(sub_83D61370);
PPC_FUNC_IMPL(__imp__sub_83D61370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61374"))) PPC_WEAK_FUNC(sub_83D61374);
PPC_FUNC_IMPL(__imp__sub_83D61374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61378"))) PPC_WEAK_FUNC(sub_83D61378);
PPC_FUNC_IMPL(__imp__sub_83D61378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6137C"))) PPC_WEAK_FUNC(sub_83D6137C);
PPC_FUNC_IMPL(__imp__sub_83D6137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61380"))) PPC_WEAK_FUNC(sub_83D61380);
PPC_FUNC_IMPL(__imp__sub_83D61380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61384"))) PPC_WEAK_FUNC(sub_83D61384);
PPC_FUNC_IMPL(__imp__sub_83D61384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61388"))) PPC_WEAK_FUNC(sub_83D61388);
PPC_FUNC_IMPL(__imp__sub_83D61388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6138C"))) PPC_WEAK_FUNC(sub_83D6138C);
PPC_FUNC_IMPL(__imp__sub_83D6138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61390"))) PPC_WEAK_FUNC(sub_83D61390);
PPC_FUNC_IMPL(__imp__sub_83D61390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61394"))) PPC_WEAK_FUNC(sub_83D61394);
PPC_FUNC_IMPL(__imp__sub_83D61394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61398"))) PPC_WEAK_FUNC(sub_83D61398);
PPC_FUNC_IMPL(__imp__sub_83D61398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6139C"))) PPC_WEAK_FUNC(sub_83D6139C);
PPC_FUNC_IMPL(__imp__sub_83D6139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613A0"))) PPC_WEAK_FUNC(sub_83D613A0);
PPC_FUNC_IMPL(__imp__sub_83D613A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613A4"))) PPC_WEAK_FUNC(sub_83D613A4);
PPC_FUNC_IMPL(__imp__sub_83D613A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613A8"))) PPC_WEAK_FUNC(sub_83D613A8);
PPC_FUNC_IMPL(__imp__sub_83D613A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613AC"))) PPC_WEAK_FUNC(sub_83D613AC);
PPC_FUNC_IMPL(__imp__sub_83D613AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613B0"))) PPC_WEAK_FUNC(sub_83D613B0);
PPC_FUNC_IMPL(__imp__sub_83D613B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613B4"))) PPC_WEAK_FUNC(sub_83D613B4);
PPC_FUNC_IMPL(__imp__sub_83D613B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613B8"))) PPC_WEAK_FUNC(sub_83D613B8);
PPC_FUNC_IMPL(__imp__sub_83D613B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613BC"))) PPC_WEAK_FUNC(sub_83D613BC);
PPC_FUNC_IMPL(__imp__sub_83D613BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613C0"))) PPC_WEAK_FUNC(sub_83D613C0);
PPC_FUNC_IMPL(__imp__sub_83D613C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613C4"))) PPC_WEAK_FUNC(sub_83D613C4);
PPC_FUNC_IMPL(__imp__sub_83D613C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613C8"))) PPC_WEAK_FUNC(sub_83D613C8);
PPC_FUNC_IMPL(__imp__sub_83D613C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613CC"))) PPC_WEAK_FUNC(sub_83D613CC);
PPC_FUNC_IMPL(__imp__sub_83D613CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613D0"))) PPC_WEAK_FUNC(sub_83D613D0);
PPC_FUNC_IMPL(__imp__sub_83D613D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613D4"))) PPC_WEAK_FUNC(sub_83D613D4);
PPC_FUNC_IMPL(__imp__sub_83D613D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613D8"))) PPC_WEAK_FUNC(sub_83D613D8);
PPC_FUNC_IMPL(__imp__sub_83D613D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613DC"))) PPC_WEAK_FUNC(sub_83D613DC);
PPC_FUNC_IMPL(__imp__sub_83D613DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613E0"))) PPC_WEAK_FUNC(sub_83D613E0);
PPC_FUNC_IMPL(__imp__sub_83D613E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613E4"))) PPC_WEAK_FUNC(sub_83D613E4);
PPC_FUNC_IMPL(__imp__sub_83D613E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613E8"))) PPC_WEAK_FUNC(sub_83D613E8);
PPC_FUNC_IMPL(__imp__sub_83D613E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613EC"))) PPC_WEAK_FUNC(sub_83D613EC);
PPC_FUNC_IMPL(__imp__sub_83D613EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613F0"))) PPC_WEAK_FUNC(sub_83D613F0);
PPC_FUNC_IMPL(__imp__sub_83D613F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613F4"))) PPC_WEAK_FUNC(sub_83D613F4);
PPC_FUNC_IMPL(__imp__sub_83D613F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D613F8"))) PPC_WEAK_FUNC(sub_83D613F8);
PPC_FUNC_IMPL(__imp__sub_83D613F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D613FC"))) PPC_WEAK_FUNC(sub_83D613FC);
PPC_FUNC_IMPL(__imp__sub_83D613FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61400"))) PPC_WEAK_FUNC(sub_83D61400);
PPC_FUNC_IMPL(__imp__sub_83D61400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61404"))) PPC_WEAK_FUNC(sub_83D61404);
PPC_FUNC_IMPL(__imp__sub_83D61404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61408"))) PPC_WEAK_FUNC(sub_83D61408);
PPC_FUNC_IMPL(__imp__sub_83D61408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6140C"))) PPC_WEAK_FUNC(sub_83D6140C);
PPC_FUNC_IMPL(__imp__sub_83D6140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61410"))) PPC_WEAK_FUNC(sub_83D61410);
PPC_FUNC_IMPL(__imp__sub_83D61410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61414"))) PPC_WEAK_FUNC(sub_83D61414);
PPC_FUNC_IMPL(__imp__sub_83D61414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61418"))) PPC_WEAK_FUNC(sub_83D61418);
PPC_FUNC_IMPL(__imp__sub_83D61418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6141C"))) PPC_WEAK_FUNC(sub_83D6141C);
PPC_FUNC_IMPL(__imp__sub_83D6141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61420"))) PPC_WEAK_FUNC(sub_83D61420);
PPC_FUNC_IMPL(__imp__sub_83D61420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61424"))) PPC_WEAK_FUNC(sub_83D61424);
PPC_FUNC_IMPL(__imp__sub_83D61424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61428"))) PPC_WEAK_FUNC(sub_83D61428);
PPC_FUNC_IMPL(__imp__sub_83D61428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6142C"))) PPC_WEAK_FUNC(sub_83D6142C);
PPC_FUNC_IMPL(__imp__sub_83D6142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61430"))) PPC_WEAK_FUNC(sub_83D61430);
PPC_FUNC_IMPL(__imp__sub_83D61430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61434"))) PPC_WEAK_FUNC(sub_83D61434);
PPC_FUNC_IMPL(__imp__sub_83D61434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61438"))) PPC_WEAK_FUNC(sub_83D61438);
PPC_FUNC_IMPL(__imp__sub_83D61438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6143C"))) PPC_WEAK_FUNC(sub_83D6143C);
PPC_FUNC_IMPL(__imp__sub_83D6143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61440"))) PPC_WEAK_FUNC(sub_83D61440);
PPC_FUNC_IMPL(__imp__sub_83D61440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61444"))) PPC_WEAK_FUNC(sub_83D61444);
PPC_FUNC_IMPL(__imp__sub_83D61444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61448"))) PPC_WEAK_FUNC(sub_83D61448);
PPC_FUNC_IMPL(__imp__sub_83D61448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6144C"))) PPC_WEAK_FUNC(sub_83D6144C);
PPC_FUNC_IMPL(__imp__sub_83D6144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61450"))) PPC_WEAK_FUNC(sub_83D61450);
PPC_FUNC_IMPL(__imp__sub_83D61450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61454"))) PPC_WEAK_FUNC(sub_83D61454);
PPC_FUNC_IMPL(__imp__sub_83D61454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61458"))) PPC_WEAK_FUNC(sub_83D61458);
PPC_FUNC_IMPL(__imp__sub_83D61458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6145C"))) PPC_WEAK_FUNC(sub_83D6145C);
PPC_FUNC_IMPL(__imp__sub_83D6145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61460"))) PPC_WEAK_FUNC(sub_83D61460);
PPC_FUNC_IMPL(__imp__sub_83D61460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61464"))) PPC_WEAK_FUNC(sub_83D61464);
PPC_FUNC_IMPL(__imp__sub_83D61464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61468"))) PPC_WEAK_FUNC(sub_83D61468);
PPC_FUNC_IMPL(__imp__sub_83D61468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6146C"))) PPC_WEAK_FUNC(sub_83D6146C);
PPC_FUNC_IMPL(__imp__sub_83D6146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61470"))) PPC_WEAK_FUNC(sub_83D61470);
PPC_FUNC_IMPL(__imp__sub_83D61470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61474"))) PPC_WEAK_FUNC(sub_83D61474);
PPC_FUNC_IMPL(__imp__sub_83D61474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61478"))) PPC_WEAK_FUNC(sub_83D61478);
PPC_FUNC_IMPL(__imp__sub_83D61478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6147C"))) PPC_WEAK_FUNC(sub_83D6147C);
PPC_FUNC_IMPL(__imp__sub_83D6147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61480"))) PPC_WEAK_FUNC(sub_83D61480);
PPC_FUNC_IMPL(__imp__sub_83D61480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61484"))) PPC_WEAK_FUNC(sub_83D61484);
PPC_FUNC_IMPL(__imp__sub_83D61484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61488"))) PPC_WEAK_FUNC(sub_83D61488);
PPC_FUNC_IMPL(__imp__sub_83D61488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6148C"))) PPC_WEAK_FUNC(sub_83D6148C);
PPC_FUNC_IMPL(__imp__sub_83D6148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61490"))) PPC_WEAK_FUNC(sub_83D61490);
PPC_FUNC_IMPL(__imp__sub_83D61490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61494"))) PPC_WEAK_FUNC(sub_83D61494);
PPC_FUNC_IMPL(__imp__sub_83D61494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61498"))) PPC_WEAK_FUNC(sub_83D61498);
PPC_FUNC_IMPL(__imp__sub_83D61498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6149C"))) PPC_WEAK_FUNC(sub_83D6149C);
PPC_FUNC_IMPL(__imp__sub_83D6149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614A0"))) PPC_WEAK_FUNC(sub_83D614A0);
PPC_FUNC_IMPL(__imp__sub_83D614A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614A4"))) PPC_WEAK_FUNC(sub_83D614A4);
PPC_FUNC_IMPL(__imp__sub_83D614A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614A8"))) PPC_WEAK_FUNC(sub_83D614A8);
PPC_FUNC_IMPL(__imp__sub_83D614A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614AC"))) PPC_WEAK_FUNC(sub_83D614AC);
PPC_FUNC_IMPL(__imp__sub_83D614AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614B0"))) PPC_WEAK_FUNC(sub_83D614B0);
PPC_FUNC_IMPL(__imp__sub_83D614B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614B4"))) PPC_WEAK_FUNC(sub_83D614B4);
PPC_FUNC_IMPL(__imp__sub_83D614B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614B8"))) PPC_WEAK_FUNC(sub_83D614B8);
PPC_FUNC_IMPL(__imp__sub_83D614B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614BC"))) PPC_WEAK_FUNC(sub_83D614BC);
PPC_FUNC_IMPL(__imp__sub_83D614BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614C0"))) PPC_WEAK_FUNC(sub_83D614C0);
PPC_FUNC_IMPL(__imp__sub_83D614C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614C4"))) PPC_WEAK_FUNC(sub_83D614C4);
PPC_FUNC_IMPL(__imp__sub_83D614C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614C8"))) PPC_WEAK_FUNC(sub_83D614C8);
PPC_FUNC_IMPL(__imp__sub_83D614C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614CC"))) PPC_WEAK_FUNC(sub_83D614CC);
PPC_FUNC_IMPL(__imp__sub_83D614CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614D0"))) PPC_WEAK_FUNC(sub_83D614D0);
PPC_FUNC_IMPL(__imp__sub_83D614D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614D4"))) PPC_WEAK_FUNC(sub_83D614D4);
PPC_FUNC_IMPL(__imp__sub_83D614D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614D8"))) PPC_WEAK_FUNC(sub_83D614D8);
PPC_FUNC_IMPL(__imp__sub_83D614D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614DC"))) PPC_WEAK_FUNC(sub_83D614DC);
PPC_FUNC_IMPL(__imp__sub_83D614DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614E0"))) PPC_WEAK_FUNC(sub_83D614E0);
PPC_FUNC_IMPL(__imp__sub_83D614E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614E4"))) PPC_WEAK_FUNC(sub_83D614E4);
PPC_FUNC_IMPL(__imp__sub_83D614E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614E8"))) PPC_WEAK_FUNC(sub_83D614E8);
PPC_FUNC_IMPL(__imp__sub_83D614E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614EC"))) PPC_WEAK_FUNC(sub_83D614EC);
PPC_FUNC_IMPL(__imp__sub_83D614EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614F0"))) PPC_WEAK_FUNC(sub_83D614F0);
PPC_FUNC_IMPL(__imp__sub_83D614F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614F4"))) PPC_WEAK_FUNC(sub_83D614F4);
PPC_FUNC_IMPL(__imp__sub_83D614F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D614F8"))) PPC_WEAK_FUNC(sub_83D614F8);
PPC_FUNC_IMPL(__imp__sub_83D614F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D614FC"))) PPC_WEAK_FUNC(sub_83D614FC);
PPC_FUNC_IMPL(__imp__sub_83D614FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61500"))) PPC_WEAK_FUNC(sub_83D61500);
PPC_FUNC_IMPL(__imp__sub_83D61500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61504"))) PPC_WEAK_FUNC(sub_83D61504);
PPC_FUNC_IMPL(__imp__sub_83D61504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61508"))) PPC_WEAK_FUNC(sub_83D61508);
PPC_FUNC_IMPL(__imp__sub_83D61508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6150C"))) PPC_WEAK_FUNC(sub_83D6150C);
PPC_FUNC_IMPL(__imp__sub_83D6150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61510"))) PPC_WEAK_FUNC(sub_83D61510);
PPC_FUNC_IMPL(__imp__sub_83D61510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61514"))) PPC_WEAK_FUNC(sub_83D61514);
PPC_FUNC_IMPL(__imp__sub_83D61514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61518"))) PPC_WEAK_FUNC(sub_83D61518);
PPC_FUNC_IMPL(__imp__sub_83D61518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6151C"))) PPC_WEAK_FUNC(sub_83D6151C);
PPC_FUNC_IMPL(__imp__sub_83D6151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61520"))) PPC_WEAK_FUNC(sub_83D61520);
PPC_FUNC_IMPL(__imp__sub_83D61520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61524"))) PPC_WEAK_FUNC(sub_83D61524);
PPC_FUNC_IMPL(__imp__sub_83D61524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61528"))) PPC_WEAK_FUNC(sub_83D61528);
PPC_FUNC_IMPL(__imp__sub_83D61528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6152C"))) PPC_WEAK_FUNC(sub_83D6152C);
PPC_FUNC_IMPL(__imp__sub_83D6152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61530"))) PPC_WEAK_FUNC(sub_83D61530);
PPC_FUNC_IMPL(__imp__sub_83D61530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61534"))) PPC_WEAK_FUNC(sub_83D61534);
PPC_FUNC_IMPL(__imp__sub_83D61534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61538"))) PPC_WEAK_FUNC(sub_83D61538);
PPC_FUNC_IMPL(__imp__sub_83D61538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6153C"))) PPC_WEAK_FUNC(sub_83D6153C);
PPC_FUNC_IMPL(__imp__sub_83D6153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61540"))) PPC_WEAK_FUNC(sub_83D61540);
PPC_FUNC_IMPL(__imp__sub_83D61540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61544"))) PPC_WEAK_FUNC(sub_83D61544);
PPC_FUNC_IMPL(__imp__sub_83D61544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61548"))) PPC_WEAK_FUNC(sub_83D61548);
PPC_FUNC_IMPL(__imp__sub_83D61548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6154C"))) PPC_WEAK_FUNC(sub_83D6154C);
PPC_FUNC_IMPL(__imp__sub_83D6154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61550"))) PPC_WEAK_FUNC(sub_83D61550);
PPC_FUNC_IMPL(__imp__sub_83D61550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61554"))) PPC_WEAK_FUNC(sub_83D61554);
PPC_FUNC_IMPL(__imp__sub_83D61554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61558"))) PPC_WEAK_FUNC(sub_83D61558);
PPC_FUNC_IMPL(__imp__sub_83D61558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6155C"))) PPC_WEAK_FUNC(sub_83D6155C);
PPC_FUNC_IMPL(__imp__sub_83D6155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61560"))) PPC_WEAK_FUNC(sub_83D61560);
PPC_FUNC_IMPL(__imp__sub_83D61560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61564"))) PPC_WEAK_FUNC(sub_83D61564);
PPC_FUNC_IMPL(__imp__sub_83D61564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61568"))) PPC_WEAK_FUNC(sub_83D61568);
PPC_FUNC_IMPL(__imp__sub_83D61568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6156C"))) PPC_WEAK_FUNC(sub_83D6156C);
PPC_FUNC_IMPL(__imp__sub_83D6156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61570"))) PPC_WEAK_FUNC(sub_83D61570);
PPC_FUNC_IMPL(__imp__sub_83D61570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61574"))) PPC_WEAK_FUNC(sub_83D61574);
PPC_FUNC_IMPL(__imp__sub_83D61574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61578"))) PPC_WEAK_FUNC(sub_83D61578);
PPC_FUNC_IMPL(__imp__sub_83D61578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6157C"))) PPC_WEAK_FUNC(sub_83D6157C);
PPC_FUNC_IMPL(__imp__sub_83D6157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61580"))) PPC_WEAK_FUNC(sub_83D61580);
PPC_FUNC_IMPL(__imp__sub_83D61580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61584"))) PPC_WEAK_FUNC(sub_83D61584);
PPC_FUNC_IMPL(__imp__sub_83D61584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61588"))) PPC_WEAK_FUNC(sub_83D61588);
PPC_FUNC_IMPL(__imp__sub_83D61588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6158C"))) PPC_WEAK_FUNC(sub_83D6158C);
PPC_FUNC_IMPL(__imp__sub_83D6158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61590"))) PPC_WEAK_FUNC(sub_83D61590);
PPC_FUNC_IMPL(__imp__sub_83D61590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D61594"))) PPC_WEAK_FUNC(sub_83D61594);
PPC_FUNC_IMPL(__imp__sub_83D61594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D61598"))) PPC_WEAK_FUNC(sub_83D61598);
PPC_FUNC_IMPL(__imp__sub_83D61598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6159C"))) PPC_WEAK_FUNC(sub_83D6159C);
PPC_FUNC_IMPL(__imp__sub_83D6159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615A0"))) PPC_WEAK_FUNC(sub_83D615A0);
PPC_FUNC_IMPL(__imp__sub_83D615A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615A4"))) PPC_WEAK_FUNC(sub_83D615A4);
PPC_FUNC_IMPL(__imp__sub_83D615A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615A8"))) PPC_WEAK_FUNC(sub_83D615A8);
PPC_FUNC_IMPL(__imp__sub_83D615A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615AC"))) PPC_WEAK_FUNC(sub_83D615AC);
PPC_FUNC_IMPL(__imp__sub_83D615AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615B0"))) PPC_WEAK_FUNC(sub_83D615B0);
PPC_FUNC_IMPL(__imp__sub_83D615B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615B4"))) PPC_WEAK_FUNC(sub_83D615B4);
PPC_FUNC_IMPL(__imp__sub_83D615B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615B8"))) PPC_WEAK_FUNC(sub_83D615B8);
PPC_FUNC_IMPL(__imp__sub_83D615B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615BC"))) PPC_WEAK_FUNC(sub_83D615BC);
PPC_FUNC_IMPL(__imp__sub_83D615BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615C0"))) PPC_WEAK_FUNC(sub_83D615C0);
PPC_FUNC_IMPL(__imp__sub_83D615C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615C4"))) PPC_WEAK_FUNC(sub_83D615C4);
PPC_FUNC_IMPL(__imp__sub_83D615C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615C8"))) PPC_WEAK_FUNC(sub_83D615C8);
PPC_FUNC_IMPL(__imp__sub_83D615C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615CC"))) PPC_WEAK_FUNC(sub_83D615CC);
PPC_FUNC_IMPL(__imp__sub_83D615CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D615D0"))) PPC_WEAK_FUNC(sub_83D615D0);
PPC_FUNC_IMPL(__imp__sub_83D615D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D615D4"))) PPC_WEAK_FUNC(sub_83D615D4);
PPC_FUNC_IMPL(__imp__sub_83D615D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

