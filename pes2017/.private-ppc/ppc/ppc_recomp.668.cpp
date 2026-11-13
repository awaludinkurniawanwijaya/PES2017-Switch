#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BEA9D4"))) PPC_WEAK_FUNC(sub_83BEA9D4);
PPC_FUNC_IMPL(__imp__sub_83BEA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9D8"))) PPC_WEAK_FUNC(sub_83BEA9D8);
PPC_FUNC_IMPL(__imp__sub_83BEA9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19336
	ctx.r3.s64 = ctx.r11.s64 + -19336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA9E4"))) PPC_WEAK_FUNC(sub_83BEA9E4);
PPC_FUNC_IMPL(__imp__sub_83BEA9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9E8"))) PPC_WEAK_FUNC(sub_83BEA9E8);
PPC_FUNC_IMPL(__imp__sub_83BEA9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA9F4"))) PPC_WEAK_FUNC(sub_83BEA9F4);
PPC_FUNC_IMPL(__imp__sub_83BEA9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9F8"))) PPC_WEAK_FUNC(sub_83BEA9F8);
PPC_FUNC_IMPL(__imp__sub_83BEA9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19320
	ctx.r3.s64 = ctx.r11.s64 + -19320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAA04"))) PPC_WEAK_FUNC(sub_83BEAA04);
PPC_FUNC_IMPL(__imp__sub_83BEAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA08"))) PPC_WEAK_FUNC(sub_83BEAA08);
PPC_FUNC_IMPL(__imp__sub_83BEAA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19312
	ctx.r3.s64 = ctx.r11.s64 + -19312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAA14"))) PPC_WEAK_FUNC(sub_83BEAA14);
PPC_FUNC_IMPL(__imp__sub_83BEAA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA18"))) PPC_WEAK_FUNC(sub_83BEAA18);
PPC_FUNC_IMPL(__imp__sub_83BEAA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19304
	ctx.r3.s64 = ctx.r11.s64 + -19304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAA24"))) PPC_WEAK_FUNC(sub_83BEAA24);
PPC_FUNC_IMPL(__imp__sub_83BEAA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA28"))) PPC_WEAK_FUNC(sub_83BEAA28);
PPC_FUNC_IMPL(__imp__sub_83BEAA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19296
	ctx.r3.s64 = ctx.r11.s64 + -19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAA34"))) PPC_WEAK_FUNC(sub_83BEAA34);
PPC_FUNC_IMPL(__imp__sub_83BEAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA38"))) PPC_WEAK_FUNC(sub_83BEAA38);
PPC_FUNC_IMPL(__imp__sub_83BEAA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19288
	ctx.r3.s64 = ctx.r11.s64 + -19288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAA44"))) PPC_WEAK_FUNC(sub_83BEAA44);
PPC_FUNC_IMPL(__imp__sub_83BEAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA48"))) PPC_WEAK_FUNC(sub_83BEAA48);
PPC_FUNC_IMPL(__imp__sub_83BEAA48) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// bl 0x83523120
	ctx.lr = 0x83BEAA60;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19280
	ctx.r3.s64 = ctx.r10.s64 + -19280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAA6C;
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

__attribute__((alias("__imp__sub_83BEAA7C"))) PPC_WEAK_FUNC(sub_83BEAA7C);
PPC_FUNC_IMPL(__imp__sub_83BEAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAA80"))) PPC_WEAK_FUNC(sub_83BEAA80);
PPC_FUNC_IMPL(__imp__sub_83BEAA80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29528
	ctx.r7.s64 = ctx.r8.s64 + 29528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEAAA8"))) PPC_WEAK_FUNC(sub_83BEAAA8);
PPC_FUNC_IMPL(__imp__sub_83BEAAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10752
	ctx.r6.s64 = ctx.r7.s64 + -10752;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29528);
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
	// std r9,-10752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEAAF0"))) PPC_WEAK_FUNC(sub_83BEAAF0);
PPC_FUNC_IMPL(__imp__sub_83BEAAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19264
	ctx.r3.s64 = ctx.r11.s64 + -19264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAAFC"))) PPC_WEAK_FUNC(sub_83BEAAFC);
PPC_FUNC_IMPL(__imp__sub_83BEAAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAB00"))) PPC_WEAK_FUNC(sub_83BEAB00);
PPC_FUNC_IMPL(__imp__sub_83BEAB00) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29536
	ctx.r3.s64 = ctx.r11.s64 + 29536;
	// bl 0x8259af80
	ctx.lr = 0x83BEAB18;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19248
	ctx.r3.s64 = ctx.r10.s64 + -19248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAB24;
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

__attribute__((alias("__imp__sub_83BEAB34"))) PPC_WEAK_FUNC(sub_83BEAB34);
PPC_FUNC_IMPL(__imp__sub_83BEAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAB38"))) PPC_WEAK_FUNC(sub_83BEAB38);
PPC_FUNC_IMPL(__imp__sub_83BEAB38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29516
	ctx.r11.s64 = ctx.r8.s64 + 29516;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19256
	ctx.r3.s64 = ctx.r6.s64 + -19256;
	// stw r10,29516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAB68"))) PPC_WEAK_FUNC(sub_83BEAB68);
PPC_FUNC_IMPL(__imp__sub_83BEAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19240
	ctx.r3.s64 = ctx.r11.s64 + -19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAB74"))) PPC_WEAK_FUNC(sub_83BEAB74);
PPC_FUNC_IMPL(__imp__sub_83BEAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAB78"))) PPC_WEAK_FUNC(sub_83BEAB78);
PPC_FUNC_IMPL(__imp__sub_83BEAB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAB84"))) PPC_WEAK_FUNC(sub_83BEAB84);
PPC_FUNC_IMPL(__imp__sub_83BEAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAB88"))) PPC_WEAK_FUNC(sub_83BEAB88);
PPC_FUNC_IMPL(__imp__sub_83BEAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAB94"))) PPC_WEAK_FUNC(sub_83BEAB94);
PPC_FUNC_IMPL(__imp__sub_83BEAB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAB98"))) PPC_WEAK_FUNC(sub_83BEAB98);
PPC_FUNC_IMPL(__imp__sub_83BEAB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABA4"))) PPC_WEAK_FUNC(sub_83BEABA4);
PPC_FUNC_IMPL(__imp__sub_83BEABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABA8"))) PPC_WEAK_FUNC(sub_83BEABA8);
PPC_FUNC_IMPL(__imp__sub_83BEABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABB4"))) PPC_WEAK_FUNC(sub_83BEABB4);
PPC_FUNC_IMPL(__imp__sub_83BEABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABB8"))) PPC_WEAK_FUNC(sub_83BEABB8);
PPC_FUNC_IMPL(__imp__sub_83BEABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABC4"))) PPC_WEAK_FUNC(sub_83BEABC4);
PPC_FUNC_IMPL(__imp__sub_83BEABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABC8"))) PPC_WEAK_FUNC(sub_83BEABC8);
PPC_FUNC_IMPL(__imp__sub_83BEABC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABD4"))) PPC_WEAK_FUNC(sub_83BEABD4);
PPC_FUNC_IMPL(__imp__sub_83BEABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABD8"))) PPC_WEAK_FUNC(sub_83BEABD8);
PPC_FUNC_IMPL(__imp__sub_83BEABD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABE4"))) PPC_WEAK_FUNC(sub_83BEABE4);
PPC_FUNC_IMPL(__imp__sub_83BEABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABE8"))) PPC_WEAK_FUNC(sub_83BEABE8);
PPC_FUNC_IMPL(__imp__sub_83BEABE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEABF4"))) PPC_WEAK_FUNC(sub_83BEABF4);
PPC_FUNC_IMPL(__imp__sub_83BEABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEABF8"))) PPC_WEAK_FUNC(sub_83BEABF8);
PPC_FUNC_IMPL(__imp__sub_83BEABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAC04"))) PPC_WEAK_FUNC(sub_83BEAC04);
PPC_FUNC_IMPL(__imp__sub_83BEAC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAC08"))) PPC_WEAK_FUNC(sub_83BEAC08);
PPC_FUNC_IMPL(__imp__sub_83BEAC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAC14"))) PPC_WEAK_FUNC(sub_83BEAC14);
PPC_FUNC_IMPL(__imp__sub_83BEAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAC18"))) PPC_WEAK_FUNC(sub_83BEAC18);
PPC_FUNC_IMPL(__imp__sub_83BEAC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAC24"))) PPC_WEAK_FUNC(sub_83BEAC24);
PPC_FUNC_IMPL(__imp__sub_83BEAC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAC28"))) PPC_WEAK_FUNC(sub_83BEAC28);
PPC_FUNC_IMPL(__imp__sub_83BEAC28) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29880
	ctx.r3.s64 = ctx.r11.s64 + 29880;
	// bl 0x83523120
	ctx.lr = 0x83BEAC40;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19144
	ctx.r3.s64 = ctx.r10.s64 + -19144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAC4C;
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

__attribute__((alias("__imp__sub_83BEAC5C"))) PPC_WEAK_FUNC(sub_83BEAC5C);
PPC_FUNC_IMPL(__imp__sub_83BEAC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAC60"))) PPC_WEAK_FUNC(sub_83BEAC60);
PPC_FUNC_IMPL(__imp__sub_83BEAC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29896
	ctx.r7.s64 = ctx.r8.s64 + 29896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEAC88"))) PPC_WEAK_FUNC(sub_83BEAC88);
PPC_FUNC_IMPL(__imp__sub_83BEAC88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10620
	ctx.r6.s64 = ctx.r7.s64 + -10620;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10692(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10692);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29896);
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
	// std r9,-10620(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10620, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEACD0"))) PPC_WEAK_FUNC(sub_83BEACD0);
PPC_FUNC_IMPL(__imp__sub_83BEACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEACDC"))) PPC_WEAK_FUNC(sub_83BEACDC);
PPC_FUNC_IMPL(__imp__sub_83BEACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEACE0"))) PPC_WEAK_FUNC(sub_83BEACE0);
PPC_FUNC_IMPL(__imp__sub_83BEACE0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29904
	ctx.r3.s64 = ctx.r11.s64 + 29904;
	// bl 0x8259af80
	ctx.lr = 0x83BEACF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19112
	ctx.r3.s64 = ctx.r10.s64 + -19112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAD04;
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

__attribute__((alias("__imp__sub_83BEAD14"))) PPC_WEAK_FUNC(sub_83BEAD14);
PPC_FUNC_IMPL(__imp__sub_83BEAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD18"))) PPC_WEAK_FUNC(sub_83BEAD18);
PPC_FUNC_IMPL(__imp__sub_83BEAD18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29884
	ctx.r11.s64 = ctx.r8.s64 + 29884;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10644);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19120
	ctx.r3.s64 = ctx.r6.s64 + -19120;
	// stw r10,29884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD48"))) PPC_WEAK_FUNC(sub_83BEAD48);
PPC_FUNC_IMPL(__imp__sub_83BEAD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD54"))) PPC_WEAK_FUNC(sub_83BEAD54);
PPC_FUNC_IMPL(__imp__sub_83BEAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD58"))) PPC_WEAK_FUNC(sub_83BEAD58);
PPC_FUNC_IMPL(__imp__sub_83BEAD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD64"))) PPC_WEAK_FUNC(sub_83BEAD64);
PPC_FUNC_IMPL(__imp__sub_83BEAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD68"))) PPC_WEAK_FUNC(sub_83BEAD68);
PPC_FUNC_IMPL(__imp__sub_83BEAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19088
	ctx.r3.s64 = ctx.r11.s64 + -19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD74"))) PPC_WEAK_FUNC(sub_83BEAD74);
PPC_FUNC_IMPL(__imp__sub_83BEAD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD78"))) PPC_WEAK_FUNC(sub_83BEAD78);
PPC_FUNC_IMPL(__imp__sub_83BEAD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD84"))) PPC_WEAK_FUNC(sub_83BEAD84);
PPC_FUNC_IMPL(__imp__sub_83BEAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD88"))) PPC_WEAK_FUNC(sub_83BEAD88);
PPC_FUNC_IMPL(__imp__sub_83BEAD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAD94"))) PPC_WEAK_FUNC(sub_83BEAD94);
PPC_FUNC_IMPL(__imp__sub_83BEAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAD98"))) PPC_WEAK_FUNC(sub_83BEAD98);
PPC_FUNC_IMPL(__imp__sub_83BEAD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADA4"))) PPC_WEAK_FUNC(sub_83BEADA4);
PPC_FUNC_IMPL(__imp__sub_83BEADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADA8"))) PPC_WEAK_FUNC(sub_83BEADA8);
PPC_FUNC_IMPL(__imp__sub_83BEADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19056
	ctx.r3.s64 = ctx.r11.s64 + -19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADB4"))) PPC_WEAK_FUNC(sub_83BEADB4);
PPC_FUNC_IMPL(__imp__sub_83BEADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADB8"))) PPC_WEAK_FUNC(sub_83BEADB8);
PPC_FUNC_IMPL(__imp__sub_83BEADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADC4"))) PPC_WEAK_FUNC(sub_83BEADC4);
PPC_FUNC_IMPL(__imp__sub_83BEADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADC8"))) PPC_WEAK_FUNC(sub_83BEADC8);
PPC_FUNC_IMPL(__imp__sub_83BEADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADD4"))) PPC_WEAK_FUNC(sub_83BEADD4);
PPC_FUNC_IMPL(__imp__sub_83BEADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADD8"))) PPC_WEAK_FUNC(sub_83BEADD8);
PPC_FUNC_IMPL(__imp__sub_83BEADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADE4"))) PPC_WEAK_FUNC(sub_83BEADE4);
PPC_FUNC_IMPL(__imp__sub_83BEADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADE8"))) PPC_WEAK_FUNC(sub_83BEADE8);
PPC_FUNC_IMPL(__imp__sub_83BEADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEADF4"))) PPC_WEAK_FUNC(sub_83BEADF4);
PPC_FUNC_IMPL(__imp__sub_83BEADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEADF8"))) PPC_WEAK_FUNC(sub_83BEADF8);
PPC_FUNC_IMPL(__imp__sub_83BEADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAE04"))) PPC_WEAK_FUNC(sub_83BEAE04);
PPC_FUNC_IMPL(__imp__sub_83BEAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAE08"))) PPC_WEAK_FUNC(sub_83BEAE08);
PPC_FUNC_IMPL(__imp__sub_83BEAE08) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// bl 0x83523120
	ctx.lr = 0x83BEAE20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19008
	ctx.r3.s64 = ctx.r10.s64 + -19008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAE2C;
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

__attribute__((alias("__imp__sub_83BEAE3C"))) PPC_WEAK_FUNC(sub_83BEAE3C);
PPC_FUNC_IMPL(__imp__sub_83BEAE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAE40"))) PPC_WEAK_FUNC(sub_83BEAE40);
PPC_FUNC_IMPL(__imp__sub_83BEAE40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30264
	ctx.r7.s64 = ctx.r8.s64 + 30264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEAE68"))) PPC_WEAK_FUNC(sub_83BEAE68);
PPC_FUNC_IMPL(__imp__sub_83BEAE68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10492
	ctx.r6.s64 = ctx.r7.s64 + -10492;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10564(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10564);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30264);
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
	// std r9,-10492(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEAEB0"))) PPC_WEAK_FUNC(sub_83BEAEB0);
PPC_FUNC_IMPL(__imp__sub_83BEAEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAEBC"))) PPC_WEAK_FUNC(sub_83BEAEBC);
PPC_FUNC_IMPL(__imp__sub_83BEAEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAEC0"))) PPC_WEAK_FUNC(sub_83BEAEC0);
PPC_FUNC_IMPL(__imp__sub_83BEAEC0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// bl 0x8259af80
	ctx.lr = 0x83BEAED8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAEE4;
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

__attribute__((alias("__imp__sub_83BEAEF4"))) PPC_WEAK_FUNC(sub_83BEAEF4);
PPC_FUNC_IMPL(__imp__sub_83BEAEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAEF8"))) PPC_WEAK_FUNC(sub_83BEAEF8);
PPC_FUNC_IMPL(__imp__sub_83BEAEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30252
	ctx.r11.s64 = ctx.r8.s64 + 30252;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10516);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18984
	ctx.r3.s64 = ctx.r6.s64 + -18984;
	// stw r10,30252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAF28"))) PPC_WEAK_FUNC(sub_83BEAF28);
PPC_FUNC_IMPL(__imp__sub_83BEAF28) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-9588
	ctx.r4.s64 = ctx.r11.s64 + -9588;
	// addi r3,r10,-10468
	ctx.r3.s64 = ctx.r10.s64 + -10468;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEAF4C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-18968
	ctx.r3.s64 = ctx.r9.s64 + -18968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEAF58;
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

__attribute__((alias("__imp__sub_83BEAF68"))) PPC_WEAK_FUNC(sub_83BEAF68);
PPC_FUNC_IMPL(__imp__sub_83BEAF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18864
	ctx.r3.s64 = ctx.r11.s64 + -18864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAF74"))) PPC_WEAK_FUNC(sub_83BEAF74);
PPC_FUNC_IMPL(__imp__sub_83BEAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAF78"))) PPC_WEAK_FUNC(sub_83BEAF78);
PPC_FUNC_IMPL(__imp__sub_83BEAF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAF84"))) PPC_WEAK_FUNC(sub_83BEAF84);
PPC_FUNC_IMPL(__imp__sub_83BEAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAF88"))) PPC_WEAK_FUNC(sub_83BEAF88);
PPC_FUNC_IMPL(__imp__sub_83BEAF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAF94"))) PPC_WEAK_FUNC(sub_83BEAF94);
PPC_FUNC_IMPL(__imp__sub_83BEAF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAF98"))) PPC_WEAK_FUNC(sub_83BEAF98);
PPC_FUNC_IMPL(__imp__sub_83BEAF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFA4"))) PPC_WEAK_FUNC(sub_83BEAFA4);
PPC_FUNC_IMPL(__imp__sub_83BEAFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFA8"))) PPC_WEAK_FUNC(sub_83BEAFA8);
PPC_FUNC_IMPL(__imp__sub_83BEAFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFB4"))) PPC_WEAK_FUNC(sub_83BEAFB4);
PPC_FUNC_IMPL(__imp__sub_83BEAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFB8"))) PPC_WEAK_FUNC(sub_83BEAFB8);
PPC_FUNC_IMPL(__imp__sub_83BEAFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFC4"))) PPC_WEAK_FUNC(sub_83BEAFC4);
PPC_FUNC_IMPL(__imp__sub_83BEAFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFC8"))) PPC_WEAK_FUNC(sub_83BEAFC8);
PPC_FUNC_IMPL(__imp__sub_83BEAFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18816
	ctx.r3.s64 = ctx.r11.s64 + -18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFD4"))) PPC_WEAK_FUNC(sub_83BEAFD4);
PPC_FUNC_IMPL(__imp__sub_83BEAFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFD8"))) PPC_WEAK_FUNC(sub_83BEAFD8);
PPC_FUNC_IMPL(__imp__sub_83BEAFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFE4"))) PPC_WEAK_FUNC(sub_83BEAFE4);
PPC_FUNC_IMPL(__imp__sub_83BEAFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFE8"))) PPC_WEAK_FUNC(sub_83BEAFE8);
PPC_FUNC_IMPL(__imp__sub_83BEAFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18800
	ctx.r3.s64 = ctx.r11.s64 + -18800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEAFF4"))) PPC_WEAK_FUNC(sub_83BEAFF4);
PPC_FUNC_IMPL(__imp__sub_83BEAFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEAFF8"))) PPC_WEAK_FUNC(sub_83BEAFF8);
PPC_FUNC_IMPL(__imp__sub_83BEAFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18792
	ctx.r3.s64 = ctx.r11.s64 + -18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB004"))) PPC_WEAK_FUNC(sub_83BEB004);
PPC_FUNC_IMPL(__imp__sub_83BEB004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB008"))) PPC_WEAK_FUNC(sub_83BEB008);
PPC_FUNC_IMPL(__imp__sub_83BEB008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB014"))) PPC_WEAK_FUNC(sub_83BEB014);
PPC_FUNC_IMPL(__imp__sub_83BEB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB018"))) PPC_WEAK_FUNC(sub_83BEB018);
PPC_FUNC_IMPL(__imp__sub_83BEB018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB024"))) PPC_WEAK_FUNC(sub_83BEB024);
PPC_FUNC_IMPL(__imp__sub_83BEB024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB028"))) PPC_WEAK_FUNC(sub_83BEB028);
PPC_FUNC_IMPL(__imp__sub_83BEB028) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// bl 0x83523120
	ctx.lr = 0x83BEB040;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18768
	ctx.r3.s64 = ctx.r10.s64 + -18768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB04C;
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

__attribute__((alias("__imp__sub_83BEB05C"))) PPC_WEAK_FUNC(sub_83BEB05C);
PPC_FUNC_IMPL(__imp__sub_83BEB05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB060"))) PPC_WEAK_FUNC(sub_83BEB060);
PPC_FUNC_IMPL(__imp__sub_83BEB060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30632
	ctx.r7.s64 = ctx.r8.s64 + 30632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB088"))) PPC_WEAK_FUNC(sub_83BEB088);
PPC_FUNC_IMPL(__imp__sub_83BEB088) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10336
	ctx.r6.s64 = ctx.r7.s64 + -10336;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30632);
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
	// std r9,-10336(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB0D0"))) PPC_WEAK_FUNC(sub_83BEB0D0);
PPC_FUNC_IMPL(__imp__sub_83BEB0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18752
	ctx.r3.s64 = ctx.r11.s64 + -18752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB0DC"))) PPC_WEAK_FUNC(sub_83BEB0DC);
PPC_FUNC_IMPL(__imp__sub_83BEB0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB0E0"))) PPC_WEAK_FUNC(sub_83BEB0E0);
PPC_FUNC_IMPL(__imp__sub_83BEB0E0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// bl 0x8259af80
	ctx.lr = 0x83BEB0F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18736
	ctx.r3.s64 = ctx.r10.s64 + -18736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB104;
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

__attribute__((alias("__imp__sub_83BEB114"))) PPC_WEAK_FUNC(sub_83BEB114);
PPC_FUNC_IMPL(__imp__sub_83BEB114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB118"))) PPC_WEAK_FUNC(sub_83BEB118);
PPC_FUNC_IMPL(__imp__sub_83BEB118) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30620
	ctx.r11.s64 = ctx.r8.s64 + 30620;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18744
	ctx.r3.s64 = ctx.r6.s64 + -18744;
	// stw r10,30620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB148"))) PPC_WEAK_FUNC(sub_83BEB148);
PPC_FUNC_IMPL(__imp__sub_83BEB148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB154"))) PPC_WEAK_FUNC(sub_83BEB154);
PPC_FUNC_IMPL(__imp__sub_83BEB154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB158"))) PPC_WEAK_FUNC(sub_83BEB158);
PPC_FUNC_IMPL(__imp__sub_83BEB158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB164"))) PPC_WEAK_FUNC(sub_83BEB164);
PPC_FUNC_IMPL(__imp__sub_83BEB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB168"))) PPC_WEAK_FUNC(sub_83BEB168);
PPC_FUNC_IMPL(__imp__sub_83BEB168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB174"))) PPC_WEAK_FUNC(sub_83BEB174);
PPC_FUNC_IMPL(__imp__sub_83BEB174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB178"))) PPC_WEAK_FUNC(sub_83BEB178);
PPC_FUNC_IMPL(__imp__sub_83BEB178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB184"))) PPC_WEAK_FUNC(sub_83BEB184);
PPC_FUNC_IMPL(__imp__sub_83BEB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB188"))) PPC_WEAK_FUNC(sub_83BEB188);
PPC_FUNC_IMPL(__imp__sub_83BEB188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB194"))) PPC_WEAK_FUNC(sub_83BEB194);
PPC_FUNC_IMPL(__imp__sub_83BEB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB198"))) PPC_WEAK_FUNC(sub_83BEB198);
PPC_FUNC_IMPL(__imp__sub_83BEB198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1A4"))) PPC_WEAK_FUNC(sub_83BEB1A4);
PPC_FUNC_IMPL(__imp__sub_83BEB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1A8"))) PPC_WEAK_FUNC(sub_83BEB1A8);
PPC_FUNC_IMPL(__imp__sub_83BEB1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1B4"))) PPC_WEAK_FUNC(sub_83BEB1B4);
PPC_FUNC_IMPL(__imp__sub_83BEB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1B8"))) PPC_WEAK_FUNC(sub_83BEB1B8);
PPC_FUNC_IMPL(__imp__sub_83BEB1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18672
	ctx.r3.s64 = ctx.r11.s64 + -18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1C4"))) PPC_WEAK_FUNC(sub_83BEB1C4);
PPC_FUNC_IMPL(__imp__sub_83BEB1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1C8"))) PPC_WEAK_FUNC(sub_83BEB1C8);
PPC_FUNC_IMPL(__imp__sub_83BEB1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18664
	ctx.r3.s64 = ctx.r11.s64 + -18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1D4"))) PPC_WEAK_FUNC(sub_83BEB1D4);
PPC_FUNC_IMPL(__imp__sub_83BEB1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1D8"))) PPC_WEAK_FUNC(sub_83BEB1D8);
PPC_FUNC_IMPL(__imp__sub_83BEB1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18656
	ctx.r3.s64 = ctx.r11.s64 + -18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1E4"))) PPC_WEAK_FUNC(sub_83BEB1E4);
PPC_FUNC_IMPL(__imp__sub_83BEB1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1E8"))) PPC_WEAK_FUNC(sub_83BEB1E8);
PPC_FUNC_IMPL(__imp__sub_83BEB1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18648
	ctx.r3.s64 = ctx.r11.s64 + -18648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB1F4"))) PPC_WEAK_FUNC(sub_83BEB1F4);
PPC_FUNC_IMPL(__imp__sub_83BEB1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB1F8"))) PPC_WEAK_FUNC(sub_83BEB1F8);
PPC_FUNC_IMPL(__imp__sub_83BEB1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB204"))) PPC_WEAK_FUNC(sub_83BEB204);
PPC_FUNC_IMPL(__imp__sub_83BEB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB208"))) PPC_WEAK_FUNC(sub_83BEB208);
PPC_FUNC_IMPL(__imp__sub_83BEB208) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// bl 0x83523120
	ctx.lr = 0x83BEB220;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18632
	ctx.r3.s64 = ctx.r10.s64 + -18632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB22C;
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

__attribute__((alias("__imp__sub_83BEB23C"))) PPC_WEAK_FUNC(sub_83BEB23C);
PPC_FUNC_IMPL(__imp__sub_83BEB23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB240"))) PPC_WEAK_FUNC(sub_83BEB240);
PPC_FUNC_IMPL(__imp__sub_83BEB240) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31000
	ctx.r7.s64 = ctx.r8.s64 + 31000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB268"))) PPC_WEAK_FUNC(sub_83BEB268);
PPC_FUNC_IMPL(__imp__sub_83BEB268) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10208
	ctx.r6.s64 = ctx.r7.s64 + -10208;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31000);
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
	// std r9,-10208(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10208, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB2B0"))) PPC_WEAK_FUNC(sub_83BEB2B0);
PPC_FUNC_IMPL(__imp__sub_83BEB2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB2BC"))) PPC_WEAK_FUNC(sub_83BEB2BC);
PPC_FUNC_IMPL(__imp__sub_83BEB2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB2C0"))) PPC_WEAK_FUNC(sub_83BEB2C0);
PPC_FUNC_IMPL(__imp__sub_83BEB2C0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// bl 0x8259af80
	ctx.lr = 0x83BEB2D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18600
	ctx.r3.s64 = ctx.r10.s64 + -18600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB2E4;
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

__attribute__((alias("__imp__sub_83BEB2F4"))) PPC_WEAK_FUNC(sub_83BEB2F4);
PPC_FUNC_IMPL(__imp__sub_83BEB2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB2F8"))) PPC_WEAK_FUNC(sub_83BEB2F8);
PPC_FUNC_IMPL(__imp__sub_83BEB2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30988
	ctx.r11.s64 = ctx.r8.s64 + 30988;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10232);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18608
	ctx.r3.s64 = ctx.r6.s64 + -18608;
	// stw r10,30988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB328"))) PPC_WEAK_FUNC(sub_83BEB328);
PPC_FUNC_IMPL(__imp__sub_83BEB328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB334"))) PPC_WEAK_FUNC(sub_83BEB334);
PPC_FUNC_IMPL(__imp__sub_83BEB334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB338"))) PPC_WEAK_FUNC(sub_83BEB338);
PPC_FUNC_IMPL(__imp__sub_83BEB338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB344"))) PPC_WEAK_FUNC(sub_83BEB344);
PPC_FUNC_IMPL(__imp__sub_83BEB344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB348"))) PPC_WEAK_FUNC(sub_83BEB348);
PPC_FUNC_IMPL(__imp__sub_83BEB348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB354"))) PPC_WEAK_FUNC(sub_83BEB354);
PPC_FUNC_IMPL(__imp__sub_83BEB354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB358"))) PPC_WEAK_FUNC(sub_83BEB358);
PPC_FUNC_IMPL(__imp__sub_83BEB358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB364"))) PPC_WEAK_FUNC(sub_83BEB364);
PPC_FUNC_IMPL(__imp__sub_83BEB364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB368"))) PPC_WEAK_FUNC(sub_83BEB368);
PPC_FUNC_IMPL(__imp__sub_83BEB368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB374"))) PPC_WEAK_FUNC(sub_83BEB374);
PPC_FUNC_IMPL(__imp__sub_83BEB374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB378"))) PPC_WEAK_FUNC(sub_83BEB378);
PPC_FUNC_IMPL(__imp__sub_83BEB378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB384"))) PPC_WEAK_FUNC(sub_83BEB384);
PPC_FUNC_IMPL(__imp__sub_83BEB384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB388"))) PPC_WEAK_FUNC(sub_83BEB388);
PPC_FUNC_IMPL(__imp__sub_83BEB388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB394"))) PPC_WEAK_FUNC(sub_83BEB394);
PPC_FUNC_IMPL(__imp__sub_83BEB394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB398"))) PPC_WEAK_FUNC(sub_83BEB398);
PPC_FUNC_IMPL(__imp__sub_83BEB398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB3A4"))) PPC_WEAK_FUNC(sub_83BEB3A4);
PPC_FUNC_IMPL(__imp__sub_83BEB3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB3A8"))) PPC_WEAK_FUNC(sub_83BEB3A8);
PPC_FUNC_IMPL(__imp__sub_83BEB3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18528
	ctx.r3.s64 = ctx.r11.s64 + -18528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB3B4"))) PPC_WEAK_FUNC(sub_83BEB3B4);
PPC_FUNC_IMPL(__imp__sub_83BEB3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB3B8"))) PPC_WEAK_FUNC(sub_83BEB3B8);
PPC_FUNC_IMPL(__imp__sub_83BEB3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB3C4"))) PPC_WEAK_FUNC(sub_83BEB3C4);
PPC_FUNC_IMPL(__imp__sub_83BEB3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB3C8"))) PPC_WEAK_FUNC(sub_83BEB3C8);
PPC_FUNC_IMPL(__imp__sub_83BEB3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB3D4"))) PPC_WEAK_FUNC(sub_83BEB3D4);
PPC_FUNC_IMPL(__imp__sub_83BEB3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB3D8"))) PPC_WEAK_FUNC(sub_83BEB3D8);
PPC_FUNC_IMPL(__imp__sub_83BEB3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB3E4"))) PPC_WEAK_FUNC(sub_83BEB3E4);
PPC_FUNC_IMPL(__imp__sub_83BEB3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB3E8"))) PPC_WEAK_FUNC(sub_83BEB3E8);
PPC_FUNC_IMPL(__imp__sub_83BEB3E8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,31352
	ctx.r3.s64 = ctx.r11.s64 + 31352;
	// bl 0x83523120
	ctx.lr = 0x83BEB400;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18496
	ctx.r3.s64 = ctx.r10.s64 + -18496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB40C;
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

__attribute__((alias("__imp__sub_83BEB41C"))) PPC_WEAK_FUNC(sub_83BEB41C);
PPC_FUNC_IMPL(__imp__sub_83BEB41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB420"))) PPC_WEAK_FUNC(sub_83BEB420);
PPC_FUNC_IMPL(__imp__sub_83BEB420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31368
	ctx.r7.s64 = ctx.r8.s64 + 31368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB448"))) PPC_WEAK_FUNC(sub_83BEB448);
PPC_FUNC_IMPL(__imp__sub_83BEB448) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10080
	ctx.r6.s64 = ctx.r7.s64 + -10080;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31368);
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
	// std r9,-10080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB490"))) PPC_WEAK_FUNC(sub_83BEB490);
PPC_FUNC_IMPL(__imp__sub_83BEB490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB49C"))) PPC_WEAK_FUNC(sub_83BEB49C);
PPC_FUNC_IMPL(__imp__sub_83BEB49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB4A0"))) PPC_WEAK_FUNC(sub_83BEB4A0);
PPC_FUNC_IMPL(__imp__sub_83BEB4A0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// bl 0x8259af80
	ctx.lr = 0x83BEB4B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18464
	ctx.r3.s64 = ctx.r10.s64 + -18464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB4C4;
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

__attribute__((alias("__imp__sub_83BEB4D4"))) PPC_WEAK_FUNC(sub_83BEB4D4);
PPC_FUNC_IMPL(__imp__sub_83BEB4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB4D8"))) PPC_WEAK_FUNC(sub_83BEB4D8);
PPC_FUNC_IMPL(__imp__sub_83BEB4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31356
	ctx.r11.s64 = ctx.r8.s64 + 31356;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18472
	ctx.r3.s64 = ctx.r6.s64 + -18472;
	// stw r10,31356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB508"))) PPC_WEAK_FUNC(sub_83BEB508);
PPC_FUNC_IMPL(__imp__sub_83BEB508) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-6820
	ctx.r4.s64 = ctx.r11.s64 + -6820;
	// addi r3,r10,-10056
	ctx.r3.s64 = ctx.r10.s64 + -10056;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB52C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-18456
	ctx.r3.s64 = ctx.r9.s64 + -18456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB538;
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

__attribute__((alias("__imp__sub_83BEB548"))) PPC_WEAK_FUNC(sub_83BEB548);
PPC_FUNC_IMPL(__imp__sub_83BEB548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB554"))) PPC_WEAK_FUNC(sub_83BEB554);
PPC_FUNC_IMPL(__imp__sub_83BEB554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB558"))) PPC_WEAK_FUNC(sub_83BEB558);
PPC_FUNC_IMPL(__imp__sub_83BEB558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB564"))) PPC_WEAK_FUNC(sub_83BEB564);
PPC_FUNC_IMPL(__imp__sub_83BEB564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB568"))) PPC_WEAK_FUNC(sub_83BEB568);
PPC_FUNC_IMPL(__imp__sub_83BEB568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB574"))) PPC_WEAK_FUNC(sub_83BEB574);
PPC_FUNC_IMPL(__imp__sub_83BEB574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB578"))) PPC_WEAK_FUNC(sub_83BEB578);
PPC_FUNC_IMPL(__imp__sub_83BEB578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB584"))) PPC_WEAK_FUNC(sub_83BEB584);
PPC_FUNC_IMPL(__imp__sub_83BEB584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB588"))) PPC_WEAK_FUNC(sub_83BEB588);
PPC_FUNC_IMPL(__imp__sub_83BEB588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB594"))) PPC_WEAK_FUNC(sub_83BEB594);
PPC_FUNC_IMPL(__imp__sub_83BEB594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB598"))) PPC_WEAK_FUNC(sub_83BEB598);
PPC_FUNC_IMPL(__imp__sub_83BEB598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5A4"))) PPC_WEAK_FUNC(sub_83BEB5A4);
PPC_FUNC_IMPL(__imp__sub_83BEB5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5A8"))) PPC_WEAK_FUNC(sub_83BEB5A8);
PPC_FUNC_IMPL(__imp__sub_83BEB5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5B4"))) PPC_WEAK_FUNC(sub_83BEB5B4);
PPC_FUNC_IMPL(__imp__sub_83BEB5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5B8"))) PPC_WEAK_FUNC(sub_83BEB5B8);
PPC_FUNC_IMPL(__imp__sub_83BEB5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5C4"))) PPC_WEAK_FUNC(sub_83BEB5C4);
PPC_FUNC_IMPL(__imp__sub_83BEB5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5C8"))) PPC_WEAK_FUNC(sub_83BEB5C8);
PPC_FUNC_IMPL(__imp__sub_83BEB5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5D4"))) PPC_WEAK_FUNC(sub_83BEB5D4);
PPC_FUNC_IMPL(__imp__sub_83BEB5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5D8"))) PPC_WEAK_FUNC(sub_83BEB5D8);
PPC_FUNC_IMPL(__imp__sub_83BEB5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5E4"))) PPC_WEAK_FUNC(sub_83BEB5E4);
PPC_FUNC_IMPL(__imp__sub_83BEB5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5E8"))) PPC_WEAK_FUNC(sub_83BEB5E8);
PPC_FUNC_IMPL(__imp__sub_83BEB5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB5F4"))) PPC_WEAK_FUNC(sub_83BEB5F4);
PPC_FUNC_IMPL(__imp__sub_83BEB5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB5F8"))) PPC_WEAK_FUNC(sub_83BEB5F8);
PPC_FUNC_IMPL(__imp__sub_83BEB5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB604"))) PPC_WEAK_FUNC(sub_83BEB604);
PPC_FUNC_IMPL(__imp__sub_83BEB604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB608"))) PPC_WEAK_FUNC(sub_83BEB608);
PPC_FUNC_IMPL(__imp__sub_83BEB608) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// bl 0x83523120
	ctx.lr = 0x83BEB620;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18256
	ctx.r3.s64 = ctx.r10.s64 + -18256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB62C;
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

__attribute__((alias("__imp__sub_83BEB63C"))) PPC_WEAK_FUNC(sub_83BEB63C);
PPC_FUNC_IMPL(__imp__sub_83BEB63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB640"))) PPC_WEAK_FUNC(sub_83BEB640);
PPC_FUNC_IMPL(__imp__sub_83BEB640) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31736
	ctx.r7.s64 = ctx.r8.s64 + 31736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB668"))) PPC_WEAK_FUNC(sub_83BEB668);
PPC_FUNC_IMPL(__imp__sub_83BEB668) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-9920
	ctx.r6.s64 = ctx.r7.s64 + -9920;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9992(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9992);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31736);
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
	// std r9,-9920(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9920, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB6B0"))) PPC_WEAK_FUNC(sub_83BEB6B0);
PPC_FUNC_IMPL(__imp__sub_83BEB6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB6BC"))) PPC_WEAK_FUNC(sub_83BEB6BC);
PPC_FUNC_IMPL(__imp__sub_83BEB6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB6C0"))) PPC_WEAK_FUNC(sub_83BEB6C0);
PPC_FUNC_IMPL(__imp__sub_83BEB6C0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// bl 0x8259af80
	ctx.lr = 0x83BEB6D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-18224
	ctx.r3.s64 = ctx.r10.s64 + -18224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB6E4;
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

__attribute__((alias("__imp__sub_83BEB6F4"))) PPC_WEAK_FUNC(sub_83BEB6F4);
PPC_FUNC_IMPL(__imp__sub_83BEB6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB6F8"))) PPC_WEAK_FUNC(sub_83BEB6F8);
PPC_FUNC_IMPL(__imp__sub_83BEB6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31724
	ctx.r11.s64 = ctx.r8.s64 + 31724;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-9944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18232
	ctx.r3.s64 = ctx.r6.s64 + -18232;
	// stw r10,31724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB728"))) PPC_WEAK_FUNC(sub_83BEB728);
PPC_FUNC_IMPL(__imp__sub_83BEB728) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-5516
	ctx.r4.s64 = ctx.r11.s64 + -5516;
	// addi r3,r10,-9896
	ctx.r3.s64 = ctx.r10.s64 + -9896;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB74C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-18216
	ctx.r3.s64 = ctx.r9.s64 + -18216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB758;
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

__attribute__((alias("__imp__sub_83BEB768"))) PPC_WEAK_FUNC(sub_83BEB768);
PPC_FUNC_IMPL(__imp__sub_83BEB768) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r30,r11,-5044
	ctx.r30.s64 = ctx.r11.s64 + -5044;
	// addi r31,r10,-9864
	ctx.r31.s64 = ctx.r10.s64 + -9864;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB79C;
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
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB7C4;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB7EC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8259cc28
	ctx.lr = 0x83BEB814;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-18112
	ctx.r3.s64 = ctx.r9.s64 + -18112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB820;
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

__attribute__((alias("__imp__sub_83BEB838"))) PPC_WEAK_FUNC(sub_83BEB838);
PPC_FUNC_IMPL(__imp__sub_83BEB838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18008
	ctx.r3.s64 = ctx.r11.s64 + -18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB844"))) PPC_WEAK_FUNC(sub_83BEB844);
PPC_FUNC_IMPL(__imp__sub_83BEB844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB848"))) PPC_WEAK_FUNC(sub_83BEB848);
PPC_FUNC_IMPL(__imp__sub_83BEB848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB854"))) PPC_WEAK_FUNC(sub_83BEB854);
PPC_FUNC_IMPL(__imp__sub_83BEB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB858"))) PPC_WEAK_FUNC(sub_83BEB858);
PPC_FUNC_IMPL(__imp__sub_83BEB858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB864"))) PPC_WEAK_FUNC(sub_83BEB864);
PPC_FUNC_IMPL(__imp__sub_83BEB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB868"))) PPC_WEAK_FUNC(sub_83BEB868);
PPC_FUNC_IMPL(__imp__sub_83BEB868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB874"))) PPC_WEAK_FUNC(sub_83BEB874);
PPC_FUNC_IMPL(__imp__sub_83BEB874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB878"))) PPC_WEAK_FUNC(sub_83BEB878);
PPC_FUNC_IMPL(__imp__sub_83BEB878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB884"))) PPC_WEAK_FUNC(sub_83BEB884);
PPC_FUNC_IMPL(__imp__sub_83BEB884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB888"))) PPC_WEAK_FUNC(sub_83BEB888);
PPC_FUNC_IMPL(__imp__sub_83BEB888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17968
	ctx.r3.s64 = ctx.r11.s64 + -17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB894"))) PPC_WEAK_FUNC(sub_83BEB894);
PPC_FUNC_IMPL(__imp__sub_83BEB894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB898"))) PPC_WEAK_FUNC(sub_83BEB898);
PPC_FUNC_IMPL(__imp__sub_83BEB898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8A4"))) PPC_WEAK_FUNC(sub_83BEB8A4);
PPC_FUNC_IMPL(__imp__sub_83BEB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8A8"))) PPC_WEAK_FUNC(sub_83BEB8A8);
PPC_FUNC_IMPL(__imp__sub_83BEB8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8B4"))) PPC_WEAK_FUNC(sub_83BEB8B4);
PPC_FUNC_IMPL(__imp__sub_83BEB8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8B8"))) PPC_WEAK_FUNC(sub_83BEB8B8);
PPC_FUNC_IMPL(__imp__sub_83BEB8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17944
	ctx.r3.s64 = ctx.r11.s64 + -17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8C4"))) PPC_WEAK_FUNC(sub_83BEB8C4);
PPC_FUNC_IMPL(__imp__sub_83BEB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8C8"))) PPC_WEAK_FUNC(sub_83BEB8C8);
PPC_FUNC_IMPL(__imp__sub_83BEB8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8D4"))) PPC_WEAK_FUNC(sub_83BEB8D4);
PPC_FUNC_IMPL(__imp__sub_83BEB8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8D8"))) PPC_WEAK_FUNC(sub_83BEB8D8);
PPC_FUNC_IMPL(__imp__sub_83BEB8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8E4"))) PPC_WEAK_FUNC(sub_83BEB8E4);
PPC_FUNC_IMPL(__imp__sub_83BEB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8E8"))) PPC_WEAK_FUNC(sub_83BEB8E8);
PPC_FUNC_IMPL(__imp__sub_83BEB8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17920
	ctx.r3.s64 = ctx.r11.s64 + -17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB8F4"))) PPC_WEAK_FUNC(sub_83BEB8F4);
PPC_FUNC_IMPL(__imp__sub_83BEB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB8F8"))) PPC_WEAK_FUNC(sub_83BEB8F8);
PPC_FUNC_IMPL(__imp__sub_83BEB8F8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// bl 0x83523120
	ctx.lr = 0x83BEB910;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17912
	ctx.r3.s64 = ctx.r10.s64 + -17912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB91C;
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

__attribute__((alias("__imp__sub_83BEB92C"))) PPC_WEAK_FUNC(sub_83BEB92C);
PPC_FUNC_IMPL(__imp__sub_83BEB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB930"))) PPC_WEAK_FUNC(sub_83BEB930);
PPC_FUNC_IMPL(__imp__sub_83BEB930) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32104
	ctx.r7.s64 = ctx.r8.s64 + 32104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB958"))) PPC_WEAK_FUNC(sub_83BEB958);
PPC_FUNC_IMPL(__imp__sub_83BEB958) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-9568
	ctx.r6.s64 = ctx.r7.s64 + -9568;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32104);
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
	// std r9,-9568(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEB9A0"))) PPC_WEAK_FUNC(sub_83BEB9A0);
PPC_FUNC_IMPL(__imp__sub_83BEB9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17896
	ctx.r3.s64 = ctx.r11.s64 + -17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEB9AC"))) PPC_WEAK_FUNC(sub_83BEB9AC);
PPC_FUNC_IMPL(__imp__sub_83BEB9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

