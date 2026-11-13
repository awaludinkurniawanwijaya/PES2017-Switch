#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C43D38"))) PPC_WEAK_FUNC(sub_83C43D38);
PPC_FUNC_IMPL(__imp__sub_83C43D38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-5096
	ctx.r6.s64 = ctx.r7.s64 + -5096;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18200);
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
	// std r9,-5096(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C43D80"))) PPC_WEAK_FUNC(sub_83C43D80);
PPC_FUNC_IMPL(__imp__sub_83C43D80) {
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
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// bl 0x83523120
	ctx.lr = 0x83C43D98;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22648
	ctx.r3.s64 = ctx.r10.s64 + -22648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C43DA4;
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

__attribute__((alias("__imp__sub_83C43DB4"))) PPC_WEAK_FUNC(sub_83C43DB4);
PPC_FUNC_IMPL(__imp__sub_83C43DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43DB8"))) PPC_WEAK_FUNC(sub_83C43DB8);
PPC_FUNC_IMPL(__imp__sub_83C43DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43DC4"))) PPC_WEAK_FUNC(sub_83C43DC4);
PPC_FUNC_IMPL(__imp__sub_83C43DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43DC8"))) PPC_WEAK_FUNC(sub_83C43DC8);
PPC_FUNC_IMPL(__imp__sub_83C43DC8) {
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
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// bl 0x8259af80
	ctx.lr = 0x83C43DE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22616
	ctx.r3.s64 = ctx.r10.s64 + -22616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C43DEC;
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

__attribute__((alias("__imp__sub_83C43DFC"))) PPC_WEAK_FUNC(sub_83C43DFC);
PPC_FUNC_IMPL(__imp__sub_83C43DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E00"))) PPC_WEAK_FUNC(sub_83C43E00);
PPC_FUNC_IMPL(__imp__sub_83C43E00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18212
	ctx.r11.s64 = ctx.r8.s64 + -18212;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-5120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22624
	ctx.r3.s64 = ctx.r6.s64 + -22624;
	// stw r10,-18212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E30"))) PPC_WEAK_FUNC(sub_83C43E30);
PPC_FUNC_IMPL(__imp__sub_83C43E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22608
	ctx.r3.s64 = ctx.r11.s64 + -22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E3C"))) PPC_WEAK_FUNC(sub_83C43E3C);
PPC_FUNC_IMPL(__imp__sub_83C43E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E40"))) PPC_WEAK_FUNC(sub_83C43E40);
PPC_FUNC_IMPL(__imp__sub_83C43E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E4C"))) PPC_WEAK_FUNC(sub_83C43E4C);
PPC_FUNC_IMPL(__imp__sub_83C43E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E50"))) PPC_WEAK_FUNC(sub_83C43E50);
PPC_FUNC_IMPL(__imp__sub_83C43E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E5C"))) PPC_WEAK_FUNC(sub_83C43E5C);
PPC_FUNC_IMPL(__imp__sub_83C43E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E60"))) PPC_WEAK_FUNC(sub_83C43E60);
PPC_FUNC_IMPL(__imp__sub_83C43E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22584
	ctx.r3.s64 = ctx.r11.s64 + -22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E6C"))) PPC_WEAK_FUNC(sub_83C43E6C);
PPC_FUNC_IMPL(__imp__sub_83C43E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E70"))) PPC_WEAK_FUNC(sub_83C43E70);
PPC_FUNC_IMPL(__imp__sub_83C43E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22576
	ctx.r3.s64 = ctx.r11.s64 + -22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E7C"))) PPC_WEAK_FUNC(sub_83C43E7C);
PPC_FUNC_IMPL(__imp__sub_83C43E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E80"))) PPC_WEAK_FUNC(sub_83C43E80);
PPC_FUNC_IMPL(__imp__sub_83C43E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22568
	ctx.r3.s64 = ctx.r11.s64 + -22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E8C"))) PPC_WEAK_FUNC(sub_83C43E8C);
PPC_FUNC_IMPL(__imp__sub_83C43E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43E90"))) PPC_WEAK_FUNC(sub_83C43E90);
PPC_FUNC_IMPL(__imp__sub_83C43E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22560
	ctx.r3.s64 = ctx.r11.s64 + -22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43E9C"))) PPC_WEAK_FUNC(sub_83C43E9C);
PPC_FUNC_IMPL(__imp__sub_83C43E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43EA0"))) PPC_WEAK_FUNC(sub_83C43EA0);
PPC_FUNC_IMPL(__imp__sub_83C43EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43EAC"))) PPC_WEAK_FUNC(sub_83C43EAC);
PPC_FUNC_IMPL(__imp__sub_83C43EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43EB0"))) PPC_WEAK_FUNC(sub_83C43EB0);
PPC_FUNC_IMPL(__imp__sub_83C43EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43EBC"))) PPC_WEAK_FUNC(sub_83C43EBC);
PPC_FUNC_IMPL(__imp__sub_83C43EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43EC0"))) PPC_WEAK_FUNC(sub_83C43EC0);
PPC_FUNC_IMPL(__imp__sub_83C43EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22536
	ctx.r3.s64 = ctx.r11.s64 + -22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43ECC"))) PPC_WEAK_FUNC(sub_83C43ECC);
PPC_FUNC_IMPL(__imp__sub_83C43ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43ED0"))) PPC_WEAK_FUNC(sub_83C43ED0);
PPC_FUNC_IMPL(__imp__sub_83C43ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22528
	ctx.r3.s64 = ctx.r11.s64 + -22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43EDC"))) PPC_WEAK_FUNC(sub_83C43EDC);
PPC_FUNC_IMPL(__imp__sub_83C43EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43EE0"))) PPC_WEAK_FUNC(sub_83C43EE0);
PPC_FUNC_IMPL(__imp__sub_83C43EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43EEC"))) PPC_WEAK_FUNC(sub_83C43EEC);
PPC_FUNC_IMPL(__imp__sub_83C43EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43EF0"))) PPC_WEAK_FUNC(sub_83C43EF0);
PPC_FUNC_IMPL(__imp__sub_83C43EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17832
	ctx.r7.s64 = ctx.r8.s64 + -17832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C43F18"))) PPC_WEAK_FUNC(sub_83C43F18);
PPC_FUNC_IMPL(__imp__sub_83C43F18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4968
	ctx.r6.s64 = ctx.r7.s64 + -4968;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17832);
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
	// std r9,-4968(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4968, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C43F60"))) PPC_WEAK_FUNC(sub_83C43F60);
PPC_FUNC_IMPL(__imp__sub_83C43F60) {
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
	// addi r3,r11,-17848
	ctx.r3.s64 = ctx.r11.s64 + -17848;
	// bl 0x83523120
	ctx.lr = 0x83C43F78;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22512
	ctx.r3.s64 = ctx.r10.s64 + -22512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C43F84;
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

__attribute__((alias("__imp__sub_83C43F94"))) PPC_WEAK_FUNC(sub_83C43F94);
PPC_FUNC_IMPL(__imp__sub_83C43F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43F98"))) PPC_WEAK_FUNC(sub_83C43F98);
PPC_FUNC_IMPL(__imp__sub_83C43F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C43FA4"))) PPC_WEAK_FUNC(sub_83C43FA4);
PPC_FUNC_IMPL(__imp__sub_83C43FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43FA8"))) PPC_WEAK_FUNC(sub_83C43FA8);
PPC_FUNC_IMPL(__imp__sub_83C43FA8) {
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
	// addi r3,r11,-17824
	ctx.r3.s64 = ctx.r11.s64 + -17824;
	// bl 0x8259af80
	ctx.lr = 0x83C43FC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22480
	ctx.r3.s64 = ctx.r10.s64 + -22480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C43FCC;
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

__attribute__((alias("__imp__sub_83C43FDC"))) PPC_WEAK_FUNC(sub_83C43FDC);
PPC_FUNC_IMPL(__imp__sub_83C43FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C43FE0"))) PPC_WEAK_FUNC(sub_83C43FE0);
PPC_FUNC_IMPL(__imp__sub_83C43FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17844
	ctx.r11.s64 = ctx.r8.s64 + -17844;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4992);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22488
	ctx.r3.s64 = ctx.r6.s64 + -22488;
	// stw r10,-17844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44010"))) PPC_WEAK_FUNC(sub_83C44010);
PPC_FUNC_IMPL(__imp__sub_83C44010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4401C"))) PPC_WEAK_FUNC(sub_83C4401C);
PPC_FUNC_IMPL(__imp__sub_83C4401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44020"))) PPC_WEAK_FUNC(sub_83C44020);
PPC_FUNC_IMPL(__imp__sub_83C44020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22464
	ctx.r3.s64 = ctx.r11.s64 + -22464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4402C"))) PPC_WEAK_FUNC(sub_83C4402C);
PPC_FUNC_IMPL(__imp__sub_83C4402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44030"))) PPC_WEAK_FUNC(sub_83C44030);
PPC_FUNC_IMPL(__imp__sub_83C44030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4403C"))) PPC_WEAK_FUNC(sub_83C4403C);
PPC_FUNC_IMPL(__imp__sub_83C4403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44040"))) PPC_WEAK_FUNC(sub_83C44040);
PPC_FUNC_IMPL(__imp__sub_83C44040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4404C"))) PPC_WEAK_FUNC(sub_83C4404C);
PPC_FUNC_IMPL(__imp__sub_83C4404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44050"))) PPC_WEAK_FUNC(sub_83C44050);
PPC_FUNC_IMPL(__imp__sub_83C44050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4405C"))) PPC_WEAK_FUNC(sub_83C4405C);
PPC_FUNC_IMPL(__imp__sub_83C4405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44060"))) PPC_WEAK_FUNC(sub_83C44060);
PPC_FUNC_IMPL(__imp__sub_83C44060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22432
	ctx.r3.s64 = ctx.r11.s64 + -22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4406C"))) PPC_WEAK_FUNC(sub_83C4406C);
PPC_FUNC_IMPL(__imp__sub_83C4406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44070"))) PPC_WEAK_FUNC(sub_83C44070);
PPC_FUNC_IMPL(__imp__sub_83C44070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22424
	ctx.r3.s64 = ctx.r11.s64 + -22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4407C"))) PPC_WEAK_FUNC(sub_83C4407C);
PPC_FUNC_IMPL(__imp__sub_83C4407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44080"))) PPC_WEAK_FUNC(sub_83C44080);
PPC_FUNC_IMPL(__imp__sub_83C44080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4408C"))) PPC_WEAK_FUNC(sub_83C4408C);
PPC_FUNC_IMPL(__imp__sub_83C4408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44090"))) PPC_WEAK_FUNC(sub_83C44090);
PPC_FUNC_IMPL(__imp__sub_83C44090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4409C"))) PPC_WEAK_FUNC(sub_83C4409C);
PPC_FUNC_IMPL(__imp__sub_83C4409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C440A0"))) PPC_WEAK_FUNC(sub_83C440A0);
PPC_FUNC_IMPL(__imp__sub_83C440A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C440AC"))) PPC_WEAK_FUNC(sub_83C440AC);
PPC_FUNC_IMPL(__imp__sub_83C440AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C440B0"))) PPC_WEAK_FUNC(sub_83C440B0);
PPC_FUNC_IMPL(__imp__sub_83C440B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C440BC"))) PPC_WEAK_FUNC(sub_83C440BC);
PPC_FUNC_IMPL(__imp__sub_83C440BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C440C0"))) PPC_WEAK_FUNC(sub_83C440C0);
PPC_FUNC_IMPL(__imp__sub_83C440C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C440CC"))) PPC_WEAK_FUNC(sub_83C440CC);
PPC_FUNC_IMPL(__imp__sub_83C440CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C440D0"))) PPC_WEAK_FUNC(sub_83C440D0);
PPC_FUNC_IMPL(__imp__sub_83C440D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17464
	ctx.r7.s64 = ctx.r8.s64 + -17464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C440F8"))) PPC_WEAK_FUNC(sub_83C440F8);
PPC_FUNC_IMPL(__imp__sub_83C440F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4840
	ctx.r6.s64 = ctx.r7.s64 + -4840;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4912(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4912);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17464);
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
	// std r9,-4840(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44140"))) PPC_WEAK_FUNC(sub_83C44140);
PPC_FUNC_IMPL(__imp__sub_83C44140) {
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
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x83523120
	ctx.lr = 0x83C44158;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22376
	ctx.r3.s64 = ctx.r10.s64 + -22376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44164;
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

__attribute__((alias("__imp__sub_83C44174"))) PPC_WEAK_FUNC(sub_83C44174);
PPC_FUNC_IMPL(__imp__sub_83C44174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44178"))) PPC_WEAK_FUNC(sub_83C44178);
PPC_FUNC_IMPL(__imp__sub_83C44178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44184"))) PPC_WEAK_FUNC(sub_83C44184);
PPC_FUNC_IMPL(__imp__sub_83C44184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44188"))) PPC_WEAK_FUNC(sub_83C44188);
PPC_FUNC_IMPL(__imp__sub_83C44188) {
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
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// bl 0x8259af80
	ctx.lr = 0x83C441A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22344
	ctx.r3.s64 = ctx.r10.s64 + -22344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C441AC;
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

__attribute__((alias("__imp__sub_83C441BC"))) PPC_WEAK_FUNC(sub_83C441BC);
PPC_FUNC_IMPL(__imp__sub_83C441BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C441C0"))) PPC_WEAK_FUNC(sub_83C441C0);
PPC_FUNC_IMPL(__imp__sub_83C441C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17476
	ctx.r11.s64 = ctx.r8.s64 + -17476;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22352
	ctx.r3.s64 = ctx.r6.s64 + -22352;
	// stw r10,-17476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C441F0"))) PPC_WEAK_FUNC(sub_83C441F0);
PPC_FUNC_IMPL(__imp__sub_83C441F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22336
	ctx.r3.s64 = ctx.r11.s64 + -22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C441FC"))) PPC_WEAK_FUNC(sub_83C441FC);
PPC_FUNC_IMPL(__imp__sub_83C441FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44200"))) PPC_WEAK_FUNC(sub_83C44200);
PPC_FUNC_IMPL(__imp__sub_83C44200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4420C"))) PPC_WEAK_FUNC(sub_83C4420C);
PPC_FUNC_IMPL(__imp__sub_83C4420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44210"))) PPC_WEAK_FUNC(sub_83C44210);
PPC_FUNC_IMPL(__imp__sub_83C44210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22320
	ctx.r3.s64 = ctx.r11.s64 + -22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4421C"))) PPC_WEAK_FUNC(sub_83C4421C);
PPC_FUNC_IMPL(__imp__sub_83C4421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44220"))) PPC_WEAK_FUNC(sub_83C44220);
PPC_FUNC_IMPL(__imp__sub_83C44220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22312
	ctx.r3.s64 = ctx.r11.s64 + -22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4422C"))) PPC_WEAK_FUNC(sub_83C4422C);
PPC_FUNC_IMPL(__imp__sub_83C4422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44230"))) PPC_WEAK_FUNC(sub_83C44230);
PPC_FUNC_IMPL(__imp__sub_83C44230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4423C"))) PPC_WEAK_FUNC(sub_83C4423C);
PPC_FUNC_IMPL(__imp__sub_83C4423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44240"))) PPC_WEAK_FUNC(sub_83C44240);
PPC_FUNC_IMPL(__imp__sub_83C44240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22296
	ctx.r3.s64 = ctx.r11.s64 + -22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4424C"))) PPC_WEAK_FUNC(sub_83C4424C);
PPC_FUNC_IMPL(__imp__sub_83C4424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44250"))) PPC_WEAK_FUNC(sub_83C44250);
PPC_FUNC_IMPL(__imp__sub_83C44250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4425C"))) PPC_WEAK_FUNC(sub_83C4425C);
PPC_FUNC_IMPL(__imp__sub_83C4425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44260"))) PPC_WEAK_FUNC(sub_83C44260);
PPC_FUNC_IMPL(__imp__sub_83C44260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22280
	ctx.r3.s64 = ctx.r11.s64 + -22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4426C"))) PPC_WEAK_FUNC(sub_83C4426C);
PPC_FUNC_IMPL(__imp__sub_83C4426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44270"))) PPC_WEAK_FUNC(sub_83C44270);
PPC_FUNC_IMPL(__imp__sub_83C44270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22272
	ctx.r3.s64 = ctx.r11.s64 + -22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4427C"))) PPC_WEAK_FUNC(sub_83C4427C);
PPC_FUNC_IMPL(__imp__sub_83C4427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44280"))) PPC_WEAK_FUNC(sub_83C44280);
PPC_FUNC_IMPL(__imp__sub_83C44280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4428C"))) PPC_WEAK_FUNC(sub_83C4428C);
PPC_FUNC_IMPL(__imp__sub_83C4428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44290"))) PPC_WEAK_FUNC(sub_83C44290);
PPC_FUNC_IMPL(__imp__sub_83C44290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4429C"))) PPC_WEAK_FUNC(sub_83C4429C);
PPC_FUNC_IMPL(__imp__sub_83C4429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C442A0"))) PPC_WEAK_FUNC(sub_83C442A0);
PPC_FUNC_IMPL(__imp__sub_83C442A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C442AC"))) PPC_WEAK_FUNC(sub_83C442AC);
PPC_FUNC_IMPL(__imp__sub_83C442AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C442B0"))) PPC_WEAK_FUNC(sub_83C442B0);
PPC_FUNC_IMPL(__imp__sub_83C442B0) {
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
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// bl 0x83523120
	ctx.lr = 0x83C442C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22240
	ctx.r3.s64 = ctx.r10.s64 + -22240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C442D4;
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

__attribute__((alias("__imp__sub_83C442E4"))) PPC_WEAK_FUNC(sub_83C442E4);
PPC_FUNC_IMPL(__imp__sub_83C442E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C442E8"))) PPC_WEAK_FUNC(sub_83C442E8);
PPC_FUNC_IMPL(__imp__sub_83C442E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17096
	ctx.r7.s64 = ctx.r8.s64 + -17096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44310"))) PPC_WEAK_FUNC(sub_83C44310);
PPC_FUNC_IMPL(__imp__sub_83C44310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4712
	ctx.r6.s64 = ctx.r7.s64 + -4712;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4784(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4784);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17096);
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
	// std r9,-4712(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4712, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44358"))) PPC_WEAK_FUNC(sub_83C44358);
PPC_FUNC_IMPL(__imp__sub_83C44358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44364"))) PPC_WEAK_FUNC(sub_83C44364);
PPC_FUNC_IMPL(__imp__sub_83C44364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44368"))) PPC_WEAK_FUNC(sub_83C44368);
PPC_FUNC_IMPL(__imp__sub_83C44368) {
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
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// bl 0x8259af80
	ctx.lr = 0x83C44380;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22208
	ctx.r3.s64 = ctx.r10.s64 + -22208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4438C;
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

__attribute__((alias("__imp__sub_83C4439C"))) PPC_WEAK_FUNC(sub_83C4439C);
PPC_FUNC_IMPL(__imp__sub_83C4439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C443A0"))) PPC_WEAK_FUNC(sub_83C443A0);
PPC_FUNC_IMPL(__imp__sub_83C443A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17108
	ctx.r11.s64 = ctx.r8.s64 + -17108;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22216
	ctx.r3.s64 = ctx.r6.s64 + -22216;
	// stw r10,-17108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C443D0"))) PPC_WEAK_FUNC(sub_83C443D0);
PPC_FUNC_IMPL(__imp__sub_83C443D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22200
	ctx.r3.s64 = ctx.r11.s64 + -22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C443DC"))) PPC_WEAK_FUNC(sub_83C443DC);
PPC_FUNC_IMPL(__imp__sub_83C443DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C443E0"))) PPC_WEAK_FUNC(sub_83C443E0);
PPC_FUNC_IMPL(__imp__sub_83C443E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22192
	ctx.r3.s64 = ctx.r11.s64 + -22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C443EC"))) PPC_WEAK_FUNC(sub_83C443EC);
PPC_FUNC_IMPL(__imp__sub_83C443EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C443F0"))) PPC_WEAK_FUNC(sub_83C443F0);
PPC_FUNC_IMPL(__imp__sub_83C443F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22184
	ctx.r3.s64 = ctx.r11.s64 + -22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C443FC"))) PPC_WEAK_FUNC(sub_83C443FC);
PPC_FUNC_IMPL(__imp__sub_83C443FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44400"))) PPC_WEAK_FUNC(sub_83C44400);
PPC_FUNC_IMPL(__imp__sub_83C44400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4440C"))) PPC_WEAK_FUNC(sub_83C4440C);
PPC_FUNC_IMPL(__imp__sub_83C4440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44410"))) PPC_WEAK_FUNC(sub_83C44410);
PPC_FUNC_IMPL(__imp__sub_83C44410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4441C"))) PPC_WEAK_FUNC(sub_83C4441C);
PPC_FUNC_IMPL(__imp__sub_83C4441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44420"))) PPC_WEAK_FUNC(sub_83C44420);
PPC_FUNC_IMPL(__imp__sub_83C44420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22160
	ctx.r3.s64 = ctx.r11.s64 + -22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4442C"))) PPC_WEAK_FUNC(sub_83C4442C);
PPC_FUNC_IMPL(__imp__sub_83C4442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44430"))) PPC_WEAK_FUNC(sub_83C44430);
PPC_FUNC_IMPL(__imp__sub_83C44430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4443C"))) PPC_WEAK_FUNC(sub_83C4443C);
PPC_FUNC_IMPL(__imp__sub_83C4443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44440"))) PPC_WEAK_FUNC(sub_83C44440);
PPC_FUNC_IMPL(__imp__sub_83C44440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4444C"))) PPC_WEAK_FUNC(sub_83C4444C);
PPC_FUNC_IMPL(__imp__sub_83C4444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44450"))) PPC_WEAK_FUNC(sub_83C44450);
PPC_FUNC_IMPL(__imp__sub_83C44450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22136
	ctx.r3.s64 = ctx.r11.s64 + -22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4445C"))) PPC_WEAK_FUNC(sub_83C4445C);
PPC_FUNC_IMPL(__imp__sub_83C4445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44460"))) PPC_WEAK_FUNC(sub_83C44460);
PPC_FUNC_IMPL(__imp__sub_83C44460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22128
	ctx.r3.s64 = ctx.r11.s64 + -22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4446C"))) PPC_WEAK_FUNC(sub_83C4446C);
PPC_FUNC_IMPL(__imp__sub_83C4446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44470"))) PPC_WEAK_FUNC(sub_83C44470);
PPC_FUNC_IMPL(__imp__sub_83C44470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4447C"))) PPC_WEAK_FUNC(sub_83C4447C);
PPC_FUNC_IMPL(__imp__sub_83C4447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44480"))) PPC_WEAK_FUNC(sub_83C44480);
PPC_FUNC_IMPL(__imp__sub_83C44480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4448C"))) PPC_WEAK_FUNC(sub_83C4448C);
PPC_FUNC_IMPL(__imp__sub_83C4448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44490"))) PPC_WEAK_FUNC(sub_83C44490);
PPC_FUNC_IMPL(__imp__sub_83C44490) {
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
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x83523120
	ctx.lr = 0x83C444A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22104
	ctx.r3.s64 = ctx.r10.s64 + -22104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C444B4;
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

__attribute__((alias("__imp__sub_83C444C4"))) PPC_WEAK_FUNC(sub_83C444C4);
PPC_FUNC_IMPL(__imp__sub_83C444C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C444C8"))) PPC_WEAK_FUNC(sub_83C444C8);
PPC_FUNC_IMPL(__imp__sub_83C444C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16728
	ctx.r7.s64 = ctx.r8.s64 + -16728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C444F0"))) PPC_WEAK_FUNC(sub_83C444F0);
PPC_FUNC_IMPL(__imp__sub_83C444F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4584
	ctx.r6.s64 = ctx.r7.s64 + -4584;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4656(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4656);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16728);
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
	// std r9,-4584(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4584, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44538"))) PPC_WEAK_FUNC(sub_83C44538);
PPC_FUNC_IMPL(__imp__sub_83C44538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44544"))) PPC_WEAK_FUNC(sub_83C44544);
PPC_FUNC_IMPL(__imp__sub_83C44544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44548"))) PPC_WEAK_FUNC(sub_83C44548);
PPC_FUNC_IMPL(__imp__sub_83C44548) {
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
	// addi r3,r11,-16720
	ctx.r3.s64 = ctx.r11.s64 + -16720;
	// bl 0x8259af80
	ctx.lr = 0x83C44560;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-22072
	ctx.r3.s64 = ctx.r10.s64 + -22072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4456C;
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

__attribute__((alias("__imp__sub_83C4457C"))) PPC_WEAK_FUNC(sub_83C4457C);
PPC_FUNC_IMPL(__imp__sub_83C4457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44580"))) PPC_WEAK_FUNC(sub_83C44580);
PPC_FUNC_IMPL(__imp__sub_83C44580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16740
	ctx.r11.s64 = ctx.r8.s64 + -16740;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22080
	ctx.r3.s64 = ctx.r6.s64 + -22080;
	// stw r10,-16740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445B0"))) PPC_WEAK_FUNC(sub_83C445B0);
PPC_FUNC_IMPL(__imp__sub_83C445B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22064
	ctx.r3.s64 = ctx.r11.s64 + -22064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445BC"))) PPC_WEAK_FUNC(sub_83C445BC);
PPC_FUNC_IMPL(__imp__sub_83C445BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C445C0"))) PPC_WEAK_FUNC(sub_83C445C0);
PPC_FUNC_IMPL(__imp__sub_83C445C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22056
	ctx.r3.s64 = ctx.r11.s64 + -22056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445CC"))) PPC_WEAK_FUNC(sub_83C445CC);
PPC_FUNC_IMPL(__imp__sub_83C445CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C445D0"))) PPC_WEAK_FUNC(sub_83C445D0);
PPC_FUNC_IMPL(__imp__sub_83C445D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445DC"))) PPC_WEAK_FUNC(sub_83C445DC);
PPC_FUNC_IMPL(__imp__sub_83C445DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C445E0"))) PPC_WEAK_FUNC(sub_83C445E0);
PPC_FUNC_IMPL(__imp__sub_83C445E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445EC"))) PPC_WEAK_FUNC(sub_83C445EC);
PPC_FUNC_IMPL(__imp__sub_83C445EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C445F0"))) PPC_WEAK_FUNC(sub_83C445F0);
PPC_FUNC_IMPL(__imp__sub_83C445F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22032
	ctx.r3.s64 = ctx.r11.s64 + -22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C445FC"))) PPC_WEAK_FUNC(sub_83C445FC);
PPC_FUNC_IMPL(__imp__sub_83C445FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44600"))) PPC_WEAK_FUNC(sub_83C44600);
PPC_FUNC_IMPL(__imp__sub_83C44600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4460C"))) PPC_WEAK_FUNC(sub_83C4460C);
PPC_FUNC_IMPL(__imp__sub_83C4460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44610"))) PPC_WEAK_FUNC(sub_83C44610);
PPC_FUNC_IMPL(__imp__sub_83C44610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4461C"))) PPC_WEAK_FUNC(sub_83C4461C);
PPC_FUNC_IMPL(__imp__sub_83C4461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44620"))) PPC_WEAK_FUNC(sub_83C44620);
PPC_FUNC_IMPL(__imp__sub_83C44620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22008
	ctx.r3.s64 = ctx.r11.s64 + -22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4462C"))) PPC_WEAK_FUNC(sub_83C4462C);
PPC_FUNC_IMPL(__imp__sub_83C4462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44630"))) PPC_WEAK_FUNC(sub_83C44630);
PPC_FUNC_IMPL(__imp__sub_83C44630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-22000
	ctx.r3.s64 = ctx.r11.s64 + -22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4463C"))) PPC_WEAK_FUNC(sub_83C4463C);
PPC_FUNC_IMPL(__imp__sub_83C4463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44640"))) PPC_WEAK_FUNC(sub_83C44640);
PPC_FUNC_IMPL(__imp__sub_83C44640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21992
	ctx.r3.s64 = ctx.r11.s64 + -21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4464C"))) PPC_WEAK_FUNC(sub_83C4464C);
PPC_FUNC_IMPL(__imp__sub_83C4464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44650"))) PPC_WEAK_FUNC(sub_83C44650);
PPC_FUNC_IMPL(__imp__sub_83C44650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4465C"))) PPC_WEAK_FUNC(sub_83C4465C);
PPC_FUNC_IMPL(__imp__sub_83C4465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44660"))) PPC_WEAK_FUNC(sub_83C44660);
PPC_FUNC_IMPL(__imp__sub_83C44660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4466C"))) PPC_WEAK_FUNC(sub_83C4466C);
PPC_FUNC_IMPL(__imp__sub_83C4466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44670"))) PPC_WEAK_FUNC(sub_83C44670);
PPC_FUNC_IMPL(__imp__sub_83C44670) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16360
	ctx.r7.s64 = ctx.r8.s64 + -16360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44698"))) PPC_WEAK_FUNC(sub_83C44698);
PPC_FUNC_IMPL(__imp__sub_83C44698) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4456
	ctx.r6.s64 = ctx.r7.s64 + -4456;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4528(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4528);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16360);
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
	// std r9,-4456(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C446E0"))) PPC_WEAK_FUNC(sub_83C446E0);
PPC_FUNC_IMPL(__imp__sub_83C446E0) {
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
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// bl 0x83523120
	ctx.lr = 0x83C446F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21968
	ctx.r3.s64 = ctx.r10.s64 + -21968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44704;
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

__attribute__((alias("__imp__sub_83C44714"))) PPC_WEAK_FUNC(sub_83C44714);
PPC_FUNC_IMPL(__imp__sub_83C44714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44718"))) PPC_WEAK_FUNC(sub_83C44718);
PPC_FUNC_IMPL(__imp__sub_83C44718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21952
	ctx.r3.s64 = ctx.r11.s64 + -21952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44724"))) PPC_WEAK_FUNC(sub_83C44724);
PPC_FUNC_IMPL(__imp__sub_83C44724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44728"))) PPC_WEAK_FUNC(sub_83C44728);
PPC_FUNC_IMPL(__imp__sub_83C44728) {
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
	// addi r3,r11,-16352
	ctx.r3.s64 = ctx.r11.s64 + -16352;
	// bl 0x8259af80
	ctx.lr = 0x83C44740;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21936
	ctx.r3.s64 = ctx.r10.s64 + -21936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4474C;
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

__attribute__((alias("__imp__sub_83C4475C"))) PPC_WEAK_FUNC(sub_83C4475C);
PPC_FUNC_IMPL(__imp__sub_83C4475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44760"))) PPC_WEAK_FUNC(sub_83C44760);
PPC_FUNC_IMPL(__imp__sub_83C44760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16372
	ctx.r11.s64 = ctx.r8.s64 + -16372;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21944
	ctx.r3.s64 = ctx.r6.s64 + -21944;
	// stw r10,-16372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44790"))) PPC_WEAK_FUNC(sub_83C44790);
PPC_FUNC_IMPL(__imp__sub_83C44790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4479C"))) PPC_WEAK_FUNC(sub_83C4479C);
PPC_FUNC_IMPL(__imp__sub_83C4479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447A0"))) PPC_WEAK_FUNC(sub_83C447A0);
PPC_FUNC_IMPL(__imp__sub_83C447A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21920
	ctx.r3.s64 = ctx.r11.s64 + -21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447AC"))) PPC_WEAK_FUNC(sub_83C447AC);
PPC_FUNC_IMPL(__imp__sub_83C447AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447B0"))) PPC_WEAK_FUNC(sub_83C447B0);
PPC_FUNC_IMPL(__imp__sub_83C447B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447BC"))) PPC_WEAK_FUNC(sub_83C447BC);
PPC_FUNC_IMPL(__imp__sub_83C447BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447C0"))) PPC_WEAK_FUNC(sub_83C447C0);
PPC_FUNC_IMPL(__imp__sub_83C447C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447CC"))) PPC_WEAK_FUNC(sub_83C447CC);
PPC_FUNC_IMPL(__imp__sub_83C447CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447D0"))) PPC_WEAK_FUNC(sub_83C447D0);
PPC_FUNC_IMPL(__imp__sub_83C447D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447DC"))) PPC_WEAK_FUNC(sub_83C447DC);
PPC_FUNC_IMPL(__imp__sub_83C447DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447E0"))) PPC_WEAK_FUNC(sub_83C447E0);
PPC_FUNC_IMPL(__imp__sub_83C447E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447EC"))) PPC_WEAK_FUNC(sub_83C447EC);
PPC_FUNC_IMPL(__imp__sub_83C447EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C447F0"))) PPC_WEAK_FUNC(sub_83C447F0);
PPC_FUNC_IMPL(__imp__sub_83C447F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21880
	ctx.r3.s64 = ctx.r11.s64 + -21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C447FC"))) PPC_WEAK_FUNC(sub_83C447FC);
PPC_FUNC_IMPL(__imp__sub_83C447FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44800"))) PPC_WEAK_FUNC(sub_83C44800);
PPC_FUNC_IMPL(__imp__sub_83C44800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21872
	ctx.r3.s64 = ctx.r11.s64 + -21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4480C"))) PPC_WEAK_FUNC(sub_83C4480C);
PPC_FUNC_IMPL(__imp__sub_83C4480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44810"))) PPC_WEAK_FUNC(sub_83C44810);
PPC_FUNC_IMPL(__imp__sub_83C44810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4481C"))) PPC_WEAK_FUNC(sub_83C4481C);
PPC_FUNC_IMPL(__imp__sub_83C4481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44820"))) PPC_WEAK_FUNC(sub_83C44820);
PPC_FUNC_IMPL(__imp__sub_83C44820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4482C"))) PPC_WEAK_FUNC(sub_83C4482C);
PPC_FUNC_IMPL(__imp__sub_83C4482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44830"))) PPC_WEAK_FUNC(sub_83C44830);
PPC_FUNC_IMPL(__imp__sub_83C44830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21848
	ctx.r3.s64 = ctx.r11.s64 + -21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4483C"))) PPC_WEAK_FUNC(sub_83C4483C);
PPC_FUNC_IMPL(__imp__sub_83C4483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44840"))) PPC_WEAK_FUNC(sub_83C44840);
PPC_FUNC_IMPL(__imp__sub_83C44840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4484C"))) PPC_WEAK_FUNC(sub_83C4484C);
PPC_FUNC_IMPL(__imp__sub_83C4484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44850"))) PPC_WEAK_FUNC(sub_83C44850);
PPC_FUNC_IMPL(__imp__sub_83C44850) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15992
	ctx.r7.s64 = ctx.r8.s64 + -15992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44878"))) PPC_WEAK_FUNC(sub_83C44878);
PPC_FUNC_IMPL(__imp__sub_83C44878) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4328
	ctx.r6.s64 = ctx.r7.s64 + -4328;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4400(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4400);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15992);
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
	// std r9,-4328(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4328, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C448C0"))) PPC_WEAK_FUNC(sub_83C448C0);
PPC_FUNC_IMPL(__imp__sub_83C448C0) {
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
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// bl 0x83523120
	ctx.lr = 0x83C448D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21832
	ctx.r3.s64 = ctx.r10.s64 + -21832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C448E4;
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

__attribute__((alias("__imp__sub_83C448F4"))) PPC_WEAK_FUNC(sub_83C448F4);
PPC_FUNC_IMPL(__imp__sub_83C448F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C448F8"))) PPC_WEAK_FUNC(sub_83C448F8);
PPC_FUNC_IMPL(__imp__sub_83C448F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44904"))) PPC_WEAK_FUNC(sub_83C44904);
PPC_FUNC_IMPL(__imp__sub_83C44904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44908"))) PPC_WEAK_FUNC(sub_83C44908);
PPC_FUNC_IMPL(__imp__sub_83C44908) {
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
	// addi r3,r11,-15984
	ctx.r3.s64 = ctx.r11.s64 + -15984;
	// bl 0x8259af80
	ctx.lr = 0x83C44920;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21800
	ctx.r3.s64 = ctx.r10.s64 + -21800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4492C;
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

__attribute__((alias("__imp__sub_83C4493C"))) PPC_WEAK_FUNC(sub_83C4493C);
PPC_FUNC_IMPL(__imp__sub_83C4493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44940"))) PPC_WEAK_FUNC(sub_83C44940);
PPC_FUNC_IMPL(__imp__sub_83C44940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16004
	ctx.r11.s64 = ctx.r8.s64 + -16004;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4352);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21808
	ctx.r3.s64 = ctx.r6.s64 + -21808;
	// stw r10,-16004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44970"))) PPC_WEAK_FUNC(sub_83C44970);
PPC_FUNC_IMPL(__imp__sub_83C44970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4497C"))) PPC_WEAK_FUNC(sub_83C4497C);
PPC_FUNC_IMPL(__imp__sub_83C4497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44980"))) PPC_WEAK_FUNC(sub_83C44980);
PPC_FUNC_IMPL(__imp__sub_83C44980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21784
	ctx.r3.s64 = ctx.r11.s64 + -21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4498C"))) PPC_WEAK_FUNC(sub_83C4498C);
PPC_FUNC_IMPL(__imp__sub_83C4498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44990"))) PPC_WEAK_FUNC(sub_83C44990);
PPC_FUNC_IMPL(__imp__sub_83C44990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4499C"))) PPC_WEAK_FUNC(sub_83C4499C);
PPC_FUNC_IMPL(__imp__sub_83C4499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449A0"))) PPC_WEAK_FUNC(sub_83C449A0);
PPC_FUNC_IMPL(__imp__sub_83C449A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21768
	ctx.r3.s64 = ctx.r11.s64 + -21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449AC"))) PPC_WEAK_FUNC(sub_83C449AC);
PPC_FUNC_IMPL(__imp__sub_83C449AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449B0"))) PPC_WEAK_FUNC(sub_83C449B0);
PPC_FUNC_IMPL(__imp__sub_83C449B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21760
	ctx.r3.s64 = ctx.r11.s64 + -21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449BC"))) PPC_WEAK_FUNC(sub_83C449BC);
PPC_FUNC_IMPL(__imp__sub_83C449BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449C0"))) PPC_WEAK_FUNC(sub_83C449C0);
PPC_FUNC_IMPL(__imp__sub_83C449C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449CC"))) PPC_WEAK_FUNC(sub_83C449CC);
PPC_FUNC_IMPL(__imp__sub_83C449CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449D0"))) PPC_WEAK_FUNC(sub_83C449D0);
PPC_FUNC_IMPL(__imp__sub_83C449D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449DC"))) PPC_WEAK_FUNC(sub_83C449DC);
PPC_FUNC_IMPL(__imp__sub_83C449DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449E0"))) PPC_WEAK_FUNC(sub_83C449E0);
PPC_FUNC_IMPL(__imp__sub_83C449E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21736
	ctx.r3.s64 = ctx.r11.s64 + -21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449EC"))) PPC_WEAK_FUNC(sub_83C449EC);
PPC_FUNC_IMPL(__imp__sub_83C449EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C449F0"))) PPC_WEAK_FUNC(sub_83C449F0);
PPC_FUNC_IMPL(__imp__sub_83C449F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C449FC"))) PPC_WEAK_FUNC(sub_83C449FC);
PPC_FUNC_IMPL(__imp__sub_83C449FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44A00"))) PPC_WEAK_FUNC(sub_83C44A00);
PPC_FUNC_IMPL(__imp__sub_83C44A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44A0C"))) PPC_WEAK_FUNC(sub_83C44A0C);
PPC_FUNC_IMPL(__imp__sub_83C44A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44A10"))) PPC_WEAK_FUNC(sub_83C44A10);
PPC_FUNC_IMPL(__imp__sub_83C44A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44A1C"))) PPC_WEAK_FUNC(sub_83C44A1C);
PPC_FUNC_IMPL(__imp__sub_83C44A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44A20"))) PPC_WEAK_FUNC(sub_83C44A20);
PPC_FUNC_IMPL(__imp__sub_83C44A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44A2C"))) PPC_WEAK_FUNC(sub_83C44A2C);
PPC_FUNC_IMPL(__imp__sub_83C44A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44A30"))) PPC_WEAK_FUNC(sub_83C44A30);
PPC_FUNC_IMPL(__imp__sub_83C44A30) {
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
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// bl 0x83523120
	ctx.lr = 0x83C44A48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21696
	ctx.r3.s64 = ctx.r10.s64 + -21696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44A54;
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

__attribute__((alias("__imp__sub_83C44A64"))) PPC_WEAK_FUNC(sub_83C44A64);
PPC_FUNC_IMPL(__imp__sub_83C44A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44A68"))) PPC_WEAK_FUNC(sub_83C44A68);
PPC_FUNC_IMPL(__imp__sub_83C44A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15624
	ctx.r7.s64 = ctx.r8.s64 + -15624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44A90"))) PPC_WEAK_FUNC(sub_83C44A90);
PPC_FUNC_IMPL(__imp__sub_83C44A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4200
	ctx.r6.s64 = ctx.r7.s64 + -4200;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4272(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15624);
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
	// std r9,-4200(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44AD8"))) PPC_WEAK_FUNC(sub_83C44AD8);
PPC_FUNC_IMPL(__imp__sub_83C44AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44AE4"))) PPC_WEAK_FUNC(sub_83C44AE4);
PPC_FUNC_IMPL(__imp__sub_83C44AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44AE8"))) PPC_WEAK_FUNC(sub_83C44AE8);
PPC_FUNC_IMPL(__imp__sub_83C44AE8) {
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
	// addi r3,r11,-15616
	ctx.r3.s64 = ctx.r11.s64 + -15616;
	// bl 0x8259af80
	ctx.lr = 0x83C44B00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21664
	ctx.r3.s64 = ctx.r10.s64 + -21664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44B0C;
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

__attribute__((alias("__imp__sub_83C44B1C"))) PPC_WEAK_FUNC(sub_83C44B1C);
PPC_FUNC_IMPL(__imp__sub_83C44B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44B20"))) PPC_WEAK_FUNC(sub_83C44B20);
PPC_FUNC_IMPL(__imp__sub_83C44B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15636
	ctx.r11.s64 = ctx.r8.s64 + -15636;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21672
	ctx.r3.s64 = ctx.r6.s64 + -21672;
	// stw r10,-15636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B50"))) PPC_WEAK_FUNC(sub_83C44B50);
PPC_FUNC_IMPL(__imp__sub_83C44B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21656
	ctx.r3.s64 = ctx.r11.s64 + -21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B5C"))) PPC_WEAK_FUNC(sub_83C44B5C);
PPC_FUNC_IMPL(__imp__sub_83C44B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44B60"))) PPC_WEAK_FUNC(sub_83C44B60);
PPC_FUNC_IMPL(__imp__sub_83C44B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B6C"))) PPC_WEAK_FUNC(sub_83C44B6C);
PPC_FUNC_IMPL(__imp__sub_83C44B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44B70"))) PPC_WEAK_FUNC(sub_83C44B70);
PPC_FUNC_IMPL(__imp__sub_83C44B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B7C"))) PPC_WEAK_FUNC(sub_83C44B7C);
PPC_FUNC_IMPL(__imp__sub_83C44B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44B80"))) PPC_WEAK_FUNC(sub_83C44B80);
PPC_FUNC_IMPL(__imp__sub_83C44B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B8C"))) PPC_WEAK_FUNC(sub_83C44B8C);
PPC_FUNC_IMPL(__imp__sub_83C44B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44B90"))) PPC_WEAK_FUNC(sub_83C44B90);
PPC_FUNC_IMPL(__imp__sub_83C44B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21624
	ctx.r3.s64 = ctx.r11.s64 + -21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44B9C"))) PPC_WEAK_FUNC(sub_83C44B9C);
PPC_FUNC_IMPL(__imp__sub_83C44B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BA0"))) PPC_WEAK_FUNC(sub_83C44BA0);
PPC_FUNC_IMPL(__imp__sub_83C44BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44BAC"))) PPC_WEAK_FUNC(sub_83C44BAC);
PPC_FUNC_IMPL(__imp__sub_83C44BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BB0"))) PPC_WEAK_FUNC(sub_83C44BB0);
PPC_FUNC_IMPL(__imp__sub_83C44BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44BBC"))) PPC_WEAK_FUNC(sub_83C44BBC);
PPC_FUNC_IMPL(__imp__sub_83C44BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BC0"))) PPC_WEAK_FUNC(sub_83C44BC0);
PPC_FUNC_IMPL(__imp__sub_83C44BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21600
	ctx.r3.s64 = ctx.r11.s64 + -21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44BCC"))) PPC_WEAK_FUNC(sub_83C44BCC);
PPC_FUNC_IMPL(__imp__sub_83C44BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BD0"))) PPC_WEAK_FUNC(sub_83C44BD0);
PPC_FUNC_IMPL(__imp__sub_83C44BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21592
	ctx.r3.s64 = ctx.r11.s64 + -21592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

