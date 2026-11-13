#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B70A98"))) PPC_WEAK_FUNC(sub_83B70A98);
PPC_FUNC_IMPL(__imp__sub_83B70A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15656
	ctx.r3.s64 = ctx.r11.s64 + 15656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70AA4"))) PPC_WEAK_FUNC(sub_83B70AA4);
PPC_FUNC_IMPL(__imp__sub_83B70AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70AA8"))) PPC_WEAK_FUNC(sub_83B70AA8);
PPC_FUNC_IMPL(__imp__sub_83B70AA8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// bl 0x83523120
	ctx.lr = 0x83B70AC0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15664
	ctx.r3.s64 = ctx.r10.s64 + 15664;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70ACC;
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

__attribute__((alias("__imp__sub_83B70ADC"))) PPC_WEAK_FUNC(sub_83B70ADC);
PPC_FUNC_IMPL(__imp__sub_83B70ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70AE0"))) PPC_WEAK_FUNC(sub_83B70AE0);
PPC_FUNC_IMPL(__imp__sub_83B70AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15680
	ctx.r3.s64 = ctx.r11.s64 + 15680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70AEC"))) PPC_WEAK_FUNC(sub_83B70AEC);
PPC_FUNC_IMPL(__imp__sub_83B70AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70AF0"))) PPC_WEAK_FUNC(sub_83B70AF0);
PPC_FUNC_IMPL(__imp__sub_83B70AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15688
	ctx.r3.s64 = ctx.r11.s64 + 15688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70AFC"))) PPC_WEAK_FUNC(sub_83B70AFC);
PPC_FUNC_IMPL(__imp__sub_83B70AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B00"))) PPC_WEAK_FUNC(sub_83B70B00);
PPC_FUNC_IMPL(__imp__sub_83B70B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15696
	ctx.r3.s64 = ctx.r11.s64 + 15696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B0C"))) PPC_WEAK_FUNC(sub_83B70B0C);
PPC_FUNC_IMPL(__imp__sub_83B70B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B10"))) PPC_WEAK_FUNC(sub_83B70B10);
PPC_FUNC_IMPL(__imp__sub_83B70B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15704
	ctx.r3.s64 = ctx.r11.s64 + 15704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B1C"))) PPC_WEAK_FUNC(sub_83B70B1C);
PPC_FUNC_IMPL(__imp__sub_83B70B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B20"))) PPC_WEAK_FUNC(sub_83B70B20);
PPC_FUNC_IMPL(__imp__sub_83B70B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15712
	ctx.r3.s64 = ctx.r11.s64 + 15712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B2C"))) PPC_WEAK_FUNC(sub_83B70B2C);
PPC_FUNC_IMPL(__imp__sub_83B70B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B30"))) PPC_WEAK_FUNC(sub_83B70B30);
PPC_FUNC_IMPL(__imp__sub_83B70B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15720
	ctx.r3.s64 = ctx.r11.s64 + 15720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B3C"))) PPC_WEAK_FUNC(sub_83B70B3C);
PPC_FUNC_IMPL(__imp__sub_83B70B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B40"))) PPC_WEAK_FUNC(sub_83B70B40);
PPC_FUNC_IMPL(__imp__sub_83B70B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15728
	ctx.r3.s64 = ctx.r11.s64 + 15728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B4C"))) PPC_WEAK_FUNC(sub_83B70B4C);
PPC_FUNC_IMPL(__imp__sub_83B70B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B50"))) PPC_WEAK_FUNC(sub_83B70B50);
PPC_FUNC_IMPL(__imp__sub_83B70B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15736
	ctx.r3.s64 = ctx.r11.s64 + 15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B5C"))) PPC_WEAK_FUNC(sub_83B70B5C);
PPC_FUNC_IMPL(__imp__sub_83B70B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B60"))) PPC_WEAK_FUNC(sub_83B70B60);
PPC_FUNC_IMPL(__imp__sub_83B70B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15744
	ctx.r3.s64 = ctx.r11.s64 + 15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B6C"))) PPC_WEAK_FUNC(sub_83B70B6C);
PPC_FUNC_IMPL(__imp__sub_83B70B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B70"))) PPC_WEAK_FUNC(sub_83B70B70);
PPC_FUNC_IMPL(__imp__sub_83B70B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15752
	ctx.r3.s64 = ctx.r11.s64 + 15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B7C"))) PPC_WEAK_FUNC(sub_83B70B7C);
PPC_FUNC_IMPL(__imp__sub_83B70B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B80"))) PPC_WEAK_FUNC(sub_83B70B80);
PPC_FUNC_IMPL(__imp__sub_83B70B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B8C"))) PPC_WEAK_FUNC(sub_83B70B8C);
PPC_FUNC_IMPL(__imp__sub_83B70B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70B90"))) PPC_WEAK_FUNC(sub_83B70B90);
PPC_FUNC_IMPL(__imp__sub_83B70B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15768
	ctx.r3.s64 = ctx.r11.s64 + 15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70B9C"))) PPC_WEAK_FUNC(sub_83B70B9C);
PPC_FUNC_IMPL(__imp__sub_83B70B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70BA0"))) PPC_WEAK_FUNC(sub_83B70BA0);
PPC_FUNC_IMPL(__imp__sub_83B70BA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21735
	ctx.r3.s64 = ctx.r11.s64 + -21735;
	// bl 0x83523120
	ctx.lr = 0x83B70BB8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15776
	ctx.r3.s64 = ctx.r10.s64 + 15776;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70BC4;
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

__attribute__((alias("__imp__sub_83B70BD4"))) PPC_WEAK_FUNC(sub_83B70BD4);
PPC_FUNC_IMPL(__imp__sub_83B70BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70BD8"))) PPC_WEAK_FUNC(sub_83B70BD8);
PPC_FUNC_IMPL(__imp__sub_83B70BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70BE4"))) PPC_WEAK_FUNC(sub_83B70BE4);
PPC_FUNC_IMPL(__imp__sub_83B70BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70BE8"))) PPC_WEAK_FUNC(sub_83B70BE8);
PPC_FUNC_IMPL(__imp__sub_83B70BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15800
	ctx.r3.s64 = ctx.r11.s64 + 15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70BF4"))) PPC_WEAK_FUNC(sub_83B70BF4);
PPC_FUNC_IMPL(__imp__sub_83B70BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70BF8"))) PPC_WEAK_FUNC(sub_83B70BF8);
PPC_FUNC_IMPL(__imp__sub_83B70BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C04"))) PPC_WEAK_FUNC(sub_83B70C04);
PPC_FUNC_IMPL(__imp__sub_83B70C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C08"))) PPC_WEAK_FUNC(sub_83B70C08);
PPC_FUNC_IMPL(__imp__sub_83B70C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15816
	ctx.r3.s64 = ctx.r11.s64 + 15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C14"))) PPC_WEAK_FUNC(sub_83B70C14);
PPC_FUNC_IMPL(__imp__sub_83B70C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C18"))) PPC_WEAK_FUNC(sub_83B70C18);
PPC_FUNC_IMPL(__imp__sub_83B70C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C24"))) PPC_WEAK_FUNC(sub_83B70C24);
PPC_FUNC_IMPL(__imp__sub_83B70C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C28"))) PPC_WEAK_FUNC(sub_83B70C28);
PPC_FUNC_IMPL(__imp__sub_83B70C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15832
	ctx.r3.s64 = ctx.r11.s64 + 15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C34"))) PPC_WEAK_FUNC(sub_83B70C34);
PPC_FUNC_IMPL(__imp__sub_83B70C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C38"))) PPC_WEAK_FUNC(sub_83B70C38);
PPC_FUNC_IMPL(__imp__sub_83B70C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C44"))) PPC_WEAK_FUNC(sub_83B70C44);
PPC_FUNC_IMPL(__imp__sub_83B70C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C48"))) PPC_WEAK_FUNC(sub_83B70C48);
PPC_FUNC_IMPL(__imp__sub_83B70C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C54"))) PPC_WEAK_FUNC(sub_83B70C54);
PPC_FUNC_IMPL(__imp__sub_83B70C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C58"))) PPC_WEAK_FUNC(sub_83B70C58);
PPC_FUNC_IMPL(__imp__sub_83B70C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C64"))) PPC_WEAK_FUNC(sub_83B70C64);
PPC_FUNC_IMPL(__imp__sub_83B70C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C68"))) PPC_WEAK_FUNC(sub_83B70C68);
PPC_FUNC_IMPL(__imp__sub_83B70C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C74"))) PPC_WEAK_FUNC(sub_83B70C74);
PPC_FUNC_IMPL(__imp__sub_83B70C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C78"))) PPC_WEAK_FUNC(sub_83B70C78);
PPC_FUNC_IMPL(__imp__sub_83B70C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C84"))) PPC_WEAK_FUNC(sub_83B70C84);
PPC_FUNC_IMPL(__imp__sub_83B70C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C88"))) PPC_WEAK_FUNC(sub_83B70C88);
PPC_FUNC_IMPL(__imp__sub_83B70C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70C94"))) PPC_WEAK_FUNC(sub_83B70C94);
PPC_FUNC_IMPL(__imp__sub_83B70C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70C98"))) PPC_WEAK_FUNC(sub_83B70C98);
PPC_FUNC_IMPL(__imp__sub_83B70C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CA4"))) PPC_WEAK_FUNC(sub_83B70CA4);
PPC_FUNC_IMPL(__imp__sub_83B70CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CA8"))) PPC_WEAK_FUNC(sub_83B70CA8);
PPC_FUNC_IMPL(__imp__sub_83B70CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CB4"))) PPC_WEAK_FUNC(sub_83B70CB4);
PPC_FUNC_IMPL(__imp__sub_83B70CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CB8"))) PPC_WEAK_FUNC(sub_83B70CB8);
PPC_FUNC_IMPL(__imp__sub_83B70CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CC4"))) PPC_WEAK_FUNC(sub_83B70CC4);
PPC_FUNC_IMPL(__imp__sub_83B70CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CC8"))) PPC_WEAK_FUNC(sub_83B70CC8);
PPC_FUNC_IMPL(__imp__sub_83B70CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CD4"))) PPC_WEAK_FUNC(sub_83B70CD4);
PPC_FUNC_IMPL(__imp__sub_83B70CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CD8"))) PPC_WEAK_FUNC(sub_83B70CD8);
PPC_FUNC_IMPL(__imp__sub_83B70CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CE4"))) PPC_WEAK_FUNC(sub_83B70CE4);
PPC_FUNC_IMPL(__imp__sub_83B70CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CE8"))) PPC_WEAK_FUNC(sub_83B70CE8);
PPC_FUNC_IMPL(__imp__sub_83B70CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70CF4"))) PPC_WEAK_FUNC(sub_83B70CF4);
PPC_FUNC_IMPL(__imp__sub_83B70CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70CF8"))) PPC_WEAK_FUNC(sub_83B70CF8);
PPC_FUNC_IMPL(__imp__sub_83B70CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D04"))) PPC_WEAK_FUNC(sub_83B70D04);
PPC_FUNC_IMPL(__imp__sub_83B70D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D08"))) PPC_WEAK_FUNC(sub_83B70D08);
PPC_FUNC_IMPL(__imp__sub_83B70D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D14"))) PPC_WEAK_FUNC(sub_83B70D14);
PPC_FUNC_IMPL(__imp__sub_83B70D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D18"))) PPC_WEAK_FUNC(sub_83B70D18);
PPC_FUNC_IMPL(__imp__sub_83B70D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D24"))) PPC_WEAK_FUNC(sub_83B70D24);
PPC_FUNC_IMPL(__imp__sub_83B70D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D28"))) PPC_WEAK_FUNC(sub_83B70D28);
PPC_FUNC_IMPL(__imp__sub_83B70D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D34"))) PPC_WEAK_FUNC(sub_83B70D34);
PPC_FUNC_IMPL(__imp__sub_83B70D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D38"))) PPC_WEAK_FUNC(sub_83B70D38);
PPC_FUNC_IMPL(__imp__sub_83B70D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D44"))) PPC_WEAK_FUNC(sub_83B70D44);
PPC_FUNC_IMPL(__imp__sub_83B70D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D48"))) PPC_WEAK_FUNC(sub_83B70D48);
PPC_FUNC_IMPL(__imp__sub_83B70D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D54"))) PPC_WEAK_FUNC(sub_83B70D54);
PPC_FUNC_IMPL(__imp__sub_83B70D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D58"))) PPC_WEAK_FUNC(sub_83B70D58);
PPC_FUNC_IMPL(__imp__sub_83B70D58) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21716
	ctx.r3.s64 = ctx.r11.s64 + -21716;
	// bl 0x83523120
	ctx.lr = 0x83B70D70;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15984
	ctx.r3.s64 = ctx.r10.s64 + 15984;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70D7C;
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

__attribute__((alias("__imp__sub_83B70D8C"))) PPC_WEAK_FUNC(sub_83B70D8C);
PPC_FUNC_IMPL(__imp__sub_83B70D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70D90"))) PPC_WEAK_FUNC(sub_83B70D90);
PPC_FUNC_IMPL(__imp__sub_83B70D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70D9C"))) PPC_WEAK_FUNC(sub_83B70D9C);
PPC_FUNC_IMPL(__imp__sub_83B70D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DA0"))) PPC_WEAK_FUNC(sub_83B70DA0);
PPC_FUNC_IMPL(__imp__sub_83B70DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DAC"))) PPC_WEAK_FUNC(sub_83B70DAC);
PPC_FUNC_IMPL(__imp__sub_83B70DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DB0"))) PPC_WEAK_FUNC(sub_83B70DB0);
PPC_FUNC_IMPL(__imp__sub_83B70DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DBC"))) PPC_WEAK_FUNC(sub_83B70DBC);
PPC_FUNC_IMPL(__imp__sub_83B70DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DC0"))) PPC_WEAK_FUNC(sub_83B70DC0);
PPC_FUNC_IMPL(__imp__sub_83B70DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DCC"))) PPC_WEAK_FUNC(sub_83B70DCC);
PPC_FUNC_IMPL(__imp__sub_83B70DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DD0"))) PPC_WEAK_FUNC(sub_83B70DD0);
PPC_FUNC_IMPL(__imp__sub_83B70DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16032
	ctx.r3.s64 = ctx.r11.s64 + 16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DDC"))) PPC_WEAK_FUNC(sub_83B70DDC);
PPC_FUNC_IMPL(__imp__sub_83B70DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DE0"))) PPC_WEAK_FUNC(sub_83B70DE0);
PPC_FUNC_IMPL(__imp__sub_83B70DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DEC"))) PPC_WEAK_FUNC(sub_83B70DEC);
PPC_FUNC_IMPL(__imp__sub_83B70DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70DF0"))) PPC_WEAK_FUNC(sub_83B70DF0);
PPC_FUNC_IMPL(__imp__sub_83B70DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70DFC"))) PPC_WEAK_FUNC(sub_83B70DFC);
PPC_FUNC_IMPL(__imp__sub_83B70DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E00"))) PPC_WEAK_FUNC(sub_83B70E00);
PPC_FUNC_IMPL(__imp__sub_83B70E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16056
	ctx.r3.s64 = ctx.r11.s64 + 16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E0C"))) PPC_WEAK_FUNC(sub_83B70E0C);
PPC_FUNC_IMPL(__imp__sub_83B70E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E10"))) PPC_WEAK_FUNC(sub_83B70E10);
PPC_FUNC_IMPL(__imp__sub_83B70E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E1C"))) PPC_WEAK_FUNC(sub_83B70E1C);
PPC_FUNC_IMPL(__imp__sub_83B70E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E20"))) PPC_WEAK_FUNC(sub_83B70E20);
PPC_FUNC_IMPL(__imp__sub_83B70E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16072
	ctx.r3.s64 = ctx.r11.s64 + 16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E2C"))) PPC_WEAK_FUNC(sub_83B70E2C);
PPC_FUNC_IMPL(__imp__sub_83B70E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E30"))) PPC_WEAK_FUNC(sub_83B70E30);
PPC_FUNC_IMPL(__imp__sub_83B70E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E3C"))) PPC_WEAK_FUNC(sub_83B70E3C);
PPC_FUNC_IMPL(__imp__sub_83B70E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E40"))) PPC_WEAK_FUNC(sub_83B70E40);
PPC_FUNC_IMPL(__imp__sub_83B70E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E4C"))) PPC_WEAK_FUNC(sub_83B70E4C);
PPC_FUNC_IMPL(__imp__sub_83B70E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E50"))) PPC_WEAK_FUNC(sub_83B70E50);
PPC_FUNC_IMPL(__imp__sub_83B70E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E5C"))) PPC_WEAK_FUNC(sub_83B70E5C);
PPC_FUNC_IMPL(__imp__sub_83B70E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E60"))) PPC_WEAK_FUNC(sub_83B70E60);
PPC_FUNC_IMPL(__imp__sub_83B70E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E6C"))) PPC_WEAK_FUNC(sub_83B70E6C);
PPC_FUNC_IMPL(__imp__sub_83B70E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E70"))) PPC_WEAK_FUNC(sub_83B70E70);
PPC_FUNC_IMPL(__imp__sub_83B70E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E7C"))) PPC_WEAK_FUNC(sub_83B70E7C);
PPC_FUNC_IMPL(__imp__sub_83B70E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E80"))) PPC_WEAK_FUNC(sub_83B70E80);
PPC_FUNC_IMPL(__imp__sub_83B70E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E8C"))) PPC_WEAK_FUNC(sub_83B70E8C);
PPC_FUNC_IMPL(__imp__sub_83B70E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70E90"))) PPC_WEAK_FUNC(sub_83B70E90);
PPC_FUNC_IMPL(__imp__sub_83B70E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70E9C"))) PPC_WEAK_FUNC(sub_83B70E9C);
PPC_FUNC_IMPL(__imp__sub_83B70E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70EA0"))) PPC_WEAK_FUNC(sub_83B70EA0);
PPC_FUNC_IMPL(__imp__sub_83B70EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70EAC"))) PPC_WEAK_FUNC(sub_83B70EAC);
PPC_FUNC_IMPL(__imp__sub_83B70EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70EB0"))) PPC_WEAK_FUNC(sub_83B70EB0);
PPC_FUNC_IMPL(__imp__sub_83B70EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70EBC"))) PPC_WEAK_FUNC(sub_83B70EBC);
PPC_FUNC_IMPL(__imp__sub_83B70EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70EC0"))) PPC_WEAK_FUNC(sub_83B70EC0);
PPC_FUNC_IMPL(__imp__sub_83B70EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70ECC"))) PPC_WEAK_FUNC(sub_83B70ECC);
PPC_FUNC_IMPL(__imp__sub_83B70ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70ED0"))) PPC_WEAK_FUNC(sub_83B70ED0);
PPC_FUNC_IMPL(__imp__sub_83B70ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70EDC"))) PPC_WEAK_FUNC(sub_83B70EDC);
PPC_FUNC_IMPL(__imp__sub_83B70EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70EE0"))) PPC_WEAK_FUNC(sub_83B70EE0);
PPC_FUNC_IMPL(__imp__sub_83B70EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70EEC"))) PPC_WEAK_FUNC(sub_83B70EEC);
PPC_FUNC_IMPL(__imp__sub_83B70EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70EF0"))) PPC_WEAK_FUNC(sub_83B70EF0);
PPC_FUNC_IMPL(__imp__sub_83B70EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70EFC"))) PPC_WEAK_FUNC(sub_83B70EFC);
PPC_FUNC_IMPL(__imp__sub_83B70EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F00"))) PPC_WEAK_FUNC(sub_83B70F00);
PPC_FUNC_IMPL(__imp__sub_83B70F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16264
	ctx.r3.s64 = ctx.r11.s64 + 16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F0C"))) PPC_WEAK_FUNC(sub_83B70F0C);
PPC_FUNC_IMPL(__imp__sub_83B70F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F10"))) PPC_WEAK_FUNC(sub_83B70F10);
PPC_FUNC_IMPL(__imp__sub_83B70F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F1C"))) PPC_WEAK_FUNC(sub_83B70F1C);
PPC_FUNC_IMPL(__imp__sub_83B70F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F20"))) PPC_WEAK_FUNC(sub_83B70F20);
PPC_FUNC_IMPL(__imp__sub_83B70F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F2C"))) PPC_WEAK_FUNC(sub_83B70F2C);
PPC_FUNC_IMPL(__imp__sub_83B70F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F30"))) PPC_WEAK_FUNC(sub_83B70F30);
PPC_FUNC_IMPL(__imp__sub_83B70F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F3C"))) PPC_WEAK_FUNC(sub_83B70F3C);
PPC_FUNC_IMPL(__imp__sub_83B70F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F40"))) PPC_WEAK_FUNC(sub_83B70F40);
PPC_FUNC_IMPL(__imp__sub_83B70F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16296
	ctx.r3.s64 = ctx.r11.s64 + 16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F4C"))) PPC_WEAK_FUNC(sub_83B70F4C);
PPC_FUNC_IMPL(__imp__sub_83B70F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F50"))) PPC_WEAK_FUNC(sub_83B70F50);
PPC_FUNC_IMPL(__imp__sub_83B70F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F5C"))) PPC_WEAK_FUNC(sub_83B70F5C);
PPC_FUNC_IMPL(__imp__sub_83B70F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F60"))) PPC_WEAK_FUNC(sub_83B70F60);
PPC_FUNC_IMPL(__imp__sub_83B70F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F6C"))) PPC_WEAK_FUNC(sub_83B70F6C);
PPC_FUNC_IMPL(__imp__sub_83B70F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F70"))) PPC_WEAK_FUNC(sub_83B70F70);
PPC_FUNC_IMPL(__imp__sub_83B70F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F7C"))) PPC_WEAK_FUNC(sub_83B70F7C);
PPC_FUNC_IMPL(__imp__sub_83B70F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F80"))) PPC_WEAK_FUNC(sub_83B70F80);
PPC_FUNC_IMPL(__imp__sub_83B70F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F8C"))) PPC_WEAK_FUNC(sub_83B70F8C);
PPC_FUNC_IMPL(__imp__sub_83B70F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70F90"))) PPC_WEAK_FUNC(sub_83B70F90);
PPC_FUNC_IMPL(__imp__sub_83B70F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16336
	ctx.r3.s64 = ctx.r11.s64 + 16336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70F9C"))) PPC_WEAK_FUNC(sub_83B70F9C);
PPC_FUNC_IMPL(__imp__sub_83B70F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70FA0"))) PPC_WEAK_FUNC(sub_83B70FA0);
PPC_FUNC_IMPL(__imp__sub_83B70FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16344
	ctx.r3.s64 = ctx.r11.s64 + 16344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70FAC"))) PPC_WEAK_FUNC(sub_83B70FAC);
PPC_FUNC_IMPL(__imp__sub_83B70FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70FB0"))) PPC_WEAK_FUNC(sub_83B70FB0);
PPC_FUNC_IMPL(__imp__sub_83B70FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16352
	ctx.r3.s64 = ctx.r11.s64 + 16352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70FBC"))) PPC_WEAK_FUNC(sub_83B70FBC);
PPC_FUNC_IMPL(__imp__sub_83B70FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70FC0"))) PPC_WEAK_FUNC(sub_83B70FC0);
PPC_FUNC_IMPL(__imp__sub_83B70FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70FCC"))) PPC_WEAK_FUNC(sub_83B70FCC);
PPC_FUNC_IMPL(__imp__sub_83B70FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70FD0"))) PPC_WEAK_FUNC(sub_83B70FD0);
PPC_FUNC_IMPL(__imp__sub_83B70FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70FDC"))) PPC_WEAK_FUNC(sub_83B70FDC);
PPC_FUNC_IMPL(__imp__sub_83B70FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70FE0"))) PPC_WEAK_FUNC(sub_83B70FE0);
PPC_FUNC_IMPL(__imp__sub_83B70FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,28724
	ctx.r4.s64 = ctx.r11.s64 + 28724;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-21684
	ctx.r3.s64 = ctx.r7.s64 + -21684;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71010"))) PPC_WEAK_FUNC(sub_83B71010);
PPC_FUNC_IMPL(__imp__sub_83B71010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16376
	ctx.r3.s64 = ctx.r11.s64 + 16376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7101C"))) PPC_WEAK_FUNC(sub_83B7101C);
PPC_FUNC_IMPL(__imp__sub_83B7101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71020"))) PPC_WEAK_FUNC(sub_83B71020);
PPC_FUNC_IMPL(__imp__sub_83B71020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7102C"))) PPC_WEAK_FUNC(sub_83B7102C);
PPC_FUNC_IMPL(__imp__sub_83B7102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71030"))) PPC_WEAK_FUNC(sub_83B71030);
PPC_FUNC_IMPL(__imp__sub_83B71030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7103C"))) PPC_WEAK_FUNC(sub_83B7103C);
PPC_FUNC_IMPL(__imp__sub_83B7103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71040"))) PPC_WEAK_FUNC(sub_83B71040);
PPC_FUNC_IMPL(__imp__sub_83B71040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7104C"))) PPC_WEAK_FUNC(sub_83B7104C);
PPC_FUNC_IMPL(__imp__sub_83B7104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71050"))) PPC_WEAK_FUNC(sub_83B71050);
PPC_FUNC_IMPL(__imp__sub_83B71050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7105C"))) PPC_WEAK_FUNC(sub_83B7105C);
PPC_FUNC_IMPL(__imp__sub_83B7105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71060"))) PPC_WEAK_FUNC(sub_83B71060);
PPC_FUNC_IMPL(__imp__sub_83B71060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7106C"))) PPC_WEAK_FUNC(sub_83B7106C);
PPC_FUNC_IMPL(__imp__sub_83B7106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71070"))) PPC_WEAK_FUNC(sub_83B71070);
PPC_FUNC_IMPL(__imp__sub_83B71070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16424
	ctx.r3.s64 = ctx.r11.s64 + 16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7107C"))) PPC_WEAK_FUNC(sub_83B7107C);
PPC_FUNC_IMPL(__imp__sub_83B7107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71080"))) PPC_WEAK_FUNC(sub_83B71080);
PPC_FUNC_IMPL(__imp__sub_83B71080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7108C"))) PPC_WEAK_FUNC(sub_83B7108C);
PPC_FUNC_IMPL(__imp__sub_83B7108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71090"))) PPC_WEAK_FUNC(sub_83B71090);
PPC_FUNC_IMPL(__imp__sub_83B71090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7109C"))) PPC_WEAK_FUNC(sub_83B7109C);
PPC_FUNC_IMPL(__imp__sub_83B7109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B710A0"))) PPC_WEAK_FUNC(sub_83B710A0);
PPC_FUNC_IMPL(__imp__sub_83B710A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B710AC"))) PPC_WEAK_FUNC(sub_83B710AC);
PPC_FUNC_IMPL(__imp__sub_83B710AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B710B0"))) PPC_WEAK_FUNC(sub_83B710B0);
PPC_FUNC_IMPL(__imp__sub_83B710B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B710BC"))) PPC_WEAK_FUNC(sub_83B710BC);
PPC_FUNC_IMPL(__imp__sub_83B710BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B710C0"))) PPC_WEAK_FUNC(sub_83B710C0);
PPC_FUNC_IMPL(__imp__sub_83B710C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B710CC"))) PPC_WEAK_FUNC(sub_83B710CC);
PPC_FUNC_IMPL(__imp__sub_83B710CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B710D0"))) PPC_WEAK_FUNC(sub_83B710D0);
PPC_FUNC_IMPL(__imp__sub_83B710D0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21668
	ctx.r3.s64 = ctx.r11.s64 + -21668;
	// bl 0x83523120
	ctx.lr = 0x83B710E8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,16472
	ctx.r3.s64 = ctx.r10.s64 + 16472;
	// bl 0x831cdcc8
	ctx.lr = 0x83B710F4;
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

__attribute__((alias("__imp__sub_83B71104"))) PPC_WEAK_FUNC(sub_83B71104);
PPC_FUNC_IMPL(__imp__sub_83B71104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71108"))) PPC_WEAK_FUNC(sub_83B71108);
PPC_FUNC_IMPL(__imp__sub_83B71108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16488
	ctx.r3.s64 = ctx.r11.s64 + 16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71114"))) PPC_WEAK_FUNC(sub_83B71114);
PPC_FUNC_IMPL(__imp__sub_83B71114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71118"))) PPC_WEAK_FUNC(sub_83B71118);
PPC_FUNC_IMPL(__imp__sub_83B71118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16496
	ctx.r3.s64 = ctx.r11.s64 + 16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71124"))) PPC_WEAK_FUNC(sub_83B71124);
PPC_FUNC_IMPL(__imp__sub_83B71124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71128"))) PPC_WEAK_FUNC(sub_83B71128);
PPC_FUNC_IMPL(__imp__sub_83B71128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71134"))) PPC_WEAK_FUNC(sub_83B71134);
PPC_FUNC_IMPL(__imp__sub_83B71134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71138"))) PPC_WEAK_FUNC(sub_83B71138);
PPC_FUNC_IMPL(__imp__sub_83B71138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71144"))) PPC_WEAK_FUNC(sub_83B71144);
PPC_FUNC_IMPL(__imp__sub_83B71144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71148"))) PPC_WEAK_FUNC(sub_83B71148);
PPC_FUNC_IMPL(__imp__sub_83B71148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16520
	ctx.r3.s64 = ctx.r11.s64 + 16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71154"))) PPC_WEAK_FUNC(sub_83B71154);
PPC_FUNC_IMPL(__imp__sub_83B71154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71158"))) PPC_WEAK_FUNC(sub_83B71158);
PPC_FUNC_IMPL(__imp__sub_83B71158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71164"))) PPC_WEAK_FUNC(sub_83B71164);
PPC_FUNC_IMPL(__imp__sub_83B71164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71168"))) PPC_WEAK_FUNC(sub_83B71168);
PPC_FUNC_IMPL(__imp__sub_83B71168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71174"))) PPC_WEAK_FUNC(sub_83B71174);
PPC_FUNC_IMPL(__imp__sub_83B71174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71178"))) PPC_WEAK_FUNC(sub_83B71178);
PPC_FUNC_IMPL(__imp__sub_83B71178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71184"))) PPC_WEAK_FUNC(sub_83B71184);
PPC_FUNC_IMPL(__imp__sub_83B71184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71188"))) PPC_WEAK_FUNC(sub_83B71188);
PPC_FUNC_IMPL(__imp__sub_83B71188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71194"))) PPC_WEAK_FUNC(sub_83B71194);
PPC_FUNC_IMPL(__imp__sub_83B71194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71198"))) PPC_WEAK_FUNC(sub_83B71198);
PPC_FUNC_IMPL(__imp__sub_83B71198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711A4"))) PPC_WEAK_FUNC(sub_83B711A4);
PPC_FUNC_IMPL(__imp__sub_83B711A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711A8"))) PPC_WEAK_FUNC(sub_83B711A8);
PPC_FUNC_IMPL(__imp__sub_83B711A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711B4"))) PPC_WEAK_FUNC(sub_83B711B4);
PPC_FUNC_IMPL(__imp__sub_83B711B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711B8"))) PPC_WEAK_FUNC(sub_83B711B8);
PPC_FUNC_IMPL(__imp__sub_83B711B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711C4"))) PPC_WEAK_FUNC(sub_83B711C4);
PPC_FUNC_IMPL(__imp__sub_83B711C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711C8"))) PPC_WEAK_FUNC(sub_83B711C8);
PPC_FUNC_IMPL(__imp__sub_83B711C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711D4"))) PPC_WEAK_FUNC(sub_83B711D4);
PPC_FUNC_IMPL(__imp__sub_83B711D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711D8"))) PPC_WEAK_FUNC(sub_83B711D8);
PPC_FUNC_IMPL(__imp__sub_83B711D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711E4"))) PPC_WEAK_FUNC(sub_83B711E4);
PPC_FUNC_IMPL(__imp__sub_83B711E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711E8"))) PPC_WEAK_FUNC(sub_83B711E8);
PPC_FUNC_IMPL(__imp__sub_83B711E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B711F4"))) PPC_WEAK_FUNC(sub_83B711F4);
PPC_FUNC_IMPL(__imp__sub_83B711F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B711F8"))) PPC_WEAK_FUNC(sub_83B711F8);
PPC_FUNC_IMPL(__imp__sub_83B711F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71204"))) PPC_WEAK_FUNC(sub_83B71204);
PPC_FUNC_IMPL(__imp__sub_83B71204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71208"))) PPC_WEAK_FUNC(sub_83B71208);
PPC_FUNC_IMPL(__imp__sub_83B71208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71214"))) PPC_WEAK_FUNC(sub_83B71214);
PPC_FUNC_IMPL(__imp__sub_83B71214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71218"))) PPC_WEAK_FUNC(sub_83B71218);
PPC_FUNC_IMPL(__imp__sub_83B71218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71224"))) PPC_WEAK_FUNC(sub_83B71224);
PPC_FUNC_IMPL(__imp__sub_83B71224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71228"))) PPC_WEAK_FUNC(sub_83B71228);
PPC_FUNC_IMPL(__imp__sub_83B71228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16648
	ctx.r3.s64 = ctx.r11.s64 + 16648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71234"))) PPC_WEAK_FUNC(sub_83B71234);
PPC_FUNC_IMPL(__imp__sub_83B71234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71238"))) PPC_WEAK_FUNC(sub_83B71238);
PPC_FUNC_IMPL(__imp__sub_83B71238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16656
	ctx.r3.s64 = ctx.r11.s64 + 16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71244"))) PPC_WEAK_FUNC(sub_83B71244);
PPC_FUNC_IMPL(__imp__sub_83B71244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71248"))) PPC_WEAK_FUNC(sub_83B71248);
PPC_FUNC_IMPL(__imp__sub_83B71248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71254"))) PPC_WEAK_FUNC(sub_83B71254);
PPC_FUNC_IMPL(__imp__sub_83B71254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71258"))) PPC_WEAK_FUNC(sub_83B71258);
PPC_FUNC_IMPL(__imp__sub_83B71258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71264"))) PPC_WEAK_FUNC(sub_83B71264);
PPC_FUNC_IMPL(__imp__sub_83B71264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71268"))) PPC_WEAK_FUNC(sub_83B71268);
PPC_FUNC_IMPL(__imp__sub_83B71268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16680
	ctx.r3.s64 = ctx.r11.s64 + 16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71274"))) PPC_WEAK_FUNC(sub_83B71274);
PPC_FUNC_IMPL(__imp__sub_83B71274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71278"))) PPC_WEAK_FUNC(sub_83B71278);
PPC_FUNC_IMPL(__imp__sub_83B71278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71284"))) PPC_WEAK_FUNC(sub_83B71284);
PPC_FUNC_IMPL(__imp__sub_83B71284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71288"))) PPC_WEAK_FUNC(sub_83B71288);
PPC_FUNC_IMPL(__imp__sub_83B71288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71294"))) PPC_WEAK_FUNC(sub_83B71294);
PPC_FUNC_IMPL(__imp__sub_83B71294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71298"))) PPC_WEAK_FUNC(sub_83B71298);
PPC_FUNC_IMPL(__imp__sub_83B71298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712A4"))) PPC_WEAK_FUNC(sub_83B712A4);
PPC_FUNC_IMPL(__imp__sub_83B712A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712A8"))) PPC_WEAK_FUNC(sub_83B712A8);
PPC_FUNC_IMPL(__imp__sub_83B712A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16712
	ctx.r3.s64 = ctx.r11.s64 + 16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712B4"))) PPC_WEAK_FUNC(sub_83B712B4);
PPC_FUNC_IMPL(__imp__sub_83B712B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712B8"))) PPC_WEAK_FUNC(sub_83B712B8);
PPC_FUNC_IMPL(__imp__sub_83B712B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712C4"))) PPC_WEAK_FUNC(sub_83B712C4);
PPC_FUNC_IMPL(__imp__sub_83B712C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712C8"))) PPC_WEAK_FUNC(sub_83B712C8);
PPC_FUNC_IMPL(__imp__sub_83B712C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16728
	ctx.r3.s64 = ctx.r11.s64 + 16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712D4"))) PPC_WEAK_FUNC(sub_83B712D4);
PPC_FUNC_IMPL(__imp__sub_83B712D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712D8"))) PPC_WEAK_FUNC(sub_83B712D8);
PPC_FUNC_IMPL(__imp__sub_83B712D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712E4"))) PPC_WEAK_FUNC(sub_83B712E4);
PPC_FUNC_IMPL(__imp__sub_83B712E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712E8"))) PPC_WEAK_FUNC(sub_83B712E8);
PPC_FUNC_IMPL(__imp__sub_83B712E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B712F4"))) PPC_WEAK_FUNC(sub_83B712F4);
PPC_FUNC_IMPL(__imp__sub_83B712F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B712F8"))) PPC_WEAK_FUNC(sub_83B712F8);
PPC_FUNC_IMPL(__imp__sub_83B712F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71304"))) PPC_WEAK_FUNC(sub_83B71304);
PPC_FUNC_IMPL(__imp__sub_83B71304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71308"))) PPC_WEAK_FUNC(sub_83B71308);
PPC_FUNC_IMPL(__imp__sub_83B71308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71314"))) PPC_WEAK_FUNC(sub_83B71314);
PPC_FUNC_IMPL(__imp__sub_83B71314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71318"))) PPC_WEAK_FUNC(sub_83B71318);
PPC_FUNC_IMPL(__imp__sub_83B71318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71324"))) PPC_WEAK_FUNC(sub_83B71324);
PPC_FUNC_IMPL(__imp__sub_83B71324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71328"))) PPC_WEAK_FUNC(sub_83B71328);
PPC_FUNC_IMPL(__imp__sub_83B71328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71334"))) PPC_WEAK_FUNC(sub_83B71334);
PPC_FUNC_IMPL(__imp__sub_83B71334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71338"))) PPC_WEAK_FUNC(sub_83B71338);
PPC_FUNC_IMPL(__imp__sub_83B71338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16784
	ctx.r3.s64 = ctx.r11.s64 + 16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71344"))) PPC_WEAK_FUNC(sub_83B71344);
PPC_FUNC_IMPL(__imp__sub_83B71344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71348"))) PPC_WEAK_FUNC(sub_83B71348);
PPC_FUNC_IMPL(__imp__sub_83B71348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71354"))) PPC_WEAK_FUNC(sub_83B71354);
PPC_FUNC_IMPL(__imp__sub_83B71354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71358"))) PPC_WEAK_FUNC(sub_83B71358);
PPC_FUNC_IMPL(__imp__sub_83B71358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

