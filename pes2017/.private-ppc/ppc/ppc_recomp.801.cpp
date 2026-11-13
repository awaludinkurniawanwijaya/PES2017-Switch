#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C585CC"))) PPC_WEAK_FUNC(sub_83C585CC);
PPC_FUNC_IMPL(__imp__sub_83C585CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585D0"))) PPC_WEAK_FUNC(sub_83C585D0);
PPC_FUNC_IMPL(__imp__sub_83C585D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C585DC"))) PPC_WEAK_FUNC(sub_83C585DC);
PPC_FUNC_IMPL(__imp__sub_83C585DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585E0"))) PPC_WEAK_FUNC(sub_83C585E0);
PPC_FUNC_IMPL(__imp__sub_83C585E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C585EC"))) PPC_WEAK_FUNC(sub_83C585EC);
PPC_FUNC_IMPL(__imp__sub_83C585EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585F0"))) PPC_WEAK_FUNC(sub_83C585F0);
PPC_FUNC_IMPL(__imp__sub_83C585F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C585FC"))) PPC_WEAK_FUNC(sub_83C585FC);
PPC_FUNC_IMPL(__imp__sub_83C585FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58600"))) PPC_WEAK_FUNC(sub_83C58600);
PPC_FUNC_IMPL(__imp__sub_83C58600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5860C"))) PPC_WEAK_FUNC(sub_83C5860C);
PPC_FUNC_IMPL(__imp__sub_83C5860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58610"))) PPC_WEAK_FUNC(sub_83C58610);
PPC_FUNC_IMPL(__imp__sub_83C58610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5861C"))) PPC_WEAK_FUNC(sub_83C5861C);
PPC_FUNC_IMPL(__imp__sub_83C5861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58620"))) PPC_WEAK_FUNC(sub_83C58620);
PPC_FUNC_IMPL(__imp__sub_83C58620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2152
	ctx.r3.s64 = ctx.r11.s64 + 2152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5862C"))) PPC_WEAK_FUNC(sub_83C5862C);
PPC_FUNC_IMPL(__imp__sub_83C5862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58630"))) PPC_WEAK_FUNC(sub_83C58630);
PPC_FUNC_IMPL(__imp__sub_83C58630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5863C"))) PPC_WEAK_FUNC(sub_83C5863C);
PPC_FUNC_IMPL(__imp__sub_83C5863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58640"))) PPC_WEAK_FUNC(sub_83C58640);
PPC_FUNC_IMPL(__imp__sub_83C58640) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21416
	ctx.r7.s64 = ctx.r8.s64 + -21416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58668"))) PPC_WEAK_FUNC(sub_83C58668);
PPC_FUNC_IMPL(__imp__sub_83C58668) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18736
	ctx.r6.s64 = ctx.r7.s64 + 18736;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21416);
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
	// std r9,18736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C586B0"))) PPC_WEAK_FUNC(sub_83C586B0);
PPC_FUNC_IMPL(__imp__sub_83C586B0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// bl 0x83523120
	ctx.lr = 0x83C586C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2168
	ctx.r3.s64 = ctx.r10.s64 + 2168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C586D4;
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

__attribute__((alias("__imp__sub_83C586E4"))) PPC_WEAK_FUNC(sub_83C586E4);
PPC_FUNC_IMPL(__imp__sub_83C586E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C586E8"))) PPC_WEAK_FUNC(sub_83C586E8);
PPC_FUNC_IMPL(__imp__sub_83C586E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2184
	ctx.r3.s64 = ctx.r11.s64 + 2184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C586F4"))) PPC_WEAK_FUNC(sub_83C586F4);
PPC_FUNC_IMPL(__imp__sub_83C586F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C586F8"))) PPC_WEAK_FUNC(sub_83C586F8);
PPC_FUNC_IMPL(__imp__sub_83C586F8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// bl 0x8259af80
	ctx.lr = 0x83C58710;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2200
	ctx.r3.s64 = ctx.r10.s64 + 2200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5871C;
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

__attribute__((alias("__imp__sub_83C5872C"))) PPC_WEAK_FUNC(sub_83C5872C);
PPC_FUNC_IMPL(__imp__sub_83C5872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58730"))) PPC_WEAK_FUNC(sub_83C58730);
PPC_FUNC_IMPL(__imp__sub_83C58730) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21428
	ctx.r11.s64 = ctx.r8.s64 + -21428;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2192
	ctx.r3.s64 = ctx.r6.s64 + 2192;
	// stw r10,-21428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58760"))) PPC_WEAK_FUNC(sub_83C58760);
PPC_FUNC_IMPL(__imp__sub_83C58760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5876C"))) PPC_WEAK_FUNC(sub_83C5876C);
PPC_FUNC_IMPL(__imp__sub_83C5876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58770"))) PPC_WEAK_FUNC(sub_83C58770);
PPC_FUNC_IMPL(__imp__sub_83C58770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2216
	ctx.r3.s64 = ctx.r11.s64 + 2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5877C"))) PPC_WEAK_FUNC(sub_83C5877C);
PPC_FUNC_IMPL(__imp__sub_83C5877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58780"))) PPC_WEAK_FUNC(sub_83C58780);
PPC_FUNC_IMPL(__imp__sub_83C58780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5878C"))) PPC_WEAK_FUNC(sub_83C5878C);
PPC_FUNC_IMPL(__imp__sub_83C5878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58790"))) PPC_WEAK_FUNC(sub_83C58790);
PPC_FUNC_IMPL(__imp__sub_83C58790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5879C"))) PPC_WEAK_FUNC(sub_83C5879C);
PPC_FUNC_IMPL(__imp__sub_83C5879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587A0"))) PPC_WEAK_FUNC(sub_83C587A0);
PPC_FUNC_IMPL(__imp__sub_83C587A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2240
	ctx.r3.s64 = ctx.r11.s64 + 2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587AC"))) PPC_WEAK_FUNC(sub_83C587AC);
PPC_FUNC_IMPL(__imp__sub_83C587AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587B0"))) PPC_WEAK_FUNC(sub_83C587B0);
PPC_FUNC_IMPL(__imp__sub_83C587B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587BC"))) PPC_WEAK_FUNC(sub_83C587BC);
PPC_FUNC_IMPL(__imp__sub_83C587BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587C0"))) PPC_WEAK_FUNC(sub_83C587C0);
PPC_FUNC_IMPL(__imp__sub_83C587C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2256
	ctx.r3.s64 = ctx.r11.s64 + 2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587CC"))) PPC_WEAK_FUNC(sub_83C587CC);
PPC_FUNC_IMPL(__imp__sub_83C587CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587D0"))) PPC_WEAK_FUNC(sub_83C587D0);
PPC_FUNC_IMPL(__imp__sub_83C587D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2264
	ctx.r3.s64 = ctx.r11.s64 + 2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587DC"))) PPC_WEAK_FUNC(sub_83C587DC);
PPC_FUNC_IMPL(__imp__sub_83C587DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587E0"))) PPC_WEAK_FUNC(sub_83C587E0);
PPC_FUNC_IMPL(__imp__sub_83C587E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587EC"))) PPC_WEAK_FUNC(sub_83C587EC);
PPC_FUNC_IMPL(__imp__sub_83C587EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C587F0"))) PPC_WEAK_FUNC(sub_83C587F0);
PPC_FUNC_IMPL(__imp__sub_83C587F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2280
	ctx.r3.s64 = ctx.r11.s64 + 2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C587FC"))) PPC_WEAK_FUNC(sub_83C587FC);
PPC_FUNC_IMPL(__imp__sub_83C587FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58800"))) PPC_WEAK_FUNC(sub_83C58800);
PPC_FUNC_IMPL(__imp__sub_83C58800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5880C"))) PPC_WEAK_FUNC(sub_83C5880C);
PPC_FUNC_IMPL(__imp__sub_83C5880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58810"))) PPC_WEAK_FUNC(sub_83C58810);
PPC_FUNC_IMPL(__imp__sub_83C58810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2296
	ctx.r3.s64 = ctx.r11.s64 + 2296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5881C"))) PPC_WEAK_FUNC(sub_83C5881C);
PPC_FUNC_IMPL(__imp__sub_83C5881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58820"))) PPC_WEAK_FUNC(sub_83C58820);
PPC_FUNC_IMPL(__imp__sub_83C58820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21048
	ctx.r7.s64 = ctx.r8.s64 + -21048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21048(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58848"))) PPC_WEAK_FUNC(sub_83C58848);
PPC_FUNC_IMPL(__imp__sub_83C58848) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18864
	ctx.r6.s64 = ctx.r7.s64 + 18864;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18792(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18792);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21048);
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
	// std r9,18864(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58890"))) PPC_WEAK_FUNC(sub_83C58890);
PPC_FUNC_IMPL(__imp__sub_83C58890) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21064
	ctx.r3.s64 = ctx.r11.s64 + -21064;
	// bl 0x83523120
	ctx.lr = 0x83C588A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2304
	ctx.r3.s64 = ctx.r10.s64 + 2304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C588B4;
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

__attribute__((alias("__imp__sub_83C588C4"))) PPC_WEAK_FUNC(sub_83C588C4);
PPC_FUNC_IMPL(__imp__sub_83C588C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C588C8"))) PPC_WEAK_FUNC(sub_83C588C8);
PPC_FUNC_IMPL(__imp__sub_83C588C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C588D4"))) PPC_WEAK_FUNC(sub_83C588D4);
PPC_FUNC_IMPL(__imp__sub_83C588D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C588D8"))) PPC_WEAK_FUNC(sub_83C588D8);
PPC_FUNC_IMPL(__imp__sub_83C588D8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// bl 0x8259af80
	ctx.lr = 0x83C588F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2336
	ctx.r3.s64 = ctx.r10.s64 + 2336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C588FC;
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

__attribute__((alias("__imp__sub_83C5890C"))) PPC_WEAK_FUNC(sub_83C5890C);
PPC_FUNC_IMPL(__imp__sub_83C5890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58910"))) PPC_WEAK_FUNC(sub_83C58910);
PPC_FUNC_IMPL(__imp__sub_83C58910) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21060
	ctx.r11.s64 = ctx.r8.s64 + -21060;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18840);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2328
	ctx.r3.s64 = ctx.r6.s64 + 2328;
	// stw r10,-21060(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58940"))) PPC_WEAK_FUNC(sub_83C58940);
PPC_FUNC_IMPL(__imp__sub_83C58940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5894C"))) PPC_WEAK_FUNC(sub_83C5894C);
PPC_FUNC_IMPL(__imp__sub_83C5894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58950"))) PPC_WEAK_FUNC(sub_83C58950);
PPC_FUNC_IMPL(__imp__sub_83C58950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2352
	ctx.r3.s64 = ctx.r11.s64 + 2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5895C"))) PPC_WEAK_FUNC(sub_83C5895C);
PPC_FUNC_IMPL(__imp__sub_83C5895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58960"))) PPC_WEAK_FUNC(sub_83C58960);
PPC_FUNC_IMPL(__imp__sub_83C58960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2360
	ctx.r3.s64 = ctx.r11.s64 + 2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5896C"))) PPC_WEAK_FUNC(sub_83C5896C);
PPC_FUNC_IMPL(__imp__sub_83C5896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58970"))) PPC_WEAK_FUNC(sub_83C58970);
PPC_FUNC_IMPL(__imp__sub_83C58970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2368
	ctx.r3.s64 = ctx.r11.s64 + 2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5897C"))) PPC_WEAK_FUNC(sub_83C5897C);
PPC_FUNC_IMPL(__imp__sub_83C5897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58980"))) PPC_WEAK_FUNC(sub_83C58980);
PPC_FUNC_IMPL(__imp__sub_83C58980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2376
	ctx.r3.s64 = ctx.r11.s64 + 2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5898C"))) PPC_WEAK_FUNC(sub_83C5898C);
PPC_FUNC_IMPL(__imp__sub_83C5898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58990"))) PPC_WEAK_FUNC(sub_83C58990);
PPC_FUNC_IMPL(__imp__sub_83C58990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5899C"))) PPC_WEAK_FUNC(sub_83C5899C);
PPC_FUNC_IMPL(__imp__sub_83C5899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589A0"))) PPC_WEAK_FUNC(sub_83C589A0);
PPC_FUNC_IMPL(__imp__sub_83C589A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589AC"))) PPC_WEAK_FUNC(sub_83C589AC);
PPC_FUNC_IMPL(__imp__sub_83C589AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589B0"))) PPC_WEAK_FUNC(sub_83C589B0);
PPC_FUNC_IMPL(__imp__sub_83C589B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589BC"))) PPC_WEAK_FUNC(sub_83C589BC);
PPC_FUNC_IMPL(__imp__sub_83C589BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589C0"))) PPC_WEAK_FUNC(sub_83C589C0);
PPC_FUNC_IMPL(__imp__sub_83C589C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589CC"))) PPC_WEAK_FUNC(sub_83C589CC);
PPC_FUNC_IMPL(__imp__sub_83C589CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589D0"))) PPC_WEAK_FUNC(sub_83C589D0);
PPC_FUNC_IMPL(__imp__sub_83C589D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2416
	ctx.r3.s64 = ctx.r11.s64 + 2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589DC"))) PPC_WEAK_FUNC(sub_83C589DC);
PPC_FUNC_IMPL(__imp__sub_83C589DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589E0"))) PPC_WEAK_FUNC(sub_83C589E0);
PPC_FUNC_IMPL(__imp__sub_83C589E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589EC"))) PPC_WEAK_FUNC(sub_83C589EC);
PPC_FUNC_IMPL(__imp__sub_83C589EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C589F0"))) PPC_WEAK_FUNC(sub_83C589F0);
PPC_FUNC_IMPL(__imp__sub_83C589F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C589FC"))) PPC_WEAK_FUNC(sub_83C589FC);
PPC_FUNC_IMPL(__imp__sub_83C589FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58A00"))) PPC_WEAK_FUNC(sub_83C58A00);
PPC_FUNC_IMPL(__imp__sub_83C58A00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20680
	ctx.r7.s64 = ctx.r8.s64 + -20680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20680(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58A28"))) PPC_WEAK_FUNC(sub_83C58A28);
PPC_FUNC_IMPL(__imp__sub_83C58A28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18992
	ctx.r6.s64 = ctx.r7.s64 + 18992;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20680);
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
	// std r9,18992(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58A70"))) PPC_WEAK_FUNC(sub_83C58A70);
PPC_FUNC_IMPL(__imp__sub_83C58A70) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// bl 0x83523120
	ctx.lr = 0x83C58A88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2440
	ctx.r3.s64 = ctx.r10.s64 + 2440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58A94;
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

__attribute__((alias("__imp__sub_83C58AA4"))) PPC_WEAK_FUNC(sub_83C58AA4);
PPC_FUNC_IMPL(__imp__sub_83C58AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58AA8"))) PPC_WEAK_FUNC(sub_83C58AA8);
PPC_FUNC_IMPL(__imp__sub_83C58AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58AB4"))) PPC_WEAK_FUNC(sub_83C58AB4);
PPC_FUNC_IMPL(__imp__sub_83C58AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58AB8"))) PPC_WEAK_FUNC(sub_83C58AB8);
PPC_FUNC_IMPL(__imp__sub_83C58AB8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x8259af80
	ctx.lr = 0x83C58AD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2472
	ctx.r3.s64 = ctx.r10.s64 + 2472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58ADC;
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

__attribute__((alias("__imp__sub_83C58AEC"))) PPC_WEAK_FUNC(sub_83C58AEC);
PPC_FUNC_IMPL(__imp__sub_83C58AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58AF0"))) PPC_WEAK_FUNC(sub_83C58AF0);
PPC_FUNC_IMPL(__imp__sub_83C58AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20692
	ctx.r11.s64 = ctx.r8.s64 + -20692;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18968);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2464
	ctx.r3.s64 = ctx.r6.s64 + 2464;
	// stw r10,-20692(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B20"))) PPC_WEAK_FUNC(sub_83C58B20);
PPC_FUNC_IMPL(__imp__sub_83C58B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B2C"))) PPC_WEAK_FUNC(sub_83C58B2C);
PPC_FUNC_IMPL(__imp__sub_83C58B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B30"))) PPC_WEAK_FUNC(sub_83C58B30);
PPC_FUNC_IMPL(__imp__sub_83C58B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B3C"))) PPC_WEAK_FUNC(sub_83C58B3C);
PPC_FUNC_IMPL(__imp__sub_83C58B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B40"))) PPC_WEAK_FUNC(sub_83C58B40);
PPC_FUNC_IMPL(__imp__sub_83C58B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B4C"))) PPC_WEAK_FUNC(sub_83C58B4C);
PPC_FUNC_IMPL(__imp__sub_83C58B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B50"))) PPC_WEAK_FUNC(sub_83C58B50);
PPC_FUNC_IMPL(__imp__sub_83C58B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B5C"))) PPC_WEAK_FUNC(sub_83C58B5C);
PPC_FUNC_IMPL(__imp__sub_83C58B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B60"))) PPC_WEAK_FUNC(sub_83C58B60);
PPC_FUNC_IMPL(__imp__sub_83C58B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2512
	ctx.r3.s64 = ctx.r11.s64 + 2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B6C"))) PPC_WEAK_FUNC(sub_83C58B6C);
PPC_FUNC_IMPL(__imp__sub_83C58B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B70"))) PPC_WEAK_FUNC(sub_83C58B70);
PPC_FUNC_IMPL(__imp__sub_83C58B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2520
	ctx.r3.s64 = ctx.r11.s64 + 2520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B7C"))) PPC_WEAK_FUNC(sub_83C58B7C);
PPC_FUNC_IMPL(__imp__sub_83C58B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B80"))) PPC_WEAK_FUNC(sub_83C58B80);
PPC_FUNC_IMPL(__imp__sub_83C58B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B8C"))) PPC_WEAK_FUNC(sub_83C58B8C);
PPC_FUNC_IMPL(__imp__sub_83C58B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58B90"))) PPC_WEAK_FUNC(sub_83C58B90);
PPC_FUNC_IMPL(__imp__sub_83C58B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58B9C"))) PPC_WEAK_FUNC(sub_83C58B9C);
PPC_FUNC_IMPL(__imp__sub_83C58B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58BA0"))) PPC_WEAK_FUNC(sub_83C58BA0);
PPC_FUNC_IMPL(__imp__sub_83C58BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2544
	ctx.r3.s64 = ctx.r11.s64 + 2544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58BAC"))) PPC_WEAK_FUNC(sub_83C58BAC);
PPC_FUNC_IMPL(__imp__sub_83C58BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58BB0"))) PPC_WEAK_FUNC(sub_83C58BB0);
PPC_FUNC_IMPL(__imp__sub_83C58BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58BBC"))) PPC_WEAK_FUNC(sub_83C58BBC);
PPC_FUNC_IMPL(__imp__sub_83C58BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58BC0"))) PPC_WEAK_FUNC(sub_83C58BC0);
PPC_FUNC_IMPL(__imp__sub_83C58BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2560
	ctx.r3.s64 = ctx.r11.s64 + 2560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58BCC"))) PPC_WEAK_FUNC(sub_83C58BCC);
PPC_FUNC_IMPL(__imp__sub_83C58BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58BD0"))) PPC_WEAK_FUNC(sub_83C58BD0);
PPC_FUNC_IMPL(__imp__sub_83C58BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58BDC"))) PPC_WEAK_FUNC(sub_83C58BDC);
PPC_FUNC_IMPL(__imp__sub_83C58BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58BE0"))) PPC_WEAK_FUNC(sub_83C58BE0);
PPC_FUNC_IMPL(__imp__sub_83C58BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20312
	ctx.r7.s64 = ctx.r8.s64 + -20312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20312(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58C08"))) PPC_WEAK_FUNC(sub_83C58C08);
PPC_FUNC_IMPL(__imp__sub_83C58C08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,19120
	ctx.r6.s64 = ctx.r7.s64 + 19120;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19048(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19048);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20312);
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
	// std r9,19120(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58C50"))) PPC_WEAK_FUNC(sub_83C58C50);
PPC_FUNC_IMPL(__imp__sub_83C58C50) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-20328
	ctx.r3.s64 = ctx.r11.s64 + -20328;
	// bl 0x83523120
	ctx.lr = 0x83C58C68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2576
	ctx.r3.s64 = ctx.r10.s64 + 2576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58C74;
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

__attribute__((alias("__imp__sub_83C58C84"))) PPC_WEAK_FUNC(sub_83C58C84);
PPC_FUNC_IMPL(__imp__sub_83C58C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58C88"))) PPC_WEAK_FUNC(sub_83C58C88);
PPC_FUNC_IMPL(__imp__sub_83C58C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2592
	ctx.r3.s64 = ctx.r11.s64 + 2592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58C94"))) PPC_WEAK_FUNC(sub_83C58C94);
PPC_FUNC_IMPL(__imp__sub_83C58C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58C98"))) PPC_WEAK_FUNC(sub_83C58C98);
PPC_FUNC_IMPL(__imp__sub_83C58C98) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// bl 0x8259af80
	ctx.lr = 0x83C58CB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2608
	ctx.r3.s64 = ctx.r10.s64 + 2608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58CBC;
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

__attribute__((alias("__imp__sub_83C58CCC"))) PPC_WEAK_FUNC(sub_83C58CCC);
PPC_FUNC_IMPL(__imp__sub_83C58CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58CD0"))) PPC_WEAK_FUNC(sub_83C58CD0);
PPC_FUNC_IMPL(__imp__sub_83C58CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20324
	ctx.r11.s64 = ctx.r8.s64 + -20324;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,19096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2600
	ctx.r3.s64 = ctx.r6.s64 + 2600;
	// stw r10,-20324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D00"))) PPC_WEAK_FUNC(sub_83C58D00);
PPC_FUNC_IMPL(__imp__sub_83C58D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D0C"))) PPC_WEAK_FUNC(sub_83C58D0C);
PPC_FUNC_IMPL(__imp__sub_83C58D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D10"))) PPC_WEAK_FUNC(sub_83C58D10);
PPC_FUNC_IMPL(__imp__sub_83C58D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D1C"))) PPC_WEAK_FUNC(sub_83C58D1C);
PPC_FUNC_IMPL(__imp__sub_83C58D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D20"))) PPC_WEAK_FUNC(sub_83C58D20);
PPC_FUNC_IMPL(__imp__sub_83C58D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D2C"))) PPC_WEAK_FUNC(sub_83C58D2C);
PPC_FUNC_IMPL(__imp__sub_83C58D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D30"))) PPC_WEAK_FUNC(sub_83C58D30);
PPC_FUNC_IMPL(__imp__sub_83C58D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2640
	ctx.r3.s64 = ctx.r11.s64 + 2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D3C"))) PPC_WEAK_FUNC(sub_83C58D3C);
PPC_FUNC_IMPL(__imp__sub_83C58D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D40"))) PPC_WEAK_FUNC(sub_83C58D40);
PPC_FUNC_IMPL(__imp__sub_83C58D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D4C"))) PPC_WEAK_FUNC(sub_83C58D4C);
PPC_FUNC_IMPL(__imp__sub_83C58D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D50"))) PPC_WEAK_FUNC(sub_83C58D50);
PPC_FUNC_IMPL(__imp__sub_83C58D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D5C"))) PPC_WEAK_FUNC(sub_83C58D5C);
PPC_FUNC_IMPL(__imp__sub_83C58D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D60"))) PPC_WEAK_FUNC(sub_83C58D60);
PPC_FUNC_IMPL(__imp__sub_83C58D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2664
	ctx.r3.s64 = ctx.r11.s64 + 2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D6C"))) PPC_WEAK_FUNC(sub_83C58D6C);
PPC_FUNC_IMPL(__imp__sub_83C58D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D70"))) PPC_WEAK_FUNC(sub_83C58D70);
PPC_FUNC_IMPL(__imp__sub_83C58D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D7C"))) PPC_WEAK_FUNC(sub_83C58D7C);
PPC_FUNC_IMPL(__imp__sub_83C58D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D80"))) PPC_WEAK_FUNC(sub_83C58D80);
PPC_FUNC_IMPL(__imp__sub_83C58D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2680
	ctx.r3.s64 = ctx.r11.s64 + 2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D8C"))) PPC_WEAK_FUNC(sub_83C58D8C);
PPC_FUNC_IMPL(__imp__sub_83C58D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58D90"))) PPC_WEAK_FUNC(sub_83C58D90);
PPC_FUNC_IMPL(__imp__sub_83C58D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2688
	ctx.r3.s64 = ctx.r11.s64 + 2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58D9C"))) PPC_WEAK_FUNC(sub_83C58D9C);
PPC_FUNC_IMPL(__imp__sub_83C58D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58DA0"))) PPC_WEAK_FUNC(sub_83C58DA0);
PPC_FUNC_IMPL(__imp__sub_83C58DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58DAC"))) PPC_WEAK_FUNC(sub_83C58DAC);
PPC_FUNC_IMPL(__imp__sub_83C58DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58DB0"))) PPC_WEAK_FUNC(sub_83C58DB0);
PPC_FUNC_IMPL(__imp__sub_83C58DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58DBC"))) PPC_WEAK_FUNC(sub_83C58DBC);
PPC_FUNC_IMPL(__imp__sub_83C58DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58DC0"))) PPC_WEAK_FUNC(sub_83C58DC0);
PPC_FUNC_IMPL(__imp__sub_83C58DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19944
	ctx.r7.s64 = ctx.r8.s64 + -19944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19944);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19944, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58DE8"))) PPC_WEAK_FUNC(sub_83C58DE8);
PPC_FUNC_IMPL(__imp__sub_83C58DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,19248
	ctx.r6.s64 = ctx.r7.s64 + 19248;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19944(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19944);
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
	// std r9,19248(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58E30"))) PPC_WEAK_FUNC(sub_83C58E30);
PPC_FUNC_IMPL(__imp__sub_83C58E30) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19960
	ctx.r3.s64 = ctx.r11.s64 + -19960;
	// bl 0x83523120
	ctx.lr = 0x83C58E48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2712
	ctx.r3.s64 = ctx.r10.s64 + 2712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58E54;
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

__attribute__((alias("__imp__sub_83C58E64"))) PPC_WEAK_FUNC(sub_83C58E64);
PPC_FUNC_IMPL(__imp__sub_83C58E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58E68"))) PPC_WEAK_FUNC(sub_83C58E68);
PPC_FUNC_IMPL(__imp__sub_83C58E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58E74"))) PPC_WEAK_FUNC(sub_83C58E74);
PPC_FUNC_IMPL(__imp__sub_83C58E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58E78"))) PPC_WEAK_FUNC(sub_83C58E78);
PPC_FUNC_IMPL(__imp__sub_83C58E78) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// bl 0x8259af80
	ctx.lr = 0x83C58E90;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2744
	ctx.r3.s64 = ctx.r10.s64 + 2744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58E9C;
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

__attribute__((alias("__imp__sub_83C58EAC"))) PPC_WEAK_FUNC(sub_83C58EAC);
PPC_FUNC_IMPL(__imp__sub_83C58EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58EB0"))) PPC_WEAK_FUNC(sub_83C58EB0);
PPC_FUNC_IMPL(__imp__sub_83C58EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19956
	ctx.r11.s64 = ctx.r8.s64 + -19956;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,19224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2736
	ctx.r3.s64 = ctx.r6.s64 + 2736;
	// stw r10,-19956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58EE0"))) PPC_WEAK_FUNC(sub_83C58EE0);
PPC_FUNC_IMPL(__imp__sub_83C58EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58EEC"))) PPC_WEAK_FUNC(sub_83C58EEC);
PPC_FUNC_IMPL(__imp__sub_83C58EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58EF0"))) PPC_WEAK_FUNC(sub_83C58EF0);
PPC_FUNC_IMPL(__imp__sub_83C58EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2760
	ctx.r3.s64 = ctx.r11.s64 + 2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58EFC"))) PPC_WEAK_FUNC(sub_83C58EFC);
PPC_FUNC_IMPL(__imp__sub_83C58EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F00"))) PPC_WEAK_FUNC(sub_83C58F00);
PPC_FUNC_IMPL(__imp__sub_83C58F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F0C"))) PPC_WEAK_FUNC(sub_83C58F0C);
PPC_FUNC_IMPL(__imp__sub_83C58F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F10"))) PPC_WEAK_FUNC(sub_83C58F10);
PPC_FUNC_IMPL(__imp__sub_83C58F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2776
	ctx.r3.s64 = ctx.r11.s64 + 2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F1C"))) PPC_WEAK_FUNC(sub_83C58F1C);
PPC_FUNC_IMPL(__imp__sub_83C58F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F20"))) PPC_WEAK_FUNC(sub_83C58F20);
PPC_FUNC_IMPL(__imp__sub_83C58F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2784
	ctx.r3.s64 = ctx.r11.s64 + 2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F2C"))) PPC_WEAK_FUNC(sub_83C58F2C);
PPC_FUNC_IMPL(__imp__sub_83C58F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F30"))) PPC_WEAK_FUNC(sub_83C58F30);
PPC_FUNC_IMPL(__imp__sub_83C58F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F3C"))) PPC_WEAK_FUNC(sub_83C58F3C);
PPC_FUNC_IMPL(__imp__sub_83C58F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F40"))) PPC_WEAK_FUNC(sub_83C58F40);
PPC_FUNC_IMPL(__imp__sub_83C58F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2800
	ctx.r3.s64 = ctx.r11.s64 + 2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F4C"))) PPC_WEAK_FUNC(sub_83C58F4C);
PPC_FUNC_IMPL(__imp__sub_83C58F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F50"))) PPC_WEAK_FUNC(sub_83C58F50);
PPC_FUNC_IMPL(__imp__sub_83C58F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F5C"))) PPC_WEAK_FUNC(sub_83C58F5C);
PPC_FUNC_IMPL(__imp__sub_83C58F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F60"))) PPC_WEAK_FUNC(sub_83C58F60);
PPC_FUNC_IMPL(__imp__sub_83C58F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F6C"))) PPC_WEAK_FUNC(sub_83C58F6C);
PPC_FUNC_IMPL(__imp__sub_83C58F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F70"))) PPC_WEAK_FUNC(sub_83C58F70);
PPC_FUNC_IMPL(__imp__sub_83C58F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F7C"))) PPC_WEAK_FUNC(sub_83C58F7C);
PPC_FUNC_IMPL(__imp__sub_83C58F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F80"))) PPC_WEAK_FUNC(sub_83C58F80);
PPC_FUNC_IMPL(__imp__sub_83C58F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F8C"))) PPC_WEAK_FUNC(sub_83C58F8C);
PPC_FUNC_IMPL(__imp__sub_83C58F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58F90"))) PPC_WEAK_FUNC(sub_83C58F90);
PPC_FUNC_IMPL(__imp__sub_83C58F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58F9C"))) PPC_WEAK_FUNC(sub_83C58F9C);
PPC_FUNC_IMPL(__imp__sub_83C58F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58FA0"))) PPC_WEAK_FUNC(sub_83C58FA0);
PPC_FUNC_IMPL(__imp__sub_83C58FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19576
	ctx.r7.s64 = ctx.r8.s64 + -19576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58FC8"))) PPC_WEAK_FUNC(sub_83C58FC8);
PPC_FUNC_IMPL(__imp__sub_83C58FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,19376
	ctx.r6.s64 = ctx.r7.s64 + 19376;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19576);
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
	// std r9,19376(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C59010"))) PPC_WEAK_FUNC(sub_83C59010);
PPC_FUNC_IMPL(__imp__sub_83C59010) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// bl 0x83523120
	ctx.lr = 0x83C59028;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2848
	ctx.r3.s64 = ctx.r10.s64 + 2848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C59034;
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

__attribute__((alias("__imp__sub_83C59044"))) PPC_WEAK_FUNC(sub_83C59044);
PPC_FUNC_IMPL(__imp__sub_83C59044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59048"))) PPC_WEAK_FUNC(sub_83C59048);
PPC_FUNC_IMPL(__imp__sub_83C59048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C59054"))) PPC_WEAK_FUNC(sub_83C59054);
PPC_FUNC_IMPL(__imp__sub_83C59054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59058"))) PPC_WEAK_FUNC(sub_83C59058);
PPC_FUNC_IMPL(__imp__sub_83C59058) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x8259af80
	ctx.lr = 0x83C59070;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2880
	ctx.r3.s64 = ctx.r10.s64 + 2880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5907C;
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

__attribute__((alias("__imp__sub_83C5908C"))) PPC_WEAK_FUNC(sub_83C5908C);
PPC_FUNC_IMPL(__imp__sub_83C5908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59090"))) PPC_WEAK_FUNC(sub_83C59090);
PPC_FUNC_IMPL(__imp__sub_83C59090) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19588
	ctx.r11.s64 = ctx.r8.s64 + -19588;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,19352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19352);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2872
	ctx.r3.s64 = ctx.r6.s64 + 2872;
	// stw r10,-19588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C590C0"))) PPC_WEAK_FUNC(sub_83C590C0);
PPC_FUNC_IMPL(__imp__sub_83C590C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C590CC"))) PPC_WEAK_FUNC(sub_83C590CC);
PPC_FUNC_IMPL(__imp__sub_83C590CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C590D0"))) PPC_WEAK_FUNC(sub_83C590D0);
PPC_FUNC_IMPL(__imp__sub_83C590D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C590DC"))) PPC_WEAK_FUNC(sub_83C590DC);
PPC_FUNC_IMPL(__imp__sub_83C590DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C590E0"))) PPC_WEAK_FUNC(sub_83C590E0);
PPC_FUNC_IMPL(__imp__sub_83C590E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2904
	ctx.r3.s64 = ctx.r11.s64 + 2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C590EC"))) PPC_WEAK_FUNC(sub_83C590EC);
PPC_FUNC_IMPL(__imp__sub_83C590EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C590F0"))) PPC_WEAK_FUNC(sub_83C590F0);
PPC_FUNC_IMPL(__imp__sub_83C590F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C590FC"))) PPC_WEAK_FUNC(sub_83C590FC);
PPC_FUNC_IMPL(__imp__sub_83C590FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59100"))) PPC_WEAK_FUNC(sub_83C59100);
PPC_FUNC_IMPL(__imp__sub_83C59100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2920
	ctx.r3.s64 = ctx.r11.s64 + 2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5910C"))) PPC_WEAK_FUNC(sub_83C5910C);
PPC_FUNC_IMPL(__imp__sub_83C5910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59110"))) PPC_WEAK_FUNC(sub_83C59110);
PPC_FUNC_IMPL(__imp__sub_83C59110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2928
	ctx.r3.s64 = ctx.r11.s64 + 2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5911C"))) PPC_WEAK_FUNC(sub_83C5911C);
PPC_FUNC_IMPL(__imp__sub_83C5911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59120"))) PPC_WEAK_FUNC(sub_83C59120);
PPC_FUNC_IMPL(__imp__sub_83C59120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5912C"))) PPC_WEAK_FUNC(sub_83C5912C);
PPC_FUNC_IMPL(__imp__sub_83C5912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59130"))) PPC_WEAK_FUNC(sub_83C59130);
PPC_FUNC_IMPL(__imp__sub_83C59130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5913C"))) PPC_WEAK_FUNC(sub_83C5913C);
PPC_FUNC_IMPL(__imp__sub_83C5913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59140"))) PPC_WEAK_FUNC(sub_83C59140);
PPC_FUNC_IMPL(__imp__sub_83C59140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2952
	ctx.r3.s64 = ctx.r11.s64 + 2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5914C"))) PPC_WEAK_FUNC(sub_83C5914C);
PPC_FUNC_IMPL(__imp__sub_83C5914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59150"))) PPC_WEAK_FUNC(sub_83C59150);
PPC_FUNC_IMPL(__imp__sub_83C59150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5915C"))) PPC_WEAK_FUNC(sub_83C5915C);
PPC_FUNC_IMPL(__imp__sub_83C5915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59160"))) PPC_WEAK_FUNC(sub_83C59160);
PPC_FUNC_IMPL(__imp__sub_83C59160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5916C"))) PPC_WEAK_FUNC(sub_83C5916C);
PPC_FUNC_IMPL(__imp__sub_83C5916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59170"))) PPC_WEAK_FUNC(sub_83C59170);
PPC_FUNC_IMPL(__imp__sub_83C59170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2976
	ctx.r3.s64 = ctx.r11.s64 + 2976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5917C"))) PPC_WEAK_FUNC(sub_83C5917C);
PPC_FUNC_IMPL(__imp__sub_83C5917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59180"))) PPC_WEAK_FUNC(sub_83C59180);
PPC_FUNC_IMPL(__imp__sub_83C59180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19208
	ctx.r7.s64 = ctx.r8.s64 + -19208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C591A8"))) PPC_WEAK_FUNC(sub_83C591A8);
PPC_FUNC_IMPL(__imp__sub_83C591A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,19504
	ctx.r6.s64 = ctx.r7.s64 + 19504;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19208);
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
	// std r9,19504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C591F0"))) PPC_WEAK_FUNC(sub_83C591F0);
PPC_FUNC_IMPL(__imp__sub_83C591F0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// bl 0x83523120
	ctx.lr = 0x83C59208;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2984
	ctx.r3.s64 = ctx.r10.s64 + 2984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C59214;
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

__attribute__((alias("__imp__sub_83C59224"))) PPC_WEAK_FUNC(sub_83C59224);
PPC_FUNC_IMPL(__imp__sub_83C59224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59228"))) PPC_WEAK_FUNC(sub_83C59228);
PPC_FUNC_IMPL(__imp__sub_83C59228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C59234"))) PPC_WEAK_FUNC(sub_83C59234);
PPC_FUNC_IMPL(__imp__sub_83C59234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59238"))) PPC_WEAK_FUNC(sub_83C59238);
PPC_FUNC_IMPL(__imp__sub_83C59238) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// bl 0x8259af80
	ctx.lr = 0x83C59250;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,3016
	ctx.r3.s64 = ctx.r10.s64 + 3016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5925C;
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

__attribute__((alias("__imp__sub_83C5926C"))) PPC_WEAK_FUNC(sub_83C5926C);
PPC_FUNC_IMPL(__imp__sub_83C5926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59270"))) PPC_WEAK_FUNC(sub_83C59270);
PPC_FUNC_IMPL(__imp__sub_83C59270) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19220
	ctx.r11.s64 = ctx.r8.s64 + -19220;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,19480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3008
	ctx.r3.s64 = ctx.r6.s64 + 3008;
	// stw r10,-19220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592A0"))) PPC_WEAK_FUNC(sub_83C592A0);
PPC_FUNC_IMPL(__imp__sub_83C592A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3024
	ctx.r3.s64 = ctx.r11.s64 + 3024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592AC"))) PPC_WEAK_FUNC(sub_83C592AC);
PPC_FUNC_IMPL(__imp__sub_83C592AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C592B0"))) PPC_WEAK_FUNC(sub_83C592B0);
PPC_FUNC_IMPL(__imp__sub_83C592B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3032
	ctx.r3.s64 = ctx.r11.s64 + 3032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592BC"))) PPC_WEAK_FUNC(sub_83C592BC);
PPC_FUNC_IMPL(__imp__sub_83C592BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C592C0"))) PPC_WEAK_FUNC(sub_83C592C0);
PPC_FUNC_IMPL(__imp__sub_83C592C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3040
	ctx.r3.s64 = ctx.r11.s64 + 3040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592CC"))) PPC_WEAK_FUNC(sub_83C592CC);
PPC_FUNC_IMPL(__imp__sub_83C592CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C592D0"))) PPC_WEAK_FUNC(sub_83C592D0);
PPC_FUNC_IMPL(__imp__sub_83C592D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3048
	ctx.r3.s64 = ctx.r11.s64 + 3048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592DC"))) PPC_WEAK_FUNC(sub_83C592DC);
PPC_FUNC_IMPL(__imp__sub_83C592DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C592E0"))) PPC_WEAK_FUNC(sub_83C592E0);
PPC_FUNC_IMPL(__imp__sub_83C592E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3056
	ctx.r3.s64 = ctx.r11.s64 + 3056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592EC"))) PPC_WEAK_FUNC(sub_83C592EC);
PPC_FUNC_IMPL(__imp__sub_83C592EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C592F0"))) PPC_WEAK_FUNC(sub_83C592F0);
PPC_FUNC_IMPL(__imp__sub_83C592F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3064
	ctx.r3.s64 = ctx.r11.s64 + 3064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C592FC"))) PPC_WEAK_FUNC(sub_83C592FC);
PPC_FUNC_IMPL(__imp__sub_83C592FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59300"))) PPC_WEAK_FUNC(sub_83C59300);
PPC_FUNC_IMPL(__imp__sub_83C59300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3072
	ctx.r3.s64 = ctx.r11.s64 + 3072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5930C"))) PPC_WEAK_FUNC(sub_83C5930C);
PPC_FUNC_IMPL(__imp__sub_83C5930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59310"))) PPC_WEAK_FUNC(sub_83C59310);
PPC_FUNC_IMPL(__imp__sub_83C59310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3080
	ctx.r3.s64 = ctx.r11.s64 + 3080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5931C"))) PPC_WEAK_FUNC(sub_83C5931C);
PPC_FUNC_IMPL(__imp__sub_83C5931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59320"))) PPC_WEAK_FUNC(sub_83C59320);
PPC_FUNC_IMPL(__imp__sub_83C59320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3088
	ctx.r3.s64 = ctx.r11.s64 + 3088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5932C"))) PPC_WEAK_FUNC(sub_83C5932C);
PPC_FUNC_IMPL(__imp__sub_83C5932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59330"))) PPC_WEAK_FUNC(sub_83C59330);
PPC_FUNC_IMPL(__imp__sub_83C59330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3096
	ctx.r3.s64 = ctx.r11.s64 + 3096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5933C"))) PPC_WEAK_FUNC(sub_83C5933C);
PPC_FUNC_IMPL(__imp__sub_83C5933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59340"))) PPC_WEAK_FUNC(sub_83C59340);
PPC_FUNC_IMPL(__imp__sub_83C59340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3104
	ctx.r3.s64 = ctx.r11.s64 + 3104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5934C"))) PPC_WEAK_FUNC(sub_83C5934C);
PPC_FUNC_IMPL(__imp__sub_83C5934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59350"))) PPC_WEAK_FUNC(sub_83C59350);
PPC_FUNC_IMPL(__imp__sub_83C59350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3112
	ctx.r3.s64 = ctx.r11.s64 + 3112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5935C"))) PPC_WEAK_FUNC(sub_83C5935C);
PPC_FUNC_IMPL(__imp__sub_83C5935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59360"))) PPC_WEAK_FUNC(sub_83C59360);
PPC_FUNC_IMPL(__imp__sub_83C59360) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// bl 0x83523120
	ctx.lr = 0x83C59378;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,3120
	ctx.r3.s64 = ctx.r10.s64 + 3120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C59384;
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

__attribute__((alias("__imp__sub_83C59394"))) PPC_WEAK_FUNC(sub_83C59394);
PPC_FUNC_IMPL(__imp__sub_83C59394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59398"))) PPC_WEAK_FUNC(sub_83C59398);
PPC_FUNC_IMPL(__imp__sub_83C59398) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18840
	ctx.r7.s64 = ctx.r8.s64 + -18840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18840);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18840, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C593C0"))) PPC_WEAK_FUNC(sub_83C593C0);
PPC_FUNC_IMPL(__imp__sub_83C593C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,19632
	ctx.r6.s64 = ctx.r7.s64 + 19632;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18840(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18840);
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
	// std r9,19632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C59408"))) PPC_WEAK_FUNC(sub_83C59408);
PPC_FUNC_IMPL(__imp__sub_83C59408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3136
	ctx.r3.s64 = ctx.r11.s64 + 3136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C59414"))) PPC_WEAK_FUNC(sub_83C59414);
PPC_FUNC_IMPL(__imp__sub_83C59414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59418"))) PPC_WEAK_FUNC(sub_83C59418);
PPC_FUNC_IMPL(__imp__sub_83C59418) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// bl 0x8259af80
	ctx.lr = 0x83C59430;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,3152
	ctx.r3.s64 = ctx.r10.s64 + 3152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5943C;
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

__attribute__((alias("__imp__sub_83C5944C"))) PPC_WEAK_FUNC(sub_83C5944C);
PPC_FUNC_IMPL(__imp__sub_83C5944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C59450"))) PPC_WEAK_FUNC(sub_83C59450);
PPC_FUNC_IMPL(__imp__sub_83C59450) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18852
	ctx.r11.s64 = ctx.r8.s64 + -18852;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,19608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3144
	ctx.r3.s64 = ctx.r6.s64 + 3144;
	// stw r10,-18852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18852, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C59480"))) PPC_WEAK_FUNC(sub_83C59480);
PPC_FUNC_IMPL(__imp__sub_83C59480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,3160
	ctx.r3.s64 = ctx.r11.s64 + 3160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

