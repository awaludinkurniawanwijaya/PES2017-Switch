#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C31250"))) PPC_WEAK_FUNC(sub_83C31250);
PPC_FUNC_IMPL(__imp__sub_83C31250) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6244
	ctx.r11.s64 = ctx.r8.s64 + 6244;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,32160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32160);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15656
	ctx.r3.s64 = ctx.r6.s64 + 15656;
	// stw r10,6244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31280"))) PPC_WEAK_FUNC(sub_83C31280);
PPC_FUNC_IMPL(__imp__sub_83C31280) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-29684
	ctx.r4.s64 = ctx.r11.s64 + -29684;
	// addi r3,r10,32208
	ctx.r3.s64 = ctx.r10.s64 + 32208;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C312A4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,15672
	ctx.r3.s64 = ctx.r9.s64 + 15672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C312B0;
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

__attribute__((alias("__imp__sub_83C312C0"))) PPC_WEAK_FUNC(sub_83C312C0);
PPC_FUNC_IMPL(__imp__sub_83C312C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C312CC"))) PPC_WEAK_FUNC(sub_83C312CC);
PPC_FUNC_IMPL(__imp__sub_83C312CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C312D0"))) PPC_WEAK_FUNC(sub_83C312D0);
PPC_FUNC_IMPL(__imp__sub_83C312D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15784
	ctx.r3.s64 = ctx.r11.s64 + 15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C312DC"))) PPC_WEAK_FUNC(sub_83C312DC);
PPC_FUNC_IMPL(__imp__sub_83C312DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C312E0"))) PPC_WEAK_FUNC(sub_83C312E0);
PPC_FUNC_IMPL(__imp__sub_83C312E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C312EC"))) PPC_WEAK_FUNC(sub_83C312EC);
PPC_FUNC_IMPL(__imp__sub_83C312EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C312F0"))) PPC_WEAK_FUNC(sub_83C312F0);
PPC_FUNC_IMPL(__imp__sub_83C312F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15800
	ctx.r3.s64 = ctx.r11.s64 + 15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C312FC"))) PPC_WEAK_FUNC(sub_83C312FC);
PPC_FUNC_IMPL(__imp__sub_83C312FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31300"))) PPC_WEAK_FUNC(sub_83C31300);
PPC_FUNC_IMPL(__imp__sub_83C31300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3130C"))) PPC_WEAK_FUNC(sub_83C3130C);
PPC_FUNC_IMPL(__imp__sub_83C3130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31310"))) PPC_WEAK_FUNC(sub_83C31310);
PPC_FUNC_IMPL(__imp__sub_83C31310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15816
	ctx.r3.s64 = ctx.r11.s64 + 15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3131C"))) PPC_WEAK_FUNC(sub_83C3131C);
PPC_FUNC_IMPL(__imp__sub_83C3131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31320"))) PPC_WEAK_FUNC(sub_83C31320);
PPC_FUNC_IMPL(__imp__sub_83C31320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3132C"))) PPC_WEAK_FUNC(sub_83C3132C);
PPC_FUNC_IMPL(__imp__sub_83C3132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31330"))) PPC_WEAK_FUNC(sub_83C31330);
PPC_FUNC_IMPL(__imp__sub_83C31330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15832
	ctx.r3.s64 = ctx.r11.s64 + 15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3133C"))) PPC_WEAK_FUNC(sub_83C3133C);
PPC_FUNC_IMPL(__imp__sub_83C3133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31340"))) PPC_WEAK_FUNC(sub_83C31340);
PPC_FUNC_IMPL(__imp__sub_83C31340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3134C"))) PPC_WEAK_FUNC(sub_83C3134C);
PPC_FUNC_IMPL(__imp__sub_83C3134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31350"))) PPC_WEAK_FUNC(sub_83C31350);
PPC_FUNC_IMPL(__imp__sub_83C31350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3135C"))) PPC_WEAK_FUNC(sub_83C3135C);
PPC_FUNC_IMPL(__imp__sub_83C3135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31360"))) PPC_WEAK_FUNC(sub_83C31360);
PPC_FUNC_IMPL(__imp__sub_83C31360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3136C"))) PPC_WEAK_FUNC(sub_83C3136C);
PPC_FUNC_IMPL(__imp__sub_83C3136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31370"))) PPC_WEAK_FUNC(sub_83C31370);
PPC_FUNC_IMPL(__imp__sub_83C31370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3137C"))) PPC_WEAK_FUNC(sub_83C3137C);
PPC_FUNC_IMPL(__imp__sub_83C3137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31380"))) PPC_WEAK_FUNC(sub_83C31380);
PPC_FUNC_IMPL(__imp__sub_83C31380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3138C"))) PPC_WEAK_FUNC(sub_83C3138C);
PPC_FUNC_IMPL(__imp__sub_83C3138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31390"))) PPC_WEAK_FUNC(sub_83C31390);
PPC_FUNC_IMPL(__imp__sub_83C31390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3139C"))) PPC_WEAK_FUNC(sub_83C3139C);
PPC_FUNC_IMPL(__imp__sub_83C3139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313A0"))) PPC_WEAK_FUNC(sub_83C313A0);
PPC_FUNC_IMPL(__imp__sub_83C313A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313AC"))) PPC_WEAK_FUNC(sub_83C313AC);
PPC_FUNC_IMPL(__imp__sub_83C313AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313B0"))) PPC_WEAK_FUNC(sub_83C313B0);
PPC_FUNC_IMPL(__imp__sub_83C313B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313BC"))) PPC_WEAK_FUNC(sub_83C313BC);
PPC_FUNC_IMPL(__imp__sub_83C313BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313C0"))) PPC_WEAK_FUNC(sub_83C313C0);
PPC_FUNC_IMPL(__imp__sub_83C313C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313CC"))) PPC_WEAK_FUNC(sub_83C313CC);
PPC_FUNC_IMPL(__imp__sub_83C313CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313D0"))) PPC_WEAK_FUNC(sub_83C313D0);
PPC_FUNC_IMPL(__imp__sub_83C313D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313DC"))) PPC_WEAK_FUNC(sub_83C313DC);
PPC_FUNC_IMPL(__imp__sub_83C313DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313E0"))) PPC_WEAK_FUNC(sub_83C313E0);
PPC_FUNC_IMPL(__imp__sub_83C313E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313EC"))) PPC_WEAK_FUNC(sub_83C313EC);
PPC_FUNC_IMPL(__imp__sub_83C313EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C313F0"))) PPC_WEAK_FUNC(sub_83C313F0);
PPC_FUNC_IMPL(__imp__sub_83C313F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C313FC"))) PPC_WEAK_FUNC(sub_83C313FC);
PPC_FUNC_IMPL(__imp__sub_83C313FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31400"))) PPC_WEAK_FUNC(sub_83C31400);
PPC_FUNC_IMPL(__imp__sub_83C31400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3140C"))) PPC_WEAK_FUNC(sub_83C3140C);
PPC_FUNC_IMPL(__imp__sub_83C3140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31410"))) PPC_WEAK_FUNC(sub_83C31410);
PPC_FUNC_IMPL(__imp__sub_83C31410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3141C"))) PPC_WEAK_FUNC(sub_83C3141C);
PPC_FUNC_IMPL(__imp__sub_83C3141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31420"))) PPC_WEAK_FUNC(sub_83C31420);
PPC_FUNC_IMPL(__imp__sub_83C31420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3142C"))) PPC_WEAK_FUNC(sub_83C3142C);
PPC_FUNC_IMPL(__imp__sub_83C3142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31430"))) PPC_WEAK_FUNC(sub_83C31430);
PPC_FUNC_IMPL(__imp__sub_83C31430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3143C"))) PPC_WEAK_FUNC(sub_83C3143C);
PPC_FUNC_IMPL(__imp__sub_83C3143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31440"))) PPC_WEAK_FUNC(sub_83C31440);
PPC_FUNC_IMPL(__imp__sub_83C31440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3144C"))) PPC_WEAK_FUNC(sub_83C3144C);
PPC_FUNC_IMPL(__imp__sub_83C3144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31450"))) PPC_WEAK_FUNC(sub_83C31450);
PPC_FUNC_IMPL(__imp__sub_83C31450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3145C"))) PPC_WEAK_FUNC(sub_83C3145C);
PPC_FUNC_IMPL(__imp__sub_83C3145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31460"))) PPC_WEAK_FUNC(sub_83C31460);
PPC_FUNC_IMPL(__imp__sub_83C31460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3146C"))) PPC_WEAK_FUNC(sub_83C3146C);
PPC_FUNC_IMPL(__imp__sub_83C3146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31470"))) PPC_WEAK_FUNC(sub_83C31470);
PPC_FUNC_IMPL(__imp__sub_83C31470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3147C"))) PPC_WEAK_FUNC(sub_83C3147C);
PPC_FUNC_IMPL(__imp__sub_83C3147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31480"))) PPC_WEAK_FUNC(sub_83C31480);
PPC_FUNC_IMPL(__imp__sub_83C31480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3148C"))) PPC_WEAK_FUNC(sub_83C3148C);
PPC_FUNC_IMPL(__imp__sub_83C3148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31490"))) PPC_WEAK_FUNC(sub_83C31490);
PPC_FUNC_IMPL(__imp__sub_83C31490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3149C"))) PPC_WEAK_FUNC(sub_83C3149C);
PPC_FUNC_IMPL(__imp__sub_83C3149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314A0"))) PPC_WEAK_FUNC(sub_83C314A0);
PPC_FUNC_IMPL(__imp__sub_83C314A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314AC"))) PPC_WEAK_FUNC(sub_83C314AC);
PPC_FUNC_IMPL(__imp__sub_83C314AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314B0"))) PPC_WEAK_FUNC(sub_83C314B0);
PPC_FUNC_IMPL(__imp__sub_83C314B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314BC"))) PPC_WEAK_FUNC(sub_83C314BC);
PPC_FUNC_IMPL(__imp__sub_83C314BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314C0"))) PPC_WEAK_FUNC(sub_83C314C0);
PPC_FUNC_IMPL(__imp__sub_83C314C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16032
	ctx.r3.s64 = ctx.r11.s64 + 16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314CC"))) PPC_WEAK_FUNC(sub_83C314CC);
PPC_FUNC_IMPL(__imp__sub_83C314CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314D0"))) PPC_WEAK_FUNC(sub_83C314D0);
PPC_FUNC_IMPL(__imp__sub_83C314D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314DC"))) PPC_WEAK_FUNC(sub_83C314DC);
PPC_FUNC_IMPL(__imp__sub_83C314DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314E0"))) PPC_WEAK_FUNC(sub_83C314E0);
PPC_FUNC_IMPL(__imp__sub_83C314E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314EC"))) PPC_WEAK_FUNC(sub_83C314EC);
PPC_FUNC_IMPL(__imp__sub_83C314EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C314F0"))) PPC_WEAK_FUNC(sub_83C314F0);
PPC_FUNC_IMPL(__imp__sub_83C314F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16056
	ctx.r3.s64 = ctx.r11.s64 + 16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C314FC"))) PPC_WEAK_FUNC(sub_83C314FC);
PPC_FUNC_IMPL(__imp__sub_83C314FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31500"))) PPC_WEAK_FUNC(sub_83C31500);
PPC_FUNC_IMPL(__imp__sub_83C31500) {
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
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// bl 0x83523120
	ctx.lr = 0x83C31518;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16064
	ctx.r3.s64 = ctx.r10.s64 + 16064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31524;
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

__attribute__((alias("__imp__sub_83C31534"))) PPC_WEAK_FUNC(sub_83C31534);
PPC_FUNC_IMPL(__imp__sub_83C31534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31538"))) PPC_WEAK_FUNC(sub_83C31538);
PPC_FUNC_IMPL(__imp__sub_83C31538) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6632
	ctx.r7.s64 = ctx.r8.s64 + 6632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31560"))) PPC_WEAK_FUNC(sub_83C31560);
PPC_FUNC_IMPL(__imp__sub_83C31560) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,32548
	ctx.r6.s64 = ctx.r7.s64 + 32548;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32476(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32476);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6632);
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
	// std r9,32548(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C315A8"))) PPC_WEAK_FUNC(sub_83C315A8);
PPC_FUNC_IMPL(__imp__sub_83C315A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C315B4"))) PPC_WEAK_FUNC(sub_83C315B4);
PPC_FUNC_IMPL(__imp__sub_83C315B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C315B8"))) PPC_WEAK_FUNC(sub_83C315B8);
PPC_FUNC_IMPL(__imp__sub_83C315B8) {
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
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x8259af80
	ctx.lr = 0x83C315D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16096
	ctx.r3.s64 = ctx.r10.s64 + 16096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C315DC;
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

__attribute__((alias("__imp__sub_83C315EC"))) PPC_WEAK_FUNC(sub_83C315EC);
PPC_FUNC_IMPL(__imp__sub_83C315EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C315F0"))) PPC_WEAK_FUNC(sub_83C315F0);
PPC_FUNC_IMPL(__imp__sub_83C315F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6620
	ctx.r11.s64 = ctx.r8.s64 + 6620;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,32524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32524);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16088
	ctx.r3.s64 = ctx.r6.s64 + 16088;
	// stw r10,6620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31620"))) PPC_WEAK_FUNC(sub_83C31620);
PPC_FUNC_IMPL(__imp__sub_83C31620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16104
	ctx.r3.s64 = ctx.r11.s64 + 16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3162C"))) PPC_WEAK_FUNC(sub_83C3162C);
PPC_FUNC_IMPL(__imp__sub_83C3162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31630"))) PPC_WEAK_FUNC(sub_83C31630);
PPC_FUNC_IMPL(__imp__sub_83C31630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16112
	ctx.r3.s64 = ctx.r11.s64 + 16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3163C"))) PPC_WEAK_FUNC(sub_83C3163C);
PPC_FUNC_IMPL(__imp__sub_83C3163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31640"))) PPC_WEAK_FUNC(sub_83C31640);
PPC_FUNC_IMPL(__imp__sub_83C31640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3164C"))) PPC_WEAK_FUNC(sub_83C3164C);
PPC_FUNC_IMPL(__imp__sub_83C3164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31650"))) PPC_WEAK_FUNC(sub_83C31650);
PPC_FUNC_IMPL(__imp__sub_83C31650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16128
	ctx.r3.s64 = ctx.r11.s64 + 16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3165C"))) PPC_WEAK_FUNC(sub_83C3165C);
PPC_FUNC_IMPL(__imp__sub_83C3165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31660"))) PPC_WEAK_FUNC(sub_83C31660);
PPC_FUNC_IMPL(__imp__sub_83C31660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16136
	ctx.r3.s64 = ctx.r11.s64 + 16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3166C"))) PPC_WEAK_FUNC(sub_83C3166C);
PPC_FUNC_IMPL(__imp__sub_83C3166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31670"))) PPC_WEAK_FUNC(sub_83C31670);
PPC_FUNC_IMPL(__imp__sub_83C31670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3167C"))) PPC_WEAK_FUNC(sub_83C3167C);
PPC_FUNC_IMPL(__imp__sub_83C3167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31680"))) PPC_WEAK_FUNC(sub_83C31680);
PPC_FUNC_IMPL(__imp__sub_83C31680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3168C"))) PPC_WEAK_FUNC(sub_83C3168C);
PPC_FUNC_IMPL(__imp__sub_83C3168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31690"))) PPC_WEAK_FUNC(sub_83C31690);
PPC_FUNC_IMPL(__imp__sub_83C31690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16160
	ctx.r3.s64 = ctx.r11.s64 + 16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3169C"))) PPC_WEAK_FUNC(sub_83C3169C);
PPC_FUNC_IMPL(__imp__sub_83C3169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C316A0"))) PPC_WEAK_FUNC(sub_83C316A0);
PPC_FUNC_IMPL(__imp__sub_83C316A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16168
	ctx.r3.s64 = ctx.r11.s64 + 16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C316AC"))) PPC_WEAK_FUNC(sub_83C316AC);
PPC_FUNC_IMPL(__imp__sub_83C316AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C316B0"))) PPC_WEAK_FUNC(sub_83C316B0);
PPC_FUNC_IMPL(__imp__sub_83C316B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16176
	ctx.r3.s64 = ctx.r11.s64 + 16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C316BC"))) PPC_WEAK_FUNC(sub_83C316BC);
PPC_FUNC_IMPL(__imp__sub_83C316BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C316C0"))) PPC_WEAK_FUNC(sub_83C316C0);
PPC_FUNC_IMPL(__imp__sub_83C316C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C316CC"))) PPC_WEAK_FUNC(sub_83C316CC);
PPC_FUNC_IMPL(__imp__sub_83C316CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C316D0"))) PPC_WEAK_FUNC(sub_83C316D0);
PPC_FUNC_IMPL(__imp__sub_83C316D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C316DC"))) PPC_WEAK_FUNC(sub_83C316DC);
PPC_FUNC_IMPL(__imp__sub_83C316DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C316E0"))) PPC_WEAK_FUNC(sub_83C316E0);
PPC_FUNC_IMPL(__imp__sub_83C316E0) {
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
	// addi r3,r11,6984
	ctx.r3.s64 = ctx.r11.s64 + 6984;
	// bl 0x83523120
	ctx.lr = 0x83C316F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16200
	ctx.r3.s64 = ctx.r10.s64 + 16200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31704;
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

__attribute__((alias("__imp__sub_83C31714"))) PPC_WEAK_FUNC(sub_83C31714);
PPC_FUNC_IMPL(__imp__sub_83C31714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31718"))) PPC_WEAK_FUNC(sub_83C31718);
PPC_FUNC_IMPL(__imp__sub_83C31718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7000
	ctx.r7.s64 = ctx.r8.s64 + 7000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31740"))) PPC_WEAK_FUNC(sub_83C31740);
PPC_FUNC_IMPL(__imp__sub_83C31740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,32676
	ctx.r6.s64 = ctx.r7.s64 + 32676;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32604(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32604);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7000);
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
	// std r9,32676(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31788"))) PPC_WEAK_FUNC(sub_83C31788);
PPC_FUNC_IMPL(__imp__sub_83C31788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31794"))) PPC_WEAK_FUNC(sub_83C31794);
PPC_FUNC_IMPL(__imp__sub_83C31794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31798"))) PPC_WEAK_FUNC(sub_83C31798);
PPC_FUNC_IMPL(__imp__sub_83C31798) {
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
	// addi r3,r11,7008
	ctx.r3.s64 = ctx.r11.s64 + 7008;
	// bl 0x8259af80
	ctx.lr = 0x83C317B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16232
	ctx.r3.s64 = ctx.r10.s64 + 16232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C317BC;
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

__attribute__((alias("__imp__sub_83C317CC"))) PPC_WEAK_FUNC(sub_83C317CC);
PPC_FUNC_IMPL(__imp__sub_83C317CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C317D0"))) PPC_WEAK_FUNC(sub_83C317D0);
PPC_FUNC_IMPL(__imp__sub_83C317D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6988
	ctx.r11.s64 = ctx.r8.s64 + 6988;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,32652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16224
	ctx.r3.s64 = ctx.r6.s64 + 16224;
	// stw r10,6988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31800"))) PPC_WEAK_FUNC(sub_83C31800);
PPC_FUNC_IMPL(__imp__sub_83C31800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3180C"))) PPC_WEAK_FUNC(sub_83C3180C);
PPC_FUNC_IMPL(__imp__sub_83C3180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31810"))) PPC_WEAK_FUNC(sub_83C31810);
PPC_FUNC_IMPL(__imp__sub_83C31810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3181C"))) PPC_WEAK_FUNC(sub_83C3181C);
PPC_FUNC_IMPL(__imp__sub_83C3181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31820"))) PPC_WEAK_FUNC(sub_83C31820);
PPC_FUNC_IMPL(__imp__sub_83C31820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3182C"))) PPC_WEAK_FUNC(sub_83C3182C);
PPC_FUNC_IMPL(__imp__sub_83C3182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31830"))) PPC_WEAK_FUNC(sub_83C31830);
PPC_FUNC_IMPL(__imp__sub_83C31830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16264
	ctx.r3.s64 = ctx.r11.s64 + 16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3183C"))) PPC_WEAK_FUNC(sub_83C3183C);
PPC_FUNC_IMPL(__imp__sub_83C3183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31840"))) PPC_WEAK_FUNC(sub_83C31840);
PPC_FUNC_IMPL(__imp__sub_83C31840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3184C"))) PPC_WEAK_FUNC(sub_83C3184C);
PPC_FUNC_IMPL(__imp__sub_83C3184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31850"))) PPC_WEAK_FUNC(sub_83C31850);
PPC_FUNC_IMPL(__imp__sub_83C31850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3185C"))) PPC_WEAK_FUNC(sub_83C3185C);
PPC_FUNC_IMPL(__imp__sub_83C3185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31860"))) PPC_WEAK_FUNC(sub_83C31860);
PPC_FUNC_IMPL(__imp__sub_83C31860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3186C"))) PPC_WEAK_FUNC(sub_83C3186C);
PPC_FUNC_IMPL(__imp__sub_83C3186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31870"))) PPC_WEAK_FUNC(sub_83C31870);
PPC_FUNC_IMPL(__imp__sub_83C31870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16296
	ctx.r3.s64 = ctx.r11.s64 + 16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3187C"))) PPC_WEAK_FUNC(sub_83C3187C);
PPC_FUNC_IMPL(__imp__sub_83C3187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31880"))) PPC_WEAK_FUNC(sub_83C31880);
PPC_FUNC_IMPL(__imp__sub_83C31880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3188C"))) PPC_WEAK_FUNC(sub_83C3188C);
PPC_FUNC_IMPL(__imp__sub_83C3188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31890"))) PPC_WEAK_FUNC(sub_83C31890);
PPC_FUNC_IMPL(__imp__sub_83C31890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3189C"))) PPC_WEAK_FUNC(sub_83C3189C);
PPC_FUNC_IMPL(__imp__sub_83C3189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C318A0"))) PPC_WEAK_FUNC(sub_83C318A0);
PPC_FUNC_IMPL(__imp__sub_83C318A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C318AC"))) PPC_WEAK_FUNC(sub_83C318AC);
PPC_FUNC_IMPL(__imp__sub_83C318AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C318B0"))) PPC_WEAK_FUNC(sub_83C318B0);
PPC_FUNC_IMPL(__imp__sub_83C318B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C318BC"))) PPC_WEAK_FUNC(sub_83C318BC);
PPC_FUNC_IMPL(__imp__sub_83C318BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C318C0"))) PPC_WEAK_FUNC(sub_83C318C0);
PPC_FUNC_IMPL(__imp__sub_83C318C0) {
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
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// bl 0x83523120
	ctx.lr = 0x83C318D8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16336
	ctx.r3.s64 = ctx.r10.s64 + 16336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C318E4;
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

__attribute__((alias("__imp__sub_83C318F4"))) PPC_WEAK_FUNC(sub_83C318F4);
PPC_FUNC_IMPL(__imp__sub_83C318F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C318F8"))) PPC_WEAK_FUNC(sub_83C318F8);
PPC_FUNC_IMPL(__imp__sub_83C318F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7368
	ctx.r7.s64 = ctx.r8.s64 + 7368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31920"))) PPC_WEAK_FUNC(sub_83C31920);
PPC_FUNC_IMPL(__imp__sub_83C31920) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-32732
	ctx.r6.s64 = ctx.r7.s64 + -32732;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7368);
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
	// std r9,-32732(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32732, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31968"))) PPC_WEAK_FUNC(sub_83C31968);
PPC_FUNC_IMPL(__imp__sub_83C31968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16352
	ctx.r3.s64 = ctx.r11.s64 + 16352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31974"))) PPC_WEAK_FUNC(sub_83C31974);
PPC_FUNC_IMPL(__imp__sub_83C31974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31978"))) PPC_WEAK_FUNC(sub_83C31978);
PPC_FUNC_IMPL(__imp__sub_83C31978) {
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
	// addi r3,r11,7376
	ctx.r3.s64 = ctx.r11.s64 + 7376;
	// bl 0x8259af80
	ctx.lr = 0x83C31990;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16368
	ctx.r3.s64 = ctx.r10.s64 + 16368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3199C;
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

__attribute__((alias("__imp__sub_83C319AC"))) PPC_WEAK_FUNC(sub_83C319AC);
PPC_FUNC_IMPL(__imp__sub_83C319AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C319B0"))) PPC_WEAK_FUNC(sub_83C319B0);
PPC_FUNC_IMPL(__imp__sub_83C319B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7356
	ctx.r11.s64 = ctx.r8.s64 + 7356;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-32756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16360
	ctx.r3.s64 = ctx.r6.s64 + 16360;
	// stw r10,7356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C319E0"))) PPC_WEAK_FUNC(sub_83C319E0);
PPC_FUNC_IMPL(__imp__sub_83C319E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16376
	ctx.r3.s64 = ctx.r11.s64 + 16376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C319EC"))) PPC_WEAK_FUNC(sub_83C319EC);
PPC_FUNC_IMPL(__imp__sub_83C319EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C319F0"))) PPC_WEAK_FUNC(sub_83C319F0);
PPC_FUNC_IMPL(__imp__sub_83C319F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C319FC"))) PPC_WEAK_FUNC(sub_83C319FC);
PPC_FUNC_IMPL(__imp__sub_83C319FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A00"))) PPC_WEAK_FUNC(sub_83C31A00);
PPC_FUNC_IMPL(__imp__sub_83C31A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A0C"))) PPC_WEAK_FUNC(sub_83C31A0C);
PPC_FUNC_IMPL(__imp__sub_83C31A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A10"))) PPC_WEAK_FUNC(sub_83C31A10);
PPC_FUNC_IMPL(__imp__sub_83C31A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A1C"))) PPC_WEAK_FUNC(sub_83C31A1C);
PPC_FUNC_IMPL(__imp__sub_83C31A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A20"))) PPC_WEAK_FUNC(sub_83C31A20);
PPC_FUNC_IMPL(__imp__sub_83C31A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A2C"))) PPC_WEAK_FUNC(sub_83C31A2C);
PPC_FUNC_IMPL(__imp__sub_83C31A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A30"))) PPC_WEAK_FUNC(sub_83C31A30);
PPC_FUNC_IMPL(__imp__sub_83C31A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A3C"))) PPC_WEAK_FUNC(sub_83C31A3C);
PPC_FUNC_IMPL(__imp__sub_83C31A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A40"))) PPC_WEAK_FUNC(sub_83C31A40);
PPC_FUNC_IMPL(__imp__sub_83C31A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16424
	ctx.r3.s64 = ctx.r11.s64 + 16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A4C"))) PPC_WEAK_FUNC(sub_83C31A4C);
PPC_FUNC_IMPL(__imp__sub_83C31A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A50"))) PPC_WEAK_FUNC(sub_83C31A50);
PPC_FUNC_IMPL(__imp__sub_83C31A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A5C"))) PPC_WEAK_FUNC(sub_83C31A5C);
PPC_FUNC_IMPL(__imp__sub_83C31A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A60"))) PPC_WEAK_FUNC(sub_83C31A60);
PPC_FUNC_IMPL(__imp__sub_83C31A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A6C"))) PPC_WEAK_FUNC(sub_83C31A6C);
PPC_FUNC_IMPL(__imp__sub_83C31A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A70"))) PPC_WEAK_FUNC(sub_83C31A70);
PPC_FUNC_IMPL(__imp__sub_83C31A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A7C"))) PPC_WEAK_FUNC(sub_83C31A7C);
PPC_FUNC_IMPL(__imp__sub_83C31A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A80"))) PPC_WEAK_FUNC(sub_83C31A80);
PPC_FUNC_IMPL(__imp__sub_83C31A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A8C"))) PPC_WEAK_FUNC(sub_83C31A8C);
PPC_FUNC_IMPL(__imp__sub_83C31A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31A90"))) PPC_WEAK_FUNC(sub_83C31A90);
PPC_FUNC_IMPL(__imp__sub_83C31A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31A9C"))) PPC_WEAK_FUNC(sub_83C31A9C);
PPC_FUNC_IMPL(__imp__sub_83C31A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31AA0"))) PPC_WEAK_FUNC(sub_83C31AA0);
PPC_FUNC_IMPL(__imp__sub_83C31AA0) {
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
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// bl 0x83523120
	ctx.lr = 0x83C31AB8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16472
	ctx.r3.s64 = ctx.r10.s64 + 16472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31AC4;
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

__attribute__((alias("__imp__sub_83C31AD4"))) PPC_WEAK_FUNC(sub_83C31AD4);
PPC_FUNC_IMPL(__imp__sub_83C31AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31AD8"))) PPC_WEAK_FUNC(sub_83C31AD8);
PPC_FUNC_IMPL(__imp__sub_83C31AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7736
	ctx.r7.s64 = ctx.r8.s64 + 7736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31B00"))) PPC_WEAK_FUNC(sub_83C31B00);
PPC_FUNC_IMPL(__imp__sub_83C31B00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-32604
	ctx.r6.s64 = ctx.r7.s64 + -32604;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32676(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32676);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7736);
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
	// std r9,-32604(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32604, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31B48"))) PPC_WEAK_FUNC(sub_83C31B48);
PPC_FUNC_IMPL(__imp__sub_83C31B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16488
	ctx.r3.s64 = ctx.r11.s64 + 16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31B54"))) PPC_WEAK_FUNC(sub_83C31B54);
PPC_FUNC_IMPL(__imp__sub_83C31B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31B58"))) PPC_WEAK_FUNC(sub_83C31B58);
PPC_FUNC_IMPL(__imp__sub_83C31B58) {
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
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// bl 0x8259af80
	ctx.lr = 0x83C31B70;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16504
	ctx.r3.s64 = ctx.r10.s64 + 16504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31B7C;
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

__attribute__((alias("__imp__sub_83C31B8C"))) PPC_WEAK_FUNC(sub_83C31B8C);
PPC_FUNC_IMPL(__imp__sub_83C31B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31B90"))) PPC_WEAK_FUNC(sub_83C31B90);
PPC_FUNC_IMPL(__imp__sub_83C31B90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7724
	ctx.r11.s64 = ctx.r8.s64 + 7724;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-32628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32628);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16496
	ctx.r3.s64 = ctx.r6.s64 + 16496;
	// stw r10,7724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31BC0"))) PPC_WEAK_FUNC(sub_83C31BC0);
PPC_FUNC_IMPL(__imp__sub_83C31BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31BCC"))) PPC_WEAK_FUNC(sub_83C31BCC);
PPC_FUNC_IMPL(__imp__sub_83C31BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31BD0"))) PPC_WEAK_FUNC(sub_83C31BD0);
PPC_FUNC_IMPL(__imp__sub_83C31BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16520
	ctx.r3.s64 = ctx.r11.s64 + 16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31BDC"))) PPC_WEAK_FUNC(sub_83C31BDC);
PPC_FUNC_IMPL(__imp__sub_83C31BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31BE0"))) PPC_WEAK_FUNC(sub_83C31BE0);
PPC_FUNC_IMPL(__imp__sub_83C31BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31BEC"))) PPC_WEAK_FUNC(sub_83C31BEC);
PPC_FUNC_IMPL(__imp__sub_83C31BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31BF0"))) PPC_WEAK_FUNC(sub_83C31BF0);
PPC_FUNC_IMPL(__imp__sub_83C31BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31BFC"))) PPC_WEAK_FUNC(sub_83C31BFC);
PPC_FUNC_IMPL(__imp__sub_83C31BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C00"))) PPC_WEAK_FUNC(sub_83C31C00);
PPC_FUNC_IMPL(__imp__sub_83C31C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C0C"))) PPC_WEAK_FUNC(sub_83C31C0C);
PPC_FUNC_IMPL(__imp__sub_83C31C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C10"))) PPC_WEAK_FUNC(sub_83C31C10);
PPC_FUNC_IMPL(__imp__sub_83C31C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C1C"))) PPC_WEAK_FUNC(sub_83C31C1C);
PPC_FUNC_IMPL(__imp__sub_83C31C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C20"))) PPC_WEAK_FUNC(sub_83C31C20);
PPC_FUNC_IMPL(__imp__sub_83C31C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C2C"))) PPC_WEAK_FUNC(sub_83C31C2C);
PPC_FUNC_IMPL(__imp__sub_83C31C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C30"))) PPC_WEAK_FUNC(sub_83C31C30);
PPC_FUNC_IMPL(__imp__sub_83C31C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C3C"))) PPC_WEAK_FUNC(sub_83C31C3C);
PPC_FUNC_IMPL(__imp__sub_83C31C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C40"))) PPC_WEAK_FUNC(sub_83C31C40);
PPC_FUNC_IMPL(__imp__sub_83C31C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C4C"))) PPC_WEAK_FUNC(sub_83C31C4C);
PPC_FUNC_IMPL(__imp__sub_83C31C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C50"))) PPC_WEAK_FUNC(sub_83C31C50);
PPC_FUNC_IMPL(__imp__sub_83C31C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C5C"))) PPC_WEAK_FUNC(sub_83C31C5C);
PPC_FUNC_IMPL(__imp__sub_83C31C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C60"))) PPC_WEAK_FUNC(sub_83C31C60);
PPC_FUNC_IMPL(__imp__sub_83C31C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C6C"))) PPC_WEAK_FUNC(sub_83C31C6C);
PPC_FUNC_IMPL(__imp__sub_83C31C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C70"))) PPC_WEAK_FUNC(sub_83C31C70);
PPC_FUNC_IMPL(__imp__sub_83C31C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31C7C"))) PPC_WEAK_FUNC(sub_83C31C7C);
PPC_FUNC_IMPL(__imp__sub_83C31C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31C80"))) PPC_WEAK_FUNC(sub_83C31C80);
PPC_FUNC_IMPL(__imp__sub_83C31C80) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-26684
	ctx.r4.s64 = ctx.r11.s64 + -26684;
	// addi r3,r10,-32476
	ctx.r3.s64 = ctx.r10.s64 + -32476;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C31CA4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,16648
	ctx.r3.s64 = ctx.r9.s64 + 16648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31CB0;
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

__attribute__((alias("__imp__sub_83C31CC0"))) PPC_WEAK_FUNC(sub_83C31CC0);
PPC_FUNC_IMPL(__imp__sub_83C31CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8104
	ctx.r7.s64 = ctx.r8.s64 + 8104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31CE8"))) PPC_WEAK_FUNC(sub_83C31CE8);
PPC_FUNC_IMPL(__imp__sub_83C31CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-32448
	ctx.r6.s64 = ctx.r7.s64 + -32448;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32548(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32548);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
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
	// std r9,-32448(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32448, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C31D30"))) PPC_WEAK_FUNC(sub_83C31D30);
PPC_FUNC_IMPL(__imp__sub_83C31D30) {
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
	// addi r3,r11,8088
	ctx.r3.s64 = ctx.r11.s64 + 8088;
	// bl 0x83523120
	ctx.lr = 0x83C31D48;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16608
	ctx.r3.s64 = ctx.r10.s64 + 16608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31D54;
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

__attribute__((alias("__imp__sub_83C31D64"))) PPC_WEAK_FUNC(sub_83C31D64);
PPC_FUNC_IMPL(__imp__sub_83C31D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31D68"))) PPC_WEAK_FUNC(sub_83C31D68);
PPC_FUNC_IMPL(__imp__sub_83C31D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31D74"))) PPC_WEAK_FUNC(sub_83C31D74);
PPC_FUNC_IMPL(__imp__sub_83C31D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31D78"))) PPC_WEAK_FUNC(sub_83C31D78);
PPC_FUNC_IMPL(__imp__sub_83C31D78) {
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
	// addi r3,r11,8112
	ctx.r3.s64 = ctx.r11.s64 + 8112;
	// bl 0x8259af80
	ctx.lr = 0x83C31D90;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,16640
	ctx.r3.s64 = ctx.r10.s64 + 16640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C31D9C;
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

__attribute__((alias("__imp__sub_83C31DAC"))) PPC_WEAK_FUNC(sub_83C31DAC);
PPC_FUNC_IMPL(__imp__sub_83C31DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31DB0"))) PPC_WEAK_FUNC(sub_83C31DB0);
PPC_FUNC_IMPL(__imp__sub_83C31DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8092
	ctx.r11.s64 = ctx.r8.s64 + 8092;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-32500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32500);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16632
	ctx.r3.s64 = ctx.r6.s64 + 16632;
	// stw r10,8092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31DE0"))) PPC_WEAK_FUNC(sub_83C31DE0);
PPC_FUNC_IMPL(__imp__sub_83C31DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31DEC"))) PPC_WEAK_FUNC(sub_83C31DEC);
PPC_FUNC_IMPL(__imp__sub_83C31DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31DF0"))) PPC_WEAK_FUNC(sub_83C31DF0);
PPC_FUNC_IMPL(__imp__sub_83C31DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31DFC"))) PPC_WEAK_FUNC(sub_83C31DFC);
PPC_FUNC_IMPL(__imp__sub_83C31DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E00"))) PPC_WEAK_FUNC(sub_83C31E00);
PPC_FUNC_IMPL(__imp__sub_83C31E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E0C"))) PPC_WEAK_FUNC(sub_83C31E0C);
PPC_FUNC_IMPL(__imp__sub_83C31E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E10"))) PPC_WEAK_FUNC(sub_83C31E10);
PPC_FUNC_IMPL(__imp__sub_83C31E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E1C"))) PPC_WEAK_FUNC(sub_83C31E1C);
PPC_FUNC_IMPL(__imp__sub_83C31E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E20"))) PPC_WEAK_FUNC(sub_83C31E20);
PPC_FUNC_IMPL(__imp__sub_83C31E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16784
	ctx.r3.s64 = ctx.r11.s64 + 16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E2C"))) PPC_WEAK_FUNC(sub_83C31E2C);
PPC_FUNC_IMPL(__imp__sub_83C31E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E30"))) PPC_WEAK_FUNC(sub_83C31E30);
PPC_FUNC_IMPL(__imp__sub_83C31E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E3C"))) PPC_WEAK_FUNC(sub_83C31E3C);
PPC_FUNC_IMPL(__imp__sub_83C31E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E40"))) PPC_WEAK_FUNC(sub_83C31E40);
PPC_FUNC_IMPL(__imp__sub_83C31E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E4C"))) PPC_WEAK_FUNC(sub_83C31E4C);
PPC_FUNC_IMPL(__imp__sub_83C31E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E50"))) PPC_WEAK_FUNC(sub_83C31E50);
PPC_FUNC_IMPL(__imp__sub_83C31E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16808
	ctx.r3.s64 = ctx.r11.s64 + 16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E5C"))) PPC_WEAK_FUNC(sub_83C31E5C);
PPC_FUNC_IMPL(__imp__sub_83C31E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E60"))) PPC_WEAK_FUNC(sub_83C31E60);
PPC_FUNC_IMPL(__imp__sub_83C31E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16816
	ctx.r3.s64 = ctx.r11.s64 + 16816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E6C"))) PPC_WEAK_FUNC(sub_83C31E6C);
PPC_FUNC_IMPL(__imp__sub_83C31E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E70"))) PPC_WEAK_FUNC(sub_83C31E70);
PPC_FUNC_IMPL(__imp__sub_83C31E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16824
	ctx.r3.s64 = ctx.r11.s64 + 16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E7C"))) PPC_WEAK_FUNC(sub_83C31E7C);
PPC_FUNC_IMPL(__imp__sub_83C31E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E80"))) PPC_WEAK_FUNC(sub_83C31E80);
PPC_FUNC_IMPL(__imp__sub_83C31E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16832
	ctx.r3.s64 = ctx.r11.s64 + 16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E8C"))) PPC_WEAK_FUNC(sub_83C31E8C);
PPC_FUNC_IMPL(__imp__sub_83C31E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31E90"))) PPC_WEAK_FUNC(sub_83C31E90);
PPC_FUNC_IMPL(__imp__sub_83C31E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16840
	ctx.r3.s64 = ctx.r11.s64 + 16840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31E9C"))) PPC_WEAK_FUNC(sub_83C31E9C);
PPC_FUNC_IMPL(__imp__sub_83C31E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31EA0"))) PPC_WEAK_FUNC(sub_83C31EA0);
PPC_FUNC_IMPL(__imp__sub_83C31EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16848
	ctx.r3.s64 = ctx.r11.s64 + 16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31EAC"))) PPC_WEAK_FUNC(sub_83C31EAC);
PPC_FUNC_IMPL(__imp__sub_83C31EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31EB0"))) PPC_WEAK_FUNC(sub_83C31EB0);
PPC_FUNC_IMPL(__imp__sub_83C31EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16856
	ctx.r3.s64 = ctx.r11.s64 + 16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31EBC"))) PPC_WEAK_FUNC(sub_83C31EBC);
PPC_FUNC_IMPL(__imp__sub_83C31EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31EC0"))) PPC_WEAK_FUNC(sub_83C31EC0);
PPC_FUNC_IMPL(__imp__sub_83C31EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16864
	ctx.r3.s64 = ctx.r11.s64 + 16864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31ECC"))) PPC_WEAK_FUNC(sub_83C31ECC);
PPC_FUNC_IMPL(__imp__sub_83C31ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31ED0"))) PPC_WEAK_FUNC(sub_83C31ED0);
PPC_FUNC_IMPL(__imp__sub_83C31ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16872
	ctx.r3.s64 = ctx.r11.s64 + 16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31EDC"))) PPC_WEAK_FUNC(sub_83C31EDC);
PPC_FUNC_IMPL(__imp__sub_83C31EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31EE0"))) PPC_WEAK_FUNC(sub_83C31EE0);
PPC_FUNC_IMPL(__imp__sub_83C31EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31EEC"))) PPC_WEAK_FUNC(sub_83C31EEC);
PPC_FUNC_IMPL(__imp__sub_83C31EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31EF0"))) PPC_WEAK_FUNC(sub_83C31EF0);
PPC_FUNC_IMPL(__imp__sub_83C31EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16888
	ctx.r3.s64 = ctx.r11.s64 + 16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31EFC"))) PPC_WEAK_FUNC(sub_83C31EFC);
PPC_FUNC_IMPL(__imp__sub_83C31EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F00"))) PPC_WEAK_FUNC(sub_83C31F00);
PPC_FUNC_IMPL(__imp__sub_83C31F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16896
	ctx.r3.s64 = ctx.r11.s64 + 16896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F0C"))) PPC_WEAK_FUNC(sub_83C31F0C);
PPC_FUNC_IMPL(__imp__sub_83C31F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C31F10"))) PPC_WEAK_FUNC(sub_83C31F10);
PPC_FUNC_IMPL(__imp__sub_83C31F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,16904
	ctx.r3.s64 = ctx.r11.s64 + 16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C31F1C"))) PPC_WEAK_FUNC(sub_83C31F1C);
PPC_FUNC_IMPL(__imp__sub_83C31F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

