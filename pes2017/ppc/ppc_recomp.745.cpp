#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C2B280"))) PPC_WEAK_FUNC(sub_83C2B280);
PPC_FUNC_IMPL(__imp__sub_83C2B280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6352
	ctx.r3.s64 = ctx.r11.s64 + 6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B28C"))) PPC_WEAK_FUNC(sub_83C2B28C);
PPC_FUNC_IMPL(__imp__sub_83C2B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B290"))) PPC_WEAK_FUNC(sub_83C2B290);
PPC_FUNC_IMPL(__imp__sub_83C2B290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6360
	ctx.r3.s64 = ctx.r11.s64 + 6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B29C"))) PPC_WEAK_FUNC(sub_83C2B29C);
PPC_FUNC_IMPL(__imp__sub_83C2B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B2A0"))) PPC_WEAK_FUNC(sub_83C2B2A0);
PPC_FUNC_IMPL(__imp__sub_83C2B2A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,22844
	ctx.r3.s64 = ctx.r10.s64 + 22844;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B2C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,6368
	ctx.r3.s64 = ctx.r9.s64 + 6368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B2D0;
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

__attribute__((alias("__imp__sub_83C2B2E0"))) PPC_WEAK_FUNC(sub_83C2B2E0);
PPC_FUNC_IMPL(__imp__sub_83C2B2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6472
	ctx.r3.s64 = ctx.r11.s64 + 6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B2EC"))) PPC_WEAK_FUNC(sub_83C2B2EC);
PPC_FUNC_IMPL(__imp__sub_83C2B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B2F0"))) PPC_WEAK_FUNC(sub_83C2B2F0);
PPC_FUNC_IMPL(__imp__sub_83C2B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B2FC"))) PPC_WEAK_FUNC(sub_83C2B2FC);
PPC_FUNC_IMPL(__imp__sub_83C2B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B300"))) PPC_WEAK_FUNC(sub_83C2B300);
PPC_FUNC_IMPL(__imp__sub_83C2B300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6488
	ctx.r3.s64 = ctx.r11.s64 + 6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B30C"))) PPC_WEAK_FUNC(sub_83C2B30C);
PPC_FUNC_IMPL(__imp__sub_83C2B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B310"))) PPC_WEAK_FUNC(sub_83C2B310);
PPC_FUNC_IMPL(__imp__sub_83C2B310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6496
	ctx.r3.s64 = ctx.r11.s64 + 6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B31C"))) PPC_WEAK_FUNC(sub_83C2B31C);
PPC_FUNC_IMPL(__imp__sub_83C2B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B320"))) PPC_WEAK_FUNC(sub_83C2B320);
PPC_FUNC_IMPL(__imp__sub_83C2B320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6504
	ctx.r3.s64 = ctx.r11.s64 + 6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B32C"))) PPC_WEAK_FUNC(sub_83C2B32C);
PPC_FUNC_IMPL(__imp__sub_83C2B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B330"))) PPC_WEAK_FUNC(sub_83C2B330);
PPC_FUNC_IMPL(__imp__sub_83C2B330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6512
	ctx.r3.s64 = ctx.r11.s64 + 6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B33C"))) PPC_WEAK_FUNC(sub_83C2B33C);
PPC_FUNC_IMPL(__imp__sub_83C2B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B340"))) PPC_WEAK_FUNC(sub_83C2B340);
PPC_FUNC_IMPL(__imp__sub_83C2B340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6520
	ctx.r3.s64 = ctx.r11.s64 + 6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B34C"))) PPC_WEAK_FUNC(sub_83C2B34C);
PPC_FUNC_IMPL(__imp__sub_83C2B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B350"))) PPC_WEAK_FUNC(sub_83C2B350);
PPC_FUNC_IMPL(__imp__sub_83C2B350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B35C"))) PPC_WEAK_FUNC(sub_83C2B35C);
PPC_FUNC_IMPL(__imp__sub_83C2B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B360"))) PPC_WEAK_FUNC(sub_83C2B360);
PPC_FUNC_IMPL(__imp__sub_83C2B360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B36C"))) PPC_WEAK_FUNC(sub_83C2B36C);
PPC_FUNC_IMPL(__imp__sub_83C2B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B370"))) PPC_WEAK_FUNC(sub_83C2B370);
PPC_FUNC_IMPL(__imp__sub_83C2B370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B37C"))) PPC_WEAK_FUNC(sub_83C2B37C);
PPC_FUNC_IMPL(__imp__sub_83C2B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B380"))) PPC_WEAK_FUNC(sub_83C2B380);
PPC_FUNC_IMPL(__imp__sub_83C2B380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6552
	ctx.r3.s64 = ctx.r11.s64 + 6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B38C"))) PPC_WEAK_FUNC(sub_83C2B38C);
PPC_FUNC_IMPL(__imp__sub_83C2B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B390"))) PPC_WEAK_FUNC(sub_83C2B390);
PPC_FUNC_IMPL(__imp__sub_83C2B390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6560
	ctx.r3.s64 = ctx.r11.s64 + 6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B39C"))) PPC_WEAK_FUNC(sub_83C2B39C);
PPC_FUNC_IMPL(__imp__sub_83C2B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B3A0"))) PPC_WEAK_FUNC(sub_83C2B3A0);
PPC_FUNC_IMPL(__imp__sub_83C2B3A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,6944
	ctx.r4.s64 = ctx.r11.s64 + 6944;
	// addi r3,r10,22976
	ctx.r3.s64 = ctx.r10.s64 + 22976;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B3C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,6568
	ctx.r3.s64 = ctx.r9.s64 + 6568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B3D0;
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

__attribute__((alias("__imp__sub_83C2B3E0"))) PPC_WEAK_FUNC(sub_83C2B3E0);
PPC_FUNC_IMPL(__imp__sub_83C2B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B3EC"))) PPC_WEAK_FUNC(sub_83C2B3EC);
PPC_FUNC_IMPL(__imp__sub_83C2B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B3F0"))) PPC_WEAK_FUNC(sub_83C2B3F0);
PPC_FUNC_IMPL(__imp__sub_83C2B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6680
	ctx.r3.s64 = ctx.r11.s64 + 6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B3FC"))) PPC_WEAK_FUNC(sub_83C2B3FC);
PPC_FUNC_IMPL(__imp__sub_83C2B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B400"))) PPC_WEAK_FUNC(sub_83C2B400);
PPC_FUNC_IMPL(__imp__sub_83C2B400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B40C"))) PPC_WEAK_FUNC(sub_83C2B40C);
PPC_FUNC_IMPL(__imp__sub_83C2B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B410"))) PPC_WEAK_FUNC(sub_83C2B410);
PPC_FUNC_IMPL(__imp__sub_83C2B410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6696
	ctx.r3.s64 = ctx.r11.s64 + 6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B41C"))) PPC_WEAK_FUNC(sub_83C2B41C);
PPC_FUNC_IMPL(__imp__sub_83C2B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B420"))) PPC_WEAK_FUNC(sub_83C2B420);
PPC_FUNC_IMPL(__imp__sub_83C2B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6704
	ctx.r3.s64 = ctx.r11.s64 + 6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B42C"))) PPC_WEAK_FUNC(sub_83C2B42C);
PPC_FUNC_IMPL(__imp__sub_83C2B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B430"))) PPC_WEAK_FUNC(sub_83C2B430);
PPC_FUNC_IMPL(__imp__sub_83C2B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6712
	ctx.r3.s64 = ctx.r11.s64 + 6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B43C"))) PPC_WEAK_FUNC(sub_83C2B43C);
PPC_FUNC_IMPL(__imp__sub_83C2B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B440"))) PPC_WEAK_FUNC(sub_83C2B440);
PPC_FUNC_IMPL(__imp__sub_83C2B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6720
	ctx.r3.s64 = ctx.r11.s64 + 6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B44C"))) PPC_WEAK_FUNC(sub_83C2B44C);
PPC_FUNC_IMPL(__imp__sub_83C2B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B450"))) PPC_WEAK_FUNC(sub_83C2B450);
PPC_FUNC_IMPL(__imp__sub_83C2B450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B45C"))) PPC_WEAK_FUNC(sub_83C2B45C);
PPC_FUNC_IMPL(__imp__sub_83C2B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B460"))) PPC_WEAK_FUNC(sub_83C2B460);
PPC_FUNC_IMPL(__imp__sub_83C2B460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6736
	ctx.r3.s64 = ctx.r11.s64 + 6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B46C"))) PPC_WEAK_FUNC(sub_83C2B46C);
PPC_FUNC_IMPL(__imp__sub_83C2B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B470"))) PPC_WEAK_FUNC(sub_83C2B470);
PPC_FUNC_IMPL(__imp__sub_83C2B470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6744
	ctx.r3.s64 = ctx.r11.s64 + 6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B47C"))) PPC_WEAK_FUNC(sub_83C2B47C);
PPC_FUNC_IMPL(__imp__sub_83C2B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B480"))) PPC_WEAK_FUNC(sub_83C2B480);
PPC_FUNC_IMPL(__imp__sub_83C2B480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B48C"))) PPC_WEAK_FUNC(sub_83C2B48C);
PPC_FUNC_IMPL(__imp__sub_83C2B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B490"))) PPC_WEAK_FUNC(sub_83C2B490);
PPC_FUNC_IMPL(__imp__sub_83C2B490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6760
	ctx.r3.s64 = ctx.r11.s64 + 6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B49C"))) PPC_WEAK_FUNC(sub_83C2B49C);
PPC_FUNC_IMPL(__imp__sub_83C2B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B4A0"))) PPC_WEAK_FUNC(sub_83C2B4A0);
PPC_FUNC_IMPL(__imp__sub_83C2B4A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,7296
	ctx.r4.s64 = ctx.r11.s64 + 7296;
	// addi r3,r10,23108
	ctx.r3.s64 = ctx.r10.s64 + 23108;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B4C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,6768
	ctx.r3.s64 = ctx.r9.s64 + 6768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B4D0;
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

__attribute__((alias("__imp__sub_83C2B4E0"))) PPC_WEAK_FUNC(sub_83C2B4E0);
PPC_FUNC_IMPL(__imp__sub_83C2B4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B4EC"))) PPC_WEAK_FUNC(sub_83C2B4EC);
PPC_FUNC_IMPL(__imp__sub_83C2B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B4F0"))) PPC_WEAK_FUNC(sub_83C2B4F0);
PPC_FUNC_IMPL(__imp__sub_83C2B4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6880
	ctx.r3.s64 = ctx.r11.s64 + 6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B4FC"))) PPC_WEAK_FUNC(sub_83C2B4FC);
PPC_FUNC_IMPL(__imp__sub_83C2B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B500"))) PPC_WEAK_FUNC(sub_83C2B500);
PPC_FUNC_IMPL(__imp__sub_83C2B500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6888
	ctx.r3.s64 = ctx.r11.s64 + 6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B50C"))) PPC_WEAK_FUNC(sub_83C2B50C);
PPC_FUNC_IMPL(__imp__sub_83C2B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B510"))) PPC_WEAK_FUNC(sub_83C2B510);
PPC_FUNC_IMPL(__imp__sub_83C2B510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6896
	ctx.r3.s64 = ctx.r11.s64 + 6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B51C"))) PPC_WEAK_FUNC(sub_83C2B51C);
PPC_FUNC_IMPL(__imp__sub_83C2B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B520"))) PPC_WEAK_FUNC(sub_83C2B520);
PPC_FUNC_IMPL(__imp__sub_83C2B520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B52C"))) PPC_WEAK_FUNC(sub_83C2B52C);
PPC_FUNC_IMPL(__imp__sub_83C2B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B530"))) PPC_WEAK_FUNC(sub_83C2B530);
PPC_FUNC_IMPL(__imp__sub_83C2B530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6912
	ctx.r3.s64 = ctx.r11.s64 + 6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B53C"))) PPC_WEAK_FUNC(sub_83C2B53C);
PPC_FUNC_IMPL(__imp__sub_83C2B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B540"))) PPC_WEAK_FUNC(sub_83C2B540);
PPC_FUNC_IMPL(__imp__sub_83C2B540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6920
	ctx.r3.s64 = ctx.r11.s64 + 6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B54C"))) PPC_WEAK_FUNC(sub_83C2B54C);
PPC_FUNC_IMPL(__imp__sub_83C2B54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B550"))) PPC_WEAK_FUNC(sub_83C2B550);
PPC_FUNC_IMPL(__imp__sub_83C2B550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6928
	ctx.r3.s64 = ctx.r11.s64 + 6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B55C"))) PPC_WEAK_FUNC(sub_83C2B55C);
PPC_FUNC_IMPL(__imp__sub_83C2B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B560"))) PPC_WEAK_FUNC(sub_83C2B560);
PPC_FUNC_IMPL(__imp__sub_83C2B560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6936
	ctx.r3.s64 = ctx.r11.s64 + 6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B56C"))) PPC_WEAK_FUNC(sub_83C2B56C);
PPC_FUNC_IMPL(__imp__sub_83C2B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B570"))) PPC_WEAK_FUNC(sub_83C2B570);
PPC_FUNC_IMPL(__imp__sub_83C2B570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6944
	ctx.r3.s64 = ctx.r11.s64 + 6944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B57C"))) PPC_WEAK_FUNC(sub_83C2B57C);
PPC_FUNC_IMPL(__imp__sub_83C2B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B580"))) PPC_WEAK_FUNC(sub_83C2B580);
PPC_FUNC_IMPL(__imp__sub_83C2B580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6952
	ctx.r3.s64 = ctx.r11.s64 + 6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B58C"))) PPC_WEAK_FUNC(sub_83C2B58C);
PPC_FUNC_IMPL(__imp__sub_83C2B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B590"))) PPC_WEAK_FUNC(sub_83C2B590);
PPC_FUNC_IMPL(__imp__sub_83C2B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,6960
	ctx.r3.s64 = ctx.r11.s64 + 6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B59C"))) PPC_WEAK_FUNC(sub_83C2B59C);
PPC_FUNC_IMPL(__imp__sub_83C2B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B5A0"))) PPC_WEAK_FUNC(sub_83C2B5A0);
PPC_FUNC_IMPL(__imp__sub_83C2B5A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,7872
	ctx.r4.s64 = ctx.r11.s64 + 7872;
	// addi r3,r10,23240
	ctx.r3.s64 = ctx.r10.s64 + 23240;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B5C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,6968
	ctx.r3.s64 = ctx.r9.s64 + 6968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B5D0;
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

__attribute__((alias("__imp__sub_83C2B5E0"))) PPC_WEAK_FUNC(sub_83C2B5E0);
PPC_FUNC_IMPL(__imp__sub_83C2B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7072
	ctx.r3.s64 = ctx.r11.s64 + 7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B5EC"))) PPC_WEAK_FUNC(sub_83C2B5EC);
PPC_FUNC_IMPL(__imp__sub_83C2B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B5F0"))) PPC_WEAK_FUNC(sub_83C2B5F0);
PPC_FUNC_IMPL(__imp__sub_83C2B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B5FC"))) PPC_WEAK_FUNC(sub_83C2B5FC);
PPC_FUNC_IMPL(__imp__sub_83C2B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B600"))) PPC_WEAK_FUNC(sub_83C2B600);
PPC_FUNC_IMPL(__imp__sub_83C2B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7088
	ctx.r3.s64 = ctx.r11.s64 + 7088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B60C"))) PPC_WEAK_FUNC(sub_83C2B60C);
PPC_FUNC_IMPL(__imp__sub_83C2B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B610"))) PPC_WEAK_FUNC(sub_83C2B610);
PPC_FUNC_IMPL(__imp__sub_83C2B610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7096
	ctx.r3.s64 = ctx.r11.s64 + 7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B61C"))) PPC_WEAK_FUNC(sub_83C2B61C);
PPC_FUNC_IMPL(__imp__sub_83C2B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B620"))) PPC_WEAK_FUNC(sub_83C2B620);
PPC_FUNC_IMPL(__imp__sub_83C2B620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7104
	ctx.r3.s64 = ctx.r11.s64 + 7104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B62C"))) PPC_WEAK_FUNC(sub_83C2B62C);
PPC_FUNC_IMPL(__imp__sub_83C2B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B630"))) PPC_WEAK_FUNC(sub_83C2B630);
PPC_FUNC_IMPL(__imp__sub_83C2B630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7112
	ctx.r3.s64 = ctx.r11.s64 + 7112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B63C"))) PPC_WEAK_FUNC(sub_83C2B63C);
PPC_FUNC_IMPL(__imp__sub_83C2B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B640"))) PPC_WEAK_FUNC(sub_83C2B640);
PPC_FUNC_IMPL(__imp__sub_83C2B640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B64C"))) PPC_WEAK_FUNC(sub_83C2B64C);
PPC_FUNC_IMPL(__imp__sub_83C2B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B650"))) PPC_WEAK_FUNC(sub_83C2B650);
PPC_FUNC_IMPL(__imp__sub_83C2B650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B65C"))) PPC_WEAK_FUNC(sub_83C2B65C);
PPC_FUNC_IMPL(__imp__sub_83C2B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B660"))) PPC_WEAK_FUNC(sub_83C2B660);
PPC_FUNC_IMPL(__imp__sub_83C2B660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B66C"))) PPC_WEAK_FUNC(sub_83C2B66C);
PPC_FUNC_IMPL(__imp__sub_83C2B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B670"))) PPC_WEAK_FUNC(sub_83C2B670);
PPC_FUNC_IMPL(__imp__sub_83C2B670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B67C"))) PPC_WEAK_FUNC(sub_83C2B67C);
PPC_FUNC_IMPL(__imp__sub_83C2B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B680"))) PPC_WEAK_FUNC(sub_83C2B680);
PPC_FUNC_IMPL(__imp__sub_83C2B680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7152
	ctx.r3.s64 = ctx.r11.s64 + 7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B68C"))) PPC_WEAK_FUNC(sub_83C2B68C);
PPC_FUNC_IMPL(__imp__sub_83C2B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B690"))) PPC_WEAK_FUNC(sub_83C2B690);
PPC_FUNC_IMPL(__imp__sub_83C2B690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B69C"))) PPC_WEAK_FUNC(sub_83C2B69C);
PPC_FUNC_IMPL(__imp__sub_83C2B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B6A0"))) PPC_WEAK_FUNC(sub_83C2B6A0);
PPC_FUNC_IMPL(__imp__sub_83C2B6A0) {
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
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// bl 0x83523120
	ctx.lr = 0x83C2B6B8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7168
	ctx.r3.s64 = ctx.r10.s64 + 7168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B6C4;
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

__attribute__((alias("__imp__sub_83C2B6D4"))) PPC_WEAK_FUNC(sub_83C2B6D4);
PPC_FUNC_IMPL(__imp__sub_83C2B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B6D8"))) PPC_WEAK_FUNC(sub_83C2B6D8);
PPC_FUNC_IMPL(__imp__sub_83C2B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3976
	ctx.r7.s64 = ctx.r8.s64 + -3976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2B700"))) PPC_WEAK_FUNC(sub_83C2B700);
PPC_FUNC_IMPL(__imp__sub_83C2B700) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,23372
	ctx.r6.s64 = ctx.r7.s64 + 23372;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3976);
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
	// std r9,23372(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2B748"))) PPC_WEAK_FUNC(sub_83C2B748);
PPC_FUNC_IMPL(__imp__sub_83C2B748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B754"))) PPC_WEAK_FUNC(sub_83C2B754);
PPC_FUNC_IMPL(__imp__sub_83C2B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B758"))) PPC_WEAK_FUNC(sub_83C2B758);
PPC_FUNC_IMPL(__imp__sub_83C2B758) {
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
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// bl 0x8259af80
	ctx.lr = 0x83C2B770;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7200
	ctx.r3.s64 = ctx.r10.s64 + 7200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B77C;
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

__attribute__((alias("__imp__sub_83C2B78C"))) PPC_WEAK_FUNC(sub_83C2B78C);
PPC_FUNC_IMPL(__imp__sub_83C2B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B790"))) PPC_WEAK_FUNC(sub_83C2B790);
PPC_FUNC_IMPL(__imp__sub_83C2B790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3988
	ctx.r11.s64 = ctx.r8.s64 + -3988;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,23348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23348);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7192
	ctx.r3.s64 = ctx.r6.s64 + 7192;
	// stw r10,-3988(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B7C0"))) PPC_WEAK_FUNC(sub_83C2B7C0);
PPC_FUNC_IMPL(__imp__sub_83C2B7C0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,8684
	ctx.r4.s64 = ctx.r11.s64 + 8684;
	// addi r3,r10,23396
	ctx.r3.s64 = ctx.r10.s64 + 23396;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B7E4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,7208
	ctx.r3.s64 = ctx.r9.s64 + 7208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B7F0;
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

__attribute__((alias("__imp__sub_83C2B800"))) PPC_WEAK_FUNC(sub_83C2B800);
PPC_FUNC_IMPL(__imp__sub_83C2B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B80C"))) PPC_WEAK_FUNC(sub_83C2B80C);
PPC_FUNC_IMPL(__imp__sub_83C2B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B810"))) PPC_WEAK_FUNC(sub_83C2B810);
PPC_FUNC_IMPL(__imp__sub_83C2B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B81C"))) PPC_WEAK_FUNC(sub_83C2B81C);
PPC_FUNC_IMPL(__imp__sub_83C2B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B820"))) PPC_WEAK_FUNC(sub_83C2B820);
PPC_FUNC_IMPL(__imp__sub_83C2B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7328
	ctx.r3.s64 = ctx.r11.s64 + 7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B82C"))) PPC_WEAK_FUNC(sub_83C2B82C);
PPC_FUNC_IMPL(__imp__sub_83C2B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B830"))) PPC_WEAK_FUNC(sub_83C2B830);
PPC_FUNC_IMPL(__imp__sub_83C2B830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7336
	ctx.r3.s64 = ctx.r11.s64 + 7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B83C"))) PPC_WEAK_FUNC(sub_83C2B83C);
PPC_FUNC_IMPL(__imp__sub_83C2B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B840"))) PPC_WEAK_FUNC(sub_83C2B840);
PPC_FUNC_IMPL(__imp__sub_83C2B840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B84C"))) PPC_WEAK_FUNC(sub_83C2B84C);
PPC_FUNC_IMPL(__imp__sub_83C2B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B850"))) PPC_WEAK_FUNC(sub_83C2B850);
PPC_FUNC_IMPL(__imp__sub_83C2B850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B85C"))) PPC_WEAK_FUNC(sub_83C2B85C);
PPC_FUNC_IMPL(__imp__sub_83C2B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B860"))) PPC_WEAK_FUNC(sub_83C2B860);
PPC_FUNC_IMPL(__imp__sub_83C2B860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7360
	ctx.r3.s64 = ctx.r11.s64 + 7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B86C"))) PPC_WEAK_FUNC(sub_83C2B86C);
PPC_FUNC_IMPL(__imp__sub_83C2B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B870"))) PPC_WEAK_FUNC(sub_83C2B870);
PPC_FUNC_IMPL(__imp__sub_83C2B870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7368
	ctx.r3.s64 = ctx.r11.s64 + 7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B87C"))) PPC_WEAK_FUNC(sub_83C2B87C);
PPC_FUNC_IMPL(__imp__sub_83C2B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B880"))) PPC_WEAK_FUNC(sub_83C2B880);
PPC_FUNC_IMPL(__imp__sub_83C2B880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7376
	ctx.r3.s64 = ctx.r11.s64 + 7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B88C"))) PPC_WEAK_FUNC(sub_83C2B88C);
PPC_FUNC_IMPL(__imp__sub_83C2B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B890"))) PPC_WEAK_FUNC(sub_83C2B890);
PPC_FUNC_IMPL(__imp__sub_83C2B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B89C"))) PPC_WEAK_FUNC(sub_83C2B89C);
PPC_FUNC_IMPL(__imp__sub_83C2B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B8A0"))) PPC_WEAK_FUNC(sub_83C2B8A0);
PPC_FUNC_IMPL(__imp__sub_83C2B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B8AC"))) PPC_WEAK_FUNC(sub_83C2B8AC);
PPC_FUNC_IMPL(__imp__sub_83C2B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B8B0"))) PPC_WEAK_FUNC(sub_83C2B8B0);
PPC_FUNC_IMPL(__imp__sub_83C2B8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B8BC"))) PPC_WEAK_FUNC(sub_83C2B8BC);
PPC_FUNC_IMPL(__imp__sub_83C2B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B8C0"))) PPC_WEAK_FUNC(sub_83C2B8C0);
PPC_FUNC_IMPL(__imp__sub_83C2B8C0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,9212
	ctx.r4.s64 = ctx.r11.s64 + 9212;
	// addi r3,r10,23528
	ctx.r3.s64 = ctx.r10.s64 + 23528;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2B8E4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,7448
	ctx.r3.s64 = ctx.r9.s64 + 7448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B8F0;
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

__attribute__((alias("__imp__sub_83C2B900"))) PPC_WEAK_FUNC(sub_83C2B900);
PPC_FUNC_IMPL(__imp__sub_83C2B900) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3608
	ctx.r7.s64 = ctx.r8.s64 + -3608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2B928"))) PPC_WEAK_FUNC(sub_83C2B928);
PPC_FUNC_IMPL(__imp__sub_83C2B928) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,23556
	ctx.r6.s64 = ctx.r7.s64 + 23556;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3608);
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
	// std r9,23556(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2B970"))) PPC_WEAK_FUNC(sub_83C2B970);
PPC_FUNC_IMPL(__imp__sub_83C2B970) {
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
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// bl 0x83523120
	ctx.lr = 0x83C2B988;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7408
	ctx.r3.s64 = ctx.r10.s64 + 7408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B994;
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

__attribute__((alias("__imp__sub_83C2B9A4"))) PPC_WEAK_FUNC(sub_83C2B9A4);
PPC_FUNC_IMPL(__imp__sub_83C2B9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B9A8"))) PPC_WEAK_FUNC(sub_83C2B9A8);
PPC_FUNC_IMPL(__imp__sub_83C2B9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2B9B4"))) PPC_WEAK_FUNC(sub_83C2B9B4);
PPC_FUNC_IMPL(__imp__sub_83C2B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B9B8"))) PPC_WEAK_FUNC(sub_83C2B9B8);
PPC_FUNC_IMPL(__imp__sub_83C2B9B8) {
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
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// bl 0x8259af80
	ctx.lr = 0x83C2B9D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7440
	ctx.r3.s64 = ctx.r10.s64 + 7440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2B9DC;
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

__attribute__((alias("__imp__sub_83C2B9EC"))) PPC_WEAK_FUNC(sub_83C2B9EC);
PPC_FUNC_IMPL(__imp__sub_83C2B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2B9F0"))) PPC_WEAK_FUNC(sub_83C2B9F0);
PPC_FUNC_IMPL(__imp__sub_83C2B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3620
	ctx.r11.s64 = ctx.r8.s64 + -3620;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,23504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7432
	ctx.r3.s64 = ctx.r6.s64 + 7432;
	// stw r10,-3620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA20"))) PPC_WEAK_FUNC(sub_83C2BA20);
PPC_FUNC_IMPL(__imp__sub_83C2BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA2C"))) PPC_WEAK_FUNC(sub_83C2BA2C);
PPC_FUNC_IMPL(__imp__sub_83C2BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA30"))) PPC_WEAK_FUNC(sub_83C2BA30);
PPC_FUNC_IMPL(__imp__sub_83C2BA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA3C"))) PPC_WEAK_FUNC(sub_83C2BA3C);
PPC_FUNC_IMPL(__imp__sub_83C2BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA40"))) PPC_WEAK_FUNC(sub_83C2BA40);
PPC_FUNC_IMPL(__imp__sub_83C2BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7568
	ctx.r3.s64 = ctx.r11.s64 + 7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA4C"))) PPC_WEAK_FUNC(sub_83C2BA4C);
PPC_FUNC_IMPL(__imp__sub_83C2BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA50"))) PPC_WEAK_FUNC(sub_83C2BA50);
PPC_FUNC_IMPL(__imp__sub_83C2BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7576
	ctx.r3.s64 = ctx.r11.s64 + 7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA5C"))) PPC_WEAK_FUNC(sub_83C2BA5C);
PPC_FUNC_IMPL(__imp__sub_83C2BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA60"))) PPC_WEAK_FUNC(sub_83C2BA60);
PPC_FUNC_IMPL(__imp__sub_83C2BA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA6C"))) PPC_WEAK_FUNC(sub_83C2BA6C);
PPC_FUNC_IMPL(__imp__sub_83C2BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA70"))) PPC_WEAK_FUNC(sub_83C2BA70);
PPC_FUNC_IMPL(__imp__sub_83C2BA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA7C"))) PPC_WEAK_FUNC(sub_83C2BA7C);
PPC_FUNC_IMPL(__imp__sub_83C2BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA80"))) PPC_WEAK_FUNC(sub_83C2BA80);
PPC_FUNC_IMPL(__imp__sub_83C2BA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA8C"))) PPC_WEAK_FUNC(sub_83C2BA8C);
PPC_FUNC_IMPL(__imp__sub_83C2BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BA90"))) PPC_WEAK_FUNC(sub_83C2BA90);
PPC_FUNC_IMPL(__imp__sub_83C2BA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7608
	ctx.r3.s64 = ctx.r11.s64 + 7608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BA9C"))) PPC_WEAK_FUNC(sub_83C2BA9C);
PPC_FUNC_IMPL(__imp__sub_83C2BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BAA0"))) PPC_WEAK_FUNC(sub_83C2BAA0);
PPC_FUNC_IMPL(__imp__sub_83C2BAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BAAC"))) PPC_WEAK_FUNC(sub_83C2BAAC);
PPC_FUNC_IMPL(__imp__sub_83C2BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BAB0"))) PPC_WEAK_FUNC(sub_83C2BAB0);
PPC_FUNC_IMPL(__imp__sub_83C2BAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7624
	ctx.r3.s64 = ctx.r11.s64 + 7624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BABC"))) PPC_WEAK_FUNC(sub_83C2BABC);
PPC_FUNC_IMPL(__imp__sub_83C2BABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BAC0"))) PPC_WEAK_FUNC(sub_83C2BAC0);
PPC_FUNC_IMPL(__imp__sub_83C2BAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7632
	ctx.r3.s64 = ctx.r11.s64 + 7632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BACC"))) PPC_WEAK_FUNC(sub_83C2BACC);
PPC_FUNC_IMPL(__imp__sub_83C2BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BAD0"))) PPC_WEAK_FUNC(sub_83C2BAD0);
PPC_FUNC_IMPL(__imp__sub_83C2BAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7640
	ctx.r3.s64 = ctx.r11.s64 + 7640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BADC"))) PPC_WEAK_FUNC(sub_83C2BADC);
PPC_FUNC_IMPL(__imp__sub_83C2BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BAE0"))) PPC_WEAK_FUNC(sub_83C2BAE0);
PPC_FUNC_IMPL(__imp__sub_83C2BAE0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,10048
	ctx.r4.s64 = ctx.r11.s64 + 10048;
	// addi r3,r10,23684
	ctx.r3.s64 = ctx.r10.s64 + 23684;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2BB04;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,7664
	ctx.r3.s64 = ctx.r9.s64 + 7664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2BB10;
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

__attribute__((alias("__imp__sub_83C2BB20"))) PPC_WEAK_FUNC(sub_83C2BB20);
PPC_FUNC_IMPL(__imp__sub_83C2BB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3252
	ctx.r7.s64 = ctx.r8.s64 + -3252;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3252(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3252);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3252, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2BB48"))) PPC_WEAK_FUNC(sub_83C2BB48);
PPC_FUNC_IMPL(__imp__sub_83C2BB48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,23712
	ctx.r6.s64 = ctx.r7.s64 + 23712;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23612(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23612);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3252);
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
	// std r9,23712(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23712, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2BB90"))) PPC_WEAK_FUNC(sub_83C2BB90);
PPC_FUNC_IMPL(__imp__sub_83C2BB90) {
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
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// bl 0x83523120
	ctx.lr = 0x83C2BBA8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7648
	ctx.r3.s64 = ctx.r10.s64 + 7648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2BBB4;
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

__attribute__((alias("__imp__sub_83C2BBC4"))) PPC_WEAK_FUNC(sub_83C2BBC4);
PPC_FUNC_IMPL(__imp__sub_83C2BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BBC8"))) PPC_WEAK_FUNC(sub_83C2BBC8);
PPC_FUNC_IMPL(__imp__sub_83C2BBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7768
	ctx.r3.s64 = ctx.r11.s64 + 7768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BBD4"))) PPC_WEAK_FUNC(sub_83C2BBD4);
PPC_FUNC_IMPL(__imp__sub_83C2BBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BBD8"))) PPC_WEAK_FUNC(sub_83C2BBD8);
PPC_FUNC_IMPL(__imp__sub_83C2BBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BBE4"))) PPC_WEAK_FUNC(sub_83C2BBE4);
PPC_FUNC_IMPL(__imp__sub_83C2BBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BBE8"))) PPC_WEAK_FUNC(sub_83C2BBE8);
PPC_FUNC_IMPL(__imp__sub_83C2BBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BBF4"))) PPC_WEAK_FUNC(sub_83C2BBF4);
PPC_FUNC_IMPL(__imp__sub_83C2BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BBF8"))) PPC_WEAK_FUNC(sub_83C2BBF8);
PPC_FUNC_IMPL(__imp__sub_83C2BBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC04"))) PPC_WEAK_FUNC(sub_83C2BC04);
PPC_FUNC_IMPL(__imp__sub_83C2BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC08"))) PPC_WEAK_FUNC(sub_83C2BC08);
PPC_FUNC_IMPL(__imp__sub_83C2BC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7800
	ctx.r3.s64 = ctx.r11.s64 + 7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC14"))) PPC_WEAK_FUNC(sub_83C2BC14);
PPC_FUNC_IMPL(__imp__sub_83C2BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC18"))) PPC_WEAK_FUNC(sub_83C2BC18);
PPC_FUNC_IMPL(__imp__sub_83C2BC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC24"))) PPC_WEAK_FUNC(sub_83C2BC24);
PPC_FUNC_IMPL(__imp__sub_83C2BC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC28"))) PPC_WEAK_FUNC(sub_83C2BC28);
PPC_FUNC_IMPL(__imp__sub_83C2BC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC34"))) PPC_WEAK_FUNC(sub_83C2BC34);
PPC_FUNC_IMPL(__imp__sub_83C2BC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC38"))) PPC_WEAK_FUNC(sub_83C2BC38);
PPC_FUNC_IMPL(__imp__sub_83C2BC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC44"))) PPC_WEAK_FUNC(sub_83C2BC44);
PPC_FUNC_IMPL(__imp__sub_83C2BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC48"))) PPC_WEAK_FUNC(sub_83C2BC48);
PPC_FUNC_IMPL(__imp__sub_83C2BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC54"))) PPC_WEAK_FUNC(sub_83C2BC54);
PPC_FUNC_IMPL(__imp__sub_83C2BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC58"))) PPC_WEAK_FUNC(sub_83C2BC58);
PPC_FUNC_IMPL(__imp__sub_83C2BC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC64"))) PPC_WEAK_FUNC(sub_83C2BC64);
PPC_FUNC_IMPL(__imp__sub_83C2BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC68"))) PPC_WEAK_FUNC(sub_83C2BC68);
PPC_FUNC_IMPL(__imp__sub_83C2BC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC74"))) PPC_WEAK_FUNC(sub_83C2BC74);
PPC_FUNC_IMPL(__imp__sub_83C2BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC78"))) PPC_WEAK_FUNC(sub_83C2BC78);
PPC_FUNC_IMPL(__imp__sub_83C2BC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7856
	ctx.r3.s64 = ctx.r11.s64 + 7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BC84"))) PPC_WEAK_FUNC(sub_83C2BC84);
PPC_FUNC_IMPL(__imp__sub_83C2BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BC88"))) PPC_WEAK_FUNC(sub_83C2BC88);
PPC_FUNC_IMPL(__imp__sub_83C2BC88) {
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
	// addi r3,r11,-3244
	ctx.r3.s64 = ctx.r11.s64 + -3244;
	// bl 0x83523120
	ctx.lr = 0x83C2BCA0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7864
	ctx.r3.s64 = ctx.r10.s64 + 7864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2BCAC;
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

__attribute__((alias("__imp__sub_83C2BCBC"))) PPC_WEAK_FUNC(sub_83C2BCBC);
PPC_FUNC_IMPL(__imp__sub_83C2BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BCC0"))) PPC_WEAK_FUNC(sub_83C2BCC0);
PPC_FUNC_IMPL(__imp__sub_83C2BCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3240
	ctx.r7.s64 = ctx.r8.s64 + -3240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2BCE8"))) PPC_WEAK_FUNC(sub_83C2BCE8);
PPC_FUNC_IMPL(__imp__sub_83C2BCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BCF4"))) PPC_WEAK_FUNC(sub_83C2BCF4);
PPC_FUNC_IMPL(__imp__sub_83C2BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BCF8"))) PPC_WEAK_FUNC(sub_83C2BCF8);
PPC_FUNC_IMPL(__imp__sub_83C2BCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7888
	ctx.r3.s64 = ctx.r11.s64 + 7888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD04"))) PPC_WEAK_FUNC(sub_83C2BD04);
PPC_FUNC_IMPL(__imp__sub_83C2BD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD08"))) PPC_WEAK_FUNC(sub_83C2BD08);
PPC_FUNC_IMPL(__imp__sub_83C2BD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD14"))) PPC_WEAK_FUNC(sub_83C2BD14);
PPC_FUNC_IMPL(__imp__sub_83C2BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD18"))) PPC_WEAK_FUNC(sub_83C2BD18);
PPC_FUNC_IMPL(__imp__sub_83C2BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD24"))) PPC_WEAK_FUNC(sub_83C2BD24);
PPC_FUNC_IMPL(__imp__sub_83C2BD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD28"))) PPC_WEAK_FUNC(sub_83C2BD28);
PPC_FUNC_IMPL(__imp__sub_83C2BD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7912
	ctx.r3.s64 = ctx.r11.s64 + 7912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD34"))) PPC_WEAK_FUNC(sub_83C2BD34);
PPC_FUNC_IMPL(__imp__sub_83C2BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD38"))) PPC_WEAK_FUNC(sub_83C2BD38);
PPC_FUNC_IMPL(__imp__sub_83C2BD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD44"))) PPC_WEAK_FUNC(sub_83C2BD44);
PPC_FUNC_IMPL(__imp__sub_83C2BD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD48"))) PPC_WEAK_FUNC(sub_83C2BD48);
PPC_FUNC_IMPL(__imp__sub_83C2BD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD54"))) PPC_WEAK_FUNC(sub_83C2BD54);
PPC_FUNC_IMPL(__imp__sub_83C2BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD58"))) PPC_WEAK_FUNC(sub_83C2BD58);
PPC_FUNC_IMPL(__imp__sub_83C2BD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD64"))) PPC_WEAK_FUNC(sub_83C2BD64);
PPC_FUNC_IMPL(__imp__sub_83C2BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD68"))) PPC_WEAK_FUNC(sub_83C2BD68);
PPC_FUNC_IMPL(__imp__sub_83C2BD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD74"))) PPC_WEAK_FUNC(sub_83C2BD74);
PPC_FUNC_IMPL(__imp__sub_83C2BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD78"))) PPC_WEAK_FUNC(sub_83C2BD78);
PPC_FUNC_IMPL(__imp__sub_83C2BD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7952
	ctx.r3.s64 = ctx.r11.s64 + 7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD84"))) PPC_WEAK_FUNC(sub_83C2BD84);
PPC_FUNC_IMPL(__imp__sub_83C2BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD88"))) PPC_WEAK_FUNC(sub_83C2BD88);
PPC_FUNC_IMPL(__imp__sub_83C2BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BD94"))) PPC_WEAK_FUNC(sub_83C2BD94);
PPC_FUNC_IMPL(__imp__sub_83C2BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BD98"))) PPC_WEAK_FUNC(sub_83C2BD98);
PPC_FUNC_IMPL(__imp__sub_83C2BD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7968
	ctx.r3.s64 = ctx.r11.s64 + 7968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BDA4"))) PPC_WEAK_FUNC(sub_83C2BDA4);
PPC_FUNC_IMPL(__imp__sub_83C2BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BDA8"))) PPC_WEAK_FUNC(sub_83C2BDA8);
PPC_FUNC_IMPL(__imp__sub_83C2BDA8) {
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
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// bl 0x83523120
	ctx.lr = 0x83C2BDC0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,7976
	ctx.r3.s64 = ctx.r10.s64 + 7976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2BDCC;
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

__attribute__((alias("__imp__sub_83C2BDDC"))) PPC_WEAK_FUNC(sub_83C2BDDC);
PPC_FUNC_IMPL(__imp__sub_83C2BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BDE0"))) PPC_WEAK_FUNC(sub_83C2BDE0);
PPC_FUNC_IMPL(__imp__sub_83C2BDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3216
	ctx.r7.s64 = ctx.r8.s64 + -3216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2BE08"))) PPC_WEAK_FUNC(sub_83C2BE08);
PPC_FUNC_IMPL(__imp__sub_83C2BE08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,23952
	ctx.r6.s64 = ctx.r7.s64 + 23952;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23880(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23880);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3216);
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
	// std r9,23952(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2BE50"))) PPC_WEAK_FUNC(sub_83C2BE50);
PPC_FUNC_IMPL(__imp__sub_83C2BE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BE5C"))) PPC_WEAK_FUNC(sub_83C2BE5C);
PPC_FUNC_IMPL(__imp__sub_83C2BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BE60"))) PPC_WEAK_FUNC(sub_83C2BE60);
PPC_FUNC_IMPL(__imp__sub_83C2BE60) {
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
	// addi r3,r11,-3208
	ctx.r3.s64 = ctx.r11.s64 + -3208;
	// bl 0x8259af80
	ctx.lr = 0x83C2BE78;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,8008
	ctx.r3.s64 = ctx.r10.s64 + 8008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2BE84;
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

__attribute__((alias("__imp__sub_83C2BE94"))) PPC_WEAK_FUNC(sub_83C2BE94);
PPC_FUNC_IMPL(__imp__sub_83C2BE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BE98"))) PPC_WEAK_FUNC(sub_83C2BE98);
PPC_FUNC_IMPL(__imp__sub_83C2BE98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3228
	ctx.r11.s64 = ctx.r8.s64 + -3228;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,23928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8000
	ctx.r3.s64 = ctx.r6.s64 + 8000;
	// stw r10,-3228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BEC8"))) PPC_WEAK_FUNC(sub_83C2BEC8);
PPC_FUNC_IMPL(__imp__sub_83C2BEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8016
	ctx.r3.s64 = ctx.r11.s64 + 8016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BED4"))) PPC_WEAK_FUNC(sub_83C2BED4);
PPC_FUNC_IMPL(__imp__sub_83C2BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BED8"))) PPC_WEAK_FUNC(sub_83C2BED8);
PPC_FUNC_IMPL(__imp__sub_83C2BED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8024
	ctx.r3.s64 = ctx.r11.s64 + 8024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BEE4"))) PPC_WEAK_FUNC(sub_83C2BEE4);
PPC_FUNC_IMPL(__imp__sub_83C2BEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BEE8"))) PPC_WEAK_FUNC(sub_83C2BEE8);
PPC_FUNC_IMPL(__imp__sub_83C2BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BEF4"))) PPC_WEAK_FUNC(sub_83C2BEF4);
PPC_FUNC_IMPL(__imp__sub_83C2BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BEF8"))) PPC_WEAK_FUNC(sub_83C2BEF8);
PPC_FUNC_IMPL(__imp__sub_83C2BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8040
	ctx.r3.s64 = ctx.r11.s64 + 8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF04"))) PPC_WEAK_FUNC(sub_83C2BF04);
PPC_FUNC_IMPL(__imp__sub_83C2BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF08"))) PPC_WEAK_FUNC(sub_83C2BF08);
PPC_FUNC_IMPL(__imp__sub_83C2BF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8048
	ctx.r3.s64 = ctx.r11.s64 + 8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF14"))) PPC_WEAK_FUNC(sub_83C2BF14);
PPC_FUNC_IMPL(__imp__sub_83C2BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF18"))) PPC_WEAK_FUNC(sub_83C2BF18);
PPC_FUNC_IMPL(__imp__sub_83C2BF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8056
	ctx.r3.s64 = ctx.r11.s64 + 8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF24"))) PPC_WEAK_FUNC(sub_83C2BF24);
PPC_FUNC_IMPL(__imp__sub_83C2BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF28"))) PPC_WEAK_FUNC(sub_83C2BF28);
PPC_FUNC_IMPL(__imp__sub_83C2BF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF34"))) PPC_WEAK_FUNC(sub_83C2BF34);
PPC_FUNC_IMPL(__imp__sub_83C2BF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF38"))) PPC_WEAK_FUNC(sub_83C2BF38);
PPC_FUNC_IMPL(__imp__sub_83C2BF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF44"))) PPC_WEAK_FUNC(sub_83C2BF44);
PPC_FUNC_IMPL(__imp__sub_83C2BF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF48"))) PPC_WEAK_FUNC(sub_83C2BF48);
PPC_FUNC_IMPL(__imp__sub_83C2BF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8080
	ctx.r3.s64 = ctx.r11.s64 + 8080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2BF54"))) PPC_WEAK_FUNC(sub_83C2BF54);
PPC_FUNC_IMPL(__imp__sub_83C2BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2BF58"))) PPC_WEAK_FUNC(sub_83C2BF58);
PPC_FUNC_IMPL(__imp__sub_83C2BF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,8088
	ctx.r3.s64 = ctx.r11.s64 + 8088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

