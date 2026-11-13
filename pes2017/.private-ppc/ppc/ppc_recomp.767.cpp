#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3BB58"))) PPC_WEAK_FUNC(sub_83C3BB58);
PPC_FUNC_IMPL(__imp__sub_83C3BB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31104
	ctx.r3.s64 = ctx.r11.s64 + 31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BB64"))) PPC_WEAK_FUNC(sub_83C3BB64);
PPC_FUNC_IMPL(__imp__sub_83C3BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BB68"))) PPC_WEAK_FUNC(sub_83C3BB68);
PPC_FUNC_IMPL(__imp__sub_83C3BB68) {
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
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// bl 0x8259af80
	ctx.lr = 0x83C3BB80;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31120
	ctx.r3.s64 = ctx.r10.s64 + 31120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3BB8C;
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

__attribute__((alias("__imp__sub_83C3BB9C"))) PPC_WEAK_FUNC(sub_83C3BB9C);
PPC_FUNC_IMPL(__imp__sub_83C3BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BBA0"))) PPC_WEAK_FUNC(sub_83C3BBA0);
PPC_FUNC_IMPL(__imp__sub_83C3BBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29712
	ctx.r11.s64 = ctx.r8.s64 + 29712;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-18292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31112
	ctx.r3.s64 = ctx.r6.s64 + 31112;
	// stw r10,29712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29712, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BBD0"))) PPC_WEAK_FUNC(sub_83C3BBD0);
PPC_FUNC_IMPL(__imp__sub_83C3BBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31128
	ctx.r3.s64 = ctx.r11.s64 + 31128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BBDC"))) PPC_WEAK_FUNC(sub_83C3BBDC);
PPC_FUNC_IMPL(__imp__sub_83C3BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BBE0"))) PPC_WEAK_FUNC(sub_83C3BBE0);
PPC_FUNC_IMPL(__imp__sub_83C3BBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31136
	ctx.r3.s64 = ctx.r11.s64 + 31136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BBEC"))) PPC_WEAK_FUNC(sub_83C3BBEC);
PPC_FUNC_IMPL(__imp__sub_83C3BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BBF0"))) PPC_WEAK_FUNC(sub_83C3BBF0);
PPC_FUNC_IMPL(__imp__sub_83C3BBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BBFC"))) PPC_WEAK_FUNC(sub_83C3BBFC);
PPC_FUNC_IMPL(__imp__sub_83C3BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC00"))) PPC_WEAK_FUNC(sub_83C3BC00);
PPC_FUNC_IMPL(__imp__sub_83C3BC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31152
	ctx.r3.s64 = ctx.r11.s64 + 31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC0C"))) PPC_WEAK_FUNC(sub_83C3BC0C);
PPC_FUNC_IMPL(__imp__sub_83C3BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC10"))) PPC_WEAK_FUNC(sub_83C3BC10);
PPC_FUNC_IMPL(__imp__sub_83C3BC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31160
	ctx.r3.s64 = ctx.r11.s64 + 31160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC1C"))) PPC_WEAK_FUNC(sub_83C3BC1C);
PPC_FUNC_IMPL(__imp__sub_83C3BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC20"))) PPC_WEAK_FUNC(sub_83C3BC20);
PPC_FUNC_IMPL(__imp__sub_83C3BC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC2C"))) PPC_WEAK_FUNC(sub_83C3BC2C);
PPC_FUNC_IMPL(__imp__sub_83C3BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC30"))) PPC_WEAK_FUNC(sub_83C3BC30);
PPC_FUNC_IMPL(__imp__sub_83C3BC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31176
	ctx.r3.s64 = ctx.r11.s64 + 31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC3C"))) PPC_WEAK_FUNC(sub_83C3BC3C);
PPC_FUNC_IMPL(__imp__sub_83C3BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC40"))) PPC_WEAK_FUNC(sub_83C3BC40);
PPC_FUNC_IMPL(__imp__sub_83C3BC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC4C"))) PPC_WEAK_FUNC(sub_83C3BC4C);
PPC_FUNC_IMPL(__imp__sub_83C3BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC50"))) PPC_WEAK_FUNC(sub_83C3BC50);
PPC_FUNC_IMPL(__imp__sub_83C3BC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC5C"))) PPC_WEAK_FUNC(sub_83C3BC5C);
PPC_FUNC_IMPL(__imp__sub_83C3BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC60"))) PPC_WEAK_FUNC(sub_83C3BC60);
PPC_FUNC_IMPL(__imp__sub_83C3BC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC6C"))) PPC_WEAK_FUNC(sub_83C3BC6C);
PPC_FUNC_IMPL(__imp__sub_83C3BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC70"))) PPC_WEAK_FUNC(sub_83C3BC70);
PPC_FUNC_IMPL(__imp__sub_83C3BC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC7C"))) PPC_WEAK_FUNC(sub_83C3BC7C);
PPC_FUNC_IMPL(__imp__sub_83C3BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC80"))) PPC_WEAK_FUNC(sub_83C3BC80);
PPC_FUNC_IMPL(__imp__sub_83C3BC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31216
	ctx.r3.s64 = ctx.r11.s64 + 31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC8C"))) PPC_WEAK_FUNC(sub_83C3BC8C);
PPC_FUNC_IMPL(__imp__sub_83C3BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BC90"))) PPC_WEAK_FUNC(sub_83C3BC90);
PPC_FUNC_IMPL(__imp__sub_83C3BC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BC9C"))) PPC_WEAK_FUNC(sub_83C3BC9C);
PPC_FUNC_IMPL(__imp__sub_83C3BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCA0"))) PPC_WEAK_FUNC(sub_83C3BCA0);
PPC_FUNC_IMPL(__imp__sub_83C3BCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCAC"))) PPC_WEAK_FUNC(sub_83C3BCAC);
PPC_FUNC_IMPL(__imp__sub_83C3BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCB0"))) PPC_WEAK_FUNC(sub_83C3BCB0);
PPC_FUNC_IMPL(__imp__sub_83C3BCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCBC"))) PPC_WEAK_FUNC(sub_83C3BCBC);
PPC_FUNC_IMPL(__imp__sub_83C3BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCC0"))) PPC_WEAK_FUNC(sub_83C3BCC0);
PPC_FUNC_IMPL(__imp__sub_83C3BCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCCC"))) PPC_WEAK_FUNC(sub_83C3BCCC);
PPC_FUNC_IMPL(__imp__sub_83C3BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCD0"))) PPC_WEAK_FUNC(sub_83C3BCD0);
PPC_FUNC_IMPL(__imp__sub_83C3BCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31256
	ctx.r3.s64 = ctx.r11.s64 + 31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCDC"))) PPC_WEAK_FUNC(sub_83C3BCDC);
PPC_FUNC_IMPL(__imp__sub_83C3BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCE0"))) PPC_WEAK_FUNC(sub_83C3BCE0);
PPC_FUNC_IMPL(__imp__sub_83C3BCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31264
	ctx.r3.s64 = ctx.r11.s64 + 31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCEC"))) PPC_WEAK_FUNC(sub_83C3BCEC);
PPC_FUNC_IMPL(__imp__sub_83C3BCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BCF0"))) PPC_WEAK_FUNC(sub_83C3BCF0);
PPC_FUNC_IMPL(__imp__sub_83C3BCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31272
	ctx.r3.s64 = ctx.r11.s64 + 31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BCFC"))) PPC_WEAK_FUNC(sub_83C3BCFC);
PPC_FUNC_IMPL(__imp__sub_83C3BCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD00"))) PPC_WEAK_FUNC(sub_83C3BD00);
PPC_FUNC_IMPL(__imp__sub_83C3BD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BD0C"))) PPC_WEAK_FUNC(sub_83C3BD0C);
PPC_FUNC_IMPL(__imp__sub_83C3BD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD10"))) PPC_WEAK_FUNC(sub_83C3BD10);
PPC_FUNC_IMPL(__imp__sub_83C3BD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31288
	ctx.r3.s64 = ctx.r11.s64 + 31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BD1C"))) PPC_WEAK_FUNC(sub_83C3BD1C);
PPC_FUNC_IMPL(__imp__sub_83C3BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD20"))) PPC_WEAK_FUNC(sub_83C3BD20);
PPC_FUNC_IMPL(__imp__sub_83C3BD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31296
	ctx.r3.s64 = ctx.r11.s64 + 31296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BD2C"))) PPC_WEAK_FUNC(sub_83C3BD2C);
PPC_FUNC_IMPL(__imp__sub_83C3BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD30"))) PPC_WEAK_FUNC(sub_83C3BD30);
PPC_FUNC_IMPL(__imp__sub_83C3BD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31304
	ctx.r3.s64 = ctx.r11.s64 + 31304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BD3C"))) PPC_WEAK_FUNC(sub_83C3BD3C);
PPC_FUNC_IMPL(__imp__sub_83C3BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD40"))) PPC_WEAK_FUNC(sub_83C3BD40);
PPC_FUNC_IMPL(__imp__sub_83C3BD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31312
	ctx.r3.s64 = ctx.r11.s64 + 31312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BD4C"))) PPC_WEAK_FUNC(sub_83C3BD4C);
PPC_FUNC_IMPL(__imp__sub_83C3BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD50"))) PPC_WEAK_FUNC(sub_83C3BD50);
PPC_FUNC_IMPL(__imp__sub_83C3BD50) {
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
	// addi r3,r11,30093
	ctx.r3.s64 = ctx.r11.s64 + 30093;
	// bl 0x83523120
	ctx.lr = 0x83C3BD68;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31320
	ctx.r3.s64 = ctx.r10.s64 + 31320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3BD74;
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

__attribute__((alias("__imp__sub_83C3BD84"))) PPC_WEAK_FUNC(sub_83C3BD84);
PPC_FUNC_IMPL(__imp__sub_83C3BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BD88"))) PPC_WEAK_FUNC(sub_83C3BD88);
PPC_FUNC_IMPL(__imp__sub_83C3BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30108
	ctx.r7.s64 = ctx.r8.s64 + 30108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30108);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30108, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3BDB0"))) PPC_WEAK_FUNC(sub_83C3BDB0);
PPC_FUNC_IMPL(__imp__sub_83C3BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-18036
	ctx.r6.s64 = ctx.r7.s64 + -18036;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30108);
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
	// std r9,-18036(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18036, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3BDF8"))) PPC_WEAK_FUNC(sub_83C3BDF8);
PPC_FUNC_IMPL(__imp__sub_83C3BDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31336
	ctx.r3.s64 = ctx.r11.s64 + 31336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BE04"))) PPC_WEAK_FUNC(sub_83C3BE04);
PPC_FUNC_IMPL(__imp__sub_83C3BE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BE08"))) PPC_WEAK_FUNC(sub_83C3BE08);
PPC_FUNC_IMPL(__imp__sub_83C3BE08) {
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
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x8259af80
	ctx.lr = 0x83C3BE20;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31352
	ctx.r3.s64 = ctx.r10.s64 + 31352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3BE2C;
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

__attribute__((alias("__imp__sub_83C3BE3C"))) PPC_WEAK_FUNC(sub_83C3BE3C);
PPC_FUNC_IMPL(__imp__sub_83C3BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BE40"))) PPC_WEAK_FUNC(sub_83C3BE40);
PPC_FUNC_IMPL(__imp__sub_83C3BE40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30096
	ctx.r11.s64 = ctx.r8.s64 + 30096;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-18060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31344
	ctx.r3.s64 = ctx.r6.s64 + 31344;
	// stw r10,30096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30096, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BE70"))) PPC_WEAK_FUNC(sub_83C3BE70);
PPC_FUNC_IMPL(__imp__sub_83C3BE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31360
	ctx.r3.s64 = ctx.r11.s64 + 31360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BE7C"))) PPC_WEAK_FUNC(sub_83C3BE7C);
PPC_FUNC_IMPL(__imp__sub_83C3BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BE80"))) PPC_WEAK_FUNC(sub_83C3BE80);
PPC_FUNC_IMPL(__imp__sub_83C3BE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31368
	ctx.r3.s64 = ctx.r11.s64 + 31368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BE8C"))) PPC_WEAK_FUNC(sub_83C3BE8C);
PPC_FUNC_IMPL(__imp__sub_83C3BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BE90"))) PPC_WEAK_FUNC(sub_83C3BE90);
PPC_FUNC_IMPL(__imp__sub_83C3BE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BE9C"))) PPC_WEAK_FUNC(sub_83C3BE9C);
PPC_FUNC_IMPL(__imp__sub_83C3BE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BEA0"))) PPC_WEAK_FUNC(sub_83C3BEA0);
PPC_FUNC_IMPL(__imp__sub_83C3BEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BEAC"))) PPC_WEAK_FUNC(sub_83C3BEAC);
PPC_FUNC_IMPL(__imp__sub_83C3BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BEB0"))) PPC_WEAK_FUNC(sub_83C3BEB0);
PPC_FUNC_IMPL(__imp__sub_83C3BEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31392
	ctx.r3.s64 = ctx.r11.s64 + 31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BEBC"))) PPC_WEAK_FUNC(sub_83C3BEBC);
PPC_FUNC_IMPL(__imp__sub_83C3BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BEC0"))) PPC_WEAK_FUNC(sub_83C3BEC0);
PPC_FUNC_IMPL(__imp__sub_83C3BEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BECC"))) PPC_WEAK_FUNC(sub_83C3BECC);
PPC_FUNC_IMPL(__imp__sub_83C3BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BED0"))) PPC_WEAK_FUNC(sub_83C3BED0);
PPC_FUNC_IMPL(__imp__sub_83C3BED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BEDC"))) PPC_WEAK_FUNC(sub_83C3BEDC);
PPC_FUNC_IMPL(__imp__sub_83C3BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BEE0"))) PPC_WEAK_FUNC(sub_83C3BEE0);
PPC_FUNC_IMPL(__imp__sub_83C3BEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31416
	ctx.r3.s64 = ctx.r11.s64 + 31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BEEC"))) PPC_WEAK_FUNC(sub_83C3BEEC);
PPC_FUNC_IMPL(__imp__sub_83C3BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BEF0"))) PPC_WEAK_FUNC(sub_83C3BEF0);
PPC_FUNC_IMPL(__imp__sub_83C3BEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BEFC"))) PPC_WEAK_FUNC(sub_83C3BEFC);
PPC_FUNC_IMPL(__imp__sub_83C3BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BF00"))) PPC_WEAK_FUNC(sub_83C3BF00);
PPC_FUNC_IMPL(__imp__sub_83C3BF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31432
	ctx.r3.s64 = ctx.r11.s64 + 31432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BF0C"))) PPC_WEAK_FUNC(sub_83C3BF0C);
PPC_FUNC_IMPL(__imp__sub_83C3BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BF10"))) PPC_WEAK_FUNC(sub_83C3BF10);
PPC_FUNC_IMPL(__imp__sub_83C3BF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31440
	ctx.r3.s64 = ctx.r11.s64 + 31440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BF1C"))) PPC_WEAK_FUNC(sub_83C3BF1C);
PPC_FUNC_IMPL(__imp__sub_83C3BF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BF20"))) PPC_WEAK_FUNC(sub_83C3BF20);
PPC_FUNC_IMPL(__imp__sub_83C3BF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BF2C"))) PPC_WEAK_FUNC(sub_83C3BF2C);
PPC_FUNC_IMPL(__imp__sub_83C3BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BF30"))) PPC_WEAK_FUNC(sub_83C3BF30);
PPC_FUNC_IMPL(__imp__sub_83C3BF30) {
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
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// bl 0x83523120
	ctx.lr = 0x83C3BF48;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31456
	ctx.r3.s64 = ctx.r10.s64 + 31456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3BF54;
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

__attribute__((alias("__imp__sub_83C3BF64"))) PPC_WEAK_FUNC(sub_83C3BF64);
PPC_FUNC_IMPL(__imp__sub_83C3BF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BF68"))) PPC_WEAK_FUNC(sub_83C3BF68);
PPC_FUNC_IMPL(__imp__sub_83C3BF68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30480
	ctx.r7.s64 = ctx.r8.s64 + 30480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3BF90"))) PPC_WEAK_FUNC(sub_83C3BF90);
PPC_FUNC_IMPL(__imp__sub_83C3BF90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17880
	ctx.r6.s64 = ctx.r7.s64 + -17880;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30480);
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
	// std r9,-17880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3BFD8"))) PPC_WEAK_FUNC(sub_83C3BFD8);
PPC_FUNC_IMPL(__imp__sub_83C3BFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31472
	ctx.r3.s64 = ctx.r11.s64 + 31472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BFE4"))) PPC_WEAK_FUNC(sub_83C3BFE4);
PPC_FUNC_IMPL(__imp__sub_83C3BFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BFE8"))) PPC_WEAK_FUNC(sub_83C3BFE8);
PPC_FUNC_IMPL(__imp__sub_83C3BFE8) {
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
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// bl 0x8259af80
	ctx.lr = 0x83C3C000;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31488
	ctx.r3.s64 = ctx.r10.s64 + 31488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C00C;
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

__attribute__((alias("__imp__sub_83C3C01C"))) PPC_WEAK_FUNC(sub_83C3C01C);
PPC_FUNC_IMPL(__imp__sub_83C3C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C020"))) PPC_WEAK_FUNC(sub_83C3C020);
PPC_FUNC_IMPL(__imp__sub_83C3C020) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30468
	ctx.r11.s64 = ctx.r8.s64 + 30468;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31480
	ctx.r3.s64 = ctx.r6.s64 + 31480;
	// stw r10,30468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C050"))) PPC_WEAK_FUNC(sub_83C3C050);
PPC_FUNC_IMPL(__imp__sub_83C3C050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C05C"))) PPC_WEAK_FUNC(sub_83C3C05C);
PPC_FUNC_IMPL(__imp__sub_83C3C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C060"))) PPC_WEAK_FUNC(sub_83C3C060);
PPC_FUNC_IMPL(__imp__sub_83C3C060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31504
	ctx.r3.s64 = ctx.r11.s64 + 31504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C06C"))) PPC_WEAK_FUNC(sub_83C3C06C);
PPC_FUNC_IMPL(__imp__sub_83C3C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C070"))) PPC_WEAK_FUNC(sub_83C3C070);
PPC_FUNC_IMPL(__imp__sub_83C3C070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31512
	ctx.r3.s64 = ctx.r11.s64 + 31512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C07C"))) PPC_WEAK_FUNC(sub_83C3C07C);
PPC_FUNC_IMPL(__imp__sub_83C3C07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C080"))) PPC_WEAK_FUNC(sub_83C3C080);
PPC_FUNC_IMPL(__imp__sub_83C3C080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C08C"))) PPC_WEAK_FUNC(sub_83C3C08C);
PPC_FUNC_IMPL(__imp__sub_83C3C08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C090"))) PPC_WEAK_FUNC(sub_83C3C090);
PPC_FUNC_IMPL(__imp__sub_83C3C090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31528
	ctx.r3.s64 = ctx.r11.s64 + 31528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C09C"))) PPC_WEAK_FUNC(sub_83C3C09C);
PPC_FUNC_IMPL(__imp__sub_83C3C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0A0"))) PPC_WEAK_FUNC(sub_83C3C0A0);
PPC_FUNC_IMPL(__imp__sub_83C3C0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31536
	ctx.r3.s64 = ctx.r11.s64 + 31536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0AC"))) PPC_WEAK_FUNC(sub_83C3C0AC);
PPC_FUNC_IMPL(__imp__sub_83C3C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0B0"))) PPC_WEAK_FUNC(sub_83C3C0B0);
PPC_FUNC_IMPL(__imp__sub_83C3C0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31544
	ctx.r3.s64 = ctx.r11.s64 + 31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0BC"))) PPC_WEAK_FUNC(sub_83C3C0BC);
PPC_FUNC_IMPL(__imp__sub_83C3C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0C0"))) PPC_WEAK_FUNC(sub_83C3C0C0);
PPC_FUNC_IMPL(__imp__sub_83C3C0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0CC"))) PPC_WEAK_FUNC(sub_83C3C0CC);
PPC_FUNC_IMPL(__imp__sub_83C3C0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0D0"))) PPC_WEAK_FUNC(sub_83C3C0D0);
PPC_FUNC_IMPL(__imp__sub_83C3C0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0DC"))) PPC_WEAK_FUNC(sub_83C3C0DC);
PPC_FUNC_IMPL(__imp__sub_83C3C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0E0"))) PPC_WEAK_FUNC(sub_83C3C0E0);
PPC_FUNC_IMPL(__imp__sub_83C3C0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31568
	ctx.r3.s64 = ctx.r11.s64 + 31568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0EC"))) PPC_WEAK_FUNC(sub_83C3C0EC);
PPC_FUNC_IMPL(__imp__sub_83C3C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C0F0"))) PPC_WEAK_FUNC(sub_83C3C0F0);
PPC_FUNC_IMPL(__imp__sub_83C3C0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31576
	ctx.r3.s64 = ctx.r11.s64 + 31576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C0FC"))) PPC_WEAK_FUNC(sub_83C3C0FC);
PPC_FUNC_IMPL(__imp__sub_83C3C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C100"))) PPC_WEAK_FUNC(sub_83C3C100);
PPC_FUNC_IMPL(__imp__sub_83C3C100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C10C"))) PPC_WEAK_FUNC(sub_83C3C10C);
PPC_FUNC_IMPL(__imp__sub_83C3C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C110"))) PPC_WEAK_FUNC(sub_83C3C110);
PPC_FUNC_IMPL(__imp__sub_83C3C110) {
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
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// bl 0x83523120
	ctx.lr = 0x83C3C128;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31592
	ctx.r3.s64 = ctx.r10.s64 + 31592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C134;
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

__attribute__((alias("__imp__sub_83C3C144"))) PPC_WEAK_FUNC(sub_83C3C144);
PPC_FUNC_IMPL(__imp__sub_83C3C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C148"))) PPC_WEAK_FUNC(sub_83C3C148);
PPC_FUNC_IMPL(__imp__sub_83C3C148) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30848
	ctx.r7.s64 = ctx.r8.s64 + 30848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C170"))) PPC_WEAK_FUNC(sub_83C3C170);
PPC_FUNC_IMPL(__imp__sub_83C3C170) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17752
	ctx.r6.s64 = ctx.r7.s64 + -17752;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30848);
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
	// std r9,-17752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C1B8"))) PPC_WEAK_FUNC(sub_83C3C1B8);
PPC_FUNC_IMPL(__imp__sub_83C3C1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C1C4"))) PPC_WEAK_FUNC(sub_83C3C1C4);
PPC_FUNC_IMPL(__imp__sub_83C3C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C1C8"))) PPC_WEAK_FUNC(sub_83C3C1C8);
PPC_FUNC_IMPL(__imp__sub_83C3C1C8) {
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
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// bl 0x8259af80
	ctx.lr = 0x83C3C1E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31624
	ctx.r3.s64 = ctx.r10.s64 + 31624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C1EC;
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

__attribute__((alias("__imp__sub_83C3C1FC"))) PPC_WEAK_FUNC(sub_83C3C1FC);
PPC_FUNC_IMPL(__imp__sub_83C3C1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C200"))) PPC_WEAK_FUNC(sub_83C3C200);
PPC_FUNC_IMPL(__imp__sub_83C3C200) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30836
	ctx.r11.s64 = ctx.r8.s64 + 30836;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31616
	ctx.r3.s64 = ctx.r6.s64 + 31616;
	// stw r10,30836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C230"))) PPC_WEAK_FUNC(sub_83C3C230);
PPC_FUNC_IMPL(__imp__sub_83C3C230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C23C"))) PPC_WEAK_FUNC(sub_83C3C23C);
PPC_FUNC_IMPL(__imp__sub_83C3C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C240"))) PPC_WEAK_FUNC(sub_83C3C240);
PPC_FUNC_IMPL(__imp__sub_83C3C240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C24C"))) PPC_WEAK_FUNC(sub_83C3C24C);
PPC_FUNC_IMPL(__imp__sub_83C3C24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C250"))) PPC_WEAK_FUNC(sub_83C3C250);
PPC_FUNC_IMPL(__imp__sub_83C3C250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C25C"))) PPC_WEAK_FUNC(sub_83C3C25C);
PPC_FUNC_IMPL(__imp__sub_83C3C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C260"))) PPC_WEAK_FUNC(sub_83C3C260);
PPC_FUNC_IMPL(__imp__sub_83C3C260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C26C"))) PPC_WEAK_FUNC(sub_83C3C26C);
PPC_FUNC_IMPL(__imp__sub_83C3C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C270"))) PPC_WEAK_FUNC(sub_83C3C270);
PPC_FUNC_IMPL(__imp__sub_83C3C270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C27C"))) PPC_WEAK_FUNC(sub_83C3C27C);
PPC_FUNC_IMPL(__imp__sub_83C3C27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C280"))) PPC_WEAK_FUNC(sub_83C3C280);
PPC_FUNC_IMPL(__imp__sub_83C3C280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C28C"))) PPC_WEAK_FUNC(sub_83C3C28C);
PPC_FUNC_IMPL(__imp__sub_83C3C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C290"))) PPC_WEAK_FUNC(sub_83C3C290);
PPC_FUNC_IMPL(__imp__sub_83C3C290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31680
	ctx.r3.s64 = ctx.r11.s64 + 31680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C29C"))) PPC_WEAK_FUNC(sub_83C3C29C);
PPC_FUNC_IMPL(__imp__sub_83C3C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2A0"))) PPC_WEAK_FUNC(sub_83C3C2A0);
PPC_FUNC_IMPL(__imp__sub_83C3C2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31688
	ctx.r3.s64 = ctx.r11.s64 + 31688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C2AC"))) PPC_WEAK_FUNC(sub_83C3C2AC);
PPC_FUNC_IMPL(__imp__sub_83C3C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2B0"))) PPC_WEAK_FUNC(sub_83C3C2B0);
PPC_FUNC_IMPL(__imp__sub_83C3C2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31696
	ctx.r3.s64 = ctx.r11.s64 + 31696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C2BC"))) PPC_WEAK_FUNC(sub_83C3C2BC);
PPC_FUNC_IMPL(__imp__sub_83C3C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2C0"))) PPC_WEAK_FUNC(sub_83C3C2C0);
PPC_FUNC_IMPL(__imp__sub_83C3C2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31704
	ctx.r3.s64 = ctx.r11.s64 + 31704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C2CC"))) PPC_WEAK_FUNC(sub_83C3C2CC);
PPC_FUNC_IMPL(__imp__sub_83C3C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2D0"))) PPC_WEAK_FUNC(sub_83C3C2D0);
PPC_FUNC_IMPL(__imp__sub_83C3C2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31712
	ctx.r3.s64 = ctx.r11.s64 + 31712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C2DC"))) PPC_WEAK_FUNC(sub_83C3C2DC);
PPC_FUNC_IMPL(__imp__sub_83C3C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2E0"))) PPC_WEAK_FUNC(sub_83C3C2E0);
PPC_FUNC_IMPL(__imp__sub_83C3C2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C2EC"))) PPC_WEAK_FUNC(sub_83C3C2EC);
PPC_FUNC_IMPL(__imp__sub_83C3C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C2F0"))) PPC_WEAK_FUNC(sub_83C3C2F0);
PPC_FUNC_IMPL(__imp__sub_83C3C2F0) {
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
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// bl 0x83523120
	ctx.lr = 0x83C3C308;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31728
	ctx.r3.s64 = ctx.r10.s64 + 31728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C314;
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

__attribute__((alias("__imp__sub_83C3C324"))) PPC_WEAK_FUNC(sub_83C3C324);
PPC_FUNC_IMPL(__imp__sub_83C3C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C328"))) PPC_WEAK_FUNC(sub_83C3C328);
PPC_FUNC_IMPL(__imp__sub_83C3C328) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31216
	ctx.r7.s64 = ctx.r8.s64 + 31216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C350"))) PPC_WEAK_FUNC(sub_83C3C350);
PPC_FUNC_IMPL(__imp__sub_83C3C350) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17624
	ctx.r6.s64 = ctx.r7.s64 + -17624;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31216);
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
	// std r9,-17624(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C398"))) PPC_WEAK_FUNC(sub_83C3C398);
PPC_FUNC_IMPL(__imp__sub_83C3C398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C3A4"))) PPC_WEAK_FUNC(sub_83C3C3A4);
PPC_FUNC_IMPL(__imp__sub_83C3C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C3A8"))) PPC_WEAK_FUNC(sub_83C3C3A8);
PPC_FUNC_IMPL(__imp__sub_83C3C3A8) {
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
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// bl 0x8259af80
	ctx.lr = 0x83C3C3C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31760
	ctx.r3.s64 = ctx.r10.s64 + 31760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C3CC;
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

__attribute__((alias("__imp__sub_83C3C3DC"))) PPC_WEAK_FUNC(sub_83C3C3DC);
PPC_FUNC_IMPL(__imp__sub_83C3C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C3E0"))) PPC_WEAK_FUNC(sub_83C3C3E0);
PPC_FUNC_IMPL(__imp__sub_83C3C3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31204
	ctx.r11.s64 = ctx.r8.s64 + 31204;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17648);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31752
	ctx.r3.s64 = ctx.r6.s64 + 31752;
	// stw r10,31204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C410"))) PPC_WEAK_FUNC(sub_83C3C410);
PPC_FUNC_IMPL(__imp__sub_83C3C410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31768
	ctx.r3.s64 = ctx.r11.s64 + 31768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C41C"))) PPC_WEAK_FUNC(sub_83C3C41C);
PPC_FUNC_IMPL(__imp__sub_83C3C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C420"))) PPC_WEAK_FUNC(sub_83C3C420);
PPC_FUNC_IMPL(__imp__sub_83C3C420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31776
	ctx.r3.s64 = ctx.r11.s64 + 31776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C42C"))) PPC_WEAK_FUNC(sub_83C3C42C);
PPC_FUNC_IMPL(__imp__sub_83C3C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C430"))) PPC_WEAK_FUNC(sub_83C3C430);
PPC_FUNC_IMPL(__imp__sub_83C3C430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31784
	ctx.r3.s64 = ctx.r11.s64 + 31784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C43C"))) PPC_WEAK_FUNC(sub_83C3C43C);
PPC_FUNC_IMPL(__imp__sub_83C3C43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C440"))) PPC_WEAK_FUNC(sub_83C3C440);
PPC_FUNC_IMPL(__imp__sub_83C3C440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31792
	ctx.r3.s64 = ctx.r11.s64 + 31792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C44C"))) PPC_WEAK_FUNC(sub_83C3C44C);
PPC_FUNC_IMPL(__imp__sub_83C3C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C450"))) PPC_WEAK_FUNC(sub_83C3C450);
PPC_FUNC_IMPL(__imp__sub_83C3C450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31800
	ctx.r3.s64 = ctx.r11.s64 + 31800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C45C"))) PPC_WEAK_FUNC(sub_83C3C45C);
PPC_FUNC_IMPL(__imp__sub_83C3C45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C460"))) PPC_WEAK_FUNC(sub_83C3C460);
PPC_FUNC_IMPL(__imp__sub_83C3C460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31808
	ctx.r3.s64 = ctx.r11.s64 + 31808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C46C"))) PPC_WEAK_FUNC(sub_83C3C46C);
PPC_FUNC_IMPL(__imp__sub_83C3C46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C470"))) PPC_WEAK_FUNC(sub_83C3C470);
PPC_FUNC_IMPL(__imp__sub_83C3C470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C47C"))) PPC_WEAK_FUNC(sub_83C3C47C);
PPC_FUNC_IMPL(__imp__sub_83C3C47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C480"))) PPC_WEAK_FUNC(sub_83C3C480);
PPC_FUNC_IMPL(__imp__sub_83C3C480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C48C"))) PPC_WEAK_FUNC(sub_83C3C48C);
PPC_FUNC_IMPL(__imp__sub_83C3C48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C490"))) PPC_WEAK_FUNC(sub_83C3C490);
PPC_FUNC_IMPL(__imp__sub_83C3C490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31832
	ctx.r3.s64 = ctx.r11.s64 + 31832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C49C"))) PPC_WEAK_FUNC(sub_83C3C49C);
PPC_FUNC_IMPL(__imp__sub_83C3C49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C4A0"))) PPC_WEAK_FUNC(sub_83C3C4A0);
PPC_FUNC_IMPL(__imp__sub_83C3C4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C4AC"))) PPC_WEAK_FUNC(sub_83C3C4AC);
PPC_FUNC_IMPL(__imp__sub_83C3C4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C4B0"))) PPC_WEAK_FUNC(sub_83C3C4B0);
PPC_FUNC_IMPL(__imp__sub_83C3C4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31848
	ctx.r3.s64 = ctx.r11.s64 + 31848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C4BC"))) PPC_WEAK_FUNC(sub_83C3C4BC);
PPC_FUNC_IMPL(__imp__sub_83C3C4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C4C0"))) PPC_WEAK_FUNC(sub_83C3C4C0);
PPC_FUNC_IMPL(__imp__sub_83C3C4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C4CC"))) PPC_WEAK_FUNC(sub_83C3C4CC);
PPC_FUNC_IMPL(__imp__sub_83C3C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C4D0"))) PPC_WEAK_FUNC(sub_83C3C4D0);
PPC_FUNC_IMPL(__imp__sub_83C3C4D0) {
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
	// addi r3,r11,31568
	ctx.r3.s64 = ctx.r11.s64 + 31568;
	// bl 0x83523120
	ctx.lr = 0x83C3C4E8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31864
	ctx.r3.s64 = ctx.r10.s64 + 31864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C4F4;
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

__attribute__((alias("__imp__sub_83C3C504"))) PPC_WEAK_FUNC(sub_83C3C504);
PPC_FUNC_IMPL(__imp__sub_83C3C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C508"))) PPC_WEAK_FUNC(sub_83C3C508);
PPC_FUNC_IMPL(__imp__sub_83C3C508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31584
	ctx.r7.s64 = ctx.r8.s64 + 31584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C530"))) PPC_WEAK_FUNC(sub_83C3C530);
PPC_FUNC_IMPL(__imp__sub_83C3C530) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17496
	ctx.r6.s64 = ctx.r7.s64 + -17496;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17568(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17568);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31584);
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
	// std r9,-17496(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17496, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C578"))) PPC_WEAK_FUNC(sub_83C3C578);
PPC_FUNC_IMPL(__imp__sub_83C3C578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C584"))) PPC_WEAK_FUNC(sub_83C3C584);
PPC_FUNC_IMPL(__imp__sub_83C3C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C588"))) PPC_WEAK_FUNC(sub_83C3C588);
PPC_FUNC_IMPL(__imp__sub_83C3C588) {
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
	// addi r3,r11,31592
	ctx.r3.s64 = ctx.r11.s64 + 31592;
	// bl 0x8259af80
	ctx.lr = 0x83C3C5A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31896
	ctx.r3.s64 = ctx.r10.s64 + 31896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C5AC;
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

__attribute__((alias("__imp__sub_83C3C5BC"))) PPC_WEAK_FUNC(sub_83C3C5BC);
PPC_FUNC_IMPL(__imp__sub_83C3C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C5C0"))) PPC_WEAK_FUNC(sub_83C3C5C0);
PPC_FUNC_IMPL(__imp__sub_83C3C5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31572
	ctx.r11.s64 = ctx.r8.s64 + 31572;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17520);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31888
	ctx.r3.s64 = ctx.r6.s64 + 31888;
	// stw r10,31572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C5F0"))) PPC_WEAK_FUNC(sub_83C3C5F0);
PPC_FUNC_IMPL(__imp__sub_83C3C5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C5FC"))) PPC_WEAK_FUNC(sub_83C3C5FC);
PPC_FUNC_IMPL(__imp__sub_83C3C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C600"))) PPC_WEAK_FUNC(sub_83C3C600);
PPC_FUNC_IMPL(__imp__sub_83C3C600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C60C"))) PPC_WEAK_FUNC(sub_83C3C60C);
PPC_FUNC_IMPL(__imp__sub_83C3C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C610"))) PPC_WEAK_FUNC(sub_83C3C610);
PPC_FUNC_IMPL(__imp__sub_83C3C610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C61C"))) PPC_WEAK_FUNC(sub_83C3C61C);
PPC_FUNC_IMPL(__imp__sub_83C3C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C620"))) PPC_WEAK_FUNC(sub_83C3C620);
PPC_FUNC_IMPL(__imp__sub_83C3C620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C62C"))) PPC_WEAK_FUNC(sub_83C3C62C);
PPC_FUNC_IMPL(__imp__sub_83C3C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C630"))) PPC_WEAK_FUNC(sub_83C3C630);
PPC_FUNC_IMPL(__imp__sub_83C3C630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C63C"))) PPC_WEAK_FUNC(sub_83C3C63C);
PPC_FUNC_IMPL(__imp__sub_83C3C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C640"))) PPC_WEAK_FUNC(sub_83C3C640);
PPC_FUNC_IMPL(__imp__sub_83C3C640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C64C"))) PPC_WEAK_FUNC(sub_83C3C64C);
PPC_FUNC_IMPL(__imp__sub_83C3C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C650"))) PPC_WEAK_FUNC(sub_83C3C650);
PPC_FUNC_IMPL(__imp__sub_83C3C650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C65C"))) PPC_WEAK_FUNC(sub_83C3C65C);
PPC_FUNC_IMPL(__imp__sub_83C3C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C660"))) PPC_WEAK_FUNC(sub_83C3C660);
PPC_FUNC_IMPL(__imp__sub_83C3C660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C66C"))) PPC_WEAK_FUNC(sub_83C3C66C);
PPC_FUNC_IMPL(__imp__sub_83C3C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C670"))) PPC_WEAK_FUNC(sub_83C3C670);
PPC_FUNC_IMPL(__imp__sub_83C3C670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C67C"))) PPC_WEAK_FUNC(sub_83C3C67C);
PPC_FUNC_IMPL(__imp__sub_83C3C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C680"))) PPC_WEAK_FUNC(sub_83C3C680);
PPC_FUNC_IMPL(__imp__sub_83C3C680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31976
	ctx.r3.s64 = ctx.r11.s64 + 31976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C68C"))) PPC_WEAK_FUNC(sub_83C3C68C);
PPC_FUNC_IMPL(__imp__sub_83C3C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C690"))) PPC_WEAK_FUNC(sub_83C3C690);
PPC_FUNC_IMPL(__imp__sub_83C3C690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C69C"))) PPC_WEAK_FUNC(sub_83C3C69C);
PPC_FUNC_IMPL(__imp__sub_83C3C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C6A0"))) PPC_WEAK_FUNC(sub_83C3C6A0);
PPC_FUNC_IMPL(__imp__sub_83C3C6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C6AC"))) PPC_WEAK_FUNC(sub_83C3C6AC);
PPC_FUNC_IMPL(__imp__sub_83C3C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C6B0"))) PPC_WEAK_FUNC(sub_83C3C6B0);
PPC_FUNC_IMPL(__imp__sub_83C3C6B0) {
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
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// bl 0x83523120
	ctx.lr = 0x83C3C6C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32000
	ctx.r3.s64 = ctx.r10.s64 + 32000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C6D4;
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

__attribute__((alias("__imp__sub_83C3C6E4"))) PPC_WEAK_FUNC(sub_83C3C6E4);
PPC_FUNC_IMPL(__imp__sub_83C3C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C6E8"))) PPC_WEAK_FUNC(sub_83C3C6E8);
PPC_FUNC_IMPL(__imp__sub_83C3C6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31952
	ctx.r7.s64 = ctx.r8.s64 + 31952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C710"))) PPC_WEAK_FUNC(sub_83C3C710);
PPC_FUNC_IMPL(__imp__sub_83C3C710) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17368
	ctx.r6.s64 = ctx.r7.s64 + -17368;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17440(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17440);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31952);
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
	// std r9,-17368(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C758"))) PPC_WEAK_FUNC(sub_83C3C758);
PPC_FUNC_IMPL(__imp__sub_83C3C758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C764"))) PPC_WEAK_FUNC(sub_83C3C764);
PPC_FUNC_IMPL(__imp__sub_83C3C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C768"))) PPC_WEAK_FUNC(sub_83C3C768);
PPC_FUNC_IMPL(__imp__sub_83C3C768) {
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
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// bl 0x8259af80
	ctx.lr = 0x83C3C780;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32032
	ctx.r3.s64 = ctx.r10.s64 + 32032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C78C;
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

__attribute__((alias("__imp__sub_83C3C79C"))) PPC_WEAK_FUNC(sub_83C3C79C);
PPC_FUNC_IMPL(__imp__sub_83C3C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C7A0"))) PPC_WEAK_FUNC(sub_83C3C7A0);
PPC_FUNC_IMPL(__imp__sub_83C3C7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31940
	ctx.r11.s64 = ctx.r8.s64 + 31940;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17392);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32024
	ctx.r3.s64 = ctx.r6.s64 + 32024;
	// stw r10,31940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C7D0"))) PPC_WEAK_FUNC(sub_83C3C7D0);
PPC_FUNC_IMPL(__imp__sub_83C3C7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C7DC"))) PPC_WEAK_FUNC(sub_83C3C7DC);
PPC_FUNC_IMPL(__imp__sub_83C3C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C7E0"))) PPC_WEAK_FUNC(sub_83C3C7E0);
PPC_FUNC_IMPL(__imp__sub_83C3C7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32048
	ctx.r3.s64 = ctx.r11.s64 + 32048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C7EC"))) PPC_WEAK_FUNC(sub_83C3C7EC);
PPC_FUNC_IMPL(__imp__sub_83C3C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C7F0"))) PPC_WEAK_FUNC(sub_83C3C7F0);
PPC_FUNC_IMPL(__imp__sub_83C3C7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C7FC"))) PPC_WEAK_FUNC(sub_83C3C7FC);
PPC_FUNC_IMPL(__imp__sub_83C3C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C800"))) PPC_WEAK_FUNC(sub_83C3C800);
PPC_FUNC_IMPL(__imp__sub_83C3C800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C80C"))) PPC_WEAK_FUNC(sub_83C3C80C);
PPC_FUNC_IMPL(__imp__sub_83C3C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C810"))) PPC_WEAK_FUNC(sub_83C3C810);
PPC_FUNC_IMPL(__imp__sub_83C3C810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C81C"))) PPC_WEAK_FUNC(sub_83C3C81C);
PPC_FUNC_IMPL(__imp__sub_83C3C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C820"))) PPC_WEAK_FUNC(sub_83C3C820);
PPC_FUNC_IMPL(__imp__sub_83C3C820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C82C"))) PPC_WEAK_FUNC(sub_83C3C82C);
PPC_FUNC_IMPL(__imp__sub_83C3C82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C830"))) PPC_WEAK_FUNC(sub_83C3C830);
PPC_FUNC_IMPL(__imp__sub_83C3C830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C83C"))) PPC_WEAK_FUNC(sub_83C3C83C);
PPC_FUNC_IMPL(__imp__sub_83C3C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C840"))) PPC_WEAK_FUNC(sub_83C3C840);
PPC_FUNC_IMPL(__imp__sub_83C3C840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C84C"))) PPC_WEAK_FUNC(sub_83C3C84C);
PPC_FUNC_IMPL(__imp__sub_83C3C84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C850"))) PPC_WEAK_FUNC(sub_83C3C850);
PPC_FUNC_IMPL(__imp__sub_83C3C850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C85C"))) PPC_WEAK_FUNC(sub_83C3C85C);
PPC_FUNC_IMPL(__imp__sub_83C3C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C860"))) PPC_WEAK_FUNC(sub_83C3C860);
PPC_FUNC_IMPL(__imp__sub_83C3C860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C86C"))) PPC_WEAK_FUNC(sub_83C3C86C);
PPC_FUNC_IMPL(__imp__sub_83C3C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C870"))) PPC_WEAK_FUNC(sub_83C3C870);
PPC_FUNC_IMPL(__imp__sub_83C3C870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32120
	ctx.r3.s64 = ctx.r11.s64 + 32120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C87C"))) PPC_WEAK_FUNC(sub_83C3C87C);
PPC_FUNC_IMPL(__imp__sub_83C3C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C880"))) PPC_WEAK_FUNC(sub_83C3C880);
PPC_FUNC_IMPL(__imp__sub_83C3C880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C88C"))) PPC_WEAK_FUNC(sub_83C3C88C);
PPC_FUNC_IMPL(__imp__sub_83C3C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C890"))) PPC_WEAK_FUNC(sub_83C3C890);
PPC_FUNC_IMPL(__imp__sub_83C3C890) {
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
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// bl 0x83523120
	ctx.lr = 0x83C3C8A8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32136
	ctx.r3.s64 = ctx.r10.s64 + 32136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C8B4;
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

__attribute__((alias("__imp__sub_83C3C8C4"))) PPC_WEAK_FUNC(sub_83C3C8C4);
PPC_FUNC_IMPL(__imp__sub_83C3C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C8C8"))) PPC_WEAK_FUNC(sub_83C3C8C8);
PPC_FUNC_IMPL(__imp__sub_83C3C8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32320
	ctx.r7.s64 = ctx.r8.s64 + 32320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C8F0"))) PPC_WEAK_FUNC(sub_83C3C8F0);
PPC_FUNC_IMPL(__imp__sub_83C3C8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17240
	ctx.r6.s64 = ctx.r7.s64 + -17240;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32320);
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
	// std r9,-17240(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3C938"))) PPC_WEAK_FUNC(sub_83C3C938);
PPC_FUNC_IMPL(__imp__sub_83C3C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

