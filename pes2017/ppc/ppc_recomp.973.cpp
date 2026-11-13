#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CF1FB4"))) PPC_WEAK_FUNC(sub_83CF1FB4);
PPC_FUNC_IMPL(__imp__sub_83CF1FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1FB8"))) PPC_WEAK_FUNC(sub_83CF1FB8);
PPC_FUNC_IMPL(__imp__sub_83CF1FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x83328188
	sub_83328188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1FC4"))) PPC_WEAK_FUNC(sub_83CF1FC4);
PPC_FUNC_IMPL(__imp__sub_83CF1FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1FC8"))) PPC_WEAK_FUNC(sub_83CF1FC8);
PPC_FUNC_IMPL(__imp__sub_83CF1FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,-24884
	ctx.r11.s64 = ctx.r11.s64 + -24884;
	// stw r11,5576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1FDC"))) PPC_WEAK_FUNC(sub_83CF1FDC);
PPC_FUNC_IMPL(__imp__sub_83CF1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1FE0"))) PPC_WEAK_FUNC(sub_83CF1FE0);
PPC_FUNC_IMPL(__imp__sub_83CF1FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20424
	ctx.r3.s64 = ctx.r11.s64 + 20424;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1FEC"))) PPC_WEAK_FUNC(sub_83CF1FEC);
PPC_FUNC_IMPL(__imp__sub_83CF1FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1FF0"))) PPC_WEAK_FUNC(sub_83CF1FF0);
PPC_FUNC_IMPL(__imp__sub_83CF1FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1FFC"))) PPC_WEAK_FUNC(sub_83CF1FFC);
PPC_FUNC_IMPL(__imp__sub_83CF1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2000"))) PPC_WEAK_FUNC(sub_83CF2000);
PPC_FUNC_IMPL(__imp__sub_83CF2000) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r31,r11,20448
	ctx.r31.s64 = ctx.r11.s64 + 20448;
	// lwz r3,20448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20448);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf2028
	if (cr6.eq) goto loc_83CF2028;
	// bl 0x8386d088
	ctx.lr = 0x83CF2028;
	sub_8386D088(ctx, base);
loc_83CF2028:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF2054"))) PPC_WEAK_FUNC(sub_83CF2054);
PPC_FUNC_IMPL(__imp__sub_83CF2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2058"))) PPC_WEAK_FUNC(sub_83CF2058);
PPC_FUNC_IMPL(__imp__sub_83CF2058) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r31,r11,20408
	ctx.r31.s64 = ctx.r11.s64 + 20408;
	// lwz r3,20408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf2094
	if (cr6.eq) goto loc_83CF2094;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x833f4d38
	ctx.lr = 0x83CF208C;
	sub_833F4D38(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83CF2094;
	sub_8386D088(ctx, base);
loc_83CF2094:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83CF20C0"))) PPC_WEAK_FUNC(sub_83CF20C0);
PPC_FUNC_IMPL(__imp__sub_83CF20C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF20CC"))) PPC_WEAK_FUNC(sub_83CF20CC);
PPC_FUNC_IMPL(__imp__sub_83CF20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF20D0"))) PPC_WEAK_FUNC(sub_83CF20D0);
PPC_FUNC_IMPL(__imp__sub_83CF20D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF20DC"))) PPC_WEAK_FUNC(sub_83CF20DC);
PPC_FUNC_IMPL(__imp__sub_83CF20DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF20E0"))) PPC_WEAK_FUNC(sub_83CF20E0);
PPC_FUNC_IMPL(__imp__sub_83CF20E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF20EC"))) PPC_WEAK_FUNC(sub_83CF20EC);
PPC_FUNC_IMPL(__imp__sub_83CF20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF20F0"))) PPC_WEAK_FUNC(sub_83CF20F0);
PPC_FUNC_IMPL(__imp__sub_83CF20F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20468
	ctx.r3.s64 = ctx.r11.s64 + 20468;
	// b 0x824f2bb8
	sub_824F2BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2100"))) PPC_WEAK_FUNC(sub_83CF2100);
PPC_FUNC_IMPL(__imp__sub_83CF2100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x824fc298
	sub_824FC298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF210C"))) PPC_WEAK_FUNC(sub_83CF210C);
PPC_FUNC_IMPL(__imp__sub_83CF210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2110"))) PPC_WEAK_FUNC(sub_83CF2110);
PPC_FUNC_IMPL(__imp__sub_83CF2110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF211C"))) PPC_WEAK_FUNC(sub_83CF211C);
PPC_FUNC_IMPL(__imp__sub_83CF211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2120"))) PPC_WEAK_FUNC(sub_83CF2120);
PPC_FUNC_IMPL(__imp__sub_83CF2120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF212C"))) PPC_WEAK_FUNC(sub_83CF212C);
PPC_FUNC_IMPL(__imp__sub_83CF212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2130"))) PPC_WEAK_FUNC(sub_83CF2130);
PPC_FUNC_IMPL(__imp__sub_83CF2130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF213C"))) PPC_WEAK_FUNC(sub_83CF213C);
PPC_FUNC_IMPL(__imp__sub_83CF213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2140"))) PPC_WEAK_FUNC(sub_83CF2140);
PPC_FUNC_IMPL(__imp__sub_83CF2140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF214C"))) PPC_WEAK_FUNC(sub_83CF214C);
PPC_FUNC_IMPL(__imp__sub_83CF214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2150"))) PPC_WEAK_FUNC(sub_83CF2150);
PPC_FUNC_IMPL(__imp__sub_83CF2150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF215C"))) PPC_WEAK_FUNC(sub_83CF215C);
PPC_FUNC_IMPL(__imp__sub_83CF215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2160"))) PPC_WEAK_FUNC(sub_83CF2160);
PPC_FUNC_IMPL(__imp__sub_83CF2160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF216C"))) PPC_WEAK_FUNC(sub_83CF216C);
PPC_FUNC_IMPL(__imp__sub_83CF216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2170"))) PPC_WEAK_FUNC(sub_83CF2170);
PPC_FUNC_IMPL(__imp__sub_83CF2170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF217C"))) PPC_WEAK_FUNC(sub_83CF217C);
PPC_FUNC_IMPL(__imp__sub_83CF217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2180"))) PPC_WEAK_FUNC(sub_83CF2180);
PPC_FUNC_IMPL(__imp__sub_83CF2180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF218C"))) PPC_WEAK_FUNC(sub_83CF218C);
PPC_FUNC_IMPL(__imp__sub_83CF218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2190"))) PPC_WEAK_FUNC(sub_83CF2190);
PPC_FUNC_IMPL(__imp__sub_83CF2190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF219C"))) PPC_WEAK_FUNC(sub_83CF219C);
PPC_FUNC_IMPL(__imp__sub_83CF219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21A0"))) PPC_WEAK_FUNC(sub_83CF21A0);
PPC_FUNC_IMPL(__imp__sub_83CF21A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF21AC"))) PPC_WEAK_FUNC(sub_83CF21AC);
PPC_FUNC_IMPL(__imp__sub_83CF21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21B0"))) PPC_WEAK_FUNC(sub_83CF21B0);
PPC_FUNC_IMPL(__imp__sub_83CF21B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,21428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF21C4"))) PPC_WEAK_FUNC(sub_83CF21C4);
PPC_FUNC_IMPL(__imp__sub_83CF21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21C8"))) PPC_WEAK_FUNC(sub_83CF21C8);
PPC_FUNC_IMPL(__imp__sub_83CF21C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF21D4"))) PPC_WEAK_FUNC(sub_83CF21D4);
PPC_FUNC_IMPL(__imp__sub_83CF21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21D8"))) PPC_WEAK_FUNC(sub_83CF21D8);
PPC_FUNC_IMPL(__imp__sub_83CF21D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF21E4"))) PPC_WEAK_FUNC(sub_83CF21E4);
PPC_FUNC_IMPL(__imp__sub_83CF21E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21E8"))) PPC_WEAK_FUNC(sub_83CF21E8);
PPC_FUNC_IMPL(__imp__sub_83CF21E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22128
	ctx.r3.s64 = ctx.r11.s64 + 22128;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF21F4"))) PPC_WEAK_FUNC(sub_83CF21F4);
PPC_FUNC_IMPL(__imp__sub_83CF21F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF21F8"))) PPC_WEAK_FUNC(sub_83CF21F8);
PPC_FUNC_IMPL(__imp__sub_83CF21F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2204"))) PPC_WEAK_FUNC(sub_83CF2204);
PPC_FUNC_IMPL(__imp__sub_83CF2204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2208"))) PPC_WEAK_FUNC(sub_83CF2208);
PPC_FUNC_IMPL(__imp__sub_83CF2208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2214"))) PPC_WEAK_FUNC(sub_83CF2214);
PPC_FUNC_IMPL(__imp__sub_83CF2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2218"))) PPC_WEAK_FUNC(sub_83CF2218);
PPC_FUNC_IMPL(__imp__sub_83CF2218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2224"))) PPC_WEAK_FUNC(sub_83CF2224);
PPC_FUNC_IMPL(__imp__sub_83CF2224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2228"))) PPC_WEAK_FUNC(sub_83CF2228);
PPC_FUNC_IMPL(__imp__sub_83CF2228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2234"))) PPC_WEAK_FUNC(sub_83CF2234);
PPC_FUNC_IMPL(__imp__sub_83CF2234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2238"))) PPC_WEAK_FUNC(sub_83CF2238);
PPC_FUNC_IMPL(__imp__sub_83CF2238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22096
	ctx.r3.s64 = ctx.r11.s64 + 22096;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2244"))) PPC_WEAK_FUNC(sub_83CF2244);
PPC_FUNC_IMPL(__imp__sub_83CF2244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2248"))) PPC_WEAK_FUNC(sub_83CF2248);
PPC_FUNC_IMPL(__imp__sub_83CF2248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2254"))) PPC_WEAK_FUNC(sub_83CF2254);
PPC_FUNC_IMPL(__imp__sub_83CF2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2258"))) PPC_WEAK_FUNC(sub_83CF2258);
PPC_FUNC_IMPL(__imp__sub_83CF2258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2264"))) PPC_WEAK_FUNC(sub_83CF2264);
PPC_FUNC_IMPL(__imp__sub_83CF2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2268"))) PPC_WEAK_FUNC(sub_83CF2268);
PPC_FUNC_IMPL(__imp__sub_83CF2268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22456
	ctx.r3.s64 = ctx.r11.s64 + 22456;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2274"))) PPC_WEAK_FUNC(sub_83CF2274);
PPC_FUNC_IMPL(__imp__sub_83CF2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2278"))) PPC_WEAK_FUNC(sub_83CF2278);
PPC_FUNC_IMPL(__imp__sub_83CF2278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22712
	ctx.r3.s64 = ctx.r11.s64 + 22712;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2284"))) PPC_WEAK_FUNC(sub_83CF2284);
PPC_FUNC_IMPL(__imp__sub_83CF2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2288"))) PPC_WEAK_FUNC(sub_83CF2288);
PPC_FUNC_IMPL(__imp__sub_83CF2288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2294"))) PPC_WEAK_FUNC(sub_83CF2294);
PPC_FUNC_IMPL(__imp__sub_83CF2294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2298"))) PPC_WEAK_FUNC(sub_83CF2298);
PPC_FUNC_IMPL(__imp__sub_83CF2298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,6224
	ctx.r3.s64 = ctx.r11.s64 + 6224;
	// b 0x82426cc0
	sub_82426CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF22A4"))) PPC_WEAK_FUNC(sub_83CF22A4);
PPC_FUNC_IMPL(__imp__sub_83CF22A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF22A8"))) PPC_WEAK_FUNC(sub_83CF22A8);
PPC_FUNC_IMPL(__imp__sub_83CF22A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// b 0x825048f8
	sub_825048F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF22B4"))) PPC_WEAK_FUNC(sub_83CF22B4);
PPC_FUNC_IMPL(__imp__sub_83CF22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF22B8"))) PPC_WEAK_FUNC(sub_83CF22B8);
PPC_FUNC_IMPL(__imp__sub_83CF22B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF22C4"))) PPC_WEAK_FUNC(sub_83CF22C4);
PPC_FUNC_IMPL(__imp__sub_83CF22C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF22C8"))) PPC_WEAK_FUNC(sub_83CF22C8);
PPC_FUNC_IMPL(__imp__sub_83CF22C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF22D4"))) PPC_WEAK_FUNC(sub_83CF22D4);
PPC_FUNC_IMPL(__imp__sub_83CF22D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF22D8"))) PPC_WEAK_FUNC(sub_83CF22D8);
PPC_FUNC_IMPL(__imp__sub_83CF22D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF22EC"))) PPC_WEAK_FUNC(sub_83CF22EC);
PPC_FUNC_IMPL(__imp__sub_83CF22EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF22F0"))) PPC_WEAK_FUNC(sub_83CF22F0);
PPC_FUNC_IMPL(__imp__sub_83CF22F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF22FC"))) PPC_WEAK_FUNC(sub_83CF22FC);
PPC_FUNC_IMPL(__imp__sub_83CF22FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2300"))) PPC_WEAK_FUNC(sub_83CF2300);
PPC_FUNC_IMPL(__imp__sub_83CF2300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF230C"))) PPC_WEAK_FUNC(sub_83CF230C);
PPC_FUNC_IMPL(__imp__sub_83CF230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2310"))) PPC_WEAK_FUNC(sub_83CF2310);
PPC_FUNC_IMPL(__imp__sub_83CF2310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF231C"))) PPC_WEAK_FUNC(sub_83CF231C);
PPC_FUNC_IMPL(__imp__sub_83CF231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2320"))) PPC_WEAK_FUNC(sub_83CF2320);
PPC_FUNC_IMPL(__imp__sub_83CF2320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF232C"))) PPC_WEAK_FUNC(sub_83CF232C);
PPC_FUNC_IMPL(__imp__sub_83CF232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2330"))) PPC_WEAK_FUNC(sub_83CF2330);
PPC_FUNC_IMPL(__imp__sub_83CF2330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF233C"))) PPC_WEAK_FUNC(sub_83CF233C);
PPC_FUNC_IMPL(__imp__sub_83CF233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2340"))) PPC_WEAK_FUNC(sub_83CF2340);
PPC_FUNC_IMPL(__imp__sub_83CF2340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF234C"))) PPC_WEAK_FUNC(sub_83CF234C);
PPC_FUNC_IMPL(__imp__sub_83CF234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2350"))) PPC_WEAK_FUNC(sub_83CF2350);
PPC_FUNC_IMPL(__imp__sub_83CF2350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24496
	ctx.r3.s64 = ctx.r11.s64 + 24496;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF235C"))) PPC_WEAK_FUNC(sub_83CF235C);
PPC_FUNC_IMPL(__imp__sub_83CF235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2360"))) PPC_WEAK_FUNC(sub_83CF2360);
PPC_FUNC_IMPL(__imp__sub_83CF2360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF236C"))) PPC_WEAK_FUNC(sub_83CF236C);
PPC_FUNC_IMPL(__imp__sub_83CF236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2370"))) PPC_WEAK_FUNC(sub_83CF2370);
PPC_FUNC_IMPL(__imp__sub_83CF2370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24480
	ctx.r3.s64 = ctx.r11.s64 + 24480;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF237C"))) PPC_WEAK_FUNC(sub_83CF237C);
PPC_FUNC_IMPL(__imp__sub_83CF237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2380"))) PPC_WEAK_FUNC(sub_83CF2380);
PPC_FUNC_IMPL(__imp__sub_83CF2380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF238C"))) PPC_WEAK_FUNC(sub_83CF238C);
PPC_FUNC_IMPL(__imp__sub_83CF238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2390"))) PPC_WEAK_FUNC(sub_83CF2390);
PPC_FUNC_IMPL(__imp__sub_83CF2390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF239C"))) PPC_WEAK_FUNC(sub_83CF239C);
PPC_FUNC_IMPL(__imp__sub_83CF239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23A0"))) PPC_WEAK_FUNC(sub_83CF23A0);
PPC_FUNC_IMPL(__imp__sub_83CF23A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF23B4"))) PPC_WEAK_FUNC(sub_83CF23B4);
PPC_FUNC_IMPL(__imp__sub_83CF23B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23B8"))) PPC_WEAK_FUNC(sub_83CF23B8);
PPC_FUNC_IMPL(__imp__sub_83CF23B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// b 0x8256df28
	sub_8256DF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF23C4"))) PPC_WEAK_FUNC(sub_83CF23C4);
PPC_FUNC_IMPL(__imp__sub_83CF23C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23C8"))) PPC_WEAK_FUNC(sub_83CF23C8);
PPC_FUNC_IMPL(__imp__sub_83CF23C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24664
	ctx.r3.s64 = ctx.r11.s64 + 24664;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF23D4"))) PPC_WEAK_FUNC(sub_83CF23D4);
PPC_FUNC_IMPL(__imp__sub_83CF23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23D8"))) PPC_WEAK_FUNC(sub_83CF23D8);
PPC_FUNC_IMPL(__imp__sub_83CF23D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF23E4"))) PPC_WEAK_FUNC(sub_83CF23E4);
PPC_FUNC_IMPL(__imp__sub_83CF23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23E8"))) PPC_WEAK_FUNC(sub_83CF23E8);
PPC_FUNC_IMPL(__imp__sub_83CF23E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF23F4"))) PPC_WEAK_FUNC(sub_83CF23F4);
PPC_FUNC_IMPL(__imp__sub_83CF23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF23F8"))) PPC_WEAK_FUNC(sub_83CF23F8);
PPC_FUNC_IMPL(__imp__sub_83CF23F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF240C"))) PPC_WEAK_FUNC(sub_83CF240C);
PPC_FUNC_IMPL(__imp__sub_83CF240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2410"))) PPC_WEAK_FUNC(sub_83CF2410);
PPC_FUNC_IMPL(__imp__sub_83CF2410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,6624
	ctx.r3.s64 = ctx.r11.s64 + 6624;
	// b 0x8252e708
	sub_8252E708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF241C"))) PPC_WEAK_FUNC(sub_83CF241C);
PPC_FUNC_IMPL(__imp__sub_83CF241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2420"))) PPC_WEAK_FUNC(sub_83CF2420);
PPC_FUNC_IMPL(__imp__sub_83CF2420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF242C"))) PPC_WEAK_FUNC(sub_83CF242C);
PPC_FUNC_IMPL(__imp__sub_83CF242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2430"))) PPC_WEAK_FUNC(sub_83CF2430);
PPC_FUNC_IMPL(__imp__sub_83CF2430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25640
	ctx.r3.s64 = ctx.r11.s64 + 25640;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF243C"))) PPC_WEAK_FUNC(sub_83CF243C);
PPC_FUNC_IMPL(__imp__sub_83CF243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2440"))) PPC_WEAK_FUNC(sub_83CF2440);
PPC_FUNC_IMPL(__imp__sub_83CF2440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25880
	ctx.r3.s64 = ctx.r11.s64 + 25880;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF244C"))) PPC_WEAK_FUNC(sub_83CF244C);
PPC_FUNC_IMPL(__imp__sub_83CF244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2450"))) PPC_WEAK_FUNC(sub_83CF2450);
PPC_FUNC_IMPL(__imp__sub_83CF2450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF245C"))) PPC_WEAK_FUNC(sub_83CF245C);
PPC_FUNC_IMPL(__imp__sub_83CF245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2460"))) PPC_WEAK_FUNC(sub_83CF2460);
PPC_FUNC_IMPL(__imp__sub_83CF2460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF246C"))) PPC_WEAK_FUNC(sub_83CF246C);
PPC_FUNC_IMPL(__imp__sub_83CF246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2470"))) PPC_WEAK_FUNC(sub_83CF2470);
PPC_FUNC_IMPL(__imp__sub_83CF2470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF247C"))) PPC_WEAK_FUNC(sub_83CF247C);
PPC_FUNC_IMPL(__imp__sub_83CF247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2480"))) PPC_WEAK_FUNC(sub_83CF2480);
PPC_FUNC_IMPL(__imp__sub_83CF2480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF2494"))) PPC_WEAK_FUNC(sub_83CF2494);
PPC_FUNC_IMPL(__imp__sub_83CF2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2498"))) PPC_WEAK_FUNC(sub_83CF2498);
PPC_FUNC_IMPL(__imp__sub_83CF2498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24A4"))) PPC_WEAK_FUNC(sub_83CF24A4);
PPC_FUNC_IMPL(__imp__sub_83CF24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24A8"))) PPC_WEAK_FUNC(sub_83CF24A8);
PPC_FUNC_IMPL(__imp__sub_83CF24A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24B4"))) PPC_WEAK_FUNC(sub_83CF24B4);
PPC_FUNC_IMPL(__imp__sub_83CF24B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24B8"))) PPC_WEAK_FUNC(sub_83CF24B8);
PPC_FUNC_IMPL(__imp__sub_83CF24B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27352
	ctx.r3.s64 = ctx.r11.s64 + 27352;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24C4"))) PPC_WEAK_FUNC(sub_83CF24C4);
PPC_FUNC_IMPL(__imp__sub_83CF24C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24C8"))) PPC_WEAK_FUNC(sub_83CF24C8);
PPC_FUNC_IMPL(__imp__sub_83CF24C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24D4"))) PPC_WEAK_FUNC(sub_83CF24D4);
PPC_FUNC_IMPL(__imp__sub_83CF24D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24D8"))) PPC_WEAK_FUNC(sub_83CF24D8);
PPC_FUNC_IMPL(__imp__sub_83CF24D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24E4"))) PPC_WEAK_FUNC(sub_83CF24E4);
PPC_FUNC_IMPL(__imp__sub_83CF24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24E8"))) PPC_WEAK_FUNC(sub_83CF24E8);
PPC_FUNC_IMPL(__imp__sub_83CF24E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27336
	ctx.r3.s64 = ctx.r11.s64 + 27336;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF24F4"))) PPC_WEAK_FUNC(sub_83CF24F4);
PPC_FUNC_IMPL(__imp__sub_83CF24F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF24F8"))) PPC_WEAK_FUNC(sub_83CF24F8);
PPC_FUNC_IMPL(__imp__sub_83CF24F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2504"))) PPC_WEAK_FUNC(sub_83CF2504);
PPC_FUNC_IMPL(__imp__sub_83CF2504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2508"))) PPC_WEAK_FUNC(sub_83CF2508);
PPC_FUNC_IMPL(__imp__sub_83CF2508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2514"))) PPC_WEAK_FUNC(sub_83CF2514);
PPC_FUNC_IMPL(__imp__sub_83CF2514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2518"))) PPC_WEAK_FUNC(sub_83CF2518);
PPC_FUNC_IMPL(__imp__sub_83CF2518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2524"))) PPC_WEAK_FUNC(sub_83CF2524);
PPC_FUNC_IMPL(__imp__sub_83CF2524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2528"))) PPC_WEAK_FUNC(sub_83CF2528);
PPC_FUNC_IMPL(__imp__sub_83CF2528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2534"))) PPC_WEAK_FUNC(sub_83CF2534);
PPC_FUNC_IMPL(__imp__sub_83CF2534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2538"))) PPC_WEAK_FUNC(sub_83CF2538);
PPC_FUNC_IMPL(__imp__sub_83CF2538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF254C"))) PPC_WEAK_FUNC(sub_83CF254C);
PPC_FUNC_IMPL(__imp__sub_83CF254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2550"))) PPC_WEAK_FUNC(sub_83CF2550);
PPC_FUNC_IMPL(__imp__sub_83CF2550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27944
	ctx.r3.s64 = ctx.r11.s64 + 27944;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF255C"))) PPC_WEAK_FUNC(sub_83CF255C);
PPC_FUNC_IMPL(__imp__sub_83CF255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2560"))) PPC_WEAK_FUNC(sub_83CF2560);
PPC_FUNC_IMPL(__imp__sub_83CF2560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27960
	ctx.r3.s64 = ctx.r11.s64 + 27960;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF256C"))) PPC_WEAK_FUNC(sub_83CF256C);
PPC_FUNC_IMPL(__imp__sub_83CF256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2570"))) PPC_WEAK_FUNC(sub_83CF2570);
PPC_FUNC_IMPL(__imp__sub_83CF2570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27928
	ctx.r3.s64 = ctx.r11.s64 + 27928;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF257C"))) PPC_WEAK_FUNC(sub_83CF257C);
PPC_FUNC_IMPL(__imp__sub_83CF257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2580"))) PPC_WEAK_FUNC(sub_83CF2580);
PPC_FUNC_IMPL(__imp__sub_83CF2580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF258C"))) PPC_WEAK_FUNC(sub_83CF258C);
PPC_FUNC_IMPL(__imp__sub_83CF258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2590"))) PPC_WEAK_FUNC(sub_83CF2590);
PPC_FUNC_IMPL(__imp__sub_83CF2590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27688
	ctx.r3.s64 = ctx.r11.s64 + 27688;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF259C"))) PPC_WEAK_FUNC(sub_83CF259C);
PPC_FUNC_IMPL(__imp__sub_83CF259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25A0"))) PPC_WEAK_FUNC(sub_83CF25A0);
PPC_FUNC_IMPL(__imp__sub_83CF25A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF25B4"))) PPC_WEAK_FUNC(sub_83CF25B4);
PPC_FUNC_IMPL(__imp__sub_83CF25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25B8"))) PPC_WEAK_FUNC(sub_83CF25B8);
PPC_FUNC_IMPL(__imp__sub_83CF25B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28472
	ctx.r3.s64 = ctx.r11.s64 + 28472;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF25C4"))) PPC_WEAK_FUNC(sub_83CF25C4);
PPC_FUNC_IMPL(__imp__sub_83CF25C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25C8"))) PPC_WEAK_FUNC(sub_83CF25C8);
PPC_FUNC_IMPL(__imp__sub_83CF25C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28456
	ctx.r3.s64 = ctx.r11.s64 + 28456;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF25D4"))) PPC_WEAK_FUNC(sub_83CF25D4);
PPC_FUNC_IMPL(__imp__sub_83CF25D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25D8"))) PPC_WEAK_FUNC(sub_83CF25D8);
PPC_FUNC_IMPL(__imp__sub_83CF25D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF25E4"))) PPC_WEAK_FUNC(sub_83CF25E4);
PPC_FUNC_IMPL(__imp__sub_83CF25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25E8"))) PPC_WEAK_FUNC(sub_83CF25E8);
PPC_FUNC_IMPL(__imp__sub_83CF25E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF25F4"))) PPC_WEAK_FUNC(sub_83CF25F4);
PPC_FUNC_IMPL(__imp__sub_83CF25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF25F8"))) PPC_WEAK_FUNC(sub_83CF25F8);
PPC_FUNC_IMPL(__imp__sub_83CF25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF260C"))) PPC_WEAK_FUNC(sub_83CF260C);
PPC_FUNC_IMPL(__imp__sub_83CF260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2610"))) PPC_WEAK_FUNC(sub_83CF2610);
PPC_FUNC_IMPL(__imp__sub_83CF2610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF261C"))) PPC_WEAK_FUNC(sub_83CF261C);
PPC_FUNC_IMPL(__imp__sub_83CF261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2620"))) PPC_WEAK_FUNC(sub_83CF2620);
PPC_FUNC_IMPL(__imp__sub_83CF2620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF262C"))) PPC_WEAK_FUNC(sub_83CF262C);
PPC_FUNC_IMPL(__imp__sub_83CF262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2630"))) PPC_WEAK_FUNC(sub_83CF2630);
PPC_FUNC_IMPL(__imp__sub_83CF2630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29480
	ctx.r3.s64 = ctx.r11.s64 + 29480;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF263C"))) PPC_WEAK_FUNC(sub_83CF263C);
PPC_FUNC_IMPL(__imp__sub_83CF263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2640"))) PPC_WEAK_FUNC(sub_83CF2640);
PPC_FUNC_IMPL(__imp__sub_83CF2640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28488
	ctx.r3.s64 = ctx.r11.s64 + 28488;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF264C"))) PPC_WEAK_FUNC(sub_83CF264C);
PPC_FUNC_IMPL(__imp__sub_83CF264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2650"))) PPC_WEAK_FUNC(sub_83CF2650);
PPC_FUNC_IMPL(__imp__sub_83CF2650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28728
	ctx.r3.s64 = ctx.r11.s64 + 28728;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF265C"))) PPC_WEAK_FUNC(sub_83CF265C);
PPC_FUNC_IMPL(__imp__sub_83CF265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2660"))) PPC_WEAK_FUNC(sub_83CF2660);
PPC_FUNC_IMPL(__imp__sub_83CF2660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,28968
	ctx.r3.s64 = ctx.r11.s64 + 28968;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF266C"))) PPC_WEAK_FUNC(sub_83CF266C);
PPC_FUNC_IMPL(__imp__sub_83CF266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2670"))) PPC_WEAK_FUNC(sub_83CF2670);
PPC_FUNC_IMPL(__imp__sub_83CF2670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29208
	ctx.r3.s64 = ctx.r11.s64 + 29208;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF267C"))) PPC_WEAK_FUNC(sub_83CF267C);
PPC_FUNC_IMPL(__imp__sub_83CF267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2680"))) PPC_WEAK_FUNC(sub_83CF2680);
PPC_FUNC_IMPL(__imp__sub_83CF2680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF2694"))) PPC_WEAK_FUNC(sub_83CF2694);
PPC_FUNC_IMPL(__imp__sub_83CF2694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2698"))) PPC_WEAK_FUNC(sub_83CF2698);
PPC_FUNC_IMPL(__imp__sub_83CF2698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF26AC"))) PPC_WEAK_FUNC(sub_83CF26AC);
PPC_FUNC_IMPL(__imp__sub_83CF26AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF26B0"))) PPC_WEAK_FUNC(sub_83CF26B0);
PPC_FUNC_IMPL(__imp__sub_83CF26B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF26C4"))) PPC_WEAK_FUNC(sub_83CF26C4);
PPC_FUNC_IMPL(__imp__sub_83CF26C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF26C8"))) PPC_WEAK_FUNC(sub_83CF26C8);
PPC_FUNC_IMPL(__imp__sub_83CF26C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF26DC"))) PPC_WEAK_FUNC(sub_83CF26DC);
PPC_FUNC_IMPL(__imp__sub_83CF26DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF26E0"))) PPC_WEAK_FUNC(sub_83CF26E0);
PPC_FUNC_IMPL(__imp__sub_83CF26E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF26EC"))) PPC_WEAK_FUNC(sub_83CF26EC);
PPC_FUNC_IMPL(__imp__sub_83CF26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF26F0"))) PPC_WEAK_FUNC(sub_83CF26F0);
PPC_FUNC_IMPL(__imp__sub_83CF26F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF26FC"))) PPC_WEAK_FUNC(sub_83CF26FC);
PPC_FUNC_IMPL(__imp__sub_83CF26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2700"))) PPC_WEAK_FUNC(sub_83CF2700);
PPC_FUNC_IMPL(__imp__sub_83CF2700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF270C"))) PPC_WEAK_FUNC(sub_83CF270C);
PPC_FUNC_IMPL(__imp__sub_83CF270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2710"))) PPC_WEAK_FUNC(sub_83CF2710);
PPC_FUNC_IMPL(__imp__sub_83CF2710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30024
	ctx.r3.s64 = ctx.r11.s64 + 30024;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF271C"))) PPC_WEAK_FUNC(sub_83CF271C);
PPC_FUNC_IMPL(__imp__sub_83CF271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2720"))) PPC_WEAK_FUNC(sub_83CF2720);
PPC_FUNC_IMPL(__imp__sub_83CF2720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF272C"))) PPC_WEAK_FUNC(sub_83CF272C);
PPC_FUNC_IMPL(__imp__sub_83CF272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2730"))) PPC_WEAK_FUNC(sub_83CF2730);
PPC_FUNC_IMPL(__imp__sub_83CF2730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF273C"))) PPC_WEAK_FUNC(sub_83CF273C);
PPC_FUNC_IMPL(__imp__sub_83CF273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2740"))) PPC_WEAK_FUNC(sub_83CF2740);
PPC_FUNC_IMPL(__imp__sub_83CF2740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30040
	ctx.r3.s64 = ctx.r11.s64 + 30040;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF274C"))) PPC_WEAK_FUNC(sub_83CF274C);
PPC_FUNC_IMPL(__imp__sub_83CF274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2750"))) PPC_WEAK_FUNC(sub_83CF2750);
PPC_FUNC_IMPL(__imp__sub_83CF2750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF275C"))) PPC_WEAK_FUNC(sub_83CF275C);
PPC_FUNC_IMPL(__imp__sub_83CF275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2760"))) PPC_WEAK_FUNC(sub_83CF2760);
PPC_FUNC_IMPL(__imp__sub_83CF2760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,7104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF2774"))) PPC_WEAK_FUNC(sub_83CF2774);
PPC_FUNC_IMPL(__imp__sub_83CF2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2778"))) PPC_WEAK_FUNC(sub_83CF2778);
PPC_FUNC_IMPL(__imp__sub_83CF2778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2784"))) PPC_WEAK_FUNC(sub_83CF2784);
PPC_FUNC_IMPL(__imp__sub_83CF2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2788"))) PPC_WEAK_FUNC(sub_83CF2788);
PPC_FUNC_IMPL(__imp__sub_83CF2788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF2794"))) PPC_WEAK_FUNC(sub_83CF2794);
PPC_FUNC_IMPL(__imp__sub_83CF2794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2798"))) PPC_WEAK_FUNC(sub_83CF2798);
PPC_FUNC_IMPL(__imp__sub_83CF2798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,7164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF27AC"))) PPC_WEAK_FUNC(sub_83CF27AC);
PPC_FUNC_IMPL(__imp__sub_83CF27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF27B0"))) PPC_WEAK_FUNC(sub_83CF27B0);
PPC_FUNC_IMPL(__imp__sub_83CF27B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31000
	ctx.r3.s64 = ctx.r11.s64 + 31000;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF27BC"))) PPC_WEAK_FUNC(sub_83CF27BC);
PPC_FUNC_IMPL(__imp__sub_83CF27BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF27C0"))) PPC_WEAK_FUNC(sub_83CF27C0);
PPC_FUNC_IMPL(__imp__sub_83CF27C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF27CC"))) PPC_WEAK_FUNC(sub_83CF27CC);
PPC_FUNC_IMPL(__imp__sub_83CF27CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF27D0"))) PPC_WEAK_FUNC(sub_83CF27D0);
PPC_FUNC_IMPL(__imp__sub_83CF27D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF27DC"))) PPC_WEAK_FUNC(sub_83CF27DC);
PPC_FUNC_IMPL(__imp__sub_83CF27DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF27E0"))) PPC_WEAK_FUNC(sub_83CF27E0);
PPC_FUNC_IMPL(__imp__sub_83CF27E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF27EC"))) PPC_WEAK_FUNC(sub_83CF27EC);
PPC_FUNC_IMPL(__imp__sub_83CF27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF27F0"))) PPC_WEAK_FUNC(sub_83CF27F0);
PPC_FUNC_IMPL(__imp__sub_83CF27F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF27FC"))) PPC_WEAK_FUNC(sub_83CF27FC);
PPC_FUNC_IMPL(__imp__sub_83CF27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2800"))) PPC_WEAK_FUNC(sub_83CF2800);
PPC_FUNC_IMPL(__imp__sub_83CF2800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,31976
	ctx.r3.s64 = ctx.r11.s64 + 31976;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF280C"))) PPC_WEAK_FUNC(sub_83CF280C);
PPC_FUNC_IMPL(__imp__sub_83CF280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2810"))) PPC_WEAK_FUNC(sub_83CF2810);
PPC_FUNC_IMPL(__imp__sub_83CF2810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF281C"))) PPC_WEAK_FUNC(sub_83CF281C);
PPC_FUNC_IMPL(__imp__sub_83CF281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2820"))) PPC_WEAK_FUNC(sub_83CF2820);
PPC_FUNC_IMPL(__imp__sub_83CF2820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF282C"))) PPC_WEAK_FUNC(sub_83CF282C);
PPC_FUNC_IMPL(__imp__sub_83CF282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2830"))) PPC_WEAK_FUNC(sub_83CF2830);
PPC_FUNC_IMPL(__imp__sub_83CF2830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF283C"))) PPC_WEAK_FUNC(sub_83CF283C);
PPC_FUNC_IMPL(__imp__sub_83CF283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2840"))) PPC_WEAK_FUNC(sub_83CF2840);
PPC_FUNC_IMPL(__imp__sub_83CF2840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF284C"))) PPC_WEAK_FUNC(sub_83CF284C);
PPC_FUNC_IMPL(__imp__sub_83CF284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2850"))) PPC_WEAK_FUNC(sub_83CF2850);
PPC_FUNC_IMPL(__imp__sub_83CF2850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF285C"))) PPC_WEAK_FUNC(sub_83CF285C);
PPC_FUNC_IMPL(__imp__sub_83CF285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2860"))) PPC_WEAK_FUNC(sub_83CF2860);
PPC_FUNC_IMPL(__imp__sub_83CF2860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF286C"))) PPC_WEAK_FUNC(sub_83CF286C);
PPC_FUNC_IMPL(__imp__sub_83CF286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2870"))) PPC_WEAK_FUNC(sub_83CF2870);
PPC_FUNC_IMPL(__imp__sub_83CF2870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF287C"))) PPC_WEAK_FUNC(sub_83CF287C);
PPC_FUNC_IMPL(__imp__sub_83CF287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2880"))) PPC_WEAK_FUNC(sub_83CF2880);
PPC_FUNC_IMPL(__imp__sub_83CF2880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-31640
	ctx.r3.s64 = ctx.r11.s64 + -31640;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF288C"))) PPC_WEAK_FUNC(sub_83CF288C);
PPC_FUNC_IMPL(__imp__sub_83CF288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF2890"))) PPC_WEAK_FUNC(sub_83CF2890);
PPC_FUNC_IMPL(__imp__sub_83CF2890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF289C"))) PPC_WEAK_FUNC(sub_83CF289C);
PPC_FUNC_IMPL(__imp__sub_83CF289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF28A0"))) PPC_WEAK_FUNC(sub_83CF28A0);
PPC_FUNC_IMPL(__imp__sub_83CF28A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF28AC"))) PPC_WEAK_FUNC(sub_83CF28AC);
PPC_FUNC_IMPL(__imp__sub_83CF28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF28B0"))) PPC_WEAK_FUNC(sub_83CF28B0);
PPC_FUNC_IMPL(__imp__sub_83CF28B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF28BC"))) PPC_WEAK_FUNC(sub_83CF28BC);
PPC_FUNC_IMPL(__imp__sub_83CF28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF28C0"))) PPC_WEAK_FUNC(sub_83CF28C0);
PPC_FUNC_IMPL(__imp__sub_83CF28C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF28CC"))) PPC_WEAK_FUNC(sub_83CF28CC);
PPC_FUNC_IMPL(__imp__sub_83CF28CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF28D0"))) PPC_WEAK_FUNC(sub_83CF28D0);
PPC_FUNC_IMPL(__imp__sub_83CF28D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

