#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C78238"))) PPC_WEAK_FUNC(sub_83C78238);
PPC_FUNC_IMPL(__imp__sub_83C78238) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,2856
	ctx.r3.s64 = ctx.r11.s64 + 2856;
	// bl 0x8259af80
	ctx.lr = 0x83C78250;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21728
	ctx.r3.s64 = ctx.r10.s64 + -21728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7825C;
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

__attribute__((alias("__imp__sub_83C7826C"))) PPC_WEAK_FUNC(sub_83C7826C);
PPC_FUNC_IMPL(__imp__sub_83C7826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78270"))) PPC_WEAK_FUNC(sub_83C78270);
PPC_FUNC_IMPL(__imp__sub_83C78270) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2836
	ctx.r11.s64 = ctx.r8.s64 + 2836;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-9024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21736
	ctx.r3.s64 = ctx.r6.s64 + -21736;
	// stw r10,2836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782A0"))) PPC_WEAK_FUNC(sub_83C782A0);
PPC_FUNC_IMPL(__imp__sub_83C782A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782AC"))) PPC_WEAK_FUNC(sub_83C782AC);
PPC_FUNC_IMPL(__imp__sub_83C782AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C782B0"))) PPC_WEAK_FUNC(sub_83C782B0);
PPC_FUNC_IMPL(__imp__sub_83C782B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782BC"))) PPC_WEAK_FUNC(sub_83C782BC);
PPC_FUNC_IMPL(__imp__sub_83C782BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C782C0"))) PPC_WEAK_FUNC(sub_83C782C0);
PPC_FUNC_IMPL(__imp__sub_83C782C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782CC"))) PPC_WEAK_FUNC(sub_83C782CC);
PPC_FUNC_IMPL(__imp__sub_83C782CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C782D0"))) PPC_WEAK_FUNC(sub_83C782D0);
PPC_FUNC_IMPL(__imp__sub_83C782D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21696
	ctx.r3.s64 = ctx.r11.s64 + -21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782DC"))) PPC_WEAK_FUNC(sub_83C782DC);
PPC_FUNC_IMPL(__imp__sub_83C782DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C782E0"))) PPC_WEAK_FUNC(sub_83C782E0);
PPC_FUNC_IMPL(__imp__sub_83C782E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21688
	ctx.r3.s64 = ctx.r11.s64 + -21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782EC"))) PPC_WEAK_FUNC(sub_83C782EC);
PPC_FUNC_IMPL(__imp__sub_83C782EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C782F0"))) PPC_WEAK_FUNC(sub_83C782F0);
PPC_FUNC_IMPL(__imp__sub_83C782F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C782FC"))) PPC_WEAK_FUNC(sub_83C782FC);
PPC_FUNC_IMPL(__imp__sub_83C782FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78300"))) PPC_WEAK_FUNC(sub_83C78300);
PPC_FUNC_IMPL(__imp__sub_83C78300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7830C"))) PPC_WEAK_FUNC(sub_83C7830C);
PPC_FUNC_IMPL(__imp__sub_83C7830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78310"))) PPC_WEAK_FUNC(sub_83C78310);
PPC_FUNC_IMPL(__imp__sub_83C78310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7831C"))) PPC_WEAK_FUNC(sub_83C7831C);
PPC_FUNC_IMPL(__imp__sub_83C7831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78320"))) PPC_WEAK_FUNC(sub_83C78320);
PPC_FUNC_IMPL(__imp__sub_83C78320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21656
	ctx.r3.s64 = ctx.r11.s64 + -21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7832C"))) PPC_WEAK_FUNC(sub_83C7832C);
PPC_FUNC_IMPL(__imp__sub_83C7832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78330"))) PPC_WEAK_FUNC(sub_83C78330);
PPC_FUNC_IMPL(__imp__sub_83C78330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7833C"))) PPC_WEAK_FUNC(sub_83C7833C);
PPC_FUNC_IMPL(__imp__sub_83C7833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78340"))) PPC_WEAK_FUNC(sub_83C78340);
PPC_FUNC_IMPL(__imp__sub_83C78340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7834C"))) PPC_WEAK_FUNC(sub_83C7834C);
PPC_FUNC_IMPL(__imp__sub_83C7834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78350"))) PPC_WEAK_FUNC(sub_83C78350);
PPC_FUNC_IMPL(__imp__sub_83C78350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7835C"))) PPC_WEAK_FUNC(sub_83C7835C);
PPC_FUNC_IMPL(__imp__sub_83C7835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78360"))) PPC_WEAK_FUNC(sub_83C78360);
PPC_FUNC_IMPL(__imp__sub_83C78360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3204
	ctx.r7.s64 = ctx.r8.s64 + 3204;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3204(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3204);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3204, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78388"))) PPC_WEAK_FUNC(sub_83C78388);
PPC_FUNC_IMPL(__imp__sub_83C78388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8872
	ctx.r6.s64 = ctx.r7.s64 + -8872;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8944(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8944);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3204);
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
	// std r9,-8872(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8872, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C783D0"))) PPC_WEAK_FUNC(sub_83C783D0);
PPC_FUNC_IMPL(__imp__sub_83C783D0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// bl 0x83523120
	ctx.lr = 0x83C783E8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21624
	ctx.r3.s64 = ctx.r10.s64 + -21624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C783F4;
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

__attribute__((alias("__imp__sub_83C78404"))) PPC_WEAK_FUNC(sub_83C78404);
PPC_FUNC_IMPL(__imp__sub_83C78404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78408"))) PPC_WEAK_FUNC(sub_83C78408);
PPC_FUNC_IMPL(__imp__sub_83C78408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78414"))) PPC_WEAK_FUNC(sub_83C78414);
PPC_FUNC_IMPL(__imp__sub_83C78414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78418"))) PPC_WEAK_FUNC(sub_83C78418);
PPC_FUNC_IMPL(__imp__sub_83C78418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21600
	ctx.r3.s64 = ctx.r11.s64 + -21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78424"))) PPC_WEAK_FUNC(sub_83C78424);
PPC_FUNC_IMPL(__imp__sub_83C78424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78428"))) PPC_WEAK_FUNC(sub_83C78428);
PPC_FUNC_IMPL(__imp__sub_83C78428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21592
	ctx.r3.s64 = ctx.r11.s64 + -21592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78434"))) PPC_WEAK_FUNC(sub_83C78434);
PPC_FUNC_IMPL(__imp__sub_83C78434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78438"))) PPC_WEAK_FUNC(sub_83C78438);
PPC_FUNC_IMPL(__imp__sub_83C78438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78444"))) PPC_WEAK_FUNC(sub_83C78444);
PPC_FUNC_IMPL(__imp__sub_83C78444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78448"))) PPC_WEAK_FUNC(sub_83C78448);
PPC_FUNC_IMPL(__imp__sub_83C78448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21576
	ctx.r3.s64 = ctx.r11.s64 + -21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78454"))) PPC_WEAK_FUNC(sub_83C78454);
PPC_FUNC_IMPL(__imp__sub_83C78454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78458"))) PPC_WEAK_FUNC(sub_83C78458);
PPC_FUNC_IMPL(__imp__sub_83C78458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78464"))) PPC_WEAK_FUNC(sub_83C78464);
PPC_FUNC_IMPL(__imp__sub_83C78464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78468"))) PPC_WEAK_FUNC(sub_83C78468);
PPC_FUNC_IMPL(__imp__sub_83C78468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21560
	ctx.r3.s64 = ctx.r11.s64 + -21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78474"))) PPC_WEAK_FUNC(sub_83C78474);
PPC_FUNC_IMPL(__imp__sub_83C78474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78478"))) PPC_WEAK_FUNC(sub_83C78478);
PPC_FUNC_IMPL(__imp__sub_83C78478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21552
	ctx.r3.s64 = ctx.r11.s64 + -21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78484"))) PPC_WEAK_FUNC(sub_83C78484);
PPC_FUNC_IMPL(__imp__sub_83C78484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78488"))) PPC_WEAK_FUNC(sub_83C78488);
PPC_FUNC_IMPL(__imp__sub_83C78488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78494"))) PPC_WEAK_FUNC(sub_83C78494);
PPC_FUNC_IMPL(__imp__sub_83C78494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78498"))) PPC_WEAK_FUNC(sub_83C78498);
PPC_FUNC_IMPL(__imp__sub_83C78498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C784A4"))) PPC_WEAK_FUNC(sub_83C784A4);
PPC_FUNC_IMPL(__imp__sub_83C784A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C784A8"))) PPC_WEAK_FUNC(sub_83C784A8);
PPC_FUNC_IMPL(__imp__sub_83C784A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C784B4"))) PPC_WEAK_FUNC(sub_83C784B4);
PPC_FUNC_IMPL(__imp__sub_83C784B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C784B8"))) PPC_WEAK_FUNC(sub_83C784B8);
PPC_FUNC_IMPL(__imp__sub_83C784B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21520
	ctx.r3.s64 = ctx.r11.s64 + -21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C784C4"))) PPC_WEAK_FUNC(sub_83C784C4);
PPC_FUNC_IMPL(__imp__sub_83C784C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C784C8"))) PPC_WEAK_FUNC(sub_83C784C8);
PPC_FUNC_IMPL(__imp__sub_83C784C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C784D4"))) PPC_WEAK_FUNC(sub_83C784D4);
PPC_FUNC_IMPL(__imp__sub_83C784D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C784D8"))) PPC_WEAK_FUNC(sub_83C784D8);
PPC_FUNC_IMPL(__imp__sub_83C784D8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3216
	ctx.r3.s64 = ctx.r11.s64 + 3216;
	// bl 0x83523120
	ctx.lr = 0x83C784F0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21504
	ctx.r3.s64 = ctx.r10.s64 + -21504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C784FC;
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

__attribute__((alias("__imp__sub_83C7850C"))) PPC_WEAK_FUNC(sub_83C7850C);
PPC_FUNC_IMPL(__imp__sub_83C7850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78510"))) PPC_WEAK_FUNC(sub_83C78510);
PPC_FUNC_IMPL(__imp__sub_83C78510) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3232
	ctx.r7.s64 = ctx.r8.s64 + 3232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78538"))) PPC_WEAK_FUNC(sub_83C78538);
PPC_FUNC_IMPL(__imp__sub_83C78538) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8744
	ctx.r6.s64 = ctx.r7.s64 + -8744;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3232);
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
	// std r9,-8744(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8744, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78580"))) PPC_WEAK_FUNC(sub_83C78580);
PPC_FUNC_IMPL(__imp__sub_83C78580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7858C"))) PPC_WEAK_FUNC(sub_83C7858C);
PPC_FUNC_IMPL(__imp__sub_83C7858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78590"))) PPC_WEAK_FUNC(sub_83C78590);
PPC_FUNC_IMPL(__imp__sub_83C78590) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3240
	ctx.r3.s64 = ctx.r11.s64 + 3240;
	// bl 0x8259af80
	ctx.lr = 0x83C785A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21472
	ctx.r3.s64 = ctx.r10.s64 + -21472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C785B4;
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

__attribute__((alias("__imp__sub_83C785C4"))) PPC_WEAK_FUNC(sub_83C785C4);
PPC_FUNC_IMPL(__imp__sub_83C785C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C785C8"))) PPC_WEAK_FUNC(sub_83C785C8);
PPC_FUNC_IMPL(__imp__sub_83C785C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3220
	ctx.r11.s64 = ctx.r8.s64 + 3220;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-8768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8768);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21480
	ctx.r3.s64 = ctx.r6.s64 + -21480;
	// stw r10,3220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C785F8"))) PPC_WEAK_FUNC(sub_83C785F8);
PPC_FUNC_IMPL(__imp__sub_83C785F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78604"))) PPC_WEAK_FUNC(sub_83C78604);
PPC_FUNC_IMPL(__imp__sub_83C78604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78608"))) PPC_WEAK_FUNC(sub_83C78608);
PPC_FUNC_IMPL(__imp__sub_83C78608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78614"))) PPC_WEAK_FUNC(sub_83C78614);
PPC_FUNC_IMPL(__imp__sub_83C78614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78618"))) PPC_WEAK_FUNC(sub_83C78618);
PPC_FUNC_IMPL(__imp__sub_83C78618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21448
	ctx.r3.s64 = ctx.r11.s64 + -21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78624"))) PPC_WEAK_FUNC(sub_83C78624);
PPC_FUNC_IMPL(__imp__sub_83C78624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78628"))) PPC_WEAK_FUNC(sub_83C78628);
PPC_FUNC_IMPL(__imp__sub_83C78628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21440
	ctx.r3.s64 = ctx.r11.s64 + -21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78634"))) PPC_WEAK_FUNC(sub_83C78634);
PPC_FUNC_IMPL(__imp__sub_83C78634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78638"))) PPC_WEAK_FUNC(sub_83C78638);
PPC_FUNC_IMPL(__imp__sub_83C78638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78644"))) PPC_WEAK_FUNC(sub_83C78644);
PPC_FUNC_IMPL(__imp__sub_83C78644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78648"))) PPC_WEAK_FUNC(sub_83C78648);
PPC_FUNC_IMPL(__imp__sub_83C78648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78654"))) PPC_WEAK_FUNC(sub_83C78654);
PPC_FUNC_IMPL(__imp__sub_83C78654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78658"))) PPC_WEAK_FUNC(sub_83C78658);
PPC_FUNC_IMPL(__imp__sub_83C78658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78664"))) PPC_WEAK_FUNC(sub_83C78664);
PPC_FUNC_IMPL(__imp__sub_83C78664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78668"))) PPC_WEAK_FUNC(sub_83C78668);
PPC_FUNC_IMPL(__imp__sub_83C78668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78674"))) PPC_WEAK_FUNC(sub_83C78674);
PPC_FUNC_IMPL(__imp__sub_83C78674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78678"))) PPC_WEAK_FUNC(sub_83C78678);
PPC_FUNC_IMPL(__imp__sub_83C78678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78684"))) PPC_WEAK_FUNC(sub_83C78684);
PPC_FUNC_IMPL(__imp__sub_83C78684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78688"))) PPC_WEAK_FUNC(sub_83C78688);
PPC_FUNC_IMPL(__imp__sub_83C78688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78694"))) PPC_WEAK_FUNC(sub_83C78694);
PPC_FUNC_IMPL(__imp__sub_83C78694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78698"))) PPC_WEAK_FUNC(sub_83C78698);
PPC_FUNC_IMPL(__imp__sub_83C78698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21384
	ctx.r3.s64 = ctx.r11.s64 + -21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C786A4"))) PPC_WEAK_FUNC(sub_83C786A4);
PPC_FUNC_IMPL(__imp__sub_83C786A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C786A8"))) PPC_WEAK_FUNC(sub_83C786A8);
PPC_FUNC_IMPL(__imp__sub_83C786A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C786B4"))) PPC_WEAK_FUNC(sub_83C786B4);
PPC_FUNC_IMPL(__imp__sub_83C786B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C786B8"))) PPC_WEAK_FUNC(sub_83C786B8);
PPC_FUNC_IMPL(__imp__sub_83C786B8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3584
	ctx.r3.s64 = ctx.r11.s64 + 3584;
	// bl 0x83523120
	ctx.lr = 0x83C786D0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21368
	ctx.r3.s64 = ctx.r10.s64 + -21368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C786DC;
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

__attribute__((alias("__imp__sub_83C786EC"))) PPC_WEAK_FUNC(sub_83C786EC);
PPC_FUNC_IMPL(__imp__sub_83C786EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C786F0"))) PPC_WEAK_FUNC(sub_83C786F0);
PPC_FUNC_IMPL(__imp__sub_83C786F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3600
	ctx.r7.s64 = ctx.r8.s64 + 3600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78718"))) PPC_WEAK_FUNC(sub_83C78718);
PPC_FUNC_IMPL(__imp__sub_83C78718) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8616
	ctx.r6.s64 = ctx.r7.s64 + -8616;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3600);
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
	// std r9,-8616(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78760"))) PPC_WEAK_FUNC(sub_83C78760);
PPC_FUNC_IMPL(__imp__sub_83C78760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7876C"))) PPC_WEAK_FUNC(sub_83C7876C);
PPC_FUNC_IMPL(__imp__sub_83C7876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78770"))) PPC_WEAK_FUNC(sub_83C78770);
PPC_FUNC_IMPL(__imp__sub_83C78770) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// bl 0x8259af80
	ctx.lr = 0x83C78788;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21336
	ctx.r3.s64 = ctx.r10.s64 + -21336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78794;
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

__attribute__((alias("__imp__sub_83C787A4"))) PPC_WEAK_FUNC(sub_83C787A4);
PPC_FUNC_IMPL(__imp__sub_83C787A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C787A8"))) PPC_WEAK_FUNC(sub_83C787A8);
PPC_FUNC_IMPL(__imp__sub_83C787A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3588
	ctx.r11.s64 = ctx.r8.s64 + 3588;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-8640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21344
	ctx.r3.s64 = ctx.r6.s64 + -21344;
	// stw r10,3588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C787D8"))) PPC_WEAK_FUNC(sub_83C787D8);
PPC_FUNC_IMPL(__imp__sub_83C787D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C787E4"))) PPC_WEAK_FUNC(sub_83C787E4);
PPC_FUNC_IMPL(__imp__sub_83C787E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C787E8"))) PPC_WEAK_FUNC(sub_83C787E8);
PPC_FUNC_IMPL(__imp__sub_83C787E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C787F4"))) PPC_WEAK_FUNC(sub_83C787F4);
PPC_FUNC_IMPL(__imp__sub_83C787F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C787F8"))) PPC_WEAK_FUNC(sub_83C787F8);
PPC_FUNC_IMPL(__imp__sub_83C787F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21312
	ctx.r3.s64 = ctx.r11.s64 + -21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78804"))) PPC_WEAK_FUNC(sub_83C78804);
PPC_FUNC_IMPL(__imp__sub_83C78804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78808"))) PPC_WEAK_FUNC(sub_83C78808);
PPC_FUNC_IMPL(__imp__sub_83C78808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21304
	ctx.r3.s64 = ctx.r11.s64 + -21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78814"))) PPC_WEAK_FUNC(sub_83C78814);
PPC_FUNC_IMPL(__imp__sub_83C78814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78818"))) PPC_WEAK_FUNC(sub_83C78818);
PPC_FUNC_IMPL(__imp__sub_83C78818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21296
	ctx.r3.s64 = ctx.r11.s64 + -21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78824"))) PPC_WEAK_FUNC(sub_83C78824);
PPC_FUNC_IMPL(__imp__sub_83C78824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78828"))) PPC_WEAK_FUNC(sub_83C78828);
PPC_FUNC_IMPL(__imp__sub_83C78828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21288
	ctx.r3.s64 = ctx.r11.s64 + -21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78834"))) PPC_WEAK_FUNC(sub_83C78834);
PPC_FUNC_IMPL(__imp__sub_83C78834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78838"))) PPC_WEAK_FUNC(sub_83C78838);
PPC_FUNC_IMPL(__imp__sub_83C78838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21280
	ctx.r3.s64 = ctx.r11.s64 + -21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78844"))) PPC_WEAK_FUNC(sub_83C78844);
PPC_FUNC_IMPL(__imp__sub_83C78844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78848"))) PPC_WEAK_FUNC(sub_83C78848);
PPC_FUNC_IMPL(__imp__sub_83C78848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78854"))) PPC_WEAK_FUNC(sub_83C78854);
PPC_FUNC_IMPL(__imp__sub_83C78854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78858"))) PPC_WEAK_FUNC(sub_83C78858);
PPC_FUNC_IMPL(__imp__sub_83C78858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21264
	ctx.r3.s64 = ctx.r11.s64 + -21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78864"))) PPC_WEAK_FUNC(sub_83C78864);
PPC_FUNC_IMPL(__imp__sub_83C78864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78868"))) PPC_WEAK_FUNC(sub_83C78868);
PPC_FUNC_IMPL(__imp__sub_83C78868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21256
	ctx.r3.s64 = ctx.r11.s64 + -21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78874"))) PPC_WEAK_FUNC(sub_83C78874);
PPC_FUNC_IMPL(__imp__sub_83C78874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78878"))) PPC_WEAK_FUNC(sub_83C78878);
PPC_FUNC_IMPL(__imp__sub_83C78878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21248
	ctx.r3.s64 = ctx.r11.s64 + -21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78884"))) PPC_WEAK_FUNC(sub_83C78884);
PPC_FUNC_IMPL(__imp__sub_83C78884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78888"))) PPC_WEAK_FUNC(sub_83C78888);
PPC_FUNC_IMPL(__imp__sub_83C78888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21240
	ctx.r3.s64 = ctx.r11.s64 + -21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78894"))) PPC_WEAK_FUNC(sub_83C78894);
PPC_FUNC_IMPL(__imp__sub_83C78894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78898"))) PPC_WEAK_FUNC(sub_83C78898);
PPC_FUNC_IMPL(__imp__sub_83C78898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21232
	ctx.r3.s64 = ctx.r11.s64 + -21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788A4"))) PPC_WEAK_FUNC(sub_83C788A4);
PPC_FUNC_IMPL(__imp__sub_83C788A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788A8"))) PPC_WEAK_FUNC(sub_83C788A8);
PPC_FUNC_IMPL(__imp__sub_83C788A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788B4"))) PPC_WEAK_FUNC(sub_83C788B4);
PPC_FUNC_IMPL(__imp__sub_83C788B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788B8"))) PPC_WEAK_FUNC(sub_83C788B8);
PPC_FUNC_IMPL(__imp__sub_83C788B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788C4"))) PPC_WEAK_FUNC(sub_83C788C4);
PPC_FUNC_IMPL(__imp__sub_83C788C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788C8"))) PPC_WEAK_FUNC(sub_83C788C8);
PPC_FUNC_IMPL(__imp__sub_83C788C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21208
	ctx.r3.s64 = ctx.r11.s64 + -21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788D4"))) PPC_WEAK_FUNC(sub_83C788D4);
PPC_FUNC_IMPL(__imp__sub_83C788D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788D8"))) PPC_WEAK_FUNC(sub_83C788D8);
PPC_FUNC_IMPL(__imp__sub_83C788D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21200
	ctx.r3.s64 = ctx.r11.s64 + -21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788E4"))) PPC_WEAK_FUNC(sub_83C788E4);
PPC_FUNC_IMPL(__imp__sub_83C788E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788E8"))) PPC_WEAK_FUNC(sub_83C788E8);
PPC_FUNC_IMPL(__imp__sub_83C788E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21192
	ctx.r3.s64 = ctx.r11.s64 + -21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C788F4"))) PPC_WEAK_FUNC(sub_83C788F4);
PPC_FUNC_IMPL(__imp__sub_83C788F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C788F8"))) PPC_WEAK_FUNC(sub_83C788F8);
PPC_FUNC_IMPL(__imp__sub_83C788F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21184
	ctx.r3.s64 = ctx.r11.s64 + -21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78904"))) PPC_WEAK_FUNC(sub_83C78904);
PPC_FUNC_IMPL(__imp__sub_83C78904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78908"))) PPC_WEAK_FUNC(sub_83C78908);
PPC_FUNC_IMPL(__imp__sub_83C78908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78914"))) PPC_WEAK_FUNC(sub_83C78914);
PPC_FUNC_IMPL(__imp__sub_83C78914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78918"))) PPC_WEAK_FUNC(sub_83C78918);
PPC_FUNC_IMPL(__imp__sub_83C78918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21168
	ctx.r3.s64 = ctx.r11.s64 + -21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78924"))) PPC_WEAK_FUNC(sub_83C78924);
PPC_FUNC_IMPL(__imp__sub_83C78924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78928"))) PPC_WEAK_FUNC(sub_83C78928);
PPC_FUNC_IMPL(__imp__sub_83C78928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21160
	ctx.r3.s64 = ctx.r11.s64 + -21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78934"))) PPC_WEAK_FUNC(sub_83C78934);
PPC_FUNC_IMPL(__imp__sub_83C78934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78938"))) PPC_WEAK_FUNC(sub_83C78938);
PPC_FUNC_IMPL(__imp__sub_83C78938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78944"))) PPC_WEAK_FUNC(sub_83C78944);
PPC_FUNC_IMPL(__imp__sub_83C78944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78948"))) PPC_WEAK_FUNC(sub_83C78948);
PPC_FUNC_IMPL(__imp__sub_83C78948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78954"))) PPC_WEAK_FUNC(sub_83C78954);
PPC_FUNC_IMPL(__imp__sub_83C78954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78958"))) PPC_WEAK_FUNC(sub_83C78958);
PPC_FUNC_IMPL(__imp__sub_83C78958) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-27296
	ctx.r4.s64 = ctx.r11.s64 + -27296;
	// addi r3,r10,-8384
	ctx.r3.s64 = ctx.r10.s64 + -8384;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7897C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-21120
	ctx.r3.s64 = ctx.r9.s64 + -21120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78988;
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

__attribute__((alias("__imp__sub_83C78998"))) PPC_WEAK_FUNC(sub_83C78998);
PPC_FUNC_IMPL(__imp__sub_83C78998) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3960
	ctx.r7.s64 = ctx.r8.s64 + 3960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C789C0"))) PPC_WEAK_FUNC(sub_83C789C0);
PPC_FUNC_IMPL(__imp__sub_83C789C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8356
	ctx.r6.s64 = ctx.r7.s64 + -8356;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3960);
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
	// std r9,-8356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78A08"))) PPC_WEAK_FUNC(sub_83C78A08);
PPC_FUNC_IMPL(__imp__sub_83C78A08) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3956
	ctx.r3.s64 = ctx.r11.s64 + 3956;
	// bl 0x83523120
	ctx.lr = 0x83C78A20;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21136
	ctx.r3.s64 = ctx.r10.s64 + -21136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78A2C;
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

__attribute__((alias("__imp__sub_83C78A3C"))) PPC_WEAK_FUNC(sub_83C78A3C);
PPC_FUNC_IMPL(__imp__sub_83C78A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A40"))) PPC_WEAK_FUNC(sub_83C78A40);
PPC_FUNC_IMPL(__imp__sub_83C78A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A4C"))) PPC_WEAK_FUNC(sub_83C78A4C);
PPC_FUNC_IMPL(__imp__sub_83C78A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A50"))) PPC_WEAK_FUNC(sub_83C78A50);
PPC_FUNC_IMPL(__imp__sub_83C78A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A5C"))) PPC_WEAK_FUNC(sub_83C78A5C);
PPC_FUNC_IMPL(__imp__sub_83C78A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A60"))) PPC_WEAK_FUNC(sub_83C78A60);
PPC_FUNC_IMPL(__imp__sub_83C78A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21000
	ctx.r3.s64 = ctx.r11.s64 + -21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A6C"))) PPC_WEAK_FUNC(sub_83C78A6C);
PPC_FUNC_IMPL(__imp__sub_83C78A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A70"))) PPC_WEAK_FUNC(sub_83C78A70);
PPC_FUNC_IMPL(__imp__sub_83C78A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20992
	ctx.r3.s64 = ctx.r11.s64 + -20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A7C"))) PPC_WEAK_FUNC(sub_83C78A7C);
PPC_FUNC_IMPL(__imp__sub_83C78A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A80"))) PPC_WEAK_FUNC(sub_83C78A80);
PPC_FUNC_IMPL(__imp__sub_83C78A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A8C"))) PPC_WEAK_FUNC(sub_83C78A8C);
PPC_FUNC_IMPL(__imp__sub_83C78A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78A90"))) PPC_WEAK_FUNC(sub_83C78A90);
PPC_FUNC_IMPL(__imp__sub_83C78A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20976
	ctx.r3.s64 = ctx.r11.s64 + -20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78A9C"))) PPC_WEAK_FUNC(sub_83C78A9C);
PPC_FUNC_IMPL(__imp__sub_83C78A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AA0"))) PPC_WEAK_FUNC(sub_83C78AA0);
PPC_FUNC_IMPL(__imp__sub_83C78AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78AAC"))) PPC_WEAK_FUNC(sub_83C78AAC);
PPC_FUNC_IMPL(__imp__sub_83C78AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AB0"))) PPC_WEAK_FUNC(sub_83C78AB0);
PPC_FUNC_IMPL(__imp__sub_83C78AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78ABC"))) PPC_WEAK_FUNC(sub_83C78ABC);
PPC_FUNC_IMPL(__imp__sub_83C78ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AC0"))) PPC_WEAK_FUNC(sub_83C78AC0);
PPC_FUNC_IMPL(__imp__sub_83C78AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20952
	ctx.r3.s64 = ctx.r11.s64 + -20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78ACC"))) PPC_WEAK_FUNC(sub_83C78ACC);
PPC_FUNC_IMPL(__imp__sub_83C78ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AD0"))) PPC_WEAK_FUNC(sub_83C78AD0);
PPC_FUNC_IMPL(__imp__sub_83C78AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78ADC"))) PPC_WEAK_FUNC(sub_83C78ADC);
PPC_FUNC_IMPL(__imp__sub_83C78ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AE0"))) PPC_WEAK_FUNC(sub_83C78AE0);
PPC_FUNC_IMPL(__imp__sub_83C78AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78AEC"))) PPC_WEAK_FUNC(sub_83C78AEC);
PPC_FUNC_IMPL(__imp__sub_83C78AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78AF0"))) PPC_WEAK_FUNC(sub_83C78AF0);
PPC_FUNC_IMPL(__imp__sub_83C78AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20928
	ctx.r3.s64 = ctx.r11.s64 + -20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78AFC"))) PPC_WEAK_FUNC(sub_83C78AFC);
PPC_FUNC_IMPL(__imp__sub_83C78AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78B00"))) PPC_WEAK_FUNC(sub_83C78B00);
PPC_FUNC_IMPL(__imp__sub_83C78B00) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// bl 0x83523120
	ctx.lr = 0x83C78B18;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20920
	ctx.r3.s64 = ctx.r10.s64 + -20920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78B24;
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

__attribute__((alias("__imp__sub_83C78B34"))) PPC_WEAK_FUNC(sub_83C78B34);
PPC_FUNC_IMPL(__imp__sub_83C78B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78B38"))) PPC_WEAK_FUNC(sub_83C78B38);
PPC_FUNC_IMPL(__imp__sub_83C78B38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3972
	ctx.r7.s64 = ctx.r8.s64 + 3972;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3972);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3972, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78B60"))) PPC_WEAK_FUNC(sub_83C78B60);
PPC_FUNC_IMPL(__imp__sub_83C78B60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8232
	ctx.r6.s64 = ctx.r7.s64 + -8232;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3972(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3972);
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
	// std r9,-8232(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78BA8"))) PPC_WEAK_FUNC(sub_83C78BA8);
PPC_FUNC_IMPL(__imp__sub_83C78BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78BB4"))) PPC_WEAK_FUNC(sub_83C78BB4);
PPC_FUNC_IMPL(__imp__sub_83C78BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78BB8"))) PPC_WEAK_FUNC(sub_83C78BB8);
PPC_FUNC_IMPL(__imp__sub_83C78BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20896
	ctx.r3.s64 = ctx.r11.s64 + -20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78BC4"))) PPC_WEAK_FUNC(sub_83C78BC4);
PPC_FUNC_IMPL(__imp__sub_83C78BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78BC8"))) PPC_WEAK_FUNC(sub_83C78BC8);
PPC_FUNC_IMPL(__imp__sub_83C78BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78BD4"))) PPC_WEAK_FUNC(sub_83C78BD4);
PPC_FUNC_IMPL(__imp__sub_83C78BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78BD8"))) PPC_WEAK_FUNC(sub_83C78BD8);
PPC_FUNC_IMPL(__imp__sub_83C78BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20880
	ctx.r3.s64 = ctx.r11.s64 + -20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78BE4"))) PPC_WEAK_FUNC(sub_83C78BE4);
PPC_FUNC_IMPL(__imp__sub_83C78BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78BE8"))) PPC_WEAK_FUNC(sub_83C78BE8);
PPC_FUNC_IMPL(__imp__sub_83C78BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20872
	ctx.r3.s64 = ctx.r11.s64 + -20872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78BF4"))) PPC_WEAK_FUNC(sub_83C78BF4);
PPC_FUNC_IMPL(__imp__sub_83C78BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78BF8"))) PPC_WEAK_FUNC(sub_83C78BF8);
PPC_FUNC_IMPL(__imp__sub_83C78BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20864
	ctx.r3.s64 = ctx.r11.s64 + -20864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C04"))) PPC_WEAK_FUNC(sub_83C78C04);
PPC_FUNC_IMPL(__imp__sub_83C78C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C08"))) PPC_WEAK_FUNC(sub_83C78C08);
PPC_FUNC_IMPL(__imp__sub_83C78C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C14"))) PPC_WEAK_FUNC(sub_83C78C14);
PPC_FUNC_IMPL(__imp__sub_83C78C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C18"))) PPC_WEAK_FUNC(sub_83C78C18);
PPC_FUNC_IMPL(__imp__sub_83C78C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C24"))) PPC_WEAK_FUNC(sub_83C78C24);
PPC_FUNC_IMPL(__imp__sub_83C78C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C28"))) PPC_WEAK_FUNC(sub_83C78C28);
PPC_FUNC_IMPL(__imp__sub_83C78C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C34"))) PPC_WEAK_FUNC(sub_83C78C34);
PPC_FUNC_IMPL(__imp__sub_83C78C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C38"))) PPC_WEAK_FUNC(sub_83C78C38);
PPC_FUNC_IMPL(__imp__sub_83C78C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20832
	ctx.r3.s64 = ctx.r11.s64 + -20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C44"))) PPC_WEAK_FUNC(sub_83C78C44);
PPC_FUNC_IMPL(__imp__sub_83C78C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C48"))) PPC_WEAK_FUNC(sub_83C78C48);
PPC_FUNC_IMPL(__imp__sub_83C78C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20824
	ctx.r3.s64 = ctx.r11.s64 + -20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C54"))) PPC_WEAK_FUNC(sub_83C78C54);
PPC_FUNC_IMPL(__imp__sub_83C78C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C58"))) PPC_WEAK_FUNC(sub_83C78C58);
PPC_FUNC_IMPL(__imp__sub_83C78C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78C64"))) PPC_WEAK_FUNC(sub_83C78C64);
PPC_FUNC_IMPL(__imp__sub_83C78C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78C68"))) PPC_WEAK_FUNC(sub_83C78C68);
PPC_FUNC_IMPL(__imp__sub_83C78C68) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3980
	ctx.r3.s64 = ctx.r11.s64 + 3980;
	// bl 0x83523120
	ctx.lr = 0x83C78C80;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20808
	ctx.r3.s64 = ctx.r10.s64 + -20808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78C8C;
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

__attribute__((alias("__imp__sub_83C78C9C"))) PPC_WEAK_FUNC(sub_83C78C9C);
PPC_FUNC_IMPL(__imp__sub_83C78C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78CA0"))) PPC_WEAK_FUNC(sub_83C78CA0);
PPC_FUNC_IMPL(__imp__sub_83C78CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3984
	ctx.r7.s64 = ctx.r8.s64 + 3984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78CC8"))) PPC_WEAK_FUNC(sub_83C78CC8);
PPC_FUNC_IMPL(__imp__sub_83C78CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-8108
	ctx.r6.s64 = ctx.r7.s64 + -8108;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3984);
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
	// std r9,-8108(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8108, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78D10"))) PPC_WEAK_FUNC(sub_83C78D10);
PPC_FUNC_IMPL(__imp__sub_83C78D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20792
	ctx.r3.s64 = ctx.r11.s64 + -20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D1C"))) PPC_WEAK_FUNC(sub_83C78D1C);
PPC_FUNC_IMPL(__imp__sub_83C78D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D20"))) PPC_WEAK_FUNC(sub_83C78D20);
PPC_FUNC_IMPL(__imp__sub_83C78D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20784
	ctx.r3.s64 = ctx.r11.s64 + -20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D2C"))) PPC_WEAK_FUNC(sub_83C78D2C);
PPC_FUNC_IMPL(__imp__sub_83C78D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D30"))) PPC_WEAK_FUNC(sub_83C78D30);
PPC_FUNC_IMPL(__imp__sub_83C78D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20776
	ctx.r3.s64 = ctx.r11.s64 + -20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D3C"))) PPC_WEAK_FUNC(sub_83C78D3C);
PPC_FUNC_IMPL(__imp__sub_83C78D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D40"))) PPC_WEAK_FUNC(sub_83C78D40);
PPC_FUNC_IMPL(__imp__sub_83C78D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D4C"))) PPC_WEAK_FUNC(sub_83C78D4C);
PPC_FUNC_IMPL(__imp__sub_83C78D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D50"))) PPC_WEAK_FUNC(sub_83C78D50);
PPC_FUNC_IMPL(__imp__sub_83C78D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20760
	ctx.r3.s64 = ctx.r11.s64 + -20760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D5C"))) PPC_WEAK_FUNC(sub_83C78D5C);
PPC_FUNC_IMPL(__imp__sub_83C78D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D60"))) PPC_WEAK_FUNC(sub_83C78D60);
PPC_FUNC_IMPL(__imp__sub_83C78D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20752
	ctx.r3.s64 = ctx.r11.s64 + -20752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D6C"))) PPC_WEAK_FUNC(sub_83C78D6C);
PPC_FUNC_IMPL(__imp__sub_83C78D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D70"))) PPC_WEAK_FUNC(sub_83C78D70);
PPC_FUNC_IMPL(__imp__sub_83C78D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D7C"))) PPC_WEAK_FUNC(sub_83C78D7C);
PPC_FUNC_IMPL(__imp__sub_83C78D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D80"))) PPC_WEAK_FUNC(sub_83C78D80);
PPC_FUNC_IMPL(__imp__sub_83C78D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20736
	ctx.r3.s64 = ctx.r11.s64 + -20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D8C"))) PPC_WEAK_FUNC(sub_83C78D8C);
PPC_FUNC_IMPL(__imp__sub_83C78D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78D90"))) PPC_WEAK_FUNC(sub_83C78D90);
PPC_FUNC_IMPL(__imp__sub_83C78D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20728
	ctx.r3.s64 = ctx.r11.s64 + -20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78D9C"))) PPC_WEAK_FUNC(sub_83C78D9C);
PPC_FUNC_IMPL(__imp__sub_83C78D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78DA0"))) PPC_WEAK_FUNC(sub_83C78DA0);
PPC_FUNC_IMPL(__imp__sub_83C78DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78DAC"))) PPC_WEAK_FUNC(sub_83C78DAC);
PPC_FUNC_IMPL(__imp__sub_83C78DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78DB0"))) PPC_WEAK_FUNC(sub_83C78DB0);
PPC_FUNC_IMPL(__imp__sub_83C78DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20712
	ctx.r3.s64 = ctx.r11.s64 + -20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78DBC"))) PPC_WEAK_FUNC(sub_83C78DBC);
PPC_FUNC_IMPL(__imp__sub_83C78DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78DC0"))) PPC_WEAK_FUNC(sub_83C78DC0);
PPC_FUNC_IMPL(__imp__sub_83C78DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20704
	ctx.r3.s64 = ctx.r11.s64 + -20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78DCC"))) PPC_WEAK_FUNC(sub_83C78DCC);
PPC_FUNC_IMPL(__imp__sub_83C78DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78DD0"))) PPC_WEAK_FUNC(sub_83C78DD0);
PPC_FUNC_IMPL(__imp__sub_83C78DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78DDC"))) PPC_WEAK_FUNC(sub_83C78DDC);
PPC_FUNC_IMPL(__imp__sub_83C78DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78DE0"))) PPC_WEAK_FUNC(sub_83C78DE0);
PPC_FUNC_IMPL(__imp__sub_83C78DE0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,3992
	ctx.r3.s64 = ctx.r11.s64 + 3992;
	// bl 0x83523120
	ctx.lr = 0x83C78DF8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20688
	ctx.r3.s64 = ctx.r10.s64 + -20688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78E04;
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

__attribute__((alias("__imp__sub_83C78E14"))) PPC_WEAK_FUNC(sub_83C78E14);
PPC_FUNC_IMPL(__imp__sub_83C78E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78E18"))) PPC_WEAK_FUNC(sub_83C78E18);
PPC_FUNC_IMPL(__imp__sub_83C78E18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3996
	ctx.r7.s64 = ctx.r8.s64 + 3996;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3996);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3996, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78E40"))) PPC_WEAK_FUNC(sub_83C78E40);
PPC_FUNC_IMPL(__imp__sub_83C78E40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7980
	ctx.r6.s64 = ctx.r7.s64 + -7980;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3996(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3996);
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
	// std r9,-7980(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7980, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78E88"))) PPC_WEAK_FUNC(sub_83C78E88);
PPC_FUNC_IMPL(__imp__sub_83C78E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78E94"))) PPC_WEAK_FUNC(sub_83C78E94);
PPC_FUNC_IMPL(__imp__sub_83C78E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78E98"))) PPC_WEAK_FUNC(sub_83C78E98);
PPC_FUNC_IMPL(__imp__sub_83C78E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20664
	ctx.r3.s64 = ctx.r11.s64 + -20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78EA4"))) PPC_WEAK_FUNC(sub_83C78EA4);
PPC_FUNC_IMPL(__imp__sub_83C78EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78EA8"))) PPC_WEAK_FUNC(sub_83C78EA8);
PPC_FUNC_IMPL(__imp__sub_83C78EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20656
	ctx.r3.s64 = ctx.r11.s64 + -20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78EB4"))) PPC_WEAK_FUNC(sub_83C78EB4);
PPC_FUNC_IMPL(__imp__sub_83C78EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78EB8"))) PPC_WEAK_FUNC(sub_83C78EB8);
PPC_FUNC_IMPL(__imp__sub_83C78EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20648
	ctx.r3.s64 = ctx.r11.s64 + -20648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78EC4"))) PPC_WEAK_FUNC(sub_83C78EC4);
PPC_FUNC_IMPL(__imp__sub_83C78EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78EC8"))) PPC_WEAK_FUNC(sub_83C78EC8);
PPC_FUNC_IMPL(__imp__sub_83C78EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20640
	ctx.r3.s64 = ctx.r11.s64 + -20640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78ED4"))) PPC_WEAK_FUNC(sub_83C78ED4);
PPC_FUNC_IMPL(__imp__sub_83C78ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78ED8"))) PPC_WEAK_FUNC(sub_83C78ED8);
PPC_FUNC_IMPL(__imp__sub_83C78ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78EE4"))) PPC_WEAK_FUNC(sub_83C78EE4);
PPC_FUNC_IMPL(__imp__sub_83C78EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78EE8"))) PPC_WEAK_FUNC(sub_83C78EE8);
PPC_FUNC_IMPL(__imp__sub_83C78EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20624
	ctx.r3.s64 = ctx.r11.s64 + -20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78EF4"))) PPC_WEAK_FUNC(sub_83C78EF4);
PPC_FUNC_IMPL(__imp__sub_83C78EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78EF8"))) PPC_WEAK_FUNC(sub_83C78EF8);
PPC_FUNC_IMPL(__imp__sub_83C78EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20616
	ctx.r3.s64 = ctx.r11.s64 + -20616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78F04"))) PPC_WEAK_FUNC(sub_83C78F04);
PPC_FUNC_IMPL(__imp__sub_83C78F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78F08"))) PPC_WEAK_FUNC(sub_83C78F08);
PPC_FUNC_IMPL(__imp__sub_83C78F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78F14"))) PPC_WEAK_FUNC(sub_83C78F14);
PPC_FUNC_IMPL(__imp__sub_83C78F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

