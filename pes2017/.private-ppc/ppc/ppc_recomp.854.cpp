#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C844F8"))) PPC_WEAK_FUNC(sub_83C844F8);
PPC_FUNC_IMPL(__imp__sub_83C844F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3216
	ctx.r3.s64 = ctx.r11.s64 + -3216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84504"))) PPC_WEAK_FUNC(sub_83C84504);
PPC_FUNC_IMPL(__imp__sub_83C84504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84508"))) PPC_WEAK_FUNC(sub_83C84508);
PPC_FUNC_IMPL(__imp__sub_83C84508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3208
	ctx.r3.s64 = ctx.r11.s64 + -3208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84514"))) PPC_WEAK_FUNC(sub_83C84514);
PPC_FUNC_IMPL(__imp__sub_83C84514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84518"))) PPC_WEAK_FUNC(sub_83C84518);
PPC_FUNC_IMPL(__imp__sub_83C84518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3200
	ctx.r3.s64 = ctx.r11.s64 + -3200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84524"))) PPC_WEAK_FUNC(sub_83C84524);
PPC_FUNC_IMPL(__imp__sub_83C84524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84528"))) PPC_WEAK_FUNC(sub_83C84528);
PPC_FUNC_IMPL(__imp__sub_83C84528) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23412
	ctx.r7.s64 = ctx.r8.s64 + 23412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23412);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23412, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C84550"))) PPC_WEAK_FUNC(sub_83C84550);
PPC_FUNC_IMPL(__imp__sub_83C84550) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// bl 0x83523120
	ctx.lr = 0x83C84568;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-3192
	ctx.r3.s64 = ctx.r10.s64 + -3192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C84574;
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

__attribute__((alias("__imp__sub_83C84584"))) PPC_WEAK_FUNC(sub_83C84584);
PPC_FUNC_IMPL(__imp__sub_83C84584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84588"))) PPC_WEAK_FUNC(sub_83C84588);
PPC_FUNC_IMPL(__imp__sub_83C84588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3176
	ctx.r3.s64 = ctx.r11.s64 + -3176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84594"))) PPC_WEAK_FUNC(sub_83C84594);
PPC_FUNC_IMPL(__imp__sub_83C84594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84598"))) PPC_WEAK_FUNC(sub_83C84598);
PPC_FUNC_IMPL(__imp__sub_83C84598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3168
	ctx.r3.s64 = ctx.r11.s64 + -3168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845A4"))) PPC_WEAK_FUNC(sub_83C845A4);
PPC_FUNC_IMPL(__imp__sub_83C845A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845A8"))) PPC_WEAK_FUNC(sub_83C845A8);
PPC_FUNC_IMPL(__imp__sub_83C845A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3160
	ctx.r3.s64 = ctx.r11.s64 + -3160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845B4"))) PPC_WEAK_FUNC(sub_83C845B4);
PPC_FUNC_IMPL(__imp__sub_83C845B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845B8"))) PPC_WEAK_FUNC(sub_83C845B8);
PPC_FUNC_IMPL(__imp__sub_83C845B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3152
	ctx.r3.s64 = ctx.r11.s64 + -3152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845C4"))) PPC_WEAK_FUNC(sub_83C845C4);
PPC_FUNC_IMPL(__imp__sub_83C845C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845C8"))) PPC_WEAK_FUNC(sub_83C845C8);
PPC_FUNC_IMPL(__imp__sub_83C845C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845D4"))) PPC_WEAK_FUNC(sub_83C845D4);
PPC_FUNC_IMPL(__imp__sub_83C845D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845D8"))) PPC_WEAK_FUNC(sub_83C845D8);
PPC_FUNC_IMPL(__imp__sub_83C845D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3136
	ctx.r3.s64 = ctx.r11.s64 + -3136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845E4"))) PPC_WEAK_FUNC(sub_83C845E4);
PPC_FUNC_IMPL(__imp__sub_83C845E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845E8"))) PPC_WEAK_FUNC(sub_83C845E8);
PPC_FUNC_IMPL(__imp__sub_83C845E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3128
	ctx.r3.s64 = ctx.r11.s64 + -3128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C845F4"))) PPC_WEAK_FUNC(sub_83C845F4);
PPC_FUNC_IMPL(__imp__sub_83C845F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C845F8"))) PPC_WEAK_FUNC(sub_83C845F8);
PPC_FUNC_IMPL(__imp__sub_83C845F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3120
	ctx.r3.s64 = ctx.r11.s64 + -3120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84604"))) PPC_WEAK_FUNC(sub_83C84604);
PPC_FUNC_IMPL(__imp__sub_83C84604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84608"))) PPC_WEAK_FUNC(sub_83C84608);
PPC_FUNC_IMPL(__imp__sub_83C84608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3112
	ctx.r3.s64 = ctx.r11.s64 + -3112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84614"))) PPC_WEAK_FUNC(sub_83C84614);
PPC_FUNC_IMPL(__imp__sub_83C84614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84618"))) PPC_WEAK_FUNC(sub_83C84618);
PPC_FUNC_IMPL(__imp__sub_83C84618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3104
	ctx.r3.s64 = ctx.r11.s64 + -3104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84624"))) PPC_WEAK_FUNC(sub_83C84624);
PPC_FUNC_IMPL(__imp__sub_83C84624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84628"))) PPC_WEAK_FUNC(sub_83C84628);
PPC_FUNC_IMPL(__imp__sub_83C84628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3096
	ctx.r3.s64 = ctx.r11.s64 + -3096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84634"))) PPC_WEAK_FUNC(sub_83C84634);
PPC_FUNC_IMPL(__imp__sub_83C84634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84638"))) PPC_WEAK_FUNC(sub_83C84638);
PPC_FUNC_IMPL(__imp__sub_83C84638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84644"))) PPC_WEAK_FUNC(sub_83C84644);
PPC_FUNC_IMPL(__imp__sub_83C84644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84648"))) PPC_WEAK_FUNC(sub_83C84648);
PPC_FUNC_IMPL(__imp__sub_83C84648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3080
	ctx.r3.s64 = ctx.r11.s64 + -3080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84654"))) PPC_WEAK_FUNC(sub_83C84654);
PPC_FUNC_IMPL(__imp__sub_83C84654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84658"))) PPC_WEAK_FUNC(sub_83C84658);
PPC_FUNC_IMPL(__imp__sub_83C84658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84664"))) PPC_WEAK_FUNC(sub_83C84664);
PPC_FUNC_IMPL(__imp__sub_83C84664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84668"))) PPC_WEAK_FUNC(sub_83C84668);
PPC_FUNC_IMPL(__imp__sub_83C84668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84674"))) PPC_WEAK_FUNC(sub_83C84674);
PPC_FUNC_IMPL(__imp__sub_83C84674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84678"))) PPC_WEAK_FUNC(sub_83C84678);
PPC_FUNC_IMPL(__imp__sub_83C84678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3056
	ctx.r3.s64 = ctx.r11.s64 + -3056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84684"))) PPC_WEAK_FUNC(sub_83C84684);
PPC_FUNC_IMPL(__imp__sub_83C84684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84688"))) PPC_WEAK_FUNC(sub_83C84688);
PPC_FUNC_IMPL(__imp__sub_83C84688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84694"))) PPC_WEAK_FUNC(sub_83C84694);
PPC_FUNC_IMPL(__imp__sub_83C84694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84698"))) PPC_WEAK_FUNC(sub_83C84698);
PPC_FUNC_IMPL(__imp__sub_83C84698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846A4"))) PPC_WEAK_FUNC(sub_83C846A4);
PPC_FUNC_IMPL(__imp__sub_83C846A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846A8"))) PPC_WEAK_FUNC(sub_83C846A8);
PPC_FUNC_IMPL(__imp__sub_83C846A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3032
	ctx.r3.s64 = ctx.r11.s64 + -3032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846B4"))) PPC_WEAK_FUNC(sub_83C846B4);
PPC_FUNC_IMPL(__imp__sub_83C846B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846B8"))) PPC_WEAK_FUNC(sub_83C846B8);
PPC_FUNC_IMPL(__imp__sub_83C846B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3024
	ctx.r3.s64 = ctx.r11.s64 + -3024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846C4"))) PPC_WEAK_FUNC(sub_83C846C4);
PPC_FUNC_IMPL(__imp__sub_83C846C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846C8"))) PPC_WEAK_FUNC(sub_83C846C8);
PPC_FUNC_IMPL(__imp__sub_83C846C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3016
	ctx.r3.s64 = ctx.r11.s64 + -3016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846D4"))) PPC_WEAK_FUNC(sub_83C846D4);
PPC_FUNC_IMPL(__imp__sub_83C846D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846D8"))) PPC_WEAK_FUNC(sub_83C846D8);
PPC_FUNC_IMPL(__imp__sub_83C846D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3008
	ctx.r3.s64 = ctx.r11.s64 + -3008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846E4"))) PPC_WEAK_FUNC(sub_83C846E4);
PPC_FUNC_IMPL(__imp__sub_83C846E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846E8"))) PPC_WEAK_FUNC(sub_83C846E8);
PPC_FUNC_IMPL(__imp__sub_83C846E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-3000
	ctx.r3.s64 = ctx.r11.s64 + -3000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C846F4"))) PPC_WEAK_FUNC(sub_83C846F4);
PPC_FUNC_IMPL(__imp__sub_83C846F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C846F8"))) PPC_WEAK_FUNC(sub_83C846F8);
PPC_FUNC_IMPL(__imp__sub_83C846F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2992
	ctx.r3.s64 = ctx.r11.s64 + -2992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84704"))) PPC_WEAK_FUNC(sub_83C84704);
PPC_FUNC_IMPL(__imp__sub_83C84704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84708"))) PPC_WEAK_FUNC(sub_83C84708);
PPC_FUNC_IMPL(__imp__sub_83C84708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84714"))) PPC_WEAK_FUNC(sub_83C84714);
PPC_FUNC_IMPL(__imp__sub_83C84714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84718"))) PPC_WEAK_FUNC(sub_83C84718);
PPC_FUNC_IMPL(__imp__sub_83C84718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2976
	ctx.r3.s64 = ctx.r11.s64 + -2976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84724"))) PPC_WEAK_FUNC(sub_83C84724);
PPC_FUNC_IMPL(__imp__sub_83C84724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84728"))) PPC_WEAK_FUNC(sub_83C84728);
PPC_FUNC_IMPL(__imp__sub_83C84728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2968
	ctx.r3.s64 = ctx.r11.s64 + -2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84734"))) PPC_WEAK_FUNC(sub_83C84734);
PPC_FUNC_IMPL(__imp__sub_83C84734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84738"))) PPC_WEAK_FUNC(sub_83C84738);
PPC_FUNC_IMPL(__imp__sub_83C84738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2960
	ctx.r3.s64 = ctx.r11.s64 + -2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84744"))) PPC_WEAK_FUNC(sub_83C84744);
PPC_FUNC_IMPL(__imp__sub_83C84744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84748"))) PPC_WEAK_FUNC(sub_83C84748);
PPC_FUNC_IMPL(__imp__sub_83C84748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2952
	ctx.r3.s64 = ctx.r11.s64 + -2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84754"))) PPC_WEAK_FUNC(sub_83C84754);
PPC_FUNC_IMPL(__imp__sub_83C84754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84758"))) PPC_WEAK_FUNC(sub_83C84758);
PPC_FUNC_IMPL(__imp__sub_83C84758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84764"))) PPC_WEAK_FUNC(sub_83C84764);
PPC_FUNC_IMPL(__imp__sub_83C84764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84768"))) PPC_WEAK_FUNC(sub_83C84768);
PPC_FUNC_IMPL(__imp__sub_83C84768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2936
	ctx.r3.s64 = ctx.r11.s64 + -2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84774"))) PPC_WEAK_FUNC(sub_83C84774);
PPC_FUNC_IMPL(__imp__sub_83C84774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84778"))) PPC_WEAK_FUNC(sub_83C84778);
PPC_FUNC_IMPL(__imp__sub_83C84778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84784"))) PPC_WEAK_FUNC(sub_83C84784);
PPC_FUNC_IMPL(__imp__sub_83C84784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84788"))) PPC_WEAK_FUNC(sub_83C84788);
PPC_FUNC_IMPL(__imp__sub_83C84788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2920
	ctx.r3.s64 = ctx.r11.s64 + -2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84794"))) PPC_WEAK_FUNC(sub_83C84794);
PPC_FUNC_IMPL(__imp__sub_83C84794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84798"))) PPC_WEAK_FUNC(sub_83C84798);
PPC_FUNC_IMPL(__imp__sub_83C84798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2912
	ctx.r3.s64 = ctx.r11.s64 + -2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847A4"))) PPC_WEAK_FUNC(sub_83C847A4);
PPC_FUNC_IMPL(__imp__sub_83C847A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847A8"))) PPC_WEAK_FUNC(sub_83C847A8);
PPC_FUNC_IMPL(__imp__sub_83C847A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2904
	ctx.r3.s64 = ctx.r11.s64 + -2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847B4"))) PPC_WEAK_FUNC(sub_83C847B4);
PPC_FUNC_IMPL(__imp__sub_83C847B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847B8"))) PPC_WEAK_FUNC(sub_83C847B8);
PPC_FUNC_IMPL(__imp__sub_83C847B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2896
	ctx.r3.s64 = ctx.r11.s64 + -2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847C4"))) PPC_WEAK_FUNC(sub_83C847C4);
PPC_FUNC_IMPL(__imp__sub_83C847C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847C8"))) PPC_WEAK_FUNC(sub_83C847C8);
PPC_FUNC_IMPL(__imp__sub_83C847C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2888
	ctx.r3.s64 = ctx.r11.s64 + -2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847D4"))) PPC_WEAK_FUNC(sub_83C847D4);
PPC_FUNC_IMPL(__imp__sub_83C847D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847D8"))) PPC_WEAK_FUNC(sub_83C847D8);
PPC_FUNC_IMPL(__imp__sub_83C847D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2880
	ctx.r3.s64 = ctx.r11.s64 + -2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847E4"))) PPC_WEAK_FUNC(sub_83C847E4);
PPC_FUNC_IMPL(__imp__sub_83C847E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847E8"))) PPC_WEAK_FUNC(sub_83C847E8);
PPC_FUNC_IMPL(__imp__sub_83C847E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C847F4"))) PPC_WEAK_FUNC(sub_83C847F4);
PPC_FUNC_IMPL(__imp__sub_83C847F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C847F8"))) PPC_WEAK_FUNC(sub_83C847F8);
PPC_FUNC_IMPL(__imp__sub_83C847F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2864
	ctx.r3.s64 = ctx.r11.s64 + -2864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84804"))) PPC_WEAK_FUNC(sub_83C84804);
PPC_FUNC_IMPL(__imp__sub_83C84804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84808"))) PPC_WEAK_FUNC(sub_83C84808);
PPC_FUNC_IMPL(__imp__sub_83C84808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2856
	ctx.r3.s64 = ctx.r11.s64 + -2856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84814"))) PPC_WEAK_FUNC(sub_83C84814);
PPC_FUNC_IMPL(__imp__sub_83C84814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84818"))) PPC_WEAK_FUNC(sub_83C84818);
PPC_FUNC_IMPL(__imp__sub_83C84818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2848
	ctx.r3.s64 = ctx.r11.s64 + -2848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84824"))) PPC_WEAK_FUNC(sub_83C84824);
PPC_FUNC_IMPL(__imp__sub_83C84824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84828"))) PPC_WEAK_FUNC(sub_83C84828);
PPC_FUNC_IMPL(__imp__sub_83C84828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2840
	ctx.r3.s64 = ctx.r11.s64 + -2840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84834"))) PPC_WEAK_FUNC(sub_83C84834);
PPC_FUNC_IMPL(__imp__sub_83C84834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84838"))) PPC_WEAK_FUNC(sub_83C84838);
PPC_FUNC_IMPL(__imp__sub_83C84838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2832
	ctx.r3.s64 = ctx.r11.s64 + -2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84844"))) PPC_WEAK_FUNC(sub_83C84844);
PPC_FUNC_IMPL(__imp__sub_83C84844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84848"))) PPC_WEAK_FUNC(sub_83C84848);
PPC_FUNC_IMPL(__imp__sub_83C84848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84854"))) PPC_WEAK_FUNC(sub_83C84854);
PPC_FUNC_IMPL(__imp__sub_83C84854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84858"))) PPC_WEAK_FUNC(sub_83C84858);
PPC_FUNC_IMPL(__imp__sub_83C84858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2816
	ctx.r3.s64 = ctx.r11.s64 + -2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84864"))) PPC_WEAK_FUNC(sub_83C84864);
PPC_FUNC_IMPL(__imp__sub_83C84864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84868"))) PPC_WEAK_FUNC(sub_83C84868);
PPC_FUNC_IMPL(__imp__sub_83C84868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84874"))) PPC_WEAK_FUNC(sub_83C84874);
PPC_FUNC_IMPL(__imp__sub_83C84874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84878"))) PPC_WEAK_FUNC(sub_83C84878);
PPC_FUNC_IMPL(__imp__sub_83C84878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2800
	ctx.r3.s64 = ctx.r11.s64 + -2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84884"))) PPC_WEAK_FUNC(sub_83C84884);
PPC_FUNC_IMPL(__imp__sub_83C84884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84888"))) PPC_WEAK_FUNC(sub_83C84888);
PPC_FUNC_IMPL(__imp__sub_83C84888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2792
	ctx.r3.s64 = ctx.r11.s64 + -2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84894"))) PPC_WEAK_FUNC(sub_83C84894);
PPC_FUNC_IMPL(__imp__sub_83C84894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84898"))) PPC_WEAK_FUNC(sub_83C84898);
PPC_FUNC_IMPL(__imp__sub_83C84898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2784
	ctx.r3.s64 = ctx.r11.s64 + -2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848A4"))) PPC_WEAK_FUNC(sub_83C848A4);
PPC_FUNC_IMPL(__imp__sub_83C848A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848A8"))) PPC_WEAK_FUNC(sub_83C848A8);
PPC_FUNC_IMPL(__imp__sub_83C848A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2776
	ctx.r3.s64 = ctx.r11.s64 + -2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848B4"))) PPC_WEAK_FUNC(sub_83C848B4);
PPC_FUNC_IMPL(__imp__sub_83C848B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848B8"))) PPC_WEAK_FUNC(sub_83C848B8);
PPC_FUNC_IMPL(__imp__sub_83C848B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2768
	ctx.r3.s64 = ctx.r11.s64 + -2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848C4"))) PPC_WEAK_FUNC(sub_83C848C4);
PPC_FUNC_IMPL(__imp__sub_83C848C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848C8"))) PPC_WEAK_FUNC(sub_83C848C8);
PPC_FUNC_IMPL(__imp__sub_83C848C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848D4"))) PPC_WEAK_FUNC(sub_83C848D4);
PPC_FUNC_IMPL(__imp__sub_83C848D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848D8"))) PPC_WEAK_FUNC(sub_83C848D8);
PPC_FUNC_IMPL(__imp__sub_83C848D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2752
	ctx.r3.s64 = ctx.r11.s64 + -2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848E4"))) PPC_WEAK_FUNC(sub_83C848E4);
PPC_FUNC_IMPL(__imp__sub_83C848E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848E8"))) PPC_WEAK_FUNC(sub_83C848E8);
PPC_FUNC_IMPL(__imp__sub_83C848E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2744
	ctx.r3.s64 = ctx.r11.s64 + -2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C848F4"))) PPC_WEAK_FUNC(sub_83C848F4);
PPC_FUNC_IMPL(__imp__sub_83C848F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C848F8"))) PPC_WEAK_FUNC(sub_83C848F8);
PPC_FUNC_IMPL(__imp__sub_83C848F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2736
	ctx.r3.s64 = ctx.r11.s64 + -2736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84904"))) PPC_WEAK_FUNC(sub_83C84904);
PPC_FUNC_IMPL(__imp__sub_83C84904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84908"))) PPC_WEAK_FUNC(sub_83C84908);
PPC_FUNC_IMPL(__imp__sub_83C84908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2728
	ctx.r3.s64 = ctx.r11.s64 + -2728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84914"))) PPC_WEAK_FUNC(sub_83C84914);
PPC_FUNC_IMPL(__imp__sub_83C84914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84918"))) PPC_WEAK_FUNC(sub_83C84918);
PPC_FUNC_IMPL(__imp__sub_83C84918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2720
	ctx.r3.s64 = ctx.r11.s64 + -2720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84924"))) PPC_WEAK_FUNC(sub_83C84924);
PPC_FUNC_IMPL(__imp__sub_83C84924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84928"))) PPC_WEAK_FUNC(sub_83C84928);
PPC_FUNC_IMPL(__imp__sub_83C84928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2712
	ctx.r3.s64 = ctx.r11.s64 + -2712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84934"))) PPC_WEAK_FUNC(sub_83C84934);
PPC_FUNC_IMPL(__imp__sub_83C84934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84938"))) PPC_WEAK_FUNC(sub_83C84938);
PPC_FUNC_IMPL(__imp__sub_83C84938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2704
	ctx.r3.s64 = ctx.r11.s64 + -2704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84944"))) PPC_WEAK_FUNC(sub_83C84944);
PPC_FUNC_IMPL(__imp__sub_83C84944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84948"))) PPC_WEAK_FUNC(sub_83C84948);
PPC_FUNC_IMPL(__imp__sub_83C84948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2696
	ctx.r3.s64 = ctx.r11.s64 + -2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84954"))) PPC_WEAK_FUNC(sub_83C84954);
PPC_FUNC_IMPL(__imp__sub_83C84954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84958"))) PPC_WEAK_FUNC(sub_83C84958);
PPC_FUNC_IMPL(__imp__sub_83C84958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2688
	ctx.r3.s64 = ctx.r11.s64 + -2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84964"))) PPC_WEAK_FUNC(sub_83C84964);
PPC_FUNC_IMPL(__imp__sub_83C84964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84968"))) PPC_WEAK_FUNC(sub_83C84968);
PPC_FUNC_IMPL(__imp__sub_83C84968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2680
	ctx.r3.s64 = ctx.r11.s64 + -2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84974"))) PPC_WEAK_FUNC(sub_83C84974);
PPC_FUNC_IMPL(__imp__sub_83C84974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84978"))) PPC_WEAK_FUNC(sub_83C84978);
PPC_FUNC_IMPL(__imp__sub_83C84978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2672
	ctx.r3.s64 = ctx.r11.s64 + -2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84984"))) PPC_WEAK_FUNC(sub_83C84984);
PPC_FUNC_IMPL(__imp__sub_83C84984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84988"))) PPC_WEAK_FUNC(sub_83C84988);
PPC_FUNC_IMPL(__imp__sub_83C84988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2664
	ctx.r3.s64 = ctx.r11.s64 + -2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84994"))) PPC_WEAK_FUNC(sub_83C84994);
PPC_FUNC_IMPL(__imp__sub_83C84994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84998"))) PPC_WEAK_FUNC(sub_83C84998);
PPC_FUNC_IMPL(__imp__sub_83C84998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2656
	ctx.r3.s64 = ctx.r11.s64 + -2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849A4"))) PPC_WEAK_FUNC(sub_83C849A4);
PPC_FUNC_IMPL(__imp__sub_83C849A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849A8"))) PPC_WEAK_FUNC(sub_83C849A8);
PPC_FUNC_IMPL(__imp__sub_83C849A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2648
	ctx.r3.s64 = ctx.r11.s64 + -2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849B4"))) PPC_WEAK_FUNC(sub_83C849B4);
PPC_FUNC_IMPL(__imp__sub_83C849B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849B8"))) PPC_WEAK_FUNC(sub_83C849B8);
PPC_FUNC_IMPL(__imp__sub_83C849B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2640
	ctx.r3.s64 = ctx.r11.s64 + -2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849C4"))) PPC_WEAK_FUNC(sub_83C849C4);
PPC_FUNC_IMPL(__imp__sub_83C849C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849C8"))) PPC_WEAK_FUNC(sub_83C849C8);
PPC_FUNC_IMPL(__imp__sub_83C849C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2632
	ctx.r3.s64 = ctx.r11.s64 + -2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849D4"))) PPC_WEAK_FUNC(sub_83C849D4);
PPC_FUNC_IMPL(__imp__sub_83C849D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849D8"))) PPC_WEAK_FUNC(sub_83C849D8);
PPC_FUNC_IMPL(__imp__sub_83C849D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849E4"))) PPC_WEAK_FUNC(sub_83C849E4);
PPC_FUNC_IMPL(__imp__sub_83C849E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849E8"))) PPC_WEAK_FUNC(sub_83C849E8);
PPC_FUNC_IMPL(__imp__sub_83C849E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2616
	ctx.r3.s64 = ctx.r11.s64 + -2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C849F4"))) PPC_WEAK_FUNC(sub_83C849F4);
PPC_FUNC_IMPL(__imp__sub_83C849F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C849F8"))) PPC_WEAK_FUNC(sub_83C849F8);
PPC_FUNC_IMPL(__imp__sub_83C849F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A04"))) PPC_WEAK_FUNC(sub_83C84A04);
PPC_FUNC_IMPL(__imp__sub_83C84A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A08"))) PPC_WEAK_FUNC(sub_83C84A08);
PPC_FUNC_IMPL(__imp__sub_83C84A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2600
	ctx.r3.s64 = ctx.r11.s64 + -2600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A14"))) PPC_WEAK_FUNC(sub_83C84A14);
PPC_FUNC_IMPL(__imp__sub_83C84A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A18"))) PPC_WEAK_FUNC(sub_83C84A18);
PPC_FUNC_IMPL(__imp__sub_83C84A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2592
	ctx.r3.s64 = ctx.r11.s64 + -2592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A24"))) PPC_WEAK_FUNC(sub_83C84A24);
PPC_FUNC_IMPL(__imp__sub_83C84A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A28"))) PPC_WEAK_FUNC(sub_83C84A28);
PPC_FUNC_IMPL(__imp__sub_83C84A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2584
	ctx.r3.s64 = ctx.r11.s64 + -2584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A34"))) PPC_WEAK_FUNC(sub_83C84A34);
PPC_FUNC_IMPL(__imp__sub_83C84A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A38"))) PPC_WEAK_FUNC(sub_83C84A38);
PPC_FUNC_IMPL(__imp__sub_83C84A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2576
	ctx.r3.s64 = ctx.r11.s64 + -2576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A44"))) PPC_WEAK_FUNC(sub_83C84A44);
PPC_FUNC_IMPL(__imp__sub_83C84A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A48"))) PPC_WEAK_FUNC(sub_83C84A48);
PPC_FUNC_IMPL(__imp__sub_83C84A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2568
	ctx.r3.s64 = ctx.r11.s64 + -2568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A54"))) PPC_WEAK_FUNC(sub_83C84A54);
PPC_FUNC_IMPL(__imp__sub_83C84A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A58"))) PPC_WEAK_FUNC(sub_83C84A58);
PPC_FUNC_IMPL(__imp__sub_83C84A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2560
	ctx.r3.s64 = ctx.r11.s64 + -2560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A64"))) PPC_WEAK_FUNC(sub_83C84A64);
PPC_FUNC_IMPL(__imp__sub_83C84A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A68"))) PPC_WEAK_FUNC(sub_83C84A68);
PPC_FUNC_IMPL(__imp__sub_83C84A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2552
	ctx.r3.s64 = ctx.r11.s64 + -2552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A74"))) PPC_WEAK_FUNC(sub_83C84A74);
PPC_FUNC_IMPL(__imp__sub_83C84A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A78"))) PPC_WEAK_FUNC(sub_83C84A78);
PPC_FUNC_IMPL(__imp__sub_83C84A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2544
	ctx.r3.s64 = ctx.r11.s64 + -2544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A84"))) PPC_WEAK_FUNC(sub_83C84A84);
PPC_FUNC_IMPL(__imp__sub_83C84A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A88"))) PPC_WEAK_FUNC(sub_83C84A88);
PPC_FUNC_IMPL(__imp__sub_83C84A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2536
	ctx.r3.s64 = ctx.r11.s64 + -2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84A94"))) PPC_WEAK_FUNC(sub_83C84A94);
PPC_FUNC_IMPL(__imp__sub_83C84A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84A98"))) PPC_WEAK_FUNC(sub_83C84A98);
PPC_FUNC_IMPL(__imp__sub_83C84A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2528
	ctx.r3.s64 = ctx.r11.s64 + -2528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84AA4"))) PPC_WEAK_FUNC(sub_83C84AA4);
PPC_FUNC_IMPL(__imp__sub_83C84AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84AA8"))) PPC_WEAK_FUNC(sub_83C84AA8);
PPC_FUNC_IMPL(__imp__sub_83C84AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2520
	ctx.r3.s64 = ctx.r11.s64 + -2520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84AB4"))) PPC_WEAK_FUNC(sub_83C84AB4);
PPC_FUNC_IMPL(__imp__sub_83C84AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84AB8"))) PPC_WEAK_FUNC(sub_83C84AB8);
PPC_FUNC_IMPL(__imp__sub_83C84AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2512
	ctx.r3.s64 = ctx.r11.s64 + -2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84AC4"))) PPC_WEAK_FUNC(sub_83C84AC4);
PPC_FUNC_IMPL(__imp__sub_83C84AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84AC8"))) PPC_WEAK_FUNC(sub_83C84AC8);
PPC_FUNC_IMPL(__imp__sub_83C84AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23448
	ctx.r7.s64 = ctx.r8.s64 + 23448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C84AF0"))) PPC_WEAK_FUNC(sub_83C84AF0);
PPC_FUNC_IMPL(__imp__sub_83C84AF0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23444
	ctx.r3.s64 = ctx.r11.s64 + 23444;
	// bl 0x83523120
	ctx.lr = 0x83C84B08;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-2504
	ctx.r3.s64 = ctx.r10.s64 + -2504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C84B14;
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

__attribute__((alias("__imp__sub_83C84B24"))) PPC_WEAK_FUNC(sub_83C84B24);
PPC_FUNC_IMPL(__imp__sub_83C84B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B28"))) PPC_WEAK_FUNC(sub_83C84B28);
PPC_FUNC_IMPL(__imp__sub_83C84B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2488
	ctx.r3.s64 = ctx.r11.s64 + -2488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B34"))) PPC_WEAK_FUNC(sub_83C84B34);
PPC_FUNC_IMPL(__imp__sub_83C84B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B38"))) PPC_WEAK_FUNC(sub_83C84B38);
PPC_FUNC_IMPL(__imp__sub_83C84B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2480
	ctx.r3.s64 = ctx.r11.s64 + -2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B44"))) PPC_WEAK_FUNC(sub_83C84B44);
PPC_FUNC_IMPL(__imp__sub_83C84B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B48"))) PPC_WEAK_FUNC(sub_83C84B48);
PPC_FUNC_IMPL(__imp__sub_83C84B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2472
	ctx.r3.s64 = ctx.r11.s64 + -2472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B54"))) PPC_WEAK_FUNC(sub_83C84B54);
PPC_FUNC_IMPL(__imp__sub_83C84B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B58"))) PPC_WEAK_FUNC(sub_83C84B58);
PPC_FUNC_IMPL(__imp__sub_83C84B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2464
	ctx.r3.s64 = ctx.r11.s64 + -2464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B64"))) PPC_WEAK_FUNC(sub_83C84B64);
PPC_FUNC_IMPL(__imp__sub_83C84B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B68"))) PPC_WEAK_FUNC(sub_83C84B68);
PPC_FUNC_IMPL(__imp__sub_83C84B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2456
	ctx.r3.s64 = ctx.r11.s64 + -2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B74"))) PPC_WEAK_FUNC(sub_83C84B74);
PPC_FUNC_IMPL(__imp__sub_83C84B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B78"))) PPC_WEAK_FUNC(sub_83C84B78);
PPC_FUNC_IMPL(__imp__sub_83C84B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2448
	ctx.r3.s64 = ctx.r11.s64 + -2448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B84"))) PPC_WEAK_FUNC(sub_83C84B84);
PPC_FUNC_IMPL(__imp__sub_83C84B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B88"))) PPC_WEAK_FUNC(sub_83C84B88);
PPC_FUNC_IMPL(__imp__sub_83C84B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2440
	ctx.r3.s64 = ctx.r11.s64 + -2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84B94"))) PPC_WEAK_FUNC(sub_83C84B94);
PPC_FUNC_IMPL(__imp__sub_83C84B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84B98"))) PPC_WEAK_FUNC(sub_83C84B98);
PPC_FUNC_IMPL(__imp__sub_83C84B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2432
	ctx.r3.s64 = ctx.r11.s64 + -2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BA4"))) PPC_WEAK_FUNC(sub_83C84BA4);
PPC_FUNC_IMPL(__imp__sub_83C84BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BA8"))) PPC_WEAK_FUNC(sub_83C84BA8);
PPC_FUNC_IMPL(__imp__sub_83C84BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BB4"))) PPC_WEAK_FUNC(sub_83C84BB4);
PPC_FUNC_IMPL(__imp__sub_83C84BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BB8"))) PPC_WEAK_FUNC(sub_83C84BB8);
PPC_FUNC_IMPL(__imp__sub_83C84BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2416
	ctx.r3.s64 = ctx.r11.s64 + -2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BC4"))) PPC_WEAK_FUNC(sub_83C84BC4);
PPC_FUNC_IMPL(__imp__sub_83C84BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BC8"))) PPC_WEAK_FUNC(sub_83C84BC8);
PPC_FUNC_IMPL(__imp__sub_83C84BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2408
	ctx.r3.s64 = ctx.r11.s64 + -2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BD4"))) PPC_WEAK_FUNC(sub_83C84BD4);
PPC_FUNC_IMPL(__imp__sub_83C84BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BD8"))) PPC_WEAK_FUNC(sub_83C84BD8);
PPC_FUNC_IMPL(__imp__sub_83C84BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2400
	ctx.r3.s64 = ctx.r11.s64 + -2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BE4"))) PPC_WEAK_FUNC(sub_83C84BE4);
PPC_FUNC_IMPL(__imp__sub_83C84BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BE8"))) PPC_WEAK_FUNC(sub_83C84BE8);
PPC_FUNC_IMPL(__imp__sub_83C84BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84BF4"))) PPC_WEAK_FUNC(sub_83C84BF4);
PPC_FUNC_IMPL(__imp__sub_83C84BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84BF8"))) PPC_WEAK_FUNC(sub_83C84BF8);
PPC_FUNC_IMPL(__imp__sub_83C84BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2384
	ctx.r3.s64 = ctx.r11.s64 + -2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C04"))) PPC_WEAK_FUNC(sub_83C84C04);
PPC_FUNC_IMPL(__imp__sub_83C84C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C08"))) PPC_WEAK_FUNC(sub_83C84C08);
PPC_FUNC_IMPL(__imp__sub_83C84C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2376
	ctx.r3.s64 = ctx.r11.s64 + -2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C14"))) PPC_WEAK_FUNC(sub_83C84C14);
PPC_FUNC_IMPL(__imp__sub_83C84C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C18"))) PPC_WEAK_FUNC(sub_83C84C18);
PPC_FUNC_IMPL(__imp__sub_83C84C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2368
	ctx.r3.s64 = ctx.r11.s64 + -2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C24"))) PPC_WEAK_FUNC(sub_83C84C24);
PPC_FUNC_IMPL(__imp__sub_83C84C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C28"))) PPC_WEAK_FUNC(sub_83C84C28);
PPC_FUNC_IMPL(__imp__sub_83C84C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C34"))) PPC_WEAK_FUNC(sub_83C84C34);
PPC_FUNC_IMPL(__imp__sub_83C84C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C38"))) PPC_WEAK_FUNC(sub_83C84C38);
PPC_FUNC_IMPL(__imp__sub_83C84C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2352
	ctx.r3.s64 = ctx.r11.s64 + -2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C44"))) PPC_WEAK_FUNC(sub_83C84C44);
PPC_FUNC_IMPL(__imp__sub_83C84C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C48"))) PPC_WEAK_FUNC(sub_83C84C48);
PPC_FUNC_IMPL(__imp__sub_83C84C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C54"))) PPC_WEAK_FUNC(sub_83C84C54);
PPC_FUNC_IMPL(__imp__sub_83C84C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C58"))) PPC_WEAK_FUNC(sub_83C84C58);
PPC_FUNC_IMPL(__imp__sub_83C84C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C64"))) PPC_WEAK_FUNC(sub_83C84C64);
PPC_FUNC_IMPL(__imp__sub_83C84C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C68"))) PPC_WEAK_FUNC(sub_83C84C68);
PPC_FUNC_IMPL(__imp__sub_83C84C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C74"))) PPC_WEAK_FUNC(sub_83C84C74);
PPC_FUNC_IMPL(__imp__sub_83C84C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C78"))) PPC_WEAK_FUNC(sub_83C84C78);
PPC_FUNC_IMPL(__imp__sub_83C84C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2320
	ctx.r3.s64 = ctx.r11.s64 + -2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C84"))) PPC_WEAK_FUNC(sub_83C84C84);
PPC_FUNC_IMPL(__imp__sub_83C84C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C88"))) PPC_WEAK_FUNC(sub_83C84C88);
PPC_FUNC_IMPL(__imp__sub_83C84C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2312
	ctx.r3.s64 = ctx.r11.s64 + -2312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84C94"))) PPC_WEAK_FUNC(sub_83C84C94);
PPC_FUNC_IMPL(__imp__sub_83C84C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84C98"))) PPC_WEAK_FUNC(sub_83C84C98);
PPC_FUNC_IMPL(__imp__sub_83C84C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CA4"))) PPC_WEAK_FUNC(sub_83C84CA4);
PPC_FUNC_IMPL(__imp__sub_83C84CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CA8"))) PPC_WEAK_FUNC(sub_83C84CA8);
PPC_FUNC_IMPL(__imp__sub_83C84CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2296
	ctx.r3.s64 = ctx.r11.s64 + -2296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CB4"))) PPC_WEAK_FUNC(sub_83C84CB4);
PPC_FUNC_IMPL(__imp__sub_83C84CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CB8"))) PPC_WEAK_FUNC(sub_83C84CB8);
PPC_FUNC_IMPL(__imp__sub_83C84CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2288
	ctx.r3.s64 = ctx.r11.s64 + -2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CC4"))) PPC_WEAK_FUNC(sub_83C84CC4);
PPC_FUNC_IMPL(__imp__sub_83C84CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CC8"))) PPC_WEAK_FUNC(sub_83C84CC8);
PPC_FUNC_IMPL(__imp__sub_83C84CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2280
	ctx.r3.s64 = ctx.r11.s64 + -2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CD4"))) PPC_WEAK_FUNC(sub_83C84CD4);
PPC_FUNC_IMPL(__imp__sub_83C84CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CD8"))) PPC_WEAK_FUNC(sub_83C84CD8);
PPC_FUNC_IMPL(__imp__sub_83C84CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2272
	ctx.r3.s64 = ctx.r11.s64 + -2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CE4"))) PPC_WEAK_FUNC(sub_83C84CE4);
PPC_FUNC_IMPL(__imp__sub_83C84CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CE8"))) PPC_WEAK_FUNC(sub_83C84CE8);
PPC_FUNC_IMPL(__imp__sub_83C84CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84CF4"))) PPC_WEAK_FUNC(sub_83C84CF4);
PPC_FUNC_IMPL(__imp__sub_83C84CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84CF8"))) PPC_WEAK_FUNC(sub_83C84CF8);
PPC_FUNC_IMPL(__imp__sub_83C84CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2256
	ctx.r3.s64 = ctx.r11.s64 + -2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D04"))) PPC_WEAK_FUNC(sub_83C84D04);
PPC_FUNC_IMPL(__imp__sub_83C84D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D08"))) PPC_WEAK_FUNC(sub_83C84D08);
PPC_FUNC_IMPL(__imp__sub_83C84D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2248
	ctx.r3.s64 = ctx.r11.s64 + -2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D14"))) PPC_WEAK_FUNC(sub_83C84D14);
PPC_FUNC_IMPL(__imp__sub_83C84D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D18"))) PPC_WEAK_FUNC(sub_83C84D18);
PPC_FUNC_IMPL(__imp__sub_83C84D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2240
	ctx.r3.s64 = ctx.r11.s64 + -2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D24"))) PPC_WEAK_FUNC(sub_83C84D24);
PPC_FUNC_IMPL(__imp__sub_83C84D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D28"))) PPC_WEAK_FUNC(sub_83C84D28);
PPC_FUNC_IMPL(__imp__sub_83C84D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D34"))) PPC_WEAK_FUNC(sub_83C84D34);
PPC_FUNC_IMPL(__imp__sub_83C84D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D38"))) PPC_WEAK_FUNC(sub_83C84D38);
PPC_FUNC_IMPL(__imp__sub_83C84D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2224
	ctx.r3.s64 = ctx.r11.s64 + -2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D44"))) PPC_WEAK_FUNC(sub_83C84D44);
PPC_FUNC_IMPL(__imp__sub_83C84D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D48"))) PPC_WEAK_FUNC(sub_83C84D48);
PPC_FUNC_IMPL(__imp__sub_83C84D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D54"))) PPC_WEAK_FUNC(sub_83C84D54);
PPC_FUNC_IMPL(__imp__sub_83C84D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D58"))) PPC_WEAK_FUNC(sub_83C84D58);
PPC_FUNC_IMPL(__imp__sub_83C84D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2208
	ctx.r3.s64 = ctx.r11.s64 + -2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D64"))) PPC_WEAK_FUNC(sub_83C84D64);
PPC_FUNC_IMPL(__imp__sub_83C84D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D68"))) PPC_WEAK_FUNC(sub_83C84D68);
PPC_FUNC_IMPL(__imp__sub_83C84D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D74"))) PPC_WEAK_FUNC(sub_83C84D74);
PPC_FUNC_IMPL(__imp__sub_83C84D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C84D78"))) PPC_WEAK_FUNC(sub_83C84D78);
PPC_FUNC_IMPL(__imp__sub_83C84D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-2192
	ctx.r3.s64 = ctx.r11.s64 + -2192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C84D84"))) PPC_WEAK_FUNC(sub_83C84D84);
PPC_FUNC_IMPL(__imp__sub_83C84D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

