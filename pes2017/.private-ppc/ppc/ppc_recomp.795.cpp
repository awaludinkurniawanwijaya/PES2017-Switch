#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C52E14"))) PPC_WEAK_FUNC(sub_83C52E14);
PPC_FUNC_IMPL(__imp__sub_83C52E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52E18"))) PPC_WEAK_FUNC(sub_83C52E18);
PPC_FUNC_IMPL(__imp__sub_83C52E18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26816
	ctx.r7.s64 = ctx.r8.s64 + 26816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52E40"))) PPC_WEAK_FUNC(sub_83C52E40);
PPC_FUNC_IMPL(__imp__sub_83C52E40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,12508
	ctx.r6.s64 = ctx.r7.s64 + 12508;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12436(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12436);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26816);
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
	// std r9,12508(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12508, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52E88"))) PPC_WEAK_FUNC(sub_83C52E88);
PPC_FUNC_IMPL(__imp__sub_83C52E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52E94"))) PPC_WEAK_FUNC(sub_83C52E94);
PPC_FUNC_IMPL(__imp__sub_83C52E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52E98"))) PPC_WEAK_FUNC(sub_83C52E98);
PPC_FUNC_IMPL(__imp__sub_83C52E98) {
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
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// bl 0x8259af80
	ctx.lr = 0x83C52EB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4296
	ctx.r3.s64 = ctx.r10.s64 + -4296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52EBC;
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

__attribute__((alias("__imp__sub_83C52ECC"))) PPC_WEAK_FUNC(sub_83C52ECC);
PPC_FUNC_IMPL(__imp__sub_83C52ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52ED0"))) PPC_WEAK_FUNC(sub_83C52ED0);
PPC_FUNC_IMPL(__imp__sub_83C52ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26804
	ctx.r11.s64 = ctx.r8.s64 + 26804;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,12484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12484);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4304
	ctx.r3.s64 = ctx.r6.s64 + -4304;
	// stw r10,26804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26804, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F00"))) PPC_WEAK_FUNC(sub_83C52F00);
PPC_FUNC_IMPL(__imp__sub_83C52F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F0C"))) PPC_WEAK_FUNC(sub_83C52F0C);
PPC_FUNC_IMPL(__imp__sub_83C52F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F10"))) PPC_WEAK_FUNC(sub_83C52F10);
PPC_FUNC_IMPL(__imp__sub_83C52F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F1C"))) PPC_WEAK_FUNC(sub_83C52F1C);
PPC_FUNC_IMPL(__imp__sub_83C52F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F20"))) PPC_WEAK_FUNC(sub_83C52F20);
PPC_FUNC_IMPL(__imp__sub_83C52F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F2C"))) PPC_WEAK_FUNC(sub_83C52F2C);
PPC_FUNC_IMPL(__imp__sub_83C52F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F30"))) PPC_WEAK_FUNC(sub_83C52F30);
PPC_FUNC_IMPL(__imp__sub_83C52F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F3C"))) PPC_WEAK_FUNC(sub_83C52F3C);
PPC_FUNC_IMPL(__imp__sub_83C52F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F40"))) PPC_WEAK_FUNC(sub_83C52F40);
PPC_FUNC_IMPL(__imp__sub_83C52F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F4C"))) PPC_WEAK_FUNC(sub_83C52F4C);
PPC_FUNC_IMPL(__imp__sub_83C52F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F50"))) PPC_WEAK_FUNC(sub_83C52F50);
PPC_FUNC_IMPL(__imp__sub_83C52F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4248
	ctx.r3.s64 = ctx.r11.s64 + -4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F5C"))) PPC_WEAK_FUNC(sub_83C52F5C);
PPC_FUNC_IMPL(__imp__sub_83C52F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F60"))) PPC_WEAK_FUNC(sub_83C52F60);
PPC_FUNC_IMPL(__imp__sub_83C52F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F6C"))) PPC_WEAK_FUNC(sub_83C52F6C);
PPC_FUNC_IMPL(__imp__sub_83C52F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F70"))) PPC_WEAK_FUNC(sub_83C52F70);
PPC_FUNC_IMPL(__imp__sub_83C52F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4232
	ctx.r3.s64 = ctx.r11.s64 + -4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F7C"))) PPC_WEAK_FUNC(sub_83C52F7C);
PPC_FUNC_IMPL(__imp__sub_83C52F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F80"))) PPC_WEAK_FUNC(sub_83C52F80);
PPC_FUNC_IMPL(__imp__sub_83C52F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F8C"))) PPC_WEAK_FUNC(sub_83C52F8C);
PPC_FUNC_IMPL(__imp__sub_83C52F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52F90"))) PPC_WEAK_FUNC(sub_83C52F90);
PPC_FUNC_IMPL(__imp__sub_83C52F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4216
	ctx.r3.s64 = ctx.r11.s64 + -4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52F9C"))) PPC_WEAK_FUNC(sub_83C52F9C);
PPC_FUNC_IMPL(__imp__sub_83C52F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52FA0"))) PPC_WEAK_FUNC(sub_83C52FA0);
PPC_FUNC_IMPL(__imp__sub_83C52FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52FAC"))) PPC_WEAK_FUNC(sub_83C52FAC);
PPC_FUNC_IMPL(__imp__sub_83C52FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52FB0"))) PPC_WEAK_FUNC(sub_83C52FB0);
PPC_FUNC_IMPL(__imp__sub_83C52FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52FBC"))) PPC_WEAK_FUNC(sub_83C52FBC);
PPC_FUNC_IMPL(__imp__sub_83C52FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52FC0"))) PPC_WEAK_FUNC(sub_83C52FC0);
PPC_FUNC_IMPL(__imp__sub_83C52FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27184
	ctx.r7.s64 = ctx.r8.s64 + 27184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52FE8"))) PPC_WEAK_FUNC(sub_83C52FE8);
PPC_FUNC_IMPL(__imp__sub_83C52FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,12644
	ctx.r6.s64 = ctx.r7.s64 + 12644;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12572(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12572);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27184);
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
	// std r9,12644(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12644, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53030"))) PPC_WEAK_FUNC(sub_83C53030);
PPC_FUNC_IMPL(__imp__sub_83C53030) {
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
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// bl 0x83523120
	ctx.lr = 0x83C53048;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4192
	ctx.r3.s64 = ctx.r10.s64 + -4192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53054;
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

__attribute__((alias("__imp__sub_83C53064"))) PPC_WEAK_FUNC(sub_83C53064);
PPC_FUNC_IMPL(__imp__sub_83C53064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53068"))) PPC_WEAK_FUNC(sub_83C53068);
PPC_FUNC_IMPL(__imp__sub_83C53068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4176
	ctx.r3.s64 = ctx.r11.s64 + -4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53074"))) PPC_WEAK_FUNC(sub_83C53074);
PPC_FUNC_IMPL(__imp__sub_83C53074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53078"))) PPC_WEAK_FUNC(sub_83C53078);
PPC_FUNC_IMPL(__imp__sub_83C53078) {
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
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// bl 0x8259af80
	ctx.lr = 0x83C53090;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4160
	ctx.r3.s64 = ctx.r10.s64 + -4160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5309C;
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

__attribute__((alias("__imp__sub_83C530AC"))) PPC_WEAK_FUNC(sub_83C530AC);
PPC_FUNC_IMPL(__imp__sub_83C530AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C530B0"))) PPC_WEAK_FUNC(sub_83C530B0);
PPC_FUNC_IMPL(__imp__sub_83C530B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27172
	ctx.r11.s64 = ctx.r8.s64 + 27172;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,12620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12620);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4168
	ctx.r3.s64 = ctx.r6.s64 + -4168;
	// stw r10,27172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27172, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C530E0"))) PPC_WEAK_FUNC(sub_83C530E0);
PPC_FUNC_IMPL(__imp__sub_83C530E0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,12304
	ctx.r4.s64 = ctx.r11.s64 + 12304;
	// addi r3,r10,12668
	ctx.r3.s64 = ctx.r10.s64 + 12668;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C53104;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-4152
	ctx.r3.s64 = ctx.r9.s64 + -4152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53110;
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

__attribute__((alias("__imp__sub_83C53120"))) PPC_WEAK_FUNC(sub_83C53120);
PPC_FUNC_IMPL(__imp__sub_83C53120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5312C"))) PPC_WEAK_FUNC(sub_83C5312C);
PPC_FUNC_IMPL(__imp__sub_83C5312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53130"))) PPC_WEAK_FUNC(sub_83C53130);
PPC_FUNC_IMPL(__imp__sub_83C53130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5313C"))) PPC_WEAK_FUNC(sub_83C5313C);
PPC_FUNC_IMPL(__imp__sub_83C5313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53140"))) PPC_WEAK_FUNC(sub_83C53140);
PPC_FUNC_IMPL(__imp__sub_83C53140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4032
	ctx.r3.s64 = ctx.r11.s64 + -4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5314C"))) PPC_WEAK_FUNC(sub_83C5314C);
PPC_FUNC_IMPL(__imp__sub_83C5314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53150"))) PPC_WEAK_FUNC(sub_83C53150);
PPC_FUNC_IMPL(__imp__sub_83C53150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5315C"))) PPC_WEAK_FUNC(sub_83C5315C);
PPC_FUNC_IMPL(__imp__sub_83C5315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53160"))) PPC_WEAK_FUNC(sub_83C53160);
PPC_FUNC_IMPL(__imp__sub_83C53160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5316C"))) PPC_WEAK_FUNC(sub_83C5316C);
PPC_FUNC_IMPL(__imp__sub_83C5316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53170"))) PPC_WEAK_FUNC(sub_83C53170);
PPC_FUNC_IMPL(__imp__sub_83C53170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4008
	ctx.r3.s64 = ctx.r11.s64 + -4008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5317C"))) PPC_WEAK_FUNC(sub_83C5317C);
PPC_FUNC_IMPL(__imp__sub_83C5317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53180"))) PPC_WEAK_FUNC(sub_83C53180);
PPC_FUNC_IMPL(__imp__sub_83C53180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5318C"))) PPC_WEAK_FUNC(sub_83C5318C);
PPC_FUNC_IMPL(__imp__sub_83C5318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53190"))) PPC_WEAK_FUNC(sub_83C53190);
PPC_FUNC_IMPL(__imp__sub_83C53190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5319C"))) PPC_WEAK_FUNC(sub_83C5319C);
PPC_FUNC_IMPL(__imp__sub_83C5319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C531A0"))) PPC_WEAK_FUNC(sub_83C531A0);
PPC_FUNC_IMPL(__imp__sub_83C531A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3984
	ctx.r3.s64 = ctx.r11.s64 + -3984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C531AC"))) PPC_WEAK_FUNC(sub_83C531AC);
PPC_FUNC_IMPL(__imp__sub_83C531AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C531B0"))) PPC_WEAK_FUNC(sub_83C531B0);
PPC_FUNC_IMPL(__imp__sub_83C531B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3976
	ctx.r3.s64 = ctx.r11.s64 + -3976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C531BC"))) PPC_WEAK_FUNC(sub_83C531BC);
PPC_FUNC_IMPL(__imp__sub_83C531BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C531C0"))) PPC_WEAK_FUNC(sub_83C531C0);
PPC_FUNC_IMPL(__imp__sub_83C531C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C531CC"))) PPC_WEAK_FUNC(sub_83C531CC);
PPC_FUNC_IMPL(__imp__sub_83C531CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C531D0"))) PPC_WEAK_FUNC(sub_83C531D0);
PPC_FUNC_IMPL(__imp__sub_83C531D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3960
	ctx.r3.s64 = ctx.r11.s64 + -3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C531DC"))) PPC_WEAK_FUNC(sub_83C531DC);
PPC_FUNC_IMPL(__imp__sub_83C531DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C531E0"))) PPC_WEAK_FUNC(sub_83C531E0);
PPC_FUNC_IMPL(__imp__sub_83C531E0) {
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
	// addi r3,r11,27540
	ctx.r3.s64 = ctx.r11.s64 + 27540;
	// bl 0x83523120
	ctx.lr = 0x83C531F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3952
	ctx.r3.s64 = ctx.r10.s64 + -3952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53204;
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

__attribute__((alias("__imp__sub_83C53214"))) PPC_WEAK_FUNC(sub_83C53214);
PPC_FUNC_IMPL(__imp__sub_83C53214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53218"))) PPC_WEAK_FUNC(sub_83C53218);
PPC_FUNC_IMPL(__imp__sub_83C53218) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27556
	ctx.r7.s64 = ctx.r8.s64 + 27556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27556);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27556, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53240"))) PPC_WEAK_FUNC(sub_83C53240);
PPC_FUNC_IMPL(__imp__sub_83C53240) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,12808
	ctx.r6.s64 = ctx.r7.s64 + 12808;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12736(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12736);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27556(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27556);
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
	// std r9,12808(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12808, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53288"))) PPC_WEAK_FUNC(sub_83C53288);
PPC_FUNC_IMPL(__imp__sub_83C53288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3936
	ctx.r3.s64 = ctx.r11.s64 + -3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53294"))) PPC_WEAK_FUNC(sub_83C53294);
PPC_FUNC_IMPL(__imp__sub_83C53294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53298"))) PPC_WEAK_FUNC(sub_83C53298);
PPC_FUNC_IMPL(__imp__sub_83C53298) {
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
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// bl 0x8259af80
	ctx.lr = 0x83C532B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3920
	ctx.r3.s64 = ctx.r10.s64 + -3920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C532BC;
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

__attribute__((alias("__imp__sub_83C532CC"))) PPC_WEAK_FUNC(sub_83C532CC);
PPC_FUNC_IMPL(__imp__sub_83C532CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C532D0"))) PPC_WEAK_FUNC(sub_83C532D0);
PPC_FUNC_IMPL(__imp__sub_83C532D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27544
	ctx.r11.s64 = ctx.r8.s64 + 27544;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,12784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12784);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3928
	ctx.r3.s64 = ctx.r6.s64 + -3928;
	// stw r10,27544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27544, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53300"))) PPC_WEAK_FUNC(sub_83C53300);
PPC_FUNC_IMPL(__imp__sub_83C53300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5330C"))) PPC_WEAK_FUNC(sub_83C5330C);
PPC_FUNC_IMPL(__imp__sub_83C5330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53310"))) PPC_WEAK_FUNC(sub_83C53310);
PPC_FUNC_IMPL(__imp__sub_83C53310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3904
	ctx.r3.s64 = ctx.r11.s64 + -3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5331C"))) PPC_WEAK_FUNC(sub_83C5331C);
PPC_FUNC_IMPL(__imp__sub_83C5331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53320"))) PPC_WEAK_FUNC(sub_83C53320);
PPC_FUNC_IMPL(__imp__sub_83C53320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3896
	ctx.r3.s64 = ctx.r11.s64 + -3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5332C"))) PPC_WEAK_FUNC(sub_83C5332C);
PPC_FUNC_IMPL(__imp__sub_83C5332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53330"))) PPC_WEAK_FUNC(sub_83C53330);
PPC_FUNC_IMPL(__imp__sub_83C53330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3888
	ctx.r3.s64 = ctx.r11.s64 + -3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5333C"))) PPC_WEAK_FUNC(sub_83C5333C);
PPC_FUNC_IMPL(__imp__sub_83C5333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53340"))) PPC_WEAK_FUNC(sub_83C53340);
PPC_FUNC_IMPL(__imp__sub_83C53340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5334C"))) PPC_WEAK_FUNC(sub_83C5334C);
PPC_FUNC_IMPL(__imp__sub_83C5334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53350"))) PPC_WEAK_FUNC(sub_83C53350);
PPC_FUNC_IMPL(__imp__sub_83C53350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3872
	ctx.r3.s64 = ctx.r11.s64 + -3872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5335C"))) PPC_WEAK_FUNC(sub_83C5335C);
PPC_FUNC_IMPL(__imp__sub_83C5335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53360"))) PPC_WEAK_FUNC(sub_83C53360);
PPC_FUNC_IMPL(__imp__sub_83C53360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3864
	ctx.r3.s64 = ctx.r11.s64 + -3864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5336C"))) PPC_WEAK_FUNC(sub_83C5336C);
PPC_FUNC_IMPL(__imp__sub_83C5336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53370"))) PPC_WEAK_FUNC(sub_83C53370);
PPC_FUNC_IMPL(__imp__sub_83C53370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3856
	ctx.r3.s64 = ctx.r11.s64 + -3856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5337C"))) PPC_WEAK_FUNC(sub_83C5337C);
PPC_FUNC_IMPL(__imp__sub_83C5337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53380"))) PPC_WEAK_FUNC(sub_83C53380);
PPC_FUNC_IMPL(__imp__sub_83C53380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3848
	ctx.r3.s64 = ctx.r11.s64 + -3848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5338C"))) PPC_WEAK_FUNC(sub_83C5338C);
PPC_FUNC_IMPL(__imp__sub_83C5338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53390"))) PPC_WEAK_FUNC(sub_83C53390);
PPC_FUNC_IMPL(__imp__sub_83C53390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3840
	ctx.r3.s64 = ctx.r11.s64 + -3840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5339C"))) PPC_WEAK_FUNC(sub_83C5339C);
PPC_FUNC_IMPL(__imp__sub_83C5339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C533A0"))) PPC_WEAK_FUNC(sub_83C533A0);
PPC_FUNC_IMPL(__imp__sub_83C533A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3832
	ctx.r3.s64 = ctx.r11.s64 + -3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C533AC"))) PPC_WEAK_FUNC(sub_83C533AC);
PPC_FUNC_IMPL(__imp__sub_83C533AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C533B0"))) PPC_WEAK_FUNC(sub_83C533B0);
PPC_FUNC_IMPL(__imp__sub_83C533B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C533BC"))) PPC_WEAK_FUNC(sub_83C533BC);
PPC_FUNC_IMPL(__imp__sub_83C533BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C533C0"))) PPC_WEAK_FUNC(sub_83C533C0);
PPC_FUNC_IMPL(__imp__sub_83C533C0) {
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
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// bl 0x83523120
	ctx.lr = 0x83C533D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3816
	ctx.r3.s64 = ctx.r10.s64 + -3816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C533E4;
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

__attribute__((alias("__imp__sub_83C533F4"))) PPC_WEAK_FUNC(sub_83C533F4);
PPC_FUNC_IMPL(__imp__sub_83C533F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C533F8"))) PPC_WEAK_FUNC(sub_83C533F8);
PPC_FUNC_IMPL(__imp__sub_83C533F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27928
	ctx.r7.s64 = ctx.r8.s64 + 27928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53420"))) PPC_WEAK_FUNC(sub_83C53420);
PPC_FUNC_IMPL(__imp__sub_83C53420) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,12936
	ctx.r6.s64 = ctx.r7.s64 + 12936;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12864(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12864);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27928);
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
	// std r9,12936(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53468"))) PPC_WEAK_FUNC(sub_83C53468);
PPC_FUNC_IMPL(__imp__sub_83C53468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53474"))) PPC_WEAK_FUNC(sub_83C53474);
PPC_FUNC_IMPL(__imp__sub_83C53474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53478"))) PPC_WEAK_FUNC(sub_83C53478);
PPC_FUNC_IMPL(__imp__sub_83C53478) {
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
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// bl 0x8259af80
	ctx.lr = 0x83C53490;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3784
	ctx.r3.s64 = ctx.r10.s64 + -3784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5349C;
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

__attribute__((alias("__imp__sub_83C534AC"))) PPC_WEAK_FUNC(sub_83C534AC);
PPC_FUNC_IMPL(__imp__sub_83C534AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C534B0"))) PPC_WEAK_FUNC(sub_83C534B0);
PPC_FUNC_IMPL(__imp__sub_83C534B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27916
	ctx.r11.s64 = ctx.r8.s64 + 27916;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,12912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3792
	ctx.r3.s64 = ctx.r6.s64 + -3792;
	// stw r10,27916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C534E0"))) PPC_WEAK_FUNC(sub_83C534E0);
PPC_FUNC_IMPL(__imp__sub_83C534E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3776
	ctx.r3.s64 = ctx.r11.s64 + -3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C534EC"))) PPC_WEAK_FUNC(sub_83C534EC);
PPC_FUNC_IMPL(__imp__sub_83C534EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C534F0"))) PPC_WEAK_FUNC(sub_83C534F0);
PPC_FUNC_IMPL(__imp__sub_83C534F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C534FC"))) PPC_WEAK_FUNC(sub_83C534FC);
PPC_FUNC_IMPL(__imp__sub_83C534FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53500"))) PPC_WEAK_FUNC(sub_83C53500);
PPC_FUNC_IMPL(__imp__sub_83C53500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5350C"))) PPC_WEAK_FUNC(sub_83C5350C);
PPC_FUNC_IMPL(__imp__sub_83C5350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53510"))) PPC_WEAK_FUNC(sub_83C53510);
PPC_FUNC_IMPL(__imp__sub_83C53510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3752
	ctx.r3.s64 = ctx.r11.s64 + -3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5351C"))) PPC_WEAK_FUNC(sub_83C5351C);
PPC_FUNC_IMPL(__imp__sub_83C5351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53520"))) PPC_WEAK_FUNC(sub_83C53520);
PPC_FUNC_IMPL(__imp__sub_83C53520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3744
	ctx.r3.s64 = ctx.r11.s64 + -3744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5352C"))) PPC_WEAK_FUNC(sub_83C5352C);
PPC_FUNC_IMPL(__imp__sub_83C5352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53530"))) PPC_WEAK_FUNC(sub_83C53530);
PPC_FUNC_IMPL(__imp__sub_83C53530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3736
	ctx.r3.s64 = ctx.r11.s64 + -3736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5353C"))) PPC_WEAK_FUNC(sub_83C5353C);
PPC_FUNC_IMPL(__imp__sub_83C5353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53540"))) PPC_WEAK_FUNC(sub_83C53540);
PPC_FUNC_IMPL(__imp__sub_83C53540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3728
	ctx.r3.s64 = ctx.r11.s64 + -3728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5354C"))) PPC_WEAK_FUNC(sub_83C5354C);
PPC_FUNC_IMPL(__imp__sub_83C5354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53550"))) PPC_WEAK_FUNC(sub_83C53550);
PPC_FUNC_IMPL(__imp__sub_83C53550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3720
	ctx.r3.s64 = ctx.r11.s64 + -3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5355C"))) PPC_WEAK_FUNC(sub_83C5355C);
PPC_FUNC_IMPL(__imp__sub_83C5355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53560"))) PPC_WEAK_FUNC(sub_83C53560);
PPC_FUNC_IMPL(__imp__sub_83C53560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3712
	ctx.r3.s64 = ctx.r11.s64 + -3712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5356C"))) PPC_WEAK_FUNC(sub_83C5356C);
PPC_FUNC_IMPL(__imp__sub_83C5356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53570"))) PPC_WEAK_FUNC(sub_83C53570);
PPC_FUNC_IMPL(__imp__sub_83C53570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3704
	ctx.r3.s64 = ctx.r11.s64 + -3704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5357C"))) PPC_WEAK_FUNC(sub_83C5357C);
PPC_FUNC_IMPL(__imp__sub_83C5357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53580"))) PPC_WEAK_FUNC(sub_83C53580);
PPC_FUNC_IMPL(__imp__sub_83C53580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3696
	ctx.r3.s64 = ctx.r11.s64 + -3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5358C"))) PPC_WEAK_FUNC(sub_83C5358C);
PPC_FUNC_IMPL(__imp__sub_83C5358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53590"))) PPC_WEAK_FUNC(sub_83C53590);
PPC_FUNC_IMPL(__imp__sub_83C53590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5359C"))) PPC_WEAK_FUNC(sub_83C5359C);
PPC_FUNC_IMPL(__imp__sub_83C5359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C535A0"))) PPC_WEAK_FUNC(sub_83C535A0);
PPC_FUNC_IMPL(__imp__sub_83C535A0) {
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
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// bl 0x83523120
	ctx.lr = 0x83C535B8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3680
	ctx.r3.s64 = ctx.r10.s64 + -3680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C535C4;
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

__attribute__((alias("__imp__sub_83C535D4"))) PPC_WEAK_FUNC(sub_83C535D4);
PPC_FUNC_IMPL(__imp__sub_83C535D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C535D8"))) PPC_WEAK_FUNC(sub_83C535D8);
PPC_FUNC_IMPL(__imp__sub_83C535D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28296
	ctx.r7.s64 = ctx.r8.s64 + 28296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53600"))) PPC_WEAK_FUNC(sub_83C53600);
PPC_FUNC_IMPL(__imp__sub_83C53600) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13064
	ctx.r6.s64 = ctx.r7.s64 + 13064;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12992(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12992);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28296);
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
	// std r9,13064(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53648"))) PPC_WEAK_FUNC(sub_83C53648);
PPC_FUNC_IMPL(__imp__sub_83C53648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53654"))) PPC_WEAK_FUNC(sub_83C53654);
PPC_FUNC_IMPL(__imp__sub_83C53654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53658"))) PPC_WEAK_FUNC(sub_83C53658);
PPC_FUNC_IMPL(__imp__sub_83C53658) {
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
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// bl 0x8259af80
	ctx.lr = 0x83C53670;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3648
	ctx.r3.s64 = ctx.r10.s64 + -3648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5367C;
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

__attribute__((alias("__imp__sub_83C5368C"))) PPC_WEAK_FUNC(sub_83C5368C);
PPC_FUNC_IMPL(__imp__sub_83C5368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53690"))) PPC_WEAK_FUNC(sub_83C53690);
PPC_FUNC_IMPL(__imp__sub_83C53690) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28284
	ctx.r11.s64 = ctx.r8.s64 + 28284;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13040);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3656
	ctx.r3.s64 = ctx.r6.s64 + -3656;
	// stw r10,28284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C536C0"))) PPC_WEAK_FUNC(sub_83C536C0);
PPC_FUNC_IMPL(__imp__sub_83C536C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C536CC"))) PPC_WEAK_FUNC(sub_83C536CC);
PPC_FUNC_IMPL(__imp__sub_83C536CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C536D0"))) PPC_WEAK_FUNC(sub_83C536D0);
PPC_FUNC_IMPL(__imp__sub_83C536D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C536DC"))) PPC_WEAK_FUNC(sub_83C536DC);
PPC_FUNC_IMPL(__imp__sub_83C536DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C536E0"))) PPC_WEAK_FUNC(sub_83C536E0);
PPC_FUNC_IMPL(__imp__sub_83C536E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C536EC"))) PPC_WEAK_FUNC(sub_83C536EC);
PPC_FUNC_IMPL(__imp__sub_83C536EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C536F0"))) PPC_WEAK_FUNC(sub_83C536F0);
PPC_FUNC_IMPL(__imp__sub_83C536F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3616
	ctx.r3.s64 = ctx.r11.s64 + -3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C536FC"))) PPC_WEAK_FUNC(sub_83C536FC);
PPC_FUNC_IMPL(__imp__sub_83C536FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53700"))) PPC_WEAK_FUNC(sub_83C53700);
PPC_FUNC_IMPL(__imp__sub_83C53700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5370C"))) PPC_WEAK_FUNC(sub_83C5370C);
PPC_FUNC_IMPL(__imp__sub_83C5370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53710"))) PPC_WEAK_FUNC(sub_83C53710);
PPC_FUNC_IMPL(__imp__sub_83C53710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5371C"))) PPC_WEAK_FUNC(sub_83C5371C);
PPC_FUNC_IMPL(__imp__sub_83C5371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53720"))) PPC_WEAK_FUNC(sub_83C53720);
PPC_FUNC_IMPL(__imp__sub_83C53720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3592
	ctx.r3.s64 = ctx.r11.s64 + -3592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5372C"))) PPC_WEAK_FUNC(sub_83C5372C);
PPC_FUNC_IMPL(__imp__sub_83C5372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53730"))) PPC_WEAK_FUNC(sub_83C53730);
PPC_FUNC_IMPL(__imp__sub_83C53730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5373C"))) PPC_WEAK_FUNC(sub_83C5373C);
PPC_FUNC_IMPL(__imp__sub_83C5373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53740"))) PPC_WEAK_FUNC(sub_83C53740);
PPC_FUNC_IMPL(__imp__sub_83C53740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5374C"))) PPC_WEAK_FUNC(sub_83C5374C);
PPC_FUNC_IMPL(__imp__sub_83C5374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53750"))) PPC_WEAK_FUNC(sub_83C53750);
PPC_FUNC_IMPL(__imp__sub_83C53750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3568
	ctx.r3.s64 = ctx.r11.s64 + -3568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5375C"))) PPC_WEAK_FUNC(sub_83C5375C);
PPC_FUNC_IMPL(__imp__sub_83C5375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53760"))) PPC_WEAK_FUNC(sub_83C53760);
PPC_FUNC_IMPL(__imp__sub_83C53760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5376C"))) PPC_WEAK_FUNC(sub_83C5376C);
PPC_FUNC_IMPL(__imp__sub_83C5376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53770"))) PPC_WEAK_FUNC(sub_83C53770);
PPC_FUNC_IMPL(__imp__sub_83C53770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3552
	ctx.r3.s64 = ctx.r11.s64 + -3552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5377C"))) PPC_WEAK_FUNC(sub_83C5377C);
PPC_FUNC_IMPL(__imp__sub_83C5377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53780"))) PPC_WEAK_FUNC(sub_83C53780);
PPC_FUNC_IMPL(__imp__sub_83C53780) {
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
	// addi r3,r11,28648
	ctx.r3.s64 = ctx.r11.s64 + 28648;
	// bl 0x83523120
	ctx.lr = 0x83C53798;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3544
	ctx.r3.s64 = ctx.r10.s64 + -3544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C537A4;
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

__attribute__((alias("__imp__sub_83C537B4"))) PPC_WEAK_FUNC(sub_83C537B4);
PPC_FUNC_IMPL(__imp__sub_83C537B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C537B8"))) PPC_WEAK_FUNC(sub_83C537B8);
PPC_FUNC_IMPL(__imp__sub_83C537B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28664
	ctx.r7.s64 = ctx.r8.s64 + 28664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C537E0"))) PPC_WEAK_FUNC(sub_83C537E0);
PPC_FUNC_IMPL(__imp__sub_83C537E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13200
	ctx.r6.s64 = ctx.r7.s64 + 13200;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13128(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13128);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28664);
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
	// std r9,13200(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53828"))) PPC_WEAK_FUNC(sub_83C53828);
PPC_FUNC_IMPL(__imp__sub_83C53828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53834"))) PPC_WEAK_FUNC(sub_83C53834);
PPC_FUNC_IMPL(__imp__sub_83C53834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53838"))) PPC_WEAK_FUNC(sub_83C53838);
PPC_FUNC_IMPL(__imp__sub_83C53838) {
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
	// addi r3,r11,28672
	ctx.r3.s64 = ctx.r11.s64 + 28672;
	// bl 0x8259af80
	ctx.lr = 0x83C53850;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3512
	ctx.r3.s64 = ctx.r10.s64 + -3512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5385C;
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

__attribute__((alias("__imp__sub_83C5386C"))) PPC_WEAK_FUNC(sub_83C5386C);
PPC_FUNC_IMPL(__imp__sub_83C5386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53870"))) PPC_WEAK_FUNC(sub_83C53870);
PPC_FUNC_IMPL(__imp__sub_83C53870) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28652
	ctx.r11.s64 = ctx.r8.s64 + 28652;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13176);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3520
	ctx.r3.s64 = ctx.r6.s64 + -3520;
	// stw r10,28652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538A0"))) PPC_WEAK_FUNC(sub_83C538A0);
PPC_FUNC_IMPL(__imp__sub_83C538A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3504
	ctx.r3.s64 = ctx.r11.s64 + -3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538AC"))) PPC_WEAK_FUNC(sub_83C538AC);
PPC_FUNC_IMPL(__imp__sub_83C538AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C538B0"))) PPC_WEAK_FUNC(sub_83C538B0);
PPC_FUNC_IMPL(__imp__sub_83C538B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3496
	ctx.r3.s64 = ctx.r11.s64 + -3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538BC"))) PPC_WEAK_FUNC(sub_83C538BC);
PPC_FUNC_IMPL(__imp__sub_83C538BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C538C0"))) PPC_WEAK_FUNC(sub_83C538C0);
PPC_FUNC_IMPL(__imp__sub_83C538C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538CC"))) PPC_WEAK_FUNC(sub_83C538CC);
PPC_FUNC_IMPL(__imp__sub_83C538CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C538D0"))) PPC_WEAK_FUNC(sub_83C538D0);
PPC_FUNC_IMPL(__imp__sub_83C538D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3480
	ctx.r3.s64 = ctx.r11.s64 + -3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538DC"))) PPC_WEAK_FUNC(sub_83C538DC);
PPC_FUNC_IMPL(__imp__sub_83C538DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C538E0"))) PPC_WEAK_FUNC(sub_83C538E0);
PPC_FUNC_IMPL(__imp__sub_83C538E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3472
	ctx.r3.s64 = ctx.r11.s64 + -3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538EC"))) PPC_WEAK_FUNC(sub_83C538EC);
PPC_FUNC_IMPL(__imp__sub_83C538EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C538F0"))) PPC_WEAK_FUNC(sub_83C538F0);
PPC_FUNC_IMPL(__imp__sub_83C538F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C538FC"))) PPC_WEAK_FUNC(sub_83C538FC);
PPC_FUNC_IMPL(__imp__sub_83C538FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53900"))) PPC_WEAK_FUNC(sub_83C53900);
PPC_FUNC_IMPL(__imp__sub_83C53900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3456
	ctx.r3.s64 = ctx.r11.s64 + -3456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5390C"))) PPC_WEAK_FUNC(sub_83C5390C);
PPC_FUNC_IMPL(__imp__sub_83C5390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53910"))) PPC_WEAK_FUNC(sub_83C53910);
PPC_FUNC_IMPL(__imp__sub_83C53910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3448
	ctx.r3.s64 = ctx.r11.s64 + -3448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5391C"))) PPC_WEAK_FUNC(sub_83C5391C);
PPC_FUNC_IMPL(__imp__sub_83C5391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53920"))) PPC_WEAK_FUNC(sub_83C53920);
PPC_FUNC_IMPL(__imp__sub_83C53920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3440
	ctx.r3.s64 = ctx.r11.s64 + -3440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5392C"))) PPC_WEAK_FUNC(sub_83C5392C);
PPC_FUNC_IMPL(__imp__sub_83C5392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53930"))) PPC_WEAK_FUNC(sub_83C53930);
PPC_FUNC_IMPL(__imp__sub_83C53930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3432
	ctx.r3.s64 = ctx.r11.s64 + -3432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5393C"))) PPC_WEAK_FUNC(sub_83C5393C);
PPC_FUNC_IMPL(__imp__sub_83C5393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53940"))) PPC_WEAK_FUNC(sub_83C53940);
PPC_FUNC_IMPL(__imp__sub_83C53940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3424
	ctx.r3.s64 = ctx.r11.s64 + -3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5394C"))) PPC_WEAK_FUNC(sub_83C5394C);
PPC_FUNC_IMPL(__imp__sub_83C5394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53950"))) PPC_WEAK_FUNC(sub_83C53950);
PPC_FUNC_IMPL(__imp__sub_83C53950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3416
	ctx.r3.s64 = ctx.r11.s64 + -3416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5395C"))) PPC_WEAK_FUNC(sub_83C5395C);
PPC_FUNC_IMPL(__imp__sub_83C5395C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53960"))) PPC_WEAK_FUNC(sub_83C53960);
PPC_FUNC_IMPL(__imp__sub_83C53960) {
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
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// bl 0x83523120
	ctx.lr = 0x83C53978;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3408
	ctx.r3.s64 = ctx.r10.s64 + -3408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53984;
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

__attribute__((alias("__imp__sub_83C53994"))) PPC_WEAK_FUNC(sub_83C53994);
PPC_FUNC_IMPL(__imp__sub_83C53994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53998"))) PPC_WEAK_FUNC(sub_83C53998);
PPC_FUNC_IMPL(__imp__sub_83C53998) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29032
	ctx.r7.s64 = ctx.r8.s64 + 29032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C539C0"))) PPC_WEAK_FUNC(sub_83C539C0);
PPC_FUNC_IMPL(__imp__sub_83C539C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13336
	ctx.r6.s64 = ctx.r7.s64 + 13336;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29032);
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
	// std r9,13336(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53A08"))) PPC_WEAK_FUNC(sub_83C53A08);
PPC_FUNC_IMPL(__imp__sub_83C53A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53A14"))) PPC_WEAK_FUNC(sub_83C53A14);
PPC_FUNC_IMPL(__imp__sub_83C53A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53A18"))) PPC_WEAK_FUNC(sub_83C53A18);
PPC_FUNC_IMPL(__imp__sub_83C53A18) {
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
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// bl 0x8259af80
	ctx.lr = 0x83C53A30;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3376
	ctx.r3.s64 = ctx.r10.s64 + -3376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53A3C;
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

__attribute__((alias("__imp__sub_83C53A4C"))) PPC_WEAK_FUNC(sub_83C53A4C);
PPC_FUNC_IMPL(__imp__sub_83C53A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53A50"))) PPC_WEAK_FUNC(sub_83C53A50);
PPC_FUNC_IMPL(__imp__sub_83C53A50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29020
	ctx.r11.s64 = ctx.r8.s64 + 29020;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3384
	ctx.r3.s64 = ctx.r6.s64 + -3384;
	// stw r10,29020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53A80"))) PPC_WEAK_FUNC(sub_83C53A80);
PPC_FUNC_IMPL(__imp__sub_83C53A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53A8C"))) PPC_WEAK_FUNC(sub_83C53A8C);
PPC_FUNC_IMPL(__imp__sub_83C53A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53A90"))) PPC_WEAK_FUNC(sub_83C53A90);
PPC_FUNC_IMPL(__imp__sub_83C53A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53A9C"))) PPC_WEAK_FUNC(sub_83C53A9C);
PPC_FUNC_IMPL(__imp__sub_83C53A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AA0"))) PPC_WEAK_FUNC(sub_83C53AA0);
PPC_FUNC_IMPL(__imp__sub_83C53AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3352
	ctx.r3.s64 = ctx.r11.s64 + -3352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53AAC"))) PPC_WEAK_FUNC(sub_83C53AAC);
PPC_FUNC_IMPL(__imp__sub_83C53AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AB0"))) PPC_WEAK_FUNC(sub_83C53AB0);
PPC_FUNC_IMPL(__imp__sub_83C53AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3344
	ctx.r3.s64 = ctx.r11.s64 + -3344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53ABC"))) PPC_WEAK_FUNC(sub_83C53ABC);
PPC_FUNC_IMPL(__imp__sub_83C53ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AC0"))) PPC_WEAK_FUNC(sub_83C53AC0);
PPC_FUNC_IMPL(__imp__sub_83C53AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3336
	ctx.r3.s64 = ctx.r11.s64 + -3336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53ACC"))) PPC_WEAK_FUNC(sub_83C53ACC);
PPC_FUNC_IMPL(__imp__sub_83C53ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AD0"))) PPC_WEAK_FUNC(sub_83C53AD0);
PPC_FUNC_IMPL(__imp__sub_83C53AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3328
	ctx.r3.s64 = ctx.r11.s64 + -3328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53ADC"))) PPC_WEAK_FUNC(sub_83C53ADC);
PPC_FUNC_IMPL(__imp__sub_83C53ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AE0"))) PPC_WEAK_FUNC(sub_83C53AE0);
PPC_FUNC_IMPL(__imp__sub_83C53AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3320
	ctx.r3.s64 = ctx.r11.s64 + -3320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53AEC"))) PPC_WEAK_FUNC(sub_83C53AEC);
PPC_FUNC_IMPL(__imp__sub_83C53AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53AF0"))) PPC_WEAK_FUNC(sub_83C53AF0);
PPC_FUNC_IMPL(__imp__sub_83C53AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53AFC"))) PPC_WEAK_FUNC(sub_83C53AFC);
PPC_FUNC_IMPL(__imp__sub_83C53AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53B00"))) PPC_WEAK_FUNC(sub_83C53B00);
PPC_FUNC_IMPL(__imp__sub_83C53B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3304
	ctx.r3.s64 = ctx.r11.s64 + -3304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53B0C"))) PPC_WEAK_FUNC(sub_83C53B0C);
PPC_FUNC_IMPL(__imp__sub_83C53B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53B10"))) PPC_WEAK_FUNC(sub_83C53B10);
PPC_FUNC_IMPL(__imp__sub_83C53B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3296
	ctx.r3.s64 = ctx.r11.s64 + -3296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53B1C"))) PPC_WEAK_FUNC(sub_83C53B1C);
PPC_FUNC_IMPL(__imp__sub_83C53B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53B20"))) PPC_WEAK_FUNC(sub_83C53B20);
PPC_FUNC_IMPL(__imp__sub_83C53B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53B2C"))) PPC_WEAK_FUNC(sub_83C53B2C);
PPC_FUNC_IMPL(__imp__sub_83C53B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53B30"))) PPC_WEAK_FUNC(sub_83C53B30);
PPC_FUNC_IMPL(__imp__sub_83C53B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3280
	ctx.r3.s64 = ctx.r11.s64 + -3280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53B3C"))) PPC_WEAK_FUNC(sub_83C53B3C);
PPC_FUNC_IMPL(__imp__sub_83C53B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53B40"))) PPC_WEAK_FUNC(sub_83C53B40);
PPC_FUNC_IMPL(__imp__sub_83C53B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29400
	ctx.r7.s64 = ctx.r8.s64 + 29400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53B68"))) PPC_WEAK_FUNC(sub_83C53B68);
PPC_FUNC_IMPL(__imp__sub_83C53B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13464
	ctx.r6.s64 = ctx.r7.s64 + 13464;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29400);
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
	// std r9,13464(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53BB0"))) PPC_WEAK_FUNC(sub_83C53BB0);
PPC_FUNC_IMPL(__imp__sub_83C53BB0) {
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
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// bl 0x83523120
	ctx.lr = 0x83C53BC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3272
	ctx.r3.s64 = ctx.r10.s64 + -3272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53BD4;
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

__attribute__((alias("__imp__sub_83C53BE4"))) PPC_WEAK_FUNC(sub_83C53BE4);
PPC_FUNC_IMPL(__imp__sub_83C53BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53BE8"))) PPC_WEAK_FUNC(sub_83C53BE8);
PPC_FUNC_IMPL(__imp__sub_83C53BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53BF4"))) PPC_WEAK_FUNC(sub_83C53BF4);
PPC_FUNC_IMPL(__imp__sub_83C53BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53BF8"))) PPC_WEAK_FUNC(sub_83C53BF8);
PPC_FUNC_IMPL(__imp__sub_83C53BF8) {
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
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x8259af80
	ctx.lr = 0x83C53C10;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3240
	ctx.r3.s64 = ctx.r10.s64 + -3240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53C1C;
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

__attribute__((alias("__imp__sub_83C53C2C"))) PPC_WEAK_FUNC(sub_83C53C2C);
PPC_FUNC_IMPL(__imp__sub_83C53C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53C30"))) PPC_WEAK_FUNC(sub_83C53C30);
PPC_FUNC_IMPL(__imp__sub_83C53C30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29388
	ctx.r11.s64 = ctx.r8.s64 + 29388;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3248
	ctx.r3.s64 = ctx.r6.s64 + -3248;
	// stw r10,29388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53C60"))) PPC_WEAK_FUNC(sub_83C53C60);
PPC_FUNC_IMPL(__imp__sub_83C53C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53C6C"))) PPC_WEAK_FUNC(sub_83C53C6C);
PPC_FUNC_IMPL(__imp__sub_83C53C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53C70"))) PPC_WEAK_FUNC(sub_83C53C70);
PPC_FUNC_IMPL(__imp__sub_83C53C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3224
	ctx.r3.s64 = ctx.r11.s64 + -3224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53C7C"))) PPC_WEAK_FUNC(sub_83C53C7C);
PPC_FUNC_IMPL(__imp__sub_83C53C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53C80"))) PPC_WEAK_FUNC(sub_83C53C80);
PPC_FUNC_IMPL(__imp__sub_83C53C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3216
	ctx.r3.s64 = ctx.r11.s64 + -3216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53C8C"))) PPC_WEAK_FUNC(sub_83C53C8C);
PPC_FUNC_IMPL(__imp__sub_83C53C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53C90"))) PPC_WEAK_FUNC(sub_83C53C90);
PPC_FUNC_IMPL(__imp__sub_83C53C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3208
	ctx.r3.s64 = ctx.r11.s64 + -3208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53C9C"))) PPC_WEAK_FUNC(sub_83C53C9C);
PPC_FUNC_IMPL(__imp__sub_83C53C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53CA0"))) PPC_WEAK_FUNC(sub_83C53CA0);
PPC_FUNC_IMPL(__imp__sub_83C53CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3200
	ctx.r3.s64 = ctx.r11.s64 + -3200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CAC"))) PPC_WEAK_FUNC(sub_83C53CAC);
PPC_FUNC_IMPL(__imp__sub_83C53CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53CB0"))) PPC_WEAK_FUNC(sub_83C53CB0);
PPC_FUNC_IMPL(__imp__sub_83C53CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3192
	ctx.r3.s64 = ctx.r11.s64 + -3192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CBC"))) PPC_WEAK_FUNC(sub_83C53CBC);
PPC_FUNC_IMPL(__imp__sub_83C53CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53CC0"))) PPC_WEAK_FUNC(sub_83C53CC0);
PPC_FUNC_IMPL(__imp__sub_83C53CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3184
	ctx.r3.s64 = ctx.r11.s64 + -3184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CCC"))) PPC_WEAK_FUNC(sub_83C53CCC);
PPC_FUNC_IMPL(__imp__sub_83C53CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53CD0"))) PPC_WEAK_FUNC(sub_83C53CD0);
PPC_FUNC_IMPL(__imp__sub_83C53CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3176
	ctx.r3.s64 = ctx.r11.s64 + -3176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CDC"))) PPC_WEAK_FUNC(sub_83C53CDC);
PPC_FUNC_IMPL(__imp__sub_83C53CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

