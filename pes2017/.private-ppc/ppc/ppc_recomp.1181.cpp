#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D2FBEC"))) PPC_WEAK_FUNC(sub_83D2FBEC);
PPC_FUNC_IMPL(__imp__sub_83D2FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBF0"))) PPC_WEAK_FUNC(sub_83D2FBF0);
PPC_FUNC_IMPL(__imp__sub_83D2FBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBF4"))) PPC_WEAK_FUNC(sub_83D2FBF4);
PPC_FUNC_IMPL(__imp__sub_83D2FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBF8"))) PPC_WEAK_FUNC(sub_83D2FBF8);
PPC_FUNC_IMPL(__imp__sub_83D2FBF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBFC"))) PPC_WEAK_FUNC(sub_83D2FBFC);
PPC_FUNC_IMPL(__imp__sub_83D2FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC00"))) PPC_WEAK_FUNC(sub_83D2FC00);
PPC_FUNC_IMPL(__imp__sub_83D2FC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FC04"))) PPC_WEAK_FUNC(sub_83D2FC04);
PPC_FUNC_IMPL(__imp__sub_83D2FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC08"))) PPC_WEAK_FUNC(sub_83D2FC08);
PPC_FUNC_IMPL(__imp__sub_83D2FC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FC0C"))) PPC_WEAK_FUNC(sub_83D2FC0C);
PPC_FUNC_IMPL(__imp__sub_83D2FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC10"))) PPC_WEAK_FUNC(sub_83D2FC10);
PPC_FUNC_IMPL(__imp__sub_83D2FC10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FC14"))) PPC_WEAK_FUNC(sub_83D2FC14);
PPC_FUNC_IMPL(__imp__sub_83D2FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC18"))) PPC_WEAK_FUNC(sub_83D2FC18);
PPC_FUNC_IMPL(__imp__sub_83D2FC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12780
	ctx.r3.s64 = ctx.r11.s64 + -12780;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FC24"))) PPC_WEAK_FUNC(sub_83D2FC24);
PPC_FUNC_IMPL(__imp__sub_83D2FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC28"))) PPC_WEAK_FUNC(sub_83D2FC28);
PPC_FUNC_IMPL(__imp__sub_83D2FC28) {
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
	// addi r31,r11,16260
	ctx.r31.s64 = ctx.r11.s64 + 16260;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fc60
	if (cr6.lt) goto loc_83D2FC60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FC60;
	sub_825952B8(ctx, base);
loc_83D2FC60:
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

__attribute__((alias("__imp__sub_83D2FC8C"))) PPC_WEAK_FUNC(sub_83D2FC8C);
PPC_FUNC_IMPL(__imp__sub_83D2FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC90"))) PPC_WEAK_FUNC(sub_83D2FC90);
PPC_FUNC_IMPL(__imp__sub_83D2FC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FC94"))) PPC_WEAK_FUNC(sub_83D2FC94);
PPC_FUNC_IMPL(__imp__sub_83D2FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FC98"))) PPC_WEAK_FUNC(sub_83D2FC98);
PPC_FUNC_IMPL(__imp__sub_83D2FC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FC9C"))) PPC_WEAK_FUNC(sub_83D2FC9C);
PPC_FUNC_IMPL(__imp__sub_83D2FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCA0"))) PPC_WEAK_FUNC(sub_83D2FCA0);
PPC_FUNC_IMPL(__imp__sub_83D2FCA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCA4"))) PPC_WEAK_FUNC(sub_83D2FCA4);
PPC_FUNC_IMPL(__imp__sub_83D2FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCA8"))) PPC_WEAK_FUNC(sub_83D2FCA8);
PPC_FUNC_IMPL(__imp__sub_83D2FCA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCAC"))) PPC_WEAK_FUNC(sub_83D2FCAC);
PPC_FUNC_IMPL(__imp__sub_83D2FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCB0"))) PPC_WEAK_FUNC(sub_83D2FCB0);
PPC_FUNC_IMPL(__imp__sub_83D2FCB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCB4"))) PPC_WEAK_FUNC(sub_83D2FCB4);
PPC_FUNC_IMPL(__imp__sub_83D2FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCB8"))) PPC_WEAK_FUNC(sub_83D2FCB8);
PPC_FUNC_IMPL(__imp__sub_83D2FCB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCBC"))) PPC_WEAK_FUNC(sub_83D2FCBC);
PPC_FUNC_IMPL(__imp__sub_83D2FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCC0"))) PPC_WEAK_FUNC(sub_83D2FCC0);
PPC_FUNC_IMPL(__imp__sub_83D2FCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCC4"))) PPC_WEAK_FUNC(sub_83D2FCC4);
PPC_FUNC_IMPL(__imp__sub_83D2FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCC8"))) PPC_WEAK_FUNC(sub_83D2FCC8);
PPC_FUNC_IMPL(__imp__sub_83D2FCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCCC"))) PPC_WEAK_FUNC(sub_83D2FCCC);
PPC_FUNC_IMPL(__imp__sub_83D2FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCD0"))) PPC_WEAK_FUNC(sub_83D2FCD0);
PPC_FUNC_IMPL(__imp__sub_83D2FCD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCD4"))) PPC_WEAK_FUNC(sub_83D2FCD4);
PPC_FUNC_IMPL(__imp__sub_83D2FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCD8"))) PPC_WEAK_FUNC(sub_83D2FCD8);
PPC_FUNC_IMPL(__imp__sub_83D2FCD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCDC"))) PPC_WEAK_FUNC(sub_83D2FCDC);
PPC_FUNC_IMPL(__imp__sub_83D2FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCE0"))) PPC_WEAK_FUNC(sub_83D2FCE0);
PPC_FUNC_IMPL(__imp__sub_83D2FCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCE4"))) PPC_WEAK_FUNC(sub_83D2FCE4);
PPC_FUNC_IMPL(__imp__sub_83D2FCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCE8"))) PPC_WEAK_FUNC(sub_83D2FCE8);
PPC_FUNC_IMPL(__imp__sub_83D2FCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FCEC"))) PPC_WEAK_FUNC(sub_83D2FCEC);
PPC_FUNC_IMPL(__imp__sub_83D2FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FCF0"))) PPC_WEAK_FUNC(sub_83D2FCF0);
PPC_FUNC_IMPL(__imp__sub_83D2FCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FCFC"))) PPC_WEAK_FUNC(sub_83D2FCFC);
PPC_FUNC_IMPL(__imp__sub_83D2FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD00"))) PPC_WEAK_FUNC(sub_83D2FD00);
PPC_FUNC_IMPL(__imp__sub_83D2FD00) {
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
	// addi r31,r11,16412
	ctx.r31.s64 = ctx.r11.s64 + 16412;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fd38
	if (cr6.lt) goto loc_83D2FD38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FD38;
	sub_825952B8(ctx, base);
loc_83D2FD38:
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

__attribute__((alias("__imp__sub_83D2FD64"))) PPC_WEAK_FUNC(sub_83D2FD64);
PPC_FUNC_IMPL(__imp__sub_83D2FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD68"))) PPC_WEAK_FUNC(sub_83D2FD68);
PPC_FUNC_IMPL(__imp__sub_83D2FD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD6C"))) PPC_WEAK_FUNC(sub_83D2FD6C);
PPC_FUNC_IMPL(__imp__sub_83D2FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD70"))) PPC_WEAK_FUNC(sub_83D2FD70);
PPC_FUNC_IMPL(__imp__sub_83D2FD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD74"))) PPC_WEAK_FUNC(sub_83D2FD74);
PPC_FUNC_IMPL(__imp__sub_83D2FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD78"))) PPC_WEAK_FUNC(sub_83D2FD78);
PPC_FUNC_IMPL(__imp__sub_83D2FD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD7C"))) PPC_WEAK_FUNC(sub_83D2FD7C);
PPC_FUNC_IMPL(__imp__sub_83D2FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD80"))) PPC_WEAK_FUNC(sub_83D2FD80);
PPC_FUNC_IMPL(__imp__sub_83D2FD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD84"))) PPC_WEAK_FUNC(sub_83D2FD84);
PPC_FUNC_IMPL(__imp__sub_83D2FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD88"))) PPC_WEAK_FUNC(sub_83D2FD88);
PPC_FUNC_IMPL(__imp__sub_83D2FD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD8C"))) PPC_WEAK_FUNC(sub_83D2FD8C);
PPC_FUNC_IMPL(__imp__sub_83D2FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD90"))) PPC_WEAK_FUNC(sub_83D2FD90);
PPC_FUNC_IMPL(__imp__sub_83D2FD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD94"))) PPC_WEAK_FUNC(sub_83D2FD94);
PPC_FUNC_IMPL(__imp__sub_83D2FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FD98"))) PPC_WEAK_FUNC(sub_83D2FD98);
PPC_FUNC_IMPL(__imp__sub_83D2FD98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FD9C"))) PPC_WEAK_FUNC(sub_83D2FD9C);
PPC_FUNC_IMPL(__imp__sub_83D2FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDA0"))) PPC_WEAK_FUNC(sub_83D2FDA0);
PPC_FUNC_IMPL(__imp__sub_83D2FDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FDA4"))) PPC_WEAK_FUNC(sub_83D2FDA4);
PPC_FUNC_IMPL(__imp__sub_83D2FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDA8"))) PPC_WEAK_FUNC(sub_83D2FDA8);
PPC_FUNC_IMPL(__imp__sub_83D2FDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FDAC"))) PPC_WEAK_FUNC(sub_83D2FDAC);
PPC_FUNC_IMPL(__imp__sub_83D2FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDB0"))) PPC_WEAK_FUNC(sub_83D2FDB0);
PPC_FUNC_IMPL(__imp__sub_83D2FDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FDB4"))) PPC_WEAK_FUNC(sub_83D2FDB4);
PPC_FUNC_IMPL(__imp__sub_83D2FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDB8"))) PPC_WEAK_FUNC(sub_83D2FDB8);
PPC_FUNC_IMPL(__imp__sub_83D2FDB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FDBC"))) PPC_WEAK_FUNC(sub_83D2FDBC);
PPC_FUNC_IMPL(__imp__sub_83D2FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDC0"))) PPC_WEAK_FUNC(sub_83D2FDC0);
PPC_FUNC_IMPL(__imp__sub_83D2FDC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FDC4"))) PPC_WEAK_FUNC(sub_83D2FDC4);
PPC_FUNC_IMPL(__imp__sub_83D2FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDC8"))) PPC_WEAK_FUNC(sub_83D2FDC8);
PPC_FUNC_IMPL(__imp__sub_83D2FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12756
	ctx.r3.s64 = ctx.r11.s64 + -12756;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FDD4"))) PPC_WEAK_FUNC(sub_83D2FDD4);
PPC_FUNC_IMPL(__imp__sub_83D2FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FDD8"))) PPC_WEAK_FUNC(sub_83D2FDD8);
PPC_FUNC_IMPL(__imp__sub_83D2FDD8) {
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
	// addi r31,r11,16564
	ctx.r31.s64 = ctx.r11.s64 + 16564;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fe10
	if (cr6.lt) goto loc_83D2FE10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FE10;
	sub_825952B8(ctx, base);
loc_83D2FE10:
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

__attribute__((alias("__imp__sub_83D2FE3C"))) PPC_WEAK_FUNC(sub_83D2FE3C);
PPC_FUNC_IMPL(__imp__sub_83D2FE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE40"))) PPC_WEAK_FUNC(sub_83D2FE40);
PPC_FUNC_IMPL(__imp__sub_83D2FE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE44"))) PPC_WEAK_FUNC(sub_83D2FE44);
PPC_FUNC_IMPL(__imp__sub_83D2FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE48"))) PPC_WEAK_FUNC(sub_83D2FE48);
PPC_FUNC_IMPL(__imp__sub_83D2FE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE4C"))) PPC_WEAK_FUNC(sub_83D2FE4C);
PPC_FUNC_IMPL(__imp__sub_83D2FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE50"))) PPC_WEAK_FUNC(sub_83D2FE50);
PPC_FUNC_IMPL(__imp__sub_83D2FE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE54"))) PPC_WEAK_FUNC(sub_83D2FE54);
PPC_FUNC_IMPL(__imp__sub_83D2FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE58"))) PPC_WEAK_FUNC(sub_83D2FE58);
PPC_FUNC_IMPL(__imp__sub_83D2FE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE5C"))) PPC_WEAK_FUNC(sub_83D2FE5C);
PPC_FUNC_IMPL(__imp__sub_83D2FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE60"))) PPC_WEAK_FUNC(sub_83D2FE60);
PPC_FUNC_IMPL(__imp__sub_83D2FE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE64"))) PPC_WEAK_FUNC(sub_83D2FE64);
PPC_FUNC_IMPL(__imp__sub_83D2FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE68"))) PPC_WEAK_FUNC(sub_83D2FE68);
PPC_FUNC_IMPL(__imp__sub_83D2FE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE6C"))) PPC_WEAK_FUNC(sub_83D2FE6C);
PPC_FUNC_IMPL(__imp__sub_83D2FE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE70"))) PPC_WEAK_FUNC(sub_83D2FE70);
PPC_FUNC_IMPL(__imp__sub_83D2FE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE74"))) PPC_WEAK_FUNC(sub_83D2FE74);
PPC_FUNC_IMPL(__imp__sub_83D2FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE78"))) PPC_WEAK_FUNC(sub_83D2FE78);
PPC_FUNC_IMPL(__imp__sub_83D2FE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE7C"))) PPC_WEAK_FUNC(sub_83D2FE7C);
PPC_FUNC_IMPL(__imp__sub_83D2FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE80"))) PPC_WEAK_FUNC(sub_83D2FE80);
PPC_FUNC_IMPL(__imp__sub_83D2FE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE84"))) PPC_WEAK_FUNC(sub_83D2FE84);
PPC_FUNC_IMPL(__imp__sub_83D2FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE88"))) PPC_WEAK_FUNC(sub_83D2FE88);
PPC_FUNC_IMPL(__imp__sub_83D2FE88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE8C"))) PPC_WEAK_FUNC(sub_83D2FE8C);
PPC_FUNC_IMPL(__imp__sub_83D2FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE90"))) PPC_WEAK_FUNC(sub_83D2FE90);
PPC_FUNC_IMPL(__imp__sub_83D2FE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE94"))) PPC_WEAK_FUNC(sub_83D2FE94);
PPC_FUNC_IMPL(__imp__sub_83D2FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FE98"))) PPC_WEAK_FUNC(sub_83D2FE98);
PPC_FUNC_IMPL(__imp__sub_83D2FE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FE9C"))) PPC_WEAK_FUNC(sub_83D2FE9C);
PPC_FUNC_IMPL(__imp__sub_83D2FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEA0"))) PPC_WEAK_FUNC(sub_83D2FEA0);
PPC_FUNC_IMPL(__imp__sub_83D2FEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FEAC"))) PPC_WEAK_FUNC(sub_83D2FEAC);
PPC_FUNC_IMPL(__imp__sub_83D2FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEB0"))) PPC_WEAK_FUNC(sub_83D2FEB0);
PPC_FUNC_IMPL(__imp__sub_83D2FEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEB4"))) PPC_WEAK_FUNC(sub_83D2FEB4);
PPC_FUNC_IMPL(__imp__sub_83D2FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEB8"))) PPC_WEAK_FUNC(sub_83D2FEB8);
PPC_FUNC_IMPL(__imp__sub_83D2FEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEBC"))) PPC_WEAK_FUNC(sub_83D2FEBC);
PPC_FUNC_IMPL(__imp__sub_83D2FEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEC0"))) PPC_WEAK_FUNC(sub_83D2FEC0);
PPC_FUNC_IMPL(__imp__sub_83D2FEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEC4"))) PPC_WEAK_FUNC(sub_83D2FEC4);
PPC_FUNC_IMPL(__imp__sub_83D2FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEC8"))) PPC_WEAK_FUNC(sub_83D2FEC8);
PPC_FUNC_IMPL(__imp__sub_83D2FEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FECC"))) PPC_WEAK_FUNC(sub_83D2FECC);
PPC_FUNC_IMPL(__imp__sub_83D2FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FED0"))) PPC_WEAK_FUNC(sub_83D2FED0);
PPC_FUNC_IMPL(__imp__sub_83D2FED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FED4"))) PPC_WEAK_FUNC(sub_83D2FED4);
PPC_FUNC_IMPL(__imp__sub_83D2FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FED8"))) PPC_WEAK_FUNC(sub_83D2FED8);
PPC_FUNC_IMPL(__imp__sub_83D2FED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEDC"))) PPC_WEAK_FUNC(sub_83D2FEDC);
PPC_FUNC_IMPL(__imp__sub_83D2FEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEE0"))) PPC_WEAK_FUNC(sub_83D2FEE0);
PPC_FUNC_IMPL(__imp__sub_83D2FEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEE4"))) PPC_WEAK_FUNC(sub_83D2FEE4);
PPC_FUNC_IMPL(__imp__sub_83D2FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEE8"))) PPC_WEAK_FUNC(sub_83D2FEE8);
PPC_FUNC_IMPL(__imp__sub_83D2FEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEEC"))) PPC_WEAK_FUNC(sub_83D2FEEC);
PPC_FUNC_IMPL(__imp__sub_83D2FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEF0"))) PPC_WEAK_FUNC(sub_83D2FEF0);
PPC_FUNC_IMPL(__imp__sub_83D2FEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEF4"))) PPC_WEAK_FUNC(sub_83D2FEF4);
PPC_FUNC_IMPL(__imp__sub_83D2FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FEF8"))) PPC_WEAK_FUNC(sub_83D2FEF8);
PPC_FUNC_IMPL(__imp__sub_83D2FEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FEFC"))) PPC_WEAK_FUNC(sub_83D2FEFC);
PPC_FUNC_IMPL(__imp__sub_83D2FEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF00"))) PPC_WEAK_FUNC(sub_83D2FF00);
PPC_FUNC_IMPL(__imp__sub_83D2FF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF04"))) PPC_WEAK_FUNC(sub_83D2FF04);
PPC_FUNC_IMPL(__imp__sub_83D2FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF08"))) PPC_WEAK_FUNC(sub_83D2FF08);
PPC_FUNC_IMPL(__imp__sub_83D2FF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF0C"))) PPC_WEAK_FUNC(sub_83D2FF0C);
PPC_FUNC_IMPL(__imp__sub_83D2FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF10"))) PPC_WEAK_FUNC(sub_83D2FF10);
PPC_FUNC_IMPL(__imp__sub_83D2FF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF14"))) PPC_WEAK_FUNC(sub_83D2FF14);
PPC_FUNC_IMPL(__imp__sub_83D2FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF18"))) PPC_WEAK_FUNC(sub_83D2FF18);
PPC_FUNC_IMPL(__imp__sub_83D2FF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF1C"))) PPC_WEAK_FUNC(sub_83D2FF1C);
PPC_FUNC_IMPL(__imp__sub_83D2FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF20"))) PPC_WEAK_FUNC(sub_83D2FF20);
PPC_FUNC_IMPL(__imp__sub_83D2FF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF24"))) PPC_WEAK_FUNC(sub_83D2FF24);
PPC_FUNC_IMPL(__imp__sub_83D2FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF28"))) PPC_WEAK_FUNC(sub_83D2FF28);
PPC_FUNC_IMPL(__imp__sub_83D2FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FF34"))) PPC_WEAK_FUNC(sub_83D2FF34);
PPC_FUNC_IMPL(__imp__sub_83D2FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF38"))) PPC_WEAK_FUNC(sub_83D2FF38);
PPC_FUNC_IMPL(__imp__sub_83D2FF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF3C"))) PPC_WEAK_FUNC(sub_83D2FF3C);
PPC_FUNC_IMPL(__imp__sub_83D2FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF40"))) PPC_WEAK_FUNC(sub_83D2FF40);
PPC_FUNC_IMPL(__imp__sub_83D2FF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF44"))) PPC_WEAK_FUNC(sub_83D2FF44);
PPC_FUNC_IMPL(__imp__sub_83D2FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF48"))) PPC_WEAK_FUNC(sub_83D2FF48);
PPC_FUNC_IMPL(__imp__sub_83D2FF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF4C"))) PPC_WEAK_FUNC(sub_83D2FF4C);
PPC_FUNC_IMPL(__imp__sub_83D2FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF50"))) PPC_WEAK_FUNC(sub_83D2FF50);
PPC_FUNC_IMPL(__imp__sub_83D2FF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF54"))) PPC_WEAK_FUNC(sub_83D2FF54);
PPC_FUNC_IMPL(__imp__sub_83D2FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF58"))) PPC_WEAK_FUNC(sub_83D2FF58);
PPC_FUNC_IMPL(__imp__sub_83D2FF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF5C"))) PPC_WEAK_FUNC(sub_83D2FF5C);
PPC_FUNC_IMPL(__imp__sub_83D2FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF60"))) PPC_WEAK_FUNC(sub_83D2FF60);
PPC_FUNC_IMPL(__imp__sub_83D2FF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF64"))) PPC_WEAK_FUNC(sub_83D2FF64);
PPC_FUNC_IMPL(__imp__sub_83D2FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF68"))) PPC_WEAK_FUNC(sub_83D2FF68);
PPC_FUNC_IMPL(__imp__sub_83D2FF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF6C"))) PPC_WEAK_FUNC(sub_83D2FF6C);
PPC_FUNC_IMPL(__imp__sub_83D2FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF70"))) PPC_WEAK_FUNC(sub_83D2FF70);
PPC_FUNC_IMPL(__imp__sub_83D2FF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF74"))) PPC_WEAK_FUNC(sub_83D2FF74);
PPC_FUNC_IMPL(__imp__sub_83D2FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF78"))) PPC_WEAK_FUNC(sub_83D2FF78);
PPC_FUNC_IMPL(__imp__sub_83D2FF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF7C"))) PPC_WEAK_FUNC(sub_83D2FF7C);
PPC_FUNC_IMPL(__imp__sub_83D2FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF80"))) PPC_WEAK_FUNC(sub_83D2FF80);
PPC_FUNC_IMPL(__imp__sub_83D2FF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF84"))) PPC_WEAK_FUNC(sub_83D2FF84);
PPC_FUNC_IMPL(__imp__sub_83D2FF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF88"))) PPC_WEAK_FUNC(sub_83D2FF88);
PPC_FUNC_IMPL(__imp__sub_83D2FF88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF8C"))) PPC_WEAK_FUNC(sub_83D2FF8C);
PPC_FUNC_IMPL(__imp__sub_83D2FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF90"))) PPC_WEAK_FUNC(sub_83D2FF90);
PPC_FUNC_IMPL(__imp__sub_83D2FF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF94"))) PPC_WEAK_FUNC(sub_83D2FF94);
PPC_FUNC_IMPL(__imp__sub_83D2FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FF98"))) PPC_WEAK_FUNC(sub_83D2FF98);
PPC_FUNC_IMPL(__imp__sub_83D2FF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FF9C"))) PPC_WEAK_FUNC(sub_83D2FF9C);
PPC_FUNC_IMPL(__imp__sub_83D2FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FFA0"))) PPC_WEAK_FUNC(sub_83D2FFA0);
PPC_FUNC_IMPL(__imp__sub_83D2FFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FFA4"))) PPC_WEAK_FUNC(sub_83D2FFA4);
PPC_FUNC_IMPL(__imp__sub_83D2FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FFA8"))) PPC_WEAK_FUNC(sub_83D2FFA8);
PPC_FUNC_IMPL(__imp__sub_83D2FFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FFAC"))) PPC_WEAK_FUNC(sub_83D2FFAC);
PPC_FUNC_IMPL(__imp__sub_83D2FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FFB0"))) PPC_WEAK_FUNC(sub_83D2FFB0);
PPC_FUNC_IMPL(__imp__sub_83D2FFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FFBC"))) PPC_WEAK_FUNC(sub_83D2FFBC);
PPC_FUNC_IMPL(__imp__sub_83D2FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FFC0"))) PPC_WEAK_FUNC(sub_83D2FFC0);
PPC_FUNC_IMPL(__imp__sub_83D2FFC0) {
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
	// addi r31,r11,16972
	ctx.r31.s64 = ctx.r11.s64 + 16972;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fff8
	if (cr6.lt) goto loc_83D2FFF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FFF8;
	sub_825952B8(ctx, base);
loc_83D2FFF8:
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

__attribute__((alias("__imp__sub_83D30024"))) PPC_WEAK_FUNC(sub_83D30024);
PPC_FUNC_IMPL(__imp__sub_83D30024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30028"))) PPC_WEAK_FUNC(sub_83D30028);
PPC_FUNC_IMPL(__imp__sub_83D30028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3002C"))) PPC_WEAK_FUNC(sub_83D3002C);
PPC_FUNC_IMPL(__imp__sub_83D3002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30030"))) PPC_WEAK_FUNC(sub_83D30030);
PPC_FUNC_IMPL(__imp__sub_83D30030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30034"))) PPC_WEAK_FUNC(sub_83D30034);
PPC_FUNC_IMPL(__imp__sub_83D30034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30038"))) PPC_WEAK_FUNC(sub_83D30038);
PPC_FUNC_IMPL(__imp__sub_83D30038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3003C"))) PPC_WEAK_FUNC(sub_83D3003C);
PPC_FUNC_IMPL(__imp__sub_83D3003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30040"))) PPC_WEAK_FUNC(sub_83D30040);
PPC_FUNC_IMPL(__imp__sub_83D30040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30044"))) PPC_WEAK_FUNC(sub_83D30044);
PPC_FUNC_IMPL(__imp__sub_83D30044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30048"))) PPC_WEAK_FUNC(sub_83D30048);
PPC_FUNC_IMPL(__imp__sub_83D30048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3004C"))) PPC_WEAK_FUNC(sub_83D3004C);
PPC_FUNC_IMPL(__imp__sub_83D3004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30050"))) PPC_WEAK_FUNC(sub_83D30050);
PPC_FUNC_IMPL(__imp__sub_83D30050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30054"))) PPC_WEAK_FUNC(sub_83D30054);
PPC_FUNC_IMPL(__imp__sub_83D30054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30058"))) PPC_WEAK_FUNC(sub_83D30058);
PPC_FUNC_IMPL(__imp__sub_83D30058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3005C"))) PPC_WEAK_FUNC(sub_83D3005C);
PPC_FUNC_IMPL(__imp__sub_83D3005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30060"))) PPC_WEAK_FUNC(sub_83D30060);
PPC_FUNC_IMPL(__imp__sub_83D30060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30064"))) PPC_WEAK_FUNC(sub_83D30064);
PPC_FUNC_IMPL(__imp__sub_83D30064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30068"))) PPC_WEAK_FUNC(sub_83D30068);
PPC_FUNC_IMPL(__imp__sub_83D30068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3006C"))) PPC_WEAK_FUNC(sub_83D3006C);
PPC_FUNC_IMPL(__imp__sub_83D3006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30070"))) PPC_WEAK_FUNC(sub_83D30070);
PPC_FUNC_IMPL(__imp__sub_83D30070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30074"))) PPC_WEAK_FUNC(sub_83D30074);
PPC_FUNC_IMPL(__imp__sub_83D30074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30078"))) PPC_WEAK_FUNC(sub_83D30078);
PPC_FUNC_IMPL(__imp__sub_83D30078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3007C"))) PPC_WEAK_FUNC(sub_83D3007C);
PPC_FUNC_IMPL(__imp__sub_83D3007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30080"))) PPC_WEAK_FUNC(sub_83D30080);
PPC_FUNC_IMPL(__imp__sub_83D30080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30084"))) PPC_WEAK_FUNC(sub_83D30084);
PPC_FUNC_IMPL(__imp__sub_83D30084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30088"))) PPC_WEAK_FUNC(sub_83D30088);
PPC_FUNC_IMPL(__imp__sub_83D30088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-11996
	ctx.r3.s64 = ctx.r11.s64 + -11996;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D30094"))) PPC_WEAK_FUNC(sub_83D30094);
PPC_FUNC_IMPL(__imp__sub_83D30094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30098"))) PPC_WEAK_FUNC(sub_83D30098);
PPC_FUNC_IMPL(__imp__sub_83D30098) {
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
	// addi r31,r11,17124
	ctx.r31.s64 = ctx.r11.s64 + 17124;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d300d0
	if (cr6.lt) goto loc_83D300D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D300D0;
	sub_825952B8(ctx, base);
loc_83D300D0:
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

__attribute__((alias("__imp__sub_83D300FC"))) PPC_WEAK_FUNC(sub_83D300FC);
PPC_FUNC_IMPL(__imp__sub_83D300FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30100"))) PPC_WEAK_FUNC(sub_83D30100);
PPC_FUNC_IMPL(__imp__sub_83D30100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30104"))) PPC_WEAK_FUNC(sub_83D30104);
PPC_FUNC_IMPL(__imp__sub_83D30104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30108"))) PPC_WEAK_FUNC(sub_83D30108);
PPC_FUNC_IMPL(__imp__sub_83D30108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3010C"))) PPC_WEAK_FUNC(sub_83D3010C);
PPC_FUNC_IMPL(__imp__sub_83D3010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30110"))) PPC_WEAK_FUNC(sub_83D30110);
PPC_FUNC_IMPL(__imp__sub_83D30110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30114"))) PPC_WEAK_FUNC(sub_83D30114);
PPC_FUNC_IMPL(__imp__sub_83D30114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30118"))) PPC_WEAK_FUNC(sub_83D30118);
PPC_FUNC_IMPL(__imp__sub_83D30118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3011C"))) PPC_WEAK_FUNC(sub_83D3011C);
PPC_FUNC_IMPL(__imp__sub_83D3011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30120"))) PPC_WEAK_FUNC(sub_83D30120);
PPC_FUNC_IMPL(__imp__sub_83D30120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30124"))) PPC_WEAK_FUNC(sub_83D30124);
PPC_FUNC_IMPL(__imp__sub_83D30124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30128"))) PPC_WEAK_FUNC(sub_83D30128);
PPC_FUNC_IMPL(__imp__sub_83D30128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3012C"))) PPC_WEAK_FUNC(sub_83D3012C);
PPC_FUNC_IMPL(__imp__sub_83D3012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30130"))) PPC_WEAK_FUNC(sub_83D30130);
PPC_FUNC_IMPL(__imp__sub_83D30130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30134"))) PPC_WEAK_FUNC(sub_83D30134);
PPC_FUNC_IMPL(__imp__sub_83D30134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30138"))) PPC_WEAK_FUNC(sub_83D30138);
PPC_FUNC_IMPL(__imp__sub_83D30138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3013C"))) PPC_WEAK_FUNC(sub_83D3013C);
PPC_FUNC_IMPL(__imp__sub_83D3013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30140"))) PPC_WEAK_FUNC(sub_83D30140);
PPC_FUNC_IMPL(__imp__sub_83D30140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30144"))) PPC_WEAK_FUNC(sub_83D30144);
PPC_FUNC_IMPL(__imp__sub_83D30144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30148"))) PPC_WEAK_FUNC(sub_83D30148);
PPC_FUNC_IMPL(__imp__sub_83D30148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3014C"))) PPC_WEAK_FUNC(sub_83D3014C);
PPC_FUNC_IMPL(__imp__sub_83D3014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30150"))) PPC_WEAK_FUNC(sub_83D30150);
PPC_FUNC_IMPL(__imp__sub_83D30150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30154"))) PPC_WEAK_FUNC(sub_83D30154);
PPC_FUNC_IMPL(__imp__sub_83D30154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30158"))) PPC_WEAK_FUNC(sub_83D30158);
PPC_FUNC_IMPL(__imp__sub_83D30158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3015C"))) PPC_WEAK_FUNC(sub_83D3015C);
PPC_FUNC_IMPL(__imp__sub_83D3015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30160"))) PPC_WEAK_FUNC(sub_83D30160);
PPC_FUNC_IMPL(__imp__sub_83D30160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D3016C"))) PPC_WEAK_FUNC(sub_83D3016C);
PPC_FUNC_IMPL(__imp__sub_83D3016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30170"))) PPC_WEAK_FUNC(sub_83D30170);
PPC_FUNC_IMPL(__imp__sub_83D30170) {
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
	// addi r31,r11,17276
	ctx.r31.s64 = ctx.r11.s64 + 17276;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d301a8
	if (cr6.lt) goto loc_83D301A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D301A8;
	sub_825952B8(ctx, base);
loc_83D301A8:
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

__attribute__((alias("__imp__sub_83D301D4"))) PPC_WEAK_FUNC(sub_83D301D4);
PPC_FUNC_IMPL(__imp__sub_83D301D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D301D8"))) PPC_WEAK_FUNC(sub_83D301D8);
PPC_FUNC_IMPL(__imp__sub_83D301D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D301DC"))) PPC_WEAK_FUNC(sub_83D301DC);
PPC_FUNC_IMPL(__imp__sub_83D301DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D301E0"))) PPC_WEAK_FUNC(sub_83D301E0);
PPC_FUNC_IMPL(__imp__sub_83D301E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D301E4"))) PPC_WEAK_FUNC(sub_83D301E4);
PPC_FUNC_IMPL(__imp__sub_83D301E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D301E8"))) PPC_WEAK_FUNC(sub_83D301E8);
PPC_FUNC_IMPL(__imp__sub_83D301E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D301EC"))) PPC_WEAK_FUNC(sub_83D301EC);
PPC_FUNC_IMPL(__imp__sub_83D301EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D301F0"))) PPC_WEAK_FUNC(sub_83D301F0);
PPC_FUNC_IMPL(__imp__sub_83D301F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D301F4"))) PPC_WEAK_FUNC(sub_83D301F4);
PPC_FUNC_IMPL(__imp__sub_83D301F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D301F8"))) PPC_WEAK_FUNC(sub_83D301F8);
PPC_FUNC_IMPL(__imp__sub_83D301F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D301FC"))) PPC_WEAK_FUNC(sub_83D301FC);
PPC_FUNC_IMPL(__imp__sub_83D301FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30200"))) PPC_WEAK_FUNC(sub_83D30200);
PPC_FUNC_IMPL(__imp__sub_83D30200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30204"))) PPC_WEAK_FUNC(sub_83D30204);
PPC_FUNC_IMPL(__imp__sub_83D30204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30208"))) PPC_WEAK_FUNC(sub_83D30208);
PPC_FUNC_IMPL(__imp__sub_83D30208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3020C"))) PPC_WEAK_FUNC(sub_83D3020C);
PPC_FUNC_IMPL(__imp__sub_83D3020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30210"))) PPC_WEAK_FUNC(sub_83D30210);
PPC_FUNC_IMPL(__imp__sub_83D30210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30214"))) PPC_WEAK_FUNC(sub_83D30214);
PPC_FUNC_IMPL(__imp__sub_83D30214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30218"))) PPC_WEAK_FUNC(sub_83D30218);
PPC_FUNC_IMPL(__imp__sub_83D30218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3021C"))) PPC_WEAK_FUNC(sub_83D3021C);
PPC_FUNC_IMPL(__imp__sub_83D3021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30220"))) PPC_WEAK_FUNC(sub_83D30220);
PPC_FUNC_IMPL(__imp__sub_83D30220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30224"))) PPC_WEAK_FUNC(sub_83D30224);
PPC_FUNC_IMPL(__imp__sub_83D30224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30228"))) PPC_WEAK_FUNC(sub_83D30228);
PPC_FUNC_IMPL(__imp__sub_83D30228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3022C"))) PPC_WEAK_FUNC(sub_83D3022C);
PPC_FUNC_IMPL(__imp__sub_83D3022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30230"))) PPC_WEAK_FUNC(sub_83D30230);
PPC_FUNC_IMPL(__imp__sub_83D30230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30234"))) PPC_WEAK_FUNC(sub_83D30234);
PPC_FUNC_IMPL(__imp__sub_83D30234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30238"))) PPC_WEAK_FUNC(sub_83D30238);
PPC_FUNC_IMPL(__imp__sub_83D30238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D30244"))) PPC_WEAK_FUNC(sub_83D30244);
PPC_FUNC_IMPL(__imp__sub_83D30244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30248"))) PPC_WEAK_FUNC(sub_83D30248);
PPC_FUNC_IMPL(__imp__sub_83D30248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3024C"))) PPC_WEAK_FUNC(sub_83D3024C);
PPC_FUNC_IMPL(__imp__sub_83D3024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30250"))) PPC_WEAK_FUNC(sub_83D30250);
PPC_FUNC_IMPL(__imp__sub_83D30250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D30254"))) PPC_WEAK_FUNC(sub_83D30254);
PPC_FUNC_IMPL(__imp__sub_83D30254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30258"))) PPC_WEAK_FUNC(sub_83D30258);
PPC_FUNC_IMPL(__imp__sub_83D30258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3025C"))) PPC_WEAK_FUNC(sub_83D3025C);
PPC_FUNC_IMPL(__imp__sub_83D3025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D30260"))) PPC_WEAK_FUNC(sub_83D30260);
PPC_FUNC_IMPL(__imp__sub_83D30260) {
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
	// addi r31,r11,17448
	ctx.r31.s64 = ctx.r11.s64 + 17448;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d30298
	if (cr6.lt) goto loc_83D30298;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D30298;
	sub_825952B8(ctx, base);
loc_83D30298:
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

__attribute__((alias("__imp__sub_83D302C4"))) PPC_WEAK_FUNC(sub_83D302C4);
PPC_FUNC_IMPL(__imp__sub_83D302C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D302C8"))) PPC_WEAK_FUNC(sub_83D302C8);
PPC_FUNC_IMPL(__imp__sub_83D302C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D302CC"))) PPC_WEAK_FUNC(sub_83D302CC);
PPC_FUNC_IMPL(__imp__sub_83D302CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D302D0"))) PPC_WEAK_FUNC(sub_83D302D0);
PPC_FUNC_IMPL(__imp__sub_83D302D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

