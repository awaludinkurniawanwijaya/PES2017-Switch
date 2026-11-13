#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CDECAC"))) PPC_WEAK_FUNC(sub_83CDECAC);
PPC_FUNC_IMPL(__imp__sub_83CDECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDECB0"))) PPC_WEAK_FUNC(sub_83CDECB0);
PPC_FUNC_IMPL(__imp__sub_83CDECB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31668
	ctx.r11.s64 = ctx.r8.s64 + 31668;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,15528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2912
	ctx.r3.s64 = ctx.r6.s64 + -2912;
	// stw r10,31668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDECE0"))) PPC_WEAK_FUNC(sub_83CDECE0);
PPC_FUNC_IMPL(__imp__sub_83CDECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2896
	ctx.r3.s64 = ctx.r11.s64 + -2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDECEC"))) PPC_WEAK_FUNC(sub_83CDECEC);
PPC_FUNC_IMPL(__imp__sub_83CDECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDECF0"))) PPC_WEAK_FUNC(sub_83CDECF0);
PPC_FUNC_IMPL(__imp__sub_83CDECF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2888
	ctx.r3.s64 = ctx.r11.s64 + -2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDECFC"))) PPC_WEAK_FUNC(sub_83CDECFC);
PPC_FUNC_IMPL(__imp__sub_83CDECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED00"))) PPC_WEAK_FUNC(sub_83CDED00);
PPC_FUNC_IMPL(__imp__sub_83CDED00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2880
	ctx.r3.s64 = ctx.r11.s64 + -2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED0C"))) PPC_WEAK_FUNC(sub_83CDED0C);
PPC_FUNC_IMPL(__imp__sub_83CDED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED10"))) PPC_WEAK_FUNC(sub_83CDED10);
PPC_FUNC_IMPL(__imp__sub_83CDED10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED1C"))) PPC_WEAK_FUNC(sub_83CDED1C);
PPC_FUNC_IMPL(__imp__sub_83CDED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED20"))) PPC_WEAK_FUNC(sub_83CDED20);
PPC_FUNC_IMPL(__imp__sub_83CDED20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2864
	ctx.r3.s64 = ctx.r11.s64 + -2864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED2C"))) PPC_WEAK_FUNC(sub_83CDED2C);
PPC_FUNC_IMPL(__imp__sub_83CDED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED30"))) PPC_WEAK_FUNC(sub_83CDED30);
PPC_FUNC_IMPL(__imp__sub_83CDED30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2856
	ctx.r3.s64 = ctx.r11.s64 + -2856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED3C"))) PPC_WEAK_FUNC(sub_83CDED3C);
PPC_FUNC_IMPL(__imp__sub_83CDED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED40"))) PPC_WEAK_FUNC(sub_83CDED40);
PPC_FUNC_IMPL(__imp__sub_83CDED40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2848
	ctx.r3.s64 = ctx.r11.s64 + -2848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED4C"))) PPC_WEAK_FUNC(sub_83CDED4C);
PPC_FUNC_IMPL(__imp__sub_83CDED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED50"))) PPC_WEAK_FUNC(sub_83CDED50);
PPC_FUNC_IMPL(__imp__sub_83CDED50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2840
	ctx.r3.s64 = ctx.r11.s64 + -2840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED5C"))) PPC_WEAK_FUNC(sub_83CDED5C);
PPC_FUNC_IMPL(__imp__sub_83CDED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED60"))) PPC_WEAK_FUNC(sub_83CDED60);
PPC_FUNC_IMPL(__imp__sub_83CDED60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2832
	ctx.r3.s64 = ctx.r11.s64 + -2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED6C"))) PPC_WEAK_FUNC(sub_83CDED6C);
PPC_FUNC_IMPL(__imp__sub_83CDED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED70"))) PPC_WEAK_FUNC(sub_83CDED70);
PPC_FUNC_IMPL(__imp__sub_83CDED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED7C"))) PPC_WEAK_FUNC(sub_83CDED7C);
PPC_FUNC_IMPL(__imp__sub_83CDED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED80"))) PPC_WEAK_FUNC(sub_83CDED80);
PPC_FUNC_IMPL(__imp__sub_83CDED80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2816
	ctx.r3.s64 = ctx.r11.s64 + -2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED8C"))) PPC_WEAK_FUNC(sub_83CDED8C);
PPC_FUNC_IMPL(__imp__sub_83CDED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDED90"))) PPC_WEAK_FUNC(sub_83CDED90);
PPC_FUNC_IMPL(__imp__sub_83CDED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDED9C"))) PPC_WEAK_FUNC(sub_83CDED9C);
PPC_FUNC_IMPL(__imp__sub_83CDED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEDA0"))) PPC_WEAK_FUNC(sub_83CDEDA0);
PPC_FUNC_IMPL(__imp__sub_83CDEDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32048
	ctx.r7.s64 = ctx.r8.s64 + 32048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDEDC8"))) PPC_WEAK_FUNC(sub_83CDEDC8);
PPC_FUNC_IMPL(__imp__sub_83CDEDC8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// bl 0x83523120
	ctx.lr = 0x83CDEDE0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2800
	ctx.r3.s64 = ctx.r10.s64 + -2800;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDEDEC;
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

__attribute__((alias("__imp__sub_83CDEDFC"))) PPC_WEAK_FUNC(sub_83CDEDFC);
PPC_FUNC_IMPL(__imp__sub_83CDEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEE00"))) PPC_WEAK_FUNC(sub_83CDEE00);
PPC_FUNC_IMPL(__imp__sub_83CDEE00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,15708
	ctx.r6.s64 = ctx.r7.s64 + 15708;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32048);
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
	// std r9,15708(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDEE48"))) PPC_WEAK_FUNC(sub_83CDEE48);
PPC_FUNC_IMPL(__imp__sub_83CDEE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2784
	ctx.r3.s64 = ctx.r11.s64 + -2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEE54"))) PPC_WEAK_FUNC(sub_83CDEE54);
PPC_FUNC_IMPL(__imp__sub_83CDEE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEE58"))) PPC_WEAK_FUNC(sub_83CDEE58);
PPC_FUNC_IMPL(__imp__sub_83CDEE58) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// bl 0x8259af80
	ctx.lr = 0x83CDEE70;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2768
	ctx.r3.s64 = ctx.r10.s64 + -2768;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDEE7C;
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

__attribute__((alias("__imp__sub_83CDEE8C"))) PPC_WEAK_FUNC(sub_83CDEE8C);
PPC_FUNC_IMPL(__imp__sub_83CDEE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEE90"))) PPC_WEAK_FUNC(sub_83CDEE90);
PPC_FUNC_IMPL(__imp__sub_83CDEE90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32036
	ctx.r11.s64 = ctx.r8.s64 + 32036;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,15672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2776
	ctx.r3.s64 = ctx.r6.s64 + -2776;
	// stw r10,32036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEEC0"))) PPC_WEAK_FUNC(sub_83CDEEC0);
PPC_FUNC_IMPL(__imp__sub_83CDEEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEECC"))) PPC_WEAK_FUNC(sub_83CDEECC);
PPC_FUNC_IMPL(__imp__sub_83CDEECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEED0"))) PPC_WEAK_FUNC(sub_83CDEED0);
PPC_FUNC_IMPL(__imp__sub_83CDEED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2752
	ctx.r3.s64 = ctx.r11.s64 + -2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEEDC"))) PPC_WEAK_FUNC(sub_83CDEEDC);
PPC_FUNC_IMPL(__imp__sub_83CDEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEEE0"))) PPC_WEAK_FUNC(sub_83CDEEE0);
PPC_FUNC_IMPL(__imp__sub_83CDEEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2744
	ctx.r3.s64 = ctx.r11.s64 + -2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEEEC"))) PPC_WEAK_FUNC(sub_83CDEEEC);
PPC_FUNC_IMPL(__imp__sub_83CDEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEEF0"))) PPC_WEAK_FUNC(sub_83CDEEF0);
PPC_FUNC_IMPL(__imp__sub_83CDEEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2736
	ctx.r3.s64 = ctx.r11.s64 + -2736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEEFC"))) PPC_WEAK_FUNC(sub_83CDEEFC);
PPC_FUNC_IMPL(__imp__sub_83CDEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF00"))) PPC_WEAK_FUNC(sub_83CDEF00);
PPC_FUNC_IMPL(__imp__sub_83CDEF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2728
	ctx.r3.s64 = ctx.r11.s64 + -2728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF0C"))) PPC_WEAK_FUNC(sub_83CDEF0C);
PPC_FUNC_IMPL(__imp__sub_83CDEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF10"))) PPC_WEAK_FUNC(sub_83CDEF10);
PPC_FUNC_IMPL(__imp__sub_83CDEF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2720
	ctx.r3.s64 = ctx.r11.s64 + -2720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF1C"))) PPC_WEAK_FUNC(sub_83CDEF1C);
PPC_FUNC_IMPL(__imp__sub_83CDEF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF20"))) PPC_WEAK_FUNC(sub_83CDEF20);
PPC_FUNC_IMPL(__imp__sub_83CDEF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2712
	ctx.r3.s64 = ctx.r11.s64 + -2712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF2C"))) PPC_WEAK_FUNC(sub_83CDEF2C);
PPC_FUNC_IMPL(__imp__sub_83CDEF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF30"))) PPC_WEAK_FUNC(sub_83CDEF30);
PPC_FUNC_IMPL(__imp__sub_83CDEF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2704
	ctx.r3.s64 = ctx.r11.s64 + -2704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF3C"))) PPC_WEAK_FUNC(sub_83CDEF3C);
PPC_FUNC_IMPL(__imp__sub_83CDEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF40"))) PPC_WEAK_FUNC(sub_83CDEF40);
PPC_FUNC_IMPL(__imp__sub_83CDEF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2696
	ctx.r3.s64 = ctx.r11.s64 + -2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF4C"))) PPC_WEAK_FUNC(sub_83CDEF4C);
PPC_FUNC_IMPL(__imp__sub_83CDEF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF50"))) PPC_WEAK_FUNC(sub_83CDEF50);
PPC_FUNC_IMPL(__imp__sub_83CDEF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2688
	ctx.r3.s64 = ctx.r11.s64 + -2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF5C"))) PPC_WEAK_FUNC(sub_83CDEF5C);
PPC_FUNC_IMPL(__imp__sub_83CDEF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF60"))) PPC_WEAK_FUNC(sub_83CDEF60);
PPC_FUNC_IMPL(__imp__sub_83CDEF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2680
	ctx.r3.s64 = ctx.r11.s64 + -2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF6C"))) PPC_WEAK_FUNC(sub_83CDEF6C);
PPC_FUNC_IMPL(__imp__sub_83CDEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF70"))) PPC_WEAK_FUNC(sub_83CDEF70);
PPC_FUNC_IMPL(__imp__sub_83CDEF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2672
	ctx.r3.s64 = ctx.r11.s64 + -2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDEF7C"))) PPC_WEAK_FUNC(sub_83CDEF7C);
PPC_FUNC_IMPL(__imp__sub_83CDEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEF80"))) PPC_WEAK_FUNC(sub_83CDEF80);
PPC_FUNC_IMPL(__imp__sub_83CDEF80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32416
	ctx.r7.s64 = ctx.r8.s64 + 32416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDEFA8"))) PPC_WEAK_FUNC(sub_83CDEFA8);
PPC_FUNC_IMPL(__imp__sub_83CDEFA8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// bl 0x83523120
	ctx.lr = 0x83CDEFC0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2664
	ctx.r3.s64 = ctx.r10.s64 + -2664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDEFCC;
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

__attribute__((alias("__imp__sub_83CDEFDC"))) PPC_WEAK_FUNC(sub_83CDEFDC);
PPC_FUNC_IMPL(__imp__sub_83CDEFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDEFE0"))) PPC_WEAK_FUNC(sub_83CDEFE0);
PPC_FUNC_IMPL(__imp__sub_83CDEFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,16692
	ctx.r6.s64 = ctx.r7.s64 + 16692;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16608(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16608);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32416);
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
	// std r9,16692(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF028"))) PPC_WEAK_FUNC(sub_83CDF028);
PPC_FUNC_IMPL(__imp__sub_83CDF028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2648
	ctx.r3.s64 = ctx.r11.s64 + -2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF034"))) PPC_WEAK_FUNC(sub_83CDF034);
PPC_FUNC_IMPL(__imp__sub_83CDF034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF038"))) PPC_WEAK_FUNC(sub_83CDF038);
PPC_FUNC_IMPL(__imp__sub_83CDF038) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,32424
	ctx.r3.s64 = ctx.r11.s64 + 32424;
	// bl 0x8259af80
	ctx.lr = 0x83CDF050;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2632
	ctx.r3.s64 = ctx.r10.s64 + -2632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF05C;
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

__attribute__((alias("__imp__sub_83CDF06C"))) PPC_WEAK_FUNC(sub_83CDF06C);
PPC_FUNC_IMPL(__imp__sub_83CDF06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF070"))) PPC_WEAK_FUNC(sub_83CDF070);
PPC_FUNC_IMPL(__imp__sub_83CDF070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32404
	ctx.r11.s64 = ctx.r8.s64 + 32404;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,16656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16656);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2640
	ctx.r3.s64 = ctx.r6.s64 + -2640;
	// stw r10,32404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0A0"))) PPC_WEAK_FUNC(sub_83CDF0A0);
PPC_FUNC_IMPL(__imp__sub_83CDF0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0AC"))) PPC_WEAK_FUNC(sub_83CDF0AC);
PPC_FUNC_IMPL(__imp__sub_83CDF0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF0B0"))) PPC_WEAK_FUNC(sub_83CDF0B0);
PPC_FUNC_IMPL(__imp__sub_83CDF0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2616
	ctx.r3.s64 = ctx.r11.s64 + -2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0BC"))) PPC_WEAK_FUNC(sub_83CDF0BC);
PPC_FUNC_IMPL(__imp__sub_83CDF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF0C0"))) PPC_WEAK_FUNC(sub_83CDF0C0);
PPC_FUNC_IMPL(__imp__sub_83CDF0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0CC"))) PPC_WEAK_FUNC(sub_83CDF0CC);
PPC_FUNC_IMPL(__imp__sub_83CDF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF0D0"))) PPC_WEAK_FUNC(sub_83CDF0D0);
PPC_FUNC_IMPL(__imp__sub_83CDF0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2600
	ctx.r3.s64 = ctx.r11.s64 + -2600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0DC"))) PPC_WEAK_FUNC(sub_83CDF0DC);
PPC_FUNC_IMPL(__imp__sub_83CDF0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF0E0"))) PPC_WEAK_FUNC(sub_83CDF0E0);
PPC_FUNC_IMPL(__imp__sub_83CDF0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2592
	ctx.r3.s64 = ctx.r11.s64 + -2592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0EC"))) PPC_WEAK_FUNC(sub_83CDF0EC);
PPC_FUNC_IMPL(__imp__sub_83CDF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF0F0"))) PPC_WEAK_FUNC(sub_83CDF0F0);
PPC_FUNC_IMPL(__imp__sub_83CDF0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2584
	ctx.r3.s64 = ctx.r11.s64 + -2584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF0FC"))) PPC_WEAK_FUNC(sub_83CDF0FC);
PPC_FUNC_IMPL(__imp__sub_83CDF0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF100"))) PPC_WEAK_FUNC(sub_83CDF100);
PPC_FUNC_IMPL(__imp__sub_83CDF100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2576
	ctx.r3.s64 = ctx.r11.s64 + -2576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF10C"))) PPC_WEAK_FUNC(sub_83CDF10C);
PPC_FUNC_IMPL(__imp__sub_83CDF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF110"))) PPC_WEAK_FUNC(sub_83CDF110);
PPC_FUNC_IMPL(__imp__sub_83CDF110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2568
	ctx.r3.s64 = ctx.r11.s64 + -2568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF11C"))) PPC_WEAK_FUNC(sub_83CDF11C);
PPC_FUNC_IMPL(__imp__sub_83CDF11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF120"))) PPC_WEAK_FUNC(sub_83CDF120);
PPC_FUNC_IMPL(__imp__sub_83CDF120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2560
	ctx.r3.s64 = ctx.r11.s64 + -2560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF12C"))) PPC_WEAK_FUNC(sub_83CDF12C);
PPC_FUNC_IMPL(__imp__sub_83CDF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF130"))) PPC_WEAK_FUNC(sub_83CDF130);
PPC_FUNC_IMPL(__imp__sub_83CDF130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2552
	ctx.r3.s64 = ctx.r11.s64 + -2552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF13C"))) PPC_WEAK_FUNC(sub_83CDF13C);
PPC_FUNC_IMPL(__imp__sub_83CDF13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF140"))) PPC_WEAK_FUNC(sub_83CDF140);
PPC_FUNC_IMPL(__imp__sub_83CDF140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2544
	ctx.r3.s64 = ctx.r11.s64 + -2544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF14C"))) PPC_WEAK_FUNC(sub_83CDF14C);
PPC_FUNC_IMPL(__imp__sub_83CDF14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF150"))) PPC_WEAK_FUNC(sub_83CDF150);
PPC_FUNC_IMPL(__imp__sub_83CDF150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2536
	ctx.r3.s64 = ctx.r11.s64 + -2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF15C"))) PPC_WEAK_FUNC(sub_83CDF15C);
PPC_FUNC_IMPL(__imp__sub_83CDF15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF160"))) PPC_WEAK_FUNC(sub_83CDF160);
PPC_FUNC_IMPL(__imp__sub_83CDF160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32764
	ctx.r7.s64 = ctx.r8.s64 + -32764;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32764(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32764);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32764, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF188"))) PPC_WEAK_FUNC(sub_83CDF188);
PPC_FUNC_IMPL(__imp__sub_83CDF188) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// bl 0x83523120
	ctx.lr = 0x83CDF1A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2528
	ctx.r3.s64 = ctx.r10.s64 + -2528;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF1AC;
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

__attribute__((alias("__imp__sub_83CDF1BC"))) PPC_WEAK_FUNC(sub_83CDF1BC);
PPC_FUNC_IMPL(__imp__sub_83CDF1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF1C0"))) PPC_WEAK_FUNC(sub_83CDF1C0);
PPC_FUNC_IMPL(__imp__sub_83CDF1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32756
	ctx.r11.s64 = ctx.r11.s64 + -32756;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF200"))) PPC_WEAK_FUNC(sub_83CDF200);
PPC_FUNC_IMPL(__imp__sub_83CDF200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2512
	ctx.r3.s64 = ctx.r11.s64 + -2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF20C"))) PPC_WEAK_FUNC(sub_83CDF20C);
PPC_FUNC_IMPL(__imp__sub_83CDF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF210"))) PPC_WEAK_FUNC(sub_83CDF210);
PPC_FUNC_IMPL(__imp__sub_83CDF210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2504
	ctx.r3.s64 = ctx.r11.s64 + -2504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF21C"))) PPC_WEAK_FUNC(sub_83CDF21C);
PPC_FUNC_IMPL(__imp__sub_83CDF21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF220"))) PPC_WEAK_FUNC(sub_83CDF220);
PPC_FUNC_IMPL(__imp__sub_83CDF220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2496
	ctx.r3.s64 = ctx.r11.s64 + -2496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF22C"))) PPC_WEAK_FUNC(sub_83CDF22C);
PPC_FUNC_IMPL(__imp__sub_83CDF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF230"))) PPC_WEAK_FUNC(sub_83CDF230);
PPC_FUNC_IMPL(__imp__sub_83CDF230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2488
	ctx.r3.s64 = ctx.r11.s64 + -2488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF23C"))) PPC_WEAK_FUNC(sub_83CDF23C);
PPC_FUNC_IMPL(__imp__sub_83CDF23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF240"))) PPC_WEAK_FUNC(sub_83CDF240);
PPC_FUNC_IMPL(__imp__sub_83CDF240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2480
	ctx.r3.s64 = ctx.r11.s64 + -2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF24C"))) PPC_WEAK_FUNC(sub_83CDF24C);
PPC_FUNC_IMPL(__imp__sub_83CDF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF250"))) PPC_WEAK_FUNC(sub_83CDF250);
PPC_FUNC_IMPL(__imp__sub_83CDF250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2472
	ctx.r3.s64 = ctx.r11.s64 + -2472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF25C"))) PPC_WEAK_FUNC(sub_83CDF25C);
PPC_FUNC_IMPL(__imp__sub_83CDF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF260"))) PPC_WEAK_FUNC(sub_83CDF260);
PPC_FUNC_IMPL(__imp__sub_83CDF260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2464
	ctx.r3.s64 = ctx.r11.s64 + -2464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF26C"))) PPC_WEAK_FUNC(sub_83CDF26C);
PPC_FUNC_IMPL(__imp__sub_83CDF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF270"))) PPC_WEAK_FUNC(sub_83CDF270);
PPC_FUNC_IMPL(__imp__sub_83CDF270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2456
	ctx.r3.s64 = ctx.r11.s64 + -2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF27C"))) PPC_WEAK_FUNC(sub_83CDF27C);
PPC_FUNC_IMPL(__imp__sub_83CDF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF280"))) PPC_WEAK_FUNC(sub_83CDF280);
PPC_FUNC_IMPL(__imp__sub_83CDF280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2448
	ctx.r3.s64 = ctx.r11.s64 + -2448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF28C"))) PPC_WEAK_FUNC(sub_83CDF28C);
PPC_FUNC_IMPL(__imp__sub_83CDF28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF290"))) PPC_WEAK_FUNC(sub_83CDF290);
PPC_FUNC_IMPL(__imp__sub_83CDF290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2440
	ctx.r3.s64 = ctx.r11.s64 + -2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF29C"))) PPC_WEAK_FUNC(sub_83CDF29C);
PPC_FUNC_IMPL(__imp__sub_83CDF29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF2A0"))) PPC_WEAK_FUNC(sub_83CDF2A0);
PPC_FUNC_IMPL(__imp__sub_83CDF2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2432
	ctx.r3.s64 = ctx.r11.s64 + -2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF2AC"))) PPC_WEAK_FUNC(sub_83CDF2AC);
PPC_FUNC_IMPL(__imp__sub_83CDF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF2B0"))) PPC_WEAK_FUNC(sub_83CDF2B0);
PPC_FUNC_IMPL(__imp__sub_83CDF2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF2BC"))) PPC_WEAK_FUNC(sub_83CDF2BC);
PPC_FUNC_IMPL(__imp__sub_83CDF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF2C0"))) PPC_WEAK_FUNC(sub_83CDF2C0);
PPC_FUNC_IMPL(__imp__sub_83CDF2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32720
	ctx.r7.s64 = ctx.r8.s64 + -32720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF2E8"))) PPC_WEAK_FUNC(sub_83CDF2E8);
PPC_FUNC_IMPL(__imp__sub_83CDF2E8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32724
	ctx.r3.s64 = ctx.r11.s64 + -32724;
	// bl 0x83523120
	ctx.lr = 0x83CDF300;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2416
	ctx.r3.s64 = ctx.r10.s64 + -2416;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF30C;
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

__attribute__((alias("__imp__sub_83CDF31C"))) PPC_WEAK_FUNC(sub_83CDF31C);
PPC_FUNC_IMPL(__imp__sub_83CDF31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF320"))) PPC_WEAK_FUNC(sub_83CDF320);
PPC_FUNC_IMPL(__imp__sub_83CDF320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32712
	ctx.r11.s64 = ctx.r11.s64 + -32712;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF360"))) PPC_WEAK_FUNC(sub_83CDF360);
PPC_FUNC_IMPL(__imp__sub_83CDF360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2400
	ctx.r3.s64 = ctx.r11.s64 + -2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF36C"))) PPC_WEAK_FUNC(sub_83CDF36C);
PPC_FUNC_IMPL(__imp__sub_83CDF36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF370"))) PPC_WEAK_FUNC(sub_83CDF370);
PPC_FUNC_IMPL(__imp__sub_83CDF370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF37C"))) PPC_WEAK_FUNC(sub_83CDF37C);
PPC_FUNC_IMPL(__imp__sub_83CDF37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF380"))) PPC_WEAK_FUNC(sub_83CDF380);
PPC_FUNC_IMPL(__imp__sub_83CDF380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2384
	ctx.r3.s64 = ctx.r11.s64 + -2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF38C"))) PPC_WEAK_FUNC(sub_83CDF38C);
PPC_FUNC_IMPL(__imp__sub_83CDF38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF390"))) PPC_WEAK_FUNC(sub_83CDF390);
PPC_FUNC_IMPL(__imp__sub_83CDF390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2376
	ctx.r3.s64 = ctx.r11.s64 + -2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF39C"))) PPC_WEAK_FUNC(sub_83CDF39C);
PPC_FUNC_IMPL(__imp__sub_83CDF39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3A0"))) PPC_WEAK_FUNC(sub_83CDF3A0);
PPC_FUNC_IMPL(__imp__sub_83CDF3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2368
	ctx.r3.s64 = ctx.r11.s64 + -2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3AC"))) PPC_WEAK_FUNC(sub_83CDF3AC);
PPC_FUNC_IMPL(__imp__sub_83CDF3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3B0"))) PPC_WEAK_FUNC(sub_83CDF3B0);
PPC_FUNC_IMPL(__imp__sub_83CDF3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3BC"))) PPC_WEAK_FUNC(sub_83CDF3BC);
PPC_FUNC_IMPL(__imp__sub_83CDF3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3C0"))) PPC_WEAK_FUNC(sub_83CDF3C0);
PPC_FUNC_IMPL(__imp__sub_83CDF3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2352
	ctx.r3.s64 = ctx.r11.s64 + -2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3CC"))) PPC_WEAK_FUNC(sub_83CDF3CC);
PPC_FUNC_IMPL(__imp__sub_83CDF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3D0"))) PPC_WEAK_FUNC(sub_83CDF3D0);
PPC_FUNC_IMPL(__imp__sub_83CDF3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3DC"))) PPC_WEAK_FUNC(sub_83CDF3DC);
PPC_FUNC_IMPL(__imp__sub_83CDF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3E0"))) PPC_WEAK_FUNC(sub_83CDF3E0);
PPC_FUNC_IMPL(__imp__sub_83CDF3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3EC"))) PPC_WEAK_FUNC(sub_83CDF3EC);
PPC_FUNC_IMPL(__imp__sub_83CDF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF3F0"))) PPC_WEAK_FUNC(sub_83CDF3F0);
PPC_FUNC_IMPL(__imp__sub_83CDF3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF3FC"))) PPC_WEAK_FUNC(sub_83CDF3FC);
PPC_FUNC_IMPL(__imp__sub_83CDF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF400"))) PPC_WEAK_FUNC(sub_83CDF400);
PPC_FUNC_IMPL(__imp__sub_83CDF400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2320
	ctx.r3.s64 = ctx.r11.s64 + -2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF40C"))) PPC_WEAK_FUNC(sub_83CDF40C);
PPC_FUNC_IMPL(__imp__sub_83CDF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF410"))) PPC_WEAK_FUNC(sub_83CDF410);
PPC_FUNC_IMPL(__imp__sub_83CDF410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2312
	ctx.r3.s64 = ctx.r11.s64 + -2312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF41C"))) PPC_WEAK_FUNC(sub_83CDF41C);
PPC_FUNC_IMPL(__imp__sub_83CDF41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF420"))) PPC_WEAK_FUNC(sub_83CDF420);
PPC_FUNC_IMPL(__imp__sub_83CDF420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32676
	ctx.r7.s64 = ctx.r8.s64 + -32676;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32676(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32676);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32676, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF448"))) PPC_WEAK_FUNC(sub_83CDF448);
PPC_FUNC_IMPL(__imp__sub_83CDF448) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// bl 0x83523120
	ctx.lr = 0x83CDF460;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2304
	ctx.r3.s64 = ctx.r10.s64 + -2304;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF46C;
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

__attribute__((alias("__imp__sub_83CDF47C"))) PPC_WEAK_FUNC(sub_83CDF47C);
PPC_FUNC_IMPL(__imp__sub_83CDF47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF480"))) PPC_WEAK_FUNC(sub_83CDF480);
PPC_FUNC_IMPL(__imp__sub_83CDF480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,8048
	ctx.r4.s64 = ctx.r11.s64 + 8048;
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-32668
	ctx.r3.s64 = ctx.r7.s64 + -32668;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4B0"))) PPC_WEAK_FUNC(sub_83CDF4B0);
PPC_FUNC_IMPL(__imp__sub_83CDF4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2288
	ctx.r3.s64 = ctx.r11.s64 + -2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4BC"))) PPC_WEAK_FUNC(sub_83CDF4BC);
PPC_FUNC_IMPL(__imp__sub_83CDF4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF4C0"))) PPC_WEAK_FUNC(sub_83CDF4C0);
PPC_FUNC_IMPL(__imp__sub_83CDF4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2280
	ctx.r3.s64 = ctx.r11.s64 + -2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4CC"))) PPC_WEAK_FUNC(sub_83CDF4CC);
PPC_FUNC_IMPL(__imp__sub_83CDF4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF4D0"))) PPC_WEAK_FUNC(sub_83CDF4D0);
PPC_FUNC_IMPL(__imp__sub_83CDF4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2272
	ctx.r3.s64 = ctx.r11.s64 + -2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4DC"))) PPC_WEAK_FUNC(sub_83CDF4DC);
PPC_FUNC_IMPL(__imp__sub_83CDF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF4E0"))) PPC_WEAK_FUNC(sub_83CDF4E0);
PPC_FUNC_IMPL(__imp__sub_83CDF4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4EC"))) PPC_WEAK_FUNC(sub_83CDF4EC);
PPC_FUNC_IMPL(__imp__sub_83CDF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF4F0"))) PPC_WEAK_FUNC(sub_83CDF4F0);
PPC_FUNC_IMPL(__imp__sub_83CDF4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2256
	ctx.r3.s64 = ctx.r11.s64 + -2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF4FC"))) PPC_WEAK_FUNC(sub_83CDF4FC);
PPC_FUNC_IMPL(__imp__sub_83CDF4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF500"))) PPC_WEAK_FUNC(sub_83CDF500);
PPC_FUNC_IMPL(__imp__sub_83CDF500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2248
	ctx.r3.s64 = ctx.r11.s64 + -2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF50C"))) PPC_WEAK_FUNC(sub_83CDF50C);
PPC_FUNC_IMPL(__imp__sub_83CDF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF510"))) PPC_WEAK_FUNC(sub_83CDF510);
PPC_FUNC_IMPL(__imp__sub_83CDF510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2240
	ctx.r3.s64 = ctx.r11.s64 + -2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF51C"))) PPC_WEAK_FUNC(sub_83CDF51C);
PPC_FUNC_IMPL(__imp__sub_83CDF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF520"))) PPC_WEAK_FUNC(sub_83CDF520);
PPC_FUNC_IMPL(__imp__sub_83CDF520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF52C"))) PPC_WEAK_FUNC(sub_83CDF52C);
PPC_FUNC_IMPL(__imp__sub_83CDF52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF530"))) PPC_WEAK_FUNC(sub_83CDF530);
PPC_FUNC_IMPL(__imp__sub_83CDF530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2224
	ctx.r3.s64 = ctx.r11.s64 + -2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF53C"))) PPC_WEAK_FUNC(sub_83CDF53C);
PPC_FUNC_IMPL(__imp__sub_83CDF53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF540"))) PPC_WEAK_FUNC(sub_83CDF540);
PPC_FUNC_IMPL(__imp__sub_83CDF540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF54C"))) PPC_WEAK_FUNC(sub_83CDF54C);
PPC_FUNC_IMPL(__imp__sub_83CDF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF550"))) PPC_WEAK_FUNC(sub_83CDF550);
PPC_FUNC_IMPL(__imp__sub_83CDF550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2208
	ctx.r3.s64 = ctx.r11.s64 + -2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF55C"))) PPC_WEAK_FUNC(sub_83CDF55C);
PPC_FUNC_IMPL(__imp__sub_83CDF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF560"))) PPC_WEAK_FUNC(sub_83CDF560);
PPC_FUNC_IMPL(__imp__sub_83CDF560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF56C"))) PPC_WEAK_FUNC(sub_83CDF56C);
PPC_FUNC_IMPL(__imp__sub_83CDF56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF570"))) PPC_WEAK_FUNC(sub_83CDF570);
PPC_FUNC_IMPL(__imp__sub_83CDF570) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32652
	ctx.r7.s64 = ctx.r8.s64 + -32652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32652);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32652(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32652, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF598"))) PPC_WEAK_FUNC(sub_83CDF598);
PPC_FUNC_IMPL(__imp__sub_83CDF598) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// bl 0x83523120
	ctx.lr = 0x83CDF5B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2192
	ctx.r3.s64 = ctx.r10.s64 + -2192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF5BC;
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

__attribute__((alias("__imp__sub_83CDF5CC"))) PPC_WEAK_FUNC(sub_83CDF5CC);
PPC_FUNC_IMPL(__imp__sub_83CDF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF5D0"))) PPC_WEAK_FUNC(sub_83CDF5D0);
PPC_FUNC_IMPL(__imp__sub_83CDF5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32644
	ctx.r11.s64 = ctx.r11.s64 + -32644;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF610"))) PPC_WEAK_FUNC(sub_83CDF610);
PPC_FUNC_IMPL(__imp__sub_83CDF610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2176
	ctx.r3.s64 = ctx.r11.s64 + -2176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF61C"))) PPC_WEAK_FUNC(sub_83CDF61C);
PPC_FUNC_IMPL(__imp__sub_83CDF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF620"))) PPC_WEAK_FUNC(sub_83CDF620);
PPC_FUNC_IMPL(__imp__sub_83CDF620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2168
	ctx.r3.s64 = ctx.r11.s64 + -2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF62C"))) PPC_WEAK_FUNC(sub_83CDF62C);
PPC_FUNC_IMPL(__imp__sub_83CDF62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF630"))) PPC_WEAK_FUNC(sub_83CDF630);
PPC_FUNC_IMPL(__imp__sub_83CDF630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2160
	ctx.r3.s64 = ctx.r11.s64 + -2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF63C"))) PPC_WEAK_FUNC(sub_83CDF63C);
PPC_FUNC_IMPL(__imp__sub_83CDF63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF640"))) PPC_WEAK_FUNC(sub_83CDF640);
PPC_FUNC_IMPL(__imp__sub_83CDF640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2152
	ctx.r3.s64 = ctx.r11.s64 + -2152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF64C"))) PPC_WEAK_FUNC(sub_83CDF64C);
PPC_FUNC_IMPL(__imp__sub_83CDF64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF650"))) PPC_WEAK_FUNC(sub_83CDF650);
PPC_FUNC_IMPL(__imp__sub_83CDF650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2144
	ctx.r3.s64 = ctx.r11.s64 + -2144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF65C"))) PPC_WEAK_FUNC(sub_83CDF65C);
PPC_FUNC_IMPL(__imp__sub_83CDF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF660"))) PPC_WEAK_FUNC(sub_83CDF660);
PPC_FUNC_IMPL(__imp__sub_83CDF660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2136
	ctx.r3.s64 = ctx.r11.s64 + -2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF66C"))) PPC_WEAK_FUNC(sub_83CDF66C);
PPC_FUNC_IMPL(__imp__sub_83CDF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF670"))) PPC_WEAK_FUNC(sub_83CDF670);
PPC_FUNC_IMPL(__imp__sub_83CDF670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2128
	ctx.r3.s64 = ctx.r11.s64 + -2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF67C"))) PPC_WEAK_FUNC(sub_83CDF67C);
PPC_FUNC_IMPL(__imp__sub_83CDF67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF680"))) PPC_WEAK_FUNC(sub_83CDF680);
PPC_FUNC_IMPL(__imp__sub_83CDF680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF68C"))) PPC_WEAK_FUNC(sub_83CDF68C);
PPC_FUNC_IMPL(__imp__sub_83CDF68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF690"))) PPC_WEAK_FUNC(sub_83CDF690);
PPC_FUNC_IMPL(__imp__sub_83CDF690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2112
	ctx.r3.s64 = ctx.r11.s64 + -2112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF69C"))) PPC_WEAK_FUNC(sub_83CDF69C);
PPC_FUNC_IMPL(__imp__sub_83CDF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF6A0"))) PPC_WEAK_FUNC(sub_83CDF6A0);
PPC_FUNC_IMPL(__imp__sub_83CDF6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2104
	ctx.r3.s64 = ctx.r11.s64 + -2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF6AC"))) PPC_WEAK_FUNC(sub_83CDF6AC);
PPC_FUNC_IMPL(__imp__sub_83CDF6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF6B0"))) PPC_WEAK_FUNC(sub_83CDF6B0);
PPC_FUNC_IMPL(__imp__sub_83CDF6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2096
	ctx.r3.s64 = ctx.r11.s64 + -2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF6BC"))) PPC_WEAK_FUNC(sub_83CDF6BC);
PPC_FUNC_IMPL(__imp__sub_83CDF6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF6C0"))) PPC_WEAK_FUNC(sub_83CDF6C0);
PPC_FUNC_IMPL(__imp__sub_83CDF6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF6CC"))) PPC_WEAK_FUNC(sub_83CDF6CC);
PPC_FUNC_IMPL(__imp__sub_83CDF6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF6D0"))) PPC_WEAK_FUNC(sub_83CDF6D0);
PPC_FUNC_IMPL(__imp__sub_83CDF6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32608
	ctx.r7.s64 = ctx.r8.s64 + -32608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF6F8"))) PPC_WEAK_FUNC(sub_83CDF6F8);
PPC_FUNC_IMPL(__imp__sub_83CDF6F8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32612
	ctx.r3.s64 = ctx.r11.s64 + -32612;
	// bl 0x83523120
	ctx.lr = 0x83CDF710;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-2080
	ctx.r3.s64 = ctx.r10.s64 + -2080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF71C;
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

__attribute__((alias("__imp__sub_83CDF72C"))) PPC_WEAK_FUNC(sub_83CDF72C);
PPC_FUNC_IMPL(__imp__sub_83CDF72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF730"))) PPC_WEAK_FUNC(sub_83CDF730);
PPC_FUNC_IMPL(__imp__sub_83CDF730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF73C"))) PPC_WEAK_FUNC(sub_83CDF73C);
PPC_FUNC_IMPL(__imp__sub_83CDF73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF740"))) PPC_WEAK_FUNC(sub_83CDF740);
PPC_FUNC_IMPL(__imp__sub_83CDF740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2056
	ctx.r3.s64 = ctx.r11.s64 + -2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF74C"))) PPC_WEAK_FUNC(sub_83CDF74C);
PPC_FUNC_IMPL(__imp__sub_83CDF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF750"))) PPC_WEAK_FUNC(sub_83CDF750);
PPC_FUNC_IMPL(__imp__sub_83CDF750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2048
	ctx.r3.s64 = ctx.r11.s64 + -2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF75C"))) PPC_WEAK_FUNC(sub_83CDF75C);
PPC_FUNC_IMPL(__imp__sub_83CDF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF760"))) PPC_WEAK_FUNC(sub_83CDF760);
PPC_FUNC_IMPL(__imp__sub_83CDF760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF76C"))) PPC_WEAK_FUNC(sub_83CDF76C);
PPC_FUNC_IMPL(__imp__sub_83CDF76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF770"))) PPC_WEAK_FUNC(sub_83CDF770);
PPC_FUNC_IMPL(__imp__sub_83CDF770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF77C"))) PPC_WEAK_FUNC(sub_83CDF77C);
PPC_FUNC_IMPL(__imp__sub_83CDF77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF780"))) PPC_WEAK_FUNC(sub_83CDF780);
PPC_FUNC_IMPL(__imp__sub_83CDF780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2024
	ctx.r3.s64 = ctx.r11.s64 + -2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF78C"))) PPC_WEAK_FUNC(sub_83CDF78C);
PPC_FUNC_IMPL(__imp__sub_83CDF78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF790"))) PPC_WEAK_FUNC(sub_83CDF790);
PPC_FUNC_IMPL(__imp__sub_83CDF790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2016
	ctx.r3.s64 = ctx.r11.s64 + -2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF79C"))) PPC_WEAK_FUNC(sub_83CDF79C);
PPC_FUNC_IMPL(__imp__sub_83CDF79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7A0"))) PPC_WEAK_FUNC(sub_83CDF7A0);
PPC_FUNC_IMPL(__imp__sub_83CDF7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2008
	ctx.r3.s64 = ctx.r11.s64 + -2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF7AC"))) PPC_WEAK_FUNC(sub_83CDF7AC);
PPC_FUNC_IMPL(__imp__sub_83CDF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7B0"))) PPC_WEAK_FUNC(sub_83CDF7B0);
PPC_FUNC_IMPL(__imp__sub_83CDF7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-2000
	ctx.r3.s64 = ctx.r11.s64 + -2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF7BC"))) PPC_WEAK_FUNC(sub_83CDF7BC);
PPC_FUNC_IMPL(__imp__sub_83CDF7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7C0"))) PPC_WEAK_FUNC(sub_83CDF7C0);
PPC_FUNC_IMPL(__imp__sub_83CDF7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1992
	ctx.r3.s64 = ctx.r11.s64 + -1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF7CC"))) PPC_WEAK_FUNC(sub_83CDF7CC);
PPC_FUNC_IMPL(__imp__sub_83CDF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7D0"))) PPC_WEAK_FUNC(sub_83CDF7D0);
PPC_FUNC_IMPL(__imp__sub_83CDF7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1984
	ctx.r3.s64 = ctx.r11.s64 + -1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF7DC"))) PPC_WEAK_FUNC(sub_83CDF7DC);
PPC_FUNC_IMPL(__imp__sub_83CDF7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7E0"))) PPC_WEAK_FUNC(sub_83CDF7E0);
PPC_FUNC_IMPL(__imp__sub_83CDF7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1976
	ctx.r3.s64 = ctx.r11.s64 + -1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF7EC"))) PPC_WEAK_FUNC(sub_83CDF7EC);
PPC_FUNC_IMPL(__imp__sub_83CDF7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF7F0"))) PPC_WEAK_FUNC(sub_83CDF7F0);
PPC_FUNC_IMPL(__imp__sub_83CDF7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32596
	ctx.r7.s64 = ctx.r8.s64 + -32596;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32596(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32596);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32596, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF818"))) PPC_WEAK_FUNC(sub_83CDF818);
PPC_FUNC_IMPL(__imp__sub_83CDF818) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// bl 0x83523120
	ctx.lr = 0x83CDF830;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1968
	ctx.r3.s64 = ctx.r10.s64 + -1968;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF83C;
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

__attribute__((alias("__imp__sub_83CDF84C"))) PPC_WEAK_FUNC(sub_83CDF84C);
PPC_FUNC_IMPL(__imp__sub_83CDF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF850"))) PPC_WEAK_FUNC(sub_83CDF850);
PPC_FUNC_IMPL(__imp__sub_83CDF850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF85C"))) PPC_WEAK_FUNC(sub_83CDF85C);
PPC_FUNC_IMPL(__imp__sub_83CDF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF860"))) PPC_WEAK_FUNC(sub_83CDF860);
PPC_FUNC_IMPL(__imp__sub_83CDF860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1944
	ctx.r3.s64 = ctx.r11.s64 + -1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF86C"))) PPC_WEAK_FUNC(sub_83CDF86C);
PPC_FUNC_IMPL(__imp__sub_83CDF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF870"))) PPC_WEAK_FUNC(sub_83CDF870);
PPC_FUNC_IMPL(__imp__sub_83CDF870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1936
	ctx.r3.s64 = ctx.r11.s64 + -1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF87C"))) PPC_WEAK_FUNC(sub_83CDF87C);
PPC_FUNC_IMPL(__imp__sub_83CDF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF880"))) PPC_WEAK_FUNC(sub_83CDF880);
PPC_FUNC_IMPL(__imp__sub_83CDF880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1928
	ctx.r3.s64 = ctx.r11.s64 + -1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF88C"))) PPC_WEAK_FUNC(sub_83CDF88C);
PPC_FUNC_IMPL(__imp__sub_83CDF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF890"))) PPC_WEAK_FUNC(sub_83CDF890);
PPC_FUNC_IMPL(__imp__sub_83CDF890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF89C"))) PPC_WEAK_FUNC(sub_83CDF89C);
PPC_FUNC_IMPL(__imp__sub_83CDF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8A0"))) PPC_WEAK_FUNC(sub_83CDF8A0);
PPC_FUNC_IMPL(__imp__sub_83CDF8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1912
	ctx.r3.s64 = ctx.r11.s64 + -1912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8AC"))) PPC_WEAK_FUNC(sub_83CDF8AC);
PPC_FUNC_IMPL(__imp__sub_83CDF8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8B0"))) PPC_WEAK_FUNC(sub_83CDF8B0);
PPC_FUNC_IMPL(__imp__sub_83CDF8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8BC"))) PPC_WEAK_FUNC(sub_83CDF8BC);
PPC_FUNC_IMPL(__imp__sub_83CDF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8C0"))) PPC_WEAK_FUNC(sub_83CDF8C0);
PPC_FUNC_IMPL(__imp__sub_83CDF8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8CC"))) PPC_WEAK_FUNC(sub_83CDF8CC);
PPC_FUNC_IMPL(__imp__sub_83CDF8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8D0"))) PPC_WEAK_FUNC(sub_83CDF8D0);
PPC_FUNC_IMPL(__imp__sub_83CDF8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1888
	ctx.r3.s64 = ctx.r11.s64 + -1888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8DC"))) PPC_WEAK_FUNC(sub_83CDF8DC);
PPC_FUNC_IMPL(__imp__sub_83CDF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8E0"))) PPC_WEAK_FUNC(sub_83CDF8E0);
PPC_FUNC_IMPL(__imp__sub_83CDF8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1880
	ctx.r3.s64 = ctx.r11.s64 + -1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8EC"))) PPC_WEAK_FUNC(sub_83CDF8EC);
PPC_FUNC_IMPL(__imp__sub_83CDF8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF8F0"))) PPC_WEAK_FUNC(sub_83CDF8F0);
PPC_FUNC_IMPL(__imp__sub_83CDF8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1872
	ctx.r3.s64 = ctx.r11.s64 + -1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF8FC"))) PPC_WEAK_FUNC(sub_83CDF8FC);
PPC_FUNC_IMPL(__imp__sub_83CDF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

