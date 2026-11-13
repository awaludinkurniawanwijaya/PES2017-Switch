#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C29890"))) PPC_WEAK_FUNC(sub_83C29890);
PPC_FUNC_IMPL(__imp__sub_83C29890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2989C"))) PPC_WEAK_FUNC(sub_83C2989C);
PPC_FUNC_IMPL(__imp__sub_83C2989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C298A0"))) PPC_WEAK_FUNC(sub_83C298A0);
PPC_FUNC_IMPL(__imp__sub_83C298A0) {
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
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// bl 0x83523120
	ctx.lr = 0x83C298B8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4168
	ctx.r3.s64 = ctx.r10.s64 + 4168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C298C4;
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

__attribute__((alias("__imp__sub_83C298D4"))) PPC_WEAK_FUNC(sub_83C298D4);
PPC_FUNC_IMPL(__imp__sub_83C298D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C298D8"))) PPC_WEAK_FUNC(sub_83C298D8);
PPC_FUNC_IMPL(__imp__sub_83C298D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7044
	ctx.r7.s64 = ctx.r8.s64 + -7044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7044(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7044);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7044, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29900"))) PPC_WEAK_FUNC(sub_83C29900);
PPC_FUNC_IMPL(__imp__sub_83C29900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4184
	ctx.r3.s64 = ctx.r11.s64 + 4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2990C"))) PPC_WEAK_FUNC(sub_83C2990C);
PPC_FUNC_IMPL(__imp__sub_83C2990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29910"))) PPC_WEAK_FUNC(sub_83C29910);
PPC_FUNC_IMPL(__imp__sub_83C29910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4192
	ctx.r3.s64 = ctx.r11.s64 + 4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2991C"))) PPC_WEAK_FUNC(sub_83C2991C);
PPC_FUNC_IMPL(__imp__sub_83C2991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29920"))) PPC_WEAK_FUNC(sub_83C29920);
PPC_FUNC_IMPL(__imp__sub_83C29920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2992C"))) PPC_WEAK_FUNC(sub_83C2992C);
PPC_FUNC_IMPL(__imp__sub_83C2992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29930"))) PPC_WEAK_FUNC(sub_83C29930);
PPC_FUNC_IMPL(__imp__sub_83C29930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2993C"))) PPC_WEAK_FUNC(sub_83C2993C);
PPC_FUNC_IMPL(__imp__sub_83C2993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29940"))) PPC_WEAK_FUNC(sub_83C29940);
PPC_FUNC_IMPL(__imp__sub_83C29940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4216
	ctx.r3.s64 = ctx.r11.s64 + 4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2994C"))) PPC_WEAK_FUNC(sub_83C2994C);
PPC_FUNC_IMPL(__imp__sub_83C2994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29950"))) PPC_WEAK_FUNC(sub_83C29950);
PPC_FUNC_IMPL(__imp__sub_83C29950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2995C"))) PPC_WEAK_FUNC(sub_83C2995C);
PPC_FUNC_IMPL(__imp__sub_83C2995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29960"))) PPC_WEAK_FUNC(sub_83C29960);
PPC_FUNC_IMPL(__imp__sub_83C29960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2996C"))) PPC_WEAK_FUNC(sub_83C2996C);
PPC_FUNC_IMPL(__imp__sub_83C2996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29970"))) PPC_WEAK_FUNC(sub_83C29970);
PPC_FUNC_IMPL(__imp__sub_83C29970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2997C"))) PPC_WEAK_FUNC(sub_83C2997C);
PPC_FUNC_IMPL(__imp__sub_83C2997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29980"))) PPC_WEAK_FUNC(sub_83C29980);
PPC_FUNC_IMPL(__imp__sub_83C29980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4248
	ctx.r3.s64 = ctx.r11.s64 + 4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2998C"))) PPC_WEAK_FUNC(sub_83C2998C);
PPC_FUNC_IMPL(__imp__sub_83C2998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29990"))) PPC_WEAK_FUNC(sub_83C29990);
PPC_FUNC_IMPL(__imp__sub_83C29990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2999C"))) PPC_WEAK_FUNC(sub_83C2999C);
PPC_FUNC_IMPL(__imp__sub_83C2999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C299A0"))) PPC_WEAK_FUNC(sub_83C299A0);
PPC_FUNC_IMPL(__imp__sub_83C299A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4264
	ctx.r3.s64 = ctx.r11.s64 + 4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C299AC"))) PPC_WEAK_FUNC(sub_83C299AC);
PPC_FUNC_IMPL(__imp__sub_83C299AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C299B0"))) PPC_WEAK_FUNC(sub_83C299B0);
PPC_FUNC_IMPL(__imp__sub_83C299B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C299BC"))) PPC_WEAK_FUNC(sub_83C299BC);
PPC_FUNC_IMPL(__imp__sub_83C299BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C299C0"))) PPC_WEAK_FUNC(sub_83C299C0);
PPC_FUNC_IMPL(__imp__sub_83C299C0) {
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
	// addi r3,r11,-7036
	ctx.r3.s64 = ctx.r11.s64 + -7036;
	// bl 0x83523120
	ctx.lr = 0x83C299D8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4280
	ctx.r3.s64 = ctx.r10.s64 + 4280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C299E4;
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

__attribute__((alias("__imp__sub_83C299F4"))) PPC_WEAK_FUNC(sub_83C299F4);
PPC_FUNC_IMPL(__imp__sub_83C299F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C299F8"))) PPC_WEAK_FUNC(sub_83C299F8);
PPC_FUNC_IMPL(__imp__sub_83C299F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7032
	ctx.r7.s64 = ctx.r8.s64 + -7032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29A20"))) PPC_WEAK_FUNC(sub_83C29A20);
PPC_FUNC_IMPL(__imp__sub_83C29A20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20864
	ctx.r6.s64 = ctx.r7.s64 + 20864;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20792(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20792);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7032);
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
	// std r9,20864(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29A68"))) PPC_WEAK_FUNC(sub_83C29A68);
PPC_FUNC_IMPL(__imp__sub_83C29A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29A74"))) PPC_WEAK_FUNC(sub_83C29A74);
PPC_FUNC_IMPL(__imp__sub_83C29A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29A78"))) PPC_WEAK_FUNC(sub_83C29A78);
PPC_FUNC_IMPL(__imp__sub_83C29A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4304
	ctx.r3.s64 = ctx.r11.s64 + 4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29A84"))) PPC_WEAK_FUNC(sub_83C29A84);
PPC_FUNC_IMPL(__imp__sub_83C29A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29A88"))) PPC_WEAK_FUNC(sub_83C29A88);
PPC_FUNC_IMPL(__imp__sub_83C29A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29A94"))) PPC_WEAK_FUNC(sub_83C29A94);
PPC_FUNC_IMPL(__imp__sub_83C29A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29A98"))) PPC_WEAK_FUNC(sub_83C29A98);
PPC_FUNC_IMPL(__imp__sub_83C29A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AA4"))) PPC_WEAK_FUNC(sub_83C29AA4);
PPC_FUNC_IMPL(__imp__sub_83C29AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AA8"))) PPC_WEAK_FUNC(sub_83C29AA8);
PPC_FUNC_IMPL(__imp__sub_83C29AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AB4"))) PPC_WEAK_FUNC(sub_83C29AB4);
PPC_FUNC_IMPL(__imp__sub_83C29AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AB8"))) PPC_WEAK_FUNC(sub_83C29AB8);
PPC_FUNC_IMPL(__imp__sub_83C29AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AC4"))) PPC_WEAK_FUNC(sub_83C29AC4);
PPC_FUNC_IMPL(__imp__sub_83C29AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AC8"))) PPC_WEAK_FUNC(sub_83C29AC8);
PPC_FUNC_IMPL(__imp__sub_83C29AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AD4"))) PPC_WEAK_FUNC(sub_83C29AD4);
PPC_FUNC_IMPL(__imp__sub_83C29AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AD8"))) PPC_WEAK_FUNC(sub_83C29AD8);
PPC_FUNC_IMPL(__imp__sub_83C29AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AE4"))) PPC_WEAK_FUNC(sub_83C29AE4);
PPC_FUNC_IMPL(__imp__sub_83C29AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AE8"))) PPC_WEAK_FUNC(sub_83C29AE8);
PPC_FUNC_IMPL(__imp__sub_83C29AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29AF4"))) PPC_WEAK_FUNC(sub_83C29AF4);
PPC_FUNC_IMPL(__imp__sub_83C29AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29AF8"))) PPC_WEAK_FUNC(sub_83C29AF8);
PPC_FUNC_IMPL(__imp__sub_83C29AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29B04"))) PPC_WEAK_FUNC(sub_83C29B04);
PPC_FUNC_IMPL(__imp__sub_83C29B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29B08"))) PPC_WEAK_FUNC(sub_83C29B08);
PPC_FUNC_IMPL(__imp__sub_83C29B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4376
	ctx.r3.s64 = ctx.r11.s64 + 4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29B14"))) PPC_WEAK_FUNC(sub_83C29B14);
PPC_FUNC_IMPL(__imp__sub_83C29B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29B18"))) PPC_WEAK_FUNC(sub_83C29B18);
PPC_FUNC_IMPL(__imp__sub_83C29B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29B24"))) PPC_WEAK_FUNC(sub_83C29B24);
PPC_FUNC_IMPL(__imp__sub_83C29B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29B28"))) PPC_WEAK_FUNC(sub_83C29B28);
PPC_FUNC_IMPL(__imp__sub_83C29B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4392
	ctx.r3.s64 = ctx.r11.s64 + 4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29B34"))) PPC_WEAK_FUNC(sub_83C29B34);
PPC_FUNC_IMPL(__imp__sub_83C29B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29B38"))) PPC_WEAK_FUNC(sub_83C29B38);
PPC_FUNC_IMPL(__imp__sub_83C29B38) {
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
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// bl 0x83523120
	ctx.lr = 0x83C29B50;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4400
	ctx.r3.s64 = ctx.r10.s64 + 4400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C29B5C;
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

__attribute__((alias("__imp__sub_83C29B6C"))) PPC_WEAK_FUNC(sub_83C29B6C);
PPC_FUNC_IMPL(__imp__sub_83C29B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29B70"))) PPC_WEAK_FUNC(sub_83C29B70);
PPC_FUNC_IMPL(__imp__sub_83C29B70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7020
	ctx.r7.s64 = ctx.r8.s64 + -7020;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7020);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7020(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7020, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29B98"))) PPC_WEAK_FUNC(sub_83C29B98);
PPC_FUNC_IMPL(__imp__sub_83C29B98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20992
	ctx.r6.s64 = ctx.r7.s64 + 20992;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7020(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7020);
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
	// std r9,20992(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29BE0"))) PPC_WEAK_FUNC(sub_83C29BE0);
PPC_FUNC_IMPL(__imp__sub_83C29BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29BEC"))) PPC_WEAK_FUNC(sub_83C29BEC);
PPC_FUNC_IMPL(__imp__sub_83C29BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29BF0"))) PPC_WEAK_FUNC(sub_83C29BF0);
PPC_FUNC_IMPL(__imp__sub_83C29BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29BFC"))) PPC_WEAK_FUNC(sub_83C29BFC);
PPC_FUNC_IMPL(__imp__sub_83C29BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C00"))) PPC_WEAK_FUNC(sub_83C29C00);
PPC_FUNC_IMPL(__imp__sub_83C29C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C0C"))) PPC_WEAK_FUNC(sub_83C29C0C);
PPC_FUNC_IMPL(__imp__sub_83C29C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C10"))) PPC_WEAK_FUNC(sub_83C29C10);
PPC_FUNC_IMPL(__imp__sub_83C29C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C1C"))) PPC_WEAK_FUNC(sub_83C29C1C);
PPC_FUNC_IMPL(__imp__sub_83C29C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C20"))) PPC_WEAK_FUNC(sub_83C29C20);
PPC_FUNC_IMPL(__imp__sub_83C29C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C2C"))) PPC_WEAK_FUNC(sub_83C29C2C);
PPC_FUNC_IMPL(__imp__sub_83C29C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C30"))) PPC_WEAK_FUNC(sub_83C29C30);
PPC_FUNC_IMPL(__imp__sub_83C29C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C3C"))) PPC_WEAK_FUNC(sub_83C29C3C);
PPC_FUNC_IMPL(__imp__sub_83C29C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C40"))) PPC_WEAK_FUNC(sub_83C29C40);
PPC_FUNC_IMPL(__imp__sub_83C29C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C4C"))) PPC_WEAK_FUNC(sub_83C29C4C);
PPC_FUNC_IMPL(__imp__sub_83C29C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C50"))) PPC_WEAK_FUNC(sub_83C29C50);
PPC_FUNC_IMPL(__imp__sub_83C29C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4472
	ctx.r3.s64 = ctx.r11.s64 + 4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C5C"))) PPC_WEAK_FUNC(sub_83C29C5C);
PPC_FUNC_IMPL(__imp__sub_83C29C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C60"))) PPC_WEAK_FUNC(sub_83C29C60);
PPC_FUNC_IMPL(__imp__sub_83C29C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4480
	ctx.r3.s64 = ctx.r11.s64 + 4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C6C"))) PPC_WEAK_FUNC(sub_83C29C6C);
PPC_FUNC_IMPL(__imp__sub_83C29C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C70"))) PPC_WEAK_FUNC(sub_83C29C70);
PPC_FUNC_IMPL(__imp__sub_83C29C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4488
	ctx.r3.s64 = ctx.r11.s64 + 4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C7C"))) PPC_WEAK_FUNC(sub_83C29C7C);
PPC_FUNC_IMPL(__imp__sub_83C29C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C80"))) PPC_WEAK_FUNC(sub_83C29C80);
PPC_FUNC_IMPL(__imp__sub_83C29C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C8C"))) PPC_WEAK_FUNC(sub_83C29C8C);
PPC_FUNC_IMPL(__imp__sub_83C29C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29C90"))) PPC_WEAK_FUNC(sub_83C29C90);
PPC_FUNC_IMPL(__imp__sub_83C29C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29C9C"))) PPC_WEAK_FUNC(sub_83C29C9C);
PPC_FUNC_IMPL(__imp__sub_83C29C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29CA0"))) PPC_WEAK_FUNC(sub_83C29CA0);
PPC_FUNC_IMPL(__imp__sub_83C29CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4512
	ctx.r3.s64 = ctx.r11.s64 + 4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29CAC"))) PPC_WEAK_FUNC(sub_83C29CAC);
PPC_FUNC_IMPL(__imp__sub_83C29CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29CB0"))) PPC_WEAK_FUNC(sub_83C29CB0);
PPC_FUNC_IMPL(__imp__sub_83C29CB0) {
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
	// addi r3,r11,-7012
	ctx.r3.s64 = ctx.r11.s64 + -7012;
	// bl 0x83523120
	ctx.lr = 0x83C29CC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4520
	ctx.r3.s64 = ctx.r10.s64 + 4520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C29CD4;
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

__attribute__((alias("__imp__sub_83C29CE4"))) PPC_WEAK_FUNC(sub_83C29CE4);
PPC_FUNC_IMPL(__imp__sub_83C29CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29CE8"))) PPC_WEAK_FUNC(sub_83C29CE8);
PPC_FUNC_IMPL(__imp__sub_83C29CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7008
	ctx.r7.s64 = ctx.r8.s64 + -7008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29D10"))) PPC_WEAK_FUNC(sub_83C29D10);
PPC_FUNC_IMPL(__imp__sub_83C29D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,21120
	ctx.r6.s64 = ctx.r7.s64 + 21120;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21048(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21048);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7008);
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
	// std r9,21120(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29D58"))) PPC_WEAK_FUNC(sub_83C29D58);
PPC_FUNC_IMPL(__imp__sub_83C29D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29D64"))) PPC_WEAK_FUNC(sub_83C29D64);
PPC_FUNC_IMPL(__imp__sub_83C29D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29D68"))) PPC_WEAK_FUNC(sub_83C29D68);
PPC_FUNC_IMPL(__imp__sub_83C29D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29D74"))) PPC_WEAK_FUNC(sub_83C29D74);
PPC_FUNC_IMPL(__imp__sub_83C29D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29D78"))) PPC_WEAK_FUNC(sub_83C29D78);
PPC_FUNC_IMPL(__imp__sub_83C29D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4552
	ctx.r3.s64 = ctx.r11.s64 + 4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29D84"))) PPC_WEAK_FUNC(sub_83C29D84);
PPC_FUNC_IMPL(__imp__sub_83C29D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29D88"))) PPC_WEAK_FUNC(sub_83C29D88);
PPC_FUNC_IMPL(__imp__sub_83C29D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29D94"))) PPC_WEAK_FUNC(sub_83C29D94);
PPC_FUNC_IMPL(__imp__sub_83C29D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29D98"))) PPC_WEAK_FUNC(sub_83C29D98);
PPC_FUNC_IMPL(__imp__sub_83C29D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DA4"))) PPC_WEAK_FUNC(sub_83C29DA4);
PPC_FUNC_IMPL(__imp__sub_83C29DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DA8"))) PPC_WEAK_FUNC(sub_83C29DA8);
PPC_FUNC_IMPL(__imp__sub_83C29DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DB4"))) PPC_WEAK_FUNC(sub_83C29DB4);
PPC_FUNC_IMPL(__imp__sub_83C29DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DB8"))) PPC_WEAK_FUNC(sub_83C29DB8);
PPC_FUNC_IMPL(__imp__sub_83C29DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DC4"))) PPC_WEAK_FUNC(sub_83C29DC4);
PPC_FUNC_IMPL(__imp__sub_83C29DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DC8"))) PPC_WEAK_FUNC(sub_83C29DC8);
PPC_FUNC_IMPL(__imp__sub_83C29DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4592
	ctx.r3.s64 = ctx.r11.s64 + 4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DD4"))) PPC_WEAK_FUNC(sub_83C29DD4);
PPC_FUNC_IMPL(__imp__sub_83C29DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DD8"))) PPC_WEAK_FUNC(sub_83C29DD8);
PPC_FUNC_IMPL(__imp__sub_83C29DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4600
	ctx.r3.s64 = ctx.r11.s64 + 4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DE4"))) PPC_WEAK_FUNC(sub_83C29DE4);
PPC_FUNC_IMPL(__imp__sub_83C29DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DE8"))) PPC_WEAK_FUNC(sub_83C29DE8);
PPC_FUNC_IMPL(__imp__sub_83C29DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29DF4"))) PPC_WEAK_FUNC(sub_83C29DF4);
PPC_FUNC_IMPL(__imp__sub_83C29DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29DF8"))) PPC_WEAK_FUNC(sub_83C29DF8);
PPC_FUNC_IMPL(__imp__sub_83C29DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4616
	ctx.r3.s64 = ctx.r11.s64 + 4616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29E04"))) PPC_WEAK_FUNC(sub_83C29E04);
PPC_FUNC_IMPL(__imp__sub_83C29E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29E08"))) PPC_WEAK_FUNC(sub_83C29E08);
PPC_FUNC_IMPL(__imp__sub_83C29E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4624
	ctx.r3.s64 = ctx.r11.s64 + 4624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29E14"))) PPC_WEAK_FUNC(sub_83C29E14);
PPC_FUNC_IMPL(__imp__sub_83C29E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29E18"))) PPC_WEAK_FUNC(sub_83C29E18);
PPC_FUNC_IMPL(__imp__sub_83C29E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4632
	ctx.r3.s64 = ctx.r11.s64 + 4632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29E24"))) PPC_WEAK_FUNC(sub_83C29E24);
PPC_FUNC_IMPL(__imp__sub_83C29E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29E28"))) PPC_WEAK_FUNC(sub_83C29E28);
PPC_FUNC_IMPL(__imp__sub_83C29E28) {
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
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// bl 0x83523120
	ctx.lr = 0x83C29E40;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4640
	ctx.r3.s64 = ctx.r10.s64 + 4640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C29E4C;
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

__attribute__((alias("__imp__sub_83C29E5C"))) PPC_WEAK_FUNC(sub_83C29E5C);
PPC_FUNC_IMPL(__imp__sub_83C29E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29E60"))) PPC_WEAK_FUNC(sub_83C29E60);
PPC_FUNC_IMPL(__imp__sub_83C29E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6984
	ctx.r7.s64 = ctx.r8.s64 + -6984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29E88"))) PPC_WEAK_FUNC(sub_83C29E88);
PPC_FUNC_IMPL(__imp__sub_83C29E88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,21248
	ctx.r6.s64 = ctx.r7.s64 + 21248;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6984);
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
	// std r9,21248(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29ED0"))) PPC_WEAK_FUNC(sub_83C29ED0);
PPC_FUNC_IMPL(__imp__sub_83C29ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4656
	ctx.r3.s64 = ctx.r11.s64 + 4656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29EDC"))) PPC_WEAK_FUNC(sub_83C29EDC);
PPC_FUNC_IMPL(__imp__sub_83C29EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29EE0"))) PPC_WEAK_FUNC(sub_83C29EE0);
PPC_FUNC_IMPL(__imp__sub_83C29EE0) {
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
	// addi r3,r11,-6976
	ctx.r3.s64 = ctx.r11.s64 + -6976;
	// bl 0x8259af80
	ctx.lr = 0x83C29EF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4672
	ctx.r3.s64 = ctx.r10.s64 + 4672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C29F04;
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

__attribute__((alias("__imp__sub_83C29F14"))) PPC_WEAK_FUNC(sub_83C29F14);
PPC_FUNC_IMPL(__imp__sub_83C29F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F18"))) PPC_WEAK_FUNC(sub_83C29F18);
PPC_FUNC_IMPL(__imp__sub_83C29F18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6996
	ctx.r11.s64 = ctx.r8.s64 + -6996;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,21224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4664
	ctx.r3.s64 = ctx.r6.s64 + 4664;
	// stw r10,-6996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F48"))) PPC_WEAK_FUNC(sub_83C29F48);
PPC_FUNC_IMPL(__imp__sub_83C29F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4680
	ctx.r3.s64 = ctx.r11.s64 + 4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F54"))) PPC_WEAK_FUNC(sub_83C29F54);
PPC_FUNC_IMPL(__imp__sub_83C29F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F58"))) PPC_WEAK_FUNC(sub_83C29F58);
PPC_FUNC_IMPL(__imp__sub_83C29F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F64"))) PPC_WEAK_FUNC(sub_83C29F64);
PPC_FUNC_IMPL(__imp__sub_83C29F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F68"))) PPC_WEAK_FUNC(sub_83C29F68);
PPC_FUNC_IMPL(__imp__sub_83C29F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4696
	ctx.r3.s64 = ctx.r11.s64 + 4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F74"))) PPC_WEAK_FUNC(sub_83C29F74);
PPC_FUNC_IMPL(__imp__sub_83C29F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F78"))) PPC_WEAK_FUNC(sub_83C29F78);
PPC_FUNC_IMPL(__imp__sub_83C29F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4704
	ctx.r3.s64 = ctx.r11.s64 + 4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F84"))) PPC_WEAK_FUNC(sub_83C29F84);
PPC_FUNC_IMPL(__imp__sub_83C29F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F88"))) PPC_WEAK_FUNC(sub_83C29F88);
PPC_FUNC_IMPL(__imp__sub_83C29F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29F94"))) PPC_WEAK_FUNC(sub_83C29F94);
PPC_FUNC_IMPL(__imp__sub_83C29F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29F98"))) PPC_WEAK_FUNC(sub_83C29F98);
PPC_FUNC_IMPL(__imp__sub_83C29F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FA4"))) PPC_WEAK_FUNC(sub_83C29FA4);
PPC_FUNC_IMPL(__imp__sub_83C29FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FA8"))) PPC_WEAK_FUNC(sub_83C29FA8);
PPC_FUNC_IMPL(__imp__sub_83C29FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4728
	ctx.r3.s64 = ctx.r11.s64 + 4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FB4"))) PPC_WEAK_FUNC(sub_83C29FB4);
PPC_FUNC_IMPL(__imp__sub_83C29FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FB8"))) PPC_WEAK_FUNC(sub_83C29FB8);
PPC_FUNC_IMPL(__imp__sub_83C29FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FC4"))) PPC_WEAK_FUNC(sub_83C29FC4);
PPC_FUNC_IMPL(__imp__sub_83C29FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FC8"))) PPC_WEAK_FUNC(sub_83C29FC8);
PPC_FUNC_IMPL(__imp__sub_83C29FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FD4"))) PPC_WEAK_FUNC(sub_83C29FD4);
PPC_FUNC_IMPL(__imp__sub_83C29FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FD8"))) PPC_WEAK_FUNC(sub_83C29FD8);
PPC_FUNC_IMPL(__imp__sub_83C29FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FE4"))) PPC_WEAK_FUNC(sub_83C29FE4);
PPC_FUNC_IMPL(__imp__sub_83C29FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FE8"))) PPC_WEAK_FUNC(sub_83C29FE8);
PPC_FUNC_IMPL(__imp__sub_83C29FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29FF4"))) PPC_WEAK_FUNC(sub_83C29FF4);
PPC_FUNC_IMPL(__imp__sub_83C29FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29FF8"))) PPC_WEAK_FUNC(sub_83C29FF8);
PPC_FUNC_IMPL(__imp__sub_83C29FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A004"))) PPC_WEAK_FUNC(sub_83C2A004);
PPC_FUNC_IMPL(__imp__sub_83C2A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A008"))) PPC_WEAK_FUNC(sub_83C2A008);
PPC_FUNC_IMPL(__imp__sub_83C2A008) {
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
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// bl 0x83523120
	ctx.lr = 0x83C2A020;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4776
	ctx.r3.s64 = ctx.r10.s64 + 4776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A02C;
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

__attribute__((alias("__imp__sub_83C2A03C"))) PPC_WEAK_FUNC(sub_83C2A03C);
PPC_FUNC_IMPL(__imp__sub_83C2A03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A040"))) PPC_WEAK_FUNC(sub_83C2A040);
PPC_FUNC_IMPL(__imp__sub_83C2A040) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6616
	ctx.r7.s64 = ctx.r8.s64 + -6616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A068"))) PPC_WEAK_FUNC(sub_83C2A068);
PPC_FUNC_IMPL(__imp__sub_83C2A068) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,21376
	ctx.r6.s64 = ctx.r7.s64 + 21376;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6616);
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
	// std r9,21376(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A0B0"))) PPC_WEAK_FUNC(sub_83C2A0B0);
PPC_FUNC_IMPL(__imp__sub_83C2A0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A0BC"))) PPC_WEAK_FUNC(sub_83C2A0BC);
PPC_FUNC_IMPL(__imp__sub_83C2A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A0C0"))) PPC_WEAK_FUNC(sub_83C2A0C0);
PPC_FUNC_IMPL(__imp__sub_83C2A0C0) {
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
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// bl 0x8259af80
	ctx.lr = 0x83C2A0D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4808
	ctx.r3.s64 = ctx.r10.s64 + 4808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A0E4;
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

__attribute__((alias("__imp__sub_83C2A0F4"))) PPC_WEAK_FUNC(sub_83C2A0F4);
PPC_FUNC_IMPL(__imp__sub_83C2A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A0F8"))) PPC_WEAK_FUNC(sub_83C2A0F8);
PPC_FUNC_IMPL(__imp__sub_83C2A0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6628
	ctx.r11.s64 = ctx.r8.s64 + -6628;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,21352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21352);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4800
	ctx.r3.s64 = ctx.r6.s64 + 4800;
	// stw r10,-6628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A128"))) PPC_WEAK_FUNC(sub_83C2A128);
PPC_FUNC_IMPL(__imp__sub_83C2A128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4816
	ctx.r3.s64 = ctx.r11.s64 + 4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A134"))) PPC_WEAK_FUNC(sub_83C2A134);
PPC_FUNC_IMPL(__imp__sub_83C2A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A138"))) PPC_WEAK_FUNC(sub_83C2A138);
PPC_FUNC_IMPL(__imp__sub_83C2A138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A144"))) PPC_WEAK_FUNC(sub_83C2A144);
PPC_FUNC_IMPL(__imp__sub_83C2A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A148"))) PPC_WEAK_FUNC(sub_83C2A148);
PPC_FUNC_IMPL(__imp__sub_83C2A148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A154"))) PPC_WEAK_FUNC(sub_83C2A154);
PPC_FUNC_IMPL(__imp__sub_83C2A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A158"))) PPC_WEAK_FUNC(sub_83C2A158);
PPC_FUNC_IMPL(__imp__sub_83C2A158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A164"))) PPC_WEAK_FUNC(sub_83C2A164);
PPC_FUNC_IMPL(__imp__sub_83C2A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A168"))) PPC_WEAK_FUNC(sub_83C2A168);
PPC_FUNC_IMPL(__imp__sub_83C2A168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A174"))) PPC_WEAK_FUNC(sub_83C2A174);
PPC_FUNC_IMPL(__imp__sub_83C2A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A178"))) PPC_WEAK_FUNC(sub_83C2A178);
PPC_FUNC_IMPL(__imp__sub_83C2A178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A184"))) PPC_WEAK_FUNC(sub_83C2A184);
PPC_FUNC_IMPL(__imp__sub_83C2A184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A188"))) PPC_WEAK_FUNC(sub_83C2A188);
PPC_FUNC_IMPL(__imp__sub_83C2A188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A194"))) PPC_WEAK_FUNC(sub_83C2A194);
PPC_FUNC_IMPL(__imp__sub_83C2A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A198"))) PPC_WEAK_FUNC(sub_83C2A198);
PPC_FUNC_IMPL(__imp__sub_83C2A198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A1A4"))) PPC_WEAK_FUNC(sub_83C2A1A4);
PPC_FUNC_IMPL(__imp__sub_83C2A1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A1A8"))) PPC_WEAK_FUNC(sub_83C2A1A8);
PPC_FUNC_IMPL(__imp__sub_83C2A1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A1B4"))) PPC_WEAK_FUNC(sub_83C2A1B4);
PPC_FUNC_IMPL(__imp__sub_83C2A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A1B8"))) PPC_WEAK_FUNC(sub_83C2A1B8);
PPC_FUNC_IMPL(__imp__sub_83C2A1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4888
	ctx.r3.s64 = ctx.r11.s64 + 4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A1C4"))) PPC_WEAK_FUNC(sub_83C2A1C4);
PPC_FUNC_IMPL(__imp__sub_83C2A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A1C8"))) PPC_WEAK_FUNC(sub_83C2A1C8);
PPC_FUNC_IMPL(__imp__sub_83C2A1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4896
	ctx.r3.s64 = ctx.r11.s64 + 4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A1D4"))) PPC_WEAK_FUNC(sub_83C2A1D4);
PPC_FUNC_IMPL(__imp__sub_83C2A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A1D8"))) PPC_WEAK_FUNC(sub_83C2A1D8);
PPC_FUNC_IMPL(__imp__sub_83C2A1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A1E4"))) PPC_WEAK_FUNC(sub_83C2A1E4);
PPC_FUNC_IMPL(__imp__sub_83C2A1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A1E8"))) PPC_WEAK_FUNC(sub_83C2A1E8);
PPC_FUNC_IMPL(__imp__sub_83C2A1E8) {
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
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// bl 0x83523120
	ctx.lr = 0x83C2A200;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4912
	ctx.r3.s64 = ctx.r10.s64 + 4912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A20C;
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

__attribute__((alias("__imp__sub_83C2A21C"))) PPC_WEAK_FUNC(sub_83C2A21C);
PPC_FUNC_IMPL(__imp__sub_83C2A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A220"))) PPC_WEAK_FUNC(sub_83C2A220);
PPC_FUNC_IMPL(__imp__sub_83C2A220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6248
	ctx.r7.s64 = ctx.r8.s64 + -6248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6248(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A248"))) PPC_WEAK_FUNC(sub_83C2A248);
PPC_FUNC_IMPL(__imp__sub_83C2A248) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,21504
	ctx.r6.s64 = ctx.r7.s64 + 21504;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6248);
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
	// std r9,21504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A290"))) PPC_WEAK_FUNC(sub_83C2A290);
PPC_FUNC_IMPL(__imp__sub_83C2A290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A29C"))) PPC_WEAK_FUNC(sub_83C2A29C);
PPC_FUNC_IMPL(__imp__sub_83C2A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A2A0"))) PPC_WEAK_FUNC(sub_83C2A2A0);
PPC_FUNC_IMPL(__imp__sub_83C2A2A0) {
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
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// bl 0x8259af80
	ctx.lr = 0x83C2A2B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4944
	ctx.r3.s64 = ctx.r10.s64 + 4944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A2C4;
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

__attribute__((alias("__imp__sub_83C2A2D4"))) PPC_WEAK_FUNC(sub_83C2A2D4);
PPC_FUNC_IMPL(__imp__sub_83C2A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A2D8"))) PPC_WEAK_FUNC(sub_83C2A2D8);
PPC_FUNC_IMPL(__imp__sub_83C2A2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6260
	ctx.r11.s64 = ctx.r8.s64 + -6260;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,21480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4936
	ctx.r3.s64 = ctx.r6.s64 + 4936;
	// stw r10,-6260(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A308"))) PPC_WEAK_FUNC(sub_83C2A308);
PPC_FUNC_IMPL(__imp__sub_83C2A308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A314"))) PPC_WEAK_FUNC(sub_83C2A314);
PPC_FUNC_IMPL(__imp__sub_83C2A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A318"))) PPC_WEAK_FUNC(sub_83C2A318);
PPC_FUNC_IMPL(__imp__sub_83C2A318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4960
	ctx.r3.s64 = ctx.r11.s64 + 4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A324"))) PPC_WEAK_FUNC(sub_83C2A324);
PPC_FUNC_IMPL(__imp__sub_83C2A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A328"))) PPC_WEAK_FUNC(sub_83C2A328);
PPC_FUNC_IMPL(__imp__sub_83C2A328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A334"))) PPC_WEAK_FUNC(sub_83C2A334);
PPC_FUNC_IMPL(__imp__sub_83C2A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A338"))) PPC_WEAK_FUNC(sub_83C2A338);
PPC_FUNC_IMPL(__imp__sub_83C2A338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A344"))) PPC_WEAK_FUNC(sub_83C2A344);
PPC_FUNC_IMPL(__imp__sub_83C2A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A348"))) PPC_WEAK_FUNC(sub_83C2A348);
PPC_FUNC_IMPL(__imp__sub_83C2A348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A354"))) PPC_WEAK_FUNC(sub_83C2A354);
PPC_FUNC_IMPL(__imp__sub_83C2A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A358"))) PPC_WEAK_FUNC(sub_83C2A358);
PPC_FUNC_IMPL(__imp__sub_83C2A358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A364"))) PPC_WEAK_FUNC(sub_83C2A364);
PPC_FUNC_IMPL(__imp__sub_83C2A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A368"))) PPC_WEAK_FUNC(sub_83C2A368);
PPC_FUNC_IMPL(__imp__sub_83C2A368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A374"))) PPC_WEAK_FUNC(sub_83C2A374);
PPC_FUNC_IMPL(__imp__sub_83C2A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A378"))) PPC_WEAK_FUNC(sub_83C2A378);
PPC_FUNC_IMPL(__imp__sub_83C2A378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A384"))) PPC_WEAK_FUNC(sub_83C2A384);
PPC_FUNC_IMPL(__imp__sub_83C2A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A388"))) PPC_WEAK_FUNC(sub_83C2A388);
PPC_FUNC_IMPL(__imp__sub_83C2A388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A394"))) PPC_WEAK_FUNC(sub_83C2A394);
PPC_FUNC_IMPL(__imp__sub_83C2A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A398"))) PPC_WEAK_FUNC(sub_83C2A398);
PPC_FUNC_IMPL(__imp__sub_83C2A398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A3A4"))) PPC_WEAK_FUNC(sub_83C2A3A4);
PPC_FUNC_IMPL(__imp__sub_83C2A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A3A8"))) PPC_WEAK_FUNC(sub_83C2A3A8);
PPC_FUNC_IMPL(__imp__sub_83C2A3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A3B4"))) PPC_WEAK_FUNC(sub_83C2A3B4);
PPC_FUNC_IMPL(__imp__sub_83C2A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A3B8"))) PPC_WEAK_FUNC(sub_83C2A3B8);
PPC_FUNC_IMPL(__imp__sub_83C2A3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A3C4"))) PPC_WEAK_FUNC(sub_83C2A3C4);
PPC_FUNC_IMPL(__imp__sub_83C2A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A3C8"))) PPC_WEAK_FUNC(sub_83C2A3C8);
PPC_FUNC_IMPL(__imp__sub_83C2A3C8) {
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
	// addi r3,r11,-5896
	ctx.r3.s64 = ctx.r11.s64 + -5896;
	// bl 0x83523120
	ctx.lr = 0x83C2A3E0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,5048
	ctx.r3.s64 = ctx.r10.s64 + 5048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A3EC;
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

__attribute__((alias("__imp__sub_83C2A3FC"))) PPC_WEAK_FUNC(sub_83C2A3FC);
PPC_FUNC_IMPL(__imp__sub_83C2A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A400"))) PPC_WEAK_FUNC(sub_83C2A400);
PPC_FUNC_IMPL(__imp__sub_83C2A400) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5880
	ctx.r7.s64 = ctx.r8.s64 + -5880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A428"))) PPC_WEAK_FUNC(sub_83C2A428);
PPC_FUNC_IMPL(__imp__sub_83C2A428) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,21632
	ctx.r6.s64 = ctx.r7.s64 + 21632;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5880);
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
	// std r9,21632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A470"))) PPC_WEAK_FUNC(sub_83C2A470);
PPC_FUNC_IMPL(__imp__sub_83C2A470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5064
	ctx.r3.s64 = ctx.r11.s64 + 5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A47C"))) PPC_WEAK_FUNC(sub_83C2A47C);
PPC_FUNC_IMPL(__imp__sub_83C2A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A480"))) PPC_WEAK_FUNC(sub_83C2A480);
PPC_FUNC_IMPL(__imp__sub_83C2A480) {
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
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// bl 0x8259af80
	ctx.lr = 0x83C2A498;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,5080
	ctx.r3.s64 = ctx.r10.s64 + 5080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A4A4;
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

__attribute__((alias("__imp__sub_83C2A4B4"))) PPC_WEAK_FUNC(sub_83C2A4B4);
PPC_FUNC_IMPL(__imp__sub_83C2A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A4B8"))) PPC_WEAK_FUNC(sub_83C2A4B8);
PPC_FUNC_IMPL(__imp__sub_83C2A4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5892
	ctx.r11.s64 = ctx.r8.s64 + -5892;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,21608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5072
	ctx.r3.s64 = ctx.r6.s64 + 5072;
	// stw r10,-5892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A4E8"))) PPC_WEAK_FUNC(sub_83C2A4E8);
PPC_FUNC_IMPL(__imp__sub_83C2A4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A4F4"))) PPC_WEAK_FUNC(sub_83C2A4F4);
PPC_FUNC_IMPL(__imp__sub_83C2A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A4F8"))) PPC_WEAK_FUNC(sub_83C2A4F8);
PPC_FUNC_IMPL(__imp__sub_83C2A4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5096
	ctx.r3.s64 = ctx.r11.s64 + 5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A504"))) PPC_WEAK_FUNC(sub_83C2A504);
PPC_FUNC_IMPL(__imp__sub_83C2A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A508"))) PPC_WEAK_FUNC(sub_83C2A508);
PPC_FUNC_IMPL(__imp__sub_83C2A508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A514"))) PPC_WEAK_FUNC(sub_83C2A514);
PPC_FUNC_IMPL(__imp__sub_83C2A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A518"))) PPC_WEAK_FUNC(sub_83C2A518);
PPC_FUNC_IMPL(__imp__sub_83C2A518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A524"))) PPC_WEAK_FUNC(sub_83C2A524);
PPC_FUNC_IMPL(__imp__sub_83C2A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A528"))) PPC_WEAK_FUNC(sub_83C2A528);
PPC_FUNC_IMPL(__imp__sub_83C2A528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A534"))) PPC_WEAK_FUNC(sub_83C2A534);
PPC_FUNC_IMPL(__imp__sub_83C2A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A538"))) PPC_WEAK_FUNC(sub_83C2A538);
PPC_FUNC_IMPL(__imp__sub_83C2A538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5128
	ctx.r3.s64 = ctx.r11.s64 + 5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A544"))) PPC_WEAK_FUNC(sub_83C2A544);
PPC_FUNC_IMPL(__imp__sub_83C2A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A548"))) PPC_WEAK_FUNC(sub_83C2A548);
PPC_FUNC_IMPL(__imp__sub_83C2A548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A554"))) PPC_WEAK_FUNC(sub_83C2A554);
PPC_FUNC_IMPL(__imp__sub_83C2A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A558"))) PPC_WEAK_FUNC(sub_83C2A558);
PPC_FUNC_IMPL(__imp__sub_83C2A558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A564"))) PPC_WEAK_FUNC(sub_83C2A564);
PPC_FUNC_IMPL(__imp__sub_83C2A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A568"))) PPC_WEAK_FUNC(sub_83C2A568);
PPC_FUNC_IMPL(__imp__sub_83C2A568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5152
	ctx.r3.s64 = ctx.r11.s64 + 5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A574"))) PPC_WEAK_FUNC(sub_83C2A574);
PPC_FUNC_IMPL(__imp__sub_83C2A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A578"))) PPC_WEAK_FUNC(sub_83C2A578);
PPC_FUNC_IMPL(__imp__sub_83C2A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5160
	ctx.r3.s64 = ctx.r11.s64 + 5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A584"))) PPC_WEAK_FUNC(sub_83C2A584);
PPC_FUNC_IMPL(__imp__sub_83C2A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A588"))) PPC_WEAK_FUNC(sub_83C2A588);
PPC_FUNC_IMPL(__imp__sub_83C2A588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A594"))) PPC_WEAK_FUNC(sub_83C2A594);
PPC_FUNC_IMPL(__imp__sub_83C2A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A598"))) PPC_WEAK_FUNC(sub_83C2A598);
PPC_FUNC_IMPL(__imp__sub_83C2A598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A5A4"))) PPC_WEAK_FUNC(sub_83C2A5A4);
PPC_FUNC_IMPL(__imp__sub_83C2A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A5A8"))) PPC_WEAK_FUNC(sub_83C2A5A8);
PPC_FUNC_IMPL(__imp__sub_83C2A5A8) {
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
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// bl 0x83523120
	ctx.lr = 0x83C2A5C0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,5184
	ctx.r3.s64 = ctx.r10.s64 + 5184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2A5CC;
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

__attribute__((alias("__imp__sub_83C2A5DC"))) PPC_WEAK_FUNC(sub_83C2A5DC);
PPC_FUNC_IMPL(__imp__sub_83C2A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C2A5E0"))) PPC_WEAK_FUNC(sub_83C2A5E0);
PPC_FUNC_IMPL(__imp__sub_83C2A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5524
	ctx.r7.s64 = ctx.r8.s64 + -5524;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5524(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5524);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5524, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C2A608"))) PPC_WEAK_FUNC(sub_83C2A608);
PPC_FUNC_IMPL(__imp__sub_83C2A608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2A614"))) PPC_WEAK_FUNC(sub_83C2A614);
PPC_FUNC_IMPL(__imp__sub_83C2A614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

