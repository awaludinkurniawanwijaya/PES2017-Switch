#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D69AB8"))) PPC_WEAK_FUNC(sub_83D69AB8);
PPC_FUNC_IMPL(__imp__sub_83D69AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69ABC"))) PPC_WEAK_FUNC(sub_83D69ABC);
PPC_FUNC_IMPL(__imp__sub_83D69ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AC0"))) PPC_WEAK_FUNC(sub_83D69AC0);
PPC_FUNC_IMPL(__imp__sub_83D69AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69AC4"))) PPC_WEAK_FUNC(sub_83D69AC4);
PPC_FUNC_IMPL(__imp__sub_83D69AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AC8"))) PPC_WEAK_FUNC(sub_83D69AC8);
PPC_FUNC_IMPL(__imp__sub_83D69AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69ACC"))) PPC_WEAK_FUNC(sub_83D69ACC);
PPC_FUNC_IMPL(__imp__sub_83D69ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AD0"))) PPC_WEAK_FUNC(sub_83D69AD0);
PPC_FUNC_IMPL(__imp__sub_83D69AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69AD4"))) PPC_WEAK_FUNC(sub_83D69AD4);
PPC_FUNC_IMPL(__imp__sub_83D69AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AD8"))) PPC_WEAK_FUNC(sub_83D69AD8);
PPC_FUNC_IMPL(__imp__sub_83D69AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69ADC"))) PPC_WEAK_FUNC(sub_83D69ADC);
PPC_FUNC_IMPL(__imp__sub_83D69ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AE0"))) PPC_WEAK_FUNC(sub_83D69AE0);
PPC_FUNC_IMPL(__imp__sub_83D69AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69AE4"))) PPC_WEAK_FUNC(sub_83D69AE4);
PPC_FUNC_IMPL(__imp__sub_83D69AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AE8"))) PPC_WEAK_FUNC(sub_83D69AE8);
PPC_FUNC_IMPL(__imp__sub_83D69AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11843
	ctx.r3.s64 = ctx.r11.s64 + -11843;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69AF4"))) PPC_WEAK_FUNC(sub_83D69AF4);
PPC_FUNC_IMPL(__imp__sub_83D69AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69AF8"))) PPC_WEAK_FUNC(sub_83D69AF8);
PPC_FUNC_IMPL(__imp__sub_83D69AF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,-11836
	ctx.r31.s64 = ctx.r11.s64 + -11836;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x838164b8
	ctx.lr = 0x83D69B24;
	sub_838164B8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D69B38;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_83D69B4C"))) PPC_WEAK_FUNC(sub_83D69B4C);
PPC_FUNC_IMPL(__imp__sub_83D69B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B50"))) PPC_WEAK_FUNC(sub_83D69B50);
PPC_FUNC_IMPL(__imp__sub_83D69B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B54"))) PPC_WEAK_FUNC(sub_83D69B54);
PPC_FUNC_IMPL(__imp__sub_83D69B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B58"))) PPC_WEAK_FUNC(sub_83D69B58);
PPC_FUNC_IMPL(__imp__sub_83D69B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B5C"))) PPC_WEAK_FUNC(sub_83D69B5C);
PPC_FUNC_IMPL(__imp__sub_83D69B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B60"))) PPC_WEAK_FUNC(sub_83D69B60);
PPC_FUNC_IMPL(__imp__sub_83D69B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B64"))) PPC_WEAK_FUNC(sub_83D69B64);
PPC_FUNC_IMPL(__imp__sub_83D69B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B68"))) PPC_WEAK_FUNC(sub_83D69B68);
PPC_FUNC_IMPL(__imp__sub_83D69B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B6C"))) PPC_WEAK_FUNC(sub_83D69B6C);
PPC_FUNC_IMPL(__imp__sub_83D69B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B70"))) PPC_WEAK_FUNC(sub_83D69B70);
PPC_FUNC_IMPL(__imp__sub_83D69B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B74"))) PPC_WEAK_FUNC(sub_83D69B74);
PPC_FUNC_IMPL(__imp__sub_83D69B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B78"))) PPC_WEAK_FUNC(sub_83D69B78);
PPC_FUNC_IMPL(__imp__sub_83D69B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B7C"))) PPC_WEAK_FUNC(sub_83D69B7C);
PPC_FUNC_IMPL(__imp__sub_83D69B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B80"))) PPC_WEAK_FUNC(sub_83D69B80);
PPC_FUNC_IMPL(__imp__sub_83D69B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B84"))) PPC_WEAK_FUNC(sub_83D69B84);
PPC_FUNC_IMPL(__imp__sub_83D69B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B88"))) PPC_WEAK_FUNC(sub_83D69B88);
PPC_FUNC_IMPL(__imp__sub_83D69B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B8C"))) PPC_WEAK_FUNC(sub_83D69B8C);
PPC_FUNC_IMPL(__imp__sub_83D69B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B90"))) PPC_WEAK_FUNC(sub_83D69B90);
PPC_FUNC_IMPL(__imp__sub_83D69B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B94"))) PPC_WEAK_FUNC(sub_83D69B94);
PPC_FUNC_IMPL(__imp__sub_83D69B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69B98"))) PPC_WEAK_FUNC(sub_83D69B98);
PPC_FUNC_IMPL(__imp__sub_83D69B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69B9C"))) PPC_WEAK_FUNC(sub_83D69B9C);
PPC_FUNC_IMPL(__imp__sub_83D69B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BA0"))) PPC_WEAK_FUNC(sub_83D69BA0);
PPC_FUNC_IMPL(__imp__sub_83D69BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BA4"))) PPC_WEAK_FUNC(sub_83D69BA4);
PPC_FUNC_IMPL(__imp__sub_83D69BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BA8"))) PPC_WEAK_FUNC(sub_83D69BA8);
PPC_FUNC_IMPL(__imp__sub_83D69BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BAC"))) PPC_WEAK_FUNC(sub_83D69BAC);
PPC_FUNC_IMPL(__imp__sub_83D69BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BB0"))) PPC_WEAK_FUNC(sub_83D69BB0);
PPC_FUNC_IMPL(__imp__sub_83D69BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11820
	ctx.r3.s64 = ctx.r11.s64 + -11820;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69BBC"))) PPC_WEAK_FUNC(sub_83D69BBC);
PPC_FUNC_IMPL(__imp__sub_83D69BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BC0"))) PPC_WEAK_FUNC(sub_83D69BC0);
PPC_FUNC_IMPL(__imp__sub_83D69BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BC4"))) PPC_WEAK_FUNC(sub_83D69BC4);
PPC_FUNC_IMPL(__imp__sub_83D69BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BC8"))) PPC_WEAK_FUNC(sub_83D69BC8);
PPC_FUNC_IMPL(__imp__sub_83D69BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BCC"))) PPC_WEAK_FUNC(sub_83D69BCC);
PPC_FUNC_IMPL(__imp__sub_83D69BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BD0"))) PPC_WEAK_FUNC(sub_83D69BD0);
PPC_FUNC_IMPL(__imp__sub_83D69BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BD4"))) PPC_WEAK_FUNC(sub_83D69BD4);
PPC_FUNC_IMPL(__imp__sub_83D69BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BD8"))) PPC_WEAK_FUNC(sub_83D69BD8);
PPC_FUNC_IMPL(__imp__sub_83D69BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BDC"))) PPC_WEAK_FUNC(sub_83D69BDC);
PPC_FUNC_IMPL(__imp__sub_83D69BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BE0"))) PPC_WEAK_FUNC(sub_83D69BE0);
PPC_FUNC_IMPL(__imp__sub_83D69BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BE4"))) PPC_WEAK_FUNC(sub_83D69BE4);
PPC_FUNC_IMPL(__imp__sub_83D69BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BE8"))) PPC_WEAK_FUNC(sub_83D69BE8);
PPC_FUNC_IMPL(__imp__sub_83D69BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BEC"))) PPC_WEAK_FUNC(sub_83D69BEC);
PPC_FUNC_IMPL(__imp__sub_83D69BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BF0"))) PPC_WEAK_FUNC(sub_83D69BF0);
PPC_FUNC_IMPL(__imp__sub_83D69BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BF4"))) PPC_WEAK_FUNC(sub_83D69BF4);
PPC_FUNC_IMPL(__imp__sub_83D69BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69BF8"))) PPC_WEAK_FUNC(sub_83D69BF8);
PPC_FUNC_IMPL(__imp__sub_83D69BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69BFC"))) PPC_WEAK_FUNC(sub_83D69BFC);
PPC_FUNC_IMPL(__imp__sub_83D69BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C00"))) PPC_WEAK_FUNC(sub_83D69C00);
PPC_FUNC_IMPL(__imp__sub_83D69C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C04"))) PPC_WEAK_FUNC(sub_83D69C04);
PPC_FUNC_IMPL(__imp__sub_83D69C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C08"))) PPC_WEAK_FUNC(sub_83D69C08);
PPC_FUNC_IMPL(__imp__sub_83D69C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C0C"))) PPC_WEAK_FUNC(sub_83D69C0C);
PPC_FUNC_IMPL(__imp__sub_83D69C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C10"))) PPC_WEAK_FUNC(sub_83D69C10);
PPC_FUNC_IMPL(__imp__sub_83D69C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C14"))) PPC_WEAK_FUNC(sub_83D69C14);
PPC_FUNC_IMPL(__imp__sub_83D69C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C18"))) PPC_WEAK_FUNC(sub_83D69C18);
PPC_FUNC_IMPL(__imp__sub_83D69C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C1C"))) PPC_WEAK_FUNC(sub_83D69C1C);
PPC_FUNC_IMPL(__imp__sub_83D69C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C20"))) PPC_WEAK_FUNC(sub_83D69C20);
PPC_FUNC_IMPL(__imp__sub_83D69C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11812
	ctx.r3.s64 = ctx.r11.s64 + -11812;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69C2C"))) PPC_WEAK_FUNC(sub_83D69C2C);
PPC_FUNC_IMPL(__imp__sub_83D69C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C30"))) PPC_WEAK_FUNC(sub_83D69C30);
PPC_FUNC_IMPL(__imp__sub_83D69C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C34"))) PPC_WEAK_FUNC(sub_83D69C34);
PPC_FUNC_IMPL(__imp__sub_83D69C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C38"))) PPC_WEAK_FUNC(sub_83D69C38);
PPC_FUNC_IMPL(__imp__sub_83D69C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C3C"))) PPC_WEAK_FUNC(sub_83D69C3C);
PPC_FUNC_IMPL(__imp__sub_83D69C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C40"))) PPC_WEAK_FUNC(sub_83D69C40);
PPC_FUNC_IMPL(__imp__sub_83D69C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C44"))) PPC_WEAK_FUNC(sub_83D69C44);
PPC_FUNC_IMPL(__imp__sub_83D69C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C48"))) PPC_WEAK_FUNC(sub_83D69C48);
PPC_FUNC_IMPL(__imp__sub_83D69C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C4C"))) PPC_WEAK_FUNC(sub_83D69C4C);
PPC_FUNC_IMPL(__imp__sub_83D69C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C50"))) PPC_WEAK_FUNC(sub_83D69C50);
PPC_FUNC_IMPL(__imp__sub_83D69C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C54"))) PPC_WEAK_FUNC(sub_83D69C54);
PPC_FUNC_IMPL(__imp__sub_83D69C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C58"))) PPC_WEAK_FUNC(sub_83D69C58);
PPC_FUNC_IMPL(__imp__sub_83D69C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C5C"))) PPC_WEAK_FUNC(sub_83D69C5C);
PPC_FUNC_IMPL(__imp__sub_83D69C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C60"))) PPC_WEAK_FUNC(sub_83D69C60);
PPC_FUNC_IMPL(__imp__sub_83D69C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C64"))) PPC_WEAK_FUNC(sub_83D69C64);
PPC_FUNC_IMPL(__imp__sub_83D69C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C68"))) PPC_WEAK_FUNC(sub_83D69C68);
PPC_FUNC_IMPL(__imp__sub_83D69C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C6C"))) PPC_WEAK_FUNC(sub_83D69C6C);
PPC_FUNC_IMPL(__imp__sub_83D69C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C70"))) PPC_WEAK_FUNC(sub_83D69C70);
PPC_FUNC_IMPL(__imp__sub_83D69C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C74"))) PPC_WEAK_FUNC(sub_83D69C74);
PPC_FUNC_IMPL(__imp__sub_83D69C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C78"))) PPC_WEAK_FUNC(sub_83D69C78);
PPC_FUNC_IMPL(__imp__sub_83D69C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C7C"))) PPC_WEAK_FUNC(sub_83D69C7C);
PPC_FUNC_IMPL(__imp__sub_83D69C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C80"))) PPC_WEAK_FUNC(sub_83D69C80);
PPC_FUNC_IMPL(__imp__sub_83D69C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C84"))) PPC_WEAK_FUNC(sub_83D69C84);
PPC_FUNC_IMPL(__imp__sub_83D69C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C88"))) PPC_WEAK_FUNC(sub_83D69C88);
PPC_FUNC_IMPL(__imp__sub_83D69C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69C8C"))) PPC_WEAK_FUNC(sub_83D69C8C);
PPC_FUNC_IMPL(__imp__sub_83D69C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69C90"))) PPC_WEAK_FUNC(sub_83D69C90);
PPC_FUNC_IMPL(__imp__sub_83D69C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11804
	ctx.r3.s64 = ctx.r11.s64 + -11804;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69C9C"))) PPC_WEAK_FUNC(sub_83D69C9C);
PPC_FUNC_IMPL(__imp__sub_83D69C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CA0"))) PPC_WEAK_FUNC(sub_83D69CA0);
PPC_FUNC_IMPL(__imp__sub_83D69CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CA4"))) PPC_WEAK_FUNC(sub_83D69CA4);
PPC_FUNC_IMPL(__imp__sub_83D69CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CA8"))) PPC_WEAK_FUNC(sub_83D69CA8);
PPC_FUNC_IMPL(__imp__sub_83D69CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CAC"))) PPC_WEAK_FUNC(sub_83D69CAC);
PPC_FUNC_IMPL(__imp__sub_83D69CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CB0"))) PPC_WEAK_FUNC(sub_83D69CB0);
PPC_FUNC_IMPL(__imp__sub_83D69CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CB4"))) PPC_WEAK_FUNC(sub_83D69CB4);
PPC_FUNC_IMPL(__imp__sub_83D69CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CB8"))) PPC_WEAK_FUNC(sub_83D69CB8);
PPC_FUNC_IMPL(__imp__sub_83D69CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CBC"))) PPC_WEAK_FUNC(sub_83D69CBC);
PPC_FUNC_IMPL(__imp__sub_83D69CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CC0"))) PPC_WEAK_FUNC(sub_83D69CC0);
PPC_FUNC_IMPL(__imp__sub_83D69CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CC4"))) PPC_WEAK_FUNC(sub_83D69CC4);
PPC_FUNC_IMPL(__imp__sub_83D69CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CC8"))) PPC_WEAK_FUNC(sub_83D69CC8);
PPC_FUNC_IMPL(__imp__sub_83D69CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CCC"))) PPC_WEAK_FUNC(sub_83D69CCC);
PPC_FUNC_IMPL(__imp__sub_83D69CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CD0"))) PPC_WEAK_FUNC(sub_83D69CD0);
PPC_FUNC_IMPL(__imp__sub_83D69CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CD4"))) PPC_WEAK_FUNC(sub_83D69CD4);
PPC_FUNC_IMPL(__imp__sub_83D69CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CD8"))) PPC_WEAK_FUNC(sub_83D69CD8);
PPC_FUNC_IMPL(__imp__sub_83D69CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CDC"))) PPC_WEAK_FUNC(sub_83D69CDC);
PPC_FUNC_IMPL(__imp__sub_83D69CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CE0"))) PPC_WEAK_FUNC(sub_83D69CE0);
PPC_FUNC_IMPL(__imp__sub_83D69CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CE4"))) PPC_WEAK_FUNC(sub_83D69CE4);
PPC_FUNC_IMPL(__imp__sub_83D69CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CE8"))) PPC_WEAK_FUNC(sub_83D69CE8);
PPC_FUNC_IMPL(__imp__sub_83D69CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CEC"))) PPC_WEAK_FUNC(sub_83D69CEC);
PPC_FUNC_IMPL(__imp__sub_83D69CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CF0"))) PPC_WEAK_FUNC(sub_83D69CF0);
PPC_FUNC_IMPL(__imp__sub_83D69CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CF4"))) PPC_WEAK_FUNC(sub_83D69CF4);
PPC_FUNC_IMPL(__imp__sub_83D69CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69CF8"))) PPC_WEAK_FUNC(sub_83D69CF8);
PPC_FUNC_IMPL(__imp__sub_83D69CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69CFC"))) PPC_WEAK_FUNC(sub_83D69CFC);
PPC_FUNC_IMPL(__imp__sub_83D69CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D00"))) PPC_WEAK_FUNC(sub_83D69D00);
PPC_FUNC_IMPL(__imp__sub_83D69D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11796
	ctx.r3.s64 = ctx.r11.s64 + -11796;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69D0C"))) PPC_WEAK_FUNC(sub_83D69D0C);
PPC_FUNC_IMPL(__imp__sub_83D69D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D10"))) PPC_WEAK_FUNC(sub_83D69D10);
PPC_FUNC_IMPL(__imp__sub_83D69D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D14"))) PPC_WEAK_FUNC(sub_83D69D14);
PPC_FUNC_IMPL(__imp__sub_83D69D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D18"))) PPC_WEAK_FUNC(sub_83D69D18);
PPC_FUNC_IMPL(__imp__sub_83D69D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D1C"))) PPC_WEAK_FUNC(sub_83D69D1C);
PPC_FUNC_IMPL(__imp__sub_83D69D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D20"))) PPC_WEAK_FUNC(sub_83D69D20);
PPC_FUNC_IMPL(__imp__sub_83D69D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D24"))) PPC_WEAK_FUNC(sub_83D69D24);
PPC_FUNC_IMPL(__imp__sub_83D69D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D28"))) PPC_WEAK_FUNC(sub_83D69D28);
PPC_FUNC_IMPL(__imp__sub_83D69D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D2C"))) PPC_WEAK_FUNC(sub_83D69D2C);
PPC_FUNC_IMPL(__imp__sub_83D69D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D30"))) PPC_WEAK_FUNC(sub_83D69D30);
PPC_FUNC_IMPL(__imp__sub_83D69D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D34"))) PPC_WEAK_FUNC(sub_83D69D34);
PPC_FUNC_IMPL(__imp__sub_83D69D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D38"))) PPC_WEAK_FUNC(sub_83D69D38);
PPC_FUNC_IMPL(__imp__sub_83D69D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D3C"))) PPC_WEAK_FUNC(sub_83D69D3C);
PPC_FUNC_IMPL(__imp__sub_83D69D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D40"))) PPC_WEAK_FUNC(sub_83D69D40);
PPC_FUNC_IMPL(__imp__sub_83D69D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D44"))) PPC_WEAK_FUNC(sub_83D69D44);
PPC_FUNC_IMPL(__imp__sub_83D69D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D48"))) PPC_WEAK_FUNC(sub_83D69D48);
PPC_FUNC_IMPL(__imp__sub_83D69D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D4C"))) PPC_WEAK_FUNC(sub_83D69D4C);
PPC_FUNC_IMPL(__imp__sub_83D69D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D50"))) PPC_WEAK_FUNC(sub_83D69D50);
PPC_FUNC_IMPL(__imp__sub_83D69D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D54"))) PPC_WEAK_FUNC(sub_83D69D54);
PPC_FUNC_IMPL(__imp__sub_83D69D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D58"))) PPC_WEAK_FUNC(sub_83D69D58);
PPC_FUNC_IMPL(__imp__sub_83D69D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D5C"))) PPC_WEAK_FUNC(sub_83D69D5C);
PPC_FUNC_IMPL(__imp__sub_83D69D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D60"))) PPC_WEAK_FUNC(sub_83D69D60);
PPC_FUNC_IMPL(__imp__sub_83D69D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D64"))) PPC_WEAK_FUNC(sub_83D69D64);
PPC_FUNC_IMPL(__imp__sub_83D69D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D68"))) PPC_WEAK_FUNC(sub_83D69D68);
PPC_FUNC_IMPL(__imp__sub_83D69D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D6C"))) PPC_WEAK_FUNC(sub_83D69D6C);
PPC_FUNC_IMPL(__imp__sub_83D69D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D70"))) PPC_WEAK_FUNC(sub_83D69D70);
PPC_FUNC_IMPL(__imp__sub_83D69D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11788
	ctx.r3.s64 = ctx.r11.s64 + -11788;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69D7C"))) PPC_WEAK_FUNC(sub_83D69D7C);
PPC_FUNC_IMPL(__imp__sub_83D69D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D80"))) PPC_WEAK_FUNC(sub_83D69D80);
PPC_FUNC_IMPL(__imp__sub_83D69D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D84"))) PPC_WEAK_FUNC(sub_83D69D84);
PPC_FUNC_IMPL(__imp__sub_83D69D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D88"))) PPC_WEAK_FUNC(sub_83D69D88);
PPC_FUNC_IMPL(__imp__sub_83D69D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D8C"))) PPC_WEAK_FUNC(sub_83D69D8C);
PPC_FUNC_IMPL(__imp__sub_83D69D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D90"))) PPC_WEAK_FUNC(sub_83D69D90);
PPC_FUNC_IMPL(__imp__sub_83D69D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D94"))) PPC_WEAK_FUNC(sub_83D69D94);
PPC_FUNC_IMPL(__imp__sub_83D69D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69D98"))) PPC_WEAK_FUNC(sub_83D69D98);
PPC_FUNC_IMPL(__imp__sub_83D69D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69D9C"))) PPC_WEAK_FUNC(sub_83D69D9C);
PPC_FUNC_IMPL(__imp__sub_83D69D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DA0"))) PPC_WEAK_FUNC(sub_83D69DA0);
PPC_FUNC_IMPL(__imp__sub_83D69DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DA4"))) PPC_WEAK_FUNC(sub_83D69DA4);
PPC_FUNC_IMPL(__imp__sub_83D69DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DA8"))) PPC_WEAK_FUNC(sub_83D69DA8);
PPC_FUNC_IMPL(__imp__sub_83D69DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DAC"))) PPC_WEAK_FUNC(sub_83D69DAC);
PPC_FUNC_IMPL(__imp__sub_83D69DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DB0"))) PPC_WEAK_FUNC(sub_83D69DB0);
PPC_FUNC_IMPL(__imp__sub_83D69DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DB4"))) PPC_WEAK_FUNC(sub_83D69DB4);
PPC_FUNC_IMPL(__imp__sub_83D69DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DB8"))) PPC_WEAK_FUNC(sub_83D69DB8);
PPC_FUNC_IMPL(__imp__sub_83D69DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DBC"))) PPC_WEAK_FUNC(sub_83D69DBC);
PPC_FUNC_IMPL(__imp__sub_83D69DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DC0"))) PPC_WEAK_FUNC(sub_83D69DC0);
PPC_FUNC_IMPL(__imp__sub_83D69DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DC4"))) PPC_WEAK_FUNC(sub_83D69DC4);
PPC_FUNC_IMPL(__imp__sub_83D69DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DC8"))) PPC_WEAK_FUNC(sub_83D69DC8);
PPC_FUNC_IMPL(__imp__sub_83D69DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DCC"))) PPC_WEAK_FUNC(sub_83D69DCC);
PPC_FUNC_IMPL(__imp__sub_83D69DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DD0"))) PPC_WEAK_FUNC(sub_83D69DD0);
PPC_FUNC_IMPL(__imp__sub_83D69DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DD4"))) PPC_WEAK_FUNC(sub_83D69DD4);
PPC_FUNC_IMPL(__imp__sub_83D69DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DD8"))) PPC_WEAK_FUNC(sub_83D69DD8);
PPC_FUNC_IMPL(__imp__sub_83D69DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DDC"))) PPC_WEAK_FUNC(sub_83D69DDC);
PPC_FUNC_IMPL(__imp__sub_83D69DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DE0"))) PPC_WEAK_FUNC(sub_83D69DE0);
PPC_FUNC_IMPL(__imp__sub_83D69DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11780
	ctx.r3.s64 = ctx.r11.s64 + -11780;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69DEC"))) PPC_WEAK_FUNC(sub_83D69DEC);
PPC_FUNC_IMPL(__imp__sub_83D69DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DF0"))) PPC_WEAK_FUNC(sub_83D69DF0);
PPC_FUNC_IMPL(__imp__sub_83D69DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DF4"))) PPC_WEAK_FUNC(sub_83D69DF4);
PPC_FUNC_IMPL(__imp__sub_83D69DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69DF8"))) PPC_WEAK_FUNC(sub_83D69DF8);
PPC_FUNC_IMPL(__imp__sub_83D69DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69DFC"))) PPC_WEAK_FUNC(sub_83D69DFC);
PPC_FUNC_IMPL(__imp__sub_83D69DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E00"))) PPC_WEAK_FUNC(sub_83D69E00);
PPC_FUNC_IMPL(__imp__sub_83D69E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E04"))) PPC_WEAK_FUNC(sub_83D69E04);
PPC_FUNC_IMPL(__imp__sub_83D69E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E08"))) PPC_WEAK_FUNC(sub_83D69E08);
PPC_FUNC_IMPL(__imp__sub_83D69E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E0C"))) PPC_WEAK_FUNC(sub_83D69E0C);
PPC_FUNC_IMPL(__imp__sub_83D69E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E10"))) PPC_WEAK_FUNC(sub_83D69E10);
PPC_FUNC_IMPL(__imp__sub_83D69E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E14"))) PPC_WEAK_FUNC(sub_83D69E14);
PPC_FUNC_IMPL(__imp__sub_83D69E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E18"))) PPC_WEAK_FUNC(sub_83D69E18);
PPC_FUNC_IMPL(__imp__sub_83D69E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E1C"))) PPC_WEAK_FUNC(sub_83D69E1C);
PPC_FUNC_IMPL(__imp__sub_83D69E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E20"))) PPC_WEAK_FUNC(sub_83D69E20);
PPC_FUNC_IMPL(__imp__sub_83D69E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E24"))) PPC_WEAK_FUNC(sub_83D69E24);
PPC_FUNC_IMPL(__imp__sub_83D69E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E28"))) PPC_WEAK_FUNC(sub_83D69E28);
PPC_FUNC_IMPL(__imp__sub_83D69E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E2C"))) PPC_WEAK_FUNC(sub_83D69E2C);
PPC_FUNC_IMPL(__imp__sub_83D69E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E30"))) PPC_WEAK_FUNC(sub_83D69E30);
PPC_FUNC_IMPL(__imp__sub_83D69E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E34"))) PPC_WEAK_FUNC(sub_83D69E34);
PPC_FUNC_IMPL(__imp__sub_83D69E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E38"))) PPC_WEAK_FUNC(sub_83D69E38);
PPC_FUNC_IMPL(__imp__sub_83D69E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E3C"))) PPC_WEAK_FUNC(sub_83D69E3C);
PPC_FUNC_IMPL(__imp__sub_83D69E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E40"))) PPC_WEAK_FUNC(sub_83D69E40);
PPC_FUNC_IMPL(__imp__sub_83D69E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E44"))) PPC_WEAK_FUNC(sub_83D69E44);
PPC_FUNC_IMPL(__imp__sub_83D69E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E48"))) PPC_WEAK_FUNC(sub_83D69E48);
PPC_FUNC_IMPL(__imp__sub_83D69E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E4C"))) PPC_WEAK_FUNC(sub_83D69E4C);
PPC_FUNC_IMPL(__imp__sub_83D69E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E50"))) PPC_WEAK_FUNC(sub_83D69E50);
PPC_FUNC_IMPL(__imp__sub_83D69E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11772
	ctx.r3.s64 = ctx.r11.s64 + -11772;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69E5C"))) PPC_WEAK_FUNC(sub_83D69E5C);
PPC_FUNC_IMPL(__imp__sub_83D69E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E60"))) PPC_WEAK_FUNC(sub_83D69E60);
PPC_FUNC_IMPL(__imp__sub_83D69E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E64"))) PPC_WEAK_FUNC(sub_83D69E64);
PPC_FUNC_IMPL(__imp__sub_83D69E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E68"))) PPC_WEAK_FUNC(sub_83D69E68);
PPC_FUNC_IMPL(__imp__sub_83D69E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E6C"))) PPC_WEAK_FUNC(sub_83D69E6C);
PPC_FUNC_IMPL(__imp__sub_83D69E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E70"))) PPC_WEAK_FUNC(sub_83D69E70);
PPC_FUNC_IMPL(__imp__sub_83D69E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E74"))) PPC_WEAK_FUNC(sub_83D69E74);
PPC_FUNC_IMPL(__imp__sub_83D69E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E78"))) PPC_WEAK_FUNC(sub_83D69E78);
PPC_FUNC_IMPL(__imp__sub_83D69E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E7C"))) PPC_WEAK_FUNC(sub_83D69E7C);
PPC_FUNC_IMPL(__imp__sub_83D69E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E80"))) PPC_WEAK_FUNC(sub_83D69E80);
PPC_FUNC_IMPL(__imp__sub_83D69E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E84"))) PPC_WEAK_FUNC(sub_83D69E84);
PPC_FUNC_IMPL(__imp__sub_83D69E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E88"))) PPC_WEAK_FUNC(sub_83D69E88);
PPC_FUNC_IMPL(__imp__sub_83D69E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E8C"))) PPC_WEAK_FUNC(sub_83D69E8C);
PPC_FUNC_IMPL(__imp__sub_83D69E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E90"))) PPC_WEAK_FUNC(sub_83D69E90);
PPC_FUNC_IMPL(__imp__sub_83D69E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E94"))) PPC_WEAK_FUNC(sub_83D69E94);
PPC_FUNC_IMPL(__imp__sub_83D69E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69E98"))) PPC_WEAK_FUNC(sub_83D69E98);
PPC_FUNC_IMPL(__imp__sub_83D69E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69E9C"))) PPC_WEAK_FUNC(sub_83D69E9C);
PPC_FUNC_IMPL(__imp__sub_83D69E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EA0"))) PPC_WEAK_FUNC(sub_83D69EA0);
PPC_FUNC_IMPL(__imp__sub_83D69EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EA4"))) PPC_WEAK_FUNC(sub_83D69EA4);
PPC_FUNC_IMPL(__imp__sub_83D69EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EA8"))) PPC_WEAK_FUNC(sub_83D69EA8);
PPC_FUNC_IMPL(__imp__sub_83D69EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EAC"))) PPC_WEAK_FUNC(sub_83D69EAC);
PPC_FUNC_IMPL(__imp__sub_83D69EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EB0"))) PPC_WEAK_FUNC(sub_83D69EB0);
PPC_FUNC_IMPL(__imp__sub_83D69EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EB4"))) PPC_WEAK_FUNC(sub_83D69EB4);
PPC_FUNC_IMPL(__imp__sub_83D69EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EB8"))) PPC_WEAK_FUNC(sub_83D69EB8);
PPC_FUNC_IMPL(__imp__sub_83D69EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EBC"))) PPC_WEAK_FUNC(sub_83D69EBC);
PPC_FUNC_IMPL(__imp__sub_83D69EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EC0"))) PPC_WEAK_FUNC(sub_83D69EC0);
PPC_FUNC_IMPL(__imp__sub_83D69EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11764
	ctx.r3.s64 = ctx.r11.s64 + -11764;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69ECC"))) PPC_WEAK_FUNC(sub_83D69ECC);
PPC_FUNC_IMPL(__imp__sub_83D69ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69ED0"))) PPC_WEAK_FUNC(sub_83D69ED0);
PPC_FUNC_IMPL(__imp__sub_83D69ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69ED4"))) PPC_WEAK_FUNC(sub_83D69ED4);
PPC_FUNC_IMPL(__imp__sub_83D69ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69ED8"))) PPC_WEAK_FUNC(sub_83D69ED8);
PPC_FUNC_IMPL(__imp__sub_83D69ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EDC"))) PPC_WEAK_FUNC(sub_83D69EDC);
PPC_FUNC_IMPL(__imp__sub_83D69EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EE0"))) PPC_WEAK_FUNC(sub_83D69EE0);
PPC_FUNC_IMPL(__imp__sub_83D69EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EE4"))) PPC_WEAK_FUNC(sub_83D69EE4);
PPC_FUNC_IMPL(__imp__sub_83D69EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EE8"))) PPC_WEAK_FUNC(sub_83D69EE8);
PPC_FUNC_IMPL(__imp__sub_83D69EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EEC"))) PPC_WEAK_FUNC(sub_83D69EEC);
PPC_FUNC_IMPL(__imp__sub_83D69EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EF0"))) PPC_WEAK_FUNC(sub_83D69EF0);
PPC_FUNC_IMPL(__imp__sub_83D69EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EF4"))) PPC_WEAK_FUNC(sub_83D69EF4);
PPC_FUNC_IMPL(__imp__sub_83D69EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69EF8"))) PPC_WEAK_FUNC(sub_83D69EF8);
PPC_FUNC_IMPL(__imp__sub_83D69EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69EFC"))) PPC_WEAK_FUNC(sub_83D69EFC);
PPC_FUNC_IMPL(__imp__sub_83D69EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F00"))) PPC_WEAK_FUNC(sub_83D69F00);
PPC_FUNC_IMPL(__imp__sub_83D69F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F04"))) PPC_WEAK_FUNC(sub_83D69F04);
PPC_FUNC_IMPL(__imp__sub_83D69F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F08"))) PPC_WEAK_FUNC(sub_83D69F08);
PPC_FUNC_IMPL(__imp__sub_83D69F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F0C"))) PPC_WEAK_FUNC(sub_83D69F0C);
PPC_FUNC_IMPL(__imp__sub_83D69F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F10"))) PPC_WEAK_FUNC(sub_83D69F10);
PPC_FUNC_IMPL(__imp__sub_83D69F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F14"))) PPC_WEAK_FUNC(sub_83D69F14);
PPC_FUNC_IMPL(__imp__sub_83D69F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F18"))) PPC_WEAK_FUNC(sub_83D69F18);
PPC_FUNC_IMPL(__imp__sub_83D69F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F1C"))) PPC_WEAK_FUNC(sub_83D69F1C);
PPC_FUNC_IMPL(__imp__sub_83D69F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F20"))) PPC_WEAK_FUNC(sub_83D69F20);
PPC_FUNC_IMPL(__imp__sub_83D69F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F24"))) PPC_WEAK_FUNC(sub_83D69F24);
PPC_FUNC_IMPL(__imp__sub_83D69F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F28"))) PPC_WEAK_FUNC(sub_83D69F28);
PPC_FUNC_IMPL(__imp__sub_83D69F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F2C"))) PPC_WEAK_FUNC(sub_83D69F2C);
PPC_FUNC_IMPL(__imp__sub_83D69F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F30"))) PPC_WEAK_FUNC(sub_83D69F30);
PPC_FUNC_IMPL(__imp__sub_83D69F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-11756
	ctx.r3.s64 = ctx.r11.s64 + -11756;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D69F3C"))) PPC_WEAK_FUNC(sub_83D69F3C);
PPC_FUNC_IMPL(__imp__sub_83D69F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F40"))) PPC_WEAK_FUNC(sub_83D69F40);
PPC_FUNC_IMPL(__imp__sub_83D69F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F44"))) PPC_WEAK_FUNC(sub_83D69F44);
PPC_FUNC_IMPL(__imp__sub_83D69F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F48"))) PPC_WEAK_FUNC(sub_83D69F48);
PPC_FUNC_IMPL(__imp__sub_83D69F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F4C"))) PPC_WEAK_FUNC(sub_83D69F4C);
PPC_FUNC_IMPL(__imp__sub_83D69F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D69F50"))) PPC_WEAK_FUNC(sub_83D69F50);
PPC_FUNC_IMPL(__imp__sub_83D69F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D69F54"))) PPC_WEAK_FUNC(sub_83D69F54);
PPC_FUNC_IMPL(__imp__sub_83D69F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

