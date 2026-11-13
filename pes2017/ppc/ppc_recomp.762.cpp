#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C37F78"))) PPC_WEAK_FUNC(sub_83C37F78);
PPC_FUNC_IMPL(__imp__sub_83C37F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25552
	ctx.r3.s64 = ctx.r11.s64 + 25552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37F84"))) PPC_WEAK_FUNC(sub_83C37F84);
PPC_FUNC_IMPL(__imp__sub_83C37F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37F88"))) PPC_WEAK_FUNC(sub_83C37F88);
PPC_FUNC_IMPL(__imp__sub_83C37F88) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x8259af80
	ctx.lr = 0x83C37FA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25568
	ctx.r3.s64 = ctx.r10.s64 + 25568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C37FAC;
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

__attribute__((alias("__imp__sub_83C37FBC"))) PPC_WEAK_FUNC(sub_83C37FBC);
PPC_FUNC_IMPL(__imp__sub_83C37FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C37FC0"))) PPC_WEAK_FUNC(sub_83C37FC0);
PPC_FUNC_IMPL(__imp__sub_83C37FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21692
	ctx.r11.s64 = ctx.r8.s64 + 21692;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25560
	ctx.r3.s64 = ctx.r6.s64 + 25560;
	// stw r10,21692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37FF0"))) PPC_WEAK_FUNC(sub_83C37FF0);
PPC_FUNC_IMPL(__imp__sub_83C37FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C37FFC"))) PPC_WEAK_FUNC(sub_83C37FFC);
PPC_FUNC_IMPL(__imp__sub_83C37FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38000"))) PPC_WEAK_FUNC(sub_83C38000);
PPC_FUNC_IMPL(__imp__sub_83C38000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3800C"))) PPC_WEAK_FUNC(sub_83C3800C);
PPC_FUNC_IMPL(__imp__sub_83C3800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38010"))) PPC_WEAK_FUNC(sub_83C38010);
PPC_FUNC_IMPL(__imp__sub_83C38010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25592
	ctx.r3.s64 = ctx.r11.s64 + 25592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3801C"))) PPC_WEAK_FUNC(sub_83C3801C);
PPC_FUNC_IMPL(__imp__sub_83C3801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38020"))) PPC_WEAK_FUNC(sub_83C38020);
PPC_FUNC_IMPL(__imp__sub_83C38020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25600
	ctx.r3.s64 = ctx.r11.s64 + 25600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3802C"))) PPC_WEAK_FUNC(sub_83C3802C);
PPC_FUNC_IMPL(__imp__sub_83C3802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38030"))) PPC_WEAK_FUNC(sub_83C38030);
PPC_FUNC_IMPL(__imp__sub_83C38030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25608
	ctx.r3.s64 = ctx.r11.s64 + 25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3803C"))) PPC_WEAK_FUNC(sub_83C3803C);
PPC_FUNC_IMPL(__imp__sub_83C3803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38040"))) PPC_WEAK_FUNC(sub_83C38040);
PPC_FUNC_IMPL(__imp__sub_83C38040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25616
	ctx.r3.s64 = ctx.r11.s64 + 25616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3804C"))) PPC_WEAK_FUNC(sub_83C3804C);
PPC_FUNC_IMPL(__imp__sub_83C3804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38050"))) PPC_WEAK_FUNC(sub_83C38050);
PPC_FUNC_IMPL(__imp__sub_83C38050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25624
	ctx.r3.s64 = ctx.r11.s64 + 25624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3805C"))) PPC_WEAK_FUNC(sub_83C3805C);
PPC_FUNC_IMPL(__imp__sub_83C3805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38060"))) PPC_WEAK_FUNC(sub_83C38060);
PPC_FUNC_IMPL(__imp__sub_83C38060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25632
	ctx.r3.s64 = ctx.r11.s64 + 25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3806C"))) PPC_WEAK_FUNC(sub_83C3806C);
PPC_FUNC_IMPL(__imp__sub_83C3806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38070"))) PPC_WEAK_FUNC(sub_83C38070);
PPC_FUNC_IMPL(__imp__sub_83C38070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25640
	ctx.r3.s64 = ctx.r11.s64 + 25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3807C"))) PPC_WEAK_FUNC(sub_83C3807C);
PPC_FUNC_IMPL(__imp__sub_83C3807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38080"))) PPC_WEAK_FUNC(sub_83C38080);
PPC_FUNC_IMPL(__imp__sub_83C38080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25648
	ctx.r3.s64 = ctx.r11.s64 + 25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3808C"))) PPC_WEAK_FUNC(sub_83C3808C);
PPC_FUNC_IMPL(__imp__sub_83C3808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38090"))) PPC_WEAK_FUNC(sub_83C38090);
PPC_FUNC_IMPL(__imp__sub_83C38090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3809C"))) PPC_WEAK_FUNC(sub_83C3809C);
PPC_FUNC_IMPL(__imp__sub_83C3809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C380A0"))) PPC_WEAK_FUNC(sub_83C380A0);
PPC_FUNC_IMPL(__imp__sub_83C380A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25664
	ctx.r3.s64 = ctx.r11.s64 + 25664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C380AC"))) PPC_WEAK_FUNC(sub_83C380AC);
PPC_FUNC_IMPL(__imp__sub_83C380AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C380B0"))) PPC_WEAK_FUNC(sub_83C380B0);
PPC_FUNC_IMPL(__imp__sub_83C380B0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// bl 0x83523120
	ctx.lr = 0x83C380C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25672
	ctx.r3.s64 = ctx.r10.s64 + 25672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C380D4;
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

__attribute__((alias("__imp__sub_83C380E4"))) PPC_WEAK_FUNC(sub_83C380E4);
PPC_FUNC_IMPL(__imp__sub_83C380E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C380E8"))) PPC_WEAK_FUNC(sub_83C380E8);
PPC_FUNC_IMPL(__imp__sub_83C380E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22072
	ctx.r7.s64 = ctx.r8.s64 + 22072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38110"))) PPC_WEAK_FUNC(sub_83C38110);
PPC_FUNC_IMPL(__imp__sub_83C38110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23544
	ctx.r6.s64 = ctx.r7.s64 + -23544;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22072);
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
	// std r9,-23544(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23544, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38158"))) PPC_WEAK_FUNC(sub_83C38158);
PPC_FUNC_IMPL(__imp__sub_83C38158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25688
	ctx.r3.s64 = ctx.r11.s64 + 25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38164"))) PPC_WEAK_FUNC(sub_83C38164);
PPC_FUNC_IMPL(__imp__sub_83C38164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38168"))) PPC_WEAK_FUNC(sub_83C38168);
PPC_FUNC_IMPL(__imp__sub_83C38168) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// bl 0x8259af80
	ctx.lr = 0x83C38180;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25704
	ctx.r3.s64 = ctx.r10.s64 + 25704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3818C;
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

__attribute__((alias("__imp__sub_83C3819C"))) PPC_WEAK_FUNC(sub_83C3819C);
PPC_FUNC_IMPL(__imp__sub_83C3819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C381A0"))) PPC_WEAK_FUNC(sub_83C381A0);
PPC_FUNC_IMPL(__imp__sub_83C381A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22060
	ctx.r11.s64 = ctx.r8.s64 + 22060;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23568);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25696
	ctx.r3.s64 = ctx.r6.s64 + 25696;
	// stw r10,22060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C381D0"))) PPC_WEAK_FUNC(sub_83C381D0);
PPC_FUNC_IMPL(__imp__sub_83C381D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25712
	ctx.r3.s64 = ctx.r11.s64 + 25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C381DC"))) PPC_WEAK_FUNC(sub_83C381DC);
PPC_FUNC_IMPL(__imp__sub_83C381DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C381E0"))) PPC_WEAK_FUNC(sub_83C381E0);
PPC_FUNC_IMPL(__imp__sub_83C381E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25720
	ctx.r3.s64 = ctx.r11.s64 + 25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C381EC"))) PPC_WEAK_FUNC(sub_83C381EC);
PPC_FUNC_IMPL(__imp__sub_83C381EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C381F0"))) PPC_WEAK_FUNC(sub_83C381F0);
PPC_FUNC_IMPL(__imp__sub_83C381F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25728
	ctx.r3.s64 = ctx.r11.s64 + 25728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C381FC"))) PPC_WEAK_FUNC(sub_83C381FC);
PPC_FUNC_IMPL(__imp__sub_83C381FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38200"))) PPC_WEAK_FUNC(sub_83C38200);
PPC_FUNC_IMPL(__imp__sub_83C38200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3820C"))) PPC_WEAK_FUNC(sub_83C3820C);
PPC_FUNC_IMPL(__imp__sub_83C3820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38210"))) PPC_WEAK_FUNC(sub_83C38210);
PPC_FUNC_IMPL(__imp__sub_83C38210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25744
	ctx.r3.s64 = ctx.r11.s64 + 25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3821C"))) PPC_WEAK_FUNC(sub_83C3821C);
PPC_FUNC_IMPL(__imp__sub_83C3821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38220"))) PPC_WEAK_FUNC(sub_83C38220);
PPC_FUNC_IMPL(__imp__sub_83C38220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25752
	ctx.r3.s64 = ctx.r11.s64 + 25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3822C"))) PPC_WEAK_FUNC(sub_83C3822C);
PPC_FUNC_IMPL(__imp__sub_83C3822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38230"))) PPC_WEAK_FUNC(sub_83C38230);
PPC_FUNC_IMPL(__imp__sub_83C38230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25760
	ctx.r3.s64 = ctx.r11.s64 + 25760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3823C"))) PPC_WEAK_FUNC(sub_83C3823C);
PPC_FUNC_IMPL(__imp__sub_83C3823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38240"))) PPC_WEAK_FUNC(sub_83C38240);
PPC_FUNC_IMPL(__imp__sub_83C38240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25768
	ctx.r3.s64 = ctx.r11.s64 + 25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3824C"))) PPC_WEAK_FUNC(sub_83C3824C);
PPC_FUNC_IMPL(__imp__sub_83C3824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38250"))) PPC_WEAK_FUNC(sub_83C38250);
PPC_FUNC_IMPL(__imp__sub_83C38250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25776
	ctx.r3.s64 = ctx.r11.s64 + 25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3825C"))) PPC_WEAK_FUNC(sub_83C3825C);
PPC_FUNC_IMPL(__imp__sub_83C3825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38260"))) PPC_WEAK_FUNC(sub_83C38260);
PPC_FUNC_IMPL(__imp__sub_83C38260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25784
	ctx.r3.s64 = ctx.r11.s64 + 25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3826C"))) PPC_WEAK_FUNC(sub_83C3826C);
PPC_FUNC_IMPL(__imp__sub_83C3826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38270"))) PPC_WEAK_FUNC(sub_83C38270);
PPC_FUNC_IMPL(__imp__sub_83C38270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25792
	ctx.r3.s64 = ctx.r11.s64 + 25792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3827C"))) PPC_WEAK_FUNC(sub_83C3827C);
PPC_FUNC_IMPL(__imp__sub_83C3827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38280"))) PPC_WEAK_FUNC(sub_83C38280);
PPC_FUNC_IMPL(__imp__sub_83C38280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25800
	ctx.r3.s64 = ctx.r11.s64 + 25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3828C"))) PPC_WEAK_FUNC(sub_83C3828C);
PPC_FUNC_IMPL(__imp__sub_83C3828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38290"))) PPC_WEAK_FUNC(sub_83C38290);
PPC_FUNC_IMPL(__imp__sub_83C38290) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// bl 0x83523120
	ctx.lr = 0x83C382A8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25808
	ctx.r3.s64 = ctx.r10.s64 + 25808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C382B4;
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

__attribute__((alias("__imp__sub_83C382C4"))) PPC_WEAK_FUNC(sub_83C382C4);
PPC_FUNC_IMPL(__imp__sub_83C382C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C382C8"))) PPC_WEAK_FUNC(sub_83C382C8);
PPC_FUNC_IMPL(__imp__sub_83C382C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22440
	ctx.r7.s64 = ctx.r8.s64 + 22440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C382F0"))) PPC_WEAK_FUNC(sub_83C382F0);
PPC_FUNC_IMPL(__imp__sub_83C382F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23416
	ctx.r6.s64 = ctx.r7.s64 + -23416;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22440);
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
	// std r9,-23416(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38338"))) PPC_WEAK_FUNC(sub_83C38338);
PPC_FUNC_IMPL(__imp__sub_83C38338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25824
	ctx.r3.s64 = ctx.r11.s64 + 25824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38344"))) PPC_WEAK_FUNC(sub_83C38344);
PPC_FUNC_IMPL(__imp__sub_83C38344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38348"))) PPC_WEAK_FUNC(sub_83C38348);
PPC_FUNC_IMPL(__imp__sub_83C38348) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// bl 0x8259af80
	ctx.lr = 0x83C38360;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25840
	ctx.r3.s64 = ctx.r10.s64 + 25840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3836C;
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

__attribute__((alias("__imp__sub_83C3837C"))) PPC_WEAK_FUNC(sub_83C3837C);
PPC_FUNC_IMPL(__imp__sub_83C3837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38380"))) PPC_WEAK_FUNC(sub_83C38380);
PPC_FUNC_IMPL(__imp__sub_83C38380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22428
	ctx.r11.s64 = ctx.r8.s64 + 22428;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25832
	ctx.r3.s64 = ctx.r6.s64 + 25832;
	// stw r10,22428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383B0"))) PPC_WEAK_FUNC(sub_83C383B0);
PPC_FUNC_IMPL(__imp__sub_83C383B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25848
	ctx.r3.s64 = ctx.r11.s64 + 25848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383BC"))) PPC_WEAK_FUNC(sub_83C383BC);
PPC_FUNC_IMPL(__imp__sub_83C383BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C383C0"))) PPC_WEAK_FUNC(sub_83C383C0);
PPC_FUNC_IMPL(__imp__sub_83C383C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25856
	ctx.r3.s64 = ctx.r11.s64 + 25856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383CC"))) PPC_WEAK_FUNC(sub_83C383CC);
PPC_FUNC_IMPL(__imp__sub_83C383CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C383D0"))) PPC_WEAK_FUNC(sub_83C383D0);
PPC_FUNC_IMPL(__imp__sub_83C383D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383DC"))) PPC_WEAK_FUNC(sub_83C383DC);
PPC_FUNC_IMPL(__imp__sub_83C383DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C383E0"))) PPC_WEAK_FUNC(sub_83C383E0);
PPC_FUNC_IMPL(__imp__sub_83C383E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25872
	ctx.r3.s64 = ctx.r11.s64 + 25872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383EC"))) PPC_WEAK_FUNC(sub_83C383EC);
PPC_FUNC_IMPL(__imp__sub_83C383EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C383F0"))) PPC_WEAK_FUNC(sub_83C383F0);
PPC_FUNC_IMPL(__imp__sub_83C383F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25880
	ctx.r3.s64 = ctx.r11.s64 + 25880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C383FC"))) PPC_WEAK_FUNC(sub_83C383FC);
PPC_FUNC_IMPL(__imp__sub_83C383FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38400"))) PPC_WEAK_FUNC(sub_83C38400);
PPC_FUNC_IMPL(__imp__sub_83C38400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25888
	ctx.r3.s64 = ctx.r11.s64 + 25888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3840C"))) PPC_WEAK_FUNC(sub_83C3840C);
PPC_FUNC_IMPL(__imp__sub_83C3840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38410"))) PPC_WEAK_FUNC(sub_83C38410);
PPC_FUNC_IMPL(__imp__sub_83C38410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25896
	ctx.r3.s64 = ctx.r11.s64 + 25896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3841C"))) PPC_WEAK_FUNC(sub_83C3841C);
PPC_FUNC_IMPL(__imp__sub_83C3841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38420"))) PPC_WEAK_FUNC(sub_83C38420);
PPC_FUNC_IMPL(__imp__sub_83C38420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25904
	ctx.r3.s64 = ctx.r11.s64 + 25904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3842C"))) PPC_WEAK_FUNC(sub_83C3842C);
PPC_FUNC_IMPL(__imp__sub_83C3842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38430"))) PPC_WEAK_FUNC(sub_83C38430);
PPC_FUNC_IMPL(__imp__sub_83C38430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25912
	ctx.r3.s64 = ctx.r11.s64 + 25912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3843C"))) PPC_WEAK_FUNC(sub_83C3843C);
PPC_FUNC_IMPL(__imp__sub_83C3843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38440"))) PPC_WEAK_FUNC(sub_83C38440);
PPC_FUNC_IMPL(__imp__sub_83C38440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25920
	ctx.r3.s64 = ctx.r11.s64 + 25920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3844C"))) PPC_WEAK_FUNC(sub_83C3844C);
PPC_FUNC_IMPL(__imp__sub_83C3844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38450"))) PPC_WEAK_FUNC(sub_83C38450);
PPC_FUNC_IMPL(__imp__sub_83C38450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3845C"))) PPC_WEAK_FUNC(sub_83C3845C);
PPC_FUNC_IMPL(__imp__sub_83C3845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38460"))) PPC_WEAK_FUNC(sub_83C38460);
PPC_FUNC_IMPL(__imp__sub_83C38460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25936
	ctx.r3.s64 = ctx.r11.s64 + 25936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3846C"))) PPC_WEAK_FUNC(sub_83C3846C);
PPC_FUNC_IMPL(__imp__sub_83C3846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38470"))) PPC_WEAK_FUNC(sub_83C38470);
PPC_FUNC_IMPL(__imp__sub_83C38470) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22792
	ctx.r3.s64 = ctx.r11.s64 + 22792;
	// bl 0x83523120
	ctx.lr = 0x83C38488;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25944
	ctx.r3.s64 = ctx.r10.s64 + 25944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C38494;
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

__attribute__((alias("__imp__sub_83C384A4"))) PPC_WEAK_FUNC(sub_83C384A4);
PPC_FUNC_IMPL(__imp__sub_83C384A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C384A8"))) PPC_WEAK_FUNC(sub_83C384A8);
PPC_FUNC_IMPL(__imp__sub_83C384A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22808
	ctx.r7.s64 = ctx.r8.s64 + 22808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C384D0"))) PPC_WEAK_FUNC(sub_83C384D0);
PPC_FUNC_IMPL(__imp__sub_83C384D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23288
	ctx.r6.s64 = ctx.r7.s64 + -23288;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23360(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23360);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22808(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
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
	// std r9,-23288(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38518"))) PPC_WEAK_FUNC(sub_83C38518);
PPC_FUNC_IMPL(__imp__sub_83C38518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25960
	ctx.r3.s64 = ctx.r11.s64 + 25960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38524"))) PPC_WEAK_FUNC(sub_83C38524);
PPC_FUNC_IMPL(__imp__sub_83C38524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38528"))) PPC_WEAK_FUNC(sub_83C38528);
PPC_FUNC_IMPL(__imp__sub_83C38528) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// bl 0x8259af80
	ctx.lr = 0x83C38540;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,25976
	ctx.r3.s64 = ctx.r10.s64 + 25976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3854C;
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

__attribute__((alias("__imp__sub_83C3855C"))) PPC_WEAK_FUNC(sub_83C3855C);
PPC_FUNC_IMPL(__imp__sub_83C3855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38560"))) PPC_WEAK_FUNC(sub_83C38560);
PPC_FUNC_IMPL(__imp__sub_83C38560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22796
	ctx.r11.s64 = ctx.r8.s64 + 22796;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25968
	ctx.r3.s64 = ctx.r6.s64 + 25968;
	// stw r10,22796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38590"))) PPC_WEAK_FUNC(sub_83C38590);
PPC_FUNC_IMPL(__imp__sub_83C38590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25984
	ctx.r3.s64 = ctx.r11.s64 + 25984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3859C"))) PPC_WEAK_FUNC(sub_83C3859C);
PPC_FUNC_IMPL(__imp__sub_83C3859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385A0"))) PPC_WEAK_FUNC(sub_83C385A0);
PPC_FUNC_IMPL(__imp__sub_83C385A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,25992
	ctx.r3.s64 = ctx.r11.s64 + 25992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385AC"))) PPC_WEAK_FUNC(sub_83C385AC);
PPC_FUNC_IMPL(__imp__sub_83C385AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385B0"))) PPC_WEAK_FUNC(sub_83C385B0);
PPC_FUNC_IMPL(__imp__sub_83C385B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385BC"))) PPC_WEAK_FUNC(sub_83C385BC);
PPC_FUNC_IMPL(__imp__sub_83C385BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385C0"))) PPC_WEAK_FUNC(sub_83C385C0);
PPC_FUNC_IMPL(__imp__sub_83C385C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26008
	ctx.r3.s64 = ctx.r11.s64 + 26008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385CC"))) PPC_WEAK_FUNC(sub_83C385CC);
PPC_FUNC_IMPL(__imp__sub_83C385CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385D0"))) PPC_WEAK_FUNC(sub_83C385D0);
PPC_FUNC_IMPL(__imp__sub_83C385D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26016
	ctx.r3.s64 = ctx.r11.s64 + 26016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385DC"))) PPC_WEAK_FUNC(sub_83C385DC);
PPC_FUNC_IMPL(__imp__sub_83C385DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385E0"))) PPC_WEAK_FUNC(sub_83C385E0);
PPC_FUNC_IMPL(__imp__sub_83C385E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26024
	ctx.r3.s64 = ctx.r11.s64 + 26024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385EC"))) PPC_WEAK_FUNC(sub_83C385EC);
PPC_FUNC_IMPL(__imp__sub_83C385EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C385F0"))) PPC_WEAK_FUNC(sub_83C385F0);
PPC_FUNC_IMPL(__imp__sub_83C385F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26032
	ctx.r3.s64 = ctx.r11.s64 + 26032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C385FC"))) PPC_WEAK_FUNC(sub_83C385FC);
PPC_FUNC_IMPL(__imp__sub_83C385FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38600"))) PPC_WEAK_FUNC(sub_83C38600);
PPC_FUNC_IMPL(__imp__sub_83C38600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26040
	ctx.r3.s64 = ctx.r11.s64 + 26040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3860C"))) PPC_WEAK_FUNC(sub_83C3860C);
PPC_FUNC_IMPL(__imp__sub_83C3860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38610"))) PPC_WEAK_FUNC(sub_83C38610);
PPC_FUNC_IMPL(__imp__sub_83C38610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26048
	ctx.r3.s64 = ctx.r11.s64 + 26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3861C"))) PPC_WEAK_FUNC(sub_83C3861C);
PPC_FUNC_IMPL(__imp__sub_83C3861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38620"))) PPC_WEAK_FUNC(sub_83C38620);
PPC_FUNC_IMPL(__imp__sub_83C38620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26056
	ctx.r3.s64 = ctx.r11.s64 + 26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3862C"))) PPC_WEAK_FUNC(sub_83C3862C);
PPC_FUNC_IMPL(__imp__sub_83C3862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38630"))) PPC_WEAK_FUNC(sub_83C38630);
PPC_FUNC_IMPL(__imp__sub_83C38630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26064
	ctx.r3.s64 = ctx.r11.s64 + 26064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3863C"))) PPC_WEAK_FUNC(sub_83C3863C);
PPC_FUNC_IMPL(__imp__sub_83C3863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38640"))) PPC_WEAK_FUNC(sub_83C38640);
PPC_FUNC_IMPL(__imp__sub_83C38640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26072
	ctx.r3.s64 = ctx.r11.s64 + 26072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3864C"))) PPC_WEAK_FUNC(sub_83C3864C);
PPC_FUNC_IMPL(__imp__sub_83C3864C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38650"))) PPC_WEAK_FUNC(sub_83C38650);
PPC_FUNC_IMPL(__imp__sub_83C38650) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// bl 0x83523120
	ctx.lr = 0x83C38668;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26080
	ctx.r3.s64 = ctx.r10.s64 + 26080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C38674;
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

__attribute__((alias("__imp__sub_83C38684"))) PPC_WEAK_FUNC(sub_83C38684);
PPC_FUNC_IMPL(__imp__sub_83C38684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38688"))) PPC_WEAK_FUNC(sub_83C38688);
PPC_FUNC_IMPL(__imp__sub_83C38688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23176
	ctx.r7.s64 = ctx.r8.s64 + 23176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23176);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23176, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C386B0"))) PPC_WEAK_FUNC(sub_83C386B0);
PPC_FUNC_IMPL(__imp__sub_83C386B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-23160
	ctx.r6.s64 = ctx.r7.s64 + -23160;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23176);
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
	// std r9,-23160(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23160, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C386F8"))) PPC_WEAK_FUNC(sub_83C386F8);
PPC_FUNC_IMPL(__imp__sub_83C386F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38704"))) PPC_WEAK_FUNC(sub_83C38704);
PPC_FUNC_IMPL(__imp__sub_83C38704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38708"))) PPC_WEAK_FUNC(sub_83C38708);
PPC_FUNC_IMPL(__imp__sub_83C38708) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// bl 0x8259af80
	ctx.lr = 0x83C38720;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26112
	ctx.r3.s64 = ctx.r10.s64 + 26112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3872C;
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

__attribute__((alias("__imp__sub_83C3873C"))) PPC_WEAK_FUNC(sub_83C3873C);
PPC_FUNC_IMPL(__imp__sub_83C3873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38740"))) PPC_WEAK_FUNC(sub_83C38740);
PPC_FUNC_IMPL(__imp__sub_83C38740) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23164
	ctx.r11.s64 = ctx.r8.s64 + 23164;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-23184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23184);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26104
	ctx.r3.s64 = ctx.r6.s64 + 26104;
	// stw r10,23164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38770"))) PPC_WEAK_FUNC(sub_83C38770);
PPC_FUNC_IMPL(__imp__sub_83C38770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3877C"))) PPC_WEAK_FUNC(sub_83C3877C);
PPC_FUNC_IMPL(__imp__sub_83C3877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38780"))) PPC_WEAK_FUNC(sub_83C38780);
PPC_FUNC_IMPL(__imp__sub_83C38780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3878C"))) PPC_WEAK_FUNC(sub_83C3878C);
PPC_FUNC_IMPL(__imp__sub_83C3878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38790"))) PPC_WEAK_FUNC(sub_83C38790);
PPC_FUNC_IMPL(__imp__sub_83C38790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26136
	ctx.r3.s64 = ctx.r11.s64 + 26136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3879C"))) PPC_WEAK_FUNC(sub_83C3879C);
PPC_FUNC_IMPL(__imp__sub_83C3879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387A0"))) PPC_WEAK_FUNC(sub_83C387A0);
PPC_FUNC_IMPL(__imp__sub_83C387A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26144
	ctx.r3.s64 = ctx.r11.s64 + 26144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387AC"))) PPC_WEAK_FUNC(sub_83C387AC);
PPC_FUNC_IMPL(__imp__sub_83C387AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387B0"))) PPC_WEAK_FUNC(sub_83C387B0);
PPC_FUNC_IMPL(__imp__sub_83C387B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387BC"))) PPC_WEAK_FUNC(sub_83C387BC);
PPC_FUNC_IMPL(__imp__sub_83C387BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387C0"))) PPC_WEAK_FUNC(sub_83C387C0);
PPC_FUNC_IMPL(__imp__sub_83C387C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26160
	ctx.r3.s64 = ctx.r11.s64 + 26160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387CC"))) PPC_WEAK_FUNC(sub_83C387CC);
PPC_FUNC_IMPL(__imp__sub_83C387CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387D0"))) PPC_WEAK_FUNC(sub_83C387D0);
PPC_FUNC_IMPL(__imp__sub_83C387D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387DC"))) PPC_WEAK_FUNC(sub_83C387DC);
PPC_FUNC_IMPL(__imp__sub_83C387DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387E0"))) PPC_WEAK_FUNC(sub_83C387E0);
PPC_FUNC_IMPL(__imp__sub_83C387E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26176
	ctx.r3.s64 = ctx.r11.s64 + 26176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387EC"))) PPC_WEAK_FUNC(sub_83C387EC);
PPC_FUNC_IMPL(__imp__sub_83C387EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C387F0"))) PPC_WEAK_FUNC(sub_83C387F0);
PPC_FUNC_IMPL(__imp__sub_83C387F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26184
	ctx.r3.s64 = ctx.r11.s64 + 26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C387FC"))) PPC_WEAK_FUNC(sub_83C387FC);
PPC_FUNC_IMPL(__imp__sub_83C387FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38800"))) PPC_WEAK_FUNC(sub_83C38800);
PPC_FUNC_IMPL(__imp__sub_83C38800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3880C"))) PPC_WEAK_FUNC(sub_83C3880C);
PPC_FUNC_IMPL(__imp__sub_83C3880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38810"))) PPC_WEAK_FUNC(sub_83C38810);
PPC_FUNC_IMPL(__imp__sub_83C38810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26200
	ctx.r3.s64 = ctx.r11.s64 + 26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3881C"))) PPC_WEAK_FUNC(sub_83C3881C);
PPC_FUNC_IMPL(__imp__sub_83C3881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38820"))) PPC_WEAK_FUNC(sub_83C38820);
PPC_FUNC_IMPL(__imp__sub_83C38820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26208
	ctx.r3.s64 = ctx.r11.s64 + 26208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3882C"))) PPC_WEAK_FUNC(sub_83C3882C);
PPC_FUNC_IMPL(__imp__sub_83C3882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38830"))) PPC_WEAK_FUNC(sub_83C38830);
PPC_FUNC_IMPL(__imp__sub_83C38830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26216
	ctx.r3.s64 = ctx.r11.s64 + 26216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3883C"))) PPC_WEAK_FUNC(sub_83C3883C);
PPC_FUNC_IMPL(__imp__sub_83C3883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38840"))) PPC_WEAK_FUNC(sub_83C38840);
PPC_FUNC_IMPL(__imp__sub_83C38840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3884C"))) PPC_WEAK_FUNC(sub_83C3884C);
PPC_FUNC_IMPL(__imp__sub_83C3884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38850"))) PPC_WEAK_FUNC(sub_83C38850);
PPC_FUNC_IMPL(__imp__sub_83C38850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3885C"))) PPC_WEAK_FUNC(sub_83C3885C);
PPC_FUNC_IMPL(__imp__sub_83C3885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38860"))) PPC_WEAK_FUNC(sub_83C38860);
PPC_FUNC_IMPL(__imp__sub_83C38860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26240
	ctx.r3.s64 = ctx.r11.s64 + 26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3886C"))) PPC_WEAK_FUNC(sub_83C3886C);
PPC_FUNC_IMPL(__imp__sub_83C3886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38870"))) PPC_WEAK_FUNC(sub_83C38870);
PPC_FUNC_IMPL(__imp__sub_83C38870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3887C"))) PPC_WEAK_FUNC(sub_83C3887C);
PPC_FUNC_IMPL(__imp__sub_83C3887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38880"))) PPC_WEAK_FUNC(sub_83C38880);
PPC_FUNC_IMPL(__imp__sub_83C38880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26256
	ctx.r3.s64 = ctx.r11.s64 + 26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3888C"))) PPC_WEAK_FUNC(sub_83C3888C);
PPC_FUNC_IMPL(__imp__sub_83C3888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38890"))) PPC_WEAK_FUNC(sub_83C38890);
PPC_FUNC_IMPL(__imp__sub_83C38890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3889C"))) PPC_WEAK_FUNC(sub_83C3889C);
PPC_FUNC_IMPL(__imp__sub_83C3889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388A0"))) PPC_WEAK_FUNC(sub_83C388A0);
PPC_FUNC_IMPL(__imp__sub_83C388A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26272
	ctx.r3.s64 = ctx.r11.s64 + 26272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388AC"))) PPC_WEAK_FUNC(sub_83C388AC);
PPC_FUNC_IMPL(__imp__sub_83C388AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388B0"))) PPC_WEAK_FUNC(sub_83C388B0);
PPC_FUNC_IMPL(__imp__sub_83C388B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26280
	ctx.r3.s64 = ctx.r11.s64 + 26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388BC"))) PPC_WEAK_FUNC(sub_83C388BC);
PPC_FUNC_IMPL(__imp__sub_83C388BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388C0"))) PPC_WEAK_FUNC(sub_83C388C0);
PPC_FUNC_IMPL(__imp__sub_83C388C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388CC"))) PPC_WEAK_FUNC(sub_83C388CC);
PPC_FUNC_IMPL(__imp__sub_83C388CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388D0"))) PPC_WEAK_FUNC(sub_83C388D0);
PPC_FUNC_IMPL(__imp__sub_83C388D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26296
	ctx.r3.s64 = ctx.r11.s64 + 26296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388DC"))) PPC_WEAK_FUNC(sub_83C388DC);
PPC_FUNC_IMPL(__imp__sub_83C388DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388E0"))) PPC_WEAK_FUNC(sub_83C388E0);
PPC_FUNC_IMPL(__imp__sub_83C388E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26304
	ctx.r3.s64 = ctx.r11.s64 + 26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388EC"))) PPC_WEAK_FUNC(sub_83C388EC);
PPC_FUNC_IMPL(__imp__sub_83C388EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C388F0"))) PPC_WEAK_FUNC(sub_83C388F0);
PPC_FUNC_IMPL(__imp__sub_83C388F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C388FC"))) PPC_WEAK_FUNC(sub_83C388FC);
PPC_FUNC_IMPL(__imp__sub_83C388FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38900"))) PPC_WEAK_FUNC(sub_83C38900);
PPC_FUNC_IMPL(__imp__sub_83C38900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3890C"))) PPC_WEAK_FUNC(sub_83C3890C);
PPC_FUNC_IMPL(__imp__sub_83C3890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38910"))) PPC_WEAK_FUNC(sub_83C38910);
PPC_FUNC_IMPL(__imp__sub_83C38910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26328
	ctx.r3.s64 = ctx.r11.s64 + 26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3891C"))) PPC_WEAK_FUNC(sub_83C3891C);
PPC_FUNC_IMPL(__imp__sub_83C3891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38920"))) PPC_WEAK_FUNC(sub_83C38920);
PPC_FUNC_IMPL(__imp__sub_83C38920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3892C"))) PPC_WEAK_FUNC(sub_83C3892C);
PPC_FUNC_IMPL(__imp__sub_83C3892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38930"))) PPC_WEAK_FUNC(sub_83C38930);
PPC_FUNC_IMPL(__imp__sub_83C38930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3893C"))) PPC_WEAK_FUNC(sub_83C3893C);
PPC_FUNC_IMPL(__imp__sub_83C3893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38940"))) PPC_WEAK_FUNC(sub_83C38940);
PPC_FUNC_IMPL(__imp__sub_83C38940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26352
	ctx.r3.s64 = ctx.r11.s64 + 26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3894C"))) PPC_WEAK_FUNC(sub_83C3894C);
PPC_FUNC_IMPL(__imp__sub_83C3894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38950"))) PPC_WEAK_FUNC(sub_83C38950);
PPC_FUNC_IMPL(__imp__sub_83C38950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3895C"))) PPC_WEAK_FUNC(sub_83C3895C);
PPC_FUNC_IMPL(__imp__sub_83C3895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38960"))) PPC_WEAK_FUNC(sub_83C38960);
PPC_FUNC_IMPL(__imp__sub_83C38960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3896C"))) PPC_WEAK_FUNC(sub_83C3896C);
PPC_FUNC_IMPL(__imp__sub_83C3896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38970"))) PPC_WEAK_FUNC(sub_83C38970);
PPC_FUNC_IMPL(__imp__sub_83C38970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26376
	ctx.r3.s64 = ctx.r11.s64 + 26376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3897C"))) PPC_WEAK_FUNC(sub_83C3897C);
PPC_FUNC_IMPL(__imp__sub_83C3897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38980"))) PPC_WEAK_FUNC(sub_83C38980);
PPC_FUNC_IMPL(__imp__sub_83C38980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3898C"))) PPC_WEAK_FUNC(sub_83C3898C);
PPC_FUNC_IMPL(__imp__sub_83C3898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38990"))) PPC_WEAK_FUNC(sub_83C38990);
PPC_FUNC_IMPL(__imp__sub_83C38990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26392
	ctx.r3.s64 = ctx.r11.s64 + 26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3899C"))) PPC_WEAK_FUNC(sub_83C3899C);
PPC_FUNC_IMPL(__imp__sub_83C3899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C389A0"))) PPC_WEAK_FUNC(sub_83C389A0);
PPC_FUNC_IMPL(__imp__sub_83C389A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C389AC"))) PPC_WEAK_FUNC(sub_83C389AC);
PPC_FUNC_IMPL(__imp__sub_83C389AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C389B0"))) PPC_WEAK_FUNC(sub_83C389B0);
PPC_FUNC_IMPL(__imp__sub_83C389B0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23556
	ctx.r3.s64 = ctx.r11.s64 + 23556;
	// bl 0x83523120
	ctx.lr = 0x83C389C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26408
	ctx.r3.s64 = ctx.r10.s64 + 26408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C389D4;
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

__attribute__((alias("__imp__sub_83C389E4"))) PPC_WEAK_FUNC(sub_83C389E4);
PPC_FUNC_IMPL(__imp__sub_83C389E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C389E8"))) PPC_WEAK_FUNC(sub_83C389E8);
PPC_FUNC_IMPL(__imp__sub_83C389E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23572
	ctx.r7.s64 = ctx.r8.s64 + 23572;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23572);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23572, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38A10"))) PPC_WEAK_FUNC(sub_83C38A10);
PPC_FUNC_IMPL(__imp__sub_83C38A10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-22820
	ctx.r6.s64 = ctx.r7.s64 + -22820;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22892(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22892);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23572(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23572);
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
	// std r9,-22820(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22820, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38A58"))) PPC_WEAK_FUNC(sub_83C38A58);
PPC_FUNC_IMPL(__imp__sub_83C38A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38A64"))) PPC_WEAK_FUNC(sub_83C38A64);
PPC_FUNC_IMPL(__imp__sub_83C38A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38A68"))) PPC_WEAK_FUNC(sub_83C38A68);
PPC_FUNC_IMPL(__imp__sub_83C38A68) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// bl 0x8259af80
	ctx.lr = 0x83C38A80;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26440
	ctx.r3.s64 = ctx.r10.s64 + 26440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C38A8C;
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

__attribute__((alias("__imp__sub_83C38A9C"))) PPC_WEAK_FUNC(sub_83C38A9C);
PPC_FUNC_IMPL(__imp__sub_83C38A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38AA0"))) PPC_WEAK_FUNC(sub_83C38AA0);
PPC_FUNC_IMPL(__imp__sub_83C38AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23560
	ctx.r11.s64 = ctx.r8.s64 + 23560;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-22844(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22844);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26432
	ctx.r3.s64 = ctx.r6.s64 + 26432;
	// stw r10,23560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23560, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38AD0"))) PPC_WEAK_FUNC(sub_83C38AD0);
PPC_FUNC_IMPL(__imp__sub_83C38AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38ADC"))) PPC_WEAK_FUNC(sub_83C38ADC);
PPC_FUNC_IMPL(__imp__sub_83C38ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38AE0"))) PPC_WEAK_FUNC(sub_83C38AE0);
PPC_FUNC_IMPL(__imp__sub_83C38AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38AEC"))) PPC_WEAK_FUNC(sub_83C38AEC);
PPC_FUNC_IMPL(__imp__sub_83C38AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38AF0"))) PPC_WEAK_FUNC(sub_83C38AF0);
PPC_FUNC_IMPL(__imp__sub_83C38AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26464
	ctx.r3.s64 = ctx.r11.s64 + 26464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38AFC"))) PPC_WEAK_FUNC(sub_83C38AFC);
PPC_FUNC_IMPL(__imp__sub_83C38AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B00"))) PPC_WEAK_FUNC(sub_83C38B00);
PPC_FUNC_IMPL(__imp__sub_83C38B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26472
	ctx.r3.s64 = ctx.r11.s64 + 26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B0C"))) PPC_WEAK_FUNC(sub_83C38B0C);
PPC_FUNC_IMPL(__imp__sub_83C38B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B10"))) PPC_WEAK_FUNC(sub_83C38B10);
PPC_FUNC_IMPL(__imp__sub_83C38B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B1C"))) PPC_WEAK_FUNC(sub_83C38B1C);
PPC_FUNC_IMPL(__imp__sub_83C38B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B20"))) PPC_WEAK_FUNC(sub_83C38B20);
PPC_FUNC_IMPL(__imp__sub_83C38B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B2C"))) PPC_WEAK_FUNC(sub_83C38B2C);
PPC_FUNC_IMPL(__imp__sub_83C38B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B30"))) PPC_WEAK_FUNC(sub_83C38B30);
PPC_FUNC_IMPL(__imp__sub_83C38B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B3C"))) PPC_WEAK_FUNC(sub_83C38B3C);
PPC_FUNC_IMPL(__imp__sub_83C38B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B40"))) PPC_WEAK_FUNC(sub_83C38B40);
PPC_FUNC_IMPL(__imp__sub_83C38B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B4C"))) PPC_WEAK_FUNC(sub_83C38B4C);
PPC_FUNC_IMPL(__imp__sub_83C38B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B50"))) PPC_WEAK_FUNC(sub_83C38B50);
PPC_FUNC_IMPL(__imp__sub_83C38B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26512
	ctx.r3.s64 = ctx.r11.s64 + 26512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B5C"))) PPC_WEAK_FUNC(sub_83C38B5C);
PPC_FUNC_IMPL(__imp__sub_83C38B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B60"))) PPC_WEAK_FUNC(sub_83C38B60);
PPC_FUNC_IMPL(__imp__sub_83C38B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B6C"))) PPC_WEAK_FUNC(sub_83C38B6C);
PPC_FUNC_IMPL(__imp__sub_83C38B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B70"))) PPC_WEAK_FUNC(sub_83C38B70);
PPC_FUNC_IMPL(__imp__sub_83C38B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B7C"))) PPC_WEAK_FUNC(sub_83C38B7C);
PPC_FUNC_IMPL(__imp__sub_83C38B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B80"))) PPC_WEAK_FUNC(sub_83C38B80);
PPC_FUNC_IMPL(__imp__sub_83C38B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38B8C"))) PPC_WEAK_FUNC(sub_83C38B8C);
PPC_FUNC_IMPL(__imp__sub_83C38B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38B90"))) PPC_WEAK_FUNC(sub_83C38B90);
PPC_FUNC_IMPL(__imp__sub_83C38B90) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// bl 0x83523120
	ctx.lr = 0x83C38BA8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26544
	ctx.r3.s64 = ctx.r10.s64 + 26544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C38BB4;
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

__attribute__((alias("__imp__sub_83C38BC4"))) PPC_WEAK_FUNC(sub_83C38BC4);
PPC_FUNC_IMPL(__imp__sub_83C38BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38BC8"))) PPC_WEAK_FUNC(sub_83C38BC8);
PPC_FUNC_IMPL(__imp__sub_83C38BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23952
	ctx.r7.s64 = ctx.r8.s64 + 23952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38BF0"))) PPC_WEAK_FUNC(sub_83C38BF0);
PPC_FUNC_IMPL(__imp__sub_83C38BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-22644
	ctx.r6.s64 = ctx.r7.s64 + -22644;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23952);
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
	// std r9,-22644(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22644, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38C38"))) PPC_WEAK_FUNC(sub_83C38C38);
PPC_FUNC_IMPL(__imp__sub_83C38C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38C44"))) PPC_WEAK_FUNC(sub_83C38C44);
PPC_FUNC_IMPL(__imp__sub_83C38C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38C48"))) PPC_WEAK_FUNC(sub_83C38C48);
PPC_FUNC_IMPL(__imp__sub_83C38C48) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// bl 0x8259af80
	ctx.lr = 0x83C38C60;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,26576
	ctx.r3.s64 = ctx.r10.s64 + 26576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C38C6C;
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

__attribute__((alias("__imp__sub_83C38C7C"))) PPC_WEAK_FUNC(sub_83C38C7C);
PPC_FUNC_IMPL(__imp__sub_83C38C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38C80"))) PPC_WEAK_FUNC(sub_83C38C80);
PPC_FUNC_IMPL(__imp__sub_83C38C80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23940
	ctx.r11.s64 = ctx.r8.s64 + 23940;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-22668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26568
	ctx.r3.s64 = ctx.r6.s64 + 26568;
	// stw r10,23940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38CB0"))) PPC_WEAK_FUNC(sub_83C38CB0);
PPC_FUNC_IMPL(__imp__sub_83C38CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r6,-31774
	ctx.r6.s64 = -2082340864;
	// lwz r11,-22780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22780);
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// lwz r10,-22776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22776);
	// lwz r9,-22772(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22772);
	// addi r4,r5,-22616
	ctx.r4.s64 = ctx.r5.s64 + -22616;
	// lwz r8,-22768(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22768);
	// lwz r7,-22764(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22764);
	// lwz r6,-22760(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22760);
	// stw r11,-22616(r5)
	PPC_STORE_U32(ctx.r5.u32 + -22616, ctx.r11.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// stw r7,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r7.u32);
	// stw r6,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C38D04"))) PPC_WEAK_FUNC(sub_83C38D04);
PPC_FUNC_IMPL(__imp__sub_83C38D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38D08"))) PPC_WEAK_FUNC(sub_83C38D08);
PPC_FUNC_IMPL(__imp__sub_83C38D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26584
	ctx.r3.s64 = ctx.r11.s64 + 26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C38D14"))) PPC_WEAK_FUNC(sub_83C38D14);
PPC_FUNC_IMPL(__imp__sub_83C38D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C38D18"))) PPC_WEAK_FUNC(sub_83C38D18);
PPC_FUNC_IMPL(__imp__sub_83C38D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,26592
	ctx.r3.s64 = ctx.r11.s64 + 26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

