#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C4AFC8"))) PPC_WEAK_FUNC(sub_83C4AFC8);
PPC_FUNC_IMPL(__imp__sub_83C4AFC8) {
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
	// addi r3,r11,3536
	ctx.r3.s64 = ctx.r11.s64 + 3536;
	// bl 0x83523120
	ctx.lr = 0x83C4AFE0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-14224
	ctx.r3.s64 = ctx.r10.s64 + -14224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4AFEC;
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

__attribute__((alias("__imp__sub_83C4AFFC"))) PPC_WEAK_FUNC(sub_83C4AFFC);
PPC_FUNC_IMPL(__imp__sub_83C4AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B000"))) PPC_WEAK_FUNC(sub_83C4B000);
PPC_FUNC_IMPL(__imp__sub_83C4B000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14208
	ctx.r3.s64 = ctx.r11.s64 + -14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B00C"))) PPC_WEAK_FUNC(sub_83C4B00C);
PPC_FUNC_IMPL(__imp__sub_83C4B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B010"))) PPC_WEAK_FUNC(sub_83C4B010);
PPC_FUNC_IMPL(__imp__sub_83C4B010) {
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
	// addi r3,r11,3560
	ctx.r3.s64 = ctx.r11.s64 + 3560;
	// bl 0x8259af80
	ctx.lr = 0x83C4B028;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-14192
	ctx.r3.s64 = ctx.r10.s64 + -14192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B034;
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

__attribute__((alias("__imp__sub_83C4B044"))) PPC_WEAK_FUNC(sub_83C4B044);
PPC_FUNC_IMPL(__imp__sub_83C4B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B048"))) PPC_WEAK_FUNC(sub_83C4B048);
PPC_FUNC_IMPL(__imp__sub_83C4B048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3540
	ctx.r11.s64 = ctx.r8.s64 + 3540;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,2896(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2896);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14200
	ctx.r3.s64 = ctx.r6.s64 + -14200;
	// stw r10,3540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3540, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B078"))) PPC_WEAK_FUNC(sub_83C4B078);
PPC_FUNC_IMPL(__imp__sub_83C4B078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B084"))) PPC_WEAK_FUNC(sub_83C4B084);
PPC_FUNC_IMPL(__imp__sub_83C4B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B088"))) PPC_WEAK_FUNC(sub_83C4B088);
PPC_FUNC_IMPL(__imp__sub_83C4B088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B094"))) PPC_WEAK_FUNC(sub_83C4B094);
PPC_FUNC_IMPL(__imp__sub_83C4B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B098"))) PPC_WEAK_FUNC(sub_83C4B098);
PPC_FUNC_IMPL(__imp__sub_83C4B098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0A4"))) PPC_WEAK_FUNC(sub_83C4B0A4);
PPC_FUNC_IMPL(__imp__sub_83C4B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0A8"))) PPC_WEAK_FUNC(sub_83C4B0A8);
PPC_FUNC_IMPL(__imp__sub_83C4B0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0B4"))) PPC_WEAK_FUNC(sub_83C4B0B4);
PPC_FUNC_IMPL(__imp__sub_83C4B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0B8"))) PPC_WEAK_FUNC(sub_83C4B0B8);
PPC_FUNC_IMPL(__imp__sub_83C4B0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0C4"))) PPC_WEAK_FUNC(sub_83C4B0C4);
PPC_FUNC_IMPL(__imp__sub_83C4B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0C8"))) PPC_WEAK_FUNC(sub_83C4B0C8);
PPC_FUNC_IMPL(__imp__sub_83C4B0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0D4"))) PPC_WEAK_FUNC(sub_83C4B0D4);
PPC_FUNC_IMPL(__imp__sub_83C4B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0D8"))) PPC_WEAK_FUNC(sub_83C4B0D8);
PPC_FUNC_IMPL(__imp__sub_83C4B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0E4"))) PPC_WEAK_FUNC(sub_83C4B0E4);
PPC_FUNC_IMPL(__imp__sub_83C4B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0E8"))) PPC_WEAK_FUNC(sub_83C4B0E8);
PPC_FUNC_IMPL(__imp__sub_83C4B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B0F4"))) PPC_WEAK_FUNC(sub_83C4B0F4);
PPC_FUNC_IMPL(__imp__sub_83C4B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B0F8"))) PPC_WEAK_FUNC(sub_83C4B0F8);
PPC_FUNC_IMPL(__imp__sub_83C4B0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14120
	ctx.r3.s64 = ctx.r11.s64 + -14120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B104"))) PPC_WEAK_FUNC(sub_83C4B104);
PPC_FUNC_IMPL(__imp__sub_83C4B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B108"))) PPC_WEAK_FUNC(sub_83C4B108);
PPC_FUNC_IMPL(__imp__sub_83C4B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14112
	ctx.r3.s64 = ctx.r11.s64 + -14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B114"))) PPC_WEAK_FUNC(sub_83C4B114);
PPC_FUNC_IMPL(__imp__sub_83C4B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B118"))) PPC_WEAK_FUNC(sub_83C4B118);
PPC_FUNC_IMPL(__imp__sub_83C4B118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B124"))) PPC_WEAK_FUNC(sub_83C4B124);
PPC_FUNC_IMPL(__imp__sub_83C4B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B128"))) PPC_WEAK_FUNC(sub_83C4B128);
PPC_FUNC_IMPL(__imp__sub_83C4B128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B134"))) PPC_WEAK_FUNC(sub_83C4B134);
PPC_FUNC_IMPL(__imp__sub_83C4B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B138"))) PPC_WEAK_FUNC(sub_83C4B138);
PPC_FUNC_IMPL(__imp__sub_83C4B138) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3920
	ctx.r7.s64 = ctx.r8.s64 + 3920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B160"))) PPC_WEAK_FUNC(sub_83C4B160);
PPC_FUNC_IMPL(__imp__sub_83C4B160) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3048
	ctx.r6.s64 = ctx.r7.s64 + 3048;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3920);
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
	// std r9,3048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B1A8"))) PPC_WEAK_FUNC(sub_83C4B1A8);
PPC_FUNC_IMPL(__imp__sub_83C4B1A8) {
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
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// bl 0x83523120
	ctx.lr = 0x83C4B1C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-14088
	ctx.r3.s64 = ctx.r10.s64 + -14088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B1CC;
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

__attribute__((alias("__imp__sub_83C4B1DC"))) PPC_WEAK_FUNC(sub_83C4B1DC);
PPC_FUNC_IMPL(__imp__sub_83C4B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B1E0"))) PPC_WEAK_FUNC(sub_83C4B1E0);
PPC_FUNC_IMPL(__imp__sub_83C4B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B1EC"))) PPC_WEAK_FUNC(sub_83C4B1EC);
PPC_FUNC_IMPL(__imp__sub_83C4B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B1F0"))) PPC_WEAK_FUNC(sub_83C4B1F0);
PPC_FUNC_IMPL(__imp__sub_83C4B1F0) {
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
	// addi r3,r11,3928
	ctx.r3.s64 = ctx.r11.s64 + 3928;
	// bl 0x8259af80
	ctx.lr = 0x83C4B208;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-14056
	ctx.r3.s64 = ctx.r10.s64 + -14056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B214;
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

__attribute__((alias("__imp__sub_83C4B224"))) PPC_WEAK_FUNC(sub_83C4B224);
PPC_FUNC_IMPL(__imp__sub_83C4B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B228"))) PPC_WEAK_FUNC(sub_83C4B228);
PPC_FUNC_IMPL(__imp__sub_83C4B228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3908
	ctx.r11.s64 = ctx.r8.s64 + 3908;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14064
	ctx.r3.s64 = ctx.r6.s64 + -14064;
	// stw r10,3908(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3908, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B258"))) PPC_WEAK_FUNC(sub_83C4B258);
PPC_FUNC_IMPL(__imp__sub_83C4B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B264"))) PPC_WEAK_FUNC(sub_83C4B264);
PPC_FUNC_IMPL(__imp__sub_83C4B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B268"))) PPC_WEAK_FUNC(sub_83C4B268);
PPC_FUNC_IMPL(__imp__sub_83C4B268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B274"))) PPC_WEAK_FUNC(sub_83C4B274);
PPC_FUNC_IMPL(__imp__sub_83C4B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B278"))) PPC_WEAK_FUNC(sub_83C4B278);
PPC_FUNC_IMPL(__imp__sub_83C4B278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B284"))) PPC_WEAK_FUNC(sub_83C4B284);
PPC_FUNC_IMPL(__imp__sub_83C4B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B288"))) PPC_WEAK_FUNC(sub_83C4B288);
PPC_FUNC_IMPL(__imp__sub_83C4B288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14024
	ctx.r3.s64 = ctx.r11.s64 + -14024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B294"))) PPC_WEAK_FUNC(sub_83C4B294);
PPC_FUNC_IMPL(__imp__sub_83C4B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B298"))) PPC_WEAK_FUNC(sub_83C4B298);
PPC_FUNC_IMPL(__imp__sub_83C4B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14016
	ctx.r3.s64 = ctx.r11.s64 + -14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2A4"))) PPC_WEAK_FUNC(sub_83C4B2A4);
PPC_FUNC_IMPL(__imp__sub_83C4B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2A8"))) PPC_WEAK_FUNC(sub_83C4B2A8);
PPC_FUNC_IMPL(__imp__sub_83C4B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2B4"))) PPC_WEAK_FUNC(sub_83C4B2B4);
PPC_FUNC_IMPL(__imp__sub_83C4B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2B8"))) PPC_WEAK_FUNC(sub_83C4B2B8);
PPC_FUNC_IMPL(__imp__sub_83C4B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-14000
	ctx.r3.s64 = ctx.r11.s64 + -14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2C4"))) PPC_WEAK_FUNC(sub_83C4B2C4);
PPC_FUNC_IMPL(__imp__sub_83C4B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2C8"))) PPC_WEAK_FUNC(sub_83C4B2C8);
PPC_FUNC_IMPL(__imp__sub_83C4B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2D4"))) PPC_WEAK_FUNC(sub_83C4B2D4);
PPC_FUNC_IMPL(__imp__sub_83C4B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2D8"))) PPC_WEAK_FUNC(sub_83C4B2D8);
PPC_FUNC_IMPL(__imp__sub_83C4B2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2E4"))) PPC_WEAK_FUNC(sub_83C4B2E4);
PPC_FUNC_IMPL(__imp__sub_83C4B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2E8"))) PPC_WEAK_FUNC(sub_83C4B2E8);
PPC_FUNC_IMPL(__imp__sub_83C4B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13976
	ctx.r3.s64 = ctx.r11.s64 + -13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B2F4"))) PPC_WEAK_FUNC(sub_83C4B2F4);
PPC_FUNC_IMPL(__imp__sub_83C4B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B2F8"))) PPC_WEAK_FUNC(sub_83C4B2F8);
PPC_FUNC_IMPL(__imp__sub_83C4B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B304"))) PPC_WEAK_FUNC(sub_83C4B304);
PPC_FUNC_IMPL(__imp__sub_83C4B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B308"))) PPC_WEAK_FUNC(sub_83C4B308);
PPC_FUNC_IMPL(__imp__sub_83C4B308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B314"))) PPC_WEAK_FUNC(sub_83C4B314);
PPC_FUNC_IMPL(__imp__sub_83C4B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B318"))) PPC_WEAK_FUNC(sub_83C4B318);
PPC_FUNC_IMPL(__imp__sub_83C4B318) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4288
	ctx.r7.s64 = ctx.r8.s64 + 4288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B340"))) PPC_WEAK_FUNC(sub_83C4B340);
PPC_FUNC_IMPL(__imp__sub_83C4B340) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3176
	ctx.r6.s64 = ctx.r7.s64 + 3176;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4288);
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
	// std r9,3176(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B388"))) PPC_WEAK_FUNC(sub_83C4B388);
PPC_FUNC_IMPL(__imp__sub_83C4B388) {
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
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// bl 0x83523120
	ctx.lr = 0x83C4B3A0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13952
	ctx.r3.s64 = ctx.r10.s64 + -13952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B3AC;
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

__attribute__((alias("__imp__sub_83C4B3BC"))) PPC_WEAK_FUNC(sub_83C4B3BC);
PPC_FUNC_IMPL(__imp__sub_83C4B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B3C0"))) PPC_WEAK_FUNC(sub_83C4B3C0);
PPC_FUNC_IMPL(__imp__sub_83C4B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B3CC"))) PPC_WEAK_FUNC(sub_83C4B3CC);
PPC_FUNC_IMPL(__imp__sub_83C4B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B3D0"))) PPC_WEAK_FUNC(sub_83C4B3D0);
PPC_FUNC_IMPL(__imp__sub_83C4B3D0) {
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
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// bl 0x8259af80
	ctx.lr = 0x83C4B3E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13920
	ctx.r3.s64 = ctx.r10.s64 + -13920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B3F4;
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

__attribute__((alias("__imp__sub_83C4B404"))) PPC_WEAK_FUNC(sub_83C4B404);
PPC_FUNC_IMPL(__imp__sub_83C4B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B408"))) PPC_WEAK_FUNC(sub_83C4B408);
PPC_FUNC_IMPL(__imp__sub_83C4B408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4276
	ctx.r11.s64 = ctx.r8.s64 + 4276;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3152);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13928
	ctx.r3.s64 = ctx.r6.s64 + -13928;
	// stw r10,4276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4276, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B438"))) PPC_WEAK_FUNC(sub_83C4B438);
PPC_FUNC_IMPL(__imp__sub_83C4B438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B444"))) PPC_WEAK_FUNC(sub_83C4B444);
PPC_FUNC_IMPL(__imp__sub_83C4B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B448"))) PPC_WEAK_FUNC(sub_83C4B448);
PPC_FUNC_IMPL(__imp__sub_83C4B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13904
	ctx.r3.s64 = ctx.r11.s64 + -13904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B454"))) PPC_WEAK_FUNC(sub_83C4B454);
PPC_FUNC_IMPL(__imp__sub_83C4B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B458"))) PPC_WEAK_FUNC(sub_83C4B458);
PPC_FUNC_IMPL(__imp__sub_83C4B458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B464"))) PPC_WEAK_FUNC(sub_83C4B464);
PPC_FUNC_IMPL(__imp__sub_83C4B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B468"))) PPC_WEAK_FUNC(sub_83C4B468);
PPC_FUNC_IMPL(__imp__sub_83C4B468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B474"))) PPC_WEAK_FUNC(sub_83C4B474);
PPC_FUNC_IMPL(__imp__sub_83C4B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B478"))) PPC_WEAK_FUNC(sub_83C4B478);
PPC_FUNC_IMPL(__imp__sub_83C4B478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B484"))) PPC_WEAK_FUNC(sub_83C4B484);
PPC_FUNC_IMPL(__imp__sub_83C4B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B488"))) PPC_WEAK_FUNC(sub_83C4B488);
PPC_FUNC_IMPL(__imp__sub_83C4B488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B494"))) PPC_WEAK_FUNC(sub_83C4B494);
PPC_FUNC_IMPL(__imp__sub_83C4B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B498"))) PPC_WEAK_FUNC(sub_83C4B498);
PPC_FUNC_IMPL(__imp__sub_83C4B498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4A4"))) PPC_WEAK_FUNC(sub_83C4B4A4);
PPC_FUNC_IMPL(__imp__sub_83C4B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4A8"))) PPC_WEAK_FUNC(sub_83C4B4A8);
PPC_FUNC_IMPL(__imp__sub_83C4B4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4B4"))) PPC_WEAK_FUNC(sub_83C4B4B4);
PPC_FUNC_IMPL(__imp__sub_83C4B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4B8"))) PPC_WEAK_FUNC(sub_83C4B4B8);
PPC_FUNC_IMPL(__imp__sub_83C4B4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13848
	ctx.r3.s64 = ctx.r11.s64 + -13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4C4"))) PPC_WEAK_FUNC(sub_83C4B4C4);
PPC_FUNC_IMPL(__imp__sub_83C4B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4C8"))) PPC_WEAK_FUNC(sub_83C4B4C8);
PPC_FUNC_IMPL(__imp__sub_83C4B4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4D4"))) PPC_WEAK_FUNC(sub_83C4B4D4);
PPC_FUNC_IMPL(__imp__sub_83C4B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4D8"))) PPC_WEAK_FUNC(sub_83C4B4D8);
PPC_FUNC_IMPL(__imp__sub_83C4B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4E4"))) PPC_WEAK_FUNC(sub_83C4B4E4);
PPC_FUNC_IMPL(__imp__sub_83C4B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4E8"))) PPC_WEAK_FUNC(sub_83C4B4E8);
PPC_FUNC_IMPL(__imp__sub_83C4B4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B4F4"))) PPC_WEAK_FUNC(sub_83C4B4F4);
PPC_FUNC_IMPL(__imp__sub_83C4B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B4F8"))) PPC_WEAK_FUNC(sub_83C4B4F8);
PPC_FUNC_IMPL(__imp__sub_83C4B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4656
	ctx.r7.s64 = ctx.r8.s64 + 4656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B520"))) PPC_WEAK_FUNC(sub_83C4B520);
PPC_FUNC_IMPL(__imp__sub_83C4B520) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3304
	ctx.r6.s64 = ctx.r7.s64 + 3304;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4656);
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
	// std r9,3304(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3304, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B568"))) PPC_WEAK_FUNC(sub_83C4B568);
PPC_FUNC_IMPL(__imp__sub_83C4B568) {
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
	// addi r3,r11,4640
	ctx.r3.s64 = ctx.r11.s64 + 4640;
	// bl 0x83523120
	ctx.lr = 0x83C4B580;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13816
	ctx.r3.s64 = ctx.r10.s64 + -13816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B58C;
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

__attribute__((alias("__imp__sub_83C4B59C"))) PPC_WEAK_FUNC(sub_83C4B59C);
PPC_FUNC_IMPL(__imp__sub_83C4B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B5A0"))) PPC_WEAK_FUNC(sub_83C4B5A0);
PPC_FUNC_IMPL(__imp__sub_83C4B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B5AC"))) PPC_WEAK_FUNC(sub_83C4B5AC);
PPC_FUNC_IMPL(__imp__sub_83C4B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B5B0"))) PPC_WEAK_FUNC(sub_83C4B5B0);
PPC_FUNC_IMPL(__imp__sub_83C4B5B0) {
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
	// addi r3,r11,4664
	ctx.r3.s64 = ctx.r11.s64 + 4664;
	// bl 0x8259af80
	ctx.lr = 0x83C4B5C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13784
	ctx.r3.s64 = ctx.r10.s64 + -13784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B5D4;
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

__attribute__((alias("__imp__sub_83C4B5E4"))) PPC_WEAK_FUNC(sub_83C4B5E4);
PPC_FUNC_IMPL(__imp__sub_83C4B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B5E8"))) PPC_WEAK_FUNC(sub_83C4B5E8);
PPC_FUNC_IMPL(__imp__sub_83C4B5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4644
	ctx.r11.s64 = ctx.r8.s64 + 4644;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13792
	ctx.r3.s64 = ctx.r6.s64 + -13792;
	// stw r10,4644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4644, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B618"))) PPC_WEAK_FUNC(sub_83C4B618);
PPC_FUNC_IMPL(__imp__sub_83C4B618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13776
	ctx.r3.s64 = ctx.r11.s64 + -13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B624"))) PPC_WEAK_FUNC(sub_83C4B624);
PPC_FUNC_IMPL(__imp__sub_83C4B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B628"))) PPC_WEAK_FUNC(sub_83C4B628);
PPC_FUNC_IMPL(__imp__sub_83C4B628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B634"))) PPC_WEAK_FUNC(sub_83C4B634);
PPC_FUNC_IMPL(__imp__sub_83C4B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B638"))) PPC_WEAK_FUNC(sub_83C4B638);
PPC_FUNC_IMPL(__imp__sub_83C4B638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13760
	ctx.r3.s64 = ctx.r11.s64 + -13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B644"))) PPC_WEAK_FUNC(sub_83C4B644);
PPC_FUNC_IMPL(__imp__sub_83C4B644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B648"))) PPC_WEAK_FUNC(sub_83C4B648);
PPC_FUNC_IMPL(__imp__sub_83C4B648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13752
	ctx.r3.s64 = ctx.r11.s64 + -13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B654"))) PPC_WEAK_FUNC(sub_83C4B654);
PPC_FUNC_IMPL(__imp__sub_83C4B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B658"))) PPC_WEAK_FUNC(sub_83C4B658);
PPC_FUNC_IMPL(__imp__sub_83C4B658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13744
	ctx.r3.s64 = ctx.r11.s64 + -13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B664"))) PPC_WEAK_FUNC(sub_83C4B664);
PPC_FUNC_IMPL(__imp__sub_83C4B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B668"))) PPC_WEAK_FUNC(sub_83C4B668);
PPC_FUNC_IMPL(__imp__sub_83C4B668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13736
	ctx.r3.s64 = ctx.r11.s64 + -13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B674"))) PPC_WEAK_FUNC(sub_83C4B674);
PPC_FUNC_IMPL(__imp__sub_83C4B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B678"))) PPC_WEAK_FUNC(sub_83C4B678);
PPC_FUNC_IMPL(__imp__sub_83C4B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B684"))) PPC_WEAK_FUNC(sub_83C4B684);
PPC_FUNC_IMPL(__imp__sub_83C4B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B688"))) PPC_WEAK_FUNC(sub_83C4B688);
PPC_FUNC_IMPL(__imp__sub_83C4B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13720
	ctx.r3.s64 = ctx.r11.s64 + -13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B694"))) PPC_WEAK_FUNC(sub_83C4B694);
PPC_FUNC_IMPL(__imp__sub_83C4B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B698"))) PPC_WEAK_FUNC(sub_83C4B698);
PPC_FUNC_IMPL(__imp__sub_83C4B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B6A4"))) PPC_WEAK_FUNC(sub_83C4B6A4);
PPC_FUNC_IMPL(__imp__sub_83C4B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B6A8"))) PPC_WEAK_FUNC(sub_83C4B6A8);
PPC_FUNC_IMPL(__imp__sub_83C4B6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B6B4"))) PPC_WEAK_FUNC(sub_83C4B6B4);
PPC_FUNC_IMPL(__imp__sub_83C4B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B6B8"))) PPC_WEAK_FUNC(sub_83C4B6B8);
PPC_FUNC_IMPL(__imp__sub_83C4B6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B6C4"))) PPC_WEAK_FUNC(sub_83C4B6C4);
PPC_FUNC_IMPL(__imp__sub_83C4B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B6C8"))) PPC_WEAK_FUNC(sub_83C4B6C8);
PPC_FUNC_IMPL(__imp__sub_83C4B6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13688
	ctx.r3.s64 = ctx.r11.s64 + -13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B6D4"))) PPC_WEAK_FUNC(sub_83C4B6D4);
PPC_FUNC_IMPL(__imp__sub_83C4B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B6D8"))) PPC_WEAK_FUNC(sub_83C4B6D8);
PPC_FUNC_IMPL(__imp__sub_83C4B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5024
	ctx.r7.s64 = ctx.r8.s64 + 5024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B700"))) PPC_WEAK_FUNC(sub_83C4B700);
PPC_FUNC_IMPL(__imp__sub_83C4B700) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3444
	ctx.r6.s64 = ctx.r7.s64 + 3444;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5024);
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
	// std r9,3444(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3444, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B748"))) PPC_WEAK_FUNC(sub_83C4B748);
PPC_FUNC_IMPL(__imp__sub_83C4B748) {
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
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// bl 0x83523120
	ctx.lr = 0x83C4B760;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13680
	ctx.r3.s64 = ctx.r10.s64 + -13680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B76C;
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

__attribute__((alias("__imp__sub_83C4B77C"))) PPC_WEAK_FUNC(sub_83C4B77C);
PPC_FUNC_IMPL(__imp__sub_83C4B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B780"))) PPC_WEAK_FUNC(sub_83C4B780);
PPC_FUNC_IMPL(__imp__sub_83C4B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B78C"))) PPC_WEAK_FUNC(sub_83C4B78C);
PPC_FUNC_IMPL(__imp__sub_83C4B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B790"))) PPC_WEAK_FUNC(sub_83C4B790);
PPC_FUNC_IMPL(__imp__sub_83C4B790) {
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
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// bl 0x8259af80
	ctx.lr = 0x83C4B7A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13648
	ctx.r3.s64 = ctx.r10.s64 + -13648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B7B4;
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

__attribute__((alias("__imp__sub_83C4B7C4"))) PPC_WEAK_FUNC(sub_83C4B7C4);
PPC_FUNC_IMPL(__imp__sub_83C4B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B7C8"))) PPC_WEAK_FUNC(sub_83C4B7C8);
PPC_FUNC_IMPL(__imp__sub_83C4B7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5012
	ctx.r11.s64 = ctx.r8.s64 + 5012;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13656
	ctx.r3.s64 = ctx.r6.s64 + -13656;
	// stw r10,5012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B7F8"))) PPC_WEAK_FUNC(sub_83C4B7F8);
PPC_FUNC_IMPL(__imp__sub_83C4B7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13640
	ctx.r3.s64 = ctx.r11.s64 + -13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B804"))) PPC_WEAK_FUNC(sub_83C4B804);
PPC_FUNC_IMPL(__imp__sub_83C4B804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B808"))) PPC_WEAK_FUNC(sub_83C4B808);
PPC_FUNC_IMPL(__imp__sub_83C4B808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B814"))) PPC_WEAK_FUNC(sub_83C4B814);
PPC_FUNC_IMPL(__imp__sub_83C4B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B818"))) PPC_WEAK_FUNC(sub_83C4B818);
PPC_FUNC_IMPL(__imp__sub_83C4B818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B824"))) PPC_WEAK_FUNC(sub_83C4B824);
PPC_FUNC_IMPL(__imp__sub_83C4B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B828"))) PPC_WEAK_FUNC(sub_83C4B828);
PPC_FUNC_IMPL(__imp__sub_83C4B828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B834"))) PPC_WEAK_FUNC(sub_83C4B834);
PPC_FUNC_IMPL(__imp__sub_83C4B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B838"))) PPC_WEAK_FUNC(sub_83C4B838);
PPC_FUNC_IMPL(__imp__sub_83C4B838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13608
	ctx.r3.s64 = ctx.r11.s64 + -13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B844"))) PPC_WEAK_FUNC(sub_83C4B844);
PPC_FUNC_IMPL(__imp__sub_83C4B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B848"))) PPC_WEAK_FUNC(sub_83C4B848);
PPC_FUNC_IMPL(__imp__sub_83C4B848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B854"))) PPC_WEAK_FUNC(sub_83C4B854);
PPC_FUNC_IMPL(__imp__sub_83C4B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B858"))) PPC_WEAK_FUNC(sub_83C4B858);
PPC_FUNC_IMPL(__imp__sub_83C4B858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B864"))) PPC_WEAK_FUNC(sub_83C4B864);
PPC_FUNC_IMPL(__imp__sub_83C4B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B868"))) PPC_WEAK_FUNC(sub_83C4B868);
PPC_FUNC_IMPL(__imp__sub_83C4B868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B874"))) PPC_WEAK_FUNC(sub_83C4B874);
PPC_FUNC_IMPL(__imp__sub_83C4B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B878"))) PPC_WEAK_FUNC(sub_83C4B878);
PPC_FUNC_IMPL(__imp__sub_83C4B878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B884"))) PPC_WEAK_FUNC(sub_83C4B884);
PPC_FUNC_IMPL(__imp__sub_83C4B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B888"))) PPC_WEAK_FUNC(sub_83C4B888);
PPC_FUNC_IMPL(__imp__sub_83C4B888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B894"))) PPC_WEAK_FUNC(sub_83C4B894);
PPC_FUNC_IMPL(__imp__sub_83C4B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B898"))) PPC_WEAK_FUNC(sub_83C4B898);
PPC_FUNC_IMPL(__imp__sub_83C4B898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B8A4"))) PPC_WEAK_FUNC(sub_83C4B8A4);
PPC_FUNC_IMPL(__imp__sub_83C4B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B8A8"))) PPC_WEAK_FUNC(sub_83C4B8A8);
PPC_FUNC_IMPL(__imp__sub_83C4B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B8B4"))) PPC_WEAK_FUNC(sub_83C4B8B4);
PPC_FUNC_IMPL(__imp__sub_83C4B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B8B8"))) PPC_WEAK_FUNC(sub_83C4B8B8);
PPC_FUNC_IMPL(__imp__sub_83C4B8B8) {
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
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// bl 0x83523120
	ctx.lr = 0x83C4B8D0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13544
	ctx.r3.s64 = ctx.r10.s64 + -13544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B8DC;
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

__attribute__((alias("__imp__sub_83C4B8EC"))) PPC_WEAK_FUNC(sub_83C4B8EC);
PPC_FUNC_IMPL(__imp__sub_83C4B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B8F0"))) PPC_WEAK_FUNC(sub_83C4B8F0);
PPC_FUNC_IMPL(__imp__sub_83C4B8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5392
	ctx.r7.s64 = ctx.r8.s64 + 5392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B918"))) PPC_WEAK_FUNC(sub_83C4B918);
PPC_FUNC_IMPL(__imp__sub_83C4B918) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3572
	ctx.r6.s64 = ctx.r7.s64 + 3572;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
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
	// std r9,3572(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4B960"))) PPC_WEAK_FUNC(sub_83C4B960);
PPC_FUNC_IMPL(__imp__sub_83C4B960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B96C"))) PPC_WEAK_FUNC(sub_83C4B96C);
PPC_FUNC_IMPL(__imp__sub_83C4B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B970"))) PPC_WEAK_FUNC(sub_83C4B970);
PPC_FUNC_IMPL(__imp__sub_83C4B970) {
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
	// addi r3,r11,5400
	ctx.r3.s64 = ctx.r11.s64 + 5400;
	// bl 0x8259af80
	ctx.lr = 0x83C4B988;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13512
	ctx.r3.s64 = ctx.r10.s64 + -13512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4B994;
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

__attribute__((alias("__imp__sub_83C4B9A4"))) PPC_WEAK_FUNC(sub_83C4B9A4);
PPC_FUNC_IMPL(__imp__sub_83C4B9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B9A8"))) PPC_WEAK_FUNC(sub_83C4B9A8);
PPC_FUNC_IMPL(__imp__sub_83C4B9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5380
	ctx.r11.s64 = ctx.r8.s64 + 5380;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13520
	ctx.r3.s64 = ctx.r6.s64 + -13520;
	// stw r10,5380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B9D8"))) PPC_WEAK_FUNC(sub_83C4B9D8);
PPC_FUNC_IMPL(__imp__sub_83C4B9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B9E4"))) PPC_WEAK_FUNC(sub_83C4B9E4);
PPC_FUNC_IMPL(__imp__sub_83C4B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B9E8"))) PPC_WEAK_FUNC(sub_83C4B9E8);
PPC_FUNC_IMPL(__imp__sub_83C4B9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4B9F4"))) PPC_WEAK_FUNC(sub_83C4B9F4);
PPC_FUNC_IMPL(__imp__sub_83C4B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4B9F8"))) PPC_WEAK_FUNC(sub_83C4B9F8);
PPC_FUNC_IMPL(__imp__sub_83C4B9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA04"))) PPC_WEAK_FUNC(sub_83C4BA04);
PPC_FUNC_IMPL(__imp__sub_83C4BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA08"))) PPC_WEAK_FUNC(sub_83C4BA08);
PPC_FUNC_IMPL(__imp__sub_83C4BA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13480
	ctx.r3.s64 = ctx.r11.s64 + -13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA14"))) PPC_WEAK_FUNC(sub_83C4BA14);
PPC_FUNC_IMPL(__imp__sub_83C4BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA18"))) PPC_WEAK_FUNC(sub_83C4BA18);
PPC_FUNC_IMPL(__imp__sub_83C4BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA24"))) PPC_WEAK_FUNC(sub_83C4BA24);
PPC_FUNC_IMPL(__imp__sub_83C4BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA28"))) PPC_WEAK_FUNC(sub_83C4BA28);
PPC_FUNC_IMPL(__imp__sub_83C4BA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA34"))) PPC_WEAK_FUNC(sub_83C4BA34);
PPC_FUNC_IMPL(__imp__sub_83C4BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA38"))) PPC_WEAK_FUNC(sub_83C4BA38);
PPC_FUNC_IMPL(__imp__sub_83C4BA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA44"))) PPC_WEAK_FUNC(sub_83C4BA44);
PPC_FUNC_IMPL(__imp__sub_83C4BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA48"))) PPC_WEAK_FUNC(sub_83C4BA48);
PPC_FUNC_IMPL(__imp__sub_83C4BA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA54"))) PPC_WEAK_FUNC(sub_83C4BA54);
PPC_FUNC_IMPL(__imp__sub_83C4BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA58"))) PPC_WEAK_FUNC(sub_83C4BA58);
PPC_FUNC_IMPL(__imp__sub_83C4BA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA64"))) PPC_WEAK_FUNC(sub_83C4BA64);
PPC_FUNC_IMPL(__imp__sub_83C4BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA68"))) PPC_WEAK_FUNC(sub_83C4BA68);
PPC_FUNC_IMPL(__imp__sub_83C4BA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA74"))) PPC_WEAK_FUNC(sub_83C4BA74);
PPC_FUNC_IMPL(__imp__sub_83C4BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA78"))) PPC_WEAK_FUNC(sub_83C4BA78);
PPC_FUNC_IMPL(__imp__sub_83C4BA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA84"))) PPC_WEAK_FUNC(sub_83C4BA84);
PPC_FUNC_IMPL(__imp__sub_83C4BA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA88"))) PPC_WEAK_FUNC(sub_83C4BA88);
PPC_FUNC_IMPL(__imp__sub_83C4BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BA94"))) PPC_WEAK_FUNC(sub_83C4BA94);
PPC_FUNC_IMPL(__imp__sub_83C4BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BA98"))) PPC_WEAK_FUNC(sub_83C4BA98);
PPC_FUNC_IMPL(__imp__sub_83C4BA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAA4"))) PPC_WEAK_FUNC(sub_83C4BAA4);
PPC_FUNC_IMPL(__imp__sub_83C4BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAA8"))) PPC_WEAK_FUNC(sub_83C4BAA8);
PPC_FUNC_IMPL(__imp__sub_83C4BAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAB4"))) PPC_WEAK_FUNC(sub_83C4BAB4);
PPC_FUNC_IMPL(__imp__sub_83C4BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAB8"))) PPC_WEAK_FUNC(sub_83C4BAB8);
PPC_FUNC_IMPL(__imp__sub_83C4BAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAC4"))) PPC_WEAK_FUNC(sub_83C4BAC4);
PPC_FUNC_IMPL(__imp__sub_83C4BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAC8"))) PPC_WEAK_FUNC(sub_83C4BAC8);
PPC_FUNC_IMPL(__imp__sub_83C4BAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAD4"))) PPC_WEAK_FUNC(sub_83C4BAD4);
PPC_FUNC_IMPL(__imp__sub_83C4BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAD8"))) PPC_WEAK_FUNC(sub_83C4BAD8);
PPC_FUNC_IMPL(__imp__sub_83C4BAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAE4"))) PPC_WEAK_FUNC(sub_83C4BAE4);
PPC_FUNC_IMPL(__imp__sub_83C4BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAE8"))) PPC_WEAK_FUNC(sub_83C4BAE8);
PPC_FUNC_IMPL(__imp__sub_83C4BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13368
	ctx.r3.s64 = ctx.r11.s64 + -13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BAF4"))) PPC_WEAK_FUNC(sub_83C4BAF4);
PPC_FUNC_IMPL(__imp__sub_83C4BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BAF8"))) PPC_WEAK_FUNC(sub_83C4BAF8);
PPC_FUNC_IMPL(__imp__sub_83C4BAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB04"))) PPC_WEAK_FUNC(sub_83C4BB04);
PPC_FUNC_IMPL(__imp__sub_83C4BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB08"))) PPC_WEAK_FUNC(sub_83C4BB08);
PPC_FUNC_IMPL(__imp__sub_83C4BB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB14"))) PPC_WEAK_FUNC(sub_83C4BB14);
PPC_FUNC_IMPL(__imp__sub_83C4BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB18"))) PPC_WEAK_FUNC(sub_83C4BB18);
PPC_FUNC_IMPL(__imp__sub_83C4BB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB24"))) PPC_WEAK_FUNC(sub_83C4BB24);
PPC_FUNC_IMPL(__imp__sub_83C4BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB28"))) PPC_WEAK_FUNC(sub_83C4BB28);
PPC_FUNC_IMPL(__imp__sub_83C4BB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB34"))) PPC_WEAK_FUNC(sub_83C4BB34);
PPC_FUNC_IMPL(__imp__sub_83C4BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB38"))) PPC_WEAK_FUNC(sub_83C4BB38);
PPC_FUNC_IMPL(__imp__sub_83C4BB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB44"))) PPC_WEAK_FUNC(sub_83C4BB44);
PPC_FUNC_IMPL(__imp__sub_83C4BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB48"))) PPC_WEAK_FUNC(sub_83C4BB48);
PPC_FUNC_IMPL(__imp__sub_83C4BB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BB54"))) PPC_WEAK_FUNC(sub_83C4BB54);
PPC_FUNC_IMPL(__imp__sub_83C4BB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BB58"))) PPC_WEAK_FUNC(sub_83C4BB58);
PPC_FUNC_IMPL(__imp__sub_83C4BB58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5768
	ctx.r7.s64 = ctx.r8.s64 + 5768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BB80"))) PPC_WEAK_FUNC(sub_83C4BB80);
PPC_FUNC_IMPL(__imp__sub_83C4BB80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3804
	ctx.r6.s64 = ctx.r7.s64 + 3804;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
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
	// std r9,3804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BBC8"))) PPC_WEAK_FUNC(sub_83C4BBC8);
PPC_FUNC_IMPL(__imp__sub_83C4BBC8) {
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
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// bl 0x83523120
	ctx.lr = 0x83C4BBE0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13312
	ctx.r3.s64 = ctx.r10.s64 + -13312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BBEC;
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

__attribute__((alias("__imp__sub_83C4BBFC"))) PPC_WEAK_FUNC(sub_83C4BBFC);
PPC_FUNC_IMPL(__imp__sub_83C4BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BC00"))) PPC_WEAK_FUNC(sub_83C4BC00);
PPC_FUNC_IMPL(__imp__sub_83C4BC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13296
	ctx.r3.s64 = ctx.r11.s64 + -13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BC0C"))) PPC_WEAK_FUNC(sub_83C4BC0C);
PPC_FUNC_IMPL(__imp__sub_83C4BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BC10"))) PPC_WEAK_FUNC(sub_83C4BC10);
PPC_FUNC_IMPL(__imp__sub_83C4BC10) {
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
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// bl 0x8259af80
	ctx.lr = 0x83C4BC28;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13280
	ctx.r3.s64 = ctx.r10.s64 + -13280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BC34;
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

__attribute__((alias("__imp__sub_83C4BC44"))) PPC_WEAK_FUNC(sub_83C4BC44);
PPC_FUNC_IMPL(__imp__sub_83C4BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BC48"))) PPC_WEAK_FUNC(sub_83C4BC48);
PPC_FUNC_IMPL(__imp__sub_83C4BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5756
	ctx.r11.s64 = ctx.r8.s64 + 5756;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13288
	ctx.r3.s64 = ctx.r6.s64 + -13288;
	// stw r10,5756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BC78"))) PPC_WEAK_FUNC(sub_83C4BC78);
PPC_FUNC_IMPL(__imp__sub_83C4BC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BC84"))) PPC_WEAK_FUNC(sub_83C4BC84);
PPC_FUNC_IMPL(__imp__sub_83C4BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BC88"))) PPC_WEAK_FUNC(sub_83C4BC88);
PPC_FUNC_IMPL(__imp__sub_83C4BC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BC94"))) PPC_WEAK_FUNC(sub_83C4BC94);
PPC_FUNC_IMPL(__imp__sub_83C4BC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BC98"))) PPC_WEAK_FUNC(sub_83C4BC98);
PPC_FUNC_IMPL(__imp__sub_83C4BC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCA4"))) PPC_WEAK_FUNC(sub_83C4BCA4);
PPC_FUNC_IMPL(__imp__sub_83C4BCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCA8"))) PPC_WEAK_FUNC(sub_83C4BCA8);
PPC_FUNC_IMPL(__imp__sub_83C4BCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCB4"))) PPC_WEAK_FUNC(sub_83C4BCB4);
PPC_FUNC_IMPL(__imp__sub_83C4BCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCB8"))) PPC_WEAK_FUNC(sub_83C4BCB8);
PPC_FUNC_IMPL(__imp__sub_83C4BCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCC4"))) PPC_WEAK_FUNC(sub_83C4BCC4);
PPC_FUNC_IMPL(__imp__sub_83C4BCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCC8"))) PPC_WEAK_FUNC(sub_83C4BCC8);
PPC_FUNC_IMPL(__imp__sub_83C4BCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCD4"))) PPC_WEAK_FUNC(sub_83C4BCD4);
PPC_FUNC_IMPL(__imp__sub_83C4BCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCD8"))) PPC_WEAK_FUNC(sub_83C4BCD8);
PPC_FUNC_IMPL(__imp__sub_83C4BCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCE4"))) PPC_WEAK_FUNC(sub_83C4BCE4);
PPC_FUNC_IMPL(__imp__sub_83C4BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCE8"))) PPC_WEAK_FUNC(sub_83C4BCE8);
PPC_FUNC_IMPL(__imp__sub_83C4BCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BCF4"))) PPC_WEAK_FUNC(sub_83C4BCF4);
PPC_FUNC_IMPL(__imp__sub_83C4BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BCF8"))) PPC_WEAK_FUNC(sub_83C4BCF8);
PPC_FUNC_IMPL(__imp__sub_83C4BCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13208
	ctx.r3.s64 = ctx.r11.s64 + -13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BD04"))) PPC_WEAK_FUNC(sub_83C4BD04);
PPC_FUNC_IMPL(__imp__sub_83C4BD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BD08"))) PPC_WEAK_FUNC(sub_83C4BD08);
PPC_FUNC_IMPL(__imp__sub_83C4BD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BD14"))) PPC_WEAK_FUNC(sub_83C4BD14);
PPC_FUNC_IMPL(__imp__sub_83C4BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BD18"))) PPC_WEAK_FUNC(sub_83C4BD18);
PPC_FUNC_IMPL(__imp__sub_83C4BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13192
	ctx.r3.s64 = ctx.r11.s64 + -13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BD24"))) PPC_WEAK_FUNC(sub_83C4BD24);
PPC_FUNC_IMPL(__imp__sub_83C4BD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BD28"))) PPC_WEAK_FUNC(sub_83C4BD28);
PPC_FUNC_IMPL(__imp__sub_83C4BD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13184
	ctx.r3.s64 = ctx.r11.s64 + -13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BD34"))) PPC_WEAK_FUNC(sub_83C4BD34);
PPC_FUNC_IMPL(__imp__sub_83C4BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BD38"))) PPC_WEAK_FUNC(sub_83C4BD38);
PPC_FUNC_IMPL(__imp__sub_83C4BD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6136
	ctx.r7.s64 = ctx.r8.s64 + 6136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BD60"))) PPC_WEAK_FUNC(sub_83C4BD60);
PPC_FUNC_IMPL(__imp__sub_83C4BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,3932
	ctx.r6.s64 = ctx.r7.s64 + 3932;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3860(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3860);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6136);
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
	// std r9,3932(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3932, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BDA8"))) PPC_WEAK_FUNC(sub_83C4BDA8);
PPC_FUNC_IMPL(__imp__sub_83C4BDA8) {
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
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// bl 0x83523120
	ctx.lr = 0x83C4BDC0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13176
	ctx.r3.s64 = ctx.r10.s64 + -13176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BDCC;
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

