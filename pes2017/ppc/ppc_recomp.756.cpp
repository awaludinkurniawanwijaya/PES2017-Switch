#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3386C"))) PPC_WEAK_FUNC(sub_83C3386C);
PPC_FUNC_IMPL(__imp__sub_83C3386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33870"))) PPC_WEAK_FUNC(sub_83C33870);
PPC_FUNC_IMPL(__imp__sub_83C33870) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11876
	ctx.r11.s64 = ctx.r8.s64 + 11876;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30196);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19200
	ctx.r3.s64 = ctx.r6.s64 + 19200;
	// stw r10,11876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338A0"))) PPC_WEAK_FUNC(sub_83C338A0);
PPC_FUNC_IMPL(__imp__sub_83C338A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338AC"))) PPC_WEAK_FUNC(sub_83C338AC);
PPC_FUNC_IMPL(__imp__sub_83C338AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C338B0"))) PPC_WEAK_FUNC(sub_83C338B0);
PPC_FUNC_IMPL(__imp__sub_83C338B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19224
	ctx.r3.s64 = ctx.r11.s64 + 19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338BC"))) PPC_WEAK_FUNC(sub_83C338BC);
PPC_FUNC_IMPL(__imp__sub_83C338BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C338C0"))) PPC_WEAK_FUNC(sub_83C338C0);
PPC_FUNC_IMPL(__imp__sub_83C338C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19232
	ctx.r3.s64 = ctx.r11.s64 + 19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338CC"))) PPC_WEAK_FUNC(sub_83C338CC);
PPC_FUNC_IMPL(__imp__sub_83C338CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C338D0"))) PPC_WEAK_FUNC(sub_83C338D0);
PPC_FUNC_IMPL(__imp__sub_83C338D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19240
	ctx.r3.s64 = ctx.r11.s64 + 19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338DC"))) PPC_WEAK_FUNC(sub_83C338DC);
PPC_FUNC_IMPL(__imp__sub_83C338DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C338E0"))) PPC_WEAK_FUNC(sub_83C338E0);
PPC_FUNC_IMPL(__imp__sub_83C338E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19248
	ctx.r3.s64 = ctx.r11.s64 + 19248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338EC"))) PPC_WEAK_FUNC(sub_83C338EC);
PPC_FUNC_IMPL(__imp__sub_83C338EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C338F0"))) PPC_WEAK_FUNC(sub_83C338F0);
PPC_FUNC_IMPL(__imp__sub_83C338F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19256
	ctx.r3.s64 = ctx.r11.s64 + 19256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C338FC"))) PPC_WEAK_FUNC(sub_83C338FC);
PPC_FUNC_IMPL(__imp__sub_83C338FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33900"))) PPC_WEAK_FUNC(sub_83C33900);
PPC_FUNC_IMPL(__imp__sub_83C33900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19264
	ctx.r3.s64 = ctx.r11.s64 + 19264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3390C"))) PPC_WEAK_FUNC(sub_83C3390C);
PPC_FUNC_IMPL(__imp__sub_83C3390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33910"))) PPC_WEAK_FUNC(sub_83C33910);
PPC_FUNC_IMPL(__imp__sub_83C33910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19272
	ctx.r3.s64 = ctx.r11.s64 + 19272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3391C"))) PPC_WEAK_FUNC(sub_83C3391C);
PPC_FUNC_IMPL(__imp__sub_83C3391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33920"))) PPC_WEAK_FUNC(sub_83C33920);
PPC_FUNC_IMPL(__imp__sub_83C33920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19280
	ctx.r3.s64 = ctx.r11.s64 + 19280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3392C"))) PPC_WEAK_FUNC(sub_83C3392C);
PPC_FUNC_IMPL(__imp__sub_83C3392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33930"))) PPC_WEAK_FUNC(sub_83C33930);
PPC_FUNC_IMPL(__imp__sub_83C33930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19288
	ctx.r3.s64 = ctx.r11.s64 + 19288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3393C"))) PPC_WEAK_FUNC(sub_83C3393C);
PPC_FUNC_IMPL(__imp__sub_83C3393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33940"))) PPC_WEAK_FUNC(sub_83C33940);
PPC_FUNC_IMPL(__imp__sub_83C33940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19296
	ctx.r3.s64 = ctx.r11.s64 + 19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3394C"))) PPC_WEAK_FUNC(sub_83C3394C);
PPC_FUNC_IMPL(__imp__sub_83C3394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33950"))) PPC_WEAK_FUNC(sub_83C33950);
PPC_FUNC_IMPL(__imp__sub_83C33950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19304
	ctx.r3.s64 = ctx.r11.s64 + 19304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3395C"))) PPC_WEAK_FUNC(sub_83C3395C);
PPC_FUNC_IMPL(__imp__sub_83C3395C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33960"))) PPC_WEAK_FUNC(sub_83C33960);
PPC_FUNC_IMPL(__imp__sub_83C33960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12256
	ctx.r7.s64 = ctx.r8.s64 + 12256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33988"))) PPC_WEAK_FUNC(sub_83C33988);
PPC_FUNC_IMPL(__imp__sub_83C33988) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30044
	ctx.r6.s64 = ctx.r7.s64 + -30044;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
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
	// std r9,-30044(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C339D0"))) PPC_WEAK_FUNC(sub_83C339D0);
PPC_FUNC_IMPL(__imp__sub_83C339D0) {
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
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// bl 0x83523120
	ctx.lr = 0x83C339E8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19312
	ctx.r3.s64 = ctx.r10.s64 + 19312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C339F4;
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

__attribute__((alias("__imp__sub_83C33A04"))) PPC_WEAK_FUNC(sub_83C33A04);
PPC_FUNC_IMPL(__imp__sub_83C33A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33A08"))) PPC_WEAK_FUNC(sub_83C33A08);
PPC_FUNC_IMPL(__imp__sub_83C33A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19328
	ctx.r3.s64 = ctx.r11.s64 + 19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33A14"))) PPC_WEAK_FUNC(sub_83C33A14);
PPC_FUNC_IMPL(__imp__sub_83C33A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33A18"))) PPC_WEAK_FUNC(sub_83C33A18);
PPC_FUNC_IMPL(__imp__sub_83C33A18) {
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
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x8259af80
	ctx.lr = 0x83C33A30;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19344
	ctx.r3.s64 = ctx.r10.s64 + 19344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33A3C;
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

__attribute__((alias("__imp__sub_83C33A4C"))) PPC_WEAK_FUNC(sub_83C33A4C);
PPC_FUNC_IMPL(__imp__sub_83C33A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33A50"))) PPC_WEAK_FUNC(sub_83C33A50);
PPC_FUNC_IMPL(__imp__sub_83C33A50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12244
	ctx.r11.s64 = ctx.r8.s64 + 12244;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19336
	ctx.r3.s64 = ctx.r6.s64 + 19336;
	// stw r10,12244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33A80"))) PPC_WEAK_FUNC(sub_83C33A80);
PPC_FUNC_IMPL(__imp__sub_83C33A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19352
	ctx.r3.s64 = ctx.r11.s64 + 19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33A8C"))) PPC_WEAK_FUNC(sub_83C33A8C);
PPC_FUNC_IMPL(__imp__sub_83C33A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33A90"))) PPC_WEAK_FUNC(sub_83C33A90);
PPC_FUNC_IMPL(__imp__sub_83C33A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19360
	ctx.r3.s64 = ctx.r11.s64 + 19360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33A9C"))) PPC_WEAK_FUNC(sub_83C33A9C);
PPC_FUNC_IMPL(__imp__sub_83C33A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AA0"))) PPC_WEAK_FUNC(sub_83C33AA0);
PPC_FUNC_IMPL(__imp__sub_83C33AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19368
	ctx.r3.s64 = ctx.r11.s64 + 19368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33AAC"))) PPC_WEAK_FUNC(sub_83C33AAC);
PPC_FUNC_IMPL(__imp__sub_83C33AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AB0"))) PPC_WEAK_FUNC(sub_83C33AB0);
PPC_FUNC_IMPL(__imp__sub_83C33AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19376
	ctx.r3.s64 = ctx.r11.s64 + 19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33ABC"))) PPC_WEAK_FUNC(sub_83C33ABC);
PPC_FUNC_IMPL(__imp__sub_83C33ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AC0"))) PPC_WEAK_FUNC(sub_83C33AC0);
PPC_FUNC_IMPL(__imp__sub_83C33AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19384
	ctx.r3.s64 = ctx.r11.s64 + 19384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33ACC"))) PPC_WEAK_FUNC(sub_83C33ACC);
PPC_FUNC_IMPL(__imp__sub_83C33ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AD0"))) PPC_WEAK_FUNC(sub_83C33AD0);
PPC_FUNC_IMPL(__imp__sub_83C33AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19392
	ctx.r3.s64 = ctx.r11.s64 + 19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33ADC"))) PPC_WEAK_FUNC(sub_83C33ADC);
PPC_FUNC_IMPL(__imp__sub_83C33ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AE0"))) PPC_WEAK_FUNC(sub_83C33AE0);
PPC_FUNC_IMPL(__imp__sub_83C33AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19400
	ctx.r3.s64 = ctx.r11.s64 + 19400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33AEC"))) PPC_WEAK_FUNC(sub_83C33AEC);
PPC_FUNC_IMPL(__imp__sub_83C33AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33AF0"))) PPC_WEAK_FUNC(sub_83C33AF0);
PPC_FUNC_IMPL(__imp__sub_83C33AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19408
	ctx.r3.s64 = ctx.r11.s64 + 19408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33AFC"))) PPC_WEAK_FUNC(sub_83C33AFC);
PPC_FUNC_IMPL(__imp__sub_83C33AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B00"))) PPC_WEAK_FUNC(sub_83C33B00);
PPC_FUNC_IMPL(__imp__sub_83C33B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B0C"))) PPC_WEAK_FUNC(sub_83C33B0C);
PPC_FUNC_IMPL(__imp__sub_83C33B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B10"))) PPC_WEAK_FUNC(sub_83C33B10);
PPC_FUNC_IMPL(__imp__sub_83C33B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19424
	ctx.r3.s64 = ctx.r11.s64 + 19424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B1C"))) PPC_WEAK_FUNC(sub_83C33B1C);
PPC_FUNC_IMPL(__imp__sub_83C33B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B20"))) PPC_WEAK_FUNC(sub_83C33B20);
PPC_FUNC_IMPL(__imp__sub_83C33B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19432
	ctx.r3.s64 = ctx.r11.s64 + 19432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B2C"))) PPC_WEAK_FUNC(sub_83C33B2C);
PPC_FUNC_IMPL(__imp__sub_83C33B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B30"))) PPC_WEAK_FUNC(sub_83C33B30);
PPC_FUNC_IMPL(__imp__sub_83C33B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19440
	ctx.r3.s64 = ctx.r11.s64 + 19440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B3C"))) PPC_WEAK_FUNC(sub_83C33B3C);
PPC_FUNC_IMPL(__imp__sub_83C33B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B40"))) PPC_WEAK_FUNC(sub_83C33B40);
PPC_FUNC_IMPL(__imp__sub_83C33B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19448
	ctx.r3.s64 = ctx.r11.s64 + 19448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B4C"))) PPC_WEAK_FUNC(sub_83C33B4C);
PPC_FUNC_IMPL(__imp__sub_83C33B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B50"))) PPC_WEAK_FUNC(sub_83C33B50);
PPC_FUNC_IMPL(__imp__sub_83C33B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19456
	ctx.r3.s64 = ctx.r11.s64 + 19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B5C"))) PPC_WEAK_FUNC(sub_83C33B5C);
PPC_FUNC_IMPL(__imp__sub_83C33B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B60"))) PPC_WEAK_FUNC(sub_83C33B60);
PPC_FUNC_IMPL(__imp__sub_83C33B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19464
	ctx.r3.s64 = ctx.r11.s64 + 19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B6C"))) PPC_WEAK_FUNC(sub_83C33B6C);
PPC_FUNC_IMPL(__imp__sub_83C33B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B70"))) PPC_WEAK_FUNC(sub_83C33B70);
PPC_FUNC_IMPL(__imp__sub_83C33B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19472
	ctx.r3.s64 = ctx.r11.s64 + 19472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B7C"))) PPC_WEAK_FUNC(sub_83C33B7C);
PPC_FUNC_IMPL(__imp__sub_83C33B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B80"))) PPC_WEAK_FUNC(sub_83C33B80);
PPC_FUNC_IMPL(__imp__sub_83C33B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19480
	ctx.r3.s64 = ctx.r11.s64 + 19480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B8C"))) PPC_WEAK_FUNC(sub_83C33B8C);
PPC_FUNC_IMPL(__imp__sub_83C33B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33B90"))) PPC_WEAK_FUNC(sub_83C33B90);
PPC_FUNC_IMPL(__imp__sub_83C33B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33B9C"))) PPC_WEAK_FUNC(sub_83C33B9C);
PPC_FUNC_IMPL(__imp__sub_83C33B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BA0"))) PPC_WEAK_FUNC(sub_83C33BA0);
PPC_FUNC_IMPL(__imp__sub_83C33BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19496
	ctx.r3.s64 = ctx.r11.s64 + 19496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BAC"))) PPC_WEAK_FUNC(sub_83C33BAC);
PPC_FUNC_IMPL(__imp__sub_83C33BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BB0"))) PPC_WEAK_FUNC(sub_83C33BB0);
PPC_FUNC_IMPL(__imp__sub_83C33BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19504
	ctx.r3.s64 = ctx.r11.s64 + 19504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BBC"))) PPC_WEAK_FUNC(sub_83C33BBC);
PPC_FUNC_IMPL(__imp__sub_83C33BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BC0"))) PPC_WEAK_FUNC(sub_83C33BC0);
PPC_FUNC_IMPL(__imp__sub_83C33BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19512
	ctx.r3.s64 = ctx.r11.s64 + 19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BCC"))) PPC_WEAK_FUNC(sub_83C33BCC);
PPC_FUNC_IMPL(__imp__sub_83C33BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BD0"))) PPC_WEAK_FUNC(sub_83C33BD0);
PPC_FUNC_IMPL(__imp__sub_83C33BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BDC"))) PPC_WEAK_FUNC(sub_83C33BDC);
PPC_FUNC_IMPL(__imp__sub_83C33BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BE0"))) PPC_WEAK_FUNC(sub_83C33BE0);
PPC_FUNC_IMPL(__imp__sub_83C33BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BEC"))) PPC_WEAK_FUNC(sub_83C33BEC);
PPC_FUNC_IMPL(__imp__sub_83C33BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33BF0"))) PPC_WEAK_FUNC(sub_83C33BF0);
PPC_FUNC_IMPL(__imp__sub_83C33BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19536
	ctx.r3.s64 = ctx.r11.s64 + 19536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33BFC"))) PPC_WEAK_FUNC(sub_83C33BFC);
PPC_FUNC_IMPL(__imp__sub_83C33BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33C00"))) PPC_WEAK_FUNC(sub_83C33C00);
PPC_FUNC_IMPL(__imp__sub_83C33C00) {
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
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// bl 0x83523120
	ctx.lr = 0x83C33C18;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19544
	ctx.r3.s64 = ctx.r10.s64 + 19544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33C24;
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

__attribute__((alias("__imp__sub_83C33C34"))) PPC_WEAK_FUNC(sub_83C33C34);
PPC_FUNC_IMPL(__imp__sub_83C33C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33C38"))) PPC_WEAK_FUNC(sub_83C33C38);
PPC_FUNC_IMPL(__imp__sub_83C33C38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12640
	ctx.r7.s64 = ctx.r8.s64 + 12640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33C60"))) PPC_WEAK_FUNC(sub_83C33C60);
PPC_FUNC_IMPL(__imp__sub_83C33C60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-29804
	ctx.r6.s64 = ctx.r7.s64 + -29804;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29876(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29876);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12640);
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
	// std r9,-29804(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33CA8"))) PPC_WEAK_FUNC(sub_83C33CA8);
PPC_FUNC_IMPL(__imp__sub_83C33CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19560
	ctx.r3.s64 = ctx.r11.s64 + 19560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33CB4"))) PPC_WEAK_FUNC(sub_83C33CB4);
PPC_FUNC_IMPL(__imp__sub_83C33CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33CB8"))) PPC_WEAK_FUNC(sub_83C33CB8);
PPC_FUNC_IMPL(__imp__sub_83C33CB8) {
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
	// addi r3,r11,12648
	ctx.r3.s64 = ctx.r11.s64 + 12648;
	// bl 0x8259af80
	ctx.lr = 0x83C33CD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19576
	ctx.r3.s64 = ctx.r10.s64 + 19576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33CDC;
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

__attribute__((alias("__imp__sub_83C33CEC"))) PPC_WEAK_FUNC(sub_83C33CEC);
PPC_FUNC_IMPL(__imp__sub_83C33CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33CF0"))) PPC_WEAK_FUNC(sub_83C33CF0);
PPC_FUNC_IMPL(__imp__sub_83C33CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12628
	ctx.r11.s64 = ctx.r8.s64 + 12628;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-29828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29828);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19568
	ctx.r3.s64 = ctx.r6.s64 + 19568;
	// stw r10,12628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D20"))) PPC_WEAK_FUNC(sub_83C33D20);
PPC_FUNC_IMPL(__imp__sub_83C33D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D2C"))) PPC_WEAK_FUNC(sub_83C33D2C);
PPC_FUNC_IMPL(__imp__sub_83C33D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D30"))) PPC_WEAK_FUNC(sub_83C33D30);
PPC_FUNC_IMPL(__imp__sub_83C33D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19592
	ctx.r3.s64 = ctx.r11.s64 + 19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D3C"))) PPC_WEAK_FUNC(sub_83C33D3C);
PPC_FUNC_IMPL(__imp__sub_83C33D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D40"))) PPC_WEAK_FUNC(sub_83C33D40);
PPC_FUNC_IMPL(__imp__sub_83C33D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19600
	ctx.r3.s64 = ctx.r11.s64 + 19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D4C"))) PPC_WEAK_FUNC(sub_83C33D4C);
PPC_FUNC_IMPL(__imp__sub_83C33D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D50"))) PPC_WEAK_FUNC(sub_83C33D50);
PPC_FUNC_IMPL(__imp__sub_83C33D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19608
	ctx.r3.s64 = ctx.r11.s64 + 19608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D5C"))) PPC_WEAK_FUNC(sub_83C33D5C);
PPC_FUNC_IMPL(__imp__sub_83C33D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D60"))) PPC_WEAK_FUNC(sub_83C33D60);
PPC_FUNC_IMPL(__imp__sub_83C33D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19616
	ctx.r3.s64 = ctx.r11.s64 + 19616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D6C"))) PPC_WEAK_FUNC(sub_83C33D6C);
PPC_FUNC_IMPL(__imp__sub_83C33D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D70"))) PPC_WEAK_FUNC(sub_83C33D70);
PPC_FUNC_IMPL(__imp__sub_83C33D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D7C"))) PPC_WEAK_FUNC(sub_83C33D7C);
PPC_FUNC_IMPL(__imp__sub_83C33D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D80"))) PPC_WEAK_FUNC(sub_83C33D80);
PPC_FUNC_IMPL(__imp__sub_83C33D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19632
	ctx.r3.s64 = ctx.r11.s64 + 19632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D8C"))) PPC_WEAK_FUNC(sub_83C33D8C);
PPC_FUNC_IMPL(__imp__sub_83C33D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33D90"))) PPC_WEAK_FUNC(sub_83C33D90);
PPC_FUNC_IMPL(__imp__sub_83C33D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19640
	ctx.r3.s64 = ctx.r11.s64 + 19640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33D9C"))) PPC_WEAK_FUNC(sub_83C33D9C);
PPC_FUNC_IMPL(__imp__sub_83C33D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DA0"))) PPC_WEAK_FUNC(sub_83C33DA0);
PPC_FUNC_IMPL(__imp__sub_83C33DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DAC"))) PPC_WEAK_FUNC(sub_83C33DAC);
PPC_FUNC_IMPL(__imp__sub_83C33DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DB0"))) PPC_WEAK_FUNC(sub_83C33DB0);
PPC_FUNC_IMPL(__imp__sub_83C33DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19656
	ctx.r3.s64 = ctx.r11.s64 + 19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DBC"))) PPC_WEAK_FUNC(sub_83C33DBC);
PPC_FUNC_IMPL(__imp__sub_83C33DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DC0"))) PPC_WEAK_FUNC(sub_83C33DC0);
PPC_FUNC_IMPL(__imp__sub_83C33DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19664
	ctx.r3.s64 = ctx.r11.s64 + 19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DCC"))) PPC_WEAK_FUNC(sub_83C33DCC);
PPC_FUNC_IMPL(__imp__sub_83C33DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DD0"))) PPC_WEAK_FUNC(sub_83C33DD0);
PPC_FUNC_IMPL(__imp__sub_83C33DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19672
	ctx.r3.s64 = ctx.r11.s64 + 19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DDC"))) PPC_WEAK_FUNC(sub_83C33DDC);
PPC_FUNC_IMPL(__imp__sub_83C33DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DE0"))) PPC_WEAK_FUNC(sub_83C33DE0);
PPC_FUNC_IMPL(__imp__sub_83C33DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DEC"))) PPC_WEAK_FUNC(sub_83C33DEC);
PPC_FUNC_IMPL(__imp__sub_83C33DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33DF0"))) PPC_WEAK_FUNC(sub_83C33DF0);
PPC_FUNC_IMPL(__imp__sub_83C33DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33DFC"))) PPC_WEAK_FUNC(sub_83C33DFC);
PPC_FUNC_IMPL(__imp__sub_83C33DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E00"))) PPC_WEAK_FUNC(sub_83C33E00);
PPC_FUNC_IMPL(__imp__sub_83C33E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E0C"))) PPC_WEAK_FUNC(sub_83C33E0C);
PPC_FUNC_IMPL(__imp__sub_83C33E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E10"))) PPC_WEAK_FUNC(sub_83C33E10);
PPC_FUNC_IMPL(__imp__sub_83C33E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E1C"))) PPC_WEAK_FUNC(sub_83C33E1C);
PPC_FUNC_IMPL(__imp__sub_83C33E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E20"))) PPC_WEAK_FUNC(sub_83C33E20);
PPC_FUNC_IMPL(__imp__sub_83C33E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E2C"))) PPC_WEAK_FUNC(sub_83C33E2C);
PPC_FUNC_IMPL(__imp__sub_83C33E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E30"))) PPC_WEAK_FUNC(sub_83C33E30);
PPC_FUNC_IMPL(__imp__sub_83C33E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19720
	ctx.r3.s64 = ctx.r11.s64 + 19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E3C"))) PPC_WEAK_FUNC(sub_83C33E3C);
PPC_FUNC_IMPL(__imp__sub_83C33E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E40"))) PPC_WEAK_FUNC(sub_83C33E40);
PPC_FUNC_IMPL(__imp__sub_83C33E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E4C"))) PPC_WEAK_FUNC(sub_83C33E4C);
PPC_FUNC_IMPL(__imp__sub_83C33E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E50"))) PPC_WEAK_FUNC(sub_83C33E50);
PPC_FUNC_IMPL(__imp__sub_83C33E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E5C"))) PPC_WEAK_FUNC(sub_83C33E5C);
PPC_FUNC_IMPL(__imp__sub_83C33E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E60"))) PPC_WEAK_FUNC(sub_83C33E60);
PPC_FUNC_IMPL(__imp__sub_83C33E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19744
	ctx.r3.s64 = ctx.r11.s64 + 19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E6C"))) PPC_WEAK_FUNC(sub_83C33E6C);
PPC_FUNC_IMPL(__imp__sub_83C33E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E70"))) PPC_WEAK_FUNC(sub_83C33E70);
PPC_FUNC_IMPL(__imp__sub_83C33E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19752
	ctx.r3.s64 = ctx.r11.s64 + 19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E7C"))) PPC_WEAK_FUNC(sub_83C33E7C);
PPC_FUNC_IMPL(__imp__sub_83C33E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E80"))) PPC_WEAK_FUNC(sub_83C33E80);
PPC_FUNC_IMPL(__imp__sub_83C33E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E8C"))) PPC_WEAK_FUNC(sub_83C33E8C);
PPC_FUNC_IMPL(__imp__sub_83C33E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33E90"))) PPC_WEAK_FUNC(sub_83C33E90);
PPC_FUNC_IMPL(__imp__sub_83C33E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33E9C"))) PPC_WEAK_FUNC(sub_83C33E9C);
PPC_FUNC_IMPL(__imp__sub_83C33E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33EA0"))) PPC_WEAK_FUNC(sub_83C33EA0);
PPC_FUNC_IMPL(__imp__sub_83C33EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19776
	ctx.r3.s64 = ctx.r11.s64 + 19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33EAC"))) PPC_WEAK_FUNC(sub_83C33EAC);
PPC_FUNC_IMPL(__imp__sub_83C33EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33EB0"))) PPC_WEAK_FUNC(sub_83C33EB0);
PPC_FUNC_IMPL(__imp__sub_83C33EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33EBC"))) PPC_WEAK_FUNC(sub_83C33EBC);
PPC_FUNC_IMPL(__imp__sub_83C33EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33EC0"))) PPC_WEAK_FUNC(sub_83C33EC0);
PPC_FUNC_IMPL(__imp__sub_83C33EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33ECC"))) PPC_WEAK_FUNC(sub_83C33ECC);
PPC_FUNC_IMPL(__imp__sub_83C33ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33ED0"))) PPC_WEAK_FUNC(sub_83C33ED0);
PPC_FUNC_IMPL(__imp__sub_83C33ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33EDC"))) PPC_WEAK_FUNC(sub_83C33EDC);
PPC_FUNC_IMPL(__imp__sub_83C33EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33EE0"))) PPC_WEAK_FUNC(sub_83C33EE0);
PPC_FUNC_IMPL(__imp__sub_83C33EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33EEC"))) PPC_WEAK_FUNC(sub_83C33EEC);
PPC_FUNC_IMPL(__imp__sub_83C33EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33EF0"))) PPC_WEAK_FUNC(sub_83C33EF0);
PPC_FUNC_IMPL(__imp__sub_83C33EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33EFC"))) PPC_WEAK_FUNC(sub_83C33EFC);
PPC_FUNC_IMPL(__imp__sub_83C33EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F00"))) PPC_WEAK_FUNC(sub_83C33F00);
PPC_FUNC_IMPL(__imp__sub_83C33F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F0C"))) PPC_WEAK_FUNC(sub_83C33F0C);
PPC_FUNC_IMPL(__imp__sub_83C33F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F10"))) PPC_WEAK_FUNC(sub_83C33F10);
PPC_FUNC_IMPL(__imp__sub_83C33F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19832
	ctx.r3.s64 = ctx.r11.s64 + 19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F1C"))) PPC_WEAK_FUNC(sub_83C33F1C);
PPC_FUNC_IMPL(__imp__sub_83C33F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F20"))) PPC_WEAK_FUNC(sub_83C33F20);
PPC_FUNC_IMPL(__imp__sub_83C33F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F2C"))) PPC_WEAK_FUNC(sub_83C33F2C);
PPC_FUNC_IMPL(__imp__sub_83C33F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F30"))) PPC_WEAK_FUNC(sub_83C33F30);
PPC_FUNC_IMPL(__imp__sub_83C33F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F3C"))) PPC_WEAK_FUNC(sub_83C33F3C);
PPC_FUNC_IMPL(__imp__sub_83C33F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F40"))) PPC_WEAK_FUNC(sub_83C33F40);
PPC_FUNC_IMPL(__imp__sub_83C33F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F4C"))) PPC_WEAK_FUNC(sub_83C33F4C);
PPC_FUNC_IMPL(__imp__sub_83C33F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F50"))) PPC_WEAK_FUNC(sub_83C33F50);
PPC_FUNC_IMPL(__imp__sub_83C33F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F5C"))) PPC_WEAK_FUNC(sub_83C33F5C);
PPC_FUNC_IMPL(__imp__sub_83C33F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F60"))) PPC_WEAK_FUNC(sub_83C33F60);
PPC_FUNC_IMPL(__imp__sub_83C33F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F6C"))) PPC_WEAK_FUNC(sub_83C33F6C);
PPC_FUNC_IMPL(__imp__sub_83C33F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F70"))) PPC_WEAK_FUNC(sub_83C33F70);
PPC_FUNC_IMPL(__imp__sub_83C33F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19880
	ctx.r3.s64 = ctx.r11.s64 + 19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F7C"))) PPC_WEAK_FUNC(sub_83C33F7C);
PPC_FUNC_IMPL(__imp__sub_83C33F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F80"))) PPC_WEAK_FUNC(sub_83C33F80);
PPC_FUNC_IMPL(__imp__sub_83C33F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F8C"))) PPC_WEAK_FUNC(sub_83C33F8C);
PPC_FUNC_IMPL(__imp__sub_83C33F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33F90"))) PPC_WEAK_FUNC(sub_83C33F90);
PPC_FUNC_IMPL(__imp__sub_83C33F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33F9C"))) PPC_WEAK_FUNC(sub_83C33F9C);
PPC_FUNC_IMPL(__imp__sub_83C33F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FA0"))) PPC_WEAK_FUNC(sub_83C33FA0);
PPC_FUNC_IMPL(__imp__sub_83C33FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FAC"))) PPC_WEAK_FUNC(sub_83C33FAC);
PPC_FUNC_IMPL(__imp__sub_83C33FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FB0"))) PPC_WEAK_FUNC(sub_83C33FB0);
PPC_FUNC_IMPL(__imp__sub_83C33FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19912
	ctx.r3.s64 = ctx.r11.s64 + 19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FBC"))) PPC_WEAK_FUNC(sub_83C33FBC);
PPC_FUNC_IMPL(__imp__sub_83C33FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FC0"))) PPC_WEAK_FUNC(sub_83C33FC0);
PPC_FUNC_IMPL(__imp__sub_83C33FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19920
	ctx.r3.s64 = ctx.r11.s64 + 19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FCC"))) PPC_WEAK_FUNC(sub_83C33FCC);
PPC_FUNC_IMPL(__imp__sub_83C33FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FD0"))) PPC_WEAK_FUNC(sub_83C33FD0);
PPC_FUNC_IMPL(__imp__sub_83C33FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FDC"))) PPC_WEAK_FUNC(sub_83C33FDC);
PPC_FUNC_IMPL(__imp__sub_83C33FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FE0"))) PPC_WEAK_FUNC(sub_83C33FE0);
PPC_FUNC_IMPL(__imp__sub_83C33FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FEC"))) PPC_WEAK_FUNC(sub_83C33FEC);
PPC_FUNC_IMPL(__imp__sub_83C33FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33FF0"))) PPC_WEAK_FUNC(sub_83C33FF0);
PPC_FUNC_IMPL(__imp__sub_83C33FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33FFC"))) PPC_WEAK_FUNC(sub_83C33FFC);
PPC_FUNC_IMPL(__imp__sub_83C33FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34000"))) PPC_WEAK_FUNC(sub_83C34000);
PPC_FUNC_IMPL(__imp__sub_83C34000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3400C"))) PPC_WEAK_FUNC(sub_83C3400C);
PPC_FUNC_IMPL(__imp__sub_83C3400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34010"))) PPC_WEAK_FUNC(sub_83C34010);
PPC_FUNC_IMPL(__imp__sub_83C34010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3401C"))) PPC_WEAK_FUNC(sub_83C3401C);
PPC_FUNC_IMPL(__imp__sub_83C3401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34020"))) PPC_WEAK_FUNC(sub_83C34020);
PPC_FUNC_IMPL(__imp__sub_83C34020) {
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
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// bl 0x83523120
	ctx.lr = 0x83C34038;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19968
	ctx.r3.s64 = ctx.r10.s64 + 19968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34044;
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

__attribute__((alias("__imp__sub_83C34054"))) PPC_WEAK_FUNC(sub_83C34054);
PPC_FUNC_IMPL(__imp__sub_83C34054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34058"))) PPC_WEAK_FUNC(sub_83C34058);
PPC_FUNC_IMPL(__imp__sub_83C34058) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13024
	ctx.r7.s64 = ctx.r8.s64 + 13024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34080"))) PPC_WEAK_FUNC(sub_83C34080);
PPC_FUNC_IMPL(__imp__sub_83C34080) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-29364
	ctx.r6.s64 = ctx.r7.s64 + -29364;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29436(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29436);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13024);
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
	// std r9,-29364(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29364, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C340C8"))) PPC_WEAK_FUNC(sub_83C340C8);
PPC_FUNC_IMPL(__imp__sub_83C340C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C340D4"))) PPC_WEAK_FUNC(sub_83C340D4);
PPC_FUNC_IMPL(__imp__sub_83C340D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C340D8"))) PPC_WEAK_FUNC(sub_83C340D8);
PPC_FUNC_IMPL(__imp__sub_83C340D8) {
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
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// bl 0x8259af80
	ctx.lr = 0x83C340F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20000
	ctx.r3.s64 = ctx.r10.s64 + 20000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C340FC;
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

__attribute__((alias("__imp__sub_83C3410C"))) PPC_WEAK_FUNC(sub_83C3410C);
PPC_FUNC_IMPL(__imp__sub_83C3410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34110"))) PPC_WEAK_FUNC(sub_83C34110);
PPC_FUNC_IMPL(__imp__sub_83C34110) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13012
	ctx.r11.s64 = ctx.r8.s64 + 13012;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-29388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29388);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19992
	ctx.r3.s64 = ctx.r6.s64 + 19992;
	// stw r10,13012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34140"))) PPC_WEAK_FUNC(sub_83C34140);
PPC_FUNC_IMPL(__imp__sub_83C34140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3414C"))) PPC_WEAK_FUNC(sub_83C3414C);
PPC_FUNC_IMPL(__imp__sub_83C3414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34150"))) PPC_WEAK_FUNC(sub_83C34150);
PPC_FUNC_IMPL(__imp__sub_83C34150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3415C"))) PPC_WEAK_FUNC(sub_83C3415C);
PPC_FUNC_IMPL(__imp__sub_83C3415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34160"))) PPC_WEAK_FUNC(sub_83C34160);
PPC_FUNC_IMPL(__imp__sub_83C34160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3416C"))) PPC_WEAK_FUNC(sub_83C3416C);
PPC_FUNC_IMPL(__imp__sub_83C3416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34170"))) PPC_WEAK_FUNC(sub_83C34170);
PPC_FUNC_IMPL(__imp__sub_83C34170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3417C"))) PPC_WEAK_FUNC(sub_83C3417C);
PPC_FUNC_IMPL(__imp__sub_83C3417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34180"))) PPC_WEAK_FUNC(sub_83C34180);
PPC_FUNC_IMPL(__imp__sub_83C34180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3418C"))) PPC_WEAK_FUNC(sub_83C3418C);
PPC_FUNC_IMPL(__imp__sub_83C3418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34190"))) PPC_WEAK_FUNC(sub_83C34190);
PPC_FUNC_IMPL(__imp__sub_83C34190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3419C"))) PPC_WEAK_FUNC(sub_83C3419C);
PPC_FUNC_IMPL(__imp__sub_83C3419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341A0"))) PPC_WEAK_FUNC(sub_83C341A0);
PPC_FUNC_IMPL(__imp__sub_83C341A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341AC"))) PPC_WEAK_FUNC(sub_83C341AC);
PPC_FUNC_IMPL(__imp__sub_83C341AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341B0"))) PPC_WEAK_FUNC(sub_83C341B0);
PPC_FUNC_IMPL(__imp__sub_83C341B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341BC"))) PPC_WEAK_FUNC(sub_83C341BC);
PPC_FUNC_IMPL(__imp__sub_83C341BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341C0"))) PPC_WEAK_FUNC(sub_83C341C0);
PPC_FUNC_IMPL(__imp__sub_83C341C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341CC"))) PPC_WEAK_FUNC(sub_83C341CC);
PPC_FUNC_IMPL(__imp__sub_83C341CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341D0"))) PPC_WEAK_FUNC(sub_83C341D0);
PPC_FUNC_IMPL(__imp__sub_83C341D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341DC"))) PPC_WEAK_FUNC(sub_83C341DC);
PPC_FUNC_IMPL(__imp__sub_83C341DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341E0"))) PPC_WEAK_FUNC(sub_83C341E0);
PPC_FUNC_IMPL(__imp__sub_83C341E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20088
	ctx.r3.s64 = ctx.r11.s64 + 20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341EC"))) PPC_WEAK_FUNC(sub_83C341EC);
PPC_FUNC_IMPL(__imp__sub_83C341EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C341F0"))) PPC_WEAK_FUNC(sub_83C341F0);
PPC_FUNC_IMPL(__imp__sub_83C341F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C341FC"))) PPC_WEAK_FUNC(sub_83C341FC);
PPC_FUNC_IMPL(__imp__sub_83C341FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34200"))) PPC_WEAK_FUNC(sub_83C34200);
PPC_FUNC_IMPL(__imp__sub_83C34200) {
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
	// addi r3,r11,13376
	ctx.r3.s64 = ctx.r11.s64 + 13376;
	// bl 0x83523120
	ctx.lr = 0x83C34218;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20104
	ctx.r3.s64 = ctx.r10.s64 + 20104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34224;
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

__attribute__((alias("__imp__sub_83C34234"))) PPC_WEAK_FUNC(sub_83C34234);
PPC_FUNC_IMPL(__imp__sub_83C34234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34238"))) PPC_WEAK_FUNC(sub_83C34238);
PPC_FUNC_IMPL(__imp__sub_83C34238) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13392
	ctx.r7.s64 = ctx.r8.s64 + 13392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C34260"))) PPC_WEAK_FUNC(sub_83C34260);
PPC_FUNC_IMPL(__imp__sub_83C34260) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-29236
	ctx.r6.s64 = ctx.r7.s64 + -29236;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29308(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29308);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13392);
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
	// std r9,-29236(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29236, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C342A8"))) PPC_WEAK_FUNC(sub_83C342A8);
PPC_FUNC_IMPL(__imp__sub_83C342A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20120
	ctx.r3.s64 = ctx.r11.s64 + 20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C342B4"))) PPC_WEAK_FUNC(sub_83C342B4);
PPC_FUNC_IMPL(__imp__sub_83C342B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C342B8"))) PPC_WEAK_FUNC(sub_83C342B8);
PPC_FUNC_IMPL(__imp__sub_83C342B8) {
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
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// bl 0x8259af80
	ctx.lr = 0x83C342D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20136
	ctx.r3.s64 = ctx.r10.s64 + 20136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C342DC;
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

__attribute__((alias("__imp__sub_83C342EC"))) PPC_WEAK_FUNC(sub_83C342EC);
PPC_FUNC_IMPL(__imp__sub_83C342EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C342F0"))) PPC_WEAK_FUNC(sub_83C342F0);
PPC_FUNC_IMPL(__imp__sub_83C342F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13380
	ctx.r11.s64 = ctx.r8.s64 + 13380;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-29260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29260);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20128
	ctx.r3.s64 = ctx.r6.s64 + 20128;
	// stw r10,13380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C34320"))) PPC_WEAK_FUNC(sub_83C34320);
PPC_FUNC_IMPL(__imp__sub_83C34320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3432C"))) PPC_WEAK_FUNC(sub_83C3432C);
PPC_FUNC_IMPL(__imp__sub_83C3432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34330"))) PPC_WEAK_FUNC(sub_83C34330);
PPC_FUNC_IMPL(__imp__sub_83C34330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20152
	ctx.r3.s64 = ctx.r11.s64 + 20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3433C"))) PPC_WEAK_FUNC(sub_83C3433C);
PPC_FUNC_IMPL(__imp__sub_83C3433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34340"))) PPC_WEAK_FUNC(sub_83C34340);
PPC_FUNC_IMPL(__imp__sub_83C34340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20160
	ctx.r3.s64 = ctx.r11.s64 + 20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3434C"))) PPC_WEAK_FUNC(sub_83C3434C);
PPC_FUNC_IMPL(__imp__sub_83C3434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34350"))) PPC_WEAK_FUNC(sub_83C34350);
PPC_FUNC_IMPL(__imp__sub_83C34350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3435C"))) PPC_WEAK_FUNC(sub_83C3435C);
PPC_FUNC_IMPL(__imp__sub_83C3435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34360"))) PPC_WEAK_FUNC(sub_83C34360);
PPC_FUNC_IMPL(__imp__sub_83C34360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20176
	ctx.r3.s64 = ctx.r11.s64 + 20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3436C"))) PPC_WEAK_FUNC(sub_83C3436C);
PPC_FUNC_IMPL(__imp__sub_83C3436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34370"))) PPC_WEAK_FUNC(sub_83C34370);
PPC_FUNC_IMPL(__imp__sub_83C34370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3437C"))) PPC_WEAK_FUNC(sub_83C3437C);
PPC_FUNC_IMPL(__imp__sub_83C3437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34380"))) PPC_WEAK_FUNC(sub_83C34380);
PPC_FUNC_IMPL(__imp__sub_83C34380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20192
	ctx.r3.s64 = ctx.r11.s64 + 20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3438C"))) PPC_WEAK_FUNC(sub_83C3438C);
PPC_FUNC_IMPL(__imp__sub_83C3438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C34390"))) PPC_WEAK_FUNC(sub_83C34390);
PPC_FUNC_IMPL(__imp__sub_83C34390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3439C"))) PPC_WEAK_FUNC(sub_83C3439C);
PPC_FUNC_IMPL(__imp__sub_83C3439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C343A0"))) PPC_WEAK_FUNC(sub_83C343A0);
PPC_FUNC_IMPL(__imp__sub_83C343A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C343AC"))) PPC_WEAK_FUNC(sub_83C343AC);
PPC_FUNC_IMPL(__imp__sub_83C343AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C343B0"))) PPC_WEAK_FUNC(sub_83C343B0);
PPC_FUNC_IMPL(__imp__sub_83C343B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C343BC"))) PPC_WEAK_FUNC(sub_83C343BC);
PPC_FUNC_IMPL(__imp__sub_83C343BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C343C0"))) PPC_WEAK_FUNC(sub_83C343C0);
PPC_FUNC_IMPL(__imp__sub_83C343C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20224
	ctx.r3.s64 = ctx.r11.s64 + 20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C343CC"))) PPC_WEAK_FUNC(sub_83C343CC);
PPC_FUNC_IMPL(__imp__sub_83C343CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C343D0"))) PPC_WEAK_FUNC(sub_83C343D0);
PPC_FUNC_IMPL(__imp__sub_83C343D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C343DC"))) PPC_WEAK_FUNC(sub_83C343DC);
PPC_FUNC_IMPL(__imp__sub_83C343DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C343E0"))) PPC_WEAK_FUNC(sub_83C343E0);
PPC_FUNC_IMPL(__imp__sub_83C343E0) {
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
	// addi r3,r11,13744
	ctx.r3.s64 = ctx.r11.s64 + 13744;
	// bl 0x83523120
	ctx.lr = 0x83C343F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,20240
	ctx.r3.s64 = ctx.r10.s64 + 20240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C34404;
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

__attribute__((alias("__imp__sub_83C34414"))) PPC_WEAK_FUNC(sub_83C34414);
PPC_FUNC_IMPL(__imp__sub_83C34414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

