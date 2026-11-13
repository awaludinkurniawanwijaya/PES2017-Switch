#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C02190"))) PPC_WEAK_FUNC(sub_83C02190);
PPC_FUNC_IMPL(__imp__sub_83C02190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0219C"))) PPC_WEAK_FUNC(sub_83C0219C);
PPC_FUNC_IMPL(__imp__sub_83C0219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C021A0"))) PPC_WEAK_FUNC(sub_83C021A0);
PPC_FUNC_IMPL(__imp__sub_83C021A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11120
	ctx.r3.s64 = ctx.r11.s64 + 11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C021AC"))) PPC_WEAK_FUNC(sub_83C021AC);
PPC_FUNC_IMPL(__imp__sub_83C021AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C021B0"))) PPC_WEAK_FUNC(sub_83C021B0);
PPC_FUNC_IMPL(__imp__sub_83C021B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11128
	ctx.r3.s64 = ctx.r11.s64 + 11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C021BC"))) PPC_WEAK_FUNC(sub_83C021BC);
PPC_FUNC_IMPL(__imp__sub_83C021BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C021C0"))) PPC_WEAK_FUNC(sub_83C021C0);
PPC_FUNC_IMPL(__imp__sub_83C021C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14444
	ctx.r7.s64 = ctx.r8.s64 + -14444;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14444(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14444);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14444, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C021E8"))) PPC_WEAK_FUNC(sub_83C021E8);
PPC_FUNC_IMPL(__imp__sub_83C021E8) {
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
	// addi r3,r11,-14448
	ctx.r3.s64 = ctx.r11.s64 + -14448;
	// bl 0x83523120
	ctx.lr = 0x83C02200;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11136
	ctx.r3.s64 = ctx.r10.s64 + 11136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0220C;
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

__attribute__((alias("__imp__sub_83C0221C"))) PPC_WEAK_FUNC(sub_83C0221C);
PPC_FUNC_IMPL(__imp__sub_83C0221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02220"))) PPC_WEAK_FUNC(sub_83C02220);
PPC_FUNC_IMPL(__imp__sub_83C02220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11152
	ctx.r3.s64 = ctx.r11.s64 + 11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0222C"))) PPC_WEAK_FUNC(sub_83C0222C);
PPC_FUNC_IMPL(__imp__sub_83C0222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02230"))) PPC_WEAK_FUNC(sub_83C02230);
PPC_FUNC_IMPL(__imp__sub_83C02230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11160
	ctx.r3.s64 = ctx.r11.s64 + 11160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0223C"))) PPC_WEAK_FUNC(sub_83C0223C);
PPC_FUNC_IMPL(__imp__sub_83C0223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02240"))) PPC_WEAK_FUNC(sub_83C02240);
PPC_FUNC_IMPL(__imp__sub_83C02240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11168
	ctx.r3.s64 = ctx.r11.s64 + 11168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0224C"))) PPC_WEAK_FUNC(sub_83C0224C);
PPC_FUNC_IMPL(__imp__sub_83C0224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02250"))) PPC_WEAK_FUNC(sub_83C02250);
PPC_FUNC_IMPL(__imp__sub_83C02250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11176
	ctx.r3.s64 = ctx.r11.s64 + 11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0225C"))) PPC_WEAK_FUNC(sub_83C0225C);
PPC_FUNC_IMPL(__imp__sub_83C0225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02260"))) PPC_WEAK_FUNC(sub_83C02260);
PPC_FUNC_IMPL(__imp__sub_83C02260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11184
	ctx.r3.s64 = ctx.r11.s64 + 11184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0226C"))) PPC_WEAK_FUNC(sub_83C0226C);
PPC_FUNC_IMPL(__imp__sub_83C0226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02270"))) PPC_WEAK_FUNC(sub_83C02270);
PPC_FUNC_IMPL(__imp__sub_83C02270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11192
	ctx.r3.s64 = ctx.r11.s64 + 11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0227C"))) PPC_WEAK_FUNC(sub_83C0227C);
PPC_FUNC_IMPL(__imp__sub_83C0227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02280"))) PPC_WEAK_FUNC(sub_83C02280);
PPC_FUNC_IMPL(__imp__sub_83C02280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11200
	ctx.r3.s64 = ctx.r11.s64 + 11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0228C"))) PPC_WEAK_FUNC(sub_83C0228C);
PPC_FUNC_IMPL(__imp__sub_83C0228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02290"))) PPC_WEAK_FUNC(sub_83C02290);
PPC_FUNC_IMPL(__imp__sub_83C02290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11208
	ctx.r3.s64 = ctx.r11.s64 + 11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0229C"))) PPC_WEAK_FUNC(sub_83C0229C);
PPC_FUNC_IMPL(__imp__sub_83C0229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022A0"))) PPC_WEAK_FUNC(sub_83C022A0);
PPC_FUNC_IMPL(__imp__sub_83C022A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11216
	ctx.r3.s64 = ctx.r11.s64 + 11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022AC"))) PPC_WEAK_FUNC(sub_83C022AC);
PPC_FUNC_IMPL(__imp__sub_83C022AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022B0"))) PPC_WEAK_FUNC(sub_83C022B0);
PPC_FUNC_IMPL(__imp__sub_83C022B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11224
	ctx.r3.s64 = ctx.r11.s64 + 11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022BC"))) PPC_WEAK_FUNC(sub_83C022BC);
PPC_FUNC_IMPL(__imp__sub_83C022BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022C0"))) PPC_WEAK_FUNC(sub_83C022C0);
PPC_FUNC_IMPL(__imp__sub_83C022C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022CC"))) PPC_WEAK_FUNC(sub_83C022CC);
PPC_FUNC_IMPL(__imp__sub_83C022CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022D0"))) PPC_WEAK_FUNC(sub_83C022D0);
PPC_FUNC_IMPL(__imp__sub_83C022D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022DC"))) PPC_WEAK_FUNC(sub_83C022DC);
PPC_FUNC_IMPL(__imp__sub_83C022DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022E0"))) PPC_WEAK_FUNC(sub_83C022E0);
PPC_FUNC_IMPL(__imp__sub_83C022E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11248
	ctx.r3.s64 = ctx.r11.s64 + 11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022EC"))) PPC_WEAK_FUNC(sub_83C022EC);
PPC_FUNC_IMPL(__imp__sub_83C022EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C022F0"))) PPC_WEAK_FUNC(sub_83C022F0);
PPC_FUNC_IMPL(__imp__sub_83C022F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11256
	ctx.r3.s64 = ctx.r11.s64 + 11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C022FC"))) PPC_WEAK_FUNC(sub_83C022FC);
PPC_FUNC_IMPL(__imp__sub_83C022FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02300"))) PPC_WEAK_FUNC(sub_83C02300);
PPC_FUNC_IMPL(__imp__sub_83C02300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11264
	ctx.r3.s64 = ctx.r11.s64 + 11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0230C"))) PPC_WEAK_FUNC(sub_83C0230C);
PPC_FUNC_IMPL(__imp__sub_83C0230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02310"))) PPC_WEAK_FUNC(sub_83C02310);
PPC_FUNC_IMPL(__imp__sub_83C02310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0231C"))) PPC_WEAK_FUNC(sub_83C0231C);
PPC_FUNC_IMPL(__imp__sub_83C0231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02320"))) PPC_WEAK_FUNC(sub_83C02320);
PPC_FUNC_IMPL(__imp__sub_83C02320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0232C"))) PPC_WEAK_FUNC(sub_83C0232C);
PPC_FUNC_IMPL(__imp__sub_83C0232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02330"))) PPC_WEAK_FUNC(sub_83C02330);
PPC_FUNC_IMPL(__imp__sub_83C02330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11288
	ctx.r3.s64 = ctx.r11.s64 + 11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0233C"))) PPC_WEAK_FUNC(sub_83C0233C);
PPC_FUNC_IMPL(__imp__sub_83C0233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02340"))) PPC_WEAK_FUNC(sub_83C02340);
PPC_FUNC_IMPL(__imp__sub_83C02340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11296
	ctx.r3.s64 = ctx.r11.s64 + 11296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0234C"))) PPC_WEAK_FUNC(sub_83C0234C);
PPC_FUNC_IMPL(__imp__sub_83C0234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02350"))) PPC_WEAK_FUNC(sub_83C02350);
PPC_FUNC_IMPL(__imp__sub_83C02350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11304
	ctx.r3.s64 = ctx.r11.s64 + 11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0235C"))) PPC_WEAK_FUNC(sub_83C0235C);
PPC_FUNC_IMPL(__imp__sub_83C0235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02360"))) PPC_WEAK_FUNC(sub_83C02360);
PPC_FUNC_IMPL(__imp__sub_83C02360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0236C"))) PPC_WEAK_FUNC(sub_83C0236C);
PPC_FUNC_IMPL(__imp__sub_83C0236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02370"))) PPC_WEAK_FUNC(sub_83C02370);
PPC_FUNC_IMPL(__imp__sub_83C02370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11320
	ctx.r3.s64 = ctx.r11.s64 + 11320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0237C"))) PPC_WEAK_FUNC(sub_83C0237C);
PPC_FUNC_IMPL(__imp__sub_83C0237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02380"))) PPC_WEAK_FUNC(sub_83C02380);
PPC_FUNC_IMPL(__imp__sub_83C02380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11328
	ctx.r3.s64 = ctx.r11.s64 + 11328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0238C"))) PPC_WEAK_FUNC(sub_83C0238C);
PPC_FUNC_IMPL(__imp__sub_83C0238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02390"))) PPC_WEAK_FUNC(sub_83C02390);
PPC_FUNC_IMPL(__imp__sub_83C02390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0239C"))) PPC_WEAK_FUNC(sub_83C0239C);
PPC_FUNC_IMPL(__imp__sub_83C0239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C023A0"))) PPC_WEAK_FUNC(sub_83C023A0);
PPC_FUNC_IMPL(__imp__sub_83C023A0) {
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
	// addi r3,r11,-14428
	ctx.r3.s64 = ctx.r11.s64 + -14428;
	// bl 0x83523120
	ctx.lr = 0x83C023B8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11344
	ctx.r3.s64 = ctx.r10.s64 + 11344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C023C4;
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

__attribute__((alias("__imp__sub_83C023D4"))) PPC_WEAK_FUNC(sub_83C023D4);
PPC_FUNC_IMPL(__imp__sub_83C023D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C023D8"))) PPC_WEAK_FUNC(sub_83C023D8);
PPC_FUNC_IMPL(__imp__sub_83C023D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14412
	ctx.r7.s64 = ctx.r8.s64 + -14412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14412);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14412, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02400"))) PPC_WEAK_FUNC(sub_83C02400);
PPC_FUNC_IMPL(__imp__sub_83C02400) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,25784
	ctx.r6.s64 = ctx.r7.s64 + 25784;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25712(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25712);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14412(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14412);
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
	// std r9,25784(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25784, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02448"))) PPC_WEAK_FUNC(sub_83C02448);
PPC_FUNC_IMPL(__imp__sub_83C02448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11360
	ctx.r3.s64 = ctx.r11.s64 + 11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02454"))) PPC_WEAK_FUNC(sub_83C02454);
PPC_FUNC_IMPL(__imp__sub_83C02454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02458"))) PPC_WEAK_FUNC(sub_83C02458);
PPC_FUNC_IMPL(__imp__sub_83C02458) {
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
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x8259af80
	ctx.lr = 0x83C02470;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11376
	ctx.r3.s64 = ctx.r10.s64 + 11376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0247C;
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

__attribute__((alias("__imp__sub_83C0248C"))) PPC_WEAK_FUNC(sub_83C0248C);
PPC_FUNC_IMPL(__imp__sub_83C0248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02490"))) PPC_WEAK_FUNC(sub_83C02490);
PPC_FUNC_IMPL(__imp__sub_83C02490) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14424
	ctx.r11.s64 = ctx.r8.s64 + -14424;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,25760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25760);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11368
	ctx.r3.s64 = ctx.r6.s64 + 11368;
	// stw r10,-14424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14424, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C024C0"))) PPC_WEAK_FUNC(sub_83C024C0);
PPC_FUNC_IMPL(__imp__sub_83C024C0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C024E4;
	sub_82595718(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-14056
	ctx.r9.s64 = ctx.r10.s64 + -14056;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31790
	ctx.r8.s64 = -2083389440;
	// addi r3,r8,11384
	ctx.r3.s64 = ctx.r8.s64 + 11384;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C02528;
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

__attribute__((alias("__imp__sub_83C02538"))) PPC_WEAK_FUNC(sub_83C02538);
PPC_FUNC_IMPL(__imp__sub_83C02538) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83C02540;
	__savegprlr_23(ctx, base);
	// lis r10,-32046
	ctx.r10.s64 = -2100166656;
	// lis r9,-32047
	ctx.r9.s64 = -2100232192;
	// lis r8,-32046
	ctx.r8.s64 = -2100166656;
	// lis r7,-32047
	ctx.r7.s64 = -2100232192;
	// lis r6,-32046
	ctx.r6.s64 = -2100166656;
	// lis r5,-32046
	ctx.r5.s64 = -2100166656;
	// addi r4,r10,-22944
	ctx.r4.s64 = ctx.r10.s64 + -22944;
	// addi r3,r9,32488
	ctx.r3.s64 = ctx.r9.s64 + 32488;
	// addi r10,r8,-23072
	ctx.r10.s64 = ctx.r8.s64 + -23072;
	// stw r4,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r4.u32);
	// addi r9,r7,32568
	ctx.r9.s64 = ctx.r7.s64 + 32568;
	// stw r3,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// addi r8,r6,-22944
	ctx.r8.s64 = ctx.r6.s64 + -22944;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r7,r5,-13568
	ctx.r7.s64 = ctx.r5.s64 + -13568;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// stw r8,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// lis r5,-32046
	ctx.r5.s64 = -2100166656;
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// lis r28,-32046
	ctx.r28.s64 = -2100166656;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r5,r5,-22304
	ctx.r5.s64 = ctx.r5.s64 + -22304;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// lis r6,-32046
	ctx.r6.s64 = -2100166656;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lis r9,-31913
	ctx.r9.s64 = -2091450368;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// lis r8,-32046
	ctx.r8.s64 = -2100166656;
	// lis r7,-32046
	ctx.r7.s64 = -2100166656;
	// stw r5,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r5.u32);
	// lis r4,-32046
	ctx.r4.s64 = -2100166656;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lis r3,-32046
	ctx.r3.s64 = -2100166656;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r31,-32046
	ctx.r31.s64 = -2100166656;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r30,-32046
	ctx.r30.s64 = -2100166656;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r29,-32046
	ctx.r29.s64 = -2100166656;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// addi r6,r6,-22816
	ctx.r6.s64 = ctx.r6.s64 + -22816;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r5,r28,-13112
	ctx.r5.s64 = ctx.r28.s64 + -13112;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// addi r27,r10,10584
	ctx.r27.s64 = ctx.r10.s64 + 10584;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r26,r9,10584
	ctx.r26.s64 = ctx.r9.s64 + 10584;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r25,r8,-22688
	ctx.r25.s64 = ctx.r8.s64 + -22688;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r24,r7,-13320
	ctx.r24.s64 = ctx.r7.s64 + -13320;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// addi r4,r4,-22816
	ctx.r4.s64 = ctx.r4.s64 + -22816;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r3,r3,-22304
	ctx.r3.s64 = ctx.r3.s64 + -22304;
	// stw r6,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r6.u32);
	// addi r31,r31,-22560
	ctx.r31.s64 = ctx.r31.s64 + -22560;
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r30,r30,-13112
	ctx.r30.s64 = ctx.r30.s64 + -13112;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r29,r29,-22432
	ctx.r29.s64 = ctx.r29.s64 + -22432;
	// ld r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// ld r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r6,-176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r23,r28,-14040
	ctx.r23.s64 = ctx.r28.s64 + -14040;
	// stw r4,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// stw r3,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r3.u32);
	// stw r27,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r27.u32);
	// stw r26,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r26.u32);
	// stw r25,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// stw r24,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r24.u32);
	// stw r31,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r31.u32);
	// stw r30,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r30.u32);
	// stw r29,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r29.u32);
	// stw r5,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r5.u32);
	// std r10,-14040(r28)
	PPC_STORE_U64(ctx.r28.u32 + -14040, ctx.r10.u64);
	// std r9,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r9.u64);
	// std r11,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r11.u64);
	// ld r5,-128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r4,-160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r3,-224(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r31,-216(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r30,-200(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r29,-184(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r28,-168(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r27,-152(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r26,-136(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r11,-104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r9,-88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r8,24(r23)
	PPC_STORE_U64(ctx.r23.u32 + 24, ctx.r8.u64);
	// std r7,32(r23)
	PPC_STORE_U64(ctx.r23.u32 + 32, ctx.r7.u64);
	// std r6,40(r23)
	PPC_STORE_U64(ctx.r23.u32 + 40, ctx.r6.u64);
	// std r5,48(r23)
	PPC_STORE_U64(ctx.r23.u32 + 48, ctx.r5.u64);
	// std r4,56(r23)
	PPC_STORE_U64(ctx.r23.u32 + 56, ctx.r4.u64);
	// std r3,64(r23)
	PPC_STORE_U64(ctx.r23.u32 + 64, ctx.r3.u64);
	// std r31,72(r23)
	PPC_STORE_U64(ctx.r23.u32 + 72, ctx.r31.u64);
	// std r30,80(r23)
	PPC_STORE_U64(ctx.r23.u32 + 80, ctx.r30.u64);
	// std r29,88(r23)
	PPC_STORE_U64(ctx.r23.u32 + 88, ctx.r29.u64);
	// std r28,96(r23)
	PPC_STORE_U64(ctx.r23.u32 + 96, ctx.r28.u64);
	// std r27,104(r23)
	PPC_STORE_U64(ctx.r23.u32 + 104, ctx.r27.u64);
	// std r26,112(r23)
	PPC_STORE_U64(ctx.r23.u32 + 112, ctx.r26.u64);
	// std r10,120(r23)
	PPC_STORE_U64(ctx.r23.u32 + 120, ctx.r10.u64);
	// std r11,128(r23)
	PPC_STORE_U64(ctx.r23.u32 + 128, ctx.r11.u64);
	// std r9,136(r23)
	PPC_STORE_U64(ctx.r23.u32 + 136, ctx.r9.u64);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02700"))) PPC_WEAK_FUNC(sub_83C02700);
PPC_FUNC_IMPL(__imp__sub_83C02700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11472
	ctx.r3.s64 = ctx.r11.s64 + 11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0270C"))) PPC_WEAK_FUNC(sub_83C0270C);
PPC_FUNC_IMPL(__imp__sub_83C0270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02710"))) PPC_WEAK_FUNC(sub_83C02710);
PPC_FUNC_IMPL(__imp__sub_83C02710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0271C"))) PPC_WEAK_FUNC(sub_83C0271C);
PPC_FUNC_IMPL(__imp__sub_83C0271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02720"))) PPC_WEAK_FUNC(sub_83C02720);
PPC_FUNC_IMPL(__imp__sub_83C02720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0272C"))) PPC_WEAK_FUNC(sub_83C0272C);
PPC_FUNC_IMPL(__imp__sub_83C0272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02730"))) PPC_WEAK_FUNC(sub_83C02730);
PPC_FUNC_IMPL(__imp__sub_83C02730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11496
	ctx.r3.s64 = ctx.r11.s64 + 11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0273C"))) PPC_WEAK_FUNC(sub_83C0273C);
PPC_FUNC_IMPL(__imp__sub_83C0273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02740"))) PPC_WEAK_FUNC(sub_83C02740);
PPC_FUNC_IMPL(__imp__sub_83C02740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0274C"))) PPC_WEAK_FUNC(sub_83C0274C);
PPC_FUNC_IMPL(__imp__sub_83C0274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02750"))) PPC_WEAK_FUNC(sub_83C02750);
PPC_FUNC_IMPL(__imp__sub_83C02750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0275C"))) PPC_WEAK_FUNC(sub_83C0275C);
PPC_FUNC_IMPL(__imp__sub_83C0275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02760"))) PPC_WEAK_FUNC(sub_83C02760);
PPC_FUNC_IMPL(__imp__sub_83C02760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0276C"))) PPC_WEAK_FUNC(sub_83C0276C);
PPC_FUNC_IMPL(__imp__sub_83C0276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02770"))) PPC_WEAK_FUNC(sub_83C02770);
PPC_FUNC_IMPL(__imp__sub_83C02770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0277C"))) PPC_WEAK_FUNC(sub_83C0277C);
PPC_FUNC_IMPL(__imp__sub_83C0277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02780"))) PPC_WEAK_FUNC(sub_83C02780);
PPC_FUNC_IMPL(__imp__sub_83C02780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11536
	ctx.r3.s64 = ctx.r11.s64 + 11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0278C"))) PPC_WEAK_FUNC(sub_83C0278C);
PPC_FUNC_IMPL(__imp__sub_83C0278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02790"))) PPC_WEAK_FUNC(sub_83C02790);
PPC_FUNC_IMPL(__imp__sub_83C02790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0279C"))) PPC_WEAK_FUNC(sub_83C0279C);
PPC_FUNC_IMPL(__imp__sub_83C0279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C027A0"))) PPC_WEAK_FUNC(sub_83C027A0);
PPC_FUNC_IMPL(__imp__sub_83C027A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C027AC"))) PPC_WEAK_FUNC(sub_83C027AC);
PPC_FUNC_IMPL(__imp__sub_83C027AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C027B0"))) PPC_WEAK_FUNC(sub_83C027B0);
PPC_FUNC_IMPL(__imp__sub_83C027B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C027BC"))) PPC_WEAK_FUNC(sub_83C027BC);
PPC_FUNC_IMPL(__imp__sub_83C027BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C027C0"))) PPC_WEAK_FUNC(sub_83C027C0);
PPC_FUNC_IMPL(__imp__sub_83C027C0) {
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
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// bl 0x83523120
	ctx.lr = 0x83C027D8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11568
	ctx.r3.s64 = ctx.r10.s64 + 11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C027E4;
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

__attribute__((alias("__imp__sub_83C027F4"))) PPC_WEAK_FUNC(sub_83C027F4);
PPC_FUNC_IMPL(__imp__sub_83C027F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C027F8"))) PPC_WEAK_FUNC(sub_83C027F8);
PPC_FUNC_IMPL(__imp__sub_83C027F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13872
	ctx.r7.s64 = ctx.r8.s64 + -13872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02820"))) PPC_WEAK_FUNC(sub_83C02820);
PPC_FUNC_IMPL(__imp__sub_83C02820) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,25920
	ctx.r6.s64 = ctx.r7.s64 + 25920;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13872);
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
	// std r9,25920(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25920, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02868"))) PPC_WEAK_FUNC(sub_83C02868);
PPC_FUNC_IMPL(__imp__sub_83C02868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02874"))) PPC_WEAK_FUNC(sub_83C02874);
PPC_FUNC_IMPL(__imp__sub_83C02874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02878"))) PPC_WEAK_FUNC(sub_83C02878);
PPC_FUNC_IMPL(__imp__sub_83C02878) {
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
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// bl 0x8259af80
	ctx.lr = 0x83C02890;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11600
	ctx.r3.s64 = ctx.r10.s64 + 11600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0289C;
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

__attribute__((alias("__imp__sub_83C028AC"))) PPC_WEAK_FUNC(sub_83C028AC);
PPC_FUNC_IMPL(__imp__sub_83C028AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C028B0"))) PPC_WEAK_FUNC(sub_83C028B0);
PPC_FUNC_IMPL(__imp__sub_83C028B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13884
	ctx.r11.s64 = ctx.r8.s64 + -13884;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,25896(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25896);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11592
	ctx.r3.s64 = ctx.r6.s64 + 11592;
	// stw r10,-13884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C028E0"))) PPC_WEAK_FUNC(sub_83C028E0);
PPC_FUNC_IMPL(__imp__sub_83C028E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C028EC"))) PPC_WEAK_FUNC(sub_83C028EC);
PPC_FUNC_IMPL(__imp__sub_83C028EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C028F0"))) PPC_WEAK_FUNC(sub_83C028F0);
PPC_FUNC_IMPL(__imp__sub_83C028F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C028FC"))) PPC_WEAK_FUNC(sub_83C028FC);
PPC_FUNC_IMPL(__imp__sub_83C028FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02900"))) PPC_WEAK_FUNC(sub_83C02900);
PPC_FUNC_IMPL(__imp__sub_83C02900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0290C"))) PPC_WEAK_FUNC(sub_83C0290C);
PPC_FUNC_IMPL(__imp__sub_83C0290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02910"))) PPC_WEAK_FUNC(sub_83C02910);
PPC_FUNC_IMPL(__imp__sub_83C02910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0291C"))) PPC_WEAK_FUNC(sub_83C0291C);
PPC_FUNC_IMPL(__imp__sub_83C0291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02920"))) PPC_WEAK_FUNC(sub_83C02920);
PPC_FUNC_IMPL(__imp__sub_83C02920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0292C"))) PPC_WEAK_FUNC(sub_83C0292C);
PPC_FUNC_IMPL(__imp__sub_83C0292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02930"))) PPC_WEAK_FUNC(sub_83C02930);
PPC_FUNC_IMPL(__imp__sub_83C02930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0293C"))) PPC_WEAK_FUNC(sub_83C0293C);
PPC_FUNC_IMPL(__imp__sub_83C0293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02940"))) PPC_WEAK_FUNC(sub_83C02940);
PPC_FUNC_IMPL(__imp__sub_83C02940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11656
	ctx.r3.s64 = ctx.r11.s64 + 11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0294C"))) PPC_WEAK_FUNC(sub_83C0294C);
PPC_FUNC_IMPL(__imp__sub_83C0294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02950"))) PPC_WEAK_FUNC(sub_83C02950);
PPC_FUNC_IMPL(__imp__sub_83C02950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0295C"))) PPC_WEAK_FUNC(sub_83C0295C);
PPC_FUNC_IMPL(__imp__sub_83C0295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02960"))) PPC_WEAK_FUNC(sub_83C02960);
PPC_FUNC_IMPL(__imp__sub_83C02960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0296C"))) PPC_WEAK_FUNC(sub_83C0296C);
PPC_FUNC_IMPL(__imp__sub_83C0296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02970"))) PPC_WEAK_FUNC(sub_83C02970);
PPC_FUNC_IMPL(__imp__sub_83C02970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0297C"))) PPC_WEAK_FUNC(sub_83C0297C);
PPC_FUNC_IMPL(__imp__sub_83C0297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02980"))) PPC_WEAK_FUNC(sub_83C02980);
PPC_FUNC_IMPL(__imp__sub_83C02980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0298C"))) PPC_WEAK_FUNC(sub_83C0298C);
PPC_FUNC_IMPL(__imp__sub_83C0298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02990"))) PPC_WEAK_FUNC(sub_83C02990);
PPC_FUNC_IMPL(__imp__sub_83C02990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0299C"))) PPC_WEAK_FUNC(sub_83C0299C);
PPC_FUNC_IMPL(__imp__sub_83C0299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C029A0"))) PPC_WEAK_FUNC(sub_83C029A0);
PPC_FUNC_IMPL(__imp__sub_83C029A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13500
	ctx.r7.s64 = ctx.r8.s64 + -13500;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13500);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13500, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C029C8"))) PPC_WEAK_FUNC(sub_83C029C8);
PPC_FUNC_IMPL(__imp__sub_83C029C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,26048
	ctx.r6.s64 = ctx.r7.s64 + 26048;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13500(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13500);
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
	// std r9,26048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02A10"))) PPC_WEAK_FUNC(sub_83C02A10);
PPC_FUNC_IMPL(__imp__sub_83C02A10) {
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
	// addi r3,r11,-13516
	ctx.r3.s64 = ctx.r11.s64 + -13516;
	// bl 0x83523120
	ctx.lr = 0x83C02A28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11704
	ctx.r3.s64 = ctx.r10.s64 + 11704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02A34;
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

__attribute__((alias("__imp__sub_83C02A44"))) PPC_WEAK_FUNC(sub_83C02A44);
PPC_FUNC_IMPL(__imp__sub_83C02A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02A48"))) PPC_WEAK_FUNC(sub_83C02A48);
PPC_FUNC_IMPL(__imp__sub_83C02A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11720
	ctx.r3.s64 = ctx.r11.s64 + 11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02A54"))) PPC_WEAK_FUNC(sub_83C02A54);
PPC_FUNC_IMPL(__imp__sub_83C02A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02A58"))) PPC_WEAK_FUNC(sub_83C02A58);
PPC_FUNC_IMPL(__imp__sub_83C02A58) {
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
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// bl 0x8259af80
	ctx.lr = 0x83C02A70;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11736
	ctx.r3.s64 = ctx.r10.s64 + 11736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02A7C;
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

__attribute__((alias("__imp__sub_83C02A8C"))) PPC_WEAK_FUNC(sub_83C02A8C);
PPC_FUNC_IMPL(__imp__sub_83C02A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02A90"))) PPC_WEAK_FUNC(sub_83C02A90);
PPC_FUNC_IMPL(__imp__sub_83C02A90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13512
	ctx.r11.s64 = ctx.r8.s64 + -13512;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,26024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11728
	ctx.r3.s64 = ctx.r6.s64 + 11728;
	// stw r10,-13512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13512, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02AC0"))) PPC_WEAK_FUNC(sub_83C02AC0);
PPC_FUNC_IMPL(__imp__sub_83C02AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02ACC"))) PPC_WEAK_FUNC(sub_83C02ACC);
PPC_FUNC_IMPL(__imp__sub_83C02ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02AD0"))) PPC_WEAK_FUNC(sub_83C02AD0);
PPC_FUNC_IMPL(__imp__sub_83C02AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02ADC"))) PPC_WEAK_FUNC(sub_83C02ADC);
PPC_FUNC_IMPL(__imp__sub_83C02ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02AE0"))) PPC_WEAK_FUNC(sub_83C02AE0);
PPC_FUNC_IMPL(__imp__sub_83C02AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02AEC"))) PPC_WEAK_FUNC(sub_83C02AEC);
PPC_FUNC_IMPL(__imp__sub_83C02AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02AF0"))) PPC_WEAK_FUNC(sub_83C02AF0);
PPC_FUNC_IMPL(__imp__sub_83C02AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02AFC"))) PPC_WEAK_FUNC(sub_83C02AFC);
PPC_FUNC_IMPL(__imp__sub_83C02AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B00"))) PPC_WEAK_FUNC(sub_83C02B00);
PPC_FUNC_IMPL(__imp__sub_83C02B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B0C"))) PPC_WEAK_FUNC(sub_83C02B0C);
PPC_FUNC_IMPL(__imp__sub_83C02B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B10"))) PPC_WEAK_FUNC(sub_83C02B10);
PPC_FUNC_IMPL(__imp__sub_83C02B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B1C"))) PPC_WEAK_FUNC(sub_83C02B1C);
PPC_FUNC_IMPL(__imp__sub_83C02B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B20"))) PPC_WEAK_FUNC(sub_83C02B20);
PPC_FUNC_IMPL(__imp__sub_83C02B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B2C"))) PPC_WEAK_FUNC(sub_83C02B2C);
PPC_FUNC_IMPL(__imp__sub_83C02B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B30"))) PPC_WEAK_FUNC(sub_83C02B30);
PPC_FUNC_IMPL(__imp__sub_83C02B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B3C"))) PPC_WEAK_FUNC(sub_83C02B3C);
PPC_FUNC_IMPL(__imp__sub_83C02B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B40"))) PPC_WEAK_FUNC(sub_83C02B40);
PPC_FUNC_IMPL(__imp__sub_83C02B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B4C"))) PPC_WEAK_FUNC(sub_83C02B4C);
PPC_FUNC_IMPL(__imp__sub_83C02B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B50"))) PPC_WEAK_FUNC(sub_83C02B50);
PPC_FUNC_IMPL(__imp__sub_83C02B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B5C"))) PPC_WEAK_FUNC(sub_83C02B5C);
PPC_FUNC_IMPL(__imp__sub_83C02B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B60"))) PPC_WEAK_FUNC(sub_83C02B60);
PPC_FUNC_IMPL(__imp__sub_83C02B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B6C"))) PPC_WEAK_FUNC(sub_83C02B6C);
PPC_FUNC_IMPL(__imp__sub_83C02B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B70"))) PPC_WEAK_FUNC(sub_83C02B70);
PPC_FUNC_IMPL(__imp__sub_83C02B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02B7C"))) PPC_WEAK_FUNC(sub_83C02B7C);
PPC_FUNC_IMPL(__imp__sub_83C02B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02B80"))) PPC_WEAK_FUNC(sub_83C02B80);
PPC_FUNC_IMPL(__imp__sub_83C02B80) {
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
	// addi r3,r11,-13140
	ctx.r3.s64 = ctx.r11.s64 + -13140;
	// bl 0x83523120
	ctx.lr = 0x83C02B98;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11840
	ctx.r3.s64 = ctx.r10.s64 + 11840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02BA4;
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

__attribute__((alias("__imp__sub_83C02BB4"))) PPC_WEAK_FUNC(sub_83C02BB4);
PPC_FUNC_IMPL(__imp__sub_83C02BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02BB8"))) PPC_WEAK_FUNC(sub_83C02BB8);
PPC_FUNC_IMPL(__imp__sub_83C02BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13124
	ctx.r7.s64 = ctx.r8.s64 + -13124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13124);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13124, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02BE0"))) PPC_WEAK_FUNC(sub_83C02BE0);
PPC_FUNC_IMPL(__imp__sub_83C02BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,26176
	ctx.r6.s64 = ctx.r7.s64 + 26176;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13124(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13124);
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
	// std r9,26176(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02C28"))) PPC_WEAK_FUNC(sub_83C02C28);
PPC_FUNC_IMPL(__imp__sub_83C02C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02C34"))) PPC_WEAK_FUNC(sub_83C02C34);
PPC_FUNC_IMPL(__imp__sub_83C02C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02C38"))) PPC_WEAK_FUNC(sub_83C02C38);
PPC_FUNC_IMPL(__imp__sub_83C02C38) {
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
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// bl 0x8259af80
	ctx.lr = 0x83C02C50;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11872
	ctx.r3.s64 = ctx.r10.s64 + 11872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02C5C;
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

__attribute__((alias("__imp__sub_83C02C6C"))) PPC_WEAK_FUNC(sub_83C02C6C);
PPC_FUNC_IMPL(__imp__sub_83C02C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02C70"))) PPC_WEAK_FUNC(sub_83C02C70);
PPC_FUNC_IMPL(__imp__sub_83C02C70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13136
	ctx.r11.s64 = ctx.r8.s64 + -13136;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,26152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26152);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11864
	ctx.r3.s64 = ctx.r6.s64 + 11864;
	// stw r10,-13136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13136, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CA0"))) PPC_WEAK_FUNC(sub_83C02CA0);
PPC_FUNC_IMPL(__imp__sub_83C02CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11880
	ctx.r3.s64 = ctx.r11.s64 + 11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CAC"))) PPC_WEAK_FUNC(sub_83C02CAC);
PPC_FUNC_IMPL(__imp__sub_83C02CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02CB0"))) PPC_WEAK_FUNC(sub_83C02CB0);
PPC_FUNC_IMPL(__imp__sub_83C02CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CBC"))) PPC_WEAK_FUNC(sub_83C02CBC);
PPC_FUNC_IMPL(__imp__sub_83C02CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02CC0"))) PPC_WEAK_FUNC(sub_83C02CC0);
PPC_FUNC_IMPL(__imp__sub_83C02CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CCC"))) PPC_WEAK_FUNC(sub_83C02CCC);
PPC_FUNC_IMPL(__imp__sub_83C02CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02CD0"))) PPC_WEAK_FUNC(sub_83C02CD0);
PPC_FUNC_IMPL(__imp__sub_83C02CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CDC"))) PPC_WEAK_FUNC(sub_83C02CDC);
PPC_FUNC_IMPL(__imp__sub_83C02CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02CE0"))) PPC_WEAK_FUNC(sub_83C02CE0);
PPC_FUNC_IMPL(__imp__sub_83C02CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11912
	ctx.r3.s64 = ctx.r11.s64 + 11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CEC"))) PPC_WEAK_FUNC(sub_83C02CEC);
PPC_FUNC_IMPL(__imp__sub_83C02CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02CF0"))) PPC_WEAK_FUNC(sub_83C02CF0);
PPC_FUNC_IMPL(__imp__sub_83C02CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11920
	ctx.r3.s64 = ctx.r11.s64 + 11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02CFC"))) PPC_WEAK_FUNC(sub_83C02CFC);
PPC_FUNC_IMPL(__imp__sub_83C02CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D00"))) PPC_WEAK_FUNC(sub_83C02D00);
PPC_FUNC_IMPL(__imp__sub_83C02D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D0C"))) PPC_WEAK_FUNC(sub_83C02D0C);
PPC_FUNC_IMPL(__imp__sub_83C02D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D10"))) PPC_WEAK_FUNC(sub_83C02D10);
PPC_FUNC_IMPL(__imp__sub_83C02D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11936
	ctx.r3.s64 = ctx.r11.s64 + 11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D1C"))) PPC_WEAK_FUNC(sub_83C02D1C);
PPC_FUNC_IMPL(__imp__sub_83C02D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D20"))) PPC_WEAK_FUNC(sub_83C02D20);
PPC_FUNC_IMPL(__imp__sub_83C02D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D2C"))) PPC_WEAK_FUNC(sub_83C02D2C);
PPC_FUNC_IMPL(__imp__sub_83C02D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D30"))) PPC_WEAK_FUNC(sub_83C02D30);
PPC_FUNC_IMPL(__imp__sub_83C02D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D3C"))) PPC_WEAK_FUNC(sub_83C02D3C);
PPC_FUNC_IMPL(__imp__sub_83C02D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D40"))) PPC_WEAK_FUNC(sub_83C02D40);
PPC_FUNC_IMPL(__imp__sub_83C02D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D4C"))) PPC_WEAK_FUNC(sub_83C02D4C);
PPC_FUNC_IMPL(__imp__sub_83C02D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D50"))) PPC_WEAK_FUNC(sub_83C02D50);
PPC_FUNC_IMPL(__imp__sub_83C02D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02D5C"))) PPC_WEAK_FUNC(sub_83C02D5C);
PPC_FUNC_IMPL(__imp__sub_83C02D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D60"))) PPC_WEAK_FUNC(sub_83C02D60);
PPC_FUNC_IMPL(__imp__sub_83C02D60) {
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
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// bl 0x83523120
	ctx.lr = 0x83C02D78;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,11976
	ctx.r3.s64 = ctx.r10.s64 + 11976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02D84;
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

__attribute__((alias("__imp__sub_83C02D94"))) PPC_WEAK_FUNC(sub_83C02D94);
PPC_FUNC_IMPL(__imp__sub_83C02D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02D98"))) PPC_WEAK_FUNC(sub_83C02D98);
PPC_FUNC_IMPL(__imp__sub_83C02D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,11992
	ctx.r3.s64 = ctx.r11.s64 + 11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DA4"))) PPC_WEAK_FUNC(sub_83C02DA4);
PPC_FUNC_IMPL(__imp__sub_83C02DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DA8"))) PPC_WEAK_FUNC(sub_83C02DA8);
PPC_FUNC_IMPL(__imp__sub_83C02DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DB4"))) PPC_WEAK_FUNC(sub_83C02DB4);
PPC_FUNC_IMPL(__imp__sub_83C02DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DB8"))) PPC_WEAK_FUNC(sub_83C02DB8);
PPC_FUNC_IMPL(__imp__sub_83C02DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DC4"))) PPC_WEAK_FUNC(sub_83C02DC4);
PPC_FUNC_IMPL(__imp__sub_83C02DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DC8"))) PPC_WEAK_FUNC(sub_83C02DC8);
PPC_FUNC_IMPL(__imp__sub_83C02DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12016
	ctx.r3.s64 = ctx.r11.s64 + 12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DD4"))) PPC_WEAK_FUNC(sub_83C02DD4);
PPC_FUNC_IMPL(__imp__sub_83C02DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DD8"))) PPC_WEAK_FUNC(sub_83C02DD8);
PPC_FUNC_IMPL(__imp__sub_83C02DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DE4"))) PPC_WEAK_FUNC(sub_83C02DE4);
PPC_FUNC_IMPL(__imp__sub_83C02DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DE8"))) PPC_WEAK_FUNC(sub_83C02DE8);
PPC_FUNC_IMPL(__imp__sub_83C02DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12032
	ctx.r3.s64 = ctx.r11.s64 + 12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02DF4"))) PPC_WEAK_FUNC(sub_83C02DF4);
PPC_FUNC_IMPL(__imp__sub_83C02DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02DF8"))) PPC_WEAK_FUNC(sub_83C02DF8);
PPC_FUNC_IMPL(__imp__sub_83C02DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E04"))) PPC_WEAK_FUNC(sub_83C02E04);
PPC_FUNC_IMPL(__imp__sub_83C02E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E08"))) PPC_WEAK_FUNC(sub_83C02E08);
PPC_FUNC_IMPL(__imp__sub_83C02E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12048
	ctx.r3.s64 = ctx.r11.s64 + 12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E14"))) PPC_WEAK_FUNC(sub_83C02E14);
PPC_FUNC_IMPL(__imp__sub_83C02E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E18"))) PPC_WEAK_FUNC(sub_83C02E18);
PPC_FUNC_IMPL(__imp__sub_83C02E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E24"))) PPC_WEAK_FUNC(sub_83C02E24);
PPC_FUNC_IMPL(__imp__sub_83C02E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E28"))) PPC_WEAK_FUNC(sub_83C02E28);
PPC_FUNC_IMPL(__imp__sub_83C02E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E34"))) PPC_WEAK_FUNC(sub_83C02E34);
PPC_FUNC_IMPL(__imp__sub_83C02E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E38"))) PPC_WEAK_FUNC(sub_83C02E38);
PPC_FUNC_IMPL(__imp__sub_83C02E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12072
	ctx.r3.s64 = ctx.r11.s64 + 12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E44"))) PPC_WEAK_FUNC(sub_83C02E44);
PPC_FUNC_IMPL(__imp__sub_83C02E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E48"))) PPC_WEAK_FUNC(sub_83C02E48);
PPC_FUNC_IMPL(__imp__sub_83C02E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02E54"))) PPC_WEAK_FUNC(sub_83C02E54);
PPC_FUNC_IMPL(__imp__sub_83C02E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E58"))) PPC_WEAK_FUNC(sub_83C02E58);
PPC_FUNC_IMPL(__imp__sub_83C02E58) {
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
	// addi r3,r11,-12760
	ctx.r3.s64 = ctx.r11.s64 + -12760;
	// bl 0x83523120
	ctx.lr = 0x83C02E70;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,12088
	ctx.r3.s64 = ctx.r10.s64 + 12088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02E7C;
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

__attribute__((alias("__imp__sub_83C02E8C"))) PPC_WEAK_FUNC(sub_83C02E8C);
PPC_FUNC_IMPL(__imp__sub_83C02E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02E90"))) PPC_WEAK_FUNC(sub_83C02E90);
PPC_FUNC_IMPL(__imp__sub_83C02E90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12744
	ctx.r7.s64 = ctx.r8.s64 + -12744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02EB8"))) PPC_WEAK_FUNC(sub_83C02EB8);
PPC_FUNC_IMPL(__imp__sub_83C02EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,26628
	ctx.r6.s64 = ctx.r7.s64 + 26628;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12744);
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
	// std r9,26628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C02F00"))) PPC_WEAK_FUNC(sub_83C02F00);
PPC_FUNC_IMPL(__imp__sub_83C02F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02F0C"))) PPC_WEAK_FUNC(sub_83C02F0C);
PPC_FUNC_IMPL(__imp__sub_83C02F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02F10"))) PPC_WEAK_FUNC(sub_83C02F10);
PPC_FUNC_IMPL(__imp__sub_83C02F10) {
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
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// bl 0x8259af80
	ctx.lr = 0x83C02F28;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,12120
	ctx.r3.s64 = ctx.r10.s64 + 12120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C02F34;
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

__attribute__((alias("__imp__sub_83C02F44"))) PPC_WEAK_FUNC(sub_83C02F44);
PPC_FUNC_IMPL(__imp__sub_83C02F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02F48"))) PPC_WEAK_FUNC(sub_83C02F48);
PPC_FUNC_IMPL(__imp__sub_83C02F48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12756
	ctx.r11.s64 = ctx.r8.s64 + -12756;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,26604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12112
	ctx.r3.s64 = ctx.r6.s64 + 12112;
	// stw r10,-12756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02F78"))) PPC_WEAK_FUNC(sub_83C02F78);
PPC_FUNC_IMPL(__imp__sub_83C02F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02F84"))) PPC_WEAK_FUNC(sub_83C02F84);
PPC_FUNC_IMPL(__imp__sub_83C02F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02F88"))) PPC_WEAK_FUNC(sub_83C02F88);
PPC_FUNC_IMPL(__imp__sub_83C02F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02F94"))) PPC_WEAK_FUNC(sub_83C02F94);
PPC_FUNC_IMPL(__imp__sub_83C02F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02F98"))) PPC_WEAK_FUNC(sub_83C02F98);
PPC_FUNC_IMPL(__imp__sub_83C02F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FA4"))) PPC_WEAK_FUNC(sub_83C02FA4);
PPC_FUNC_IMPL(__imp__sub_83C02FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FA8"))) PPC_WEAK_FUNC(sub_83C02FA8);
PPC_FUNC_IMPL(__imp__sub_83C02FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FB4"))) PPC_WEAK_FUNC(sub_83C02FB4);
PPC_FUNC_IMPL(__imp__sub_83C02FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FB8"))) PPC_WEAK_FUNC(sub_83C02FB8);
PPC_FUNC_IMPL(__imp__sub_83C02FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FC4"))) PPC_WEAK_FUNC(sub_83C02FC4);
PPC_FUNC_IMPL(__imp__sub_83C02FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FC8"))) PPC_WEAK_FUNC(sub_83C02FC8);
PPC_FUNC_IMPL(__imp__sub_83C02FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FD4"))) PPC_WEAK_FUNC(sub_83C02FD4);
PPC_FUNC_IMPL(__imp__sub_83C02FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FD8"))) PPC_WEAK_FUNC(sub_83C02FD8);
PPC_FUNC_IMPL(__imp__sub_83C02FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FE4"))) PPC_WEAK_FUNC(sub_83C02FE4);
PPC_FUNC_IMPL(__imp__sub_83C02FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FE8"))) PPC_WEAK_FUNC(sub_83C02FE8);
PPC_FUNC_IMPL(__imp__sub_83C02FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C02FF4"))) PPC_WEAK_FUNC(sub_83C02FF4);
PPC_FUNC_IMPL(__imp__sub_83C02FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C02FF8"))) PPC_WEAK_FUNC(sub_83C02FF8);
PPC_FUNC_IMPL(__imp__sub_83C02FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03004"))) PPC_WEAK_FUNC(sub_83C03004);
PPC_FUNC_IMPL(__imp__sub_83C03004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03008"))) PPC_WEAK_FUNC(sub_83C03008);
PPC_FUNC_IMPL(__imp__sub_83C03008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03014"))) PPC_WEAK_FUNC(sub_83C03014);
PPC_FUNC_IMPL(__imp__sub_83C03014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03018"))) PPC_WEAK_FUNC(sub_83C03018);
PPC_FUNC_IMPL(__imp__sub_83C03018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03024"))) PPC_WEAK_FUNC(sub_83C03024);
PPC_FUNC_IMPL(__imp__sub_83C03024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03028"))) PPC_WEAK_FUNC(sub_83C03028);
PPC_FUNC_IMPL(__imp__sub_83C03028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03034"))) PPC_WEAK_FUNC(sub_83C03034);
PPC_FUNC_IMPL(__imp__sub_83C03034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03038"))) PPC_WEAK_FUNC(sub_83C03038);
PPC_FUNC_IMPL(__imp__sub_83C03038) {
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
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// bl 0x83523120
	ctx.lr = 0x83C03050;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,12224
	ctx.r3.s64 = ctx.r10.s64 + 12224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0305C;
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

__attribute__((alias("__imp__sub_83C0306C"))) PPC_WEAK_FUNC(sub_83C0306C);
PPC_FUNC_IMPL(__imp__sub_83C0306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03070"))) PPC_WEAK_FUNC(sub_83C03070);
PPC_FUNC_IMPL(__imp__sub_83C03070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0307C"))) PPC_WEAK_FUNC(sub_83C0307C);
PPC_FUNC_IMPL(__imp__sub_83C0307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03080"))) PPC_WEAK_FUNC(sub_83C03080);
PPC_FUNC_IMPL(__imp__sub_83C03080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0308C"))) PPC_WEAK_FUNC(sub_83C0308C);
PPC_FUNC_IMPL(__imp__sub_83C0308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

