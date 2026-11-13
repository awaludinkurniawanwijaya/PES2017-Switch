#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD13F8"))) PPC_WEAK_FUNC(sub_83CD13F8);
PPC_FUNC_IMPL(__imp__sub_83CD13F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7348
	ctx.r3.s64 = ctx.r11.s64 + -7348;
	// bl 0x83523120
	ctx.lr = 0x83CD1410;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21952
	ctx.r3.s64 = ctx.r10.s64 + -21952;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD141C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD142C"))) PPC_WEAK_FUNC(sub_83CD142C);
PPC_FUNC_IMPL(__imp__sub_83CD142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1430"))) PPC_WEAK_FUNC(sub_83CD1430);
PPC_FUNC_IMPL(__imp__sub_83CD1430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21936
	ctx.r3.s64 = ctx.r11.s64 + -21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD143C"))) PPC_WEAK_FUNC(sub_83CD143C);
PPC_FUNC_IMPL(__imp__sub_83CD143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1440"))) PPC_WEAK_FUNC(sub_83CD1440);
PPC_FUNC_IMPL(__imp__sub_83CD1440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD144C"))) PPC_WEAK_FUNC(sub_83CD144C);
PPC_FUNC_IMPL(__imp__sub_83CD144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1450"))) PPC_WEAK_FUNC(sub_83CD1450);
PPC_FUNC_IMPL(__imp__sub_83CD1450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21920
	ctx.r3.s64 = ctx.r11.s64 + -21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD145C"))) PPC_WEAK_FUNC(sub_83CD145C);
PPC_FUNC_IMPL(__imp__sub_83CD145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1460"))) PPC_WEAK_FUNC(sub_83CD1460);
PPC_FUNC_IMPL(__imp__sub_83CD1460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD146C"))) PPC_WEAK_FUNC(sub_83CD146C);
PPC_FUNC_IMPL(__imp__sub_83CD146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1470"))) PPC_WEAK_FUNC(sub_83CD1470);
PPC_FUNC_IMPL(__imp__sub_83CD1470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD147C"))) PPC_WEAK_FUNC(sub_83CD147C);
PPC_FUNC_IMPL(__imp__sub_83CD147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1480"))) PPC_WEAK_FUNC(sub_83CD1480);
PPC_FUNC_IMPL(__imp__sub_83CD1480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD148C"))) PPC_WEAK_FUNC(sub_83CD148C);
PPC_FUNC_IMPL(__imp__sub_83CD148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1490"))) PPC_WEAK_FUNC(sub_83CD1490);
PPC_FUNC_IMPL(__imp__sub_83CD1490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD149C"))) PPC_WEAK_FUNC(sub_83CD149C);
PPC_FUNC_IMPL(__imp__sub_83CD149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14A0"))) PPC_WEAK_FUNC(sub_83CD14A0);
PPC_FUNC_IMPL(__imp__sub_83CD14A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21880
	ctx.r3.s64 = ctx.r11.s64 + -21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD14AC"))) PPC_WEAK_FUNC(sub_83CD14AC);
PPC_FUNC_IMPL(__imp__sub_83CD14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14B0"))) PPC_WEAK_FUNC(sub_83CD14B0);
PPC_FUNC_IMPL(__imp__sub_83CD14B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21872
	ctx.r3.s64 = ctx.r11.s64 + -21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD14BC"))) PPC_WEAK_FUNC(sub_83CD14BC);
PPC_FUNC_IMPL(__imp__sub_83CD14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14C0"))) PPC_WEAK_FUNC(sub_83CD14C0);
PPC_FUNC_IMPL(__imp__sub_83CD14C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD14CC"))) PPC_WEAK_FUNC(sub_83CD14CC);
PPC_FUNC_IMPL(__imp__sub_83CD14CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14D0"))) PPC_WEAK_FUNC(sub_83CD14D0);
PPC_FUNC_IMPL(__imp__sub_83CD14D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD14DC"))) PPC_WEAK_FUNC(sub_83CD14DC);
PPC_FUNC_IMPL(__imp__sub_83CD14DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14E0"))) PPC_WEAK_FUNC(sub_83CD14E0);
PPC_FUNC_IMPL(__imp__sub_83CD14E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21848
	ctx.r3.s64 = ctx.r11.s64 + -21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD14EC"))) PPC_WEAK_FUNC(sub_83CD14EC);
PPC_FUNC_IMPL(__imp__sub_83CD14EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD14F0"))) PPC_WEAK_FUNC(sub_83CD14F0);
PPC_FUNC_IMPL(__imp__sub_83CD14F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7340
	ctx.r3.s64 = ctx.r11.s64 + -7340;
	// bl 0x83523120
	ctx.lr = 0x83CD1508;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21840
	ctx.r3.s64 = ctx.r10.s64 + -21840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1514;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1524"))) PPC_WEAK_FUNC(sub_83CD1524);
PPC_FUNC_IMPL(__imp__sub_83CD1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1528"))) PPC_WEAK_FUNC(sub_83CD1528);
PPC_FUNC_IMPL(__imp__sub_83CD1528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1534"))) PPC_WEAK_FUNC(sub_83CD1534);
PPC_FUNC_IMPL(__imp__sub_83CD1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1538"))) PPC_WEAK_FUNC(sub_83CD1538);
PPC_FUNC_IMPL(__imp__sub_83CD1538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1544"))) PPC_WEAK_FUNC(sub_83CD1544);
PPC_FUNC_IMPL(__imp__sub_83CD1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1548"))) PPC_WEAK_FUNC(sub_83CD1548);
PPC_FUNC_IMPL(__imp__sub_83CD1548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21808
	ctx.r3.s64 = ctx.r11.s64 + -21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1554"))) PPC_WEAK_FUNC(sub_83CD1554);
PPC_FUNC_IMPL(__imp__sub_83CD1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1558"))) PPC_WEAK_FUNC(sub_83CD1558);
PPC_FUNC_IMPL(__imp__sub_83CD1558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21800
	ctx.r3.s64 = ctx.r11.s64 + -21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1564"))) PPC_WEAK_FUNC(sub_83CD1564);
PPC_FUNC_IMPL(__imp__sub_83CD1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1568"))) PPC_WEAK_FUNC(sub_83CD1568);
PPC_FUNC_IMPL(__imp__sub_83CD1568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1574"))) PPC_WEAK_FUNC(sub_83CD1574);
PPC_FUNC_IMPL(__imp__sub_83CD1574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1578"))) PPC_WEAK_FUNC(sub_83CD1578);
PPC_FUNC_IMPL(__imp__sub_83CD1578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21784
	ctx.r3.s64 = ctx.r11.s64 + -21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1584"))) PPC_WEAK_FUNC(sub_83CD1584);
PPC_FUNC_IMPL(__imp__sub_83CD1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1588"))) PPC_WEAK_FUNC(sub_83CD1588);
PPC_FUNC_IMPL(__imp__sub_83CD1588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1594"))) PPC_WEAK_FUNC(sub_83CD1594);
PPC_FUNC_IMPL(__imp__sub_83CD1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1598"))) PPC_WEAK_FUNC(sub_83CD1598);
PPC_FUNC_IMPL(__imp__sub_83CD1598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21768
	ctx.r3.s64 = ctx.r11.s64 + -21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD15A4"))) PPC_WEAK_FUNC(sub_83CD15A4);
PPC_FUNC_IMPL(__imp__sub_83CD15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD15A8"))) PPC_WEAK_FUNC(sub_83CD15A8);
PPC_FUNC_IMPL(__imp__sub_83CD15A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21760
	ctx.r3.s64 = ctx.r11.s64 + -21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD15B4"))) PPC_WEAK_FUNC(sub_83CD15B4);
PPC_FUNC_IMPL(__imp__sub_83CD15B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD15B8"))) PPC_WEAK_FUNC(sub_83CD15B8);
PPC_FUNC_IMPL(__imp__sub_83CD15B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD15C4"))) PPC_WEAK_FUNC(sub_83CD15C4);
PPC_FUNC_IMPL(__imp__sub_83CD15C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD15C8"))) PPC_WEAK_FUNC(sub_83CD15C8);
PPC_FUNC_IMPL(__imp__sub_83CD15C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD15D4"))) PPC_WEAK_FUNC(sub_83CD15D4);
PPC_FUNC_IMPL(__imp__sub_83CD15D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD15D8"))) PPC_WEAK_FUNC(sub_83CD15D8);
PPC_FUNC_IMPL(__imp__sub_83CD15D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21736
	ctx.r3.s64 = ctx.r11.s64 + -21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD15E4"))) PPC_WEAK_FUNC(sub_83CD15E4);
PPC_FUNC_IMPL(__imp__sub_83CD15E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD15E8"))) PPC_WEAK_FUNC(sub_83CD15E8);
PPC_FUNC_IMPL(__imp__sub_83CD15E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7328
	ctx.r3.s64 = ctx.r11.s64 + -7328;
	// bl 0x83523120
	ctx.lr = 0x83CD1600;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21728
	ctx.r3.s64 = ctx.r10.s64 + -21728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD160C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD161C"))) PPC_WEAK_FUNC(sub_83CD161C);
PPC_FUNC_IMPL(__imp__sub_83CD161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1620"))) PPC_WEAK_FUNC(sub_83CD1620);
PPC_FUNC_IMPL(__imp__sub_83CD1620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD162C"))) PPC_WEAK_FUNC(sub_83CD162C);
PPC_FUNC_IMPL(__imp__sub_83CD162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1630"))) PPC_WEAK_FUNC(sub_83CD1630);
PPC_FUNC_IMPL(__imp__sub_83CD1630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD163C"))) PPC_WEAK_FUNC(sub_83CD163C);
PPC_FUNC_IMPL(__imp__sub_83CD163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1640"))) PPC_WEAK_FUNC(sub_83CD1640);
PPC_FUNC_IMPL(__imp__sub_83CD1640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21696
	ctx.r3.s64 = ctx.r11.s64 + -21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD164C"))) PPC_WEAK_FUNC(sub_83CD164C);
PPC_FUNC_IMPL(__imp__sub_83CD164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1650"))) PPC_WEAK_FUNC(sub_83CD1650);
PPC_FUNC_IMPL(__imp__sub_83CD1650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21688
	ctx.r3.s64 = ctx.r11.s64 + -21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD165C"))) PPC_WEAK_FUNC(sub_83CD165C);
PPC_FUNC_IMPL(__imp__sub_83CD165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1660"))) PPC_WEAK_FUNC(sub_83CD1660);
PPC_FUNC_IMPL(__imp__sub_83CD1660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD166C"))) PPC_WEAK_FUNC(sub_83CD166C);
PPC_FUNC_IMPL(__imp__sub_83CD166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1670"))) PPC_WEAK_FUNC(sub_83CD1670);
PPC_FUNC_IMPL(__imp__sub_83CD1670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD167C"))) PPC_WEAK_FUNC(sub_83CD167C);
PPC_FUNC_IMPL(__imp__sub_83CD167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1680"))) PPC_WEAK_FUNC(sub_83CD1680);
PPC_FUNC_IMPL(__imp__sub_83CD1680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD168C"))) PPC_WEAK_FUNC(sub_83CD168C);
PPC_FUNC_IMPL(__imp__sub_83CD168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1690"))) PPC_WEAK_FUNC(sub_83CD1690);
PPC_FUNC_IMPL(__imp__sub_83CD1690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21656
	ctx.r3.s64 = ctx.r11.s64 + -21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD169C"))) PPC_WEAK_FUNC(sub_83CD169C);
PPC_FUNC_IMPL(__imp__sub_83CD169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD16A0"))) PPC_WEAK_FUNC(sub_83CD16A0);
PPC_FUNC_IMPL(__imp__sub_83CD16A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD16AC"))) PPC_WEAK_FUNC(sub_83CD16AC);
PPC_FUNC_IMPL(__imp__sub_83CD16AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD16B0"))) PPC_WEAK_FUNC(sub_83CD16B0);
PPC_FUNC_IMPL(__imp__sub_83CD16B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD16BC"))) PPC_WEAK_FUNC(sub_83CD16BC);
PPC_FUNC_IMPL(__imp__sub_83CD16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD16C0"))) PPC_WEAK_FUNC(sub_83CD16C0);
PPC_FUNC_IMPL(__imp__sub_83CD16C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD16CC"))) PPC_WEAK_FUNC(sub_83CD16CC);
PPC_FUNC_IMPL(__imp__sub_83CD16CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD16D0"))) PPC_WEAK_FUNC(sub_83CD16D0);
PPC_FUNC_IMPL(__imp__sub_83CD16D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21624
	ctx.r3.s64 = ctx.r11.s64 + -21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD16DC"))) PPC_WEAK_FUNC(sub_83CD16DC);
PPC_FUNC_IMPL(__imp__sub_83CD16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD16E0"))) PPC_WEAK_FUNC(sub_83CD16E0);
PPC_FUNC_IMPL(__imp__sub_83CD16E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// bl 0x83523120
	ctx.lr = 0x83CD16F8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21616
	ctx.r3.s64 = ctx.r10.s64 + -21616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1704;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1714"))) PPC_WEAK_FUNC(sub_83CD1714);
PPC_FUNC_IMPL(__imp__sub_83CD1714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1718"))) PPC_WEAK_FUNC(sub_83CD1718);
PPC_FUNC_IMPL(__imp__sub_83CD1718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21600
	ctx.r3.s64 = ctx.r11.s64 + -21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1724"))) PPC_WEAK_FUNC(sub_83CD1724);
PPC_FUNC_IMPL(__imp__sub_83CD1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1728"))) PPC_WEAK_FUNC(sub_83CD1728);
PPC_FUNC_IMPL(__imp__sub_83CD1728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21592
	ctx.r3.s64 = ctx.r11.s64 + -21592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1734"))) PPC_WEAK_FUNC(sub_83CD1734);
PPC_FUNC_IMPL(__imp__sub_83CD1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1738"))) PPC_WEAK_FUNC(sub_83CD1738);
PPC_FUNC_IMPL(__imp__sub_83CD1738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1744"))) PPC_WEAK_FUNC(sub_83CD1744);
PPC_FUNC_IMPL(__imp__sub_83CD1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1748"))) PPC_WEAK_FUNC(sub_83CD1748);
PPC_FUNC_IMPL(__imp__sub_83CD1748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21576
	ctx.r3.s64 = ctx.r11.s64 + -21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1754"))) PPC_WEAK_FUNC(sub_83CD1754);
PPC_FUNC_IMPL(__imp__sub_83CD1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1758"))) PPC_WEAK_FUNC(sub_83CD1758);
PPC_FUNC_IMPL(__imp__sub_83CD1758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1764"))) PPC_WEAK_FUNC(sub_83CD1764);
PPC_FUNC_IMPL(__imp__sub_83CD1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1768"))) PPC_WEAK_FUNC(sub_83CD1768);
PPC_FUNC_IMPL(__imp__sub_83CD1768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21560
	ctx.r3.s64 = ctx.r11.s64 + -21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1774"))) PPC_WEAK_FUNC(sub_83CD1774);
PPC_FUNC_IMPL(__imp__sub_83CD1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1778"))) PPC_WEAK_FUNC(sub_83CD1778);
PPC_FUNC_IMPL(__imp__sub_83CD1778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21552
	ctx.r3.s64 = ctx.r11.s64 + -21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1784"))) PPC_WEAK_FUNC(sub_83CD1784);
PPC_FUNC_IMPL(__imp__sub_83CD1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1788"))) PPC_WEAK_FUNC(sub_83CD1788);
PPC_FUNC_IMPL(__imp__sub_83CD1788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1794"))) PPC_WEAK_FUNC(sub_83CD1794);
PPC_FUNC_IMPL(__imp__sub_83CD1794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1798"))) PPC_WEAK_FUNC(sub_83CD1798);
PPC_FUNC_IMPL(__imp__sub_83CD1798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD17A4"))) PPC_WEAK_FUNC(sub_83CD17A4);
PPC_FUNC_IMPL(__imp__sub_83CD17A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD17A8"))) PPC_WEAK_FUNC(sub_83CD17A8);
PPC_FUNC_IMPL(__imp__sub_83CD17A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD17B4"))) PPC_WEAK_FUNC(sub_83CD17B4);
PPC_FUNC_IMPL(__imp__sub_83CD17B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD17B8"))) PPC_WEAK_FUNC(sub_83CD17B8);
PPC_FUNC_IMPL(__imp__sub_83CD17B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21520
	ctx.r3.s64 = ctx.r11.s64 + -21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD17C4"))) PPC_WEAK_FUNC(sub_83CD17C4);
PPC_FUNC_IMPL(__imp__sub_83CD17C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD17C8"))) PPC_WEAK_FUNC(sub_83CD17C8);
PPC_FUNC_IMPL(__imp__sub_83CD17C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD17D4"))) PPC_WEAK_FUNC(sub_83CD17D4);
PPC_FUNC_IMPL(__imp__sub_83CD17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD17D8"))) PPC_WEAK_FUNC(sub_83CD17D8);
PPC_FUNC_IMPL(__imp__sub_83CD17D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7312
	ctx.r3.s64 = ctx.r11.s64 + -7312;
	// bl 0x83523120
	ctx.lr = 0x83CD17F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21504
	ctx.r3.s64 = ctx.r10.s64 + -21504;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD17FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD180C"))) PPC_WEAK_FUNC(sub_83CD180C);
PPC_FUNC_IMPL(__imp__sub_83CD180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1810"))) PPC_WEAK_FUNC(sub_83CD1810);
PPC_FUNC_IMPL(__imp__sub_83CD1810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD181C"))) PPC_WEAK_FUNC(sub_83CD181C);
PPC_FUNC_IMPL(__imp__sub_83CD181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1820"))) PPC_WEAK_FUNC(sub_83CD1820);
PPC_FUNC_IMPL(__imp__sub_83CD1820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD182C"))) PPC_WEAK_FUNC(sub_83CD182C);
PPC_FUNC_IMPL(__imp__sub_83CD182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1830"))) PPC_WEAK_FUNC(sub_83CD1830);
PPC_FUNC_IMPL(__imp__sub_83CD1830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21472
	ctx.r3.s64 = ctx.r11.s64 + -21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD183C"))) PPC_WEAK_FUNC(sub_83CD183C);
PPC_FUNC_IMPL(__imp__sub_83CD183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1840"))) PPC_WEAK_FUNC(sub_83CD1840);
PPC_FUNC_IMPL(__imp__sub_83CD1840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD184C"))) PPC_WEAK_FUNC(sub_83CD184C);
PPC_FUNC_IMPL(__imp__sub_83CD184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1850"))) PPC_WEAK_FUNC(sub_83CD1850);
PPC_FUNC_IMPL(__imp__sub_83CD1850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD185C"))) PPC_WEAK_FUNC(sub_83CD185C);
PPC_FUNC_IMPL(__imp__sub_83CD185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1860"))) PPC_WEAK_FUNC(sub_83CD1860);
PPC_FUNC_IMPL(__imp__sub_83CD1860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21448
	ctx.r3.s64 = ctx.r11.s64 + -21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD186C"))) PPC_WEAK_FUNC(sub_83CD186C);
PPC_FUNC_IMPL(__imp__sub_83CD186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1870"))) PPC_WEAK_FUNC(sub_83CD1870);
PPC_FUNC_IMPL(__imp__sub_83CD1870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21440
	ctx.r3.s64 = ctx.r11.s64 + -21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD187C"))) PPC_WEAK_FUNC(sub_83CD187C);
PPC_FUNC_IMPL(__imp__sub_83CD187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1880"))) PPC_WEAK_FUNC(sub_83CD1880);
PPC_FUNC_IMPL(__imp__sub_83CD1880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD188C"))) PPC_WEAK_FUNC(sub_83CD188C);
PPC_FUNC_IMPL(__imp__sub_83CD188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1890"))) PPC_WEAK_FUNC(sub_83CD1890);
PPC_FUNC_IMPL(__imp__sub_83CD1890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD189C"))) PPC_WEAK_FUNC(sub_83CD189C);
PPC_FUNC_IMPL(__imp__sub_83CD189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD18A0"))) PPC_WEAK_FUNC(sub_83CD18A0);
PPC_FUNC_IMPL(__imp__sub_83CD18A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD18AC"))) PPC_WEAK_FUNC(sub_83CD18AC);
PPC_FUNC_IMPL(__imp__sub_83CD18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD18B0"))) PPC_WEAK_FUNC(sub_83CD18B0);
PPC_FUNC_IMPL(__imp__sub_83CD18B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD18BC"))) PPC_WEAK_FUNC(sub_83CD18BC);
PPC_FUNC_IMPL(__imp__sub_83CD18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD18C0"))) PPC_WEAK_FUNC(sub_83CD18C0);
PPC_FUNC_IMPL(__imp__sub_83CD18C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD18CC"))) PPC_WEAK_FUNC(sub_83CD18CC);
PPC_FUNC_IMPL(__imp__sub_83CD18CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD18D0"))) PPC_WEAK_FUNC(sub_83CD18D0);
PPC_FUNC_IMPL(__imp__sub_83CD18D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// bl 0x83523120
	ctx.lr = 0x83CD18E8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21392
	ctx.r3.s64 = ctx.r10.s64 + -21392;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD18F4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1904"))) PPC_WEAK_FUNC(sub_83CD1904);
PPC_FUNC_IMPL(__imp__sub_83CD1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1908"))) PPC_WEAK_FUNC(sub_83CD1908);
PPC_FUNC_IMPL(__imp__sub_83CD1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1914"))) PPC_WEAK_FUNC(sub_83CD1914);
PPC_FUNC_IMPL(__imp__sub_83CD1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1918"))) PPC_WEAK_FUNC(sub_83CD1918);
PPC_FUNC_IMPL(__imp__sub_83CD1918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1924"))) PPC_WEAK_FUNC(sub_83CD1924);
PPC_FUNC_IMPL(__imp__sub_83CD1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1928"))) PPC_WEAK_FUNC(sub_83CD1928);
PPC_FUNC_IMPL(__imp__sub_83CD1928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1934"))) PPC_WEAK_FUNC(sub_83CD1934);
PPC_FUNC_IMPL(__imp__sub_83CD1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1938"))) PPC_WEAK_FUNC(sub_83CD1938);
PPC_FUNC_IMPL(__imp__sub_83CD1938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1944"))) PPC_WEAK_FUNC(sub_83CD1944);
PPC_FUNC_IMPL(__imp__sub_83CD1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1948"))) PPC_WEAK_FUNC(sub_83CD1948);
PPC_FUNC_IMPL(__imp__sub_83CD1948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1954"))) PPC_WEAK_FUNC(sub_83CD1954);
PPC_FUNC_IMPL(__imp__sub_83CD1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1958"))) PPC_WEAK_FUNC(sub_83CD1958);
PPC_FUNC_IMPL(__imp__sub_83CD1958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21336
	ctx.r3.s64 = ctx.r11.s64 + -21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1964"))) PPC_WEAK_FUNC(sub_83CD1964);
PPC_FUNC_IMPL(__imp__sub_83CD1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1968"))) PPC_WEAK_FUNC(sub_83CD1968);
PPC_FUNC_IMPL(__imp__sub_83CD1968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1974"))) PPC_WEAK_FUNC(sub_83CD1974);
PPC_FUNC_IMPL(__imp__sub_83CD1974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1978"))) PPC_WEAK_FUNC(sub_83CD1978);
PPC_FUNC_IMPL(__imp__sub_83CD1978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1984"))) PPC_WEAK_FUNC(sub_83CD1984);
PPC_FUNC_IMPL(__imp__sub_83CD1984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1988"))) PPC_WEAK_FUNC(sub_83CD1988);
PPC_FUNC_IMPL(__imp__sub_83CD1988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21312
	ctx.r3.s64 = ctx.r11.s64 + -21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1994"))) PPC_WEAK_FUNC(sub_83CD1994);
PPC_FUNC_IMPL(__imp__sub_83CD1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1998"))) PPC_WEAK_FUNC(sub_83CD1998);
PPC_FUNC_IMPL(__imp__sub_83CD1998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21304
	ctx.r3.s64 = ctx.r11.s64 + -21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD19A4"))) PPC_WEAK_FUNC(sub_83CD19A4);
PPC_FUNC_IMPL(__imp__sub_83CD19A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD19A8"))) PPC_WEAK_FUNC(sub_83CD19A8);
PPC_FUNC_IMPL(__imp__sub_83CD19A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21296
	ctx.r3.s64 = ctx.r11.s64 + -21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD19B4"))) PPC_WEAK_FUNC(sub_83CD19B4);
PPC_FUNC_IMPL(__imp__sub_83CD19B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD19B8"))) PPC_WEAK_FUNC(sub_83CD19B8);
PPC_FUNC_IMPL(__imp__sub_83CD19B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21288
	ctx.r3.s64 = ctx.r11.s64 + -21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD19C4"))) PPC_WEAK_FUNC(sub_83CD19C4);
PPC_FUNC_IMPL(__imp__sub_83CD19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD19C8"))) PPC_WEAK_FUNC(sub_83CD19C8);
PPC_FUNC_IMPL(__imp__sub_83CD19C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7268
	ctx.r7.s64 = ctx.r8.s64 + -7268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD19F0"))) PPC_WEAK_FUNC(sub_83CD19F0);
PPC_FUNC_IMPL(__imp__sub_83CD19F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-752
	ctx.r6.s64 = ctx.r7.s64 + -752;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7268(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7268);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1A38"))) PPC_WEAK_FUNC(sub_83CD1A38);
PPC_FUNC_IMPL(__imp__sub_83CD1A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7284
	ctx.r3.s64 = ctx.r11.s64 + -7284;
	// bl 0x83523120
	ctx.lr = 0x83CD1A50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21280
	ctx.r3.s64 = ctx.r10.s64 + -21280;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1A5C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1A6C"))) PPC_WEAK_FUNC(sub_83CD1A6C);
PPC_FUNC_IMPL(__imp__sub_83CD1A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1A70"))) PPC_WEAK_FUNC(sub_83CD1A70);
PPC_FUNC_IMPL(__imp__sub_83CD1A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21264
	ctx.r3.s64 = ctx.r11.s64 + -21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1A7C"))) PPC_WEAK_FUNC(sub_83CD1A7C);
PPC_FUNC_IMPL(__imp__sub_83CD1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1A80"))) PPC_WEAK_FUNC(sub_83CD1A80);
PPC_FUNC_IMPL(__imp__sub_83CD1A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// bl 0x8259af80
	ctx.lr = 0x83CD1A98;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21200
	ctx.r3.s64 = ctx.r10.s64 + -21200;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1AA4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1AB4"))) PPC_WEAK_FUNC(sub_83CD1AB4);
PPC_FUNC_IMPL(__imp__sub_83CD1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1AB8"))) PPC_WEAK_FUNC(sub_83CD1AB8);
PPC_FUNC_IMPL(__imp__sub_83CD1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7280
	ctx.r11.s64 = ctx.r8.s64 + -7280;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21256
	ctx.r3.s64 = ctx.r6.s64 + -21256;
	// stw r10,-7280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7280, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1AE8"))) PPC_WEAK_FUNC(sub_83CD1AE8);
PPC_FUNC_IMPL(__imp__sub_83CD1AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21192
	ctx.r3.s64 = ctx.r11.s64 + -21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1AF4"))) PPC_WEAK_FUNC(sub_83CD1AF4);
PPC_FUNC_IMPL(__imp__sub_83CD1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1AF8"))) PPC_WEAK_FUNC(sub_83CD1AF8);
PPC_FUNC_IMPL(__imp__sub_83CD1AF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// addi r30,r31,-6896
	ctx.r30.s64 = ctx.r31.s64 + -6896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5c280
	ctx.lr = 0x83CD1B1C;
	sub_82A5C280(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-25508
	ctx.r10.s64 = ctx.r10.s64 + -25508;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// stw r10,-6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6896, ctx.r10.u32);
	// addi r3,r11,-21248
	ctx.r3.s64 = ctx.r11.s64 + -21248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1B3C;
	sub_831CDCC8(ctx, base);
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

__attribute__((alias("__imp__sub_83CD1B54"))) PPC_WEAK_FUNC(sub_83CD1B54);
PPC_FUNC_IMPL(__imp__sub_83CD1B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1B58"))) PPC_WEAK_FUNC(sub_83CD1B58);
PPC_FUNC_IMPL(__imp__sub_83CD1B58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// addi r30,r31,-6864
	ctx.r30.s64 = ctx.r31.s64 + -6864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5c280
	ctx.lr = 0x83CD1B7C;
	sub_82A5C280(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-25508
	ctx.r10.s64 = ctx.r10.s64 + -25508;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// stw r10,-6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6864, ctx.r10.u32);
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1B9C;
	sub_831CDCC8(ctx, base);
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

__attribute__((alias("__imp__sub_83CD1BB4"))) PPC_WEAK_FUNC(sub_83CD1BB4);
PPC_FUNC_IMPL(__imp__sub_83CD1BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1BB8"))) PPC_WEAK_FUNC(sub_83CD1BB8);
PPC_FUNC_IMPL(__imp__sub_83CD1BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1BC4"))) PPC_WEAK_FUNC(sub_83CD1BC4);
PPC_FUNC_IMPL(__imp__sub_83CD1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1BC8"))) PPC_WEAK_FUNC(sub_83CD1BC8);
PPC_FUNC_IMPL(__imp__sub_83CD1BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21088
	ctx.r3.s64 = ctx.r11.s64 + -21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1BD4"))) PPC_WEAK_FUNC(sub_83CD1BD4);
PPC_FUNC_IMPL(__imp__sub_83CD1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1BD8"))) PPC_WEAK_FUNC(sub_83CD1BD8);
PPC_FUNC_IMPL(__imp__sub_83CD1BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1BE4"))) PPC_WEAK_FUNC(sub_83CD1BE4);
PPC_FUNC_IMPL(__imp__sub_83CD1BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1BE8"))) PPC_WEAK_FUNC(sub_83CD1BE8);
PPC_FUNC_IMPL(__imp__sub_83CD1BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1BF4"))) PPC_WEAK_FUNC(sub_83CD1BF4);
PPC_FUNC_IMPL(__imp__sub_83CD1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1BF8"))) PPC_WEAK_FUNC(sub_83CD1BF8);
PPC_FUNC_IMPL(__imp__sub_83CD1BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21064
	ctx.r3.s64 = ctx.r11.s64 + -21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C04"))) PPC_WEAK_FUNC(sub_83CD1C04);
PPC_FUNC_IMPL(__imp__sub_83CD1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C08"))) PPC_WEAK_FUNC(sub_83CD1C08);
PPC_FUNC_IMPL(__imp__sub_83CD1C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21056
	ctx.r3.s64 = ctx.r11.s64 + -21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C14"))) PPC_WEAK_FUNC(sub_83CD1C14);
PPC_FUNC_IMPL(__imp__sub_83CD1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C18"))) PPC_WEAK_FUNC(sub_83CD1C18);
PPC_FUNC_IMPL(__imp__sub_83CD1C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21048
	ctx.r3.s64 = ctx.r11.s64 + -21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C24"))) PPC_WEAK_FUNC(sub_83CD1C24);
PPC_FUNC_IMPL(__imp__sub_83CD1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C28"))) PPC_WEAK_FUNC(sub_83CD1C28);
PPC_FUNC_IMPL(__imp__sub_83CD1C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C34"))) PPC_WEAK_FUNC(sub_83CD1C34);
PPC_FUNC_IMPL(__imp__sub_83CD1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C38"))) PPC_WEAK_FUNC(sub_83CD1C38);
PPC_FUNC_IMPL(__imp__sub_83CD1C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C44"))) PPC_WEAK_FUNC(sub_83CD1C44);
PPC_FUNC_IMPL(__imp__sub_83CD1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C48"))) PPC_WEAK_FUNC(sub_83CD1C48);
PPC_FUNC_IMPL(__imp__sub_83CD1C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21024
	ctx.r3.s64 = ctx.r11.s64 + -21024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C54"))) PPC_WEAK_FUNC(sub_83CD1C54);
PPC_FUNC_IMPL(__imp__sub_83CD1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C58"))) PPC_WEAK_FUNC(sub_83CD1C58);
PPC_FUNC_IMPL(__imp__sub_83CD1C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C64"))) PPC_WEAK_FUNC(sub_83CD1C64);
PPC_FUNC_IMPL(__imp__sub_83CD1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C68"))) PPC_WEAK_FUNC(sub_83CD1C68);
PPC_FUNC_IMPL(__imp__sub_83CD1C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1C74"))) PPC_WEAK_FUNC(sub_83CD1C74);
PPC_FUNC_IMPL(__imp__sub_83CD1C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1C78"))) PPC_WEAK_FUNC(sub_83CD1C78);
PPC_FUNC_IMPL(__imp__sub_83CD1C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// bl 0x83523120
	ctx.lr = 0x83CD1C90;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-21000
	ctx.r3.s64 = ctx.r10.s64 + -21000;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1C9C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1CAC"))) PPC_WEAK_FUNC(sub_83CD1CAC);
PPC_FUNC_IMPL(__imp__sub_83CD1CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1CB0"))) PPC_WEAK_FUNC(sub_83CD1CB0);
PPC_FUNC_IMPL(__imp__sub_83CD1CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,72
	ctx.r5.s64 = ctx.r4.s64 + 72;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-6780
	ctx.r3.s64 = ctx.r7.s64 + -6780;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1CE0"))) PPC_WEAK_FUNC(sub_83CD1CE0);
PPC_FUNC_IMPL(__imp__sub_83CD1CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6788
	ctx.r7.s64 = ctx.r8.s64 + -6788;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6788);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6788(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6788, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1D08"))) PPC_WEAK_FUNC(sub_83CD1D08);
PPC_FUNC_IMPL(__imp__sub_83CD1D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6820
	ctx.r3.s64 = ctx.r11.s64 + -6820;
	// bl 0x82596fa8
	ctx.lr = 0x83CD1D20;
	sub_82596FA8(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-20984
	ctx.r3.s64 = ctx.r10.s64 + -20984;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1D2C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1D3C"))) PPC_WEAK_FUNC(sub_83CD1D3C);
PPC_FUNC_IMPL(__imp__sub_83CD1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D40"))) PPC_WEAK_FUNC(sub_83CD1D40);
PPC_FUNC_IMPL(__imp__sub_83CD1D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D4C"))) PPC_WEAK_FUNC(sub_83CD1D4C);
PPC_FUNC_IMPL(__imp__sub_83CD1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D50"))) PPC_WEAK_FUNC(sub_83CD1D50);
PPC_FUNC_IMPL(__imp__sub_83CD1D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D5C"))) PPC_WEAK_FUNC(sub_83CD1D5C);
PPC_FUNC_IMPL(__imp__sub_83CD1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D60"))) PPC_WEAK_FUNC(sub_83CD1D60);
PPC_FUNC_IMPL(__imp__sub_83CD1D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20952
	ctx.r3.s64 = ctx.r11.s64 + -20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D6C"))) PPC_WEAK_FUNC(sub_83CD1D6C);
PPC_FUNC_IMPL(__imp__sub_83CD1D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D70"))) PPC_WEAK_FUNC(sub_83CD1D70);
PPC_FUNC_IMPL(__imp__sub_83CD1D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D7C"))) PPC_WEAK_FUNC(sub_83CD1D7C);
PPC_FUNC_IMPL(__imp__sub_83CD1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D80"))) PPC_WEAK_FUNC(sub_83CD1D80);
PPC_FUNC_IMPL(__imp__sub_83CD1D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D8C"))) PPC_WEAK_FUNC(sub_83CD1D8C);
PPC_FUNC_IMPL(__imp__sub_83CD1D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1D90"))) PPC_WEAK_FUNC(sub_83CD1D90);
PPC_FUNC_IMPL(__imp__sub_83CD1D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20928
	ctx.r3.s64 = ctx.r11.s64 + -20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1D9C"))) PPC_WEAK_FUNC(sub_83CD1D9C);
PPC_FUNC_IMPL(__imp__sub_83CD1D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DA0"))) PPC_WEAK_FUNC(sub_83CD1DA0);
PPC_FUNC_IMPL(__imp__sub_83CD1DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20920
	ctx.r3.s64 = ctx.r11.s64 + -20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DAC"))) PPC_WEAK_FUNC(sub_83CD1DAC);
PPC_FUNC_IMPL(__imp__sub_83CD1DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DB0"))) PPC_WEAK_FUNC(sub_83CD1DB0);
PPC_FUNC_IMPL(__imp__sub_83CD1DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20912
	ctx.r3.s64 = ctx.r11.s64 + -20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DBC"))) PPC_WEAK_FUNC(sub_83CD1DBC);
PPC_FUNC_IMPL(__imp__sub_83CD1DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DC0"))) PPC_WEAK_FUNC(sub_83CD1DC0);
PPC_FUNC_IMPL(__imp__sub_83CD1DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DCC"))) PPC_WEAK_FUNC(sub_83CD1DCC);
PPC_FUNC_IMPL(__imp__sub_83CD1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DD0"))) PPC_WEAK_FUNC(sub_83CD1DD0);
PPC_FUNC_IMPL(__imp__sub_83CD1DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20896
	ctx.r3.s64 = ctx.r11.s64 + -20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DDC"))) PPC_WEAK_FUNC(sub_83CD1DDC);
PPC_FUNC_IMPL(__imp__sub_83CD1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DE0"))) PPC_WEAK_FUNC(sub_83CD1DE0);
PPC_FUNC_IMPL(__imp__sub_83CD1DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DEC"))) PPC_WEAK_FUNC(sub_83CD1DEC);
PPC_FUNC_IMPL(__imp__sub_83CD1DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1DF0"))) PPC_WEAK_FUNC(sub_83CD1DF0);
PPC_FUNC_IMPL(__imp__sub_83CD1DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20880
	ctx.r3.s64 = ctx.r11.s64 + -20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1DFC"))) PPC_WEAK_FUNC(sub_83CD1DFC);
PPC_FUNC_IMPL(__imp__sub_83CD1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E00"))) PPC_WEAK_FUNC(sub_83CD1E00);
PPC_FUNC_IMPL(__imp__sub_83CD1E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// bl 0x83523120
	ctx.lr = 0x83CD1E18;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-20872
	ctx.r3.s64 = ctx.r10.s64 + -20872;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1E24;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1E34"))) PPC_WEAK_FUNC(sub_83CD1E34);
PPC_FUNC_IMPL(__imp__sub_83CD1E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E38"))) PPC_WEAK_FUNC(sub_83CD1E38);
PPC_FUNC_IMPL(__imp__sub_83CD1E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E44"))) PPC_WEAK_FUNC(sub_83CD1E44);
PPC_FUNC_IMPL(__imp__sub_83CD1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E48"))) PPC_WEAK_FUNC(sub_83CD1E48);
PPC_FUNC_IMPL(__imp__sub_83CD1E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E54"))) PPC_WEAK_FUNC(sub_83CD1E54);
PPC_FUNC_IMPL(__imp__sub_83CD1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E58"))) PPC_WEAK_FUNC(sub_83CD1E58);
PPC_FUNC_IMPL(__imp__sub_83CD1E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E64"))) PPC_WEAK_FUNC(sub_83CD1E64);
PPC_FUNC_IMPL(__imp__sub_83CD1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E68"))) PPC_WEAK_FUNC(sub_83CD1E68);
PPC_FUNC_IMPL(__imp__sub_83CD1E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20832
	ctx.r3.s64 = ctx.r11.s64 + -20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E74"))) PPC_WEAK_FUNC(sub_83CD1E74);
PPC_FUNC_IMPL(__imp__sub_83CD1E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E78"))) PPC_WEAK_FUNC(sub_83CD1E78);
PPC_FUNC_IMPL(__imp__sub_83CD1E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20824
	ctx.r3.s64 = ctx.r11.s64 + -20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E84"))) PPC_WEAK_FUNC(sub_83CD1E84);
PPC_FUNC_IMPL(__imp__sub_83CD1E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E88"))) PPC_WEAK_FUNC(sub_83CD1E88);
PPC_FUNC_IMPL(__imp__sub_83CD1E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1E94"))) PPC_WEAK_FUNC(sub_83CD1E94);
PPC_FUNC_IMPL(__imp__sub_83CD1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1E98"))) PPC_WEAK_FUNC(sub_83CD1E98);
PPC_FUNC_IMPL(__imp__sub_83CD1E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1EA4"))) PPC_WEAK_FUNC(sub_83CD1EA4);
PPC_FUNC_IMPL(__imp__sub_83CD1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1EA8"))) PPC_WEAK_FUNC(sub_83CD1EA8);
PPC_FUNC_IMPL(__imp__sub_83CD1EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1EB4"))) PPC_WEAK_FUNC(sub_83CD1EB4);
PPC_FUNC_IMPL(__imp__sub_83CD1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1EB8"))) PPC_WEAK_FUNC(sub_83CD1EB8);
PPC_FUNC_IMPL(__imp__sub_83CD1EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20792
	ctx.r3.s64 = ctx.r11.s64 + -20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1EC4"))) PPC_WEAK_FUNC(sub_83CD1EC4);
PPC_FUNC_IMPL(__imp__sub_83CD1EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1EC8"))) PPC_WEAK_FUNC(sub_83CD1EC8);
PPC_FUNC_IMPL(__imp__sub_83CD1EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20784
	ctx.r3.s64 = ctx.r11.s64 + -20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1ED4"))) PPC_WEAK_FUNC(sub_83CD1ED4);
PPC_FUNC_IMPL(__imp__sub_83CD1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1ED8"))) PPC_WEAK_FUNC(sub_83CD1ED8);
PPC_FUNC_IMPL(__imp__sub_83CD1ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20776
	ctx.r3.s64 = ctx.r11.s64 + -20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1EE4"))) PPC_WEAK_FUNC(sub_83CD1EE4);
PPC_FUNC_IMPL(__imp__sub_83CD1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1EE8"))) PPC_WEAK_FUNC(sub_83CD1EE8);
PPC_FUNC_IMPL(__imp__sub_83CD1EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1EF4"))) PPC_WEAK_FUNC(sub_83CD1EF4);
PPC_FUNC_IMPL(__imp__sub_83CD1EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1EF8"))) PPC_WEAK_FUNC(sub_83CD1EF8);
PPC_FUNC_IMPL(__imp__sub_83CD1EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6732
	ctx.r7.s64 = ctx.r8.s64 + -6732;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6732);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6732, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1F20"))) PPC_WEAK_FUNC(sub_83CD1F20);
PPC_FUNC_IMPL(__imp__sub_83CD1F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// bl 0x83523120
	ctx.lr = 0x83CD1F38;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-20760
	ctx.r3.s64 = ctx.r10.s64 + -20760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1F44;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1F54"))) PPC_WEAK_FUNC(sub_83CD1F54);
PPC_FUNC_IMPL(__imp__sub_83CD1F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1F58"))) PPC_WEAK_FUNC(sub_83CD1F58);
PPC_FUNC_IMPL(__imp__sub_83CD1F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1F64"))) PPC_WEAK_FUNC(sub_83CD1F64);
PPC_FUNC_IMPL(__imp__sub_83CD1F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

