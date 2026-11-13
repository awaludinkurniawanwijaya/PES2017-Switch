#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D1ED10"))) PPC_WEAK_FUNC(sub_83D1ED10);
PPC_FUNC_IMPL(__imp__sub_83D1ED10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED14"))) PPC_WEAK_FUNC(sub_83D1ED14);
PPC_FUNC_IMPL(__imp__sub_83D1ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED18"))) PPC_WEAK_FUNC(sub_83D1ED18);
PPC_FUNC_IMPL(__imp__sub_83D1ED18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED1C"))) PPC_WEAK_FUNC(sub_83D1ED1C);
PPC_FUNC_IMPL(__imp__sub_83D1ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED20"))) PPC_WEAK_FUNC(sub_83D1ED20);
PPC_FUNC_IMPL(__imp__sub_83D1ED20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED24"))) PPC_WEAK_FUNC(sub_83D1ED24);
PPC_FUNC_IMPL(__imp__sub_83D1ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED28"))) PPC_WEAK_FUNC(sub_83D1ED28);
PPC_FUNC_IMPL(__imp__sub_83D1ED28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED2C"))) PPC_WEAK_FUNC(sub_83D1ED2C);
PPC_FUNC_IMPL(__imp__sub_83D1ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED30"))) PPC_WEAK_FUNC(sub_83D1ED30);
PPC_FUNC_IMPL(__imp__sub_83D1ED30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED34"))) PPC_WEAK_FUNC(sub_83D1ED34);
PPC_FUNC_IMPL(__imp__sub_83D1ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED38"))) PPC_WEAK_FUNC(sub_83D1ED38);
PPC_FUNC_IMPL(__imp__sub_83D1ED38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED3C"))) PPC_WEAK_FUNC(sub_83D1ED3C);
PPC_FUNC_IMPL(__imp__sub_83D1ED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED40"))) PPC_WEAK_FUNC(sub_83D1ED40);
PPC_FUNC_IMPL(__imp__sub_83D1ED40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1ED4C"))) PPC_WEAK_FUNC(sub_83D1ED4C);
PPC_FUNC_IMPL(__imp__sub_83D1ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED50"))) PPC_WEAK_FUNC(sub_83D1ED50);
PPC_FUNC_IMPL(__imp__sub_83D1ED50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED54"))) PPC_WEAK_FUNC(sub_83D1ED54);
PPC_FUNC_IMPL(__imp__sub_83D1ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED58"))) PPC_WEAK_FUNC(sub_83D1ED58);
PPC_FUNC_IMPL(__imp__sub_83D1ED58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED5C"))) PPC_WEAK_FUNC(sub_83D1ED5C);
PPC_FUNC_IMPL(__imp__sub_83D1ED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED60"))) PPC_WEAK_FUNC(sub_83D1ED60);
PPC_FUNC_IMPL(__imp__sub_83D1ED60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ED64"))) PPC_WEAK_FUNC(sub_83D1ED64);
PPC_FUNC_IMPL(__imp__sub_83D1ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ED68"))) PPC_WEAK_FUNC(sub_83D1ED68);
PPC_FUNC_IMPL(__imp__sub_83D1ED68) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r31,r11,-760
	ctx.r31.s64 = ctx.r11.s64 + -760;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1eda0
	if (cr6.lt) goto loc_83D1EDA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1EDA0;
	sub_825952B8(ctx, base);
loc_83D1EDA0:
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

__attribute__((alias("__imp__sub_83D1EDCC"))) PPC_WEAK_FUNC(sub_83D1EDCC);
PPC_FUNC_IMPL(__imp__sub_83D1EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EDD0"))) PPC_WEAK_FUNC(sub_83D1EDD0);
PPC_FUNC_IMPL(__imp__sub_83D1EDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1EDD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r31,r11,988
	ctx.r31.s64 = ctx.r11.s64 + 988;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1EDF8:
	// addi r31,r31,-60
	ctx.r31.s64 = ctx.r31.s64 + -60;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ee18
	if (cr6.lt) goto loc_83D1EE18;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1EE18;
	sub_825952B8(ctx, base);
loc_83D1EE18:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ee40
	if (cr6.lt) goto loc_83D1EE40;
	// lwz r4,-28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1EE40;
	sub_825952B8(ctx, base);
loc_83D1EE40:
	// stw r28,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stb r30,-28(r31)
	PPC_STORE_U8(ctx.r31.u32 + -28, ctx.r30.u8);
	// bge 0x83d1edf8
	if (!cr0.lt) goto loc_83D1EDF8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1EE5C"))) PPC_WEAK_FUNC(sub_83D1EE5C);
PPC_FUNC_IMPL(__imp__sub_83D1EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE60"))) PPC_WEAK_FUNC(sub_83D1EE60);
PPC_FUNC_IMPL(__imp__sub_83D1EE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE64"))) PPC_WEAK_FUNC(sub_83D1EE64);
PPC_FUNC_IMPL(__imp__sub_83D1EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE68"))) PPC_WEAK_FUNC(sub_83D1EE68);
PPC_FUNC_IMPL(__imp__sub_83D1EE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE6C"))) PPC_WEAK_FUNC(sub_83D1EE6C);
PPC_FUNC_IMPL(__imp__sub_83D1EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE70"))) PPC_WEAK_FUNC(sub_83D1EE70);
PPC_FUNC_IMPL(__imp__sub_83D1EE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE74"))) PPC_WEAK_FUNC(sub_83D1EE74);
PPC_FUNC_IMPL(__imp__sub_83D1EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE78"))) PPC_WEAK_FUNC(sub_83D1EE78);
PPC_FUNC_IMPL(__imp__sub_83D1EE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE7C"))) PPC_WEAK_FUNC(sub_83D1EE7C);
PPC_FUNC_IMPL(__imp__sub_83D1EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE80"))) PPC_WEAK_FUNC(sub_83D1EE80);
PPC_FUNC_IMPL(__imp__sub_83D1EE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE84"))) PPC_WEAK_FUNC(sub_83D1EE84);
PPC_FUNC_IMPL(__imp__sub_83D1EE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE88"))) PPC_WEAK_FUNC(sub_83D1EE88);
PPC_FUNC_IMPL(__imp__sub_83D1EE88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE8C"))) PPC_WEAK_FUNC(sub_83D1EE8C);
PPC_FUNC_IMPL(__imp__sub_83D1EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE90"))) PPC_WEAK_FUNC(sub_83D1EE90);
PPC_FUNC_IMPL(__imp__sub_83D1EE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE94"))) PPC_WEAK_FUNC(sub_83D1EE94);
PPC_FUNC_IMPL(__imp__sub_83D1EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EE98"))) PPC_WEAK_FUNC(sub_83D1EE98);
PPC_FUNC_IMPL(__imp__sub_83D1EE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EE9C"))) PPC_WEAK_FUNC(sub_83D1EE9C);
PPC_FUNC_IMPL(__imp__sub_83D1EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEA0"))) PPC_WEAK_FUNC(sub_83D1EEA0);
PPC_FUNC_IMPL(__imp__sub_83D1EEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEA4"))) PPC_WEAK_FUNC(sub_83D1EEA4);
PPC_FUNC_IMPL(__imp__sub_83D1EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEA8"))) PPC_WEAK_FUNC(sub_83D1EEA8);
PPC_FUNC_IMPL(__imp__sub_83D1EEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEAC"))) PPC_WEAK_FUNC(sub_83D1EEAC);
PPC_FUNC_IMPL(__imp__sub_83D1EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEB0"))) PPC_WEAK_FUNC(sub_83D1EEB0);
PPC_FUNC_IMPL(__imp__sub_83D1EEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEB4"))) PPC_WEAK_FUNC(sub_83D1EEB4);
PPC_FUNC_IMPL(__imp__sub_83D1EEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEB8"))) PPC_WEAK_FUNC(sub_83D1EEB8);
PPC_FUNC_IMPL(__imp__sub_83D1EEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEBC"))) PPC_WEAK_FUNC(sub_83D1EEBC);
PPC_FUNC_IMPL(__imp__sub_83D1EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEC0"))) PPC_WEAK_FUNC(sub_83D1EEC0);
PPC_FUNC_IMPL(__imp__sub_83D1EEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1EECC"))) PPC_WEAK_FUNC(sub_83D1EECC);
PPC_FUNC_IMPL(__imp__sub_83D1EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EED0"))) PPC_WEAK_FUNC(sub_83D1EED0);
PPC_FUNC_IMPL(__imp__sub_83D1EED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EED4"))) PPC_WEAK_FUNC(sub_83D1EED4);
PPC_FUNC_IMPL(__imp__sub_83D1EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EED8"))) PPC_WEAK_FUNC(sub_83D1EED8);
PPC_FUNC_IMPL(__imp__sub_83D1EED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEDC"))) PPC_WEAK_FUNC(sub_83D1EEDC);
PPC_FUNC_IMPL(__imp__sub_83D1EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEE0"))) PPC_WEAK_FUNC(sub_83D1EEE0);
PPC_FUNC_IMPL(__imp__sub_83D1EEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEE4"))) PPC_WEAK_FUNC(sub_83D1EEE4);
PPC_FUNC_IMPL(__imp__sub_83D1EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEE8"))) PPC_WEAK_FUNC(sub_83D1EEE8);
PPC_FUNC_IMPL(__imp__sub_83D1EEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEEC"))) PPC_WEAK_FUNC(sub_83D1EEEC);
PPC_FUNC_IMPL(__imp__sub_83D1EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEF0"))) PPC_WEAK_FUNC(sub_83D1EEF0);
PPC_FUNC_IMPL(__imp__sub_83D1EEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEF4"))) PPC_WEAK_FUNC(sub_83D1EEF4);
PPC_FUNC_IMPL(__imp__sub_83D1EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EEF8"))) PPC_WEAK_FUNC(sub_83D1EEF8);
PPC_FUNC_IMPL(__imp__sub_83D1EEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EEFC"))) PPC_WEAK_FUNC(sub_83D1EEFC);
PPC_FUNC_IMPL(__imp__sub_83D1EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF00"))) PPC_WEAK_FUNC(sub_83D1EF00);
PPC_FUNC_IMPL(__imp__sub_83D1EF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF04"))) PPC_WEAK_FUNC(sub_83D1EF04);
PPC_FUNC_IMPL(__imp__sub_83D1EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF08"))) PPC_WEAK_FUNC(sub_83D1EF08);
PPC_FUNC_IMPL(__imp__sub_83D1EF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF0C"))) PPC_WEAK_FUNC(sub_83D1EF0C);
PPC_FUNC_IMPL(__imp__sub_83D1EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF10"))) PPC_WEAK_FUNC(sub_83D1EF10);
PPC_FUNC_IMPL(__imp__sub_83D1EF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF14"))) PPC_WEAK_FUNC(sub_83D1EF14);
PPC_FUNC_IMPL(__imp__sub_83D1EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF18"))) PPC_WEAK_FUNC(sub_83D1EF18);
PPC_FUNC_IMPL(__imp__sub_83D1EF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF1C"))) PPC_WEAK_FUNC(sub_83D1EF1C);
PPC_FUNC_IMPL(__imp__sub_83D1EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF20"))) PPC_WEAK_FUNC(sub_83D1EF20);
PPC_FUNC_IMPL(__imp__sub_83D1EF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF24"))) PPC_WEAK_FUNC(sub_83D1EF24);
PPC_FUNC_IMPL(__imp__sub_83D1EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF28"))) PPC_WEAK_FUNC(sub_83D1EF28);
PPC_FUNC_IMPL(__imp__sub_83D1EF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF2C"))) PPC_WEAK_FUNC(sub_83D1EF2C);
PPC_FUNC_IMPL(__imp__sub_83D1EF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF30"))) PPC_WEAK_FUNC(sub_83D1EF30);
PPC_FUNC_IMPL(__imp__sub_83D1EF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF34"))) PPC_WEAK_FUNC(sub_83D1EF34);
PPC_FUNC_IMPL(__imp__sub_83D1EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF38"))) PPC_WEAK_FUNC(sub_83D1EF38);
PPC_FUNC_IMPL(__imp__sub_83D1EF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF3C"))) PPC_WEAK_FUNC(sub_83D1EF3C);
PPC_FUNC_IMPL(__imp__sub_83D1EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF40"))) PPC_WEAK_FUNC(sub_83D1EF40);
PPC_FUNC_IMPL(__imp__sub_83D1EF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF44"))) PPC_WEAK_FUNC(sub_83D1EF44);
PPC_FUNC_IMPL(__imp__sub_83D1EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF48"))) PPC_WEAK_FUNC(sub_83D1EF48);
PPC_FUNC_IMPL(__imp__sub_83D1EF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1EF54"))) PPC_WEAK_FUNC(sub_83D1EF54);
PPC_FUNC_IMPL(__imp__sub_83D1EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF58"))) PPC_WEAK_FUNC(sub_83D1EF58);
PPC_FUNC_IMPL(__imp__sub_83D1EF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF5C"))) PPC_WEAK_FUNC(sub_83D1EF5C);
PPC_FUNC_IMPL(__imp__sub_83D1EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF60"))) PPC_WEAK_FUNC(sub_83D1EF60);
PPC_FUNC_IMPL(__imp__sub_83D1EF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF64"))) PPC_WEAK_FUNC(sub_83D1EF64);
PPC_FUNC_IMPL(__imp__sub_83D1EF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF68"))) PPC_WEAK_FUNC(sub_83D1EF68);
PPC_FUNC_IMPL(__imp__sub_83D1EF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF6C"))) PPC_WEAK_FUNC(sub_83D1EF6C);
PPC_FUNC_IMPL(__imp__sub_83D1EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF70"))) PPC_WEAK_FUNC(sub_83D1EF70);
PPC_FUNC_IMPL(__imp__sub_83D1EF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF74"))) PPC_WEAK_FUNC(sub_83D1EF74);
PPC_FUNC_IMPL(__imp__sub_83D1EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF78"))) PPC_WEAK_FUNC(sub_83D1EF78);
PPC_FUNC_IMPL(__imp__sub_83D1EF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF7C"))) PPC_WEAK_FUNC(sub_83D1EF7C);
PPC_FUNC_IMPL(__imp__sub_83D1EF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF80"))) PPC_WEAK_FUNC(sub_83D1EF80);
PPC_FUNC_IMPL(__imp__sub_83D1EF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF84"))) PPC_WEAK_FUNC(sub_83D1EF84);
PPC_FUNC_IMPL(__imp__sub_83D1EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF88"))) PPC_WEAK_FUNC(sub_83D1EF88);
PPC_FUNC_IMPL(__imp__sub_83D1EF88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF8C"))) PPC_WEAK_FUNC(sub_83D1EF8C);
PPC_FUNC_IMPL(__imp__sub_83D1EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF90"))) PPC_WEAK_FUNC(sub_83D1EF90);
PPC_FUNC_IMPL(__imp__sub_83D1EF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF94"))) PPC_WEAK_FUNC(sub_83D1EF94);
PPC_FUNC_IMPL(__imp__sub_83D1EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EF98"))) PPC_WEAK_FUNC(sub_83D1EF98);
PPC_FUNC_IMPL(__imp__sub_83D1EF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EF9C"))) PPC_WEAK_FUNC(sub_83D1EF9C);
PPC_FUNC_IMPL(__imp__sub_83D1EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFA0"))) PPC_WEAK_FUNC(sub_83D1EFA0);
PPC_FUNC_IMPL(__imp__sub_83D1EFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFA4"))) PPC_WEAK_FUNC(sub_83D1EFA4);
PPC_FUNC_IMPL(__imp__sub_83D1EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFA8"))) PPC_WEAK_FUNC(sub_83D1EFA8);
PPC_FUNC_IMPL(__imp__sub_83D1EFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFAC"))) PPC_WEAK_FUNC(sub_83D1EFAC);
PPC_FUNC_IMPL(__imp__sub_83D1EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFB0"))) PPC_WEAK_FUNC(sub_83D1EFB0);
PPC_FUNC_IMPL(__imp__sub_83D1EFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFB4"))) PPC_WEAK_FUNC(sub_83D1EFB4);
PPC_FUNC_IMPL(__imp__sub_83D1EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFB8"))) PPC_WEAK_FUNC(sub_83D1EFB8);
PPC_FUNC_IMPL(__imp__sub_83D1EFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFBC"))) PPC_WEAK_FUNC(sub_83D1EFBC);
PPC_FUNC_IMPL(__imp__sub_83D1EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFC0"))) PPC_WEAK_FUNC(sub_83D1EFC0);
PPC_FUNC_IMPL(__imp__sub_83D1EFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFC4"))) PPC_WEAK_FUNC(sub_83D1EFC4);
PPC_FUNC_IMPL(__imp__sub_83D1EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFC8"))) PPC_WEAK_FUNC(sub_83D1EFC8);
PPC_FUNC_IMPL(__imp__sub_83D1EFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFCC"))) PPC_WEAK_FUNC(sub_83D1EFCC);
PPC_FUNC_IMPL(__imp__sub_83D1EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFD0"))) PPC_WEAK_FUNC(sub_83D1EFD0);
PPC_FUNC_IMPL(__imp__sub_83D1EFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1EFDC"))) PPC_WEAK_FUNC(sub_83D1EFDC);
PPC_FUNC_IMPL(__imp__sub_83D1EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFE0"))) PPC_WEAK_FUNC(sub_83D1EFE0);
PPC_FUNC_IMPL(__imp__sub_83D1EFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFE4"))) PPC_WEAK_FUNC(sub_83D1EFE4);
PPC_FUNC_IMPL(__imp__sub_83D1EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFE8"))) PPC_WEAK_FUNC(sub_83D1EFE8);
PPC_FUNC_IMPL(__imp__sub_83D1EFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFEC"))) PPC_WEAK_FUNC(sub_83D1EFEC);
PPC_FUNC_IMPL(__imp__sub_83D1EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFF0"))) PPC_WEAK_FUNC(sub_83D1EFF0);
PPC_FUNC_IMPL(__imp__sub_83D1EFF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFF4"))) PPC_WEAK_FUNC(sub_83D1EFF4);
PPC_FUNC_IMPL(__imp__sub_83D1EFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1EFF8"))) PPC_WEAK_FUNC(sub_83D1EFF8);
PPC_FUNC_IMPL(__imp__sub_83D1EFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1EFFC"))) PPC_WEAK_FUNC(sub_83D1EFFC);
PPC_FUNC_IMPL(__imp__sub_83D1EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F000"))) PPC_WEAK_FUNC(sub_83D1F000);
PPC_FUNC_IMPL(__imp__sub_83D1F000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F004"))) PPC_WEAK_FUNC(sub_83D1F004);
PPC_FUNC_IMPL(__imp__sub_83D1F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F008"))) PPC_WEAK_FUNC(sub_83D1F008);
PPC_FUNC_IMPL(__imp__sub_83D1F008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F00C"))) PPC_WEAK_FUNC(sub_83D1F00C);
PPC_FUNC_IMPL(__imp__sub_83D1F00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F010"))) PPC_WEAK_FUNC(sub_83D1F010);
PPC_FUNC_IMPL(__imp__sub_83D1F010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F014"))) PPC_WEAK_FUNC(sub_83D1F014);
PPC_FUNC_IMPL(__imp__sub_83D1F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F018"))) PPC_WEAK_FUNC(sub_83D1F018);
PPC_FUNC_IMPL(__imp__sub_83D1F018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F01C"))) PPC_WEAK_FUNC(sub_83D1F01C);
PPC_FUNC_IMPL(__imp__sub_83D1F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F020"))) PPC_WEAK_FUNC(sub_83D1F020);
PPC_FUNC_IMPL(__imp__sub_83D1F020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F024"))) PPC_WEAK_FUNC(sub_83D1F024);
PPC_FUNC_IMPL(__imp__sub_83D1F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F028"))) PPC_WEAK_FUNC(sub_83D1F028);
PPC_FUNC_IMPL(__imp__sub_83D1F028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F02C"))) PPC_WEAK_FUNC(sub_83D1F02C);
PPC_FUNC_IMPL(__imp__sub_83D1F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F030"))) PPC_WEAK_FUNC(sub_83D1F030);
PPC_FUNC_IMPL(__imp__sub_83D1F030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F034"))) PPC_WEAK_FUNC(sub_83D1F034);
PPC_FUNC_IMPL(__imp__sub_83D1F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F038"))) PPC_WEAK_FUNC(sub_83D1F038);
PPC_FUNC_IMPL(__imp__sub_83D1F038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F03C"))) PPC_WEAK_FUNC(sub_83D1F03C);
PPC_FUNC_IMPL(__imp__sub_83D1F03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F040"))) PPC_WEAK_FUNC(sub_83D1F040);
PPC_FUNC_IMPL(__imp__sub_83D1F040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F044"))) PPC_WEAK_FUNC(sub_83D1F044);
PPC_FUNC_IMPL(__imp__sub_83D1F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F048"))) PPC_WEAK_FUNC(sub_83D1F048);
PPC_FUNC_IMPL(__imp__sub_83D1F048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F04C"))) PPC_WEAK_FUNC(sub_83D1F04C);
PPC_FUNC_IMPL(__imp__sub_83D1F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F050"))) PPC_WEAK_FUNC(sub_83D1F050);
PPC_FUNC_IMPL(__imp__sub_83D1F050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F054"))) PPC_WEAK_FUNC(sub_83D1F054);
PPC_FUNC_IMPL(__imp__sub_83D1F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F058"))) PPC_WEAK_FUNC(sub_83D1F058);
PPC_FUNC_IMPL(__imp__sub_83D1F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1F064"))) PPC_WEAK_FUNC(sub_83D1F064);
PPC_FUNC_IMPL(__imp__sub_83D1F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F068"))) PPC_WEAK_FUNC(sub_83D1F068);
PPC_FUNC_IMPL(__imp__sub_83D1F068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F06C"))) PPC_WEAK_FUNC(sub_83D1F06C);
PPC_FUNC_IMPL(__imp__sub_83D1F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F070"))) PPC_WEAK_FUNC(sub_83D1F070);
PPC_FUNC_IMPL(__imp__sub_83D1F070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F074"))) PPC_WEAK_FUNC(sub_83D1F074);
PPC_FUNC_IMPL(__imp__sub_83D1F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F078"))) PPC_WEAK_FUNC(sub_83D1F078);
PPC_FUNC_IMPL(__imp__sub_83D1F078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F07C"))) PPC_WEAK_FUNC(sub_83D1F07C);
PPC_FUNC_IMPL(__imp__sub_83D1F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F080"))) PPC_WEAK_FUNC(sub_83D1F080);
PPC_FUNC_IMPL(__imp__sub_83D1F080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F084"))) PPC_WEAK_FUNC(sub_83D1F084);
PPC_FUNC_IMPL(__imp__sub_83D1F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F088"))) PPC_WEAK_FUNC(sub_83D1F088);
PPC_FUNC_IMPL(__imp__sub_83D1F088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F08C"))) PPC_WEAK_FUNC(sub_83D1F08C);
PPC_FUNC_IMPL(__imp__sub_83D1F08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F090"))) PPC_WEAK_FUNC(sub_83D1F090);
PPC_FUNC_IMPL(__imp__sub_83D1F090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F094"))) PPC_WEAK_FUNC(sub_83D1F094);
PPC_FUNC_IMPL(__imp__sub_83D1F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F098"))) PPC_WEAK_FUNC(sub_83D1F098);
PPC_FUNC_IMPL(__imp__sub_83D1F098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F09C"))) PPC_WEAK_FUNC(sub_83D1F09C);
PPC_FUNC_IMPL(__imp__sub_83D1F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0A0"))) PPC_WEAK_FUNC(sub_83D1F0A0);
PPC_FUNC_IMPL(__imp__sub_83D1F0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0A4"))) PPC_WEAK_FUNC(sub_83D1F0A4);
PPC_FUNC_IMPL(__imp__sub_83D1F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0A8"))) PPC_WEAK_FUNC(sub_83D1F0A8);
PPC_FUNC_IMPL(__imp__sub_83D1F0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0AC"))) PPC_WEAK_FUNC(sub_83D1F0AC);
PPC_FUNC_IMPL(__imp__sub_83D1F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0B0"))) PPC_WEAK_FUNC(sub_83D1F0B0);
PPC_FUNC_IMPL(__imp__sub_83D1F0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0B4"))) PPC_WEAK_FUNC(sub_83D1F0B4);
PPC_FUNC_IMPL(__imp__sub_83D1F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0B8"))) PPC_WEAK_FUNC(sub_83D1F0B8);
PPC_FUNC_IMPL(__imp__sub_83D1F0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0BC"))) PPC_WEAK_FUNC(sub_83D1F0BC);
PPC_FUNC_IMPL(__imp__sub_83D1F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0C0"))) PPC_WEAK_FUNC(sub_83D1F0C0);
PPC_FUNC_IMPL(__imp__sub_83D1F0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0C4"))) PPC_WEAK_FUNC(sub_83D1F0C4);
PPC_FUNC_IMPL(__imp__sub_83D1F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0C8"))) PPC_WEAK_FUNC(sub_83D1F0C8);
PPC_FUNC_IMPL(__imp__sub_83D1F0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0CC"))) PPC_WEAK_FUNC(sub_83D1F0CC);
PPC_FUNC_IMPL(__imp__sub_83D1F0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0D0"))) PPC_WEAK_FUNC(sub_83D1F0D0);
PPC_FUNC_IMPL(__imp__sub_83D1F0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0D4"))) PPC_WEAK_FUNC(sub_83D1F0D4);
PPC_FUNC_IMPL(__imp__sub_83D1F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0D8"))) PPC_WEAK_FUNC(sub_83D1F0D8);
PPC_FUNC_IMPL(__imp__sub_83D1F0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0DC"))) PPC_WEAK_FUNC(sub_83D1F0DC);
PPC_FUNC_IMPL(__imp__sub_83D1F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0E0"))) PPC_WEAK_FUNC(sub_83D1F0E0);
PPC_FUNC_IMPL(__imp__sub_83D1F0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1F0EC"))) PPC_WEAK_FUNC(sub_83D1F0EC);
PPC_FUNC_IMPL(__imp__sub_83D1F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0F0"))) PPC_WEAK_FUNC(sub_83D1F0F0);
PPC_FUNC_IMPL(__imp__sub_83D1F0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0F4"))) PPC_WEAK_FUNC(sub_83D1F0F4);
PPC_FUNC_IMPL(__imp__sub_83D1F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F0F8"))) PPC_WEAK_FUNC(sub_83D1F0F8);
PPC_FUNC_IMPL(__imp__sub_83D1F0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F0FC"))) PPC_WEAK_FUNC(sub_83D1F0FC);
PPC_FUNC_IMPL(__imp__sub_83D1F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F100"))) PPC_WEAK_FUNC(sub_83D1F100);
PPC_FUNC_IMPL(__imp__sub_83D1F100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F104"))) PPC_WEAK_FUNC(sub_83D1F104);
PPC_FUNC_IMPL(__imp__sub_83D1F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F108"))) PPC_WEAK_FUNC(sub_83D1F108);
PPC_FUNC_IMPL(__imp__sub_83D1F108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F10C"))) PPC_WEAK_FUNC(sub_83D1F10C);
PPC_FUNC_IMPL(__imp__sub_83D1F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F110"))) PPC_WEAK_FUNC(sub_83D1F110);
PPC_FUNC_IMPL(__imp__sub_83D1F110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F114"))) PPC_WEAK_FUNC(sub_83D1F114);
PPC_FUNC_IMPL(__imp__sub_83D1F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F118"))) PPC_WEAK_FUNC(sub_83D1F118);
PPC_FUNC_IMPL(__imp__sub_83D1F118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F11C"))) PPC_WEAK_FUNC(sub_83D1F11C);
PPC_FUNC_IMPL(__imp__sub_83D1F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F120"))) PPC_WEAK_FUNC(sub_83D1F120);
PPC_FUNC_IMPL(__imp__sub_83D1F120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F124"))) PPC_WEAK_FUNC(sub_83D1F124);
PPC_FUNC_IMPL(__imp__sub_83D1F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F128"))) PPC_WEAK_FUNC(sub_83D1F128);
PPC_FUNC_IMPL(__imp__sub_83D1F128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F12C"))) PPC_WEAK_FUNC(sub_83D1F12C);
PPC_FUNC_IMPL(__imp__sub_83D1F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F130"))) PPC_WEAK_FUNC(sub_83D1F130);
PPC_FUNC_IMPL(__imp__sub_83D1F130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F134"))) PPC_WEAK_FUNC(sub_83D1F134);
PPC_FUNC_IMPL(__imp__sub_83D1F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F138"))) PPC_WEAK_FUNC(sub_83D1F138);
PPC_FUNC_IMPL(__imp__sub_83D1F138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F13C"))) PPC_WEAK_FUNC(sub_83D1F13C);
PPC_FUNC_IMPL(__imp__sub_83D1F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F140"))) PPC_WEAK_FUNC(sub_83D1F140);
PPC_FUNC_IMPL(__imp__sub_83D1F140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F144"))) PPC_WEAK_FUNC(sub_83D1F144);
PPC_FUNC_IMPL(__imp__sub_83D1F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F148"))) PPC_WEAK_FUNC(sub_83D1F148);
PPC_FUNC_IMPL(__imp__sub_83D1F148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F14C"))) PPC_WEAK_FUNC(sub_83D1F14C);
PPC_FUNC_IMPL(__imp__sub_83D1F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F150"))) PPC_WEAK_FUNC(sub_83D1F150);
PPC_FUNC_IMPL(__imp__sub_83D1F150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F154"))) PPC_WEAK_FUNC(sub_83D1F154);
PPC_FUNC_IMPL(__imp__sub_83D1F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F158"))) PPC_WEAK_FUNC(sub_83D1F158);
PPC_FUNC_IMPL(__imp__sub_83D1F158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F15C"))) PPC_WEAK_FUNC(sub_83D1F15C);
PPC_FUNC_IMPL(__imp__sub_83D1F15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F160"))) PPC_WEAK_FUNC(sub_83D1F160);
PPC_FUNC_IMPL(__imp__sub_83D1F160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F164"))) PPC_WEAK_FUNC(sub_83D1F164);
PPC_FUNC_IMPL(__imp__sub_83D1F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F168"))) PPC_WEAK_FUNC(sub_83D1F168);
PPC_FUNC_IMPL(__imp__sub_83D1F168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2472
	ctx.r3.s64 = ctx.r11.s64 + 2472;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1F174"))) PPC_WEAK_FUNC(sub_83D1F174);
PPC_FUNC_IMPL(__imp__sub_83D1F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F178"))) PPC_WEAK_FUNC(sub_83D1F178);
PPC_FUNC_IMPL(__imp__sub_83D1F178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F17C"))) PPC_WEAK_FUNC(sub_83D1F17C);
PPC_FUNC_IMPL(__imp__sub_83D1F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F180"))) PPC_WEAK_FUNC(sub_83D1F180);
PPC_FUNC_IMPL(__imp__sub_83D1F180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F184"))) PPC_WEAK_FUNC(sub_83D1F184);
PPC_FUNC_IMPL(__imp__sub_83D1F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F188"))) PPC_WEAK_FUNC(sub_83D1F188);
PPC_FUNC_IMPL(__imp__sub_83D1F188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F18C"))) PPC_WEAK_FUNC(sub_83D1F18C);
PPC_FUNC_IMPL(__imp__sub_83D1F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F190"))) PPC_WEAK_FUNC(sub_83D1F190);
PPC_FUNC_IMPL(__imp__sub_83D1F190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F194"))) PPC_WEAK_FUNC(sub_83D1F194);
PPC_FUNC_IMPL(__imp__sub_83D1F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F198"))) PPC_WEAK_FUNC(sub_83D1F198);
PPC_FUNC_IMPL(__imp__sub_83D1F198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F19C"))) PPC_WEAK_FUNC(sub_83D1F19C);
PPC_FUNC_IMPL(__imp__sub_83D1F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1A0"))) PPC_WEAK_FUNC(sub_83D1F1A0);
PPC_FUNC_IMPL(__imp__sub_83D1F1A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1A4"))) PPC_WEAK_FUNC(sub_83D1F1A4);
PPC_FUNC_IMPL(__imp__sub_83D1F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1A8"))) PPC_WEAK_FUNC(sub_83D1F1A8);
PPC_FUNC_IMPL(__imp__sub_83D1F1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1AC"))) PPC_WEAK_FUNC(sub_83D1F1AC);
PPC_FUNC_IMPL(__imp__sub_83D1F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1B0"))) PPC_WEAK_FUNC(sub_83D1F1B0);
PPC_FUNC_IMPL(__imp__sub_83D1F1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1B4"))) PPC_WEAK_FUNC(sub_83D1F1B4);
PPC_FUNC_IMPL(__imp__sub_83D1F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1B8"))) PPC_WEAK_FUNC(sub_83D1F1B8);
PPC_FUNC_IMPL(__imp__sub_83D1F1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1BC"))) PPC_WEAK_FUNC(sub_83D1F1BC);
PPC_FUNC_IMPL(__imp__sub_83D1F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1C0"))) PPC_WEAK_FUNC(sub_83D1F1C0);
PPC_FUNC_IMPL(__imp__sub_83D1F1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1C4"))) PPC_WEAK_FUNC(sub_83D1F1C4);
PPC_FUNC_IMPL(__imp__sub_83D1F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1C8"))) PPC_WEAK_FUNC(sub_83D1F1C8);
PPC_FUNC_IMPL(__imp__sub_83D1F1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1CC"))) PPC_WEAK_FUNC(sub_83D1F1CC);
PPC_FUNC_IMPL(__imp__sub_83D1F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1D0"))) PPC_WEAK_FUNC(sub_83D1F1D0);
PPC_FUNC_IMPL(__imp__sub_83D1F1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1D4"))) PPC_WEAK_FUNC(sub_83D1F1D4);
PPC_FUNC_IMPL(__imp__sub_83D1F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1D8"))) PPC_WEAK_FUNC(sub_83D1F1D8);
PPC_FUNC_IMPL(__imp__sub_83D1F1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1DC"))) PPC_WEAK_FUNC(sub_83D1F1DC);
PPC_FUNC_IMPL(__imp__sub_83D1F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1E0"))) PPC_WEAK_FUNC(sub_83D1F1E0);
PPC_FUNC_IMPL(__imp__sub_83D1F1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1E4"))) PPC_WEAK_FUNC(sub_83D1F1E4);
PPC_FUNC_IMPL(__imp__sub_83D1F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1E8"))) PPC_WEAK_FUNC(sub_83D1F1E8);
PPC_FUNC_IMPL(__imp__sub_83D1F1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F1EC"))) PPC_WEAK_FUNC(sub_83D1F1EC);
PPC_FUNC_IMPL(__imp__sub_83D1F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F1F0"))) PPC_WEAK_FUNC(sub_83D1F1F0);
PPC_FUNC_IMPL(__imp__sub_83D1F1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1F1FC"))) PPC_WEAK_FUNC(sub_83D1F1FC);
PPC_FUNC_IMPL(__imp__sub_83D1F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F200"))) PPC_WEAK_FUNC(sub_83D1F200);
PPC_FUNC_IMPL(__imp__sub_83D1F200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F204"))) PPC_WEAK_FUNC(sub_83D1F204);
PPC_FUNC_IMPL(__imp__sub_83D1F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F208"))) PPC_WEAK_FUNC(sub_83D1F208);
PPC_FUNC_IMPL(__imp__sub_83D1F208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F20C"))) PPC_WEAK_FUNC(sub_83D1F20C);
PPC_FUNC_IMPL(__imp__sub_83D1F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F210"))) PPC_WEAK_FUNC(sub_83D1F210);
PPC_FUNC_IMPL(__imp__sub_83D1F210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F214"))) PPC_WEAK_FUNC(sub_83D1F214);
PPC_FUNC_IMPL(__imp__sub_83D1F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F218"))) PPC_WEAK_FUNC(sub_83D1F218);
PPC_FUNC_IMPL(__imp__sub_83D1F218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F21C"))) PPC_WEAK_FUNC(sub_83D1F21C);
PPC_FUNC_IMPL(__imp__sub_83D1F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F220"))) PPC_WEAK_FUNC(sub_83D1F220);
PPC_FUNC_IMPL(__imp__sub_83D1F220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F224"))) PPC_WEAK_FUNC(sub_83D1F224);
PPC_FUNC_IMPL(__imp__sub_83D1F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F228"))) PPC_WEAK_FUNC(sub_83D1F228);
PPC_FUNC_IMPL(__imp__sub_83D1F228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F22C"))) PPC_WEAK_FUNC(sub_83D1F22C);
PPC_FUNC_IMPL(__imp__sub_83D1F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1F230"))) PPC_WEAK_FUNC(sub_83D1F230);
PPC_FUNC_IMPL(__imp__sub_83D1F230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1F234"))) PPC_WEAK_FUNC(sub_83D1F234);
PPC_FUNC_IMPL(__imp__sub_83D1F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

