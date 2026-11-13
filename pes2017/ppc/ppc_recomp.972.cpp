#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CF140C"))) PPC_WEAK_FUNC(sub_83CF140C);
PPC_FUNC_IMPL(__imp__sub_83CF140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1410"))) PPC_WEAK_FUNC(sub_83CF1410);
PPC_FUNC_IMPL(__imp__sub_83CF1410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// b 0x82467a90
	sub_82467A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF141C"))) PPC_WEAK_FUNC(sub_83CF141C);
PPC_FUNC_IMPL(__imp__sub_83CF141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1420"))) PPC_WEAK_FUNC(sub_83CF1420);
PPC_FUNC_IMPL(__imp__sub_83CF1420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// b 0x82427180
	sub_82427180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF142C"))) PPC_WEAK_FUNC(sub_83CF142C);
PPC_FUNC_IMPL(__imp__sub_83CF142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1430"))) PPC_WEAK_FUNC(sub_83CF1430);
PPC_FUNC_IMPL(__imp__sub_83CF1430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,3536
	ctx.r3.s64 = ctx.r11.s64 + 3536;
	// b 0x8252e708
	sub_8252E708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF143C"))) PPC_WEAK_FUNC(sub_83CF143C);
PPC_FUNC_IMPL(__imp__sub_83CF143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1440"))) PPC_WEAK_FUNC(sub_83CF1440);
PPC_FUNC_IMPL(__imp__sub_83CF1440) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1376
	ctx.r31.s64 = ctx.r11.s64 + 1376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8258d568
	ctx.lr = 0x83CF146C;
	sub_8258D568(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF1474;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1488"))) PPC_WEAK_FUNC(sub_83CF1488);
PPC_FUNC_IMPL(__imp__sub_83CF1488) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1424
	ctx.r31.s64 = ctx.r11.s64 + 1424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x83CF14B4;
	sub_8247C3F8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF14BC;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF14D0"))) PPC_WEAK_FUNC(sub_83CF14D0);
PPC_FUNC_IMPL(__imp__sub_83CF14D0) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1392
	ctx.r31.s64 = ctx.r11.s64 + 1392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x83CF14FC;
	sub_8247C3F8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF1504;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1518"))) PPC_WEAK_FUNC(sub_83CF1518);
PPC_FUNC_IMPL(__imp__sub_83CF1518) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1408
	ctx.r31.s64 = ctx.r11.s64 + 1408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82469fb0
	ctx.lr = 0x83CF1544;
	sub_82469FB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF154C;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1560"))) PPC_WEAK_FUNC(sub_83CF1560);
PPC_FUNC_IMPL(__imp__sub_83CF1560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// b 0x824200a8
	sub_824200A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF156C"))) PPC_WEAK_FUNC(sub_83CF156C);
PPC_FUNC_IMPL(__imp__sub_83CF156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1570"))) PPC_WEAK_FUNC(sub_83CF1570);
PPC_FUNC_IMPL(__imp__sub_83CF1570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,1924
	ctx.r3.s64 = ctx.r11.s64 + 1924;
	// b 0x82450538
	sub_82450538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF157C"))) PPC_WEAK_FUNC(sub_83CF157C);
PPC_FUNC_IMPL(__imp__sub_83CF157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1580"))) PPC_WEAK_FUNC(sub_83CF1580);
PPC_FUNC_IMPL(__imp__sub_83CF1580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2416
	ctx.r3.s64 = ctx.r11.s64 + 2416;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF158C"))) PPC_WEAK_FUNC(sub_83CF158C);
PPC_FUNC_IMPL(__imp__sub_83CF158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1590"))) PPC_WEAK_FUNC(sub_83CF1590);
PPC_FUNC_IMPL(__imp__sub_83CF1590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF159C"))) PPC_WEAK_FUNC(sub_83CF159C);
PPC_FUNC_IMPL(__imp__sub_83CF159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF15A0"))) PPC_WEAK_FUNC(sub_83CF15A0);
PPC_FUNC_IMPL(__imp__sub_83CF15A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x835ed308
	sub_835ED308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF15AC"))) PPC_WEAK_FUNC(sub_83CF15AC);
PPC_FUNC_IMPL(__imp__sub_83CF15AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF15B0"))) PPC_WEAK_FUNC(sub_83CF15B0);
PPC_FUNC_IMPL(__imp__sub_83CF15B0) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r30,24
	ctx.r30.s64 = 24;
	// addi r11,r11,1976
	ctx.r11.s64 = ctx.r11.s64 + 1976;
	// addi r31,r11,400
	ctx.r31.s64 = ctx.r11.s64 + 400;
loc_83CF15D4:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83CF15E0;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83cf15d4
	if (!cr0.lt) goto loc_83CF15D4;
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

__attribute__((alias("__imp__sub_83CF1600"))) PPC_WEAK_FUNC(sub_83CF1600);
PPC_FUNC_IMPL(__imp__sub_83CF1600) {
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
	// addi r31,r11,2432
	ctx.r31.s64 = ctx.r11.s64 + 2432;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf1638
	if (cr6.eq) goto loc_83CF1638;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83CF1630;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83CF1638:
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

__attribute__((alias("__imp__sub_83CF164C"))) PPC_WEAK_FUNC(sub_83CF164C);
PPC_FUNC_IMPL(__imp__sub_83CF164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1650"))) PPC_WEAK_FUNC(sub_83CF1650);
PPC_FUNC_IMPL(__imp__sub_83CF1650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2448
	ctx.r3.s64 = ctx.r11.s64 + 2448;
	// b 0x82450538
	sub_82450538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF165C"))) PPC_WEAK_FUNC(sub_83CF165C);
PPC_FUNC_IMPL(__imp__sub_83CF165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1660"))) PPC_WEAK_FUNC(sub_83CF1660);
PPC_FUNC_IMPL(__imp__sub_83CF1660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF166C"))) PPC_WEAK_FUNC(sub_83CF166C);
PPC_FUNC_IMPL(__imp__sub_83CF166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1670"))) PPC_WEAK_FUNC(sub_83CF1670);
PPC_FUNC_IMPL(__imp__sub_83CF1670) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r11,r11,2528
	ctx.r11.s64 = ctx.r11.s64 + 2528;
	// addi r31,r11,240
	ctx.r31.s64 = ctx.r11.s64 + 240;
loc_83CF1694:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83CF16A0;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83cf1694
	if (!cr0.lt) goto loc_83CF1694;
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

__attribute__((alias("__imp__sub_83CF16C0"))) PPC_WEAK_FUNC(sub_83CF16C0);
PPC_FUNC_IMPL(__imp__sub_83CF16C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF16CC"))) PPC_WEAK_FUNC(sub_83CF16CC);
PPC_FUNC_IMPL(__imp__sub_83CF16CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF16D0"))) PPC_WEAK_FUNC(sub_83CF16D0);
PPC_FUNC_IMPL(__imp__sub_83CF16D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x8248df48
	sub_8248DF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF16DC"))) PPC_WEAK_FUNC(sub_83CF16DC);
PPC_FUNC_IMPL(__imp__sub_83CF16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF16E0"))) PPC_WEAK_FUNC(sub_83CF16E0);
PPC_FUNC_IMPL(__imp__sub_83CF16E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3016
	ctx.r3.s64 = ctx.r11.s64 + 3016;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF16EC"))) PPC_WEAK_FUNC(sub_83CF16EC);
PPC_FUNC_IMPL(__imp__sub_83CF16EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF16F0"))) PPC_WEAK_FUNC(sub_83CF16F0);
PPC_FUNC_IMPL(__imp__sub_83CF16F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF16FC"))) PPC_WEAK_FUNC(sub_83CF16FC);
PPC_FUNC_IMPL(__imp__sub_83CF16FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1700"))) PPC_WEAK_FUNC(sub_83CF1700);
PPC_FUNC_IMPL(__imp__sub_83CF1700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3032
	ctx.r3.s64 = ctx.r11.s64 + 3032;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF170C"))) PPC_WEAK_FUNC(sub_83CF170C);
PPC_FUNC_IMPL(__imp__sub_83CF170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1710"))) PPC_WEAK_FUNC(sub_83CF1710);
PPC_FUNC_IMPL(__imp__sub_83CF1710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3048
	ctx.r3.s64 = ctx.r11.s64 + 3048;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF171C"))) PPC_WEAK_FUNC(sub_83CF171C);
PPC_FUNC_IMPL(__imp__sub_83CF171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1720"))) PPC_WEAK_FUNC(sub_83CF1720);
PPC_FUNC_IMPL(__imp__sub_83CF1720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF172C"))) PPC_WEAK_FUNC(sub_83CF172C);
PPC_FUNC_IMPL(__imp__sub_83CF172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1730"))) PPC_WEAK_FUNC(sub_83CF1730);
PPC_FUNC_IMPL(__imp__sub_83CF1730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3764
	ctx.r3.s64 = ctx.r11.s64 + 3764;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF173C"))) PPC_WEAK_FUNC(sub_83CF173C);
PPC_FUNC_IMPL(__imp__sub_83CF173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1740"))) PPC_WEAK_FUNC(sub_83CF1740);
PPC_FUNC_IMPL(__imp__sub_83CF1740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3528
	ctx.r3.s64 = ctx.r11.s64 + 3528;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF174C"))) PPC_WEAK_FUNC(sub_83CF174C);
PPC_FUNC_IMPL(__imp__sub_83CF174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1750"))) PPC_WEAK_FUNC(sub_83CF1750);
PPC_FUNC_IMPL(__imp__sub_83CF1750) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,3772
	ctx.r31.s64 = ctx.r11.s64 + 3772;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82469fb0
	ctx.lr = 0x83CF177C;
	sub_82469FB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF1784;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1798"))) PPC_WEAK_FUNC(sub_83CF1798);
PPC_FUNC_IMPL(__imp__sub_83CF1798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3808
	ctx.r3.s64 = ctx.r11.s64 + 3808;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF17A4"))) PPC_WEAK_FUNC(sub_83CF17A4);
PPC_FUNC_IMPL(__imp__sub_83CF17A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF17A8"))) PPC_WEAK_FUNC(sub_83CF17A8);
PPC_FUNC_IMPL(__imp__sub_83CF17A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3824
	ctx.r3.s64 = ctx.r11.s64 + 3824;
	// b 0x824f2bb8
	sub_824F2BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF17B8"))) PPC_WEAK_FUNC(sub_83CF17B8);
PPC_FUNC_IMPL(__imp__sub_83CF17B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3840
	ctx.r3.s64 = ctx.r11.s64 + 3840;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF17C4"))) PPC_WEAK_FUNC(sub_83CF17C4);
PPC_FUNC_IMPL(__imp__sub_83CF17C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF17C8"))) PPC_WEAK_FUNC(sub_83CF17C8);
PPC_FUNC_IMPL(__imp__sub_83CF17C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,19532
	ctx.r11.s64 = ctx.r11.s64 + 19532;
	// stw r11,4496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF17DC"))) PPC_WEAK_FUNC(sub_83CF17DC);
PPC_FUNC_IMPL(__imp__sub_83CF17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF17E0"))) PPC_WEAK_FUNC(sub_83CF17E0);
PPC_FUNC_IMPL(__imp__sub_83CF17E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,3868
	ctx.r3.s64 = ctx.r11.s64 + 3868;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF17EC"))) PPC_WEAK_FUNC(sub_83CF17EC);
PPC_FUNC_IMPL(__imp__sub_83CF17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF17F0"))) PPC_WEAK_FUNC(sub_83CF17F0);
PPC_FUNC_IMPL(__imp__sub_83CF17F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF17FC"))) PPC_WEAK_FUNC(sub_83CF17FC);
PPC_FUNC_IMPL(__imp__sub_83CF17FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1800"))) PPC_WEAK_FUNC(sub_83CF1800);
PPC_FUNC_IMPL(__imp__sub_83CF1800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF180C"))) PPC_WEAK_FUNC(sub_83CF180C);
PPC_FUNC_IMPL(__imp__sub_83CF180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1810"))) PPC_WEAK_FUNC(sub_83CF1810);
PPC_FUNC_IMPL(__imp__sub_83CF1810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4656
	ctx.r3.s64 = ctx.r11.s64 + 4656;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF181C"))) PPC_WEAK_FUNC(sub_83CF181C);
PPC_FUNC_IMPL(__imp__sub_83CF181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1820"))) PPC_WEAK_FUNC(sub_83CF1820);
PPC_FUNC_IMPL(__imp__sub_83CF1820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF182C"))) PPC_WEAK_FUNC(sub_83CF182C);
PPC_FUNC_IMPL(__imp__sub_83CF182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1830"))) PPC_WEAK_FUNC(sub_83CF1830);
PPC_FUNC_IMPL(__imp__sub_83CF1830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF183C"))) PPC_WEAK_FUNC(sub_83CF183C);
PPC_FUNC_IMPL(__imp__sub_83CF183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1840"))) PPC_WEAK_FUNC(sub_83CF1840);
PPC_FUNC_IMPL(__imp__sub_83CF1840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF184C"))) PPC_WEAK_FUNC(sub_83CF184C);
PPC_FUNC_IMPL(__imp__sub_83CF184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1850"))) PPC_WEAK_FUNC(sub_83CF1850);
PPC_FUNC_IMPL(__imp__sub_83CF1850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF185C"))) PPC_WEAK_FUNC(sub_83CF185C);
PPC_FUNC_IMPL(__imp__sub_83CF185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1860"))) PPC_WEAK_FUNC(sub_83CF1860);
PPC_FUNC_IMPL(__imp__sub_83CF1860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF186C"))) PPC_WEAK_FUNC(sub_83CF186C);
PPC_FUNC_IMPL(__imp__sub_83CF186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1870"))) PPC_WEAK_FUNC(sub_83CF1870);
PPC_FUNC_IMPL(__imp__sub_83CF1870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4704
	ctx.r3.s64 = ctx.r11.s64 + 4704;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF187C"))) PPC_WEAK_FUNC(sub_83CF187C);
PPC_FUNC_IMPL(__imp__sub_83CF187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1880"))) PPC_WEAK_FUNC(sub_83CF1880);
PPC_FUNC_IMPL(__imp__sub_83CF1880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1890"))) PPC_WEAK_FUNC(sub_83CF1890);
PPC_FUNC_IMPL(__imp__sub_83CF1890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF189C"))) PPC_WEAK_FUNC(sub_83CF189C);
PPC_FUNC_IMPL(__imp__sub_83CF189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18A0"))) PPC_WEAK_FUNC(sub_83CF18A0);
PPC_FUNC_IMPL(__imp__sub_83CF18A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,5304
	ctx.r3.s64 = ctx.r11.s64 + 5304;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF18AC"))) PPC_WEAK_FUNC(sub_83CF18AC);
PPC_FUNC_IMPL(__imp__sub_83CF18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18B0"))) PPC_WEAK_FUNC(sub_83CF18B0);
PPC_FUNC_IMPL(__imp__sub_83CF18B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF18BC"))) PPC_WEAK_FUNC(sub_83CF18BC);
PPC_FUNC_IMPL(__imp__sub_83CF18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18C0"))) PPC_WEAK_FUNC(sub_83CF18C0);
PPC_FUNC_IMPL(__imp__sub_83CF18C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,5048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF18D4"))) PPC_WEAK_FUNC(sub_83CF18D4);
PPC_FUNC_IMPL(__imp__sub_83CF18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18D8"))) PPC_WEAK_FUNC(sub_83CF18D8);
PPC_FUNC_IMPL(__imp__sub_83CF18D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,5320
	ctx.r3.s64 = ctx.r11.s64 + 5320;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF18E4"))) PPC_WEAK_FUNC(sub_83CF18E4);
PPC_FUNC_IMPL(__imp__sub_83CF18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18E8"))) PPC_WEAK_FUNC(sub_83CF18E8);
PPC_FUNC_IMPL(__imp__sub_83CF18E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,5560
	ctx.r3.s64 = ctx.r11.s64 + 5560;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF18F4"))) PPC_WEAK_FUNC(sub_83CF18F4);
PPC_FUNC_IMPL(__imp__sub_83CF18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF18F8"))) PPC_WEAK_FUNC(sub_83CF18F8);
PPC_FUNC_IMPL(__imp__sub_83CF18F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1904"))) PPC_WEAK_FUNC(sub_83CF1904);
PPC_FUNC_IMPL(__imp__sub_83CF1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1908"))) PPC_WEAK_FUNC(sub_83CF1908);
PPC_FUNC_IMPL(__imp__sub_83CF1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,6040
	ctx.r3.s64 = ctx.r11.s64 + 6040;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1914"))) PPC_WEAK_FUNC(sub_83CF1914);
PPC_FUNC_IMPL(__imp__sub_83CF1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1918"))) PPC_WEAK_FUNC(sub_83CF1918);
PPC_FUNC_IMPL(__imp__sub_83CF1918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1924"))) PPC_WEAK_FUNC(sub_83CF1924);
PPC_FUNC_IMPL(__imp__sub_83CF1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1928"))) PPC_WEAK_FUNC(sub_83CF1928);
PPC_FUNC_IMPL(__imp__sub_83CF1928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,6520
	ctx.r3.s64 = ctx.r11.s64 + 6520;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1934"))) PPC_WEAK_FUNC(sub_83CF1934);
PPC_FUNC_IMPL(__imp__sub_83CF1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1938"))) PPC_WEAK_FUNC(sub_83CF1938);
PPC_FUNC_IMPL(__imp__sub_83CF1938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,6760
	ctx.r3.s64 = ctx.r11.s64 + 6760;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1944"))) PPC_WEAK_FUNC(sub_83CF1944);
PPC_FUNC_IMPL(__imp__sub_83CF1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1948"))) PPC_WEAK_FUNC(sub_83CF1948);
PPC_FUNC_IMPL(__imp__sub_83CF1948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,7000
	ctx.r3.s64 = ctx.r11.s64 + 7000;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1954"))) PPC_WEAK_FUNC(sub_83CF1954);
PPC_FUNC_IMPL(__imp__sub_83CF1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1958"))) PPC_WEAK_FUNC(sub_83CF1958);
PPC_FUNC_IMPL(__imp__sub_83CF1958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1964"))) PPC_WEAK_FUNC(sub_83CF1964);
PPC_FUNC_IMPL(__imp__sub_83CF1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1968"))) PPC_WEAK_FUNC(sub_83CF1968);
PPC_FUNC_IMPL(__imp__sub_83CF1968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,7480
	ctx.r3.s64 = ctx.r11.s64 + 7480;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1974"))) PPC_WEAK_FUNC(sub_83CF1974);
PPC_FUNC_IMPL(__imp__sub_83CF1974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1978"))) PPC_WEAK_FUNC(sub_83CF1978);
PPC_FUNC_IMPL(__imp__sub_83CF1978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1984"))) PPC_WEAK_FUNC(sub_83CF1984);
PPC_FUNC_IMPL(__imp__sub_83CF1984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1988"))) PPC_WEAK_FUNC(sub_83CF1988);
PPC_FUNC_IMPL(__imp__sub_83CF1988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1994"))) PPC_WEAK_FUNC(sub_83CF1994);
PPC_FUNC_IMPL(__imp__sub_83CF1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1998"))) PPC_WEAK_FUNC(sub_83CF1998);
PPC_FUNC_IMPL(__imp__sub_83CF1998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,8200
	ctx.r3.s64 = ctx.r11.s64 + 8200;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19A4"))) PPC_WEAK_FUNC(sub_83CF19A4);
PPC_FUNC_IMPL(__imp__sub_83CF19A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19A8"))) PPC_WEAK_FUNC(sub_83CF19A8);
PPC_FUNC_IMPL(__imp__sub_83CF19A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19B4"))) PPC_WEAK_FUNC(sub_83CF19B4);
PPC_FUNC_IMPL(__imp__sub_83CF19B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19B8"))) PPC_WEAK_FUNC(sub_83CF19B8);
PPC_FUNC_IMPL(__imp__sub_83CF19B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,8680
	ctx.r3.s64 = ctx.r11.s64 + 8680;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19C4"))) PPC_WEAK_FUNC(sub_83CF19C4);
PPC_FUNC_IMPL(__imp__sub_83CF19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19C8"))) PPC_WEAK_FUNC(sub_83CF19C8);
PPC_FUNC_IMPL(__imp__sub_83CF19C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,8920
	ctx.r3.s64 = ctx.r11.s64 + 8920;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19D4"))) PPC_WEAK_FUNC(sub_83CF19D4);
PPC_FUNC_IMPL(__imp__sub_83CF19D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19D8"))) PPC_WEAK_FUNC(sub_83CF19D8);
PPC_FUNC_IMPL(__imp__sub_83CF19D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,9160
	ctx.r3.s64 = ctx.r11.s64 + 9160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19E4"))) PPC_WEAK_FUNC(sub_83CF19E4);
PPC_FUNC_IMPL(__imp__sub_83CF19E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19E8"))) PPC_WEAK_FUNC(sub_83CF19E8);
PPC_FUNC_IMPL(__imp__sub_83CF19E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,9400
	ctx.r3.s64 = ctx.r11.s64 + 9400;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF19F4"))) PPC_WEAK_FUNC(sub_83CF19F4);
PPC_FUNC_IMPL(__imp__sub_83CF19F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF19F8"))) PPC_WEAK_FUNC(sub_83CF19F8);
PPC_FUNC_IMPL(__imp__sub_83CF19F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A04"))) PPC_WEAK_FUNC(sub_83CF1A04);
PPC_FUNC_IMPL(__imp__sub_83CF1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A08"))) PPC_WEAK_FUNC(sub_83CF1A08);
PPC_FUNC_IMPL(__imp__sub_83CF1A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,9880
	ctx.r3.s64 = ctx.r11.s64 + 9880;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A14"))) PPC_WEAK_FUNC(sub_83CF1A14);
PPC_FUNC_IMPL(__imp__sub_83CF1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A18"))) PPC_WEAK_FUNC(sub_83CF1A18);
PPC_FUNC_IMPL(__imp__sub_83CF1A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A24"))) PPC_WEAK_FUNC(sub_83CF1A24);
PPC_FUNC_IMPL(__imp__sub_83CF1A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A28"))) PPC_WEAK_FUNC(sub_83CF1A28);
PPC_FUNC_IMPL(__imp__sub_83CF1A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,10360
	ctx.r3.s64 = ctx.r11.s64 + 10360;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A34"))) PPC_WEAK_FUNC(sub_83CF1A34);
PPC_FUNC_IMPL(__imp__sub_83CF1A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A38"))) PPC_WEAK_FUNC(sub_83CF1A38);
PPC_FUNC_IMPL(__imp__sub_83CF1A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A44"))) PPC_WEAK_FUNC(sub_83CF1A44);
PPC_FUNC_IMPL(__imp__sub_83CF1A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A48"))) PPC_WEAK_FUNC(sub_83CF1A48);
PPC_FUNC_IMPL(__imp__sub_83CF1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,10840
	ctx.r3.s64 = ctx.r11.s64 + 10840;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A54"))) PPC_WEAK_FUNC(sub_83CF1A54);
PPC_FUNC_IMPL(__imp__sub_83CF1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A58"))) PPC_WEAK_FUNC(sub_83CF1A58);
PPC_FUNC_IMPL(__imp__sub_83CF1A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,11080
	ctx.r3.s64 = ctx.r11.s64 + 11080;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A64"))) PPC_WEAK_FUNC(sub_83CF1A64);
PPC_FUNC_IMPL(__imp__sub_83CF1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A68"))) PPC_WEAK_FUNC(sub_83CF1A68);
PPC_FUNC_IMPL(__imp__sub_83CF1A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,11320
	ctx.r3.s64 = ctx.r11.s64 + 11320;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A74"))) PPC_WEAK_FUNC(sub_83CF1A74);
PPC_FUNC_IMPL(__imp__sub_83CF1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A78"))) PPC_WEAK_FUNC(sub_83CF1A78);
PPC_FUNC_IMPL(__imp__sub_83CF1A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A84"))) PPC_WEAK_FUNC(sub_83CF1A84);
PPC_FUNC_IMPL(__imp__sub_83CF1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A88"))) PPC_WEAK_FUNC(sub_83CF1A88);
PPC_FUNC_IMPL(__imp__sub_83CF1A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1A94"))) PPC_WEAK_FUNC(sub_83CF1A94);
PPC_FUNC_IMPL(__imp__sub_83CF1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1A98"))) PPC_WEAK_FUNC(sub_83CF1A98);
PPC_FUNC_IMPL(__imp__sub_83CF1A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AA4"))) PPC_WEAK_FUNC(sub_83CF1AA4);
PPC_FUNC_IMPL(__imp__sub_83CF1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AA8"))) PPC_WEAK_FUNC(sub_83CF1AA8);
PPC_FUNC_IMPL(__imp__sub_83CF1AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AB4"))) PPC_WEAK_FUNC(sub_83CF1AB4);
PPC_FUNC_IMPL(__imp__sub_83CF1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AB8"))) PPC_WEAK_FUNC(sub_83CF1AB8);
PPC_FUNC_IMPL(__imp__sub_83CF1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AC4"))) PPC_WEAK_FUNC(sub_83CF1AC4);
PPC_FUNC_IMPL(__imp__sub_83CF1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AC8"))) PPC_WEAK_FUNC(sub_83CF1AC8);
PPC_FUNC_IMPL(__imp__sub_83CF1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AD4"))) PPC_WEAK_FUNC(sub_83CF1AD4);
PPC_FUNC_IMPL(__imp__sub_83CF1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AD8"))) PPC_WEAK_FUNC(sub_83CF1AD8);
PPC_FUNC_IMPL(__imp__sub_83CF1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AE4"))) PPC_WEAK_FUNC(sub_83CF1AE4);
PPC_FUNC_IMPL(__imp__sub_83CF1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AE8"))) PPC_WEAK_FUNC(sub_83CF1AE8);
PPC_FUNC_IMPL(__imp__sub_83CF1AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1AF4"))) PPC_WEAK_FUNC(sub_83CF1AF4);
PPC_FUNC_IMPL(__imp__sub_83CF1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1AF8"))) PPC_WEAK_FUNC(sub_83CF1AF8);
PPC_FUNC_IMPL(__imp__sub_83CF1AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,13480
	ctx.r3.s64 = ctx.r11.s64 + 13480;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B04"))) PPC_WEAK_FUNC(sub_83CF1B04);
PPC_FUNC_IMPL(__imp__sub_83CF1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B08"))) PPC_WEAK_FUNC(sub_83CF1B08);
PPC_FUNC_IMPL(__imp__sub_83CF1B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B14"))) PPC_WEAK_FUNC(sub_83CF1B14);
PPC_FUNC_IMPL(__imp__sub_83CF1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B18"))) PPC_WEAK_FUNC(sub_83CF1B18);
PPC_FUNC_IMPL(__imp__sub_83CF1B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,13960
	ctx.r3.s64 = ctx.r11.s64 + 13960;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B24"))) PPC_WEAK_FUNC(sub_83CF1B24);
PPC_FUNC_IMPL(__imp__sub_83CF1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B28"))) PPC_WEAK_FUNC(sub_83CF1B28);
PPC_FUNC_IMPL(__imp__sub_83CF1B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,14200
	ctx.r3.s64 = ctx.r11.s64 + 14200;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B34"))) PPC_WEAK_FUNC(sub_83CF1B34);
PPC_FUNC_IMPL(__imp__sub_83CF1B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B38"))) PPC_WEAK_FUNC(sub_83CF1B38);
PPC_FUNC_IMPL(__imp__sub_83CF1B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,14440
	ctx.r3.s64 = ctx.r11.s64 + 14440;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B44"))) PPC_WEAK_FUNC(sub_83CF1B44);
PPC_FUNC_IMPL(__imp__sub_83CF1B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B48"))) PPC_WEAK_FUNC(sub_83CF1B48);
PPC_FUNC_IMPL(__imp__sub_83CF1B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,14680
	ctx.r3.s64 = ctx.r11.s64 + 14680;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B54"))) PPC_WEAK_FUNC(sub_83CF1B54);
PPC_FUNC_IMPL(__imp__sub_83CF1B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B58"))) PPC_WEAK_FUNC(sub_83CF1B58);
PPC_FUNC_IMPL(__imp__sub_83CF1B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B64"))) PPC_WEAK_FUNC(sub_83CF1B64);
PPC_FUNC_IMPL(__imp__sub_83CF1B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B68"))) PPC_WEAK_FUNC(sub_83CF1B68);
PPC_FUNC_IMPL(__imp__sub_83CF1B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,15160
	ctx.r3.s64 = ctx.r11.s64 + 15160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B74"))) PPC_WEAK_FUNC(sub_83CF1B74);
PPC_FUNC_IMPL(__imp__sub_83CF1B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B78"))) PPC_WEAK_FUNC(sub_83CF1B78);
PPC_FUNC_IMPL(__imp__sub_83CF1B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B84"))) PPC_WEAK_FUNC(sub_83CF1B84);
PPC_FUNC_IMPL(__imp__sub_83CF1B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B88"))) PPC_WEAK_FUNC(sub_83CF1B88);
PPC_FUNC_IMPL(__imp__sub_83CF1B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,15640
	ctx.r3.s64 = ctx.r11.s64 + 15640;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1B94"))) PPC_WEAK_FUNC(sub_83CF1B94);
PPC_FUNC_IMPL(__imp__sub_83CF1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1B98"))) PPC_WEAK_FUNC(sub_83CF1B98);
PPC_FUNC_IMPL(__imp__sub_83CF1B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BA4"))) PPC_WEAK_FUNC(sub_83CF1BA4);
PPC_FUNC_IMPL(__imp__sub_83CF1BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BA8"))) PPC_WEAK_FUNC(sub_83CF1BA8);
PPC_FUNC_IMPL(__imp__sub_83CF1BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BB4"))) PPC_WEAK_FUNC(sub_83CF1BB4);
PPC_FUNC_IMPL(__imp__sub_83CF1BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BB8"))) PPC_WEAK_FUNC(sub_83CF1BB8);
PPC_FUNC_IMPL(__imp__sub_83CF1BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BC4"))) PPC_WEAK_FUNC(sub_83CF1BC4);
PPC_FUNC_IMPL(__imp__sub_83CF1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BC8"))) PPC_WEAK_FUNC(sub_83CF1BC8);
PPC_FUNC_IMPL(__imp__sub_83CF1BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BD4"))) PPC_WEAK_FUNC(sub_83CF1BD4);
PPC_FUNC_IMPL(__imp__sub_83CF1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BD8"))) PPC_WEAK_FUNC(sub_83CF1BD8);
PPC_FUNC_IMPL(__imp__sub_83CF1BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,16840
	ctx.r3.s64 = ctx.r11.s64 + 16840;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BE4"))) PPC_WEAK_FUNC(sub_83CF1BE4);
PPC_FUNC_IMPL(__imp__sub_83CF1BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BE8"))) PPC_WEAK_FUNC(sub_83CF1BE8);
PPC_FUNC_IMPL(__imp__sub_83CF1BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,17080
	ctx.r3.s64 = ctx.r11.s64 + 17080;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1BF4"))) PPC_WEAK_FUNC(sub_83CF1BF4);
PPC_FUNC_IMPL(__imp__sub_83CF1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1BF8"))) PPC_WEAK_FUNC(sub_83CF1BF8);
PPC_FUNC_IMPL(__imp__sub_83CF1BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C04"))) PPC_WEAK_FUNC(sub_83CF1C04);
PPC_FUNC_IMPL(__imp__sub_83CF1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C08"))) PPC_WEAK_FUNC(sub_83CF1C08);
PPC_FUNC_IMPL(__imp__sub_83CF1C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C14"))) PPC_WEAK_FUNC(sub_83CF1C14);
PPC_FUNC_IMPL(__imp__sub_83CF1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C18"))) PPC_WEAK_FUNC(sub_83CF1C18);
PPC_FUNC_IMPL(__imp__sub_83CF1C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C24"))) PPC_WEAK_FUNC(sub_83CF1C24);
PPC_FUNC_IMPL(__imp__sub_83CF1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C28"))) PPC_WEAK_FUNC(sub_83CF1C28);
PPC_FUNC_IMPL(__imp__sub_83CF1C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18088
	ctx.r3.s64 = ctx.r11.s64 + 18088;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C34"))) PPC_WEAK_FUNC(sub_83CF1C34);
PPC_FUNC_IMPL(__imp__sub_83CF1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C38"))) PPC_WEAK_FUNC(sub_83CF1C38);
PPC_FUNC_IMPL(__imp__sub_83CF1C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18052
	ctx.r3.s64 = ctx.r11.s64 + 18052;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C44"))) PPC_WEAK_FUNC(sub_83CF1C44);
PPC_FUNC_IMPL(__imp__sub_83CF1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C48"))) PPC_WEAK_FUNC(sub_83CF1C48);
PPC_FUNC_IMPL(__imp__sub_83CF1C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x83328188
	sub_83328188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1C54"))) PPC_WEAK_FUNC(sub_83CF1C54);
PPC_FUNC_IMPL(__imp__sub_83CF1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1C58"))) PPC_WEAK_FUNC(sub_83CF1C58);
PPC_FUNC_IMPL(__imp__sub_83CF1C58) {
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
	// addi r31,r11,18060
	ctx.r31.s64 = ctx.r11.s64 + 18060;
	// lwz r3,18060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18060);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf1c94
	if (cr6.eq) goto loc_83CF1C94;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824e2eb0
	ctx.lr = 0x83CF1C8C;
	sub_824E2EB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83CF1C94;
	sub_8386D088(ctx, base);
loc_83CF1C94:
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

__attribute__((alias("__imp__sub_83CF1CC0"))) PPC_WEAK_FUNC(sub_83CF1CC0);
PPC_FUNC_IMPL(__imp__sub_83CF1CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18384
	ctx.r3.s64 = ctx.r11.s64 + 18384;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1CCC"))) PPC_WEAK_FUNC(sub_83CF1CCC);
PPC_FUNC_IMPL(__imp__sub_83CF1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1CD0"))) PPC_WEAK_FUNC(sub_83CF1CD0);
PPC_FUNC_IMPL(__imp__sub_83CF1CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1CDC"))) PPC_WEAK_FUNC(sub_83CF1CDC);
PPC_FUNC_IMPL(__imp__sub_83CF1CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1CE0"))) PPC_WEAK_FUNC(sub_83CF1CE0);
PPC_FUNC_IMPL(__imp__sub_83CF1CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18104
	ctx.r3.s64 = ctx.r11.s64 + 18104;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1CEC"))) PPC_WEAK_FUNC(sub_83CF1CEC);
PPC_FUNC_IMPL(__imp__sub_83CF1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1CF0"))) PPC_WEAK_FUNC(sub_83CF1CF0);
PPC_FUNC_IMPL(__imp__sub_83CF1CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,4948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1D04"))) PPC_WEAK_FUNC(sub_83CF1D04);
PPC_FUNC_IMPL(__imp__sub_83CF1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1D08"))) PPC_WEAK_FUNC(sub_83CF1D08);
PPC_FUNC_IMPL(__imp__sub_83CF1D08) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,18360
	ctx.r31.s64 = ctx.r11.s64 + 18360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e66ac0
	ctx.lr = 0x83CF1D34;
	sub_82E66AC0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82416268
	ctx.lr = 0x83CF1D3C;
	sub_82416268(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1D50"))) PPC_WEAK_FUNC(sub_83CF1D50);
PPC_FUNC_IMPL(__imp__sub_83CF1D50) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,18344
	ctx.r31.s64 = ctx.r11.s64 + 18344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x824e5fc8
	ctx.lr = 0x83CF1D7C;
	sub_824E5FC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83CF1D84;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83CF1D98"))) PPC_WEAK_FUNC(sub_83CF1D98);
PPC_FUNC_IMPL(__imp__sub_83CF1D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18400
	ctx.r3.s64 = ctx.r11.s64 + 18400;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1DA4"))) PPC_WEAK_FUNC(sub_83CF1DA4);
PPC_FUNC_IMPL(__imp__sub_83CF1DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1DA8"))) PPC_WEAK_FUNC(sub_83CF1DA8);
PPC_FUNC_IMPL(__imp__sub_83CF1DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1DB4"))) PPC_WEAK_FUNC(sub_83CF1DB4);
PPC_FUNC_IMPL(__imp__sub_83CF1DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1DB8"))) PPC_WEAK_FUNC(sub_83CF1DB8);
PPC_FUNC_IMPL(__imp__sub_83CF1DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,4980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF1DCC"))) PPC_WEAK_FUNC(sub_83CF1DCC);
PPC_FUNC_IMPL(__imp__sub_83CF1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1DD0"))) PPC_WEAK_FUNC(sub_83CF1DD0);
PPC_FUNC_IMPL(__imp__sub_83CF1DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,18880
	ctx.r3.s64 = ctx.r11.s64 + 18880;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1DDC"))) PPC_WEAK_FUNC(sub_83CF1DDC);
PPC_FUNC_IMPL(__imp__sub_83CF1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1DE0"))) PPC_WEAK_FUNC(sub_83CF1DE0);
PPC_FUNC_IMPL(__imp__sub_83CF1DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x83328188
	sub_83328188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1DEC"))) PPC_WEAK_FUNC(sub_83CF1DEC);
PPC_FUNC_IMPL(__imp__sub_83CF1DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1DF0"))) PPC_WEAK_FUNC(sub_83CF1DF0);
PPC_FUNC_IMPL(__imp__sub_83CF1DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19120
	ctx.r3.s64 = ctx.r11.s64 + 19120;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1DFC"))) PPC_WEAK_FUNC(sub_83CF1DFC);
PPC_FUNC_IMPL(__imp__sub_83CF1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E00"))) PPC_WEAK_FUNC(sub_83CF1E00);
PPC_FUNC_IMPL(__imp__sub_83CF1E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19160
	ctx.r3.s64 = ctx.r11.s64 + 19160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1E0C"))) PPC_WEAK_FUNC(sub_83CF1E0C);
PPC_FUNC_IMPL(__imp__sub_83CF1E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E10"))) PPC_WEAK_FUNC(sub_83CF1E10);
PPC_FUNC_IMPL(__imp__sub_83CF1E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19144
	ctx.r3.s64 = ctx.r11.s64 + 19144;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1E1C"))) PPC_WEAK_FUNC(sub_83CF1E1C);
PPC_FUNC_IMPL(__imp__sub_83CF1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E20"))) PPC_WEAK_FUNC(sub_83CF1E20);
PPC_FUNC_IMPL(__imp__sub_83CF1E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19424
	ctx.r3.s64 = ctx.r11.s64 + 19424;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1E2C"))) PPC_WEAK_FUNC(sub_83CF1E2C);
PPC_FUNC_IMPL(__imp__sub_83CF1E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E30"))) PPC_WEAK_FUNC(sub_83CF1E30);
PPC_FUNC_IMPL(__imp__sub_83CF1E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19440
	ctx.r3.s64 = ctx.r11.s64 + 19440;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1E3C"))) PPC_WEAK_FUNC(sub_83CF1E3C);
PPC_FUNC_IMPL(__imp__sub_83CF1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E40"))) PPC_WEAK_FUNC(sub_83CF1E40);
PPC_FUNC_IMPL(__imp__sub_83CF1E40) {
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
	// addi r31,r11,19408
	ctx.r31.s64 = ctx.r11.s64 + 19408;
	// lwz r3,19408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83cf1e68
	if (cr6.eq) goto loc_83CF1E68;
	// bl 0x8386d088
	ctx.lr = 0x83CF1E68;
	sub_8386D088(ctx, base);
loc_83CF1E68:
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

__attribute__((alias("__imp__sub_83CF1E94"))) PPC_WEAK_FUNC(sub_83CF1E94);
PPC_FUNC_IMPL(__imp__sub_83CF1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1E98"))) PPC_WEAK_FUNC(sub_83CF1E98);
PPC_FUNC_IMPL(__imp__sub_83CF1E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19480
	ctx.r3.s64 = ctx.r11.s64 + 19480;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1EA8"))) PPC_WEAK_FUNC(sub_83CF1EA8);
PPC_FUNC_IMPL(__imp__sub_83CF1EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1EB8"))) PPC_WEAK_FUNC(sub_83CF1EB8);
PPC_FUNC_IMPL(__imp__sub_83CF1EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19472
	ctx.r3.s64 = ctx.r11.s64 + 19472;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1EC8"))) PPC_WEAK_FUNC(sub_83CF1EC8);
PPC_FUNC_IMPL(__imp__sub_83CF1EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19504
	ctx.r3.s64 = ctx.r11.s64 + 19504;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1ED8"))) PPC_WEAK_FUNC(sub_83CF1ED8);
PPC_FUNC_IMPL(__imp__sub_83CF1ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19512
	ctx.r3.s64 = ctx.r11.s64 + 19512;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1EE8"))) PPC_WEAK_FUNC(sub_83CF1EE8);
PPC_FUNC_IMPL(__imp__sub_83CF1EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1EF4"))) PPC_WEAK_FUNC(sub_83CF1EF4);
PPC_FUNC_IMPL(__imp__sub_83CF1EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1EF8"))) PPC_WEAK_FUNC(sub_83CF1EF8);
PPC_FUNC_IMPL(__imp__sub_83CF1EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F04"))) PPC_WEAK_FUNC(sub_83CF1F04);
PPC_FUNC_IMPL(__imp__sub_83CF1F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F08"))) PPC_WEAK_FUNC(sub_83CF1F08);
PPC_FUNC_IMPL(__imp__sub_83CF1F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19536
	ctx.r3.s64 = ctx.r11.s64 + 19536;
	// b 0x83b3f898
	sub_83B3F898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F14"))) PPC_WEAK_FUNC(sub_83CF1F14);
PPC_FUNC_IMPL(__imp__sub_83CF1F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F18"))) PPC_WEAK_FUNC(sub_83CF1F18);
PPC_FUNC_IMPL(__imp__sub_83CF1F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x83328188
	sub_83328188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F24"))) PPC_WEAK_FUNC(sub_83CF1F24);
PPC_FUNC_IMPL(__imp__sub_83CF1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F28"))) PPC_WEAK_FUNC(sub_83CF1F28);
PPC_FUNC_IMPL(__imp__sub_83CF1F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19860
	ctx.r3.s64 = ctx.r11.s64 + 19860;
	// b 0x824f2bb8
	sub_824F2BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F38"))) PPC_WEAK_FUNC(sub_83CF1F38);
PPC_FUNC_IMPL(__imp__sub_83CF1F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F44"))) PPC_WEAK_FUNC(sub_83CF1F44);
PPC_FUNC_IMPL(__imp__sub_83CF1F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F48"))) PPC_WEAK_FUNC(sub_83CF1F48);
PPC_FUNC_IMPL(__imp__sub_83CF1F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F54"))) PPC_WEAK_FUNC(sub_83CF1F54);
PPC_FUNC_IMPL(__imp__sub_83CF1F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F58"))) PPC_WEAK_FUNC(sub_83CF1F58);
PPC_FUNC_IMPL(__imp__sub_83CF1F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F68"))) PPC_WEAK_FUNC(sub_83CF1F68);
PPC_FUNC_IMPL(__imp__sub_83CF1F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20348
	ctx.r3.s64 = ctx.r11.s64 + 20348;
	// b 0x824f2bb8
	sub_824F2BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F78"))) PPC_WEAK_FUNC(sub_83CF1F78);
PPC_FUNC_IMPL(__imp__sub_83CF1F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20112
	ctx.r3.s64 = ctx.r11.s64 + 20112;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F84"))) PPC_WEAK_FUNC(sub_83CF1F84);
PPC_FUNC_IMPL(__imp__sub_83CF1F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F88"))) PPC_WEAK_FUNC(sub_83CF1F88);
PPC_FUNC_IMPL(__imp__sub_83CF1F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1F94"))) PPC_WEAK_FUNC(sub_83CF1F94);
PPC_FUNC_IMPL(__imp__sub_83CF1F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1F98"))) PPC_WEAK_FUNC(sub_83CF1F98);
PPC_FUNC_IMPL(__imp__sub_83CF1F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF1FA4"))) PPC_WEAK_FUNC(sub_83CF1FA4);
PPC_FUNC_IMPL(__imp__sub_83CF1FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF1FA8"))) PPC_WEAK_FUNC(sub_83CF1FA8);
PPC_FUNC_IMPL(__imp__sub_83CF1FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20384
	ctx.r3.s64 = ctx.r11.s64 + 20384;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

