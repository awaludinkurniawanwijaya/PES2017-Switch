#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC6730"))) PPC_WEAK_FUNC(sub_83BC6730);
PPC_FUNC_IMPL(__imp__sub_83BC6730) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-14752
	ctx.r3.s64 = ctx.r11.s64 + -14752;
	// bl 0x8259af80
	ctx.lr = 0x83BC6748;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2224
	ctx.r3.s64 = ctx.r10.s64 + 2224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6754;
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

__attribute__((alias("__imp__sub_83BC6764"))) PPC_WEAK_FUNC(sub_83BC6764);
PPC_FUNC_IMPL(__imp__sub_83BC6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6768"))) PPC_WEAK_FUNC(sub_83BC6768);
PPC_FUNC_IMPL(__imp__sub_83BC6768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14772
	ctx.r11.s64 = ctx.r8.s64 + -14772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,6792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2216
	ctx.r3.s64 = ctx.r6.s64 + 2216;
	// stw r10,-14772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6798"))) PPC_WEAK_FUNC(sub_83BC6798);
PPC_FUNC_IMPL(__imp__sub_83BC6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67A4"))) PPC_WEAK_FUNC(sub_83BC67A4);
PPC_FUNC_IMPL(__imp__sub_83BC67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67A8"))) PPC_WEAK_FUNC(sub_83BC67A8);
PPC_FUNC_IMPL(__imp__sub_83BC67A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2240
	ctx.r3.s64 = ctx.r11.s64 + 2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67B4"))) PPC_WEAK_FUNC(sub_83BC67B4);
PPC_FUNC_IMPL(__imp__sub_83BC67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67B8"))) PPC_WEAK_FUNC(sub_83BC67B8);
PPC_FUNC_IMPL(__imp__sub_83BC67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67C4"))) PPC_WEAK_FUNC(sub_83BC67C4);
PPC_FUNC_IMPL(__imp__sub_83BC67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67C8"))) PPC_WEAK_FUNC(sub_83BC67C8);
PPC_FUNC_IMPL(__imp__sub_83BC67C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2256
	ctx.r3.s64 = ctx.r11.s64 + 2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67D4"))) PPC_WEAK_FUNC(sub_83BC67D4);
PPC_FUNC_IMPL(__imp__sub_83BC67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67D8"))) PPC_WEAK_FUNC(sub_83BC67D8);
PPC_FUNC_IMPL(__imp__sub_83BC67D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2264
	ctx.r3.s64 = ctx.r11.s64 + 2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67E4"))) PPC_WEAK_FUNC(sub_83BC67E4);
PPC_FUNC_IMPL(__imp__sub_83BC67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67E8"))) PPC_WEAK_FUNC(sub_83BC67E8);
PPC_FUNC_IMPL(__imp__sub_83BC67E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC67F4"))) PPC_WEAK_FUNC(sub_83BC67F4);
PPC_FUNC_IMPL(__imp__sub_83BC67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC67F8"))) PPC_WEAK_FUNC(sub_83BC67F8);
PPC_FUNC_IMPL(__imp__sub_83BC67F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2280
	ctx.r3.s64 = ctx.r11.s64 + 2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6804"))) PPC_WEAK_FUNC(sub_83BC6804);
PPC_FUNC_IMPL(__imp__sub_83BC6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6808"))) PPC_WEAK_FUNC(sub_83BC6808);
PPC_FUNC_IMPL(__imp__sub_83BC6808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6814"))) PPC_WEAK_FUNC(sub_83BC6814);
PPC_FUNC_IMPL(__imp__sub_83BC6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6818"))) PPC_WEAK_FUNC(sub_83BC6818);
PPC_FUNC_IMPL(__imp__sub_83BC6818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2296
	ctx.r3.s64 = ctx.r11.s64 + 2296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6824"))) PPC_WEAK_FUNC(sub_83BC6824);
PPC_FUNC_IMPL(__imp__sub_83BC6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6828"))) PPC_WEAK_FUNC(sub_83BC6828);
PPC_FUNC_IMPL(__imp__sub_83BC6828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2304
	ctx.r3.s64 = ctx.r11.s64 + 2304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6834"))) PPC_WEAK_FUNC(sub_83BC6834);
PPC_FUNC_IMPL(__imp__sub_83BC6834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6838"))) PPC_WEAK_FUNC(sub_83BC6838);
PPC_FUNC_IMPL(__imp__sub_83BC6838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2312
	ctx.r3.s64 = ctx.r11.s64 + 2312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6844"))) PPC_WEAK_FUNC(sub_83BC6844);
PPC_FUNC_IMPL(__imp__sub_83BC6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6848"))) PPC_WEAK_FUNC(sub_83BC6848);
PPC_FUNC_IMPL(__imp__sub_83BC6848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6854"))) PPC_WEAK_FUNC(sub_83BC6854);
PPC_FUNC_IMPL(__imp__sub_83BC6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6858"))) PPC_WEAK_FUNC(sub_83BC6858);
PPC_FUNC_IMPL(__imp__sub_83BC6858) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// bl 0x83523120
	ctx.lr = 0x83BC6870;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2328
	ctx.r3.s64 = ctx.r10.s64 + 2328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC687C;
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

__attribute__((alias("__imp__sub_83BC688C"))) PPC_WEAK_FUNC(sub_83BC688C);
PPC_FUNC_IMPL(__imp__sub_83BC688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6890"))) PPC_WEAK_FUNC(sub_83BC6890);
PPC_FUNC_IMPL(__imp__sub_83BC6890) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14392
	ctx.r7.s64 = ctx.r8.s64 + -14392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC68B8"))) PPC_WEAK_FUNC(sub_83BC68B8);
PPC_FUNC_IMPL(__imp__sub_83BC68B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,6952
	ctx.r6.s64 = ctx.r7.s64 + 6952;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6880(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6880);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14392);
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
	// std r9,6952(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6900"))) PPC_WEAK_FUNC(sub_83BC6900);
PPC_FUNC_IMPL(__imp__sub_83BC6900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC690C"))) PPC_WEAK_FUNC(sub_83BC690C);
PPC_FUNC_IMPL(__imp__sub_83BC690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6910"))) PPC_WEAK_FUNC(sub_83BC6910);
PPC_FUNC_IMPL(__imp__sub_83BC6910) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// bl 0x8259af80
	ctx.lr = 0x83BC6928;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2360
	ctx.r3.s64 = ctx.r10.s64 + 2360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6934;
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

__attribute__((alias("__imp__sub_83BC6944"))) PPC_WEAK_FUNC(sub_83BC6944);
PPC_FUNC_IMPL(__imp__sub_83BC6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6948"))) PPC_WEAK_FUNC(sub_83BC6948);
PPC_FUNC_IMPL(__imp__sub_83BC6948) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14404
	ctx.r11.s64 = ctx.r8.s64 + -14404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,6928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2352
	ctx.r3.s64 = ctx.r6.s64 + 2352;
	// stw r10,-14404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6978"))) PPC_WEAK_FUNC(sub_83BC6978);
PPC_FUNC_IMPL(__imp__sub_83BC6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2368
	ctx.r3.s64 = ctx.r11.s64 + 2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6984"))) PPC_WEAK_FUNC(sub_83BC6984);
PPC_FUNC_IMPL(__imp__sub_83BC6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6988"))) PPC_WEAK_FUNC(sub_83BC6988);
PPC_FUNC_IMPL(__imp__sub_83BC6988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2376
	ctx.r3.s64 = ctx.r11.s64 + 2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6994"))) PPC_WEAK_FUNC(sub_83BC6994);
PPC_FUNC_IMPL(__imp__sub_83BC6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6998"))) PPC_WEAK_FUNC(sub_83BC6998);
PPC_FUNC_IMPL(__imp__sub_83BC6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69A4"))) PPC_WEAK_FUNC(sub_83BC69A4);
PPC_FUNC_IMPL(__imp__sub_83BC69A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69A8"))) PPC_WEAK_FUNC(sub_83BC69A8);
PPC_FUNC_IMPL(__imp__sub_83BC69A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69B4"))) PPC_WEAK_FUNC(sub_83BC69B4);
PPC_FUNC_IMPL(__imp__sub_83BC69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69B8"))) PPC_WEAK_FUNC(sub_83BC69B8);
PPC_FUNC_IMPL(__imp__sub_83BC69B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69C4"))) PPC_WEAK_FUNC(sub_83BC69C4);
PPC_FUNC_IMPL(__imp__sub_83BC69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69C8"))) PPC_WEAK_FUNC(sub_83BC69C8);
PPC_FUNC_IMPL(__imp__sub_83BC69C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69D4"))) PPC_WEAK_FUNC(sub_83BC69D4);
PPC_FUNC_IMPL(__imp__sub_83BC69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69D8"))) PPC_WEAK_FUNC(sub_83BC69D8);
PPC_FUNC_IMPL(__imp__sub_83BC69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2416
	ctx.r3.s64 = ctx.r11.s64 + 2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69E4"))) PPC_WEAK_FUNC(sub_83BC69E4);
PPC_FUNC_IMPL(__imp__sub_83BC69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69E8"))) PPC_WEAK_FUNC(sub_83BC69E8);
PPC_FUNC_IMPL(__imp__sub_83BC69E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC69F4"))) PPC_WEAK_FUNC(sub_83BC69F4);
PPC_FUNC_IMPL(__imp__sub_83BC69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC69F8"))) PPC_WEAK_FUNC(sub_83BC69F8);
PPC_FUNC_IMPL(__imp__sub_83BC69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6A04"))) PPC_WEAK_FUNC(sub_83BC6A04);
PPC_FUNC_IMPL(__imp__sub_83BC6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6A08"))) PPC_WEAK_FUNC(sub_83BC6A08);
PPC_FUNC_IMPL(__imp__sub_83BC6A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2440
	ctx.r3.s64 = ctx.r11.s64 + 2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6A14"))) PPC_WEAK_FUNC(sub_83BC6A14);
PPC_FUNC_IMPL(__imp__sub_83BC6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6A18"))) PPC_WEAK_FUNC(sub_83BC6A18);
PPC_FUNC_IMPL(__imp__sub_83BC6A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2448
	ctx.r3.s64 = ctx.r11.s64 + 2448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6A24"))) PPC_WEAK_FUNC(sub_83BC6A24);
PPC_FUNC_IMPL(__imp__sub_83BC6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6A28"))) PPC_WEAK_FUNC(sub_83BC6A28);
PPC_FUNC_IMPL(__imp__sub_83BC6A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6A34"))) PPC_WEAK_FUNC(sub_83BC6A34);
PPC_FUNC_IMPL(__imp__sub_83BC6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6A38"))) PPC_WEAK_FUNC(sub_83BC6A38);
PPC_FUNC_IMPL(__imp__sub_83BC6A38) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// bl 0x83523120
	ctx.lr = 0x83BC6A50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2464
	ctx.r3.s64 = ctx.r10.s64 + 2464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6A5C;
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

__attribute__((alias("__imp__sub_83BC6A6C"))) PPC_WEAK_FUNC(sub_83BC6A6C);
PPC_FUNC_IMPL(__imp__sub_83BC6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6A70"))) PPC_WEAK_FUNC(sub_83BC6A70);
PPC_FUNC_IMPL(__imp__sub_83BC6A70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13880
	ctx.r7.s64 = ctx.r8.s64 + -13880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6A98"))) PPC_WEAK_FUNC(sub_83BC6A98);
PPC_FUNC_IMPL(__imp__sub_83BC6A98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,7080
	ctx.r6.s64 = ctx.r7.s64 + 7080;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13880);
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
	// std r9,7080(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6AE0"))) PPC_WEAK_FUNC(sub_83BC6AE0);
PPC_FUNC_IMPL(__imp__sub_83BC6AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6AEC"))) PPC_WEAK_FUNC(sub_83BC6AEC);
PPC_FUNC_IMPL(__imp__sub_83BC6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6AF0"))) PPC_WEAK_FUNC(sub_83BC6AF0);
PPC_FUNC_IMPL(__imp__sub_83BC6AF0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// bl 0x8259af80
	ctx.lr = 0x83BC6B08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2496
	ctx.r3.s64 = ctx.r10.s64 + 2496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6B14;
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

__attribute__((alias("__imp__sub_83BC6B24"))) PPC_WEAK_FUNC(sub_83BC6B24);
PPC_FUNC_IMPL(__imp__sub_83BC6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6B28"))) PPC_WEAK_FUNC(sub_83BC6B28);
PPC_FUNC_IMPL(__imp__sub_83BC6B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13892
	ctx.r11.s64 = ctx.r8.s64 + -13892;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,7056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2488
	ctx.r3.s64 = ctx.r6.s64 + 2488;
	// stw r10,-13892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6B58"))) PPC_WEAK_FUNC(sub_83BC6B58);
PPC_FUNC_IMPL(__imp__sub_83BC6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6B64"))) PPC_WEAK_FUNC(sub_83BC6B64);
PPC_FUNC_IMPL(__imp__sub_83BC6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6B68"))) PPC_WEAK_FUNC(sub_83BC6B68);
PPC_FUNC_IMPL(__imp__sub_83BC6B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6B74"))) PPC_WEAK_FUNC(sub_83BC6B74);
PPC_FUNC_IMPL(__imp__sub_83BC6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6B78"))) PPC_WEAK_FUNC(sub_83BC6B78);
PPC_FUNC_IMPL(__imp__sub_83BC6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6B84"))) PPC_WEAK_FUNC(sub_83BC6B84);
PPC_FUNC_IMPL(__imp__sub_83BC6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6B88"))) PPC_WEAK_FUNC(sub_83BC6B88);
PPC_FUNC_IMPL(__imp__sub_83BC6B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6B94"))) PPC_WEAK_FUNC(sub_83BC6B94);
PPC_FUNC_IMPL(__imp__sub_83BC6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6B98"))) PPC_WEAK_FUNC(sub_83BC6B98);
PPC_FUNC_IMPL(__imp__sub_83BC6B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2640
	ctx.r3.s64 = ctx.r11.s64 + 2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BA4"))) PPC_WEAK_FUNC(sub_83BC6BA4);
PPC_FUNC_IMPL(__imp__sub_83BC6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BA8"))) PPC_WEAK_FUNC(sub_83BC6BA8);
PPC_FUNC_IMPL(__imp__sub_83BC6BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BB4"))) PPC_WEAK_FUNC(sub_83BC6BB4);
PPC_FUNC_IMPL(__imp__sub_83BC6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BB8"))) PPC_WEAK_FUNC(sub_83BC6BB8);
PPC_FUNC_IMPL(__imp__sub_83BC6BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BC4"))) PPC_WEAK_FUNC(sub_83BC6BC4);
PPC_FUNC_IMPL(__imp__sub_83BC6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BC8"))) PPC_WEAK_FUNC(sub_83BC6BC8);
PPC_FUNC_IMPL(__imp__sub_83BC6BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2664
	ctx.r3.s64 = ctx.r11.s64 + 2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BD4"))) PPC_WEAK_FUNC(sub_83BC6BD4);
PPC_FUNC_IMPL(__imp__sub_83BC6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BD8"))) PPC_WEAK_FUNC(sub_83BC6BD8);
PPC_FUNC_IMPL(__imp__sub_83BC6BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BE4"))) PPC_WEAK_FUNC(sub_83BC6BE4);
PPC_FUNC_IMPL(__imp__sub_83BC6BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BE8"))) PPC_WEAK_FUNC(sub_83BC6BE8);
PPC_FUNC_IMPL(__imp__sub_83BC6BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2680
	ctx.r3.s64 = ctx.r11.s64 + 2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6BF4"))) PPC_WEAK_FUNC(sub_83BC6BF4);
PPC_FUNC_IMPL(__imp__sub_83BC6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6BF8"))) PPC_WEAK_FUNC(sub_83BC6BF8);
PPC_FUNC_IMPL(__imp__sub_83BC6BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2688
	ctx.r3.s64 = ctx.r11.s64 + 2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6C04"))) PPC_WEAK_FUNC(sub_83BC6C04);
PPC_FUNC_IMPL(__imp__sub_83BC6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6C08"))) PPC_WEAK_FUNC(sub_83BC6C08);
PPC_FUNC_IMPL(__imp__sub_83BC6C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6C14"))) PPC_WEAK_FUNC(sub_83BC6C14);
PPC_FUNC_IMPL(__imp__sub_83BC6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6C18"))) PPC_WEAK_FUNC(sub_83BC6C18);
PPC_FUNC_IMPL(__imp__sub_83BC6C18) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// bl 0x83523120
	ctx.lr = 0x83BC6C30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2704
	ctx.r3.s64 = ctx.r10.s64 + 2704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6C3C;
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

__attribute__((alias("__imp__sub_83BC6C4C"))) PPC_WEAK_FUNC(sub_83BC6C4C);
PPC_FUNC_IMPL(__imp__sub_83BC6C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6C50"))) PPC_WEAK_FUNC(sub_83BC6C50);
PPC_FUNC_IMPL(__imp__sub_83BC6C50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13512
	ctx.r7.s64 = ctx.r8.s64 + -13512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6C78"))) PPC_WEAK_FUNC(sub_83BC6C78);
PPC_FUNC_IMPL(__imp__sub_83BC6C78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,7208
	ctx.r6.s64 = ctx.r7.s64 + 7208;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13512);
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
	// std r9,7208(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7208, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6CC0"))) PPC_WEAK_FUNC(sub_83BC6CC0);
PPC_FUNC_IMPL(__imp__sub_83BC6CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2720
	ctx.r3.s64 = ctx.r11.s64 + 2720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6CCC"))) PPC_WEAK_FUNC(sub_83BC6CCC);
PPC_FUNC_IMPL(__imp__sub_83BC6CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6CD0"))) PPC_WEAK_FUNC(sub_83BC6CD0);
PPC_FUNC_IMPL(__imp__sub_83BC6CD0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// bl 0x8259af80
	ctx.lr = 0x83BC6CE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2736
	ctx.r3.s64 = ctx.r10.s64 + 2736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6CF4;
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

__attribute__((alias("__imp__sub_83BC6D04"))) PPC_WEAK_FUNC(sub_83BC6D04);
PPC_FUNC_IMPL(__imp__sub_83BC6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D08"))) PPC_WEAK_FUNC(sub_83BC6D08);
PPC_FUNC_IMPL(__imp__sub_83BC6D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13524
	ctx.r11.s64 = ctx.r8.s64 + -13524;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,7184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7184);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2728
	ctx.r3.s64 = ctx.r6.s64 + 2728;
	// stw r10,-13524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D38"))) PPC_WEAK_FUNC(sub_83BC6D38);
PPC_FUNC_IMPL(__imp__sub_83BC6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D44"))) PPC_WEAK_FUNC(sub_83BC6D44);
PPC_FUNC_IMPL(__imp__sub_83BC6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D48"))) PPC_WEAK_FUNC(sub_83BC6D48);
PPC_FUNC_IMPL(__imp__sub_83BC6D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D54"))) PPC_WEAK_FUNC(sub_83BC6D54);
PPC_FUNC_IMPL(__imp__sub_83BC6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D58"))) PPC_WEAK_FUNC(sub_83BC6D58);
PPC_FUNC_IMPL(__imp__sub_83BC6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2760
	ctx.r3.s64 = ctx.r11.s64 + 2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D64"))) PPC_WEAK_FUNC(sub_83BC6D64);
PPC_FUNC_IMPL(__imp__sub_83BC6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D68"))) PPC_WEAK_FUNC(sub_83BC6D68);
PPC_FUNC_IMPL(__imp__sub_83BC6D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D74"))) PPC_WEAK_FUNC(sub_83BC6D74);
PPC_FUNC_IMPL(__imp__sub_83BC6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D78"))) PPC_WEAK_FUNC(sub_83BC6D78);
PPC_FUNC_IMPL(__imp__sub_83BC6D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2776
	ctx.r3.s64 = ctx.r11.s64 + 2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D84"))) PPC_WEAK_FUNC(sub_83BC6D84);
PPC_FUNC_IMPL(__imp__sub_83BC6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D88"))) PPC_WEAK_FUNC(sub_83BC6D88);
PPC_FUNC_IMPL(__imp__sub_83BC6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2784
	ctx.r3.s64 = ctx.r11.s64 + 2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6D94"))) PPC_WEAK_FUNC(sub_83BC6D94);
PPC_FUNC_IMPL(__imp__sub_83BC6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6D98"))) PPC_WEAK_FUNC(sub_83BC6D98);
PPC_FUNC_IMPL(__imp__sub_83BC6D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DA4"))) PPC_WEAK_FUNC(sub_83BC6DA4);
PPC_FUNC_IMPL(__imp__sub_83BC6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DA8"))) PPC_WEAK_FUNC(sub_83BC6DA8);
PPC_FUNC_IMPL(__imp__sub_83BC6DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2800
	ctx.r3.s64 = ctx.r11.s64 + 2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DB4"))) PPC_WEAK_FUNC(sub_83BC6DB4);
PPC_FUNC_IMPL(__imp__sub_83BC6DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DB8"))) PPC_WEAK_FUNC(sub_83BC6DB8);
PPC_FUNC_IMPL(__imp__sub_83BC6DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DC4"))) PPC_WEAK_FUNC(sub_83BC6DC4);
PPC_FUNC_IMPL(__imp__sub_83BC6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DC8"))) PPC_WEAK_FUNC(sub_83BC6DC8);
PPC_FUNC_IMPL(__imp__sub_83BC6DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DD4"))) PPC_WEAK_FUNC(sub_83BC6DD4);
PPC_FUNC_IMPL(__imp__sub_83BC6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DD8"))) PPC_WEAK_FUNC(sub_83BC6DD8);
PPC_FUNC_IMPL(__imp__sub_83BC6DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DE4"))) PPC_WEAK_FUNC(sub_83BC6DE4);
PPC_FUNC_IMPL(__imp__sub_83BC6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DE8"))) PPC_WEAK_FUNC(sub_83BC6DE8);
PPC_FUNC_IMPL(__imp__sub_83BC6DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6DF4"))) PPC_WEAK_FUNC(sub_83BC6DF4);
PPC_FUNC_IMPL(__imp__sub_83BC6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6DF8"))) PPC_WEAK_FUNC(sub_83BC6DF8);
PPC_FUNC_IMPL(__imp__sub_83BC6DF8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// bl 0x83523120
	ctx.lr = 0x83BC6E10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2840
	ctx.r3.s64 = ctx.r10.s64 + 2840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6E1C;
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

__attribute__((alias("__imp__sub_83BC6E2C"))) PPC_WEAK_FUNC(sub_83BC6E2C);
PPC_FUNC_IMPL(__imp__sub_83BC6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6E30"))) PPC_WEAK_FUNC(sub_83BC6E30);
PPC_FUNC_IMPL(__imp__sub_83BC6E30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13144
	ctx.r7.s64 = ctx.r8.s64 + -13144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6E58"))) PPC_WEAK_FUNC(sub_83BC6E58);
PPC_FUNC_IMPL(__imp__sub_83BC6E58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,7336
	ctx.r6.s64 = ctx.r7.s64 + 7336;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13144);
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
	// std r9,7336(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC6EA0"))) PPC_WEAK_FUNC(sub_83BC6EA0);
PPC_FUNC_IMPL(__imp__sub_83BC6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2856
	ctx.r3.s64 = ctx.r11.s64 + 2856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6EAC"))) PPC_WEAK_FUNC(sub_83BC6EAC);
PPC_FUNC_IMPL(__imp__sub_83BC6EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6EB0"))) PPC_WEAK_FUNC(sub_83BC6EB0);
PPC_FUNC_IMPL(__imp__sub_83BC6EB0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-13136
	ctx.r3.s64 = ctx.r11.s64 + -13136;
	// bl 0x8259af80
	ctx.lr = 0x83BC6EC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2872
	ctx.r3.s64 = ctx.r10.s64 + 2872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6ED4;
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

__attribute__((alias("__imp__sub_83BC6EE4"))) PPC_WEAK_FUNC(sub_83BC6EE4);
PPC_FUNC_IMPL(__imp__sub_83BC6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6EE8"))) PPC_WEAK_FUNC(sub_83BC6EE8);
PPC_FUNC_IMPL(__imp__sub_83BC6EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13156
	ctx.r11.s64 = ctx.r8.s64 + -13156;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,7312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2864
	ctx.r3.s64 = ctx.r6.s64 + 2864;
	// stw r10,-13156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F18"))) PPC_WEAK_FUNC(sub_83BC6F18);
PPC_FUNC_IMPL(__imp__sub_83BC6F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F24"))) PPC_WEAK_FUNC(sub_83BC6F24);
PPC_FUNC_IMPL(__imp__sub_83BC6F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F28"))) PPC_WEAK_FUNC(sub_83BC6F28);
PPC_FUNC_IMPL(__imp__sub_83BC6F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F34"))) PPC_WEAK_FUNC(sub_83BC6F34);
PPC_FUNC_IMPL(__imp__sub_83BC6F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F38"))) PPC_WEAK_FUNC(sub_83BC6F38);
PPC_FUNC_IMPL(__imp__sub_83BC6F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F44"))) PPC_WEAK_FUNC(sub_83BC6F44);
PPC_FUNC_IMPL(__imp__sub_83BC6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F48"))) PPC_WEAK_FUNC(sub_83BC6F48);
PPC_FUNC_IMPL(__imp__sub_83BC6F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2904
	ctx.r3.s64 = ctx.r11.s64 + 2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F54"))) PPC_WEAK_FUNC(sub_83BC6F54);
PPC_FUNC_IMPL(__imp__sub_83BC6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F58"))) PPC_WEAK_FUNC(sub_83BC6F58);
PPC_FUNC_IMPL(__imp__sub_83BC6F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F64"))) PPC_WEAK_FUNC(sub_83BC6F64);
PPC_FUNC_IMPL(__imp__sub_83BC6F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F68"))) PPC_WEAK_FUNC(sub_83BC6F68);
PPC_FUNC_IMPL(__imp__sub_83BC6F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2920
	ctx.r3.s64 = ctx.r11.s64 + 2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F74"))) PPC_WEAK_FUNC(sub_83BC6F74);
PPC_FUNC_IMPL(__imp__sub_83BC6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F78"))) PPC_WEAK_FUNC(sub_83BC6F78);
PPC_FUNC_IMPL(__imp__sub_83BC6F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2928
	ctx.r3.s64 = ctx.r11.s64 + 2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F84"))) PPC_WEAK_FUNC(sub_83BC6F84);
PPC_FUNC_IMPL(__imp__sub_83BC6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F88"))) PPC_WEAK_FUNC(sub_83BC6F88);
PPC_FUNC_IMPL(__imp__sub_83BC6F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6F94"))) PPC_WEAK_FUNC(sub_83BC6F94);
PPC_FUNC_IMPL(__imp__sub_83BC6F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6F98"))) PPC_WEAK_FUNC(sub_83BC6F98);
PPC_FUNC_IMPL(__imp__sub_83BC6F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6FA4"))) PPC_WEAK_FUNC(sub_83BC6FA4);
PPC_FUNC_IMPL(__imp__sub_83BC6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6FA8"))) PPC_WEAK_FUNC(sub_83BC6FA8);
PPC_FUNC_IMPL(__imp__sub_83BC6FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2952
	ctx.r3.s64 = ctx.r11.s64 + 2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6FB4"))) PPC_WEAK_FUNC(sub_83BC6FB4);
PPC_FUNC_IMPL(__imp__sub_83BC6FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6FB8"))) PPC_WEAK_FUNC(sub_83BC6FB8);
PPC_FUNC_IMPL(__imp__sub_83BC6FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6FC4"))) PPC_WEAK_FUNC(sub_83BC6FC4);
PPC_FUNC_IMPL(__imp__sub_83BC6FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6FC8"))) PPC_WEAK_FUNC(sub_83BC6FC8);
PPC_FUNC_IMPL(__imp__sub_83BC6FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC6FD4"))) PPC_WEAK_FUNC(sub_83BC6FD4);
PPC_FUNC_IMPL(__imp__sub_83BC6FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC6FD8"))) PPC_WEAK_FUNC(sub_83BC6FD8);
PPC_FUNC_IMPL(__imp__sub_83BC6FD8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// bl 0x83523120
	ctx.lr = 0x83BC6FF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,2976
	ctx.r3.s64 = ctx.r10.s64 + 2976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC6FFC;
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

__attribute__((alias("__imp__sub_83BC700C"))) PPC_WEAK_FUNC(sub_83BC700C);
PPC_FUNC_IMPL(__imp__sub_83BC700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7010"))) PPC_WEAK_FUNC(sub_83BC7010);
PPC_FUNC_IMPL(__imp__sub_83BC7010) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12776
	ctx.r7.s64 = ctx.r8.s64 + -12776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12776(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7038"))) PPC_WEAK_FUNC(sub_83BC7038);
PPC_FUNC_IMPL(__imp__sub_83BC7038) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,7672
	ctx.r6.s64 = ctx.r7.s64 + 7672;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7600(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7600);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12776);
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
	// std r9,7672(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7080"))) PPC_WEAK_FUNC(sub_83BC7080);
PPC_FUNC_IMPL(__imp__sub_83BC7080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,2992
	ctx.r3.s64 = ctx.r11.s64 + 2992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC708C"))) PPC_WEAK_FUNC(sub_83BC708C);
PPC_FUNC_IMPL(__imp__sub_83BC708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7090"))) PPC_WEAK_FUNC(sub_83BC7090);
PPC_FUNC_IMPL(__imp__sub_83BC7090) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// bl 0x8259af80
	ctx.lr = 0x83BC70A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3008
	ctx.r3.s64 = ctx.r10.s64 + 3008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC70B4;
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

__attribute__((alias("__imp__sub_83BC70C4"))) PPC_WEAK_FUNC(sub_83BC70C4);
PPC_FUNC_IMPL(__imp__sub_83BC70C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC70C8"))) PPC_WEAK_FUNC(sub_83BC70C8);
PPC_FUNC_IMPL(__imp__sub_83BC70C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12788
	ctx.r11.s64 = ctx.r8.s64 + -12788;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,7648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7648);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3000
	ctx.r3.s64 = ctx.r6.s64 + 3000;
	// stw r10,-12788(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12788, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC70F8"))) PPC_WEAK_FUNC(sub_83BC70F8);
PPC_FUNC_IMPL(__imp__sub_83BC70F8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r30,r11,24124
	ctx.r30.s64 = ctx.r11.s64 + 24124;
	// addi r31,r10,7704
	ctx.r31.s64 = ctx.r10.s64 + 7704;
	// addi r4,r30,364
	ctx.r4.s64 = ctx.r30.s64 + 364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// bl 0x8259cc28
	ctx.lr = 0x83BC712C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8259cc28
	ctx.lr = 0x83BC7154;
	sub_8259CC28(ctx, base);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,531
	ctx.r11.u64 = ctx.r11.u64 | 531;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// li r5,57
	ctx.r5.s64 = 57;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8259cc28
	ctx.lr = 0x83BC7188;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r4,r30,248
	ctx.r4.s64 = ctx.r30.s64 + 248;
	// stb r9,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r9.u8);
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8259cc28
	ctx.lr = 0x83BC71B0;
	sub_8259CC28(ctx, base);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,532
	ctx.r11.u64 = ctx.r11.u64 | 532;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// li r5,51
	ctx.r5.s64 = 51;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8259cc28
	ctx.lr = 0x83BC71E4;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// stb r9,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r9.u8);
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x8259cc28
	ctx.lr = 0x83BC720C;
	sub_8259CC28(ctx, base);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,533
	ctx.r11.u64 = ctx.r11.u64 | 533;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x8259cc28
	ctx.lr = 0x83BC7240;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x83BC7268;
	sub_8259CC28(ctx, base);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,534
	ctx.r11.u64 = ctx.r11.u64 | 534;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x83BC729C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x8259cc28
	ctx.lr = 0x83BC72C4;
	sub_8259CC28(ctx, base);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// ori r11,r11,535
	ctx.r11.u64 = ctx.r11.u64 | 535;
	// addi r3,r9,3016
	ctx.r3.s64 = ctx.r9.s64 + 3016;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83BC72DC;
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

__attribute__((alias("__imp__sub_83BC72F4"))) PPC_WEAK_FUNC(sub_83BC72F4);
PPC_FUNC_IMPL(__imp__sub_83BC72F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC72F8"))) PPC_WEAK_FUNC(sub_83BC72F8);
PPC_FUNC_IMPL(__imp__sub_83BC72F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3160
	ctx.r3.s64 = ctx.r11.s64 + 3160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7304"))) PPC_WEAK_FUNC(sub_83BC7304);
PPC_FUNC_IMPL(__imp__sub_83BC7304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7308"))) PPC_WEAK_FUNC(sub_83BC7308);
PPC_FUNC_IMPL(__imp__sub_83BC7308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3168
	ctx.r3.s64 = ctx.r11.s64 + 3168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7314"))) PPC_WEAK_FUNC(sub_83BC7314);
PPC_FUNC_IMPL(__imp__sub_83BC7314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7318"))) PPC_WEAK_FUNC(sub_83BC7318);
PPC_FUNC_IMPL(__imp__sub_83BC7318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3176
	ctx.r3.s64 = ctx.r11.s64 + 3176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7324"))) PPC_WEAK_FUNC(sub_83BC7324);
PPC_FUNC_IMPL(__imp__sub_83BC7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7328"))) PPC_WEAK_FUNC(sub_83BC7328);
PPC_FUNC_IMPL(__imp__sub_83BC7328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3184
	ctx.r3.s64 = ctx.r11.s64 + 3184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7334"))) PPC_WEAK_FUNC(sub_83BC7334);
PPC_FUNC_IMPL(__imp__sub_83BC7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7338"))) PPC_WEAK_FUNC(sub_83BC7338);
PPC_FUNC_IMPL(__imp__sub_83BC7338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3192
	ctx.r3.s64 = ctx.r11.s64 + 3192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7344"))) PPC_WEAK_FUNC(sub_83BC7344);
PPC_FUNC_IMPL(__imp__sub_83BC7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7348"))) PPC_WEAK_FUNC(sub_83BC7348);
PPC_FUNC_IMPL(__imp__sub_83BC7348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7354"))) PPC_WEAK_FUNC(sub_83BC7354);
PPC_FUNC_IMPL(__imp__sub_83BC7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7358"))) PPC_WEAK_FUNC(sub_83BC7358);
PPC_FUNC_IMPL(__imp__sub_83BC7358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3208
	ctx.r3.s64 = ctx.r11.s64 + 3208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7364"))) PPC_WEAK_FUNC(sub_83BC7364);
PPC_FUNC_IMPL(__imp__sub_83BC7364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7368"))) PPC_WEAK_FUNC(sub_83BC7368);
PPC_FUNC_IMPL(__imp__sub_83BC7368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3216
	ctx.r3.s64 = ctx.r11.s64 + 3216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7374"))) PPC_WEAK_FUNC(sub_83BC7374);
PPC_FUNC_IMPL(__imp__sub_83BC7374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7378"))) PPC_WEAK_FUNC(sub_83BC7378);
PPC_FUNC_IMPL(__imp__sub_83BC7378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7384"))) PPC_WEAK_FUNC(sub_83BC7384);
PPC_FUNC_IMPL(__imp__sub_83BC7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7388"))) PPC_WEAK_FUNC(sub_83BC7388);
PPC_FUNC_IMPL(__imp__sub_83BC7388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3232
	ctx.r3.s64 = ctx.r11.s64 + 3232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7394"))) PPC_WEAK_FUNC(sub_83BC7394);
PPC_FUNC_IMPL(__imp__sub_83BC7394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7398"))) PPC_WEAK_FUNC(sub_83BC7398);
PPC_FUNC_IMPL(__imp__sub_83BC7398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3240
	ctx.r3.s64 = ctx.r11.s64 + 3240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC73A4"))) PPC_WEAK_FUNC(sub_83BC73A4);
PPC_FUNC_IMPL(__imp__sub_83BC73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC73A8"))) PPC_WEAK_FUNC(sub_83BC73A8);
PPC_FUNC_IMPL(__imp__sub_83BC73A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3248
	ctx.r3.s64 = ctx.r11.s64 + 3248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC73B4"))) PPC_WEAK_FUNC(sub_83BC73B4);
PPC_FUNC_IMPL(__imp__sub_83BC73B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC73B8"))) PPC_WEAK_FUNC(sub_83BC73B8);
PPC_FUNC_IMPL(__imp__sub_83BC73B8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// bl 0x83523120
	ctx.lr = 0x83BC73D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3256
	ctx.r3.s64 = ctx.r10.s64 + 3256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC73DC;
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

__attribute__((alias("__imp__sub_83BC73EC"))) PPC_WEAK_FUNC(sub_83BC73EC);
PPC_FUNC_IMPL(__imp__sub_83BC73EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC73F0"))) PPC_WEAK_FUNC(sub_83BC73F0);
PPC_FUNC_IMPL(__imp__sub_83BC73F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12408
	ctx.r7.s64 = ctx.r8.s64 + -12408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7418"))) PPC_WEAK_FUNC(sub_83BC7418);
PPC_FUNC_IMPL(__imp__sub_83BC7418) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,8240
	ctx.r6.s64 = ctx.r7.s64 + 8240;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12408);
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
	// std r9,8240(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7460"))) PPC_WEAK_FUNC(sub_83BC7460);
PPC_FUNC_IMPL(__imp__sub_83BC7460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3272
	ctx.r3.s64 = ctx.r11.s64 + 3272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC746C"))) PPC_WEAK_FUNC(sub_83BC746C);
PPC_FUNC_IMPL(__imp__sub_83BC746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7470"))) PPC_WEAK_FUNC(sub_83BC7470);
PPC_FUNC_IMPL(__imp__sub_83BC7470) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// bl 0x8259af80
	ctx.lr = 0x83BC7488;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3288
	ctx.r3.s64 = ctx.r10.s64 + 3288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7494;
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

__attribute__((alias("__imp__sub_83BC74A4"))) PPC_WEAK_FUNC(sub_83BC74A4);
PPC_FUNC_IMPL(__imp__sub_83BC74A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC74A8"))) PPC_WEAK_FUNC(sub_83BC74A8);
PPC_FUNC_IMPL(__imp__sub_83BC74A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12420
	ctx.r11.s64 = ctx.r8.s64 + -12420;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,8216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3280
	ctx.r3.s64 = ctx.r6.s64 + 3280;
	// stw r10,-12420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12420, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC74D8"))) PPC_WEAK_FUNC(sub_83BC74D8);
PPC_FUNC_IMPL(__imp__sub_83BC74D8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,26324
	ctx.r4.s64 = ctx.r11.s64 + 26324;
	// addi r3,r10,8264
	ctx.r3.s64 = ctx.r10.s64 + 8264;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC74FC;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,3296
	ctx.r3.s64 = ctx.r9.s64 + 3296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7508;
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

__attribute__((alias("__imp__sub_83BC7518"))) PPC_WEAK_FUNC(sub_83BC7518);
PPC_FUNC_IMPL(__imp__sub_83BC7518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3400
	ctx.r3.s64 = ctx.r11.s64 + 3400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7524"))) PPC_WEAK_FUNC(sub_83BC7524);
PPC_FUNC_IMPL(__imp__sub_83BC7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7528"))) PPC_WEAK_FUNC(sub_83BC7528);
PPC_FUNC_IMPL(__imp__sub_83BC7528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3408
	ctx.r3.s64 = ctx.r11.s64 + 3408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7534"))) PPC_WEAK_FUNC(sub_83BC7534);
PPC_FUNC_IMPL(__imp__sub_83BC7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7538"))) PPC_WEAK_FUNC(sub_83BC7538);
PPC_FUNC_IMPL(__imp__sub_83BC7538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3416
	ctx.r3.s64 = ctx.r11.s64 + 3416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7544"))) PPC_WEAK_FUNC(sub_83BC7544);
PPC_FUNC_IMPL(__imp__sub_83BC7544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7548"))) PPC_WEAK_FUNC(sub_83BC7548);
PPC_FUNC_IMPL(__imp__sub_83BC7548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3424
	ctx.r3.s64 = ctx.r11.s64 + 3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7554"))) PPC_WEAK_FUNC(sub_83BC7554);
PPC_FUNC_IMPL(__imp__sub_83BC7554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7558"))) PPC_WEAK_FUNC(sub_83BC7558);
PPC_FUNC_IMPL(__imp__sub_83BC7558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3432
	ctx.r3.s64 = ctx.r11.s64 + 3432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7564"))) PPC_WEAK_FUNC(sub_83BC7564);
PPC_FUNC_IMPL(__imp__sub_83BC7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7568"))) PPC_WEAK_FUNC(sub_83BC7568);
PPC_FUNC_IMPL(__imp__sub_83BC7568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3440
	ctx.r3.s64 = ctx.r11.s64 + 3440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7574"))) PPC_WEAK_FUNC(sub_83BC7574);
PPC_FUNC_IMPL(__imp__sub_83BC7574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7578"))) PPC_WEAK_FUNC(sub_83BC7578);
PPC_FUNC_IMPL(__imp__sub_83BC7578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7584"))) PPC_WEAK_FUNC(sub_83BC7584);
PPC_FUNC_IMPL(__imp__sub_83BC7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7588"))) PPC_WEAK_FUNC(sub_83BC7588);
PPC_FUNC_IMPL(__imp__sub_83BC7588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3456
	ctx.r3.s64 = ctx.r11.s64 + 3456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7594"))) PPC_WEAK_FUNC(sub_83BC7594);
PPC_FUNC_IMPL(__imp__sub_83BC7594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7598"))) PPC_WEAK_FUNC(sub_83BC7598);
PPC_FUNC_IMPL(__imp__sub_83BC7598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3464
	ctx.r3.s64 = ctx.r11.s64 + 3464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC75A4"))) PPC_WEAK_FUNC(sub_83BC75A4);
PPC_FUNC_IMPL(__imp__sub_83BC75A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC75A8"))) PPC_WEAK_FUNC(sub_83BC75A8);
PPC_FUNC_IMPL(__imp__sub_83BC75A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3472
	ctx.r3.s64 = ctx.r11.s64 + 3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC75B4"))) PPC_WEAK_FUNC(sub_83BC75B4);
PPC_FUNC_IMPL(__imp__sub_83BC75B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC75B8"))) PPC_WEAK_FUNC(sub_83BC75B8);
PPC_FUNC_IMPL(__imp__sub_83BC75B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3480
	ctx.r3.s64 = ctx.r11.s64 + 3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC75C4"))) PPC_WEAK_FUNC(sub_83BC75C4);
PPC_FUNC_IMPL(__imp__sub_83BC75C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC75C8"))) PPC_WEAK_FUNC(sub_83BC75C8);
PPC_FUNC_IMPL(__imp__sub_83BC75C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC75D4"))) PPC_WEAK_FUNC(sub_83BC75D4);
PPC_FUNC_IMPL(__imp__sub_83BC75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC75D8"))) PPC_WEAK_FUNC(sub_83BC75D8);
PPC_FUNC_IMPL(__imp__sub_83BC75D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12040
	ctx.r7.s64 = ctx.r8.s64 + -12040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7600"))) PPC_WEAK_FUNC(sub_83BC7600);
PPC_FUNC_IMPL(__imp__sub_83BC7600) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,8396
	ctx.r6.s64 = ctx.r7.s64 + 8396;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12040);
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
	// std r9,8396(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8396, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7648"))) PPC_WEAK_FUNC(sub_83BC7648);
PPC_FUNC_IMPL(__imp__sub_83BC7648) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// bl 0x83523120
	ctx.lr = 0x83BC7660;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3496
	ctx.r3.s64 = ctx.r10.s64 + 3496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC766C;
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

__attribute__((alias("__imp__sub_83BC767C"))) PPC_WEAK_FUNC(sub_83BC767C);
PPC_FUNC_IMPL(__imp__sub_83BC767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7680"))) PPC_WEAK_FUNC(sub_83BC7680);
PPC_FUNC_IMPL(__imp__sub_83BC7680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3512
	ctx.r3.s64 = ctx.r11.s64 + 3512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC768C"))) PPC_WEAK_FUNC(sub_83BC768C);
PPC_FUNC_IMPL(__imp__sub_83BC768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7690"))) PPC_WEAK_FUNC(sub_83BC7690);
PPC_FUNC_IMPL(__imp__sub_83BC7690) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// bl 0x8259af80
	ctx.lr = 0x83BC76A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3528
	ctx.r3.s64 = ctx.r10.s64 + 3528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC76B4;
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

__attribute__((alias("__imp__sub_83BC76C4"))) PPC_WEAK_FUNC(sub_83BC76C4);
PPC_FUNC_IMPL(__imp__sub_83BC76C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC76C8"))) PPC_WEAK_FUNC(sub_83BC76C8);
PPC_FUNC_IMPL(__imp__sub_83BC76C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12052
	ctx.r11.s64 = ctx.r8.s64 + -12052;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,8372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8372);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3520
	ctx.r3.s64 = ctx.r6.s64 + 3520;
	// stw r10,-12052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC76F8"))) PPC_WEAK_FUNC(sub_83BC76F8);
PPC_FUNC_IMPL(__imp__sub_83BC76F8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,27232
	ctx.r4.s64 = ctx.r11.s64 + 27232;
	// addi r3,r10,8420
	ctx.r3.s64 = ctx.r10.s64 + 8420;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC771C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,3536
	ctx.r3.s64 = ctx.r9.s64 + 3536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7728;
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

__attribute__((alias("__imp__sub_83BC7738"))) PPC_WEAK_FUNC(sub_83BC7738);
PPC_FUNC_IMPL(__imp__sub_83BC7738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3640
	ctx.r3.s64 = ctx.r11.s64 + 3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7744"))) PPC_WEAK_FUNC(sub_83BC7744);
PPC_FUNC_IMPL(__imp__sub_83BC7744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7748"))) PPC_WEAK_FUNC(sub_83BC7748);
PPC_FUNC_IMPL(__imp__sub_83BC7748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7754"))) PPC_WEAK_FUNC(sub_83BC7754);
PPC_FUNC_IMPL(__imp__sub_83BC7754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7758"))) PPC_WEAK_FUNC(sub_83BC7758);
PPC_FUNC_IMPL(__imp__sub_83BC7758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7764"))) PPC_WEAK_FUNC(sub_83BC7764);
PPC_FUNC_IMPL(__imp__sub_83BC7764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7768"))) PPC_WEAK_FUNC(sub_83BC7768);
PPC_FUNC_IMPL(__imp__sub_83BC7768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7774"))) PPC_WEAK_FUNC(sub_83BC7774);
PPC_FUNC_IMPL(__imp__sub_83BC7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7778"))) PPC_WEAK_FUNC(sub_83BC7778);
PPC_FUNC_IMPL(__imp__sub_83BC7778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7784"))) PPC_WEAK_FUNC(sub_83BC7784);
PPC_FUNC_IMPL(__imp__sub_83BC7784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7788"))) PPC_WEAK_FUNC(sub_83BC7788);
PPC_FUNC_IMPL(__imp__sub_83BC7788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7794"))) PPC_WEAK_FUNC(sub_83BC7794);
PPC_FUNC_IMPL(__imp__sub_83BC7794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7798"))) PPC_WEAK_FUNC(sub_83BC7798);
PPC_FUNC_IMPL(__imp__sub_83BC7798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3688
	ctx.r3.s64 = ctx.r11.s64 + 3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77A4"))) PPC_WEAK_FUNC(sub_83BC77A4);
PPC_FUNC_IMPL(__imp__sub_83BC77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC77A8"))) PPC_WEAK_FUNC(sub_83BC77A8);
PPC_FUNC_IMPL(__imp__sub_83BC77A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77B4"))) PPC_WEAK_FUNC(sub_83BC77B4);
PPC_FUNC_IMPL(__imp__sub_83BC77B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC77B8"))) PPC_WEAK_FUNC(sub_83BC77B8);
PPC_FUNC_IMPL(__imp__sub_83BC77B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3704
	ctx.r3.s64 = ctx.r11.s64 + 3704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77C4"))) PPC_WEAK_FUNC(sub_83BC77C4);
PPC_FUNC_IMPL(__imp__sub_83BC77C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

