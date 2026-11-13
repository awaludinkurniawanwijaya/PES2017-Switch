#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C492C4"))) PPC_WEAK_FUNC(sub_83C492C4);
PPC_FUNC_IMPL(__imp__sub_83C492C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492C8"))) PPC_WEAK_FUNC(sub_83C492C8);
PPC_FUNC_IMPL(__imp__sub_83C492C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C492D4"))) PPC_WEAK_FUNC(sub_83C492D4);
PPC_FUNC_IMPL(__imp__sub_83C492D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492D8"))) PPC_WEAK_FUNC(sub_83C492D8);
PPC_FUNC_IMPL(__imp__sub_83C492D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C492E4"))) PPC_WEAK_FUNC(sub_83C492E4);
PPC_FUNC_IMPL(__imp__sub_83C492E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492E8"))) PPC_WEAK_FUNC(sub_83C492E8);
PPC_FUNC_IMPL(__imp__sub_83C492E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16304
	ctx.r3.s64 = ctx.r11.s64 + -16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C492F4"))) PPC_WEAK_FUNC(sub_83C492F4);
PPC_FUNC_IMPL(__imp__sub_83C492F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492F8"))) PPC_WEAK_FUNC(sub_83C492F8);
PPC_FUNC_IMPL(__imp__sub_83C492F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49304"))) PPC_WEAK_FUNC(sub_83C49304);
PPC_FUNC_IMPL(__imp__sub_83C49304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49308"))) PPC_WEAK_FUNC(sub_83C49308);
PPC_FUNC_IMPL(__imp__sub_83C49308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16288
	ctx.r3.s64 = ctx.r11.s64 + -16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49314"))) PPC_WEAK_FUNC(sub_83C49314);
PPC_FUNC_IMPL(__imp__sub_83C49314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49318"))) PPC_WEAK_FUNC(sub_83C49318);
PPC_FUNC_IMPL(__imp__sub_83C49318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16280
	ctx.r3.s64 = ctx.r11.s64 + -16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49324"))) PPC_WEAK_FUNC(sub_83C49324);
PPC_FUNC_IMPL(__imp__sub_83C49324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49328"))) PPC_WEAK_FUNC(sub_83C49328);
PPC_FUNC_IMPL(__imp__sub_83C49328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49334"))) PPC_WEAK_FUNC(sub_83C49334);
PPC_FUNC_IMPL(__imp__sub_83C49334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49338"))) PPC_WEAK_FUNC(sub_83C49338);
PPC_FUNC_IMPL(__imp__sub_83C49338) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1968
	ctx.r7.s64 = ctx.r8.s64 + -1968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49360"))) PPC_WEAK_FUNC(sub_83C49360);
PPC_FUNC_IMPL(__imp__sub_83C49360) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1000
	ctx.r6.s64 = ctx.r7.s64 + 1000;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,928(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 928);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1968);
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
	// std r9,1000(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1000, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C493A8"))) PPC_WEAK_FUNC(sub_83C493A8);
PPC_FUNC_IMPL(__imp__sub_83C493A8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1984
	ctx.r3.s64 = ctx.r11.s64 + -1984;
	// bl 0x83523120
	ctx.lr = 0x83C493C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16264
	ctx.r3.s64 = ctx.r10.s64 + -16264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C493CC;
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

__attribute__((alias("__imp__sub_83C493DC"))) PPC_WEAK_FUNC(sub_83C493DC);
PPC_FUNC_IMPL(__imp__sub_83C493DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C493E0"))) PPC_WEAK_FUNC(sub_83C493E0);
PPC_FUNC_IMPL(__imp__sub_83C493E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C493EC"))) PPC_WEAK_FUNC(sub_83C493EC);
PPC_FUNC_IMPL(__imp__sub_83C493EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C493F0"))) PPC_WEAK_FUNC(sub_83C493F0);
PPC_FUNC_IMPL(__imp__sub_83C493F0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1960
	ctx.r3.s64 = ctx.r11.s64 + -1960;
	// bl 0x8259af80
	ctx.lr = 0x83C49408;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16232
	ctx.r3.s64 = ctx.r10.s64 + -16232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49414;
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

__attribute__((alias("__imp__sub_83C49424"))) PPC_WEAK_FUNC(sub_83C49424);
PPC_FUNC_IMPL(__imp__sub_83C49424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49428"))) PPC_WEAK_FUNC(sub_83C49428);
PPC_FUNC_IMPL(__imp__sub_83C49428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1980
	ctx.r11.s64 = ctx.r8.s64 + -1980;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16240
	ctx.r3.s64 = ctx.r6.s64 + -16240;
	// stw r10,-1980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49458"))) PPC_WEAK_FUNC(sub_83C49458);
PPC_FUNC_IMPL(__imp__sub_83C49458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16224
	ctx.r3.s64 = ctx.r11.s64 + -16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49464"))) PPC_WEAK_FUNC(sub_83C49464);
PPC_FUNC_IMPL(__imp__sub_83C49464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49468"))) PPC_WEAK_FUNC(sub_83C49468);
PPC_FUNC_IMPL(__imp__sub_83C49468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49474"))) PPC_WEAK_FUNC(sub_83C49474);
PPC_FUNC_IMPL(__imp__sub_83C49474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49478"))) PPC_WEAK_FUNC(sub_83C49478);
PPC_FUNC_IMPL(__imp__sub_83C49478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16208
	ctx.r3.s64 = ctx.r11.s64 + -16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49484"))) PPC_WEAK_FUNC(sub_83C49484);
PPC_FUNC_IMPL(__imp__sub_83C49484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49488"))) PPC_WEAK_FUNC(sub_83C49488);
PPC_FUNC_IMPL(__imp__sub_83C49488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49494"))) PPC_WEAK_FUNC(sub_83C49494);
PPC_FUNC_IMPL(__imp__sub_83C49494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49498"))) PPC_WEAK_FUNC(sub_83C49498);
PPC_FUNC_IMPL(__imp__sub_83C49498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494A4"))) PPC_WEAK_FUNC(sub_83C494A4);
PPC_FUNC_IMPL(__imp__sub_83C494A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494A8"))) PPC_WEAK_FUNC(sub_83C494A8);
PPC_FUNC_IMPL(__imp__sub_83C494A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16184
	ctx.r3.s64 = ctx.r11.s64 + -16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494B4"))) PPC_WEAK_FUNC(sub_83C494B4);
PPC_FUNC_IMPL(__imp__sub_83C494B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494B8"))) PPC_WEAK_FUNC(sub_83C494B8);
PPC_FUNC_IMPL(__imp__sub_83C494B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16176
	ctx.r3.s64 = ctx.r11.s64 + -16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494C4"))) PPC_WEAK_FUNC(sub_83C494C4);
PPC_FUNC_IMPL(__imp__sub_83C494C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494C8"))) PPC_WEAK_FUNC(sub_83C494C8);
PPC_FUNC_IMPL(__imp__sub_83C494C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16168
	ctx.r3.s64 = ctx.r11.s64 + -16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494D4"))) PPC_WEAK_FUNC(sub_83C494D4);
PPC_FUNC_IMPL(__imp__sub_83C494D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494D8"))) PPC_WEAK_FUNC(sub_83C494D8);
PPC_FUNC_IMPL(__imp__sub_83C494D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16160
	ctx.r3.s64 = ctx.r11.s64 + -16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494E4"))) PPC_WEAK_FUNC(sub_83C494E4);
PPC_FUNC_IMPL(__imp__sub_83C494E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494E8"))) PPC_WEAK_FUNC(sub_83C494E8);
PPC_FUNC_IMPL(__imp__sub_83C494E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C494F4"))) PPC_WEAK_FUNC(sub_83C494F4);
PPC_FUNC_IMPL(__imp__sub_83C494F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C494F8"))) PPC_WEAK_FUNC(sub_83C494F8);
PPC_FUNC_IMPL(__imp__sub_83C494F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49504"))) PPC_WEAK_FUNC(sub_83C49504);
PPC_FUNC_IMPL(__imp__sub_83C49504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49508"))) PPC_WEAK_FUNC(sub_83C49508);
PPC_FUNC_IMPL(__imp__sub_83C49508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49514"))) PPC_WEAK_FUNC(sub_83C49514);
PPC_FUNC_IMPL(__imp__sub_83C49514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49518"))) PPC_WEAK_FUNC(sub_83C49518);
PPC_FUNC_IMPL(__imp__sub_83C49518) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1600
	ctx.r7.s64 = ctx.r8.s64 + -1600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49540"))) PPC_WEAK_FUNC(sub_83C49540);
PPC_FUNC_IMPL(__imp__sub_83C49540) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1128
	ctx.r6.s64 = ctx.r7.s64 + 1128;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1600);
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
	// std r9,1128(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1128, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49588"))) PPC_WEAK_FUNC(sub_83C49588);
PPC_FUNC_IMPL(__imp__sub_83C49588) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// bl 0x83523120
	ctx.lr = 0x83C495A0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16128
	ctx.r3.s64 = ctx.r10.s64 + -16128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C495AC;
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

__attribute__((alias("__imp__sub_83C495BC"))) PPC_WEAK_FUNC(sub_83C495BC);
PPC_FUNC_IMPL(__imp__sub_83C495BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C495C0"))) PPC_WEAK_FUNC(sub_83C495C0);
PPC_FUNC_IMPL(__imp__sub_83C495C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C495CC"))) PPC_WEAK_FUNC(sub_83C495CC);
PPC_FUNC_IMPL(__imp__sub_83C495CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C495D0"))) PPC_WEAK_FUNC(sub_83C495D0);
PPC_FUNC_IMPL(__imp__sub_83C495D0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// bl 0x8259af80
	ctx.lr = 0x83C495E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16096
	ctx.r3.s64 = ctx.r10.s64 + -16096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C495F4;
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

__attribute__((alias("__imp__sub_83C49604"))) PPC_WEAK_FUNC(sub_83C49604);
PPC_FUNC_IMPL(__imp__sub_83C49604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49608"))) PPC_WEAK_FUNC(sub_83C49608);
PPC_FUNC_IMPL(__imp__sub_83C49608) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1612
	ctx.r11.s64 = ctx.r8.s64 + -1612;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16104
	ctx.r3.s64 = ctx.r6.s64 + -16104;
	// stw r10,-1612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49638"))) PPC_WEAK_FUNC(sub_83C49638);
PPC_FUNC_IMPL(__imp__sub_83C49638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49644"))) PPC_WEAK_FUNC(sub_83C49644);
PPC_FUNC_IMPL(__imp__sub_83C49644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49648"))) PPC_WEAK_FUNC(sub_83C49648);
PPC_FUNC_IMPL(__imp__sub_83C49648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16080
	ctx.r3.s64 = ctx.r11.s64 + -16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49654"))) PPC_WEAK_FUNC(sub_83C49654);
PPC_FUNC_IMPL(__imp__sub_83C49654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49658"))) PPC_WEAK_FUNC(sub_83C49658);
PPC_FUNC_IMPL(__imp__sub_83C49658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16072
	ctx.r3.s64 = ctx.r11.s64 + -16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49664"))) PPC_WEAK_FUNC(sub_83C49664);
PPC_FUNC_IMPL(__imp__sub_83C49664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49668"))) PPC_WEAK_FUNC(sub_83C49668);
PPC_FUNC_IMPL(__imp__sub_83C49668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49674"))) PPC_WEAK_FUNC(sub_83C49674);
PPC_FUNC_IMPL(__imp__sub_83C49674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49678"))) PPC_WEAK_FUNC(sub_83C49678);
PPC_FUNC_IMPL(__imp__sub_83C49678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49684"))) PPC_WEAK_FUNC(sub_83C49684);
PPC_FUNC_IMPL(__imp__sub_83C49684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49688"))) PPC_WEAK_FUNC(sub_83C49688);
PPC_FUNC_IMPL(__imp__sub_83C49688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16048
	ctx.r3.s64 = ctx.r11.s64 + -16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49694"))) PPC_WEAK_FUNC(sub_83C49694);
PPC_FUNC_IMPL(__imp__sub_83C49694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49698"))) PPC_WEAK_FUNC(sub_83C49698);
PPC_FUNC_IMPL(__imp__sub_83C49698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16040
	ctx.r3.s64 = ctx.r11.s64 + -16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496A4"))) PPC_WEAK_FUNC(sub_83C496A4);
PPC_FUNC_IMPL(__imp__sub_83C496A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496A8"))) PPC_WEAK_FUNC(sub_83C496A8);
PPC_FUNC_IMPL(__imp__sub_83C496A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496B4"))) PPC_WEAK_FUNC(sub_83C496B4);
PPC_FUNC_IMPL(__imp__sub_83C496B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496B8"))) PPC_WEAK_FUNC(sub_83C496B8);
PPC_FUNC_IMPL(__imp__sub_83C496B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16024
	ctx.r3.s64 = ctx.r11.s64 + -16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496C4"))) PPC_WEAK_FUNC(sub_83C496C4);
PPC_FUNC_IMPL(__imp__sub_83C496C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496C8"))) PPC_WEAK_FUNC(sub_83C496C8);
PPC_FUNC_IMPL(__imp__sub_83C496C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16016
	ctx.r3.s64 = ctx.r11.s64 + -16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496D4"))) PPC_WEAK_FUNC(sub_83C496D4);
PPC_FUNC_IMPL(__imp__sub_83C496D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496D8"))) PPC_WEAK_FUNC(sub_83C496D8);
PPC_FUNC_IMPL(__imp__sub_83C496D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496E4"))) PPC_WEAK_FUNC(sub_83C496E4);
PPC_FUNC_IMPL(__imp__sub_83C496E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496E8"))) PPC_WEAK_FUNC(sub_83C496E8);
PPC_FUNC_IMPL(__imp__sub_83C496E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16000
	ctx.r3.s64 = ctx.r11.s64 + -16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C496F4"))) PPC_WEAK_FUNC(sub_83C496F4);
PPC_FUNC_IMPL(__imp__sub_83C496F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C496F8"))) PPC_WEAK_FUNC(sub_83C496F8);
PPC_FUNC_IMPL(__imp__sub_83C496F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1232
	ctx.r7.s64 = ctx.r8.s64 + -1232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49720"))) PPC_WEAK_FUNC(sub_83C49720);
PPC_FUNC_IMPL(__imp__sub_83C49720) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1256
	ctx.r6.s64 = ctx.r7.s64 + 1256;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1184(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1184);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1232);
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
	// std r9,1256(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1256, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49768"))) PPC_WEAK_FUNC(sub_83C49768);
PPC_FUNC_IMPL(__imp__sub_83C49768) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// bl 0x83523120
	ctx.lr = 0x83C49780;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15992
	ctx.r3.s64 = ctx.r10.s64 + -15992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4978C;
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

__attribute__((alias("__imp__sub_83C4979C"))) PPC_WEAK_FUNC(sub_83C4979C);
PPC_FUNC_IMPL(__imp__sub_83C4979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C497A0"))) PPC_WEAK_FUNC(sub_83C497A0);
PPC_FUNC_IMPL(__imp__sub_83C497A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C497AC"))) PPC_WEAK_FUNC(sub_83C497AC);
PPC_FUNC_IMPL(__imp__sub_83C497AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C497B0"))) PPC_WEAK_FUNC(sub_83C497B0);
PPC_FUNC_IMPL(__imp__sub_83C497B0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-1224
	ctx.r3.s64 = ctx.r11.s64 + -1224;
	// bl 0x8259af80
	ctx.lr = 0x83C497C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15960
	ctx.r3.s64 = ctx.r10.s64 + -15960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C497D4;
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

__attribute__((alias("__imp__sub_83C497E4"))) PPC_WEAK_FUNC(sub_83C497E4);
PPC_FUNC_IMPL(__imp__sub_83C497E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C497E8"))) PPC_WEAK_FUNC(sub_83C497E8);
PPC_FUNC_IMPL(__imp__sub_83C497E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1244
	ctx.r11.s64 = ctx.r8.s64 + -1244;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1232);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15968
	ctx.r3.s64 = ctx.r6.s64 + -15968;
	// stw r10,-1244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49818"))) PPC_WEAK_FUNC(sub_83C49818);
PPC_FUNC_IMPL(__imp__sub_83C49818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15952
	ctx.r3.s64 = ctx.r11.s64 + -15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49824"))) PPC_WEAK_FUNC(sub_83C49824);
PPC_FUNC_IMPL(__imp__sub_83C49824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49828"))) PPC_WEAK_FUNC(sub_83C49828);
PPC_FUNC_IMPL(__imp__sub_83C49828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49834"))) PPC_WEAK_FUNC(sub_83C49834);
PPC_FUNC_IMPL(__imp__sub_83C49834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49838"))) PPC_WEAK_FUNC(sub_83C49838);
PPC_FUNC_IMPL(__imp__sub_83C49838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15936
	ctx.r3.s64 = ctx.r11.s64 + -15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49844"))) PPC_WEAK_FUNC(sub_83C49844);
PPC_FUNC_IMPL(__imp__sub_83C49844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49848"))) PPC_WEAK_FUNC(sub_83C49848);
PPC_FUNC_IMPL(__imp__sub_83C49848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15928
	ctx.r3.s64 = ctx.r11.s64 + -15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49854"))) PPC_WEAK_FUNC(sub_83C49854);
PPC_FUNC_IMPL(__imp__sub_83C49854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49858"))) PPC_WEAK_FUNC(sub_83C49858);
PPC_FUNC_IMPL(__imp__sub_83C49858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15920
	ctx.r3.s64 = ctx.r11.s64 + -15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49864"))) PPC_WEAK_FUNC(sub_83C49864);
PPC_FUNC_IMPL(__imp__sub_83C49864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49868"))) PPC_WEAK_FUNC(sub_83C49868);
PPC_FUNC_IMPL(__imp__sub_83C49868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15912
	ctx.r3.s64 = ctx.r11.s64 + -15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49874"))) PPC_WEAK_FUNC(sub_83C49874);
PPC_FUNC_IMPL(__imp__sub_83C49874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49878"))) PPC_WEAK_FUNC(sub_83C49878);
PPC_FUNC_IMPL(__imp__sub_83C49878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49884"))) PPC_WEAK_FUNC(sub_83C49884);
PPC_FUNC_IMPL(__imp__sub_83C49884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49888"))) PPC_WEAK_FUNC(sub_83C49888);
PPC_FUNC_IMPL(__imp__sub_83C49888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49894"))) PPC_WEAK_FUNC(sub_83C49894);
PPC_FUNC_IMPL(__imp__sub_83C49894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49898"))) PPC_WEAK_FUNC(sub_83C49898);
PPC_FUNC_IMPL(__imp__sub_83C49898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C498A4"))) PPC_WEAK_FUNC(sub_83C498A4);
PPC_FUNC_IMPL(__imp__sub_83C498A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C498A8"))) PPC_WEAK_FUNC(sub_83C498A8);
PPC_FUNC_IMPL(__imp__sub_83C498A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15880
	ctx.r3.s64 = ctx.r11.s64 + -15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C498B4"))) PPC_WEAK_FUNC(sub_83C498B4);
PPC_FUNC_IMPL(__imp__sub_83C498B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C498B8"))) PPC_WEAK_FUNC(sub_83C498B8);
PPC_FUNC_IMPL(__imp__sub_83C498B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C498C4"))) PPC_WEAK_FUNC(sub_83C498C4);
PPC_FUNC_IMPL(__imp__sub_83C498C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C498C8"))) PPC_WEAK_FUNC(sub_83C498C8);
PPC_FUNC_IMPL(__imp__sub_83C498C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15864
	ctx.r3.s64 = ctx.r11.s64 + -15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C498D4"))) PPC_WEAK_FUNC(sub_83C498D4);
PPC_FUNC_IMPL(__imp__sub_83C498D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C498D8"))) PPC_WEAK_FUNC(sub_83C498D8);
PPC_FUNC_IMPL(__imp__sub_83C498D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-864
	ctx.r7.s64 = ctx.r8.s64 + -864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49900"))) PPC_WEAK_FUNC(sub_83C49900);
PPC_FUNC_IMPL(__imp__sub_83C49900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1384
	ctx.r6.s64 = ctx.r7.s64 + 1384;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -864);
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
	// std r9,1384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49948"))) PPC_WEAK_FUNC(sub_83C49948);
PPC_FUNC_IMPL(__imp__sub_83C49948) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// bl 0x83523120
	ctx.lr = 0x83C49960;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15856
	ctx.r3.s64 = ctx.r10.s64 + -15856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4996C;
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

__attribute__((alias("__imp__sub_83C4997C"))) PPC_WEAK_FUNC(sub_83C4997C);
PPC_FUNC_IMPL(__imp__sub_83C4997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49980"))) PPC_WEAK_FUNC(sub_83C49980);
PPC_FUNC_IMPL(__imp__sub_83C49980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15840
	ctx.r3.s64 = ctx.r11.s64 + -15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4998C"))) PPC_WEAK_FUNC(sub_83C4998C);
PPC_FUNC_IMPL(__imp__sub_83C4998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49990"))) PPC_WEAK_FUNC(sub_83C49990);
PPC_FUNC_IMPL(__imp__sub_83C49990) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-856
	ctx.r3.s64 = ctx.r11.s64 + -856;
	// bl 0x8259af80
	ctx.lr = 0x83C499A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15824
	ctx.r3.s64 = ctx.r10.s64 + -15824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C499B4;
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

__attribute__((alias("__imp__sub_83C499C4"))) PPC_WEAK_FUNC(sub_83C499C4);
PPC_FUNC_IMPL(__imp__sub_83C499C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C499C8"))) PPC_WEAK_FUNC(sub_83C499C8);
PPC_FUNC_IMPL(__imp__sub_83C499C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-876
	ctx.r11.s64 = ctx.r8.s64 + -876;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15832
	ctx.r3.s64 = ctx.r6.s64 + -15832;
	// stw r10,-876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C499F8"))) PPC_WEAK_FUNC(sub_83C499F8);
PPC_FUNC_IMPL(__imp__sub_83C499F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15816
	ctx.r3.s64 = ctx.r11.s64 + -15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A04"))) PPC_WEAK_FUNC(sub_83C49A04);
PPC_FUNC_IMPL(__imp__sub_83C49A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A08"))) PPC_WEAK_FUNC(sub_83C49A08);
PPC_FUNC_IMPL(__imp__sub_83C49A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15808
	ctx.r3.s64 = ctx.r11.s64 + -15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A14"))) PPC_WEAK_FUNC(sub_83C49A14);
PPC_FUNC_IMPL(__imp__sub_83C49A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A18"))) PPC_WEAK_FUNC(sub_83C49A18);
PPC_FUNC_IMPL(__imp__sub_83C49A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A24"))) PPC_WEAK_FUNC(sub_83C49A24);
PPC_FUNC_IMPL(__imp__sub_83C49A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A28"))) PPC_WEAK_FUNC(sub_83C49A28);
PPC_FUNC_IMPL(__imp__sub_83C49A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15792
	ctx.r3.s64 = ctx.r11.s64 + -15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A34"))) PPC_WEAK_FUNC(sub_83C49A34);
PPC_FUNC_IMPL(__imp__sub_83C49A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A38"))) PPC_WEAK_FUNC(sub_83C49A38);
PPC_FUNC_IMPL(__imp__sub_83C49A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A44"))) PPC_WEAK_FUNC(sub_83C49A44);
PPC_FUNC_IMPL(__imp__sub_83C49A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A48"))) PPC_WEAK_FUNC(sub_83C49A48);
PPC_FUNC_IMPL(__imp__sub_83C49A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A54"))) PPC_WEAK_FUNC(sub_83C49A54);
PPC_FUNC_IMPL(__imp__sub_83C49A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A58"))) PPC_WEAK_FUNC(sub_83C49A58);
PPC_FUNC_IMPL(__imp__sub_83C49A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15768
	ctx.r3.s64 = ctx.r11.s64 + -15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A64"))) PPC_WEAK_FUNC(sub_83C49A64);
PPC_FUNC_IMPL(__imp__sub_83C49A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A68"))) PPC_WEAK_FUNC(sub_83C49A68);
PPC_FUNC_IMPL(__imp__sub_83C49A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A74"))) PPC_WEAK_FUNC(sub_83C49A74);
PPC_FUNC_IMPL(__imp__sub_83C49A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A78"))) PPC_WEAK_FUNC(sub_83C49A78);
PPC_FUNC_IMPL(__imp__sub_83C49A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15752
	ctx.r3.s64 = ctx.r11.s64 + -15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A84"))) PPC_WEAK_FUNC(sub_83C49A84);
PPC_FUNC_IMPL(__imp__sub_83C49A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A88"))) PPC_WEAK_FUNC(sub_83C49A88);
PPC_FUNC_IMPL(__imp__sub_83C49A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15744
	ctx.r3.s64 = ctx.r11.s64 + -15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49A94"))) PPC_WEAK_FUNC(sub_83C49A94);
PPC_FUNC_IMPL(__imp__sub_83C49A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49A98"))) PPC_WEAK_FUNC(sub_83C49A98);
PPC_FUNC_IMPL(__imp__sub_83C49A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49AA4"))) PPC_WEAK_FUNC(sub_83C49AA4);
PPC_FUNC_IMPL(__imp__sub_83C49AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49AA8"))) PPC_WEAK_FUNC(sub_83C49AA8);
PPC_FUNC_IMPL(__imp__sub_83C49AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15728
	ctx.r3.s64 = ctx.r11.s64 + -15728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49AB4"))) PPC_WEAK_FUNC(sub_83C49AB4);
PPC_FUNC_IMPL(__imp__sub_83C49AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49AB8"))) PPC_WEAK_FUNC(sub_83C49AB8);
PPC_FUNC_IMPL(__imp__sub_83C49AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-496
	ctx.r7.s64 = ctx.r8.s64 + -496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49AE0"))) PPC_WEAK_FUNC(sub_83C49AE0);
PPC_FUNC_IMPL(__imp__sub_83C49AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1512
	ctx.r6.s64 = ctx.r7.s64 + 1512;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1440(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1440);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -496);
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
	// std r9,1512(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1512, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49B28"))) PPC_WEAK_FUNC(sub_83C49B28);
PPC_FUNC_IMPL(__imp__sub_83C49B28) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-512
	ctx.r3.s64 = ctx.r11.s64 + -512;
	// bl 0x83523120
	ctx.lr = 0x83C49B40;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15720
	ctx.r3.s64 = ctx.r10.s64 + -15720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49B4C;
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

__attribute__((alias("__imp__sub_83C49B5C"))) PPC_WEAK_FUNC(sub_83C49B5C);
PPC_FUNC_IMPL(__imp__sub_83C49B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49B60"))) PPC_WEAK_FUNC(sub_83C49B60);
PPC_FUNC_IMPL(__imp__sub_83C49B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49B6C"))) PPC_WEAK_FUNC(sub_83C49B6C);
PPC_FUNC_IMPL(__imp__sub_83C49B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49B70"))) PPC_WEAK_FUNC(sub_83C49B70);
PPC_FUNC_IMPL(__imp__sub_83C49B70) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-488
	ctx.r3.s64 = ctx.r11.s64 + -488;
	// bl 0x8259af80
	ctx.lr = 0x83C49B88;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15688
	ctx.r3.s64 = ctx.r10.s64 + -15688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49B94;
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

__attribute__((alias("__imp__sub_83C49BA4"))) PPC_WEAK_FUNC(sub_83C49BA4);
PPC_FUNC_IMPL(__imp__sub_83C49BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49BA8"))) PPC_WEAK_FUNC(sub_83C49BA8);
PPC_FUNC_IMPL(__imp__sub_83C49BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-508
	ctx.r11.s64 = ctx.r8.s64 + -508;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1488);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15696
	ctx.r3.s64 = ctx.r6.s64 + -15696;
	// stw r10,-508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49BD8"))) PPC_WEAK_FUNC(sub_83C49BD8);
PPC_FUNC_IMPL(__imp__sub_83C49BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15680
	ctx.r3.s64 = ctx.r11.s64 + -15680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49BE4"))) PPC_WEAK_FUNC(sub_83C49BE4);
PPC_FUNC_IMPL(__imp__sub_83C49BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49BE8"))) PPC_WEAK_FUNC(sub_83C49BE8);
PPC_FUNC_IMPL(__imp__sub_83C49BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15672
	ctx.r3.s64 = ctx.r11.s64 + -15672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49BF4"))) PPC_WEAK_FUNC(sub_83C49BF4);
PPC_FUNC_IMPL(__imp__sub_83C49BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49BF8"))) PPC_WEAK_FUNC(sub_83C49BF8);
PPC_FUNC_IMPL(__imp__sub_83C49BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15664
	ctx.r3.s64 = ctx.r11.s64 + -15664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C04"))) PPC_WEAK_FUNC(sub_83C49C04);
PPC_FUNC_IMPL(__imp__sub_83C49C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C08"))) PPC_WEAK_FUNC(sub_83C49C08);
PPC_FUNC_IMPL(__imp__sub_83C49C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15656
	ctx.r3.s64 = ctx.r11.s64 + -15656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C14"))) PPC_WEAK_FUNC(sub_83C49C14);
PPC_FUNC_IMPL(__imp__sub_83C49C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C18"))) PPC_WEAK_FUNC(sub_83C49C18);
PPC_FUNC_IMPL(__imp__sub_83C49C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15648
	ctx.r3.s64 = ctx.r11.s64 + -15648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C24"))) PPC_WEAK_FUNC(sub_83C49C24);
PPC_FUNC_IMPL(__imp__sub_83C49C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C28"))) PPC_WEAK_FUNC(sub_83C49C28);
PPC_FUNC_IMPL(__imp__sub_83C49C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C34"))) PPC_WEAK_FUNC(sub_83C49C34);
PPC_FUNC_IMPL(__imp__sub_83C49C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C38"))) PPC_WEAK_FUNC(sub_83C49C38);
PPC_FUNC_IMPL(__imp__sub_83C49C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C44"))) PPC_WEAK_FUNC(sub_83C49C44);
PPC_FUNC_IMPL(__imp__sub_83C49C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C48"))) PPC_WEAK_FUNC(sub_83C49C48);
PPC_FUNC_IMPL(__imp__sub_83C49C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15624
	ctx.r3.s64 = ctx.r11.s64 + -15624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C54"))) PPC_WEAK_FUNC(sub_83C49C54);
PPC_FUNC_IMPL(__imp__sub_83C49C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C58"))) PPC_WEAK_FUNC(sub_83C49C58);
PPC_FUNC_IMPL(__imp__sub_83C49C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15616
	ctx.r3.s64 = ctx.r11.s64 + -15616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C64"))) PPC_WEAK_FUNC(sub_83C49C64);
PPC_FUNC_IMPL(__imp__sub_83C49C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C68"))) PPC_WEAK_FUNC(sub_83C49C68);
PPC_FUNC_IMPL(__imp__sub_83C49C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15608
	ctx.r3.s64 = ctx.r11.s64 + -15608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C74"))) PPC_WEAK_FUNC(sub_83C49C74);
PPC_FUNC_IMPL(__imp__sub_83C49C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C78"))) PPC_WEAK_FUNC(sub_83C49C78);
PPC_FUNC_IMPL(__imp__sub_83C49C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15600
	ctx.r3.s64 = ctx.r11.s64 + -15600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C84"))) PPC_WEAK_FUNC(sub_83C49C84);
PPC_FUNC_IMPL(__imp__sub_83C49C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C88"))) PPC_WEAK_FUNC(sub_83C49C88);
PPC_FUNC_IMPL(__imp__sub_83C49C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49C94"))) PPC_WEAK_FUNC(sub_83C49C94);
PPC_FUNC_IMPL(__imp__sub_83C49C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49C98"))) PPC_WEAK_FUNC(sub_83C49C98);
PPC_FUNC_IMPL(__imp__sub_83C49C98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-128
	ctx.r7.s64 = ctx.r8.s64 + -128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49CC0"))) PPC_WEAK_FUNC(sub_83C49CC0);
PPC_FUNC_IMPL(__imp__sub_83C49CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1640
	ctx.r6.s64 = ctx.r7.s64 + 1640;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1568(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1568);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -128);
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
	// std r9,1640(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1640, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49D08"))) PPC_WEAK_FUNC(sub_83C49D08);
PPC_FUNC_IMPL(__imp__sub_83C49D08) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// bl 0x83523120
	ctx.lr = 0x83C49D20;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15584
	ctx.r3.s64 = ctx.r10.s64 + -15584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49D2C;
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

__attribute__((alias("__imp__sub_83C49D3C"))) PPC_WEAK_FUNC(sub_83C49D3C);
PPC_FUNC_IMPL(__imp__sub_83C49D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49D40"))) PPC_WEAK_FUNC(sub_83C49D40);
PPC_FUNC_IMPL(__imp__sub_83C49D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49D4C"))) PPC_WEAK_FUNC(sub_83C49D4C);
PPC_FUNC_IMPL(__imp__sub_83C49D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49D50"))) PPC_WEAK_FUNC(sub_83C49D50);
PPC_FUNC_IMPL(__imp__sub_83C49D50) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// bl 0x8259af80
	ctx.lr = 0x83C49D68;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15552
	ctx.r3.s64 = ctx.r10.s64 + -15552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49D74;
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

__attribute__((alias("__imp__sub_83C49D84"))) PPC_WEAK_FUNC(sub_83C49D84);
PPC_FUNC_IMPL(__imp__sub_83C49D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49D88"))) PPC_WEAK_FUNC(sub_83C49D88);
PPC_FUNC_IMPL(__imp__sub_83C49D88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-140
	ctx.r11.s64 = ctx.r8.s64 + -140;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1616);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15560
	ctx.r3.s64 = ctx.r6.s64 + -15560;
	// stw r10,-140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49DB8"))) PPC_WEAK_FUNC(sub_83C49DB8);
PPC_FUNC_IMPL(__imp__sub_83C49DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49DC4"))) PPC_WEAK_FUNC(sub_83C49DC4);
PPC_FUNC_IMPL(__imp__sub_83C49DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49DC8"))) PPC_WEAK_FUNC(sub_83C49DC8);
PPC_FUNC_IMPL(__imp__sub_83C49DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15536
	ctx.r3.s64 = ctx.r11.s64 + -15536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49DD4"))) PPC_WEAK_FUNC(sub_83C49DD4);
PPC_FUNC_IMPL(__imp__sub_83C49DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49DD8"))) PPC_WEAK_FUNC(sub_83C49DD8);
PPC_FUNC_IMPL(__imp__sub_83C49DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15528
	ctx.r3.s64 = ctx.r11.s64 + -15528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49DE4"))) PPC_WEAK_FUNC(sub_83C49DE4);
PPC_FUNC_IMPL(__imp__sub_83C49DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49DE8"))) PPC_WEAK_FUNC(sub_83C49DE8);
PPC_FUNC_IMPL(__imp__sub_83C49DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15520
	ctx.r3.s64 = ctx.r11.s64 + -15520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49DF4"))) PPC_WEAK_FUNC(sub_83C49DF4);
PPC_FUNC_IMPL(__imp__sub_83C49DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49DF8"))) PPC_WEAK_FUNC(sub_83C49DF8);
PPC_FUNC_IMPL(__imp__sub_83C49DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E04"))) PPC_WEAK_FUNC(sub_83C49E04);
PPC_FUNC_IMPL(__imp__sub_83C49E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E08"))) PPC_WEAK_FUNC(sub_83C49E08);
PPC_FUNC_IMPL(__imp__sub_83C49E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E14"))) PPC_WEAK_FUNC(sub_83C49E14);
PPC_FUNC_IMPL(__imp__sub_83C49E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E18"))) PPC_WEAK_FUNC(sub_83C49E18);
PPC_FUNC_IMPL(__imp__sub_83C49E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E24"))) PPC_WEAK_FUNC(sub_83C49E24);
PPC_FUNC_IMPL(__imp__sub_83C49E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E28"))) PPC_WEAK_FUNC(sub_83C49E28);
PPC_FUNC_IMPL(__imp__sub_83C49E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E34"))) PPC_WEAK_FUNC(sub_83C49E34);
PPC_FUNC_IMPL(__imp__sub_83C49E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E38"))) PPC_WEAK_FUNC(sub_83C49E38);
PPC_FUNC_IMPL(__imp__sub_83C49E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15480
	ctx.r3.s64 = ctx.r11.s64 + -15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E44"))) PPC_WEAK_FUNC(sub_83C49E44);
PPC_FUNC_IMPL(__imp__sub_83C49E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E48"))) PPC_WEAK_FUNC(sub_83C49E48);
PPC_FUNC_IMPL(__imp__sub_83C49E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15472
	ctx.r3.s64 = ctx.r11.s64 + -15472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E54"))) PPC_WEAK_FUNC(sub_83C49E54);
PPC_FUNC_IMPL(__imp__sub_83C49E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E58"))) PPC_WEAK_FUNC(sub_83C49E58);
PPC_FUNC_IMPL(__imp__sub_83C49E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E64"))) PPC_WEAK_FUNC(sub_83C49E64);
PPC_FUNC_IMPL(__imp__sub_83C49E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E68"))) PPC_WEAK_FUNC(sub_83C49E68);
PPC_FUNC_IMPL(__imp__sub_83C49E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15456
	ctx.r3.s64 = ctx.r11.s64 + -15456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49E74"))) PPC_WEAK_FUNC(sub_83C49E74);
PPC_FUNC_IMPL(__imp__sub_83C49E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49E78"))) PPC_WEAK_FUNC(sub_83C49E78);
PPC_FUNC_IMPL(__imp__sub_83C49E78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,240
	ctx.r7.s64 = ctx.r8.s64 + 240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49EA0"))) PPC_WEAK_FUNC(sub_83C49EA0);
PPC_FUNC_IMPL(__imp__sub_83C49EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1768
	ctx.r6.s64 = ctx.r7.s64 + 1768;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
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
	// std r9,1768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49EE8"))) PPC_WEAK_FUNC(sub_83C49EE8);
PPC_FUNC_IMPL(__imp__sub_83C49EE8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x83523120
	ctx.lr = 0x83C49F00;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15448
	ctx.r3.s64 = ctx.r10.s64 + -15448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49F0C;
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

__attribute__((alias("__imp__sub_83C49F1C"))) PPC_WEAK_FUNC(sub_83C49F1C);
PPC_FUNC_IMPL(__imp__sub_83C49F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49F20"))) PPC_WEAK_FUNC(sub_83C49F20);
PPC_FUNC_IMPL(__imp__sub_83C49F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15432
	ctx.r3.s64 = ctx.r11.s64 + -15432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49F2C"))) PPC_WEAK_FUNC(sub_83C49F2C);
PPC_FUNC_IMPL(__imp__sub_83C49F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49F30"))) PPC_WEAK_FUNC(sub_83C49F30);
PPC_FUNC_IMPL(__imp__sub_83C49F30) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x8259af80
	ctx.lr = 0x83C49F48;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15416
	ctx.r3.s64 = ctx.r10.s64 + -15416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49F54;
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

__attribute__((alias("__imp__sub_83C49F64"))) PPC_WEAK_FUNC(sub_83C49F64);
PPC_FUNC_IMPL(__imp__sub_83C49F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49F68"))) PPC_WEAK_FUNC(sub_83C49F68);
PPC_FUNC_IMPL(__imp__sub_83C49F68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,228
	ctx.r11.s64 = ctx.r8.s64 + 228;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15424
	ctx.r3.s64 = ctx.r6.s64 + -15424;
	// stw r10,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49F98"))) PPC_WEAK_FUNC(sub_83C49F98);
PPC_FUNC_IMPL(__imp__sub_83C49F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FA4"))) PPC_WEAK_FUNC(sub_83C49FA4);
PPC_FUNC_IMPL(__imp__sub_83C49FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FA8"))) PPC_WEAK_FUNC(sub_83C49FA8);
PPC_FUNC_IMPL(__imp__sub_83C49FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15400
	ctx.r3.s64 = ctx.r11.s64 + -15400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FB4"))) PPC_WEAK_FUNC(sub_83C49FB4);
PPC_FUNC_IMPL(__imp__sub_83C49FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FB8"))) PPC_WEAK_FUNC(sub_83C49FB8);
PPC_FUNC_IMPL(__imp__sub_83C49FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15392
	ctx.r3.s64 = ctx.r11.s64 + -15392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FC4"))) PPC_WEAK_FUNC(sub_83C49FC4);
PPC_FUNC_IMPL(__imp__sub_83C49FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FC8"))) PPC_WEAK_FUNC(sub_83C49FC8);
PPC_FUNC_IMPL(__imp__sub_83C49FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FD4"))) PPC_WEAK_FUNC(sub_83C49FD4);
PPC_FUNC_IMPL(__imp__sub_83C49FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FD8"))) PPC_WEAK_FUNC(sub_83C49FD8);
PPC_FUNC_IMPL(__imp__sub_83C49FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15376
	ctx.r3.s64 = ctx.r11.s64 + -15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FE4"))) PPC_WEAK_FUNC(sub_83C49FE4);
PPC_FUNC_IMPL(__imp__sub_83C49FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FE8"))) PPC_WEAK_FUNC(sub_83C49FE8);
PPC_FUNC_IMPL(__imp__sub_83C49FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15368
	ctx.r3.s64 = ctx.r11.s64 + -15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49FF4"))) PPC_WEAK_FUNC(sub_83C49FF4);
PPC_FUNC_IMPL(__imp__sub_83C49FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49FF8"))) PPC_WEAK_FUNC(sub_83C49FF8);
PPC_FUNC_IMPL(__imp__sub_83C49FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A004"))) PPC_WEAK_FUNC(sub_83C4A004);
PPC_FUNC_IMPL(__imp__sub_83C4A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A008"))) PPC_WEAK_FUNC(sub_83C4A008);
PPC_FUNC_IMPL(__imp__sub_83C4A008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15352
	ctx.r3.s64 = ctx.r11.s64 + -15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A014"))) PPC_WEAK_FUNC(sub_83C4A014);
PPC_FUNC_IMPL(__imp__sub_83C4A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A018"))) PPC_WEAK_FUNC(sub_83C4A018);
PPC_FUNC_IMPL(__imp__sub_83C4A018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A024"))) PPC_WEAK_FUNC(sub_83C4A024);
PPC_FUNC_IMPL(__imp__sub_83C4A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A028"))) PPC_WEAK_FUNC(sub_83C4A028);
PPC_FUNC_IMPL(__imp__sub_83C4A028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A034"))) PPC_WEAK_FUNC(sub_83C4A034);
PPC_FUNC_IMPL(__imp__sub_83C4A034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A038"))) PPC_WEAK_FUNC(sub_83C4A038);
PPC_FUNC_IMPL(__imp__sub_83C4A038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A044"))) PPC_WEAK_FUNC(sub_83C4A044);
PPC_FUNC_IMPL(__imp__sub_83C4A044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A048"))) PPC_WEAK_FUNC(sub_83C4A048);
PPC_FUNC_IMPL(__imp__sub_83C4A048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15320
	ctx.r3.s64 = ctx.r11.s64 + -15320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A054"))) PPC_WEAK_FUNC(sub_83C4A054);
PPC_FUNC_IMPL(__imp__sub_83C4A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A058"))) PPC_WEAK_FUNC(sub_83C4A058);
PPC_FUNC_IMPL(__imp__sub_83C4A058) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,608
	ctx.r7.s64 = ctx.r8.s64 + 608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4A080"))) PPC_WEAK_FUNC(sub_83C4A080);
PPC_FUNC_IMPL(__imp__sub_83C4A080) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,1896
	ctx.r6.s64 = ctx.r7.s64 + 1896;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
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
	// std r9,1896(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1896, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4A0C8"))) PPC_WEAK_FUNC(sub_83C4A0C8);
PPC_FUNC_IMPL(__imp__sub_83C4A0C8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// bl 0x83523120
	ctx.lr = 0x83C4A0E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15312
	ctx.r3.s64 = ctx.r10.s64 + -15312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4A0EC;
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

__attribute__((alias("__imp__sub_83C4A0FC"))) PPC_WEAK_FUNC(sub_83C4A0FC);
PPC_FUNC_IMPL(__imp__sub_83C4A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A100"))) PPC_WEAK_FUNC(sub_83C4A100);
PPC_FUNC_IMPL(__imp__sub_83C4A100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15296
	ctx.r3.s64 = ctx.r11.s64 + -15296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A10C"))) PPC_WEAK_FUNC(sub_83C4A10C);
PPC_FUNC_IMPL(__imp__sub_83C4A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A110"))) PPC_WEAK_FUNC(sub_83C4A110);
PPC_FUNC_IMPL(__imp__sub_83C4A110) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x8259af80
	ctx.lr = 0x83C4A128;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-15280
	ctx.r3.s64 = ctx.r10.s64 + -15280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4A134;
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

__attribute__((alias("__imp__sub_83C4A144"))) PPC_WEAK_FUNC(sub_83C4A144);
PPC_FUNC_IMPL(__imp__sub_83C4A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4A148"))) PPC_WEAK_FUNC(sub_83C4A148);
PPC_FUNC_IMPL(__imp__sub_83C4A148) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,596
	ctx.r11.s64 = ctx.r8.s64 + 596;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,1872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15288
	ctx.r3.s64 = ctx.r6.s64 + -15288;
	// stw r10,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4A178"))) PPC_WEAK_FUNC(sub_83C4A178);
PPC_FUNC_IMPL(__imp__sub_83C4A178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

