#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C08528"))) PPC_WEAK_FUNC(sub_83C08528);
PPC_FUNC_IMPL(__imp__sub_83C08528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20160
	ctx.r3.s64 = ctx.r11.s64 + 20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08534"))) PPC_WEAK_FUNC(sub_83C08534);
PPC_FUNC_IMPL(__imp__sub_83C08534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08538"))) PPC_WEAK_FUNC(sub_83C08538);
PPC_FUNC_IMPL(__imp__sub_83C08538) {
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
	// addi r3,r11,-2956
	ctx.r3.s64 = ctx.r11.s64 + -2956;
	// bl 0x83523120
	ctx.lr = 0x83C08550;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20168
	ctx.r3.s64 = ctx.r10.s64 + 20168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0855C;
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

__attribute__((alias("__imp__sub_83C0856C"))) PPC_WEAK_FUNC(sub_83C0856C);
PPC_FUNC_IMPL(__imp__sub_83C0856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08570"))) PPC_WEAK_FUNC(sub_83C08570);
PPC_FUNC_IMPL(__imp__sub_83C08570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0857C"))) PPC_WEAK_FUNC(sub_83C0857C);
PPC_FUNC_IMPL(__imp__sub_83C0857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08580"))) PPC_WEAK_FUNC(sub_83C08580);
PPC_FUNC_IMPL(__imp__sub_83C08580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20192
	ctx.r3.s64 = ctx.r11.s64 + 20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0858C"))) PPC_WEAK_FUNC(sub_83C0858C);
PPC_FUNC_IMPL(__imp__sub_83C0858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08590"))) PPC_WEAK_FUNC(sub_83C08590);
PPC_FUNC_IMPL(__imp__sub_83C08590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0859C"))) PPC_WEAK_FUNC(sub_83C0859C);
PPC_FUNC_IMPL(__imp__sub_83C0859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085A0"))) PPC_WEAK_FUNC(sub_83C085A0);
PPC_FUNC_IMPL(__imp__sub_83C085A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085AC"))) PPC_WEAK_FUNC(sub_83C085AC);
PPC_FUNC_IMPL(__imp__sub_83C085AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085B0"))) PPC_WEAK_FUNC(sub_83C085B0);
PPC_FUNC_IMPL(__imp__sub_83C085B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085BC"))) PPC_WEAK_FUNC(sub_83C085BC);
PPC_FUNC_IMPL(__imp__sub_83C085BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085C0"))) PPC_WEAK_FUNC(sub_83C085C0);
PPC_FUNC_IMPL(__imp__sub_83C085C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20224
	ctx.r3.s64 = ctx.r11.s64 + 20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085CC"))) PPC_WEAK_FUNC(sub_83C085CC);
PPC_FUNC_IMPL(__imp__sub_83C085CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085D0"))) PPC_WEAK_FUNC(sub_83C085D0);
PPC_FUNC_IMPL(__imp__sub_83C085D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085DC"))) PPC_WEAK_FUNC(sub_83C085DC);
PPC_FUNC_IMPL(__imp__sub_83C085DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085E0"))) PPC_WEAK_FUNC(sub_83C085E0);
PPC_FUNC_IMPL(__imp__sub_83C085E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085EC"))) PPC_WEAK_FUNC(sub_83C085EC);
PPC_FUNC_IMPL(__imp__sub_83C085EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C085F0"))) PPC_WEAK_FUNC(sub_83C085F0);
PPC_FUNC_IMPL(__imp__sub_83C085F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20248
	ctx.r3.s64 = ctx.r11.s64 + 20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C085FC"))) PPC_WEAK_FUNC(sub_83C085FC);
PPC_FUNC_IMPL(__imp__sub_83C085FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08600"))) PPC_WEAK_FUNC(sub_83C08600);
PPC_FUNC_IMPL(__imp__sub_83C08600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20256
	ctx.r3.s64 = ctx.r11.s64 + 20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0860C"))) PPC_WEAK_FUNC(sub_83C0860C);
PPC_FUNC_IMPL(__imp__sub_83C0860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08610"))) PPC_WEAK_FUNC(sub_83C08610);
PPC_FUNC_IMPL(__imp__sub_83C08610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20264
	ctx.r3.s64 = ctx.r11.s64 + 20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0861C"))) PPC_WEAK_FUNC(sub_83C0861C);
PPC_FUNC_IMPL(__imp__sub_83C0861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08620"))) PPC_WEAK_FUNC(sub_83C08620);
PPC_FUNC_IMPL(__imp__sub_83C08620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20272
	ctx.r3.s64 = ctx.r11.s64 + 20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0862C"))) PPC_WEAK_FUNC(sub_83C0862C);
PPC_FUNC_IMPL(__imp__sub_83C0862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08630"))) PPC_WEAK_FUNC(sub_83C08630);
PPC_FUNC_IMPL(__imp__sub_83C08630) {
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
	// addi r3,r11,-2948
	ctx.r3.s64 = ctx.r11.s64 + -2948;
	// bl 0x83523120
	ctx.lr = 0x83C08648;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20280
	ctx.r3.s64 = ctx.r10.s64 + 20280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08654;
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

__attribute__((alias("__imp__sub_83C08664"))) PPC_WEAK_FUNC(sub_83C08664);
PPC_FUNC_IMPL(__imp__sub_83C08664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08668"))) PPC_WEAK_FUNC(sub_83C08668);
PPC_FUNC_IMPL(__imp__sub_83C08668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08674"))) PPC_WEAK_FUNC(sub_83C08674);
PPC_FUNC_IMPL(__imp__sub_83C08674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08678"))) PPC_WEAK_FUNC(sub_83C08678);
PPC_FUNC_IMPL(__imp__sub_83C08678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20304
	ctx.r3.s64 = ctx.r11.s64 + 20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08684"))) PPC_WEAK_FUNC(sub_83C08684);
PPC_FUNC_IMPL(__imp__sub_83C08684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08688"))) PPC_WEAK_FUNC(sub_83C08688);
PPC_FUNC_IMPL(__imp__sub_83C08688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20312
	ctx.r3.s64 = ctx.r11.s64 + 20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08694"))) PPC_WEAK_FUNC(sub_83C08694);
PPC_FUNC_IMPL(__imp__sub_83C08694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08698"))) PPC_WEAK_FUNC(sub_83C08698);
PPC_FUNC_IMPL(__imp__sub_83C08698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086A4"))) PPC_WEAK_FUNC(sub_83C086A4);
PPC_FUNC_IMPL(__imp__sub_83C086A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086A8"))) PPC_WEAK_FUNC(sub_83C086A8);
PPC_FUNC_IMPL(__imp__sub_83C086A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086B4"))) PPC_WEAK_FUNC(sub_83C086B4);
PPC_FUNC_IMPL(__imp__sub_83C086B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086B8"))) PPC_WEAK_FUNC(sub_83C086B8);
PPC_FUNC_IMPL(__imp__sub_83C086B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086C4"))) PPC_WEAK_FUNC(sub_83C086C4);
PPC_FUNC_IMPL(__imp__sub_83C086C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086C8"))) PPC_WEAK_FUNC(sub_83C086C8);
PPC_FUNC_IMPL(__imp__sub_83C086C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086D4"))) PPC_WEAK_FUNC(sub_83C086D4);
PPC_FUNC_IMPL(__imp__sub_83C086D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086D8"))) PPC_WEAK_FUNC(sub_83C086D8);
PPC_FUNC_IMPL(__imp__sub_83C086D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086E4"))) PPC_WEAK_FUNC(sub_83C086E4);
PPC_FUNC_IMPL(__imp__sub_83C086E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086E8"))) PPC_WEAK_FUNC(sub_83C086E8);
PPC_FUNC_IMPL(__imp__sub_83C086E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C086F4"))) PPC_WEAK_FUNC(sub_83C086F4);
PPC_FUNC_IMPL(__imp__sub_83C086F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C086F8"))) PPC_WEAK_FUNC(sub_83C086F8);
PPC_FUNC_IMPL(__imp__sub_83C086F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08704"))) PPC_WEAK_FUNC(sub_83C08704);
PPC_FUNC_IMPL(__imp__sub_83C08704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08708"))) PPC_WEAK_FUNC(sub_83C08708);
PPC_FUNC_IMPL(__imp__sub_83C08708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20376
	ctx.r3.s64 = ctx.r11.s64 + 20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08714"))) PPC_WEAK_FUNC(sub_83C08714);
PPC_FUNC_IMPL(__imp__sub_83C08714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08718"))) PPC_WEAK_FUNC(sub_83C08718);
PPC_FUNC_IMPL(__imp__sub_83C08718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20384
	ctx.r3.s64 = ctx.r11.s64 + 20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08724"))) PPC_WEAK_FUNC(sub_83C08724);
PPC_FUNC_IMPL(__imp__sub_83C08724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08728"))) PPC_WEAK_FUNC(sub_83C08728);
PPC_FUNC_IMPL(__imp__sub_83C08728) {
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
	// addi r3,r11,-2936
	ctx.r3.s64 = ctx.r11.s64 + -2936;
	// bl 0x83523120
	ctx.lr = 0x83C08740;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20392
	ctx.r3.s64 = ctx.r10.s64 + 20392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0874C;
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

__attribute__((alias("__imp__sub_83C0875C"))) PPC_WEAK_FUNC(sub_83C0875C);
PPC_FUNC_IMPL(__imp__sub_83C0875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08760"))) PPC_WEAK_FUNC(sub_83C08760);
PPC_FUNC_IMPL(__imp__sub_83C08760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2920
	ctx.r7.s64 = ctx.r8.s64 + -2920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C08788"))) PPC_WEAK_FUNC(sub_83C08788);
PPC_FUNC_IMPL(__imp__sub_83C08788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-26876
	ctx.r6.s64 = ctx.r7.s64 + -26876;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26948(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26948);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2920);
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
	// std r9,-26876(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26876, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C087D0"))) PPC_WEAK_FUNC(sub_83C087D0);
PPC_FUNC_IMPL(__imp__sub_83C087D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20408
	ctx.r3.s64 = ctx.r11.s64 + 20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C087DC"))) PPC_WEAK_FUNC(sub_83C087DC);
PPC_FUNC_IMPL(__imp__sub_83C087DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C087E0"))) PPC_WEAK_FUNC(sub_83C087E0);
PPC_FUNC_IMPL(__imp__sub_83C087E0) {
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
	// addi r3,r11,-2912
	ctx.r3.s64 = ctx.r11.s64 + -2912;
	// bl 0x8259af80
	ctx.lr = 0x83C087F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20424
	ctx.r3.s64 = ctx.r10.s64 + 20424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08804;
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

__attribute__((alias("__imp__sub_83C08814"))) PPC_WEAK_FUNC(sub_83C08814);
PPC_FUNC_IMPL(__imp__sub_83C08814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08818"))) PPC_WEAK_FUNC(sub_83C08818);
PPC_FUNC_IMPL(__imp__sub_83C08818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2932
	ctx.r11.s64 = ctx.r8.s64 + -2932;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-26900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26900);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20416
	ctx.r3.s64 = ctx.r6.s64 + 20416;
	// stw r10,-2932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08848"))) PPC_WEAK_FUNC(sub_83C08848);
PPC_FUNC_IMPL(__imp__sub_83C08848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08854"))) PPC_WEAK_FUNC(sub_83C08854);
PPC_FUNC_IMPL(__imp__sub_83C08854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08858"))) PPC_WEAK_FUNC(sub_83C08858);
PPC_FUNC_IMPL(__imp__sub_83C08858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08864"))) PPC_WEAK_FUNC(sub_83C08864);
PPC_FUNC_IMPL(__imp__sub_83C08864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08868"))) PPC_WEAK_FUNC(sub_83C08868);
PPC_FUNC_IMPL(__imp__sub_83C08868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08874"))) PPC_WEAK_FUNC(sub_83C08874);
PPC_FUNC_IMPL(__imp__sub_83C08874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08878"))) PPC_WEAK_FUNC(sub_83C08878);
PPC_FUNC_IMPL(__imp__sub_83C08878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20456
	ctx.r3.s64 = ctx.r11.s64 + 20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08884"))) PPC_WEAK_FUNC(sub_83C08884);
PPC_FUNC_IMPL(__imp__sub_83C08884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08888"))) PPC_WEAK_FUNC(sub_83C08888);
PPC_FUNC_IMPL(__imp__sub_83C08888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08894"))) PPC_WEAK_FUNC(sub_83C08894);
PPC_FUNC_IMPL(__imp__sub_83C08894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08898"))) PPC_WEAK_FUNC(sub_83C08898);
PPC_FUNC_IMPL(__imp__sub_83C08898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088A4"))) PPC_WEAK_FUNC(sub_83C088A4);
PPC_FUNC_IMPL(__imp__sub_83C088A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088A8"))) PPC_WEAK_FUNC(sub_83C088A8);
PPC_FUNC_IMPL(__imp__sub_83C088A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088B4"))) PPC_WEAK_FUNC(sub_83C088B4);
PPC_FUNC_IMPL(__imp__sub_83C088B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088B8"))) PPC_WEAK_FUNC(sub_83C088B8);
PPC_FUNC_IMPL(__imp__sub_83C088B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088C4"))) PPC_WEAK_FUNC(sub_83C088C4);
PPC_FUNC_IMPL(__imp__sub_83C088C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088C8"))) PPC_WEAK_FUNC(sub_83C088C8);
PPC_FUNC_IMPL(__imp__sub_83C088C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088D4"))) PPC_WEAK_FUNC(sub_83C088D4);
PPC_FUNC_IMPL(__imp__sub_83C088D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088D8"))) PPC_WEAK_FUNC(sub_83C088D8);
PPC_FUNC_IMPL(__imp__sub_83C088D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088E4"))) PPC_WEAK_FUNC(sub_83C088E4);
PPC_FUNC_IMPL(__imp__sub_83C088E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088E8"))) PPC_WEAK_FUNC(sub_83C088E8);
PPC_FUNC_IMPL(__imp__sub_83C088E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C088F4"))) PPC_WEAK_FUNC(sub_83C088F4);
PPC_FUNC_IMPL(__imp__sub_83C088F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C088F8"))) PPC_WEAK_FUNC(sub_83C088F8);
PPC_FUNC_IMPL(__imp__sub_83C088F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08904"))) PPC_WEAK_FUNC(sub_83C08904);
PPC_FUNC_IMPL(__imp__sub_83C08904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08908"))) PPC_WEAK_FUNC(sub_83C08908);
PPC_FUNC_IMPL(__imp__sub_83C08908) {
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
	// addi r3,r11,-2564
	ctx.r3.s64 = ctx.r11.s64 + -2564;
	// bl 0x83523120
	ctx.lr = 0x83C08920;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20528
	ctx.r3.s64 = ctx.r10.s64 + 20528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0892C;
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

__attribute__((alias("__imp__sub_83C0893C"))) PPC_WEAK_FUNC(sub_83C0893C);
PPC_FUNC_IMPL(__imp__sub_83C0893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08940"))) PPC_WEAK_FUNC(sub_83C08940);
PPC_FUNC_IMPL(__imp__sub_83C08940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0894C"))) PPC_WEAK_FUNC(sub_83C0894C);
PPC_FUNC_IMPL(__imp__sub_83C0894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08950"))) PPC_WEAK_FUNC(sub_83C08950);
PPC_FUNC_IMPL(__imp__sub_83C08950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0895C"))) PPC_WEAK_FUNC(sub_83C0895C);
PPC_FUNC_IMPL(__imp__sub_83C0895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08960"))) PPC_WEAK_FUNC(sub_83C08960);
PPC_FUNC_IMPL(__imp__sub_83C08960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0896C"))) PPC_WEAK_FUNC(sub_83C0896C);
PPC_FUNC_IMPL(__imp__sub_83C0896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08970"))) PPC_WEAK_FUNC(sub_83C08970);
PPC_FUNC_IMPL(__imp__sub_83C08970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20568
	ctx.r3.s64 = ctx.r11.s64 + 20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0897C"))) PPC_WEAK_FUNC(sub_83C0897C);
PPC_FUNC_IMPL(__imp__sub_83C0897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08980"))) PPC_WEAK_FUNC(sub_83C08980);
PPC_FUNC_IMPL(__imp__sub_83C08980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0898C"))) PPC_WEAK_FUNC(sub_83C0898C);
PPC_FUNC_IMPL(__imp__sub_83C0898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08990"))) PPC_WEAK_FUNC(sub_83C08990);
PPC_FUNC_IMPL(__imp__sub_83C08990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0899C"))) PPC_WEAK_FUNC(sub_83C0899C);
PPC_FUNC_IMPL(__imp__sub_83C0899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089A0"))) PPC_WEAK_FUNC(sub_83C089A0);
PPC_FUNC_IMPL(__imp__sub_83C089A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089AC"))) PPC_WEAK_FUNC(sub_83C089AC);
PPC_FUNC_IMPL(__imp__sub_83C089AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089B0"))) PPC_WEAK_FUNC(sub_83C089B0);
PPC_FUNC_IMPL(__imp__sub_83C089B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20600
	ctx.r3.s64 = ctx.r11.s64 + 20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089BC"))) PPC_WEAK_FUNC(sub_83C089BC);
PPC_FUNC_IMPL(__imp__sub_83C089BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089C0"))) PPC_WEAK_FUNC(sub_83C089C0);
PPC_FUNC_IMPL(__imp__sub_83C089C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089CC"))) PPC_WEAK_FUNC(sub_83C089CC);
PPC_FUNC_IMPL(__imp__sub_83C089CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089D0"))) PPC_WEAK_FUNC(sub_83C089D0);
PPC_FUNC_IMPL(__imp__sub_83C089D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20616
	ctx.r3.s64 = ctx.r11.s64 + 20616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089DC"))) PPC_WEAK_FUNC(sub_83C089DC);
PPC_FUNC_IMPL(__imp__sub_83C089DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089E0"))) PPC_WEAK_FUNC(sub_83C089E0);
PPC_FUNC_IMPL(__imp__sub_83C089E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089EC"))) PPC_WEAK_FUNC(sub_83C089EC);
PPC_FUNC_IMPL(__imp__sub_83C089EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C089F0"))) PPC_WEAK_FUNC(sub_83C089F0);
PPC_FUNC_IMPL(__imp__sub_83C089F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C089FC"))) PPC_WEAK_FUNC(sub_83C089FC);
PPC_FUNC_IMPL(__imp__sub_83C089FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A00"))) PPC_WEAK_FUNC(sub_83C08A00);
PPC_FUNC_IMPL(__imp__sub_83C08A00) {
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
	// addi r3,r11,-2552
	ctx.r3.s64 = ctx.r11.s64 + -2552;
	// bl 0x83523120
	ctx.lr = 0x83C08A18;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20640
	ctx.r3.s64 = ctx.r10.s64 + 20640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08A24;
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

__attribute__((alias("__imp__sub_83C08A34"))) PPC_WEAK_FUNC(sub_83C08A34);
PPC_FUNC_IMPL(__imp__sub_83C08A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A38"))) PPC_WEAK_FUNC(sub_83C08A38);
PPC_FUNC_IMPL(__imp__sub_83C08A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A44"))) PPC_WEAK_FUNC(sub_83C08A44);
PPC_FUNC_IMPL(__imp__sub_83C08A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A48"))) PPC_WEAK_FUNC(sub_83C08A48);
PPC_FUNC_IMPL(__imp__sub_83C08A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20664
	ctx.r3.s64 = ctx.r11.s64 + 20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A54"))) PPC_WEAK_FUNC(sub_83C08A54);
PPC_FUNC_IMPL(__imp__sub_83C08A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A58"))) PPC_WEAK_FUNC(sub_83C08A58);
PPC_FUNC_IMPL(__imp__sub_83C08A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A64"))) PPC_WEAK_FUNC(sub_83C08A64);
PPC_FUNC_IMPL(__imp__sub_83C08A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A68"))) PPC_WEAK_FUNC(sub_83C08A68);
PPC_FUNC_IMPL(__imp__sub_83C08A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20680
	ctx.r3.s64 = ctx.r11.s64 + 20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A74"))) PPC_WEAK_FUNC(sub_83C08A74);
PPC_FUNC_IMPL(__imp__sub_83C08A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A78"))) PPC_WEAK_FUNC(sub_83C08A78);
PPC_FUNC_IMPL(__imp__sub_83C08A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A84"))) PPC_WEAK_FUNC(sub_83C08A84);
PPC_FUNC_IMPL(__imp__sub_83C08A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A88"))) PPC_WEAK_FUNC(sub_83C08A88);
PPC_FUNC_IMPL(__imp__sub_83C08A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08A94"))) PPC_WEAK_FUNC(sub_83C08A94);
PPC_FUNC_IMPL(__imp__sub_83C08A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08A98"))) PPC_WEAK_FUNC(sub_83C08A98);
PPC_FUNC_IMPL(__imp__sub_83C08A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AA4"))) PPC_WEAK_FUNC(sub_83C08AA4);
PPC_FUNC_IMPL(__imp__sub_83C08AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AA8"))) PPC_WEAK_FUNC(sub_83C08AA8);
PPC_FUNC_IMPL(__imp__sub_83C08AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AB4"))) PPC_WEAK_FUNC(sub_83C08AB4);
PPC_FUNC_IMPL(__imp__sub_83C08AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AB8"))) PPC_WEAK_FUNC(sub_83C08AB8);
PPC_FUNC_IMPL(__imp__sub_83C08AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AC4"))) PPC_WEAK_FUNC(sub_83C08AC4);
PPC_FUNC_IMPL(__imp__sub_83C08AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AC8"))) PPC_WEAK_FUNC(sub_83C08AC8);
PPC_FUNC_IMPL(__imp__sub_83C08AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AD4"))) PPC_WEAK_FUNC(sub_83C08AD4);
PPC_FUNC_IMPL(__imp__sub_83C08AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AD8"))) PPC_WEAK_FUNC(sub_83C08AD8);
PPC_FUNC_IMPL(__imp__sub_83C08AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AE4"))) PPC_WEAK_FUNC(sub_83C08AE4);
PPC_FUNC_IMPL(__imp__sub_83C08AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AE8"))) PPC_WEAK_FUNC(sub_83C08AE8);
PPC_FUNC_IMPL(__imp__sub_83C08AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08AF4"))) PPC_WEAK_FUNC(sub_83C08AF4);
PPC_FUNC_IMPL(__imp__sub_83C08AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08AF8"))) PPC_WEAK_FUNC(sub_83C08AF8);
PPC_FUNC_IMPL(__imp__sub_83C08AF8) {
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
	// addi r3,r11,-2540
	ctx.r3.s64 = ctx.r11.s64 + -2540;
	// bl 0x83523120
	ctx.lr = 0x83C08B10;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20752
	ctx.r3.s64 = ctx.r10.s64 + 20752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08B1C;
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

__attribute__((alias("__imp__sub_83C08B2C"))) PPC_WEAK_FUNC(sub_83C08B2C);
PPC_FUNC_IMPL(__imp__sub_83C08B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B30"))) PPC_WEAK_FUNC(sub_83C08B30);
PPC_FUNC_IMPL(__imp__sub_83C08B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B3C"))) PPC_WEAK_FUNC(sub_83C08B3C);
PPC_FUNC_IMPL(__imp__sub_83C08B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B40"))) PPC_WEAK_FUNC(sub_83C08B40);
PPC_FUNC_IMPL(__imp__sub_83C08B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B4C"))) PPC_WEAK_FUNC(sub_83C08B4C);
PPC_FUNC_IMPL(__imp__sub_83C08B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B50"))) PPC_WEAK_FUNC(sub_83C08B50);
PPC_FUNC_IMPL(__imp__sub_83C08B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B5C"))) PPC_WEAK_FUNC(sub_83C08B5C);
PPC_FUNC_IMPL(__imp__sub_83C08B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B60"))) PPC_WEAK_FUNC(sub_83C08B60);
PPC_FUNC_IMPL(__imp__sub_83C08B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B6C"))) PPC_WEAK_FUNC(sub_83C08B6C);
PPC_FUNC_IMPL(__imp__sub_83C08B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B70"))) PPC_WEAK_FUNC(sub_83C08B70);
PPC_FUNC_IMPL(__imp__sub_83C08B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B7C"))) PPC_WEAK_FUNC(sub_83C08B7C);
PPC_FUNC_IMPL(__imp__sub_83C08B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B80"))) PPC_WEAK_FUNC(sub_83C08B80);
PPC_FUNC_IMPL(__imp__sub_83C08B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B8C"))) PPC_WEAK_FUNC(sub_83C08B8C);
PPC_FUNC_IMPL(__imp__sub_83C08B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08B90"))) PPC_WEAK_FUNC(sub_83C08B90);
PPC_FUNC_IMPL(__imp__sub_83C08B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08B9C"))) PPC_WEAK_FUNC(sub_83C08B9C);
PPC_FUNC_IMPL(__imp__sub_83C08B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BA0"))) PPC_WEAK_FUNC(sub_83C08BA0);
PPC_FUNC_IMPL(__imp__sub_83C08BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08BAC"))) PPC_WEAK_FUNC(sub_83C08BAC);
PPC_FUNC_IMPL(__imp__sub_83C08BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BB0"))) PPC_WEAK_FUNC(sub_83C08BB0);
PPC_FUNC_IMPL(__imp__sub_83C08BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08BBC"))) PPC_WEAK_FUNC(sub_83C08BBC);
PPC_FUNC_IMPL(__imp__sub_83C08BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BC0"))) PPC_WEAK_FUNC(sub_83C08BC0);
PPC_FUNC_IMPL(__imp__sub_83C08BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08BCC"))) PPC_WEAK_FUNC(sub_83C08BCC);
PPC_FUNC_IMPL(__imp__sub_83C08BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BD0"))) PPC_WEAK_FUNC(sub_83C08BD0);
PPC_FUNC_IMPL(__imp__sub_83C08BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20848
	ctx.r3.s64 = ctx.r11.s64 + 20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08BDC"))) PPC_WEAK_FUNC(sub_83C08BDC);
PPC_FUNC_IMPL(__imp__sub_83C08BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BE0"))) PPC_WEAK_FUNC(sub_83C08BE0);
PPC_FUNC_IMPL(__imp__sub_83C08BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08BEC"))) PPC_WEAK_FUNC(sub_83C08BEC);
PPC_FUNC_IMPL(__imp__sub_83C08BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08BF0"))) PPC_WEAK_FUNC(sub_83C08BF0);
PPC_FUNC_IMPL(__imp__sub_83C08BF0) {
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
	// addi r3,r11,-2524
	ctx.r3.s64 = ctx.r11.s64 + -2524;
	// bl 0x83523120
	ctx.lr = 0x83C08C08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20864
	ctx.r3.s64 = ctx.r10.s64 + 20864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08C14;
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

__attribute__((alias("__imp__sub_83C08C24"))) PPC_WEAK_FUNC(sub_83C08C24);
PPC_FUNC_IMPL(__imp__sub_83C08C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08C28"))) PPC_WEAK_FUNC(sub_83C08C28);
PPC_FUNC_IMPL(__imp__sub_83C08C28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2508
	ctx.r7.s64 = ctx.r8.s64 + -2508;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2508(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2508);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2508, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C08C50"))) PPC_WEAK_FUNC(sub_83C08C50);
PPC_FUNC_IMPL(__imp__sub_83C08C50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-26388
	ctx.r6.s64 = ctx.r7.s64 + -26388;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2508(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2508);
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
	// std r9,-26388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C08C98"))) PPC_WEAK_FUNC(sub_83C08C98);
PPC_FUNC_IMPL(__imp__sub_83C08C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08CA4"))) PPC_WEAK_FUNC(sub_83C08CA4);
PPC_FUNC_IMPL(__imp__sub_83C08CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08CA8"))) PPC_WEAK_FUNC(sub_83C08CA8);
PPC_FUNC_IMPL(__imp__sub_83C08CA8) {
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
	// addi r3,r11,-2496
	ctx.r3.s64 = ctx.r11.s64 + -2496;
	// bl 0x8259af80
	ctx.lr = 0x83C08CC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,20896
	ctx.r3.s64 = ctx.r10.s64 + 20896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08CCC;
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

__attribute__((alias("__imp__sub_83C08CDC"))) PPC_WEAK_FUNC(sub_83C08CDC);
PPC_FUNC_IMPL(__imp__sub_83C08CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08CE0"))) PPC_WEAK_FUNC(sub_83C08CE0);
PPC_FUNC_IMPL(__imp__sub_83C08CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2520
	ctx.r11.s64 = ctx.r8.s64 + -2520;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-26412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20888
	ctx.r3.s64 = ctx.r6.s64 + 20888;
	// stw r10,-2520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2520, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D10"))) PPC_WEAK_FUNC(sub_83C08D10);
PPC_FUNC_IMPL(__imp__sub_83C08D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D1C"))) PPC_WEAK_FUNC(sub_83C08D1C);
PPC_FUNC_IMPL(__imp__sub_83C08D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D20"))) PPC_WEAK_FUNC(sub_83C08D20);
PPC_FUNC_IMPL(__imp__sub_83C08D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D2C"))) PPC_WEAK_FUNC(sub_83C08D2C);
PPC_FUNC_IMPL(__imp__sub_83C08D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D30"))) PPC_WEAK_FUNC(sub_83C08D30);
PPC_FUNC_IMPL(__imp__sub_83C08D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D3C"))) PPC_WEAK_FUNC(sub_83C08D3C);
PPC_FUNC_IMPL(__imp__sub_83C08D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D40"))) PPC_WEAK_FUNC(sub_83C08D40);
PPC_FUNC_IMPL(__imp__sub_83C08D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D4C"))) PPC_WEAK_FUNC(sub_83C08D4C);
PPC_FUNC_IMPL(__imp__sub_83C08D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D50"))) PPC_WEAK_FUNC(sub_83C08D50);
PPC_FUNC_IMPL(__imp__sub_83C08D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D5C"))) PPC_WEAK_FUNC(sub_83C08D5C);
PPC_FUNC_IMPL(__imp__sub_83C08D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D60"))) PPC_WEAK_FUNC(sub_83C08D60);
PPC_FUNC_IMPL(__imp__sub_83C08D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D6C"))) PPC_WEAK_FUNC(sub_83C08D6C);
PPC_FUNC_IMPL(__imp__sub_83C08D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D70"))) PPC_WEAK_FUNC(sub_83C08D70);
PPC_FUNC_IMPL(__imp__sub_83C08D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D7C"))) PPC_WEAK_FUNC(sub_83C08D7C);
PPC_FUNC_IMPL(__imp__sub_83C08D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D80"))) PPC_WEAK_FUNC(sub_83C08D80);
PPC_FUNC_IMPL(__imp__sub_83C08D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D8C"))) PPC_WEAK_FUNC(sub_83C08D8C);
PPC_FUNC_IMPL(__imp__sub_83C08D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08D90"))) PPC_WEAK_FUNC(sub_83C08D90);
PPC_FUNC_IMPL(__imp__sub_83C08D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08D9C"))) PPC_WEAK_FUNC(sub_83C08D9C);
PPC_FUNC_IMPL(__imp__sub_83C08D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08DA0"))) PPC_WEAK_FUNC(sub_83C08DA0);
PPC_FUNC_IMPL(__imp__sub_83C08DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08DAC"))) PPC_WEAK_FUNC(sub_83C08DAC);
PPC_FUNC_IMPL(__imp__sub_83C08DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08DB0"))) PPC_WEAK_FUNC(sub_83C08DB0);
PPC_FUNC_IMPL(__imp__sub_83C08DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20984
	ctx.r3.s64 = ctx.r11.s64 + 20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08DBC"))) PPC_WEAK_FUNC(sub_83C08DBC);
PPC_FUNC_IMPL(__imp__sub_83C08DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08DC0"))) PPC_WEAK_FUNC(sub_83C08DC0);
PPC_FUNC_IMPL(__imp__sub_83C08DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08DCC"))) PPC_WEAK_FUNC(sub_83C08DCC);
PPC_FUNC_IMPL(__imp__sub_83C08DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08DD0"))) PPC_WEAK_FUNC(sub_83C08DD0);
PPC_FUNC_IMPL(__imp__sub_83C08DD0) {
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
	// addi r3,r11,-2148
	ctx.r3.s64 = ctx.r11.s64 + -2148;
	// bl 0x83523120
	ctx.lr = 0x83C08DE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21000
	ctx.r3.s64 = ctx.r10.s64 + 21000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08DF4;
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

__attribute__((alias("__imp__sub_83C08E04"))) PPC_WEAK_FUNC(sub_83C08E04);
PPC_FUNC_IMPL(__imp__sub_83C08E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08E08"))) PPC_WEAK_FUNC(sub_83C08E08);
PPC_FUNC_IMPL(__imp__sub_83C08E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2132
	ctx.r7.s64 = ctx.r8.s64 + -2132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2132);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2132, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C08E30"))) PPC_WEAK_FUNC(sub_83C08E30);
PPC_FUNC_IMPL(__imp__sub_83C08E30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-26260
	ctx.r6.s64 = ctx.r7.s64 + -26260;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26332(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26332);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2132);
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
	// std r9,-26260(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26260, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C08E78"))) PPC_WEAK_FUNC(sub_83C08E78);
PPC_FUNC_IMPL(__imp__sub_83C08E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21016
	ctx.r3.s64 = ctx.r11.s64 + 21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08E84"))) PPC_WEAK_FUNC(sub_83C08E84);
PPC_FUNC_IMPL(__imp__sub_83C08E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08E88"))) PPC_WEAK_FUNC(sub_83C08E88);
PPC_FUNC_IMPL(__imp__sub_83C08E88) {
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
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// bl 0x8259af80
	ctx.lr = 0x83C08EA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21032
	ctx.r3.s64 = ctx.r10.s64 + 21032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08EAC;
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

__attribute__((alias("__imp__sub_83C08EBC"))) PPC_WEAK_FUNC(sub_83C08EBC);
PPC_FUNC_IMPL(__imp__sub_83C08EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08EC0"))) PPC_WEAK_FUNC(sub_83C08EC0);
PPC_FUNC_IMPL(__imp__sub_83C08EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2144
	ctx.r11.s64 = ctx.r8.s64 + -2144;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-26284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26284);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21024
	ctx.r3.s64 = ctx.r6.s64 + 21024;
	// stw r10,-2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2144, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08EF0"))) PPC_WEAK_FUNC(sub_83C08EF0);
PPC_FUNC_IMPL(__imp__sub_83C08EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08EFC"))) PPC_WEAK_FUNC(sub_83C08EFC);
PPC_FUNC_IMPL(__imp__sub_83C08EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F00"))) PPC_WEAK_FUNC(sub_83C08F00);
PPC_FUNC_IMPL(__imp__sub_83C08F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F0C"))) PPC_WEAK_FUNC(sub_83C08F0C);
PPC_FUNC_IMPL(__imp__sub_83C08F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F10"))) PPC_WEAK_FUNC(sub_83C08F10);
PPC_FUNC_IMPL(__imp__sub_83C08F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F1C"))) PPC_WEAK_FUNC(sub_83C08F1C);
PPC_FUNC_IMPL(__imp__sub_83C08F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F20"))) PPC_WEAK_FUNC(sub_83C08F20);
PPC_FUNC_IMPL(__imp__sub_83C08F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F2C"))) PPC_WEAK_FUNC(sub_83C08F2C);
PPC_FUNC_IMPL(__imp__sub_83C08F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F30"))) PPC_WEAK_FUNC(sub_83C08F30);
PPC_FUNC_IMPL(__imp__sub_83C08F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F3C"))) PPC_WEAK_FUNC(sub_83C08F3C);
PPC_FUNC_IMPL(__imp__sub_83C08F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F40"))) PPC_WEAK_FUNC(sub_83C08F40);
PPC_FUNC_IMPL(__imp__sub_83C08F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F4C"))) PPC_WEAK_FUNC(sub_83C08F4C);
PPC_FUNC_IMPL(__imp__sub_83C08F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F50"))) PPC_WEAK_FUNC(sub_83C08F50);
PPC_FUNC_IMPL(__imp__sub_83C08F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F5C"))) PPC_WEAK_FUNC(sub_83C08F5C);
PPC_FUNC_IMPL(__imp__sub_83C08F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F60"))) PPC_WEAK_FUNC(sub_83C08F60);
PPC_FUNC_IMPL(__imp__sub_83C08F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F6C"))) PPC_WEAK_FUNC(sub_83C08F6C);
PPC_FUNC_IMPL(__imp__sub_83C08F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F70"))) PPC_WEAK_FUNC(sub_83C08F70);
PPC_FUNC_IMPL(__imp__sub_83C08F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F7C"))) PPC_WEAK_FUNC(sub_83C08F7C);
PPC_FUNC_IMPL(__imp__sub_83C08F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F80"))) PPC_WEAK_FUNC(sub_83C08F80);
PPC_FUNC_IMPL(__imp__sub_83C08F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F8C"))) PPC_WEAK_FUNC(sub_83C08F8C);
PPC_FUNC_IMPL(__imp__sub_83C08F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08F90"))) PPC_WEAK_FUNC(sub_83C08F90);
PPC_FUNC_IMPL(__imp__sub_83C08F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08F9C"))) PPC_WEAK_FUNC(sub_83C08F9C);
PPC_FUNC_IMPL(__imp__sub_83C08F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08FA0"))) PPC_WEAK_FUNC(sub_83C08FA0);
PPC_FUNC_IMPL(__imp__sub_83C08FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08FAC"))) PPC_WEAK_FUNC(sub_83C08FAC);
PPC_FUNC_IMPL(__imp__sub_83C08FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08FB0"))) PPC_WEAK_FUNC(sub_83C08FB0);
PPC_FUNC_IMPL(__imp__sub_83C08FB0) {
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
	// addi r3,r11,-1772
	ctx.r3.s64 = ctx.r11.s64 + -1772;
	// bl 0x83523120
	ctx.lr = 0x83C08FC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21136
	ctx.r3.s64 = ctx.r10.s64 + 21136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C08FD4;
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

__attribute__((alias("__imp__sub_83C08FE4"))) PPC_WEAK_FUNC(sub_83C08FE4);
PPC_FUNC_IMPL(__imp__sub_83C08FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08FE8"))) PPC_WEAK_FUNC(sub_83C08FE8);
PPC_FUNC_IMPL(__imp__sub_83C08FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C08FF4"))) PPC_WEAK_FUNC(sub_83C08FF4);
PPC_FUNC_IMPL(__imp__sub_83C08FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C08FF8"))) PPC_WEAK_FUNC(sub_83C08FF8);
PPC_FUNC_IMPL(__imp__sub_83C08FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09004"))) PPC_WEAK_FUNC(sub_83C09004);
PPC_FUNC_IMPL(__imp__sub_83C09004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09008"))) PPC_WEAK_FUNC(sub_83C09008);
PPC_FUNC_IMPL(__imp__sub_83C09008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09014"))) PPC_WEAK_FUNC(sub_83C09014);
PPC_FUNC_IMPL(__imp__sub_83C09014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09018"))) PPC_WEAK_FUNC(sub_83C09018);
PPC_FUNC_IMPL(__imp__sub_83C09018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09024"))) PPC_WEAK_FUNC(sub_83C09024);
PPC_FUNC_IMPL(__imp__sub_83C09024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09028"))) PPC_WEAK_FUNC(sub_83C09028);
PPC_FUNC_IMPL(__imp__sub_83C09028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21184
	ctx.r3.s64 = ctx.r11.s64 + 21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09034"))) PPC_WEAK_FUNC(sub_83C09034);
PPC_FUNC_IMPL(__imp__sub_83C09034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09038"))) PPC_WEAK_FUNC(sub_83C09038);
PPC_FUNC_IMPL(__imp__sub_83C09038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09044"))) PPC_WEAK_FUNC(sub_83C09044);
PPC_FUNC_IMPL(__imp__sub_83C09044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09048"))) PPC_WEAK_FUNC(sub_83C09048);
PPC_FUNC_IMPL(__imp__sub_83C09048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09054"))) PPC_WEAK_FUNC(sub_83C09054);
PPC_FUNC_IMPL(__imp__sub_83C09054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09058"))) PPC_WEAK_FUNC(sub_83C09058);
PPC_FUNC_IMPL(__imp__sub_83C09058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09064"))) PPC_WEAK_FUNC(sub_83C09064);
PPC_FUNC_IMPL(__imp__sub_83C09064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09068"))) PPC_WEAK_FUNC(sub_83C09068);
PPC_FUNC_IMPL(__imp__sub_83C09068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09074"))) PPC_WEAK_FUNC(sub_83C09074);
PPC_FUNC_IMPL(__imp__sub_83C09074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09078"))) PPC_WEAK_FUNC(sub_83C09078);
PPC_FUNC_IMPL(__imp__sub_83C09078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09084"))) PPC_WEAK_FUNC(sub_83C09084);
PPC_FUNC_IMPL(__imp__sub_83C09084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09088"))) PPC_WEAK_FUNC(sub_83C09088);
PPC_FUNC_IMPL(__imp__sub_83C09088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09094"))) PPC_WEAK_FUNC(sub_83C09094);
PPC_FUNC_IMPL(__imp__sub_83C09094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09098"))) PPC_WEAK_FUNC(sub_83C09098);
PPC_FUNC_IMPL(__imp__sub_83C09098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

