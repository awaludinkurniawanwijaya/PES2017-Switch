#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C125A4"))) PPC_WEAK_FUNC(sub_83C125A4);
PPC_FUNC_IMPL(__imp__sub_83C125A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125A8"))) PPC_WEAK_FUNC(sub_83C125A8);
PPC_FUNC_IMPL(__imp__sub_83C125A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C125B4"))) PPC_WEAK_FUNC(sub_83C125B4);
PPC_FUNC_IMPL(__imp__sub_83C125B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125B8"))) PPC_WEAK_FUNC(sub_83C125B8);
PPC_FUNC_IMPL(__imp__sub_83C125B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C125C4"))) PPC_WEAK_FUNC(sub_83C125C4);
PPC_FUNC_IMPL(__imp__sub_83C125C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125C8"))) PPC_WEAK_FUNC(sub_83C125C8);
PPC_FUNC_IMPL(__imp__sub_83C125C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C125D4"))) PPC_WEAK_FUNC(sub_83C125D4);
PPC_FUNC_IMPL(__imp__sub_83C125D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125D8"))) PPC_WEAK_FUNC(sub_83C125D8);
PPC_FUNC_IMPL(__imp__sub_83C125D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C125E4"))) PPC_WEAK_FUNC(sub_83C125E4);
PPC_FUNC_IMPL(__imp__sub_83C125E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125E8"))) PPC_WEAK_FUNC(sub_83C125E8);
PPC_FUNC_IMPL(__imp__sub_83C125E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C125F4"))) PPC_WEAK_FUNC(sub_83C125F4);
PPC_FUNC_IMPL(__imp__sub_83C125F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C125F8"))) PPC_WEAK_FUNC(sub_83C125F8);
PPC_FUNC_IMPL(__imp__sub_83C125F8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29068
	ctx.r3.s64 = ctx.r11.s64 + 29068;
	// bl 0x83523120
	ctx.lr = 0x83C12610;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-31000
	ctx.r3.s64 = ctx.r10.s64 + -31000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1261C;
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

__attribute__((alias("__imp__sub_83C1262C"))) PPC_WEAK_FUNC(sub_83C1262C);
PPC_FUNC_IMPL(__imp__sub_83C1262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12630"))) PPC_WEAK_FUNC(sub_83C12630);
PPC_FUNC_IMPL(__imp__sub_83C12630) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29072
	ctx.r7.s64 = ctx.r8.s64 + 29072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12658"))) PPC_WEAK_FUNC(sub_83C12658);
PPC_FUNC_IMPL(__imp__sub_83C12658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12664"))) PPC_WEAK_FUNC(sub_83C12664);
PPC_FUNC_IMPL(__imp__sub_83C12664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12668"))) PPC_WEAK_FUNC(sub_83C12668);
PPC_FUNC_IMPL(__imp__sub_83C12668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12674"))) PPC_WEAK_FUNC(sub_83C12674);
PPC_FUNC_IMPL(__imp__sub_83C12674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12678"))) PPC_WEAK_FUNC(sub_83C12678);
PPC_FUNC_IMPL(__imp__sub_83C12678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12684"))) PPC_WEAK_FUNC(sub_83C12684);
PPC_FUNC_IMPL(__imp__sub_83C12684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12688"))) PPC_WEAK_FUNC(sub_83C12688);
PPC_FUNC_IMPL(__imp__sub_83C12688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12694"))) PPC_WEAK_FUNC(sub_83C12694);
PPC_FUNC_IMPL(__imp__sub_83C12694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12698"))) PPC_WEAK_FUNC(sub_83C12698);
PPC_FUNC_IMPL(__imp__sub_83C12698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126A4"))) PPC_WEAK_FUNC(sub_83C126A4);
PPC_FUNC_IMPL(__imp__sub_83C126A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126A8"))) PPC_WEAK_FUNC(sub_83C126A8);
PPC_FUNC_IMPL(__imp__sub_83C126A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126B4"))) PPC_WEAK_FUNC(sub_83C126B4);
PPC_FUNC_IMPL(__imp__sub_83C126B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126B8"))) PPC_WEAK_FUNC(sub_83C126B8);
PPC_FUNC_IMPL(__imp__sub_83C126B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126C4"))) PPC_WEAK_FUNC(sub_83C126C4);
PPC_FUNC_IMPL(__imp__sub_83C126C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126C8"))) PPC_WEAK_FUNC(sub_83C126C8);
PPC_FUNC_IMPL(__imp__sub_83C126C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126D4"))) PPC_WEAK_FUNC(sub_83C126D4);
PPC_FUNC_IMPL(__imp__sub_83C126D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126D8"))) PPC_WEAK_FUNC(sub_83C126D8);
PPC_FUNC_IMPL(__imp__sub_83C126D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126E4"))) PPC_WEAK_FUNC(sub_83C126E4);
PPC_FUNC_IMPL(__imp__sub_83C126E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126E8"))) PPC_WEAK_FUNC(sub_83C126E8);
PPC_FUNC_IMPL(__imp__sub_83C126E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30912
	ctx.r3.s64 = ctx.r11.s64 + -30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C126F4"))) PPC_WEAK_FUNC(sub_83C126F4);
PPC_FUNC_IMPL(__imp__sub_83C126F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C126F8"))) PPC_WEAK_FUNC(sub_83C126F8);
PPC_FUNC_IMPL(__imp__sub_83C126F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12704"))) PPC_WEAK_FUNC(sub_83C12704);
PPC_FUNC_IMPL(__imp__sub_83C12704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12708"))) PPC_WEAK_FUNC(sub_83C12708);
PPC_FUNC_IMPL(__imp__sub_83C12708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30896
	ctx.r3.s64 = ctx.r11.s64 + -30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12714"))) PPC_WEAK_FUNC(sub_83C12714);
PPC_FUNC_IMPL(__imp__sub_83C12714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12718"))) PPC_WEAK_FUNC(sub_83C12718);
PPC_FUNC_IMPL(__imp__sub_83C12718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12724"))) PPC_WEAK_FUNC(sub_83C12724);
PPC_FUNC_IMPL(__imp__sub_83C12724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12728"))) PPC_WEAK_FUNC(sub_83C12728);
PPC_FUNC_IMPL(__imp__sub_83C12728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12734"))) PPC_WEAK_FUNC(sub_83C12734);
PPC_FUNC_IMPL(__imp__sub_83C12734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12738"))) PPC_WEAK_FUNC(sub_83C12738);
PPC_FUNC_IMPL(__imp__sub_83C12738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12744"))) PPC_WEAK_FUNC(sub_83C12744);
PPC_FUNC_IMPL(__imp__sub_83C12744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12748"))) PPC_WEAK_FUNC(sub_83C12748);
PPC_FUNC_IMPL(__imp__sub_83C12748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12754"))) PPC_WEAK_FUNC(sub_83C12754);
PPC_FUNC_IMPL(__imp__sub_83C12754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12758"))) PPC_WEAK_FUNC(sub_83C12758);
PPC_FUNC_IMPL(__imp__sub_83C12758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30856
	ctx.r3.s64 = ctx.r11.s64 + -30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12764"))) PPC_WEAK_FUNC(sub_83C12764);
PPC_FUNC_IMPL(__imp__sub_83C12764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12768"))) PPC_WEAK_FUNC(sub_83C12768);
PPC_FUNC_IMPL(__imp__sub_83C12768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30848
	ctx.r3.s64 = ctx.r11.s64 + -30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12774"))) PPC_WEAK_FUNC(sub_83C12774);
PPC_FUNC_IMPL(__imp__sub_83C12774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12778"))) PPC_WEAK_FUNC(sub_83C12778);
PPC_FUNC_IMPL(__imp__sub_83C12778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12784"))) PPC_WEAK_FUNC(sub_83C12784);
PPC_FUNC_IMPL(__imp__sub_83C12784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12788"))) PPC_WEAK_FUNC(sub_83C12788);
PPC_FUNC_IMPL(__imp__sub_83C12788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30832
	ctx.r3.s64 = ctx.r11.s64 + -30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12794"))) PPC_WEAK_FUNC(sub_83C12794);
PPC_FUNC_IMPL(__imp__sub_83C12794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12798"))) PPC_WEAK_FUNC(sub_83C12798);
PPC_FUNC_IMPL(__imp__sub_83C12798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C127A4"))) PPC_WEAK_FUNC(sub_83C127A4);
PPC_FUNC_IMPL(__imp__sub_83C127A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C127A8"))) PPC_WEAK_FUNC(sub_83C127A8);
PPC_FUNC_IMPL(__imp__sub_83C127A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C127B4"))) PPC_WEAK_FUNC(sub_83C127B4);
PPC_FUNC_IMPL(__imp__sub_83C127B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C127B8"))) PPC_WEAK_FUNC(sub_83C127B8);
PPC_FUNC_IMPL(__imp__sub_83C127B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C127C4"))) PPC_WEAK_FUNC(sub_83C127C4);
PPC_FUNC_IMPL(__imp__sub_83C127C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C127C8"))) PPC_WEAK_FUNC(sub_83C127C8);
PPC_FUNC_IMPL(__imp__sub_83C127C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C127D4"))) PPC_WEAK_FUNC(sub_83C127D4);
PPC_FUNC_IMPL(__imp__sub_83C127D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C127D8"))) PPC_WEAK_FUNC(sub_83C127D8);
PPC_FUNC_IMPL(__imp__sub_83C127D8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29088
	ctx.r3.s64 = ctx.r11.s64 + 29088;
	// bl 0x83523120
	ctx.lr = 0x83C127F0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30792
	ctx.r3.s64 = ctx.r10.s64 + -30792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C127FC;
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

__attribute__((alias("__imp__sub_83C1280C"))) PPC_WEAK_FUNC(sub_83C1280C);
PPC_FUNC_IMPL(__imp__sub_83C1280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12810"))) PPC_WEAK_FUNC(sub_83C12810);
PPC_FUNC_IMPL(__imp__sub_83C12810) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29092
	ctx.r7.s64 = ctx.r8.s64 + 29092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29092);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29092, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12838"))) PPC_WEAK_FUNC(sub_83C12838);
PPC_FUNC_IMPL(__imp__sub_83C12838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12844"))) PPC_WEAK_FUNC(sub_83C12844);
PPC_FUNC_IMPL(__imp__sub_83C12844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12848"))) PPC_WEAK_FUNC(sub_83C12848);
PPC_FUNC_IMPL(__imp__sub_83C12848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12854"))) PPC_WEAK_FUNC(sub_83C12854);
PPC_FUNC_IMPL(__imp__sub_83C12854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12858"))) PPC_WEAK_FUNC(sub_83C12858);
PPC_FUNC_IMPL(__imp__sub_83C12858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12864"))) PPC_WEAK_FUNC(sub_83C12864);
PPC_FUNC_IMPL(__imp__sub_83C12864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12868"))) PPC_WEAK_FUNC(sub_83C12868);
PPC_FUNC_IMPL(__imp__sub_83C12868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12874"))) PPC_WEAK_FUNC(sub_83C12874);
PPC_FUNC_IMPL(__imp__sub_83C12874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12878"))) PPC_WEAK_FUNC(sub_83C12878);
PPC_FUNC_IMPL(__imp__sub_83C12878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12884"))) PPC_WEAK_FUNC(sub_83C12884);
PPC_FUNC_IMPL(__imp__sub_83C12884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12888"))) PPC_WEAK_FUNC(sub_83C12888);
PPC_FUNC_IMPL(__imp__sub_83C12888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12894"))) PPC_WEAK_FUNC(sub_83C12894);
PPC_FUNC_IMPL(__imp__sub_83C12894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12898"))) PPC_WEAK_FUNC(sub_83C12898);
PPC_FUNC_IMPL(__imp__sub_83C12898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128A4"))) PPC_WEAK_FUNC(sub_83C128A4);
PPC_FUNC_IMPL(__imp__sub_83C128A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128A8"))) PPC_WEAK_FUNC(sub_83C128A8);
PPC_FUNC_IMPL(__imp__sub_83C128A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128B4"))) PPC_WEAK_FUNC(sub_83C128B4);
PPC_FUNC_IMPL(__imp__sub_83C128B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128B8"))) PPC_WEAK_FUNC(sub_83C128B8);
PPC_FUNC_IMPL(__imp__sub_83C128B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128C4"))) PPC_WEAK_FUNC(sub_83C128C4);
PPC_FUNC_IMPL(__imp__sub_83C128C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128C8"))) PPC_WEAK_FUNC(sub_83C128C8);
PPC_FUNC_IMPL(__imp__sub_83C128C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128D4"))) PPC_WEAK_FUNC(sub_83C128D4);
PPC_FUNC_IMPL(__imp__sub_83C128D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128D8"))) PPC_WEAK_FUNC(sub_83C128D8);
PPC_FUNC_IMPL(__imp__sub_83C128D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128E4"))) PPC_WEAK_FUNC(sub_83C128E4);
PPC_FUNC_IMPL(__imp__sub_83C128E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128E8"))) PPC_WEAK_FUNC(sub_83C128E8);
PPC_FUNC_IMPL(__imp__sub_83C128E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30688
	ctx.r3.s64 = ctx.r11.s64 + -30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C128F4"))) PPC_WEAK_FUNC(sub_83C128F4);
PPC_FUNC_IMPL(__imp__sub_83C128F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C128F8"))) PPC_WEAK_FUNC(sub_83C128F8);
PPC_FUNC_IMPL(__imp__sub_83C128F8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29100
	ctx.r3.s64 = ctx.r11.s64 + 29100;
	// bl 0x83523120
	ctx.lr = 0x83C12910;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30680
	ctx.r3.s64 = ctx.r10.s64 + -30680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1291C;
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

__attribute__((alias("__imp__sub_83C1292C"))) PPC_WEAK_FUNC(sub_83C1292C);
PPC_FUNC_IMPL(__imp__sub_83C1292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12930"))) PPC_WEAK_FUNC(sub_83C12930);
PPC_FUNC_IMPL(__imp__sub_83C12930) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29104
	ctx.r7.s64 = ctx.r8.s64 + 29104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12958"))) PPC_WEAK_FUNC(sub_83C12958);
PPC_FUNC_IMPL(__imp__sub_83C12958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30664
	ctx.r3.s64 = ctx.r11.s64 + -30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12964"))) PPC_WEAK_FUNC(sub_83C12964);
PPC_FUNC_IMPL(__imp__sub_83C12964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12968"))) PPC_WEAK_FUNC(sub_83C12968);
PPC_FUNC_IMPL(__imp__sub_83C12968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12974"))) PPC_WEAK_FUNC(sub_83C12974);
PPC_FUNC_IMPL(__imp__sub_83C12974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12978"))) PPC_WEAK_FUNC(sub_83C12978);
PPC_FUNC_IMPL(__imp__sub_83C12978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12984"))) PPC_WEAK_FUNC(sub_83C12984);
PPC_FUNC_IMPL(__imp__sub_83C12984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12988"))) PPC_WEAK_FUNC(sub_83C12988);
PPC_FUNC_IMPL(__imp__sub_83C12988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12994"))) PPC_WEAK_FUNC(sub_83C12994);
PPC_FUNC_IMPL(__imp__sub_83C12994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12998"))) PPC_WEAK_FUNC(sub_83C12998);
PPC_FUNC_IMPL(__imp__sub_83C12998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129A4"))) PPC_WEAK_FUNC(sub_83C129A4);
PPC_FUNC_IMPL(__imp__sub_83C129A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129A8"))) PPC_WEAK_FUNC(sub_83C129A8);
PPC_FUNC_IMPL(__imp__sub_83C129A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129B4"))) PPC_WEAK_FUNC(sub_83C129B4);
PPC_FUNC_IMPL(__imp__sub_83C129B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129B8"))) PPC_WEAK_FUNC(sub_83C129B8);
PPC_FUNC_IMPL(__imp__sub_83C129B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129C4"))) PPC_WEAK_FUNC(sub_83C129C4);
PPC_FUNC_IMPL(__imp__sub_83C129C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129C8"))) PPC_WEAK_FUNC(sub_83C129C8);
PPC_FUNC_IMPL(__imp__sub_83C129C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129D4"))) PPC_WEAK_FUNC(sub_83C129D4);
PPC_FUNC_IMPL(__imp__sub_83C129D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129D8"))) PPC_WEAK_FUNC(sub_83C129D8);
PPC_FUNC_IMPL(__imp__sub_83C129D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129E4"))) PPC_WEAK_FUNC(sub_83C129E4);
PPC_FUNC_IMPL(__imp__sub_83C129E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129E8"))) PPC_WEAK_FUNC(sub_83C129E8);
PPC_FUNC_IMPL(__imp__sub_83C129E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C129F4"))) PPC_WEAK_FUNC(sub_83C129F4);
PPC_FUNC_IMPL(__imp__sub_83C129F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C129F8"))) PPC_WEAK_FUNC(sub_83C129F8);
PPC_FUNC_IMPL(__imp__sub_83C129F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A04"))) PPC_WEAK_FUNC(sub_83C12A04);
PPC_FUNC_IMPL(__imp__sub_83C12A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A08"))) PPC_WEAK_FUNC(sub_83C12A08);
PPC_FUNC_IMPL(__imp__sub_83C12A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30576
	ctx.r3.s64 = ctx.r11.s64 + -30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A14"))) PPC_WEAK_FUNC(sub_83C12A14);
PPC_FUNC_IMPL(__imp__sub_83C12A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A18"))) PPC_WEAK_FUNC(sub_83C12A18);
PPC_FUNC_IMPL(__imp__sub_83C12A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A24"))) PPC_WEAK_FUNC(sub_83C12A24);
PPC_FUNC_IMPL(__imp__sub_83C12A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A28"))) PPC_WEAK_FUNC(sub_83C12A28);
PPC_FUNC_IMPL(__imp__sub_83C12A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A34"))) PPC_WEAK_FUNC(sub_83C12A34);
PPC_FUNC_IMPL(__imp__sub_83C12A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A38"))) PPC_WEAK_FUNC(sub_83C12A38);
PPC_FUNC_IMPL(__imp__sub_83C12A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A44"))) PPC_WEAK_FUNC(sub_83C12A44);
PPC_FUNC_IMPL(__imp__sub_83C12A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A48"))) PPC_WEAK_FUNC(sub_83C12A48);
PPC_FUNC_IMPL(__imp__sub_83C12A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30544
	ctx.r3.s64 = ctx.r11.s64 + -30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A54"))) PPC_WEAK_FUNC(sub_83C12A54);
PPC_FUNC_IMPL(__imp__sub_83C12A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A58"))) PPC_WEAK_FUNC(sub_83C12A58);
PPC_FUNC_IMPL(__imp__sub_83C12A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30536
	ctx.r3.s64 = ctx.r11.s64 + -30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A64"))) PPC_WEAK_FUNC(sub_83C12A64);
PPC_FUNC_IMPL(__imp__sub_83C12A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A68"))) PPC_WEAK_FUNC(sub_83C12A68);
PPC_FUNC_IMPL(__imp__sub_83C12A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30528
	ctx.r3.s64 = ctx.r11.s64 + -30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A74"))) PPC_WEAK_FUNC(sub_83C12A74);
PPC_FUNC_IMPL(__imp__sub_83C12A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A78"))) PPC_WEAK_FUNC(sub_83C12A78);
PPC_FUNC_IMPL(__imp__sub_83C12A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30520
	ctx.r3.s64 = ctx.r11.s64 + -30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A84"))) PPC_WEAK_FUNC(sub_83C12A84);
PPC_FUNC_IMPL(__imp__sub_83C12A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A88"))) PPC_WEAK_FUNC(sub_83C12A88);
PPC_FUNC_IMPL(__imp__sub_83C12A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30512
	ctx.r3.s64 = ctx.r11.s64 + -30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12A94"))) PPC_WEAK_FUNC(sub_83C12A94);
PPC_FUNC_IMPL(__imp__sub_83C12A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12A98"))) PPC_WEAK_FUNC(sub_83C12A98);
PPC_FUNC_IMPL(__imp__sub_83C12A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30504
	ctx.r3.s64 = ctx.r11.s64 + -30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12AA4"))) PPC_WEAK_FUNC(sub_83C12AA4);
PPC_FUNC_IMPL(__imp__sub_83C12AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12AA8"))) PPC_WEAK_FUNC(sub_83C12AA8);
PPC_FUNC_IMPL(__imp__sub_83C12AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30496
	ctx.r3.s64 = ctx.r11.s64 + -30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12AB4"))) PPC_WEAK_FUNC(sub_83C12AB4);
PPC_FUNC_IMPL(__imp__sub_83C12AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12AB8"))) PPC_WEAK_FUNC(sub_83C12AB8);
PPC_FUNC_IMPL(__imp__sub_83C12AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12AC4"))) PPC_WEAK_FUNC(sub_83C12AC4);
PPC_FUNC_IMPL(__imp__sub_83C12AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12AC8"))) PPC_WEAK_FUNC(sub_83C12AC8);
PPC_FUNC_IMPL(__imp__sub_83C12AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12AD4"))) PPC_WEAK_FUNC(sub_83C12AD4);
PPC_FUNC_IMPL(__imp__sub_83C12AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12AD8"))) PPC_WEAK_FUNC(sub_83C12AD8);
PPC_FUNC_IMPL(__imp__sub_83C12AD8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29120
	ctx.r3.s64 = ctx.r11.s64 + 29120;
	// bl 0x83523120
	ctx.lr = 0x83C12AF0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30472
	ctx.r3.s64 = ctx.r10.s64 + -30472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C12AFC;
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

__attribute__((alias("__imp__sub_83C12B0C"))) PPC_WEAK_FUNC(sub_83C12B0C);
PPC_FUNC_IMPL(__imp__sub_83C12B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12B10"))) PPC_WEAK_FUNC(sub_83C12B10);
PPC_FUNC_IMPL(__imp__sub_83C12B10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29136
	ctx.r7.s64 = ctx.r8.s64 + 29136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12B38"))) PPC_WEAK_FUNC(sub_83C12B38);
PPC_FUNC_IMPL(__imp__sub_83C12B38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-11428
	ctx.r6.s64 = ctx.r7.s64 + -11428;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29136);
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
	// std r9,-11428(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12B80"))) PPC_WEAK_FUNC(sub_83C12B80);
PPC_FUNC_IMPL(__imp__sub_83C12B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30456
	ctx.r3.s64 = ctx.r11.s64 + -30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12B8C"))) PPC_WEAK_FUNC(sub_83C12B8C);
PPC_FUNC_IMPL(__imp__sub_83C12B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12B90"))) PPC_WEAK_FUNC(sub_83C12B90);
PPC_FUNC_IMPL(__imp__sub_83C12B90) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// bl 0x8259af80
	ctx.lr = 0x83C12BA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30440
	ctx.r3.s64 = ctx.r10.s64 + -30440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C12BB4;
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

__attribute__((alias("__imp__sub_83C12BC4"))) PPC_WEAK_FUNC(sub_83C12BC4);
PPC_FUNC_IMPL(__imp__sub_83C12BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12BC8"))) PPC_WEAK_FUNC(sub_83C12BC8);
PPC_FUNC_IMPL(__imp__sub_83C12BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29124
	ctx.r11.s64 = ctx.r8.s64 + 29124;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-11452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11452);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30448
	ctx.r3.s64 = ctx.r6.s64 + -30448;
	// stw r10,29124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12BF8"))) PPC_WEAK_FUNC(sub_83C12BF8);
PPC_FUNC_IMPL(__imp__sub_83C12BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C04"))) PPC_WEAK_FUNC(sub_83C12C04);
PPC_FUNC_IMPL(__imp__sub_83C12C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C08"))) PPC_WEAK_FUNC(sub_83C12C08);
PPC_FUNC_IMPL(__imp__sub_83C12C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30424
	ctx.r3.s64 = ctx.r11.s64 + -30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C14"))) PPC_WEAK_FUNC(sub_83C12C14);
PPC_FUNC_IMPL(__imp__sub_83C12C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C18"))) PPC_WEAK_FUNC(sub_83C12C18);
PPC_FUNC_IMPL(__imp__sub_83C12C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C24"))) PPC_WEAK_FUNC(sub_83C12C24);
PPC_FUNC_IMPL(__imp__sub_83C12C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C28"))) PPC_WEAK_FUNC(sub_83C12C28);
PPC_FUNC_IMPL(__imp__sub_83C12C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C34"))) PPC_WEAK_FUNC(sub_83C12C34);
PPC_FUNC_IMPL(__imp__sub_83C12C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C38"))) PPC_WEAK_FUNC(sub_83C12C38);
PPC_FUNC_IMPL(__imp__sub_83C12C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C44"))) PPC_WEAK_FUNC(sub_83C12C44);
PPC_FUNC_IMPL(__imp__sub_83C12C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C48"))) PPC_WEAK_FUNC(sub_83C12C48);
PPC_FUNC_IMPL(__imp__sub_83C12C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30392
	ctx.r3.s64 = ctx.r11.s64 + -30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C54"))) PPC_WEAK_FUNC(sub_83C12C54);
PPC_FUNC_IMPL(__imp__sub_83C12C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C58"))) PPC_WEAK_FUNC(sub_83C12C58);
PPC_FUNC_IMPL(__imp__sub_83C12C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C64"))) PPC_WEAK_FUNC(sub_83C12C64);
PPC_FUNC_IMPL(__imp__sub_83C12C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C68"))) PPC_WEAK_FUNC(sub_83C12C68);
PPC_FUNC_IMPL(__imp__sub_83C12C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30376
	ctx.r3.s64 = ctx.r11.s64 + -30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C74"))) PPC_WEAK_FUNC(sub_83C12C74);
PPC_FUNC_IMPL(__imp__sub_83C12C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C78"))) PPC_WEAK_FUNC(sub_83C12C78);
PPC_FUNC_IMPL(__imp__sub_83C12C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C84"))) PPC_WEAK_FUNC(sub_83C12C84);
PPC_FUNC_IMPL(__imp__sub_83C12C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C88"))) PPC_WEAK_FUNC(sub_83C12C88);
PPC_FUNC_IMPL(__imp__sub_83C12C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30360
	ctx.r3.s64 = ctx.r11.s64 + -30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12C94"))) PPC_WEAK_FUNC(sub_83C12C94);
PPC_FUNC_IMPL(__imp__sub_83C12C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12C98"))) PPC_WEAK_FUNC(sub_83C12C98);
PPC_FUNC_IMPL(__imp__sub_83C12C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12CA4"))) PPC_WEAK_FUNC(sub_83C12CA4);
PPC_FUNC_IMPL(__imp__sub_83C12CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12CA8"))) PPC_WEAK_FUNC(sub_83C12CA8);
PPC_FUNC_IMPL(__imp__sub_83C12CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30344
	ctx.r3.s64 = ctx.r11.s64 + -30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12CB4"))) PPC_WEAK_FUNC(sub_83C12CB4);
PPC_FUNC_IMPL(__imp__sub_83C12CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12CB8"))) PPC_WEAK_FUNC(sub_83C12CB8);
PPC_FUNC_IMPL(__imp__sub_83C12CB8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// bl 0x83523120
	ctx.lr = 0x83C12CD0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30336
	ctx.r3.s64 = ctx.r10.s64 + -30336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C12CDC;
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

__attribute__((alias("__imp__sub_83C12CEC"))) PPC_WEAK_FUNC(sub_83C12CEC);
PPC_FUNC_IMPL(__imp__sub_83C12CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12CF0"))) PPC_WEAK_FUNC(sub_83C12CF0);
PPC_FUNC_IMPL(__imp__sub_83C12CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29504
	ctx.r7.s64 = ctx.r8.s64 + 29504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12D18"))) PPC_WEAK_FUNC(sub_83C12D18);
PPC_FUNC_IMPL(__imp__sub_83C12D18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-11300
	ctx.r6.s64 = ctx.r7.s64 + -11300;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29504);
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
	// std r9,-11300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12D60"))) PPC_WEAK_FUNC(sub_83C12D60);
PPC_FUNC_IMPL(__imp__sub_83C12D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30320
	ctx.r3.s64 = ctx.r11.s64 + -30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12D6C"))) PPC_WEAK_FUNC(sub_83C12D6C);
PPC_FUNC_IMPL(__imp__sub_83C12D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12D70"))) PPC_WEAK_FUNC(sub_83C12D70);
PPC_FUNC_IMPL(__imp__sub_83C12D70) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// bl 0x8259af80
	ctx.lr = 0x83C12D88;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30304
	ctx.r3.s64 = ctx.r10.s64 + -30304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C12D94;
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

__attribute__((alias("__imp__sub_83C12DA4"))) PPC_WEAK_FUNC(sub_83C12DA4);
PPC_FUNC_IMPL(__imp__sub_83C12DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12DA8"))) PPC_WEAK_FUNC(sub_83C12DA8);
PPC_FUNC_IMPL(__imp__sub_83C12DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29492
	ctx.r11.s64 = ctx.r8.s64 + 29492;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-11324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30312
	ctx.r3.s64 = ctx.r6.s64 + -30312;
	// stw r10,29492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12DD8"))) PPC_WEAK_FUNC(sub_83C12DD8);
PPC_FUNC_IMPL(__imp__sub_83C12DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12DE4"))) PPC_WEAK_FUNC(sub_83C12DE4);
PPC_FUNC_IMPL(__imp__sub_83C12DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12DE8"))) PPC_WEAK_FUNC(sub_83C12DE8);
PPC_FUNC_IMPL(__imp__sub_83C12DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30288
	ctx.r3.s64 = ctx.r11.s64 + -30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12DF4"))) PPC_WEAK_FUNC(sub_83C12DF4);
PPC_FUNC_IMPL(__imp__sub_83C12DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12DF8"))) PPC_WEAK_FUNC(sub_83C12DF8);
PPC_FUNC_IMPL(__imp__sub_83C12DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30280
	ctx.r3.s64 = ctx.r11.s64 + -30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E04"))) PPC_WEAK_FUNC(sub_83C12E04);
PPC_FUNC_IMPL(__imp__sub_83C12E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E08"))) PPC_WEAK_FUNC(sub_83C12E08);
PPC_FUNC_IMPL(__imp__sub_83C12E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30272
	ctx.r3.s64 = ctx.r11.s64 + -30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E14"))) PPC_WEAK_FUNC(sub_83C12E14);
PPC_FUNC_IMPL(__imp__sub_83C12E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E18"))) PPC_WEAK_FUNC(sub_83C12E18);
PPC_FUNC_IMPL(__imp__sub_83C12E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E24"))) PPC_WEAK_FUNC(sub_83C12E24);
PPC_FUNC_IMPL(__imp__sub_83C12E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E28"))) PPC_WEAK_FUNC(sub_83C12E28);
PPC_FUNC_IMPL(__imp__sub_83C12E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30256
	ctx.r3.s64 = ctx.r11.s64 + -30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E34"))) PPC_WEAK_FUNC(sub_83C12E34);
PPC_FUNC_IMPL(__imp__sub_83C12E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E38"))) PPC_WEAK_FUNC(sub_83C12E38);
PPC_FUNC_IMPL(__imp__sub_83C12E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E44"))) PPC_WEAK_FUNC(sub_83C12E44);
PPC_FUNC_IMPL(__imp__sub_83C12E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E48"))) PPC_WEAK_FUNC(sub_83C12E48);
PPC_FUNC_IMPL(__imp__sub_83C12E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E54"))) PPC_WEAK_FUNC(sub_83C12E54);
PPC_FUNC_IMPL(__imp__sub_83C12E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E58"))) PPC_WEAK_FUNC(sub_83C12E58);
PPC_FUNC_IMPL(__imp__sub_83C12E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30232
	ctx.r3.s64 = ctx.r11.s64 + -30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E64"))) PPC_WEAK_FUNC(sub_83C12E64);
PPC_FUNC_IMPL(__imp__sub_83C12E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E68"))) PPC_WEAK_FUNC(sub_83C12E68);
PPC_FUNC_IMPL(__imp__sub_83C12E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30224
	ctx.r3.s64 = ctx.r11.s64 + -30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E74"))) PPC_WEAK_FUNC(sub_83C12E74);
PPC_FUNC_IMPL(__imp__sub_83C12E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E78"))) PPC_WEAK_FUNC(sub_83C12E78);
PPC_FUNC_IMPL(__imp__sub_83C12E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30216
	ctx.r3.s64 = ctx.r11.s64 + -30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E84"))) PPC_WEAK_FUNC(sub_83C12E84);
PPC_FUNC_IMPL(__imp__sub_83C12E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E88"))) PPC_WEAK_FUNC(sub_83C12E88);
PPC_FUNC_IMPL(__imp__sub_83C12E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12E94"))) PPC_WEAK_FUNC(sub_83C12E94);
PPC_FUNC_IMPL(__imp__sub_83C12E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12E98"))) PPC_WEAK_FUNC(sub_83C12E98);
PPC_FUNC_IMPL(__imp__sub_83C12E98) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,29856
	ctx.r3.s64 = ctx.r11.s64 + 29856;
	// bl 0x83523120
	ctx.lr = 0x83C12EB0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-30200
	ctx.r3.s64 = ctx.r10.s64 + -30200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C12EBC;
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

__attribute__((alias("__imp__sub_83C12ECC"))) PPC_WEAK_FUNC(sub_83C12ECC);
PPC_FUNC_IMPL(__imp__sub_83C12ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12ED0"))) PPC_WEAK_FUNC(sub_83C12ED0);
PPC_FUNC_IMPL(__imp__sub_83C12ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29860
	ctx.r7.s64 = ctx.r8.s64 + 29860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29860);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29860, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C12EF8"))) PPC_WEAK_FUNC(sub_83C12EF8);
PPC_FUNC_IMPL(__imp__sub_83C12EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F04"))) PPC_WEAK_FUNC(sub_83C12F04);
PPC_FUNC_IMPL(__imp__sub_83C12F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F08"))) PPC_WEAK_FUNC(sub_83C12F08);
PPC_FUNC_IMPL(__imp__sub_83C12F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F14"))) PPC_WEAK_FUNC(sub_83C12F14);
PPC_FUNC_IMPL(__imp__sub_83C12F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F18"))) PPC_WEAK_FUNC(sub_83C12F18);
PPC_FUNC_IMPL(__imp__sub_83C12F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F24"))) PPC_WEAK_FUNC(sub_83C12F24);
PPC_FUNC_IMPL(__imp__sub_83C12F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F28"))) PPC_WEAK_FUNC(sub_83C12F28);
PPC_FUNC_IMPL(__imp__sub_83C12F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F34"))) PPC_WEAK_FUNC(sub_83C12F34);
PPC_FUNC_IMPL(__imp__sub_83C12F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F38"))) PPC_WEAK_FUNC(sub_83C12F38);
PPC_FUNC_IMPL(__imp__sub_83C12F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F44"))) PPC_WEAK_FUNC(sub_83C12F44);
PPC_FUNC_IMPL(__imp__sub_83C12F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F48"))) PPC_WEAK_FUNC(sub_83C12F48);
PPC_FUNC_IMPL(__imp__sub_83C12F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F54"))) PPC_WEAK_FUNC(sub_83C12F54);
PPC_FUNC_IMPL(__imp__sub_83C12F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F58"))) PPC_WEAK_FUNC(sub_83C12F58);
PPC_FUNC_IMPL(__imp__sub_83C12F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F64"))) PPC_WEAK_FUNC(sub_83C12F64);
PPC_FUNC_IMPL(__imp__sub_83C12F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F68"))) PPC_WEAK_FUNC(sub_83C12F68);
PPC_FUNC_IMPL(__imp__sub_83C12F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F74"))) PPC_WEAK_FUNC(sub_83C12F74);
PPC_FUNC_IMPL(__imp__sub_83C12F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F78"))) PPC_WEAK_FUNC(sub_83C12F78);
PPC_FUNC_IMPL(__imp__sub_83C12F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F84"))) PPC_WEAK_FUNC(sub_83C12F84);
PPC_FUNC_IMPL(__imp__sub_83C12F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F88"))) PPC_WEAK_FUNC(sub_83C12F88);
PPC_FUNC_IMPL(__imp__sub_83C12F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12F94"))) PPC_WEAK_FUNC(sub_83C12F94);
PPC_FUNC_IMPL(__imp__sub_83C12F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12F98"))) PPC_WEAK_FUNC(sub_83C12F98);
PPC_FUNC_IMPL(__imp__sub_83C12F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30104
	ctx.r3.s64 = ctx.r11.s64 + -30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FA4"))) PPC_WEAK_FUNC(sub_83C12FA4);
PPC_FUNC_IMPL(__imp__sub_83C12FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FA8"))) PPC_WEAK_FUNC(sub_83C12FA8);
PPC_FUNC_IMPL(__imp__sub_83C12FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30096
	ctx.r3.s64 = ctx.r11.s64 + -30096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FB4"))) PPC_WEAK_FUNC(sub_83C12FB4);
PPC_FUNC_IMPL(__imp__sub_83C12FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FB8"))) PPC_WEAK_FUNC(sub_83C12FB8);
PPC_FUNC_IMPL(__imp__sub_83C12FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30088
	ctx.r3.s64 = ctx.r11.s64 + -30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FC4"))) PPC_WEAK_FUNC(sub_83C12FC4);
PPC_FUNC_IMPL(__imp__sub_83C12FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FC8"))) PPC_WEAK_FUNC(sub_83C12FC8);
PPC_FUNC_IMPL(__imp__sub_83C12FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FD4"))) PPC_WEAK_FUNC(sub_83C12FD4);
PPC_FUNC_IMPL(__imp__sub_83C12FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FD8"))) PPC_WEAK_FUNC(sub_83C12FD8);
PPC_FUNC_IMPL(__imp__sub_83C12FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30072
	ctx.r3.s64 = ctx.r11.s64 + -30072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FE4"))) PPC_WEAK_FUNC(sub_83C12FE4);
PPC_FUNC_IMPL(__imp__sub_83C12FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FE8"))) PPC_WEAK_FUNC(sub_83C12FE8);
PPC_FUNC_IMPL(__imp__sub_83C12FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30064
	ctx.r3.s64 = ctx.r11.s64 + -30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C12FF4"))) PPC_WEAK_FUNC(sub_83C12FF4);
PPC_FUNC_IMPL(__imp__sub_83C12FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C12FF8"))) PPC_WEAK_FUNC(sub_83C12FF8);
PPC_FUNC_IMPL(__imp__sub_83C12FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13004"))) PPC_WEAK_FUNC(sub_83C13004);
PPC_FUNC_IMPL(__imp__sub_83C13004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13008"))) PPC_WEAK_FUNC(sub_83C13008);
PPC_FUNC_IMPL(__imp__sub_83C13008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13014"))) PPC_WEAK_FUNC(sub_83C13014);
PPC_FUNC_IMPL(__imp__sub_83C13014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13018"))) PPC_WEAK_FUNC(sub_83C13018);
PPC_FUNC_IMPL(__imp__sub_83C13018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30040
	ctx.r3.s64 = ctx.r11.s64 + -30040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13024"))) PPC_WEAK_FUNC(sub_83C13024);
PPC_FUNC_IMPL(__imp__sub_83C13024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13028"))) PPC_WEAK_FUNC(sub_83C13028);
PPC_FUNC_IMPL(__imp__sub_83C13028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13034"))) PPC_WEAK_FUNC(sub_83C13034);
PPC_FUNC_IMPL(__imp__sub_83C13034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13038"))) PPC_WEAK_FUNC(sub_83C13038);
PPC_FUNC_IMPL(__imp__sub_83C13038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30024
	ctx.r3.s64 = ctx.r11.s64 + -30024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13044"))) PPC_WEAK_FUNC(sub_83C13044);
PPC_FUNC_IMPL(__imp__sub_83C13044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13048"))) PPC_WEAK_FUNC(sub_83C13048);
PPC_FUNC_IMPL(__imp__sub_83C13048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30016
	ctx.r3.s64 = ctx.r11.s64 + -30016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13054"))) PPC_WEAK_FUNC(sub_83C13054);
PPC_FUNC_IMPL(__imp__sub_83C13054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13058"))) PPC_WEAK_FUNC(sub_83C13058);
PPC_FUNC_IMPL(__imp__sub_83C13058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13064"))) PPC_WEAK_FUNC(sub_83C13064);
PPC_FUNC_IMPL(__imp__sub_83C13064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13068"))) PPC_WEAK_FUNC(sub_83C13068);
PPC_FUNC_IMPL(__imp__sub_83C13068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-30000
	ctx.r3.s64 = ctx.r11.s64 + -30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

