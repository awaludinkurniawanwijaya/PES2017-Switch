#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF6C70"))) PPC_WEAK_FUNC(sub_83BF6C70);
PPC_FUNC_IMPL(__imp__sub_83BF6C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3888
	ctx.r3.s64 = ctx.r11.s64 + -3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C7C"))) PPC_WEAK_FUNC(sub_83BF6C7C);
PPC_FUNC_IMPL(__imp__sub_83BF6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C80"))) PPC_WEAK_FUNC(sub_83BF6C80);
PPC_FUNC_IMPL(__imp__sub_83BF6C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C8C"))) PPC_WEAK_FUNC(sub_83BF6C8C);
PPC_FUNC_IMPL(__imp__sub_83BF6C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C90"))) PPC_WEAK_FUNC(sub_83BF6C90);
PPC_FUNC_IMPL(__imp__sub_83BF6C90) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// bl 0x83523120
	ctx.lr = 0x83BF6CA8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3872
	ctx.r3.s64 = ctx.r10.s64 + -3872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6CB4;
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

__attribute__((alias("__imp__sub_83BF6CC4"))) PPC_WEAK_FUNC(sub_83BF6CC4);
PPC_FUNC_IMPL(__imp__sub_83BF6CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6CC8"))) PPC_WEAK_FUNC(sub_83BF6CC8);
PPC_FUNC_IMPL(__imp__sub_83BF6CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2112
	ctx.r7.s64 = ctx.r8.s64 + 2112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6CF0"))) PPC_WEAK_FUNC(sub_83BF6CF0);
PPC_FUNC_IMPL(__imp__sub_83BF6CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6804
	ctx.r6.s64 = ctx.r7.s64 + 6804;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
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
	// std r9,6804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6D38"))) PPC_WEAK_FUNC(sub_83BF6D38);
PPC_FUNC_IMPL(__imp__sub_83BF6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3856
	ctx.r3.s64 = ctx.r11.s64 + -3856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6D44"))) PPC_WEAK_FUNC(sub_83BF6D44);
PPC_FUNC_IMPL(__imp__sub_83BF6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6D48"))) PPC_WEAK_FUNC(sub_83BF6D48);
PPC_FUNC_IMPL(__imp__sub_83BF6D48) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x8259af80
	ctx.lr = 0x83BF6D60;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3840
	ctx.r3.s64 = ctx.r10.s64 + -3840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6D6C;
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

__attribute__((alias("__imp__sub_83BF6D7C"))) PPC_WEAK_FUNC(sub_83BF6D7C);
PPC_FUNC_IMPL(__imp__sub_83BF6D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6D80"))) PPC_WEAK_FUNC(sub_83BF6D80);
PPC_FUNC_IMPL(__imp__sub_83BF6D80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2100
	ctx.r11.s64 = ctx.r8.s64 + 2100;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3848
	ctx.r3.s64 = ctx.r6.s64 + -3848;
	// stw r10,2100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6DB0"))) PPC_WEAK_FUNC(sub_83BF6DB0);
PPC_FUNC_IMPL(__imp__sub_83BF6DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18404);
	// stw r11,2464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6DC4"))) PPC_WEAK_FUNC(sub_83BF6DC4);
PPC_FUNC_IMPL(__imp__sub_83BF6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6DC8"))) PPC_WEAK_FUNC(sub_83BF6DC8);
PPC_FUNC_IMPL(__imp__sub_83BF6DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3832
	ctx.r3.s64 = ctx.r11.s64 + -3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6DD4"))) PPC_WEAK_FUNC(sub_83BF6DD4);
PPC_FUNC_IMPL(__imp__sub_83BF6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6DD8"))) PPC_WEAK_FUNC(sub_83BF6DD8);
PPC_FUNC_IMPL(__imp__sub_83BF6DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6DE4"))) PPC_WEAK_FUNC(sub_83BF6DE4);
PPC_FUNC_IMPL(__imp__sub_83BF6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6DE8"))) PPC_WEAK_FUNC(sub_83BF6DE8);
PPC_FUNC_IMPL(__imp__sub_83BF6DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3816
	ctx.r3.s64 = ctx.r11.s64 + -3816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6DF4"))) PPC_WEAK_FUNC(sub_83BF6DF4);
PPC_FUNC_IMPL(__imp__sub_83BF6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6DF8"))) PPC_WEAK_FUNC(sub_83BF6DF8);
PPC_FUNC_IMPL(__imp__sub_83BF6DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3808
	ctx.r3.s64 = ctx.r11.s64 + -3808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E04"))) PPC_WEAK_FUNC(sub_83BF6E04);
PPC_FUNC_IMPL(__imp__sub_83BF6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E08"))) PPC_WEAK_FUNC(sub_83BF6E08);
PPC_FUNC_IMPL(__imp__sub_83BF6E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E14"))) PPC_WEAK_FUNC(sub_83BF6E14);
PPC_FUNC_IMPL(__imp__sub_83BF6E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E18"))) PPC_WEAK_FUNC(sub_83BF6E18);
PPC_FUNC_IMPL(__imp__sub_83BF6E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3792
	ctx.r3.s64 = ctx.r11.s64 + -3792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E24"))) PPC_WEAK_FUNC(sub_83BF6E24);
PPC_FUNC_IMPL(__imp__sub_83BF6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E28"))) PPC_WEAK_FUNC(sub_83BF6E28);
PPC_FUNC_IMPL(__imp__sub_83BF6E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3784
	ctx.r3.s64 = ctx.r11.s64 + -3784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E34"))) PPC_WEAK_FUNC(sub_83BF6E34);
PPC_FUNC_IMPL(__imp__sub_83BF6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E38"))) PPC_WEAK_FUNC(sub_83BF6E38);
PPC_FUNC_IMPL(__imp__sub_83BF6E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3776
	ctx.r3.s64 = ctx.r11.s64 + -3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E44"))) PPC_WEAK_FUNC(sub_83BF6E44);
PPC_FUNC_IMPL(__imp__sub_83BF6E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E48"))) PPC_WEAK_FUNC(sub_83BF6E48);
PPC_FUNC_IMPL(__imp__sub_83BF6E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E54"))) PPC_WEAK_FUNC(sub_83BF6E54);
PPC_FUNC_IMPL(__imp__sub_83BF6E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E58"))) PPC_WEAK_FUNC(sub_83BF6E58);
PPC_FUNC_IMPL(__imp__sub_83BF6E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E64"))) PPC_WEAK_FUNC(sub_83BF6E64);
PPC_FUNC_IMPL(__imp__sub_83BF6E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E68"))) PPC_WEAK_FUNC(sub_83BF6E68);
PPC_FUNC_IMPL(__imp__sub_83BF6E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3752
	ctx.r3.s64 = ctx.r11.s64 + -3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E74"))) PPC_WEAK_FUNC(sub_83BF6E74);
PPC_FUNC_IMPL(__imp__sub_83BF6E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E78"))) PPC_WEAK_FUNC(sub_83BF6E78);
PPC_FUNC_IMPL(__imp__sub_83BF6E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3744
	ctx.r3.s64 = ctx.r11.s64 + -3744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6E84"))) PPC_WEAK_FUNC(sub_83BF6E84);
PPC_FUNC_IMPL(__imp__sub_83BF6E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6E88"))) PPC_WEAK_FUNC(sub_83BF6E88);
PPC_FUNC_IMPL(__imp__sub_83BF6E88) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2472
	ctx.r3.s64 = ctx.r11.s64 + 2472;
	// bl 0x83523120
	ctx.lr = 0x83BF6EA0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3736
	ctx.r3.s64 = ctx.r10.s64 + -3736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6EAC;
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

__attribute__((alias("__imp__sub_83BF6EBC"))) PPC_WEAK_FUNC(sub_83BF6EBC);
PPC_FUNC_IMPL(__imp__sub_83BF6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6EC0"))) PPC_WEAK_FUNC(sub_83BF6EC0);
PPC_FUNC_IMPL(__imp__sub_83BF6EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2488
	ctx.r7.s64 = ctx.r8.s64 + 2488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6EE8"))) PPC_WEAK_FUNC(sub_83BF6EE8);
PPC_FUNC_IMPL(__imp__sub_83BF6EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6992
	ctx.r6.s64 = ctx.r7.s64 + 6992;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2488);
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
	// std r9,6992(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6F30"))) PPC_WEAK_FUNC(sub_83BF6F30);
PPC_FUNC_IMPL(__imp__sub_83BF6F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3720
	ctx.r3.s64 = ctx.r11.s64 + -3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6F3C"))) PPC_WEAK_FUNC(sub_83BF6F3C);
PPC_FUNC_IMPL(__imp__sub_83BF6F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6F40"))) PPC_WEAK_FUNC(sub_83BF6F40);
PPC_FUNC_IMPL(__imp__sub_83BF6F40) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// bl 0x8259af80
	ctx.lr = 0x83BF6F58;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3704
	ctx.r3.s64 = ctx.r10.s64 + -3704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6F64;
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

__attribute__((alias("__imp__sub_83BF6F74"))) PPC_WEAK_FUNC(sub_83BF6F74);
PPC_FUNC_IMPL(__imp__sub_83BF6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6F78"))) PPC_WEAK_FUNC(sub_83BF6F78);
PPC_FUNC_IMPL(__imp__sub_83BF6F78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2476
	ctx.r11.s64 = ctx.r8.s64 + 2476;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6968);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3712
	ctx.r3.s64 = ctx.r6.s64 + -3712;
	// stw r10,2476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6FA8"))) PPC_WEAK_FUNC(sub_83BF6FA8);
PPC_FUNC_IMPL(__imp__sub_83BF6FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18404);
	// stw r11,2840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6FBC"))) PPC_WEAK_FUNC(sub_83BF6FBC);
PPC_FUNC_IMPL(__imp__sub_83BF6FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6FC0"))) PPC_WEAK_FUNC(sub_83BF6FC0);
PPC_FUNC_IMPL(__imp__sub_83BF6FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3696
	ctx.r3.s64 = ctx.r11.s64 + -3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6FCC"))) PPC_WEAK_FUNC(sub_83BF6FCC);
PPC_FUNC_IMPL(__imp__sub_83BF6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6FD0"))) PPC_WEAK_FUNC(sub_83BF6FD0);
PPC_FUNC_IMPL(__imp__sub_83BF6FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6FDC"))) PPC_WEAK_FUNC(sub_83BF6FDC);
PPC_FUNC_IMPL(__imp__sub_83BF6FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6FE0"))) PPC_WEAK_FUNC(sub_83BF6FE0);
PPC_FUNC_IMPL(__imp__sub_83BF6FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3680
	ctx.r3.s64 = ctx.r11.s64 + -3680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6FEC"))) PPC_WEAK_FUNC(sub_83BF6FEC);
PPC_FUNC_IMPL(__imp__sub_83BF6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6FF0"))) PPC_WEAK_FUNC(sub_83BF6FF0);
PPC_FUNC_IMPL(__imp__sub_83BF6FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3672
	ctx.r3.s64 = ctx.r11.s64 + -3672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6FFC"))) PPC_WEAK_FUNC(sub_83BF6FFC);
PPC_FUNC_IMPL(__imp__sub_83BF6FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7000"))) PPC_WEAK_FUNC(sub_83BF7000);
PPC_FUNC_IMPL(__imp__sub_83BF7000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF700C"))) PPC_WEAK_FUNC(sub_83BF700C);
PPC_FUNC_IMPL(__imp__sub_83BF700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7010"))) PPC_WEAK_FUNC(sub_83BF7010);
PPC_FUNC_IMPL(__imp__sub_83BF7010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3656
	ctx.r3.s64 = ctx.r11.s64 + -3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF701C"))) PPC_WEAK_FUNC(sub_83BF701C);
PPC_FUNC_IMPL(__imp__sub_83BF701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7020"))) PPC_WEAK_FUNC(sub_83BF7020);
PPC_FUNC_IMPL(__imp__sub_83BF7020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF702C"))) PPC_WEAK_FUNC(sub_83BF702C);
PPC_FUNC_IMPL(__imp__sub_83BF702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7030"))) PPC_WEAK_FUNC(sub_83BF7030);
PPC_FUNC_IMPL(__imp__sub_83BF7030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF703C"))) PPC_WEAK_FUNC(sub_83BF703C);
PPC_FUNC_IMPL(__imp__sub_83BF703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7040"))) PPC_WEAK_FUNC(sub_83BF7040);
PPC_FUNC_IMPL(__imp__sub_83BF7040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF704C"))) PPC_WEAK_FUNC(sub_83BF704C);
PPC_FUNC_IMPL(__imp__sub_83BF704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7050"))) PPC_WEAK_FUNC(sub_83BF7050);
PPC_FUNC_IMPL(__imp__sub_83BF7050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF705C"))) PPC_WEAK_FUNC(sub_83BF705C);
PPC_FUNC_IMPL(__imp__sub_83BF705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7060"))) PPC_WEAK_FUNC(sub_83BF7060);
PPC_FUNC_IMPL(__imp__sub_83BF7060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3616
	ctx.r3.s64 = ctx.r11.s64 + -3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF706C"))) PPC_WEAK_FUNC(sub_83BF706C);
PPC_FUNC_IMPL(__imp__sub_83BF706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7070"))) PPC_WEAK_FUNC(sub_83BF7070);
PPC_FUNC_IMPL(__imp__sub_83BF7070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF707C"))) PPC_WEAK_FUNC(sub_83BF707C);
PPC_FUNC_IMPL(__imp__sub_83BF707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7080"))) PPC_WEAK_FUNC(sub_83BF7080);
PPC_FUNC_IMPL(__imp__sub_83BF7080) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// bl 0x83523120
	ctx.lr = 0x83BF7098;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3600
	ctx.r3.s64 = ctx.r10.s64 + -3600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF70A4;
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

__attribute__((alias("__imp__sub_83BF70B4"))) PPC_WEAK_FUNC(sub_83BF70B4);
PPC_FUNC_IMPL(__imp__sub_83BF70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF70B8"))) PPC_WEAK_FUNC(sub_83BF70B8);
PPC_FUNC_IMPL(__imp__sub_83BF70B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2864
	ctx.r7.s64 = ctx.r8.s64 + 2864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF70E0"))) PPC_WEAK_FUNC(sub_83BF70E0);
PPC_FUNC_IMPL(__imp__sub_83BF70E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,7160
	ctx.r6.s64 = ctx.r7.s64 + 7160;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7088(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7088);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
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
	// std r9,7160(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7160, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7128"))) PPC_WEAK_FUNC(sub_83BF7128);
PPC_FUNC_IMPL(__imp__sub_83BF7128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7134"))) PPC_WEAK_FUNC(sub_83BF7134);
PPC_FUNC_IMPL(__imp__sub_83BF7134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7138"))) PPC_WEAK_FUNC(sub_83BF7138);
PPC_FUNC_IMPL(__imp__sub_83BF7138) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,2872
	ctx.r3.s64 = ctx.r11.s64 + 2872;
	// bl 0x8259af80
	ctx.lr = 0x83BF7150;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3568
	ctx.r3.s64 = ctx.r10.s64 + -3568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF715C;
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

__attribute__((alias("__imp__sub_83BF716C"))) PPC_WEAK_FUNC(sub_83BF716C);
PPC_FUNC_IMPL(__imp__sub_83BF716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7170"))) PPC_WEAK_FUNC(sub_83BF7170);
PPC_FUNC_IMPL(__imp__sub_83BF7170) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2852
	ctx.r11.s64 = ctx.r8.s64 + 2852;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,7136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7136);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3576
	ctx.r3.s64 = ctx.r6.s64 + -3576;
	// stw r10,2852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2852, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF71A0"))) PPC_WEAK_FUNC(sub_83BF71A0);
PPC_FUNC_IMPL(__imp__sub_83BF71A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18404);
	// stw r11,3216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF71B4"))) PPC_WEAK_FUNC(sub_83BF71B4);
PPC_FUNC_IMPL(__imp__sub_83BF71B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF71B8"))) PPC_WEAK_FUNC(sub_83BF71B8);
PPC_FUNC_IMPL(__imp__sub_83BF71B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,7036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	// stw r11,3220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF71CC"))) PPC_WEAK_FUNC(sub_83BF71CC);
PPC_FUNC_IMPL(__imp__sub_83BF71CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF71D0"))) PPC_WEAK_FUNC(sub_83BF71D0);
PPC_FUNC_IMPL(__imp__sub_83BF71D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF71DC"))) PPC_WEAK_FUNC(sub_83BF71DC);
PPC_FUNC_IMPL(__imp__sub_83BF71DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF71E0"))) PPC_WEAK_FUNC(sub_83BF71E0);
PPC_FUNC_IMPL(__imp__sub_83BF71E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3552
	ctx.r3.s64 = ctx.r11.s64 + -3552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF71EC"))) PPC_WEAK_FUNC(sub_83BF71EC);
PPC_FUNC_IMPL(__imp__sub_83BF71EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF71F0"))) PPC_WEAK_FUNC(sub_83BF71F0);
PPC_FUNC_IMPL(__imp__sub_83BF71F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3544
	ctx.r3.s64 = ctx.r11.s64 + -3544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF71FC"))) PPC_WEAK_FUNC(sub_83BF71FC);
PPC_FUNC_IMPL(__imp__sub_83BF71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7200"))) PPC_WEAK_FUNC(sub_83BF7200);
PPC_FUNC_IMPL(__imp__sub_83BF7200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3536
	ctx.r3.s64 = ctx.r11.s64 + -3536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF720C"))) PPC_WEAK_FUNC(sub_83BF720C);
PPC_FUNC_IMPL(__imp__sub_83BF720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7210"))) PPC_WEAK_FUNC(sub_83BF7210);
PPC_FUNC_IMPL(__imp__sub_83BF7210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF721C"))) PPC_WEAK_FUNC(sub_83BF721C);
PPC_FUNC_IMPL(__imp__sub_83BF721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7220"))) PPC_WEAK_FUNC(sub_83BF7220);
PPC_FUNC_IMPL(__imp__sub_83BF7220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF722C"))) PPC_WEAK_FUNC(sub_83BF722C);
PPC_FUNC_IMPL(__imp__sub_83BF722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7230"))) PPC_WEAK_FUNC(sub_83BF7230);
PPC_FUNC_IMPL(__imp__sub_83BF7230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3512
	ctx.r3.s64 = ctx.r11.s64 + -3512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF723C"))) PPC_WEAK_FUNC(sub_83BF723C);
PPC_FUNC_IMPL(__imp__sub_83BF723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7240"))) PPC_WEAK_FUNC(sub_83BF7240);
PPC_FUNC_IMPL(__imp__sub_83BF7240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3504
	ctx.r3.s64 = ctx.r11.s64 + -3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF724C"))) PPC_WEAK_FUNC(sub_83BF724C);
PPC_FUNC_IMPL(__imp__sub_83BF724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7250"))) PPC_WEAK_FUNC(sub_83BF7250);
PPC_FUNC_IMPL(__imp__sub_83BF7250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3496
	ctx.r3.s64 = ctx.r11.s64 + -3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF725C"))) PPC_WEAK_FUNC(sub_83BF725C);
PPC_FUNC_IMPL(__imp__sub_83BF725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7260"))) PPC_WEAK_FUNC(sub_83BF7260);
PPC_FUNC_IMPL(__imp__sub_83BF7260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF726C"))) PPC_WEAK_FUNC(sub_83BF726C);
PPC_FUNC_IMPL(__imp__sub_83BF726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7270"))) PPC_WEAK_FUNC(sub_83BF7270);
PPC_FUNC_IMPL(__imp__sub_83BF7270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3480
	ctx.r3.s64 = ctx.r11.s64 + -3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF727C"))) PPC_WEAK_FUNC(sub_83BF727C);
PPC_FUNC_IMPL(__imp__sub_83BF727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7280"))) PPC_WEAK_FUNC(sub_83BF7280);
PPC_FUNC_IMPL(__imp__sub_83BF7280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3472
	ctx.r3.s64 = ctx.r11.s64 + -3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF728C"))) PPC_WEAK_FUNC(sub_83BF728C);
PPC_FUNC_IMPL(__imp__sub_83BF728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7290"))) PPC_WEAK_FUNC(sub_83BF7290);
PPC_FUNC_IMPL(__imp__sub_83BF7290) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// bl 0x83523120
	ctx.lr = 0x83BF72A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3464
	ctx.r3.s64 = ctx.r10.s64 + -3464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF72B4;
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

__attribute__((alias("__imp__sub_83BF72C4"))) PPC_WEAK_FUNC(sub_83BF72C4);
PPC_FUNC_IMPL(__imp__sub_83BF72C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF72C8"))) PPC_WEAK_FUNC(sub_83BF72C8);
PPC_FUNC_IMPL(__imp__sub_83BF72C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3240
	ctx.r7.s64 = ctx.r8.s64 + 3240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF72F0"))) PPC_WEAK_FUNC(sub_83BF72F0);
PPC_FUNC_IMPL(__imp__sub_83BF72F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,7368
	ctx.r6.s64 = ctx.r7.s64 + 7368;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7296(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7296);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3240);
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
	// std r9,7368(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7338"))) PPC_WEAK_FUNC(sub_83BF7338);
PPC_FUNC_IMPL(__imp__sub_83BF7338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3448
	ctx.r3.s64 = ctx.r11.s64 + -3448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7344"))) PPC_WEAK_FUNC(sub_83BF7344);
PPC_FUNC_IMPL(__imp__sub_83BF7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7348"))) PPC_WEAK_FUNC(sub_83BF7348);
PPC_FUNC_IMPL(__imp__sub_83BF7348) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3248
	ctx.r3.s64 = ctx.r11.s64 + 3248;
	// bl 0x8259af80
	ctx.lr = 0x83BF7360;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3432
	ctx.r3.s64 = ctx.r10.s64 + -3432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF736C;
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

__attribute__((alias("__imp__sub_83BF737C"))) PPC_WEAK_FUNC(sub_83BF737C);
PPC_FUNC_IMPL(__imp__sub_83BF737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7380"))) PPC_WEAK_FUNC(sub_83BF7380);
PPC_FUNC_IMPL(__imp__sub_83BF7380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3228
	ctx.r11.s64 = ctx.r8.s64 + 3228;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,7344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3440
	ctx.r3.s64 = ctx.r6.s64 + -3440;
	// stw r10,3228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73B0"))) PPC_WEAK_FUNC(sub_83BF73B0);
PPC_FUNC_IMPL(__imp__sub_83BF73B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3424
	ctx.r3.s64 = ctx.r11.s64 + -3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73BC"))) PPC_WEAK_FUNC(sub_83BF73BC);
PPC_FUNC_IMPL(__imp__sub_83BF73BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF73C0"))) PPC_WEAK_FUNC(sub_83BF73C0);
PPC_FUNC_IMPL(__imp__sub_83BF73C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3416
	ctx.r3.s64 = ctx.r11.s64 + -3416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73CC"))) PPC_WEAK_FUNC(sub_83BF73CC);
PPC_FUNC_IMPL(__imp__sub_83BF73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF73D0"))) PPC_WEAK_FUNC(sub_83BF73D0);
PPC_FUNC_IMPL(__imp__sub_83BF73D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73DC"))) PPC_WEAK_FUNC(sub_83BF73DC);
PPC_FUNC_IMPL(__imp__sub_83BF73DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF73E0"))) PPC_WEAK_FUNC(sub_83BF73E0);
PPC_FUNC_IMPL(__imp__sub_83BF73E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3400
	ctx.r3.s64 = ctx.r11.s64 + -3400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73EC"))) PPC_WEAK_FUNC(sub_83BF73EC);
PPC_FUNC_IMPL(__imp__sub_83BF73EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF73F0"))) PPC_WEAK_FUNC(sub_83BF73F0);
PPC_FUNC_IMPL(__imp__sub_83BF73F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF73FC"))) PPC_WEAK_FUNC(sub_83BF73FC);
PPC_FUNC_IMPL(__imp__sub_83BF73FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7400"))) PPC_WEAK_FUNC(sub_83BF7400);
PPC_FUNC_IMPL(__imp__sub_83BF7400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3384
	ctx.r3.s64 = ctx.r11.s64 + -3384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF740C"))) PPC_WEAK_FUNC(sub_83BF740C);
PPC_FUNC_IMPL(__imp__sub_83BF740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7410"))) PPC_WEAK_FUNC(sub_83BF7410);
PPC_FUNC_IMPL(__imp__sub_83BF7410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF741C"))) PPC_WEAK_FUNC(sub_83BF741C);
PPC_FUNC_IMPL(__imp__sub_83BF741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7420"))) PPC_WEAK_FUNC(sub_83BF7420);
PPC_FUNC_IMPL(__imp__sub_83BF7420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF742C"))) PPC_WEAK_FUNC(sub_83BF742C);
PPC_FUNC_IMPL(__imp__sub_83BF742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7430"))) PPC_WEAK_FUNC(sub_83BF7430);
PPC_FUNC_IMPL(__imp__sub_83BF7430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF743C"))) PPC_WEAK_FUNC(sub_83BF743C);
PPC_FUNC_IMPL(__imp__sub_83BF743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7440"))) PPC_WEAK_FUNC(sub_83BF7440);
PPC_FUNC_IMPL(__imp__sub_83BF7440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3352
	ctx.r3.s64 = ctx.r11.s64 + -3352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF744C"))) PPC_WEAK_FUNC(sub_83BF744C);
PPC_FUNC_IMPL(__imp__sub_83BF744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7450"))) PPC_WEAK_FUNC(sub_83BF7450);
PPC_FUNC_IMPL(__imp__sub_83BF7450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3344
	ctx.r3.s64 = ctx.r11.s64 + -3344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF745C"))) PPC_WEAK_FUNC(sub_83BF745C);
PPC_FUNC_IMPL(__imp__sub_83BF745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7460"))) PPC_WEAK_FUNC(sub_83BF7460);
PPC_FUNC_IMPL(__imp__sub_83BF7460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3336
	ctx.r3.s64 = ctx.r11.s64 + -3336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF746C"))) PPC_WEAK_FUNC(sub_83BF746C);
PPC_FUNC_IMPL(__imp__sub_83BF746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7470"))) PPC_WEAK_FUNC(sub_83BF7470);
PPC_FUNC_IMPL(__imp__sub_83BF7470) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// bl 0x83523120
	ctx.lr = 0x83BF7488;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3328
	ctx.r3.s64 = ctx.r10.s64 + -3328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF7494;
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

__attribute__((alias("__imp__sub_83BF74A4"))) PPC_WEAK_FUNC(sub_83BF74A4);
PPC_FUNC_IMPL(__imp__sub_83BF74A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF74A8"))) PPC_WEAK_FUNC(sub_83BF74A8);
PPC_FUNC_IMPL(__imp__sub_83BF74A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3608
	ctx.r7.s64 = ctx.r8.s64 + 3608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF74D0"))) PPC_WEAK_FUNC(sub_83BF74D0);
PPC_FUNC_IMPL(__imp__sub_83BF74D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,7496
	ctx.r6.s64 = ctx.r7.s64 + 7496;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7424(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7424);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3608);
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
	// std r9,7496(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7496, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7518"))) PPC_WEAK_FUNC(sub_83BF7518);
PPC_FUNC_IMPL(__imp__sub_83BF7518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7524"))) PPC_WEAK_FUNC(sub_83BF7524);
PPC_FUNC_IMPL(__imp__sub_83BF7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7528"))) PPC_WEAK_FUNC(sub_83BF7528);
PPC_FUNC_IMPL(__imp__sub_83BF7528) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3616
	ctx.r3.s64 = ctx.r11.s64 + 3616;
	// bl 0x8259af80
	ctx.lr = 0x83BF7540;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3296
	ctx.r3.s64 = ctx.r10.s64 + -3296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF754C;
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

__attribute__((alias("__imp__sub_83BF755C"))) PPC_WEAK_FUNC(sub_83BF755C);
PPC_FUNC_IMPL(__imp__sub_83BF755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7560"))) PPC_WEAK_FUNC(sub_83BF7560);
PPC_FUNC_IMPL(__imp__sub_83BF7560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3596
	ctx.r11.s64 = ctx.r8.s64 + 3596;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,7472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7472);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3304
	ctx.r3.s64 = ctx.r6.s64 + -3304;
	// stw r10,3596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7590"))) PPC_WEAK_FUNC(sub_83BF7590);
PPC_FUNC_IMPL(__imp__sub_83BF7590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF759C"))) PPC_WEAK_FUNC(sub_83BF759C);
PPC_FUNC_IMPL(__imp__sub_83BF759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75A0"))) PPC_WEAK_FUNC(sub_83BF75A0);
PPC_FUNC_IMPL(__imp__sub_83BF75A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3280
	ctx.r3.s64 = ctx.r11.s64 + -3280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75AC"))) PPC_WEAK_FUNC(sub_83BF75AC);
PPC_FUNC_IMPL(__imp__sub_83BF75AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75B0"))) PPC_WEAK_FUNC(sub_83BF75B0);
PPC_FUNC_IMPL(__imp__sub_83BF75B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3272
	ctx.r3.s64 = ctx.r11.s64 + -3272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75BC"))) PPC_WEAK_FUNC(sub_83BF75BC);
PPC_FUNC_IMPL(__imp__sub_83BF75BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75C0"))) PPC_WEAK_FUNC(sub_83BF75C0);
PPC_FUNC_IMPL(__imp__sub_83BF75C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75CC"))) PPC_WEAK_FUNC(sub_83BF75CC);
PPC_FUNC_IMPL(__imp__sub_83BF75CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75D0"))) PPC_WEAK_FUNC(sub_83BF75D0);
PPC_FUNC_IMPL(__imp__sub_83BF75D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75DC"))) PPC_WEAK_FUNC(sub_83BF75DC);
PPC_FUNC_IMPL(__imp__sub_83BF75DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75E0"))) PPC_WEAK_FUNC(sub_83BF75E0);
PPC_FUNC_IMPL(__imp__sub_83BF75E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3248
	ctx.r3.s64 = ctx.r11.s64 + -3248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75EC"))) PPC_WEAK_FUNC(sub_83BF75EC);
PPC_FUNC_IMPL(__imp__sub_83BF75EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF75F0"))) PPC_WEAK_FUNC(sub_83BF75F0);
PPC_FUNC_IMPL(__imp__sub_83BF75F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3240
	ctx.r3.s64 = ctx.r11.s64 + -3240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF75FC"))) PPC_WEAK_FUNC(sub_83BF75FC);
PPC_FUNC_IMPL(__imp__sub_83BF75FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7600"))) PPC_WEAK_FUNC(sub_83BF7600);
PPC_FUNC_IMPL(__imp__sub_83BF7600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF760C"))) PPC_WEAK_FUNC(sub_83BF760C);
PPC_FUNC_IMPL(__imp__sub_83BF760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7610"))) PPC_WEAK_FUNC(sub_83BF7610);
PPC_FUNC_IMPL(__imp__sub_83BF7610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3224
	ctx.r3.s64 = ctx.r11.s64 + -3224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF761C"))) PPC_WEAK_FUNC(sub_83BF761C);
PPC_FUNC_IMPL(__imp__sub_83BF761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7620"))) PPC_WEAK_FUNC(sub_83BF7620);
PPC_FUNC_IMPL(__imp__sub_83BF7620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3216
	ctx.r3.s64 = ctx.r11.s64 + -3216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF762C"))) PPC_WEAK_FUNC(sub_83BF762C);
PPC_FUNC_IMPL(__imp__sub_83BF762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7630"))) PPC_WEAK_FUNC(sub_83BF7630);
PPC_FUNC_IMPL(__imp__sub_83BF7630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3208
	ctx.r3.s64 = ctx.r11.s64 + -3208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF763C"))) PPC_WEAK_FUNC(sub_83BF763C);
PPC_FUNC_IMPL(__imp__sub_83BF763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7640"))) PPC_WEAK_FUNC(sub_83BF7640);
PPC_FUNC_IMPL(__imp__sub_83BF7640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3200
	ctx.r3.s64 = ctx.r11.s64 + -3200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF764C"))) PPC_WEAK_FUNC(sub_83BF764C);
PPC_FUNC_IMPL(__imp__sub_83BF764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7650"))) PPC_WEAK_FUNC(sub_83BF7650);
PPC_FUNC_IMPL(__imp__sub_83BF7650) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// bl 0x83523120
	ctx.lr = 0x83BF7668;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3192
	ctx.r3.s64 = ctx.r10.s64 + -3192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF7674;
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

__attribute__((alias("__imp__sub_83BF7684"))) PPC_WEAK_FUNC(sub_83BF7684);
PPC_FUNC_IMPL(__imp__sub_83BF7684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7688"))) PPC_WEAK_FUNC(sub_83BF7688);
PPC_FUNC_IMPL(__imp__sub_83BF7688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3976
	ctx.r7.s64 = ctx.r8.s64 + 3976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF76B0"))) PPC_WEAK_FUNC(sub_83BF76B0);
PPC_FUNC_IMPL(__imp__sub_83BF76B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,7704
	ctx.r6.s64 = ctx.r7.s64 + 7704;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3976);
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
	// std r9,7704(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF76F8"))) PPC_WEAK_FUNC(sub_83BF76F8);
PPC_FUNC_IMPL(__imp__sub_83BF76F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3176
	ctx.r3.s64 = ctx.r11.s64 + -3176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7704"))) PPC_WEAK_FUNC(sub_83BF7704);
PPC_FUNC_IMPL(__imp__sub_83BF7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7708"))) PPC_WEAK_FUNC(sub_83BF7708);
PPC_FUNC_IMPL(__imp__sub_83BF7708) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,3984
	ctx.r3.s64 = ctx.r11.s64 + 3984;
	// bl 0x8259af80
	ctx.lr = 0x83BF7720;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3160
	ctx.r3.s64 = ctx.r10.s64 + -3160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF772C;
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

__attribute__((alias("__imp__sub_83BF773C"))) PPC_WEAK_FUNC(sub_83BF773C);
PPC_FUNC_IMPL(__imp__sub_83BF773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7740"))) PPC_WEAK_FUNC(sub_83BF7740);
PPC_FUNC_IMPL(__imp__sub_83BF7740) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3964
	ctx.r11.s64 = ctx.r8.s64 + 3964;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,7680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7680);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3168
	ctx.r3.s64 = ctx.r6.s64 + -3168;
	// stw r10,3964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7770"))) PPC_WEAK_FUNC(sub_83BF7770);
PPC_FUNC_IMPL(__imp__sub_83BF7770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3152
	ctx.r3.s64 = ctx.r11.s64 + -3152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF777C"))) PPC_WEAK_FUNC(sub_83BF777C);
PPC_FUNC_IMPL(__imp__sub_83BF777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7780"))) PPC_WEAK_FUNC(sub_83BF7780);
PPC_FUNC_IMPL(__imp__sub_83BF7780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF778C"))) PPC_WEAK_FUNC(sub_83BF778C);
PPC_FUNC_IMPL(__imp__sub_83BF778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7790"))) PPC_WEAK_FUNC(sub_83BF7790);
PPC_FUNC_IMPL(__imp__sub_83BF7790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3136
	ctx.r3.s64 = ctx.r11.s64 + -3136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF779C"))) PPC_WEAK_FUNC(sub_83BF779C);
PPC_FUNC_IMPL(__imp__sub_83BF779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77A0"))) PPC_WEAK_FUNC(sub_83BF77A0);
PPC_FUNC_IMPL(__imp__sub_83BF77A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3128
	ctx.r3.s64 = ctx.r11.s64 + -3128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77AC"))) PPC_WEAK_FUNC(sub_83BF77AC);
PPC_FUNC_IMPL(__imp__sub_83BF77AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77B0"))) PPC_WEAK_FUNC(sub_83BF77B0);
PPC_FUNC_IMPL(__imp__sub_83BF77B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3120
	ctx.r3.s64 = ctx.r11.s64 + -3120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77BC"))) PPC_WEAK_FUNC(sub_83BF77BC);
PPC_FUNC_IMPL(__imp__sub_83BF77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77C0"))) PPC_WEAK_FUNC(sub_83BF77C0);
PPC_FUNC_IMPL(__imp__sub_83BF77C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3112
	ctx.r3.s64 = ctx.r11.s64 + -3112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77CC"))) PPC_WEAK_FUNC(sub_83BF77CC);
PPC_FUNC_IMPL(__imp__sub_83BF77CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77D0"))) PPC_WEAK_FUNC(sub_83BF77D0);
PPC_FUNC_IMPL(__imp__sub_83BF77D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3104
	ctx.r3.s64 = ctx.r11.s64 + -3104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77DC"))) PPC_WEAK_FUNC(sub_83BF77DC);
PPC_FUNC_IMPL(__imp__sub_83BF77DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77E0"))) PPC_WEAK_FUNC(sub_83BF77E0);
PPC_FUNC_IMPL(__imp__sub_83BF77E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3096
	ctx.r3.s64 = ctx.r11.s64 + -3096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77EC"))) PPC_WEAK_FUNC(sub_83BF77EC);
PPC_FUNC_IMPL(__imp__sub_83BF77EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF77F0"))) PPC_WEAK_FUNC(sub_83BF77F0);
PPC_FUNC_IMPL(__imp__sub_83BF77F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF77FC"))) PPC_WEAK_FUNC(sub_83BF77FC);
PPC_FUNC_IMPL(__imp__sub_83BF77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7800"))) PPC_WEAK_FUNC(sub_83BF7800);
PPC_FUNC_IMPL(__imp__sub_83BF7800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3080
	ctx.r3.s64 = ctx.r11.s64 + -3080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF780C"))) PPC_WEAK_FUNC(sub_83BF780C);
PPC_FUNC_IMPL(__imp__sub_83BF780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7810"))) PPC_WEAK_FUNC(sub_83BF7810);
PPC_FUNC_IMPL(__imp__sub_83BF7810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF781C"))) PPC_WEAK_FUNC(sub_83BF781C);
PPC_FUNC_IMPL(__imp__sub_83BF781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7820"))) PPC_WEAK_FUNC(sub_83BF7820);
PPC_FUNC_IMPL(__imp__sub_83BF7820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF782C"))) PPC_WEAK_FUNC(sub_83BF782C);
PPC_FUNC_IMPL(__imp__sub_83BF782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7830"))) PPC_WEAK_FUNC(sub_83BF7830);
PPC_FUNC_IMPL(__imp__sub_83BF7830) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// bl 0x83523120
	ctx.lr = 0x83BF7848;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3056
	ctx.r3.s64 = ctx.r10.s64 + -3056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF7854;
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

__attribute__((alias("__imp__sub_83BF7864"))) PPC_WEAK_FUNC(sub_83BF7864);
PPC_FUNC_IMPL(__imp__sub_83BF7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7868"))) PPC_WEAK_FUNC(sub_83BF7868);
PPC_FUNC_IMPL(__imp__sub_83BF7868) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4344
	ctx.r7.s64 = ctx.r8.s64 + 4344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7890"))) PPC_WEAK_FUNC(sub_83BF7890);
PPC_FUNC_IMPL(__imp__sub_83BF7890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,7912
	ctx.r6.s64 = ctx.r7.s64 + 7912;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4344);
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
	// std r9,7912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF78D8"))) PPC_WEAK_FUNC(sub_83BF78D8);
PPC_FUNC_IMPL(__imp__sub_83BF78D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF78E4"))) PPC_WEAK_FUNC(sub_83BF78E4);
PPC_FUNC_IMPL(__imp__sub_83BF78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF78E8"))) PPC_WEAK_FUNC(sub_83BF78E8);
PPC_FUNC_IMPL(__imp__sub_83BF78E8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x8259af80
	ctx.lr = 0x83BF7900;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3024
	ctx.r3.s64 = ctx.r10.s64 + -3024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF790C;
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

__attribute__((alias("__imp__sub_83BF791C"))) PPC_WEAK_FUNC(sub_83BF791C);
PPC_FUNC_IMPL(__imp__sub_83BF791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7920"))) PPC_WEAK_FUNC(sub_83BF7920);
PPC_FUNC_IMPL(__imp__sub_83BF7920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4332
	ctx.r11.s64 = ctx.r8.s64 + 4332;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,7888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3032
	ctx.r3.s64 = ctx.r6.s64 + -3032;
	// stw r10,4332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7950"))) PPC_WEAK_FUNC(sub_83BF7950);
PPC_FUNC_IMPL(__imp__sub_83BF7950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3016
	ctx.r3.s64 = ctx.r11.s64 + -3016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF795C"))) PPC_WEAK_FUNC(sub_83BF795C);
PPC_FUNC_IMPL(__imp__sub_83BF795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7960"))) PPC_WEAK_FUNC(sub_83BF7960);
PPC_FUNC_IMPL(__imp__sub_83BF7960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3008
	ctx.r3.s64 = ctx.r11.s64 + -3008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF796C"))) PPC_WEAK_FUNC(sub_83BF796C);
PPC_FUNC_IMPL(__imp__sub_83BF796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7970"))) PPC_WEAK_FUNC(sub_83BF7970);
PPC_FUNC_IMPL(__imp__sub_83BF7970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3000
	ctx.r3.s64 = ctx.r11.s64 + -3000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF797C"))) PPC_WEAK_FUNC(sub_83BF797C);
PPC_FUNC_IMPL(__imp__sub_83BF797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7980"))) PPC_WEAK_FUNC(sub_83BF7980);
PPC_FUNC_IMPL(__imp__sub_83BF7980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2992
	ctx.r3.s64 = ctx.r11.s64 + -2992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF798C"))) PPC_WEAK_FUNC(sub_83BF798C);
PPC_FUNC_IMPL(__imp__sub_83BF798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7990"))) PPC_WEAK_FUNC(sub_83BF7990);
PPC_FUNC_IMPL(__imp__sub_83BF7990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF799C"))) PPC_WEAK_FUNC(sub_83BF799C);
PPC_FUNC_IMPL(__imp__sub_83BF799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79A0"))) PPC_WEAK_FUNC(sub_83BF79A0);
PPC_FUNC_IMPL(__imp__sub_83BF79A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2976
	ctx.r3.s64 = ctx.r11.s64 + -2976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79AC"))) PPC_WEAK_FUNC(sub_83BF79AC);
PPC_FUNC_IMPL(__imp__sub_83BF79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79B0"))) PPC_WEAK_FUNC(sub_83BF79B0);
PPC_FUNC_IMPL(__imp__sub_83BF79B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2968
	ctx.r3.s64 = ctx.r11.s64 + -2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79BC"))) PPC_WEAK_FUNC(sub_83BF79BC);
PPC_FUNC_IMPL(__imp__sub_83BF79BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79C0"))) PPC_WEAK_FUNC(sub_83BF79C0);
PPC_FUNC_IMPL(__imp__sub_83BF79C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2960
	ctx.r3.s64 = ctx.r11.s64 + -2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79CC"))) PPC_WEAK_FUNC(sub_83BF79CC);
PPC_FUNC_IMPL(__imp__sub_83BF79CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79D0"))) PPC_WEAK_FUNC(sub_83BF79D0);
PPC_FUNC_IMPL(__imp__sub_83BF79D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2952
	ctx.r3.s64 = ctx.r11.s64 + -2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79DC"))) PPC_WEAK_FUNC(sub_83BF79DC);
PPC_FUNC_IMPL(__imp__sub_83BF79DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79E0"))) PPC_WEAK_FUNC(sub_83BF79E0);
PPC_FUNC_IMPL(__imp__sub_83BF79E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79EC"))) PPC_WEAK_FUNC(sub_83BF79EC);
PPC_FUNC_IMPL(__imp__sub_83BF79EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF79F0"))) PPC_WEAK_FUNC(sub_83BF79F0);
PPC_FUNC_IMPL(__imp__sub_83BF79F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2936
	ctx.r3.s64 = ctx.r11.s64 + -2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF79FC"))) PPC_WEAK_FUNC(sub_83BF79FC);
PPC_FUNC_IMPL(__imp__sub_83BF79FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7A00"))) PPC_WEAK_FUNC(sub_83BF7A00);
PPC_FUNC_IMPL(__imp__sub_83BF7A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7A0C"))) PPC_WEAK_FUNC(sub_83BF7A0C);
PPC_FUNC_IMPL(__imp__sub_83BF7A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7A10"))) PPC_WEAK_FUNC(sub_83BF7A10);
PPC_FUNC_IMPL(__imp__sub_83BF7A10) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,4696
	ctx.r3.s64 = ctx.r11.s64 + 4696;
	// bl 0x83523120
	ctx.lr = 0x83BF7A28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-2920
	ctx.r3.s64 = ctx.r10.s64 + -2920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF7A34;
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

__attribute__((alias("__imp__sub_83BF7A44"))) PPC_WEAK_FUNC(sub_83BF7A44);
PPC_FUNC_IMPL(__imp__sub_83BF7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7A48"))) PPC_WEAK_FUNC(sub_83BF7A48);
PPC_FUNC_IMPL(__imp__sub_83BF7A48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4712
	ctx.r7.s64 = ctx.r8.s64 + 4712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7A70"))) PPC_WEAK_FUNC(sub_83BF7A70);
PPC_FUNC_IMPL(__imp__sub_83BF7A70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,8040
	ctx.r6.s64 = ctx.r7.s64 + 8040;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7968(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7968);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
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
	// std r9,8040(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8040, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF7AB8"))) PPC_WEAK_FUNC(sub_83BF7AB8);
PPC_FUNC_IMPL(__imp__sub_83BF7AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2904
	ctx.r3.s64 = ctx.r11.s64 + -2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7AC4"))) PPC_WEAK_FUNC(sub_83BF7AC4);
PPC_FUNC_IMPL(__imp__sub_83BF7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7AC8"))) PPC_WEAK_FUNC(sub_83BF7AC8);
PPC_FUNC_IMPL(__imp__sub_83BF7AC8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// bl 0x8259af80
	ctx.lr = 0x83BF7AE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-2888
	ctx.r3.s64 = ctx.r10.s64 + -2888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF7AEC;
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

__attribute__((alias("__imp__sub_83BF7AFC"))) PPC_WEAK_FUNC(sub_83BF7AFC);
PPC_FUNC_IMPL(__imp__sub_83BF7AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7B00"))) PPC_WEAK_FUNC(sub_83BF7B00);
PPC_FUNC_IMPL(__imp__sub_83BF7B00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4700
	ctx.r11.s64 = ctx.r8.s64 + 4700;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,8016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2896
	ctx.r3.s64 = ctx.r6.s64 + -2896;
	// stw r10,4700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7B30"))) PPC_WEAK_FUNC(sub_83BF7B30);
PPC_FUNC_IMPL(__imp__sub_83BF7B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2880
	ctx.r3.s64 = ctx.r11.s64 + -2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7B3C"))) PPC_WEAK_FUNC(sub_83BF7B3C);
PPC_FUNC_IMPL(__imp__sub_83BF7B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF7B40"))) PPC_WEAK_FUNC(sub_83BF7B40);
PPC_FUNC_IMPL(__imp__sub_83BF7B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF7B4C"))) PPC_WEAK_FUNC(sub_83BF7B4C);
PPC_FUNC_IMPL(__imp__sub_83BF7B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

