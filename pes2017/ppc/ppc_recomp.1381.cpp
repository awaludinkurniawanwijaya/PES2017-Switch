#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D6CC0C"))) PPC_WEAK_FUNC(sub_83D6CC0C);
PPC_FUNC_IMPL(__imp__sub_83D6CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC10"))) PPC_WEAK_FUNC(sub_83D6CC10);
PPC_FUNC_IMPL(__imp__sub_83D6CC10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC14"))) PPC_WEAK_FUNC(sub_83D6CC14);
PPC_FUNC_IMPL(__imp__sub_83D6CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC18"))) PPC_WEAK_FUNC(sub_83D6CC18);
PPC_FUNC_IMPL(__imp__sub_83D6CC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC1C"))) PPC_WEAK_FUNC(sub_83D6CC1C);
PPC_FUNC_IMPL(__imp__sub_83D6CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC20"))) PPC_WEAK_FUNC(sub_83D6CC20);
PPC_FUNC_IMPL(__imp__sub_83D6CC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC24"))) PPC_WEAK_FUNC(sub_83D6CC24);
PPC_FUNC_IMPL(__imp__sub_83D6CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC28"))) PPC_WEAK_FUNC(sub_83D6CC28);
PPC_FUNC_IMPL(__imp__sub_83D6CC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CC34"))) PPC_WEAK_FUNC(sub_83D6CC34);
PPC_FUNC_IMPL(__imp__sub_83D6CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC38"))) PPC_WEAK_FUNC(sub_83D6CC38);
PPC_FUNC_IMPL(__imp__sub_83D6CC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC3C"))) PPC_WEAK_FUNC(sub_83D6CC3C);
PPC_FUNC_IMPL(__imp__sub_83D6CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC40"))) PPC_WEAK_FUNC(sub_83D6CC40);
PPC_FUNC_IMPL(__imp__sub_83D6CC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC44"))) PPC_WEAK_FUNC(sub_83D6CC44);
PPC_FUNC_IMPL(__imp__sub_83D6CC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC48"))) PPC_WEAK_FUNC(sub_83D6CC48);
PPC_FUNC_IMPL(__imp__sub_83D6CC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CC4C"))) PPC_WEAK_FUNC(sub_83D6CC4C);
PPC_FUNC_IMPL(__imp__sub_83D6CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CC50"))) PPC_WEAK_FUNC(sub_83D6CC50);
PPC_FUNC_IMPL(__imp__sub_83D6CC50) {
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
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r31,r11,6828
	ctx.r31.s64 = ctx.r11.s64 + 6828;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d6cc88
	if (cr6.lt) goto loc_83D6CC88;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D6CC88;
	sub_825952B8(ctx, base);
loc_83D6CC88:
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

__attribute__((alias("__imp__sub_83D6CCB4"))) PPC_WEAK_FUNC(sub_83D6CCB4);
PPC_FUNC_IMPL(__imp__sub_83D6CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCB8"))) PPC_WEAK_FUNC(sub_83D6CCB8);
PPC_FUNC_IMPL(__imp__sub_83D6CCB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCBC"))) PPC_WEAK_FUNC(sub_83D6CCBC);
PPC_FUNC_IMPL(__imp__sub_83D6CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCC0"))) PPC_WEAK_FUNC(sub_83D6CCC0);
PPC_FUNC_IMPL(__imp__sub_83D6CCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCC4"))) PPC_WEAK_FUNC(sub_83D6CCC4);
PPC_FUNC_IMPL(__imp__sub_83D6CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCC8"))) PPC_WEAK_FUNC(sub_83D6CCC8);
PPC_FUNC_IMPL(__imp__sub_83D6CCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCCC"))) PPC_WEAK_FUNC(sub_83D6CCCC);
PPC_FUNC_IMPL(__imp__sub_83D6CCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCD0"))) PPC_WEAK_FUNC(sub_83D6CCD0);
PPC_FUNC_IMPL(__imp__sub_83D6CCD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCD4"))) PPC_WEAK_FUNC(sub_83D6CCD4);
PPC_FUNC_IMPL(__imp__sub_83D6CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCD8"))) PPC_WEAK_FUNC(sub_83D6CCD8);
PPC_FUNC_IMPL(__imp__sub_83D6CCD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCDC"))) PPC_WEAK_FUNC(sub_83D6CCDC);
PPC_FUNC_IMPL(__imp__sub_83D6CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCE0"))) PPC_WEAK_FUNC(sub_83D6CCE0);
PPC_FUNC_IMPL(__imp__sub_83D6CCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCE4"))) PPC_WEAK_FUNC(sub_83D6CCE4);
PPC_FUNC_IMPL(__imp__sub_83D6CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCE8"))) PPC_WEAK_FUNC(sub_83D6CCE8);
PPC_FUNC_IMPL(__imp__sub_83D6CCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCEC"))) PPC_WEAK_FUNC(sub_83D6CCEC);
PPC_FUNC_IMPL(__imp__sub_83D6CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCF0"))) PPC_WEAK_FUNC(sub_83D6CCF0);
PPC_FUNC_IMPL(__imp__sub_83D6CCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCF4"))) PPC_WEAK_FUNC(sub_83D6CCF4);
PPC_FUNC_IMPL(__imp__sub_83D6CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CCF8"))) PPC_WEAK_FUNC(sub_83D6CCF8);
PPC_FUNC_IMPL(__imp__sub_83D6CCF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CCFC"))) PPC_WEAK_FUNC(sub_83D6CCFC);
PPC_FUNC_IMPL(__imp__sub_83D6CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD00"))) PPC_WEAK_FUNC(sub_83D6CD00);
PPC_FUNC_IMPL(__imp__sub_83D6CD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD04"))) PPC_WEAK_FUNC(sub_83D6CD04);
PPC_FUNC_IMPL(__imp__sub_83D6CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD08"))) PPC_WEAK_FUNC(sub_83D6CD08);
PPC_FUNC_IMPL(__imp__sub_83D6CD08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD0C"))) PPC_WEAK_FUNC(sub_83D6CD0C);
PPC_FUNC_IMPL(__imp__sub_83D6CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD10"))) PPC_WEAK_FUNC(sub_83D6CD10);
PPC_FUNC_IMPL(__imp__sub_83D6CD10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD14"))) PPC_WEAK_FUNC(sub_83D6CD14);
PPC_FUNC_IMPL(__imp__sub_83D6CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD18"))) PPC_WEAK_FUNC(sub_83D6CD18);
PPC_FUNC_IMPL(__imp__sub_83D6CD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CD24"))) PPC_WEAK_FUNC(sub_83D6CD24);
PPC_FUNC_IMPL(__imp__sub_83D6CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD28"))) PPC_WEAK_FUNC(sub_83D6CD28);
PPC_FUNC_IMPL(__imp__sub_83D6CD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD2C"))) PPC_WEAK_FUNC(sub_83D6CD2C);
PPC_FUNC_IMPL(__imp__sub_83D6CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD30"))) PPC_WEAK_FUNC(sub_83D6CD30);
PPC_FUNC_IMPL(__imp__sub_83D6CD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD34"))) PPC_WEAK_FUNC(sub_83D6CD34);
PPC_FUNC_IMPL(__imp__sub_83D6CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD38"))) PPC_WEAK_FUNC(sub_83D6CD38);
PPC_FUNC_IMPL(__imp__sub_83D6CD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD3C"))) PPC_WEAK_FUNC(sub_83D6CD3C);
PPC_FUNC_IMPL(__imp__sub_83D6CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD40"))) PPC_WEAK_FUNC(sub_83D6CD40);
PPC_FUNC_IMPL(__imp__sub_83D6CD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD44"))) PPC_WEAK_FUNC(sub_83D6CD44);
PPC_FUNC_IMPL(__imp__sub_83D6CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD48"))) PPC_WEAK_FUNC(sub_83D6CD48);
PPC_FUNC_IMPL(__imp__sub_83D6CD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD4C"))) PPC_WEAK_FUNC(sub_83D6CD4C);
PPC_FUNC_IMPL(__imp__sub_83D6CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD50"))) PPC_WEAK_FUNC(sub_83D6CD50);
PPC_FUNC_IMPL(__imp__sub_83D6CD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD54"))) PPC_WEAK_FUNC(sub_83D6CD54);
PPC_FUNC_IMPL(__imp__sub_83D6CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD58"))) PPC_WEAK_FUNC(sub_83D6CD58);
PPC_FUNC_IMPL(__imp__sub_83D6CD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD5C"))) PPC_WEAK_FUNC(sub_83D6CD5C);
PPC_FUNC_IMPL(__imp__sub_83D6CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD60"))) PPC_WEAK_FUNC(sub_83D6CD60);
PPC_FUNC_IMPL(__imp__sub_83D6CD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD64"))) PPC_WEAK_FUNC(sub_83D6CD64);
PPC_FUNC_IMPL(__imp__sub_83D6CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD68"))) PPC_WEAK_FUNC(sub_83D6CD68);
PPC_FUNC_IMPL(__imp__sub_83D6CD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD6C"))) PPC_WEAK_FUNC(sub_83D6CD6C);
PPC_FUNC_IMPL(__imp__sub_83D6CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD70"))) PPC_WEAK_FUNC(sub_83D6CD70);
PPC_FUNC_IMPL(__imp__sub_83D6CD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD74"))) PPC_WEAK_FUNC(sub_83D6CD74);
PPC_FUNC_IMPL(__imp__sub_83D6CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD78"))) PPC_WEAK_FUNC(sub_83D6CD78);
PPC_FUNC_IMPL(__imp__sub_83D6CD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD7C"))) PPC_WEAK_FUNC(sub_83D6CD7C);
PPC_FUNC_IMPL(__imp__sub_83D6CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD80"))) PPC_WEAK_FUNC(sub_83D6CD80);
PPC_FUNC_IMPL(__imp__sub_83D6CD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD84"))) PPC_WEAK_FUNC(sub_83D6CD84);
PPC_FUNC_IMPL(__imp__sub_83D6CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD88"))) PPC_WEAK_FUNC(sub_83D6CD88);
PPC_FUNC_IMPL(__imp__sub_83D6CD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD8C"))) PPC_WEAK_FUNC(sub_83D6CD8C);
PPC_FUNC_IMPL(__imp__sub_83D6CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD90"))) PPC_WEAK_FUNC(sub_83D6CD90);
PPC_FUNC_IMPL(__imp__sub_83D6CD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD94"))) PPC_WEAK_FUNC(sub_83D6CD94);
PPC_FUNC_IMPL(__imp__sub_83D6CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CD98"))) PPC_WEAK_FUNC(sub_83D6CD98);
PPC_FUNC_IMPL(__imp__sub_83D6CD98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CD9C"))) PPC_WEAK_FUNC(sub_83D6CD9C);
PPC_FUNC_IMPL(__imp__sub_83D6CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDA0"))) PPC_WEAK_FUNC(sub_83D6CDA0);
PPC_FUNC_IMPL(__imp__sub_83D6CDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CDAC"))) PPC_WEAK_FUNC(sub_83D6CDAC);
PPC_FUNC_IMPL(__imp__sub_83D6CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDB0"))) PPC_WEAK_FUNC(sub_83D6CDB0);
PPC_FUNC_IMPL(__imp__sub_83D6CDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDB4"))) PPC_WEAK_FUNC(sub_83D6CDB4);
PPC_FUNC_IMPL(__imp__sub_83D6CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDB8"))) PPC_WEAK_FUNC(sub_83D6CDB8);
PPC_FUNC_IMPL(__imp__sub_83D6CDB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDBC"))) PPC_WEAK_FUNC(sub_83D6CDBC);
PPC_FUNC_IMPL(__imp__sub_83D6CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDC0"))) PPC_WEAK_FUNC(sub_83D6CDC0);
PPC_FUNC_IMPL(__imp__sub_83D6CDC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDC4"))) PPC_WEAK_FUNC(sub_83D6CDC4);
PPC_FUNC_IMPL(__imp__sub_83D6CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDC8"))) PPC_WEAK_FUNC(sub_83D6CDC8);
PPC_FUNC_IMPL(__imp__sub_83D6CDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDCC"))) PPC_WEAK_FUNC(sub_83D6CDCC);
PPC_FUNC_IMPL(__imp__sub_83D6CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDD0"))) PPC_WEAK_FUNC(sub_83D6CDD0);
PPC_FUNC_IMPL(__imp__sub_83D6CDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDD4"))) PPC_WEAK_FUNC(sub_83D6CDD4);
PPC_FUNC_IMPL(__imp__sub_83D6CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDD8"))) PPC_WEAK_FUNC(sub_83D6CDD8);
PPC_FUNC_IMPL(__imp__sub_83D6CDD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDDC"))) PPC_WEAK_FUNC(sub_83D6CDDC);
PPC_FUNC_IMPL(__imp__sub_83D6CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDE0"))) PPC_WEAK_FUNC(sub_83D6CDE0);
PPC_FUNC_IMPL(__imp__sub_83D6CDE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDE4"))) PPC_WEAK_FUNC(sub_83D6CDE4);
PPC_FUNC_IMPL(__imp__sub_83D6CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDE8"))) PPC_WEAK_FUNC(sub_83D6CDE8);
PPC_FUNC_IMPL(__imp__sub_83D6CDE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDEC"))) PPC_WEAK_FUNC(sub_83D6CDEC);
PPC_FUNC_IMPL(__imp__sub_83D6CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDF0"))) PPC_WEAK_FUNC(sub_83D6CDF0);
PPC_FUNC_IMPL(__imp__sub_83D6CDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDF4"))) PPC_WEAK_FUNC(sub_83D6CDF4);
PPC_FUNC_IMPL(__imp__sub_83D6CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CDF8"))) PPC_WEAK_FUNC(sub_83D6CDF8);
PPC_FUNC_IMPL(__imp__sub_83D6CDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CDFC"))) PPC_WEAK_FUNC(sub_83D6CDFC);
PPC_FUNC_IMPL(__imp__sub_83D6CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE00"))) PPC_WEAK_FUNC(sub_83D6CE00);
PPC_FUNC_IMPL(__imp__sub_83D6CE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE04"))) PPC_WEAK_FUNC(sub_83D6CE04);
PPC_FUNC_IMPL(__imp__sub_83D6CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE08"))) PPC_WEAK_FUNC(sub_83D6CE08);
PPC_FUNC_IMPL(__imp__sub_83D6CE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE0C"))) PPC_WEAK_FUNC(sub_83D6CE0C);
PPC_FUNC_IMPL(__imp__sub_83D6CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE10"))) PPC_WEAK_FUNC(sub_83D6CE10);
PPC_FUNC_IMPL(__imp__sub_83D6CE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE14"))) PPC_WEAK_FUNC(sub_83D6CE14);
PPC_FUNC_IMPL(__imp__sub_83D6CE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE18"))) PPC_WEAK_FUNC(sub_83D6CE18);
PPC_FUNC_IMPL(__imp__sub_83D6CE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE1C"))) PPC_WEAK_FUNC(sub_83D6CE1C);
PPC_FUNC_IMPL(__imp__sub_83D6CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE20"))) PPC_WEAK_FUNC(sub_83D6CE20);
PPC_FUNC_IMPL(__imp__sub_83D6CE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE24"))) PPC_WEAK_FUNC(sub_83D6CE24);
PPC_FUNC_IMPL(__imp__sub_83D6CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE28"))) PPC_WEAK_FUNC(sub_83D6CE28);
PPC_FUNC_IMPL(__imp__sub_83D6CE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7056
	ctx.r3.s64 = ctx.r11.s64 + 7056;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CE34"))) PPC_WEAK_FUNC(sub_83D6CE34);
PPC_FUNC_IMPL(__imp__sub_83D6CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE38"))) PPC_WEAK_FUNC(sub_83D6CE38);
PPC_FUNC_IMPL(__imp__sub_83D6CE38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE3C"))) PPC_WEAK_FUNC(sub_83D6CE3C);
PPC_FUNC_IMPL(__imp__sub_83D6CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE40"))) PPC_WEAK_FUNC(sub_83D6CE40);
PPC_FUNC_IMPL(__imp__sub_83D6CE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE44"))) PPC_WEAK_FUNC(sub_83D6CE44);
PPC_FUNC_IMPL(__imp__sub_83D6CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE48"))) PPC_WEAK_FUNC(sub_83D6CE48);
PPC_FUNC_IMPL(__imp__sub_83D6CE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE4C"))) PPC_WEAK_FUNC(sub_83D6CE4C);
PPC_FUNC_IMPL(__imp__sub_83D6CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE50"))) PPC_WEAK_FUNC(sub_83D6CE50);
PPC_FUNC_IMPL(__imp__sub_83D6CE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE54"))) PPC_WEAK_FUNC(sub_83D6CE54);
PPC_FUNC_IMPL(__imp__sub_83D6CE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE58"))) PPC_WEAK_FUNC(sub_83D6CE58);
PPC_FUNC_IMPL(__imp__sub_83D6CE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE5C"))) PPC_WEAK_FUNC(sub_83D6CE5C);
PPC_FUNC_IMPL(__imp__sub_83D6CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE60"))) PPC_WEAK_FUNC(sub_83D6CE60);
PPC_FUNC_IMPL(__imp__sub_83D6CE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE64"))) PPC_WEAK_FUNC(sub_83D6CE64);
PPC_FUNC_IMPL(__imp__sub_83D6CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE68"))) PPC_WEAK_FUNC(sub_83D6CE68);
PPC_FUNC_IMPL(__imp__sub_83D6CE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE6C"))) PPC_WEAK_FUNC(sub_83D6CE6C);
PPC_FUNC_IMPL(__imp__sub_83D6CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE70"))) PPC_WEAK_FUNC(sub_83D6CE70);
PPC_FUNC_IMPL(__imp__sub_83D6CE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE74"))) PPC_WEAK_FUNC(sub_83D6CE74);
PPC_FUNC_IMPL(__imp__sub_83D6CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE78"))) PPC_WEAK_FUNC(sub_83D6CE78);
PPC_FUNC_IMPL(__imp__sub_83D6CE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE7C"))) PPC_WEAK_FUNC(sub_83D6CE7C);
PPC_FUNC_IMPL(__imp__sub_83D6CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE80"))) PPC_WEAK_FUNC(sub_83D6CE80);
PPC_FUNC_IMPL(__imp__sub_83D6CE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE84"))) PPC_WEAK_FUNC(sub_83D6CE84);
PPC_FUNC_IMPL(__imp__sub_83D6CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE88"))) PPC_WEAK_FUNC(sub_83D6CE88);
PPC_FUNC_IMPL(__imp__sub_83D6CE88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE8C"))) PPC_WEAK_FUNC(sub_83D6CE8C);
PPC_FUNC_IMPL(__imp__sub_83D6CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE90"))) PPC_WEAK_FUNC(sub_83D6CE90);
PPC_FUNC_IMPL(__imp__sub_83D6CE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE94"))) PPC_WEAK_FUNC(sub_83D6CE94);
PPC_FUNC_IMPL(__imp__sub_83D6CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CE98"))) PPC_WEAK_FUNC(sub_83D6CE98);
PPC_FUNC_IMPL(__imp__sub_83D6CE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CE9C"))) PPC_WEAK_FUNC(sub_83D6CE9C);
PPC_FUNC_IMPL(__imp__sub_83D6CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CEA0"))) PPC_WEAK_FUNC(sub_83D6CEA0);
PPC_FUNC_IMPL(__imp__sub_83D6CEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CEA4"))) PPC_WEAK_FUNC(sub_83D6CEA4);
PPC_FUNC_IMPL(__imp__sub_83D6CEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CEA8"))) PPC_WEAK_FUNC(sub_83D6CEA8);
PPC_FUNC_IMPL(__imp__sub_83D6CEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CEAC"))) PPC_WEAK_FUNC(sub_83D6CEAC);
PPC_FUNC_IMPL(__imp__sub_83D6CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CEB0"))) PPC_WEAK_FUNC(sub_83D6CEB0);
PPC_FUNC_IMPL(__imp__sub_83D6CEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CEBC"))) PPC_WEAK_FUNC(sub_83D6CEBC);
PPC_FUNC_IMPL(__imp__sub_83D6CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CEC0"))) PPC_WEAK_FUNC(sub_83D6CEC0);
PPC_FUNC_IMPL(__imp__sub_83D6CEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CEC4"))) PPC_WEAK_FUNC(sub_83D6CEC4);
PPC_FUNC_IMPL(__imp__sub_83D6CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CEC8"))) PPC_WEAK_FUNC(sub_83D6CEC8);
PPC_FUNC_IMPL(__imp__sub_83D6CEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CECC"))) PPC_WEAK_FUNC(sub_83D6CECC);
PPC_FUNC_IMPL(__imp__sub_83D6CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CED0"))) PPC_WEAK_FUNC(sub_83D6CED0);
PPC_FUNC_IMPL(__imp__sub_83D6CED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CED4"))) PPC_WEAK_FUNC(sub_83D6CED4);
PPC_FUNC_IMPL(__imp__sub_83D6CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CED8"))) PPC_WEAK_FUNC(sub_83D6CED8);
PPC_FUNC_IMPL(__imp__sub_83D6CED8) {
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
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r31,r11,8724
	ctx.r31.s64 = ctx.r11.s64 + 8724;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d6cf10
	if (cr6.lt) goto loc_83D6CF10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D6CF10;
	sub_825952B8(ctx, base);
loc_83D6CF10:
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

__attribute__((alias("__imp__sub_83D6CF3C"))) PPC_WEAK_FUNC(sub_83D6CF3C);
PPC_FUNC_IMPL(__imp__sub_83D6CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF40"))) PPC_WEAK_FUNC(sub_83D6CF40);
PPC_FUNC_IMPL(__imp__sub_83D6CF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF44"))) PPC_WEAK_FUNC(sub_83D6CF44);
PPC_FUNC_IMPL(__imp__sub_83D6CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF48"))) PPC_WEAK_FUNC(sub_83D6CF48);
PPC_FUNC_IMPL(__imp__sub_83D6CF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF4C"))) PPC_WEAK_FUNC(sub_83D6CF4C);
PPC_FUNC_IMPL(__imp__sub_83D6CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF50"))) PPC_WEAK_FUNC(sub_83D6CF50);
PPC_FUNC_IMPL(__imp__sub_83D6CF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF54"))) PPC_WEAK_FUNC(sub_83D6CF54);
PPC_FUNC_IMPL(__imp__sub_83D6CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF58"))) PPC_WEAK_FUNC(sub_83D6CF58);
PPC_FUNC_IMPL(__imp__sub_83D6CF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF5C"))) PPC_WEAK_FUNC(sub_83D6CF5C);
PPC_FUNC_IMPL(__imp__sub_83D6CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF60"))) PPC_WEAK_FUNC(sub_83D6CF60);
PPC_FUNC_IMPL(__imp__sub_83D6CF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF64"))) PPC_WEAK_FUNC(sub_83D6CF64);
PPC_FUNC_IMPL(__imp__sub_83D6CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF68"))) PPC_WEAK_FUNC(sub_83D6CF68);
PPC_FUNC_IMPL(__imp__sub_83D6CF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF6C"))) PPC_WEAK_FUNC(sub_83D6CF6C);
PPC_FUNC_IMPL(__imp__sub_83D6CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF70"))) PPC_WEAK_FUNC(sub_83D6CF70);
PPC_FUNC_IMPL(__imp__sub_83D6CF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF74"))) PPC_WEAK_FUNC(sub_83D6CF74);
PPC_FUNC_IMPL(__imp__sub_83D6CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF78"))) PPC_WEAK_FUNC(sub_83D6CF78);
PPC_FUNC_IMPL(__imp__sub_83D6CF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF7C"))) PPC_WEAK_FUNC(sub_83D6CF7C);
PPC_FUNC_IMPL(__imp__sub_83D6CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF80"))) PPC_WEAK_FUNC(sub_83D6CF80);
PPC_FUNC_IMPL(__imp__sub_83D6CF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF84"))) PPC_WEAK_FUNC(sub_83D6CF84);
PPC_FUNC_IMPL(__imp__sub_83D6CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF88"))) PPC_WEAK_FUNC(sub_83D6CF88);
PPC_FUNC_IMPL(__imp__sub_83D6CF88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF8C"))) PPC_WEAK_FUNC(sub_83D6CF8C);
PPC_FUNC_IMPL(__imp__sub_83D6CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF90"))) PPC_WEAK_FUNC(sub_83D6CF90);
PPC_FUNC_IMPL(__imp__sub_83D6CF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF94"))) PPC_WEAK_FUNC(sub_83D6CF94);
PPC_FUNC_IMPL(__imp__sub_83D6CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CF98"))) PPC_WEAK_FUNC(sub_83D6CF98);
PPC_FUNC_IMPL(__imp__sub_83D6CF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CF9C"))) PPC_WEAK_FUNC(sub_83D6CF9C);
PPC_FUNC_IMPL(__imp__sub_83D6CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFA0"))) PPC_WEAK_FUNC(sub_83D6CFA0);
PPC_FUNC_IMPL(__imp__sub_83D6CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7888
	ctx.r3.s64 = ctx.r11.s64 + 7888;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6CFAC"))) PPC_WEAK_FUNC(sub_83D6CFAC);
PPC_FUNC_IMPL(__imp__sub_83D6CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFB0"))) PPC_WEAK_FUNC(sub_83D6CFB0);
PPC_FUNC_IMPL(__imp__sub_83D6CFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFB4"))) PPC_WEAK_FUNC(sub_83D6CFB4);
PPC_FUNC_IMPL(__imp__sub_83D6CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFB8"))) PPC_WEAK_FUNC(sub_83D6CFB8);
PPC_FUNC_IMPL(__imp__sub_83D6CFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFBC"))) PPC_WEAK_FUNC(sub_83D6CFBC);
PPC_FUNC_IMPL(__imp__sub_83D6CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFC0"))) PPC_WEAK_FUNC(sub_83D6CFC0);
PPC_FUNC_IMPL(__imp__sub_83D6CFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFC4"))) PPC_WEAK_FUNC(sub_83D6CFC4);
PPC_FUNC_IMPL(__imp__sub_83D6CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFC8"))) PPC_WEAK_FUNC(sub_83D6CFC8);
PPC_FUNC_IMPL(__imp__sub_83D6CFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFCC"))) PPC_WEAK_FUNC(sub_83D6CFCC);
PPC_FUNC_IMPL(__imp__sub_83D6CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFD0"))) PPC_WEAK_FUNC(sub_83D6CFD0);
PPC_FUNC_IMPL(__imp__sub_83D6CFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFD4"))) PPC_WEAK_FUNC(sub_83D6CFD4);
PPC_FUNC_IMPL(__imp__sub_83D6CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFD8"))) PPC_WEAK_FUNC(sub_83D6CFD8);
PPC_FUNC_IMPL(__imp__sub_83D6CFD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFDC"))) PPC_WEAK_FUNC(sub_83D6CFDC);
PPC_FUNC_IMPL(__imp__sub_83D6CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFE0"))) PPC_WEAK_FUNC(sub_83D6CFE0);
PPC_FUNC_IMPL(__imp__sub_83D6CFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFE4"))) PPC_WEAK_FUNC(sub_83D6CFE4);
PPC_FUNC_IMPL(__imp__sub_83D6CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFE8"))) PPC_WEAK_FUNC(sub_83D6CFE8);
PPC_FUNC_IMPL(__imp__sub_83D6CFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFEC"))) PPC_WEAK_FUNC(sub_83D6CFEC);
PPC_FUNC_IMPL(__imp__sub_83D6CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFF0"))) PPC_WEAK_FUNC(sub_83D6CFF0);
PPC_FUNC_IMPL(__imp__sub_83D6CFF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFF4"))) PPC_WEAK_FUNC(sub_83D6CFF4);
PPC_FUNC_IMPL(__imp__sub_83D6CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6CFF8"))) PPC_WEAK_FUNC(sub_83D6CFF8);
PPC_FUNC_IMPL(__imp__sub_83D6CFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6CFFC"))) PPC_WEAK_FUNC(sub_83D6CFFC);
PPC_FUNC_IMPL(__imp__sub_83D6CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D000"))) PPC_WEAK_FUNC(sub_83D6D000);
PPC_FUNC_IMPL(__imp__sub_83D6D000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D004"))) PPC_WEAK_FUNC(sub_83D6D004);
PPC_FUNC_IMPL(__imp__sub_83D6D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D008"))) PPC_WEAK_FUNC(sub_83D6D008);
PPC_FUNC_IMPL(__imp__sub_83D6D008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D00C"))) PPC_WEAK_FUNC(sub_83D6D00C);
PPC_FUNC_IMPL(__imp__sub_83D6D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D010"))) PPC_WEAK_FUNC(sub_83D6D010);
PPC_FUNC_IMPL(__imp__sub_83D6D010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D014"))) PPC_WEAK_FUNC(sub_83D6D014);
PPC_FUNC_IMPL(__imp__sub_83D6D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D018"))) PPC_WEAK_FUNC(sub_83D6D018);
PPC_FUNC_IMPL(__imp__sub_83D6D018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D01C"))) PPC_WEAK_FUNC(sub_83D6D01C);
PPC_FUNC_IMPL(__imp__sub_83D6D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D020"))) PPC_WEAK_FUNC(sub_83D6D020);
PPC_FUNC_IMPL(__imp__sub_83D6D020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D024"))) PPC_WEAK_FUNC(sub_83D6D024);
PPC_FUNC_IMPL(__imp__sub_83D6D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D028"))) PPC_WEAK_FUNC(sub_83D6D028);
PPC_FUNC_IMPL(__imp__sub_83D6D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D034"))) PPC_WEAK_FUNC(sub_83D6D034);
PPC_FUNC_IMPL(__imp__sub_83D6D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D038"))) PPC_WEAK_FUNC(sub_83D6D038);
PPC_FUNC_IMPL(__imp__sub_83D6D038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D03C"))) PPC_WEAK_FUNC(sub_83D6D03C);
PPC_FUNC_IMPL(__imp__sub_83D6D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D040"))) PPC_WEAK_FUNC(sub_83D6D040);
PPC_FUNC_IMPL(__imp__sub_83D6D040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D044"))) PPC_WEAK_FUNC(sub_83D6D044);
PPC_FUNC_IMPL(__imp__sub_83D6D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D048"))) PPC_WEAK_FUNC(sub_83D6D048);
PPC_FUNC_IMPL(__imp__sub_83D6D048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D04C"))) PPC_WEAK_FUNC(sub_83D6D04C);
PPC_FUNC_IMPL(__imp__sub_83D6D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D050"))) PPC_WEAK_FUNC(sub_83D6D050);
PPC_FUNC_IMPL(__imp__sub_83D6D050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D054"))) PPC_WEAK_FUNC(sub_83D6D054);
PPC_FUNC_IMPL(__imp__sub_83D6D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D058"))) PPC_WEAK_FUNC(sub_83D6D058);
PPC_FUNC_IMPL(__imp__sub_83D6D058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D05C"))) PPC_WEAK_FUNC(sub_83D6D05C);
PPC_FUNC_IMPL(__imp__sub_83D6D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D060"))) PPC_WEAK_FUNC(sub_83D6D060);
PPC_FUNC_IMPL(__imp__sub_83D6D060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D064"))) PPC_WEAK_FUNC(sub_83D6D064);
PPC_FUNC_IMPL(__imp__sub_83D6D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D068"))) PPC_WEAK_FUNC(sub_83D6D068);
PPC_FUNC_IMPL(__imp__sub_83D6D068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D06C"))) PPC_WEAK_FUNC(sub_83D6D06C);
PPC_FUNC_IMPL(__imp__sub_83D6D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D070"))) PPC_WEAK_FUNC(sub_83D6D070);
PPC_FUNC_IMPL(__imp__sub_83D6D070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D074"))) PPC_WEAK_FUNC(sub_83D6D074);
PPC_FUNC_IMPL(__imp__sub_83D6D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D078"))) PPC_WEAK_FUNC(sub_83D6D078);
PPC_FUNC_IMPL(__imp__sub_83D6D078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D07C"))) PPC_WEAK_FUNC(sub_83D6D07C);
PPC_FUNC_IMPL(__imp__sub_83D6D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D080"))) PPC_WEAK_FUNC(sub_83D6D080);
PPC_FUNC_IMPL(__imp__sub_83D6D080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D084"))) PPC_WEAK_FUNC(sub_83D6D084);
PPC_FUNC_IMPL(__imp__sub_83D6D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D088"))) PPC_WEAK_FUNC(sub_83D6D088);
PPC_FUNC_IMPL(__imp__sub_83D6D088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D08C"))) PPC_WEAK_FUNC(sub_83D6D08C);
PPC_FUNC_IMPL(__imp__sub_83D6D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D090"))) PPC_WEAK_FUNC(sub_83D6D090);
PPC_FUNC_IMPL(__imp__sub_83D6D090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D094"))) PPC_WEAK_FUNC(sub_83D6D094);
PPC_FUNC_IMPL(__imp__sub_83D6D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D098"))) PPC_WEAK_FUNC(sub_83D6D098);
PPC_FUNC_IMPL(__imp__sub_83D6D098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D09C"))) PPC_WEAK_FUNC(sub_83D6D09C);
PPC_FUNC_IMPL(__imp__sub_83D6D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0A0"))) PPC_WEAK_FUNC(sub_83D6D0A0);
PPC_FUNC_IMPL(__imp__sub_83D6D0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0A4"))) PPC_WEAK_FUNC(sub_83D6D0A4);
PPC_FUNC_IMPL(__imp__sub_83D6D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0A8"))) PPC_WEAK_FUNC(sub_83D6D0A8);
PPC_FUNC_IMPL(__imp__sub_83D6D0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0AC"))) PPC_WEAK_FUNC(sub_83D6D0AC);
PPC_FUNC_IMPL(__imp__sub_83D6D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0B0"))) PPC_WEAK_FUNC(sub_83D6D0B0);
PPC_FUNC_IMPL(__imp__sub_83D6D0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8720
	ctx.r3.s64 = ctx.r11.s64 + 8720;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D0BC"))) PPC_WEAK_FUNC(sub_83D6D0BC);
PPC_FUNC_IMPL(__imp__sub_83D6D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0C0"))) PPC_WEAK_FUNC(sub_83D6D0C0);
PPC_FUNC_IMPL(__imp__sub_83D6D0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0C4"))) PPC_WEAK_FUNC(sub_83D6D0C4);
PPC_FUNC_IMPL(__imp__sub_83D6D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0C8"))) PPC_WEAK_FUNC(sub_83D6D0C8);
PPC_FUNC_IMPL(__imp__sub_83D6D0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0CC"))) PPC_WEAK_FUNC(sub_83D6D0CC);
PPC_FUNC_IMPL(__imp__sub_83D6D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0D0"))) PPC_WEAK_FUNC(sub_83D6D0D0);
PPC_FUNC_IMPL(__imp__sub_83D6D0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0D4"))) PPC_WEAK_FUNC(sub_83D6D0D4);
PPC_FUNC_IMPL(__imp__sub_83D6D0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0D8"))) PPC_WEAK_FUNC(sub_83D6D0D8);
PPC_FUNC_IMPL(__imp__sub_83D6D0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0DC"))) PPC_WEAK_FUNC(sub_83D6D0DC);
PPC_FUNC_IMPL(__imp__sub_83D6D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0E0"))) PPC_WEAK_FUNC(sub_83D6D0E0);
PPC_FUNC_IMPL(__imp__sub_83D6D0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0E4"))) PPC_WEAK_FUNC(sub_83D6D0E4);
PPC_FUNC_IMPL(__imp__sub_83D6D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0E8"))) PPC_WEAK_FUNC(sub_83D6D0E8);
PPC_FUNC_IMPL(__imp__sub_83D6D0E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0EC"))) PPC_WEAK_FUNC(sub_83D6D0EC);
PPC_FUNC_IMPL(__imp__sub_83D6D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0F0"))) PPC_WEAK_FUNC(sub_83D6D0F0);
PPC_FUNC_IMPL(__imp__sub_83D6D0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0F4"))) PPC_WEAK_FUNC(sub_83D6D0F4);
PPC_FUNC_IMPL(__imp__sub_83D6D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D0F8"))) PPC_WEAK_FUNC(sub_83D6D0F8);
PPC_FUNC_IMPL(__imp__sub_83D6D0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D0FC"))) PPC_WEAK_FUNC(sub_83D6D0FC);
PPC_FUNC_IMPL(__imp__sub_83D6D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D100"))) PPC_WEAK_FUNC(sub_83D6D100);
PPC_FUNC_IMPL(__imp__sub_83D6D100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D104"))) PPC_WEAK_FUNC(sub_83D6D104);
PPC_FUNC_IMPL(__imp__sub_83D6D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D108"))) PPC_WEAK_FUNC(sub_83D6D108);
PPC_FUNC_IMPL(__imp__sub_83D6D108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

