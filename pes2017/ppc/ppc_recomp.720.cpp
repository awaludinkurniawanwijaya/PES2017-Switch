#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C17F88"))) PPC_WEAK_FUNC(sub_83C17F88);
PPC_FUNC_IMPL(__imp__sub_83C17F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17F94"))) PPC_WEAK_FUNC(sub_83C17F94);
PPC_FUNC_IMPL(__imp__sub_83C17F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17F98"))) PPC_WEAK_FUNC(sub_83C17F98);
PPC_FUNC_IMPL(__imp__sub_83C17F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21920
	ctx.r3.s64 = ctx.r11.s64 + -21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17FA4"))) PPC_WEAK_FUNC(sub_83C17FA4);
PPC_FUNC_IMPL(__imp__sub_83C17FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17FA8"))) PPC_WEAK_FUNC(sub_83C17FA8);
PPC_FUNC_IMPL(__imp__sub_83C17FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17FB4"))) PPC_WEAK_FUNC(sub_83C17FB4);
PPC_FUNC_IMPL(__imp__sub_83C17FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17FB8"))) PPC_WEAK_FUNC(sub_83C17FB8);
PPC_FUNC_IMPL(__imp__sub_83C17FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17FC4"))) PPC_WEAK_FUNC(sub_83C17FC4);
PPC_FUNC_IMPL(__imp__sub_83C17FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17FC8"))) PPC_WEAK_FUNC(sub_83C17FC8);
PPC_FUNC_IMPL(__imp__sub_83C17FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17FD4"))) PPC_WEAK_FUNC(sub_83C17FD4);
PPC_FUNC_IMPL(__imp__sub_83C17FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17FD8"))) PPC_WEAK_FUNC(sub_83C17FD8);
PPC_FUNC_IMPL(__imp__sub_83C17FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C17FE4"))) PPC_WEAK_FUNC(sub_83C17FE4);
PPC_FUNC_IMPL(__imp__sub_83C17FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C17FE8"))) PPC_WEAK_FUNC(sub_83C17FE8);
PPC_FUNC_IMPL(__imp__sub_83C17FE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-9384
	ctx.r4.s64 = ctx.r11.s64 + -9384;
	// addi r3,r10,-4228
	ctx.r3.s64 = ctx.r10.s64 + -4228;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C1800C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-21864
	ctx.r3.s64 = ctx.r9.s64 + -21864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18018;
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

__attribute__((alias("__imp__sub_83C18028"))) PPC_WEAK_FUNC(sub_83C18028);
PPC_FUNC_IMPL(__imp__sub_83C18028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24952
	ctx.r7.s64 = ctx.r8.s64 + -24952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18050"))) PPC_WEAK_FUNC(sub_83C18050);
PPC_FUNC_IMPL(__imp__sub_83C18050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-4200
	ctx.r6.s64 = ctx.r7.s64 + -4200;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24952);
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

__attribute__((alias("__imp__sub_83C18098"))) PPC_WEAK_FUNC(sub_83C18098);
PPC_FUNC_IMPL(__imp__sub_83C18098) {
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
	// addi r3,r11,-24956
	ctx.r3.s64 = ctx.r11.s64 + -24956;
	// bl 0x83523120
	ctx.lr = 0x83C180B0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21880
	ctx.r3.s64 = ctx.r10.s64 + -21880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C180BC;
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

__attribute__((alias("__imp__sub_83C180CC"))) PPC_WEAK_FUNC(sub_83C180CC);
PPC_FUNC_IMPL(__imp__sub_83C180CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C180D0"))) PPC_WEAK_FUNC(sub_83C180D0);
PPC_FUNC_IMPL(__imp__sub_83C180D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21760
	ctx.r3.s64 = ctx.r11.s64 + -21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C180DC"))) PPC_WEAK_FUNC(sub_83C180DC);
PPC_FUNC_IMPL(__imp__sub_83C180DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C180E0"))) PPC_WEAK_FUNC(sub_83C180E0);
PPC_FUNC_IMPL(__imp__sub_83C180E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C180EC"))) PPC_WEAK_FUNC(sub_83C180EC);
PPC_FUNC_IMPL(__imp__sub_83C180EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C180F0"))) PPC_WEAK_FUNC(sub_83C180F0);
PPC_FUNC_IMPL(__imp__sub_83C180F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C180FC"))) PPC_WEAK_FUNC(sub_83C180FC);
PPC_FUNC_IMPL(__imp__sub_83C180FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18100"))) PPC_WEAK_FUNC(sub_83C18100);
PPC_FUNC_IMPL(__imp__sub_83C18100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21736
	ctx.r3.s64 = ctx.r11.s64 + -21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1810C"))) PPC_WEAK_FUNC(sub_83C1810C);
PPC_FUNC_IMPL(__imp__sub_83C1810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18110"))) PPC_WEAK_FUNC(sub_83C18110);
PPC_FUNC_IMPL(__imp__sub_83C18110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1811C"))) PPC_WEAK_FUNC(sub_83C1811C);
PPC_FUNC_IMPL(__imp__sub_83C1811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18120"))) PPC_WEAK_FUNC(sub_83C18120);
PPC_FUNC_IMPL(__imp__sub_83C18120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1812C"))) PPC_WEAK_FUNC(sub_83C1812C);
PPC_FUNC_IMPL(__imp__sub_83C1812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18130"))) PPC_WEAK_FUNC(sub_83C18130);
PPC_FUNC_IMPL(__imp__sub_83C18130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1813C"))) PPC_WEAK_FUNC(sub_83C1813C);
PPC_FUNC_IMPL(__imp__sub_83C1813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18140"))) PPC_WEAK_FUNC(sub_83C18140);
PPC_FUNC_IMPL(__imp__sub_83C18140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1814C"))) PPC_WEAK_FUNC(sub_83C1814C);
PPC_FUNC_IMPL(__imp__sub_83C1814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18150"))) PPC_WEAK_FUNC(sub_83C18150);
PPC_FUNC_IMPL(__imp__sub_83C18150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21696
	ctx.r3.s64 = ctx.r11.s64 + -21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1815C"))) PPC_WEAK_FUNC(sub_83C1815C);
PPC_FUNC_IMPL(__imp__sub_83C1815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18160"))) PPC_WEAK_FUNC(sub_83C18160);
PPC_FUNC_IMPL(__imp__sub_83C18160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21688
	ctx.r3.s64 = ctx.r11.s64 + -21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1816C"))) PPC_WEAK_FUNC(sub_83C1816C);
PPC_FUNC_IMPL(__imp__sub_83C1816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18170"))) PPC_WEAK_FUNC(sub_83C18170);
PPC_FUNC_IMPL(__imp__sub_83C18170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1817C"))) PPC_WEAK_FUNC(sub_83C1817C);
PPC_FUNC_IMPL(__imp__sub_83C1817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18180"))) PPC_WEAK_FUNC(sub_83C18180);
PPC_FUNC_IMPL(__imp__sub_83C18180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1818C"))) PPC_WEAK_FUNC(sub_83C1818C);
PPC_FUNC_IMPL(__imp__sub_83C1818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18190"))) PPC_WEAK_FUNC(sub_83C18190);
PPC_FUNC_IMPL(__imp__sub_83C18190) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-9184
	ctx.r4.s64 = ctx.r11.s64 + -9184;
	// addi r3,r10,-4076
	ctx.r3.s64 = ctx.r10.s64 + -4076;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C181B4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-21648
	ctx.r3.s64 = ctx.r9.s64 + -21648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C181C0;
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

__attribute__((alias("__imp__sub_83C181D0"))) PPC_WEAK_FUNC(sub_83C181D0);
PPC_FUNC_IMPL(__imp__sub_83C181D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24940
	ctx.r7.s64 = ctx.r8.s64 + -24940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24940);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24940, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C181F8"))) PPC_WEAK_FUNC(sub_83C181F8);
PPC_FUNC_IMPL(__imp__sub_83C181F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-4048
	ctx.r6.s64 = ctx.r7.s64 + -4048;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4148(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4148);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24940(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24940);
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
	// std r9,-4048(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18240"))) PPC_WEAK_FUNC(sub_83C18240);
PPC_FUNC_IMPL(__imp__sub_83C18240) {
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
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// bl 0x83523120
	ctx.lr = 0x83C18258;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21664
	ctx.r3.s64 = ctx.r10.s64 + -21664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18264;
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

__attribute__((alias("__imp__sub_83C18274"))) PPC_WEAK_FUNC(sub_83C18274);
PPC_FUNC_IMPL(__imp__sub_83C18274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18278"))) PPC_WEAK_FUNC(sub_83C18278);
PPC_FUNC_IMPL(__imp__sub_83C18278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18284"))) PPC_WEAK_FUNC(sub_83C18284);
PPC_FUNC_IMPL(__imp__sub_83C18284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18288"))) PPC_WEAK_FUNC(sub_83C18288);
PPC_FUNC_IMPL(__imp__sub_83C18288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18294"))) PPC_WEAK_FUNC(sub_83C18294);
PPC_FUNC_IMPL(__imp__sub_83C18294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18298"))) PPC_WEAK_FUNC(sub_83C18298);
PPC_FUNC_IMPL(__imp__sub_83C18298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182A4"))) PPC_WEAK_FUNC(sub_83C182A4);
PPC_FUNC_IMPL(__imp__sub_83C182A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182A8"))) PPC_WEAK_FUNC(sub_83C182A8);
PPC_FUNC_IMPL(__imp__sub_83C182A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21520
	ctx.r3.s64 = ctx.r11.s64 + -21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182B4"))) PPC_WEAK_FUNC(sub_83C182B4);
PPC_FUNC_IMPL(__imp__sub_83C182B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182B8"))) PPC_WEAK_FUNC(sub_83C182B8);
PPC_FUNC_IMPL(__imp__sub_83C182B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182C4"))) PPC_WEAK_FUNC(sub_83C182C4);
PPC_FUNC_IMPL(__imp__sub_83C182C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182C8"))) PPC_WEAK_FUNC(sub_83C182C8);
PPC_FUNC_IMPL(__imp__sub_83C182C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21504
	ctx.r3.s64 = ctx.r11.s64 + -21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182D4"))) PPC_WEAK_FUNC(sub_83C182D4);
PPC_FUNC_IMPL(__imp__sub_83C182D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182D8"))) PPC_WEAK_FUNC(sub_83C182D8);
PPC_FUNC_IMPL(__imp__sub_83C182D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21496
	ctx.r3.s64 = ctx.r11.s64 + -21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182E4"))) PPC_WEAK_FUNC(sub_83C182E4);
PPC_FUNC_IMPL(__imp__sub_83C182E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182E8"))) PPC_WEAK_FUNC(sub_83C182E8);
PPC_FUNC_IMPL(__imp__sub_83C182E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C182F4"))) PPC_WEAK_FUNC(sub_83C182F4);
PPC_FUNC_IMPL(__imp__sub_83C182F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C182F8"))) PPC_WEAK_FUNC(sub_83C182F8);
PPC_FUNC_IMPL(__imp__sub_83C182F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18304"))) PPC_WEAK_FUNC(sub_83C18304);
PPC_FUNC_IMPL(__imp__sub_83C18304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18308"))) PPC_WEAK_FUNC(sub_83C18308);
PPC_FUNC_IMPL(__imp__sub_83C18308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21472
	ctx.r3.s64 = ctx.r11.s64 + -21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18314"))) PPC_WEAK_FUNC(sub_83C18314);
PPC_FUNC_IMPL(__imp__sub_83C18314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18318"))) PPC_WEAK_FUNC(sub_83C18318);
PPC_FUNC_IMPL(__imp__sub_83C18318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18324"))) PPC_WEAK_FUNC(sub_83C18324);
PPC_FUNC_IMPL(__imp__sub_83C18324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18328"))) PPC_WEAK_FUNC(sub_83C18328);
PPC_FUNC_IMPL(__imp__sub_83C18328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18334"))) PPC_WEAK_FUNC(sub_83C18334);
PPC_FUNC_IMPL(__imp__sub_83C18334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18338"))) PPC_WEAK_FUNC(sub_83C18338);
PPC_FUNC_IMPL(__imp__sub_83C18338) {
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
	// addi r3,r11,-24924
	ctx.r3.s64 = ctx.r11.s64 + -24924;
	// bl 0x83523120
	ctx.lr = 0x83C18350;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21448
	ctx.r3.s64 = ctx.r10.s64 + -21448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1835C;
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

__attribute__((alias("__imp__sub_83C1836C"))) PPC_WEAK_FUNC(sub_83C1836C);
PPC_FUNC_IMPL(__imp__sub_83C1836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18370"))) PPC_WEAK_FUNC(sub_83C18370);
PPC_FUNC_IMPL(__imp__sub_83C18370) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24908
	ctx.r7.s64 = ctx.r8.s64 + -24908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24908);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24908, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18398"))) PPC_WEAK_FUNC(sub_83C18398);
PPC_FUNC_IMPL(__imp__sub_83C18398) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-3924
	ctx.r6.s64 = ctx.r7.s64 + -3924;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3996(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3996);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24908(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24908);
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
	// std r9,-3924(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3924, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C183E0"))) PPC_WEAK_FUNC(sub_83C183E0);
PPC_FUNC_IMPL(__imp__sub_83C183E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C183EC"))) PPC_WEAK_FUNC(sub_83C183EC);
PPC_FUNC_IMPL(__imp__sub_83C183EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C183F0"))) PPC_WEAK_FUNC(sub_83C183F0);
PPC_FUNC_IMPL(__imp__sub_83C183F0) {
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
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// bl 0x8259af80
	ctx.lr = 0x83C18408;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21416
	ctx.r3.s64 = ctx.r10.s64 + -21416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18414;
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

__attribute__((alias("__imp__sub_83C18424"))) PPC_WEAK_FUNC(sub_83C18424);
PPC_FUNC_IMPL(__imp__sub_83C18424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18428"))) PPC_WEAK_FUNC(sub_83C18428);
PPC_FUNC_IMPL(__imp__sub_83C18428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24920
	ctx.r11.s64 = ctx.r8.s64 + -24920;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-3948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3948);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21424
	ctx.r3.s64 = ctx.r6.s64 + -21424;
	// stw r10,-24920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24920, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18458"))) PPC_WEAK_FUNC(sub_83C18458);
PPC_FUNC_IMPL(__imp__sub_83C18458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18464"))) PPC_WEAK_FUNC(sub_83C18464);
PPC_FUNC_IMPL(__imp__sub_83C18464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18468"))) PPC_WEAK_FUNC(sub_83C18468);
PPC_FUNC_IMPL(__imp__sub_83C18468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18474"))) PPC_WEAK_FUNC(sub_83C18474);
PPC_FUNC_IMPL(__imp__sub_83C18474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18478"))) PPC_WEAK_FUNC(sub_83C18478);
PPC_FUNC_IMPL(__imp__sub_83C18478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18484"))) PPC_WEAK_FUNC(sub_83C18484);
PPC_FUNC_IMPL(__imp__sub_83C18484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18488"))) PPC_WEAK_FUNC(sub_83C18488);
PPC_FUNC_IMPL(__imp__sub_83C18488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21384
	ctx.r3.s64 = ctx.r11.s64 + -21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18494"))) PPC_WEAK_FUNC(sub_83C18494);
PPC_FUNC_IMPL(__imp__sub_83C18494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18498"))) PPC_WEAK_FUNC(sub_83C18498);
PPC_FUNC_IMPL(__imp__sub_83C18498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184A4"))) PPC_WEAK_FUNC(sub_83C184A4);
PPC_FUNC_IMPL(__imp__sub_83C184A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184A8"))) PPC_WEAK_FUNC(sub_83C184A8);
PPC_FUNC_IMPL(__imp__sub_83C184A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184B4"))) PPC_WEAK_FUNC(sub_83C184B4);
PPC_FUNC_IMPL(__imp__sub_83C184B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184B8"))) PPC_WEAK_FUNC(sub_83C184B8);
PPC_FUNC_IMPL(__imp__sub_83C184B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184C4"))) PPC_WEAK_FUNC(sub_83C184C4);
PPC_FUNC_IMPL(__imp__sub_83C184C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184C8"))) PPC_WEAK_FUNC(sub_83C184C8);
PPC_FUNC_IMPL(__imp__sub_83C184C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184D4"))) PPC_WEAK_FUNC(sub_83C184D4);
PPC_FUNC_IMPL(__imp__sub_83C184D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184D8"))) PPC_WEAK_FUNC(sub_83C184D8);
PPC_FUNC_IMPL(__imp__sub_83C184D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184E4"))) PPC_WEAK_FUNC(sub_83C184E4);
PPC_FUNC_IMPL(__imp__sub_83C184E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184E8"))) PPC_WEAK_FUNC(sub_83C184E8);
PPC_FUNC_IMPL(__imp__sub_83C184E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21336
	ctx.r3.s64 = ctx.r11.s64 + -21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C184F4"))) PPC_WEAK_FUNC(sub_83C184F4);
PPC_FUNC_IMPL(__imp__sub_83C184F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C184F8"))) PPC_WEAK_FUNC(sub_83C184F8);
PPC_FUNC_IMPL(__imp__sub_83C184F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18504"))) PPC_WEAK_FUNC(sub_83C18504);
PPC_FUNC_IMPL(__imp__sub_83C18504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18508"))) PPC_WEAK_FUNC(sub_83C18508);
PPC_FUNC_IMPL(__imp__sub_83C18508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18514"))) PPC_WEAK_FUNC(sub_83C18514);
PPC_FUNC_IMPL(__imp__sub_83C18514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18518"))) PPC_WEAK_FUNC(sub_83C18518);
PPC_FUNC_IMPL(__imp__sub_83C18518) {
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
	// addi r3,r11,-24548
	ctx.r3.s64 = ctx.r11.s64 + -24548;
	// bl 0x83523120
	ctx.lr = 0x83C18530;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21312
	ctx.r3.s64 = ctx.r10.s64 + -21312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1853C;
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

__attribute__((alias("__imp__sub_83C1854C"))) PPC_WEAK_FUNC(sub_83C1854C);
PPC_FUNC_IMPL(__imp__sub_83C1854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18550"))) PPC_WEAK_FUNC(sub_83C18550);
PPC_FUNC_IMPL(__imp__sub_83C18550) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24532
	ctx.r7.s64 = ctx.r8.s64 + -24532;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24532(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24532);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24532, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18578"))) PPC_WEAK_FUNC(sub_83C18578);
PPC_FUNC_IMPL(__imp__sub_83C18578) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-3796
	ctx.r6.s64 = ctx.r7.s64 + -3796;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3868(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3868);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24532);
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
	// std r9,-3796(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3796, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C185C0"))) PPC_WEAK_FUNC(sub_83C185C0);
PPC_FUNC_IMPL(__imp__sub_83C185C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21296
	ctx.r3.s64 = ctx.r11.s64 + -21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C185CC"))) PPC_WEAK_FUNC(sub_83C185CC);
PPC_FUNC_IMPL(__imp__sub_83C185CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C185D0"))) PPC_WEAK_FUNC(sub_83C185D0);
PPC_FUNC_IMPL(__imp__sub_83C185D0) {
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
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// bl 0x8259af80
	ctx.lr = 0x83C185E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21280
	ctx.r3.s64 = ctx.r10.s64 + -21280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C185F4;
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

__attribute__((alias("__imp__sub_83C18604"))) PPC_WEAK_FUNC(sub_83C18604);
PPC_FUNC_IMPL(__imp__sub_83C18604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18608"))) PPC_WEAK_FUNC(sub_83C18608);
PPC_FUNC_IMPL(__imp__sub_83C18608) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24544
	ctx.r11.s64 = ctx.r8.s64 + -24544;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-3820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3820);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21288
	ctx.r3.s64 = ctx.r6.s64 + -21288;
	// stw r10,-24544(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24544, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18638"))) PPC_WEAK_FUNC(sub_83C18638);
PPC_FUNC_IMPL(__imp__sub_83C18638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18644"))) PPC_WEAK_FUNC(sub_83C18644);
PPC_FUNC_IMPL(__imp__sub_83C18644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18648"))) PPC_WEAK_FUNC(sub_83C18648);
PPC_FUNC_IMPL(__imp__sub_83C18648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21264
	ctx.r3.s64 = ctx.r11.s64 + -21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18654"))) PPC_WEAK_FUNC(sub_83C18654);
PPC_FUNC_IMPL(__imp__sub_83C18654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18658"))) PPC_WEAK_FUNC(sub_83C18658);
PPC_FUNC_IMPL(__imp__sub_83C18658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21256
	ctx.r3.s64 = ctx.r11.s64 + -21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18664"))) PPC_WEAK_FUNC(sub_83C18664);
PPC_FUNC_IMPL(__imp__sub_83C18664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18668"))) PPC_WEAK_FUNC(sub_83C18668);
PPC_FUNC_IMPL(__imp__sub_83C18668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21248
	ctx.r3.s64 = ctx.r11.s64 + -21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18674"))) PPC_WEAK_FUNC(sub_83C18674);
PPC_FUNC_IMPL(__imp__sub_83C18674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18678"))) PPC_WEAK_FUNC(sub_83C18678);
PPC_FUNC_IMPL(__imp__sub_83C18678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21240
	ctx.r3.s64 = ctx.r11.s64 + -21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18684"))) PPC_WEAK_FUNC(sub_83C18684);
PPC_FUNC_IMPL(__imp__sub_83C18684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18688"))) PPC_WEAK_FUNC(sub_83C18688);
PPC_FUNC_IMPL(__imp__sub_83C18688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21232
	ctx.r3.s64 = ctx.r11.s64 + -21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18694"))) PPC_WEAK_FUNC(sub_83C18694);
PPC_FUNC_IMPL(__imp__sub_83C18694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18698"))) PPC_WEAK_FUNC(sub_83C18698);
PPC_FUNC_IMPL(__imp__sub_83C18698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186A4"))) PPC_WEAK_FUNC(sub_83C186A4);
PPC_FUNC_IMPL(__imp__sub_83C186A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186A8"))) PPC_WEAK_FUNC(sub_83C186A8);
PPC_FUNC_IMPL(__imp__sub_83C186A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186B4"))) PPC_WEAK_FUNC(sub_83C186B4);
PPC_FUNC_IMPL(__imp__sub_83C186B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186B8"))) PPC_WEAK_FUNC(sub_83C186B8);
PPC_FUNC_IMPL(__imp__sub_83C186B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21208
	ctx.r3.s64 = ctx.r11.s64 + -21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186C4"))) PPC_WEAK_FUNC(sub_83C186C4);
PPC_FUNC_IMPL(__imp__sub_83C186C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186C8"))) PPC_WEAK_FUNC(sub_83C186C8);
PPC_FUNC_IMPL(__imp__sub_83C186C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21200
	ctx.r3.s64 = ctx.r11.s64 + -21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186D4"))) PPC_WEAK_FUNC(sub_83C186D4);
PPC_FUNC_IMPL(__imp__sub_83C186D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186D8"))) PPC_WEAK_FUNC(sub_83C186D8);
PPC_FUNC_IMPL(__imp__sub_83C186D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21192
	ctx.r3.s64 = ctx.r11.s64 + -21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186E4"))) PPC_WEAK_FUNC(sub_83C186E4);
PPC_FUNC_IMPL(__imp__sub_83C186E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186E8"))) PPC_WEAK_FUNC(sub_83C186E8);
PPC_FUNC_IMPL(__imp__sub_83C186E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21184
	ctx.r3.s64 = ctx.r11.s64 + -21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C186F4"))) PPC_WEAK_FUNC(sub_83C186F4);
PPC_FUNC_IMPL(__imp__sub_83C186F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C186F8"))) PPC_WEAK_FUNC(sub_83C186F8);
PPC_FUNC_IMPL(__imp__sub_83C186F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18704"))) PPC_WEAK_FUNC(sub_83C18704);
PPC_FUNC_IMPL(__imp__sub_83C18704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18708"))) PPC_WEAK_FUNC(sub_83C18708);
PPC_FUNC_IMPL(__imp__sub_83C18708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21168
	ctx.r3.s64 = ctx.r11.s64 + -21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18714"))) PPC_WEAK_FUNC(sub_83C18714);
PPC_FUNC_IMPL(__imp__sub_83C18714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18718"))) PPC_WEAK_FUNC(sub_83C18718);
PPC_FUNC_IMPL(__imp__sub_83C18718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21160
	ctx.r3.s64 = ctx.r11.s64 + -21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18724"))) PPC_WEAK_FUNC(sub_83C18724);
PPC_FUNC_IMPL(__imp__sub_83C18724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18728"))) PPC_WEAK_FUNC(sub_83C18728);
PPC_FUNC_IMPL(__imp__sub_83C18728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18734"))) PPC_WEAK_FUNC(sub_83C18734);
PPC_FUNC_IMPL(__imp__sub_83C18734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18738"))) PPC_WEAK_FUNC(sub_83C18738);
PPC_FUNC_IMPL(__imp__sub_83C18738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18744"))) PPC_WEAK_FUNC(sub_83C18744);
PPC_FUNC_IMPL(__imp__sub_83C18744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18748"))) PPC_WEAK_FUNC(sub_83C18748);
PPC_FUNC_IMPL(__imp__sub_83C18748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21136
	ctx.r3.s64 = ctx.r11.s64 + -21136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18754"))) PPC_WEAK_FUNC(sub_83C18754);
PPC_FUNC_IMPL(__imp__sub_83C18754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18758"))) PPC_WEAK_FUNC(sub_83C18758);
PPC_FUNC_IMPL(__imp__sub_83C18758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21128
	ctx.r3.s64 = ctx.r11.s64 + -21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18764"))) PPC_WEAK_FUNC(sub_83C18764);
PPC_FUNC_IMPL(__imp__sub_83C18764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18768"))) PPC_WEAK_FUNC(sub_83C18768);
PPC_FUNC_IMPL(__imp__sub_83C18768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21120
	ctx.r3.s64 = ctx.r11.s64 + -21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18774"))) PPC_WEAK_FUNC(sub_83C18774);
PPC_FUNC_IMPL(__imp__sub_83C18774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18778"))) PPC_WEAK_FUNC(sub_83C18778);
PPC_FUNC_IMPL(__imp__sub_83C18778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21112
	ctx.r3.s64 = ctx.r11.s64 + -21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18784"))) PPC_WEAK_FUNC(sub_83C18784);
PPC_FUNC_IMPL(__imp__sub_83C18784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18788"))) PPC_WEAK_FUNC(sub_83C18788);
PPC_FUNC_IMPL(__imp__sub_83C18788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18794"))) PPC_WEAK_FUNC(sub_83C18794);
PPC_FUNC_IMPL(__imp__sub_83C18794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18798"))) PPC_WEAK_FUNC(sub_83C18798);
PPC_FUNC_IMPL(__imp__sub_83C18798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C187A4"))) PPC_WEAK_FUNC(sub_83C187A4);
PPC_FUNC_IMPL(__imp__sub_83C187A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C187A8"))) PPC_WEAK_FUNC(sub_83C187A8);
PPC_FUNC_IMPL(__imp__sub_83C187A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21088
	ctx.r3.s64 = ctx.r11.s64 + -21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C187B4"))) PPC_WEAK_FUNC(sub_83C187B4);
PPC_FUNC_IMPL(__imp__sub_83C187B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C187B8"))) PPC_WEAK_FUNC(sub_83C187B8);
PPC_FUNC_IMPL(__imp__sub_83C187B8) {
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
	// addi r3,r11,-24164
	ctx.r3.s64 = ctx.r11.s64 + -24164;
	// bl 0x83523120
	ctx.lr = 0x83C187D0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21080
	ctx.r3.s64 = ctx.r10.s64 + -21080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C187DC;
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

__attribute__((alias("__imp__sub_83C187EC"))) PPC_WEAK_FUNC(sub_83C187EC);
PPC_FUNC_IMPL(__imp__sub_83C187EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C187F0"))) PPC_WEAK_FUNC(sub_83C187F0);
PPC_FUNC_IMPL(__imp__sub_83C187F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24148
	ctx.r7.s64 = ctx.r8.s64 + -24148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24148);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24148, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18818"))) PPC_WEAK_FUNC(sub_83C18818);
PPC_FUNC_IMPL(__imp__sub_83C18818) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-3564
	ctx.r6.s64 = ctx.r7.s64 + -3564;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24148);
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
	// std r9,-3564(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18860"))) PPC_WEAK_FUNC(sub_83C18860);
PPC_FUNC_IMPL(__imp__sub_83C18860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21064
	ctx.r3.s64 = ctx.r11.s64 + -21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1886C"))) PPC_WEAK_FUNC(sub_83C1886C);
PPC_FUNC_IMPL(__imp__sub_83C1886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18870"))) PPC_WEAK_FUNC(sub_83C18870);
PPC_FUNC_IMPL(__imp__sub_83C18870) {
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
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// bl 0x8259af80
	ctx.lr = 0x83C18888;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-21048
	ctx.r3.s64 = ctx.r10.s64 + -21048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18894;
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

__attribute__((alias("__imp__sub_83C188A4"))) PPC_WEAK_FUNC(sub_83C188A4);
PPC_FUNC_IMPL(__imp__sub_83C188A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C188A8"))) PPC_WEAK_FUNC(sub_83C188A8);
PPC_FUNC_IMPL(__imp__sub_83C188A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24160
	ctx.r11.s64 = ctx.r8.s64 + -24160;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-3588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3588);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21056
	ctx.r3.s64 = ctx.r6.s64 + -21056;
	// stw r10,-24160(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24160, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C188D8"))) PPC_WEAK_FUNC(sub_83C188D8);
PPC_FUNC_IMPL(__imp__sub_83C188D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C188E4"))) PPC_WEAK_FUNC(sub_83C188E4);
PPC_FUNC_IMPL(__imp__sub_83C188E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C188E8"))) PPC_WEAK_FUNC(sub_83C188E8);
PPC_FUNC_IMPL(__imp__sub_83C188E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C188F4"))) PPC_WEAK_FUNC(sub_83C188F4);
PPC_FUNC_IMPL(__imp__sub_83C188F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C188F8"))) PPC_WEAK_FUNC(sub_83C188F8);
PPC_FUNC_IMPL(__imp__sub_83C188F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21024
	ctx.r3.s64 = ctx.r11.s64 + -21024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18904"))) PPC_WEAK_FUNC(sub_83C18904);
PPC_FUNC_IMPL(__imp__sub_83C18904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18908"))) PPC_WEAK_FUNC(sub_83C18908);
PPC_FUNC_IMPL(__imp__sub_83C18908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18914"))) PPC_WEAK_FUNC(sub_83C18914);
PPC_FUNC_IMPL(__imp__sub_83C18914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18918"))) PPC_WEAK_FUNC(sub_83C18918);
PPC_FUNC_IMPL(__imp__sub_83C18918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18924"))) PPC_WEAK_FUNC(sub_83C18924);
PPC_FUNC_IMPL(__imp__sub_83C18924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18928"))) PPC_WEAK_FUNC(sub_83C18928);
PPC_FUNC_IMPL(__imp__sub_83C18928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-21000
	ctx.r3.s64 = ctx.r11.s64 + -21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18934"))) PPC_WEAK_FUNC(sub_83C18934);
PPC_FUNC_IMPL(__imp__sub_83C18934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18938"))) PPC_WEAK_FUNC(sub_83C18938);
PPC_FUNC_IMPL(__imp__sub_83C18938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20992
	ctx.r3.s64 = ctx.r11.s64 + -20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18944"))) PPC_WEAK_FUNC(sub_83C18944);
PPC_FUNC_IMPL(__imp__sub_83C18944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18948"))) PPC_WEAK_FUNC(sub_83C18948);
PPC_FUNC_IMPL(__imp__sub_83C18948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18954"))) PPC_WEAK_FUNC(sub_83C18954);
PPC_FUNC_IMPL(__imp__sub_83C18954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18958"))) PPC_WEAK_FUNC(sub_83C18958);
PPC_FUNC_IMPL(__imp__sub_83C18958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20976
	ctx.r3.s64 = ctx.r11.s64 + -20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18964"))) PPC_WEAK_FUNC(sub_83C18964);
PPC_FUNC_IMPL(__imp__sub_83C18964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18968"))) PPC_WEAK_FUNC(sub_83C18968);
PPC_FUNC_IMPL(__imp__sub_83C18968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18974"))) PPC_WEAK_FUNC(sub_83C18974);
PPC_FUNC_IMPL(__imp__sub_83C18974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18978"))) PPC_WEAK_FUNC(sub_83C18978);
PPC_FUNC_IMPL(__imp__sub_83C18978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18984"))) PPC_WEAK_FUNC(sub_83C18984);
PPC_FUNC_IMPL(__imp__sub_83C18984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18988"))) PPC_WEAK_FUNC(sub_83C18988);
PPC_FUNC_IMPL(__imp__sub_83C18988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20952
	ctx.r3.s64 = ctx.r11.s64 + -20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18994"))) PPC_WEAK_FUNC(sub_83C18994);
PPC_FUNC_IMPL(__imp__sub_83C18994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18998"))) PPC_WEAK_FUNC(sub_83C18998);
PPC_FUNC_IMPL(__imp__sub_83C18998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189A4"))) PPC_WEAK_FUNC(sub_83C189A4);
PPC_FUNC_IMPL(__imp__sub_83C189A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189A8"))) PPC_WEAK_FUNC(sub_83C189A8);
PPC_FUNC_IMPL(__imp__sub_83C189A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189B4"))) PPC_WEAK_FUNC(sub_83C189B4);
PPC_FUNC_IMPL(__imp__sub_83C189B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189B8"))) PPC_WEAK_FUNC(sub_83C189B8);
PPC_FUNC_IMPL(__imp__sub_83C189B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20928
	ctx.r3.s64 = ctx.r11.s64 + -20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189C4"))) PPC_WEAK_FUNC(sub_83C189C4);
PPC_FUNC_IMPL(__imp__sub_83C189C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189C8"))) PPC_WEAK_FUNC(sub_83C189C8);
PPC_FUNC_IMPL(__imp__sub_83C189C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20920
	ctx.r3.s64 = ctx.r11.s64 + -20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189D4"))) PPC_WEAK_FUNC(sub_83C189D4);
PPC_FUNC_IMPL(__imp__sub_83C189D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189D8"))) PPC_WEAK_FUNC(sub_83C189D8);
PPC_FUNC_IMPL(__imp__sub_83C189D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20912
	ctx.r3.s64 = ctx.r11.s64 + -20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189E4"))) PPC_WEAK_FUNC(sub_83C189E4);
PPC_FUNC_IMPL(__imp__sub_83C189E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189E8"))) PPC_WEAK_FUNC(sub_83C189E8);
PPC_FUNC_IMPL(__imp__sub_83C189E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C189F4"))) PPC_WEAK_FUNC(sub_83C189F4);
PPC_FUNC_IMPL(__imp__sub_83C189F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C189F8"))) PPC_WEAK_FUNC(sub_83C189F8);
PPC_FUNC_IMPL(__imp__sub_83C189F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20896
	ctx.r3.s64 = ctx.r11.s64 + -20896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A04"))) PPC_WEAK_FUNC(sub_83C18A04);
PPC_FUNC_IMPL(__imp__sub_83C18A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A08"))) PPC_WEAK_FUNC(sub_83C18A08);
PPC_FUNC_IMPL(__imp__sub_83C18A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A14"))) PPC_WEAK_FUNC(sub_83C18A14);
PPC_FUNC_IMPL(__imp__sub_83C18A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A18"))) PPC_WEAK_FUNC(sub_83C18A18);
PPC_FUNC_IMPL(__imp__sub_83C18A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20880
	ctx.r3.s64 = ctx.r11.s64 + -20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A24"))) PPC_WEAK_FUNC(sub_83C18A24);
PPC_FUNC_IMPL(__imp__sub_83C18A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A28"))) PPC_WEAK_FUNC(sub_83C18A28);
PPC_FUNC_IMPL(__imp__sub_83C18A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20872
	ctx.r3.s64 = ctx.r11.s64 + -20872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A34"))) PPC_WEAK_FUNC(sub_83C18A34);
PPC_FUNC_IMPL(__imp__sub_83C18A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A38"))) PPC_WEAK_FUNC(sub_83C18A38);
PPC_FUNC_IMPL(__imp__sub_83C18A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20864
	ctx.r3.s64 = ctx.r11.s64 + -20864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A44"))) PPC_WEAK_FUNC(sub_83C18A44);
PPC_FUNC_IMPL(__imp__sub_83C18A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A48"))) PPC_WEAK_FUNC(sub_83C18A48);
PPC_FUNC_IMPL(__imp__sub_83C18A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A54"))) PPC_WEAK_FUNC(sub_83C18A54);
PPC_FUNC_IMPL(__imp__sub_83C18A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A58"))) PPC_WEAK_FUNC(sub_83C18A58);
PPC_FUNC_IMPL(__imp__sub_83C18A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A64"))) PPC_WEAK_FUNC(sub_83C18A64);
PPC_FUNC_IMPL(__imp__sub_83C18A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A68"))) PPC_WEAK_FUNC(sub_83C18A68);
PPC_FUNC_IMPL(__imp__sub_83C18A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A74"))) PPC_WEAK_FUNC(sub_83C18A74);
PPC_FUNC_IMPL(__imp__sub_83C18A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A78"))) PPC_WEAK_FUNC(sub_83C18A78);
PPC_FUNC_IMPL(__imp__sub_83C18A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20832
	ctx.r3.s64 = ctx.r11.s64 + -20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A84"))) PPC_WEAK_FUNC(sub_83C18A84);
PPC_FUNC_IMPL(__imp__sub_83C18A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A88"))) PPC_WEAK_FUNC(sub_83C18A88);
PPC_FUNC_IMPL(__imp__sub_83C18A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20824
	ctx.r3.s64 = ctx.r11.s64 + -20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18A94"))) PPC_WEAK_FUNC(sub_83C18A94);
PPC_FUNC_IMPL(__imp__sub_83C18A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18A98"))) PPC_WEAK_FUNC(sub_83C18A98);
PPC_FUNC_IMPL(__imp__sub_83C18A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AA4"))) PPC_WEAK_FUNC(sub_83C18AA4);
PPC_FUNC_IMPL(__imp__sub_83C18AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AA8"))) PPC_WEAK_FUNC(sub_83C18AA8);
PPC_FUNC_IMPL(__imp__sub_83C18AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AB4"))) PPC_WEAK_FUNC(sub_83C18AB4);
PPC_FUNC_IMPL(__imp__sub_83C18AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AB8"))) PPC_WEAK_FUNC(sub_83C18AB8);
PPC_FUNC_IMPL(__imp__sub_83C18AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AC4"))) PPC_WEAK_FUNC(sub_83C18AC4);
PPC_FUNC_IMPL(__imp__sub_83C18AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AC8"))) PPC_WEAK_FUNC(sub_83C18AC8);
PPC_FUNC_IMPL(__imp__sub_83C18AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20792
	ctx.r3.s64 = ctx.r11.s64 + -20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AD4"))) PPC_WEAK_FUNC(sub_83C18AD4);
PPC_FUNC_IMPL(__imp__sub_83C18AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AD8"))) PPC_WEAK_FUNC(sub_83C18AD8);
PPC_FUNC_IMPL(__imp__sub_83C18AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20784
	ctx.r3.s64 = ctx.r11.s64 + -20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AE4"))) PPC_WEAK_FUNC(sub_83C18AE4);
PPC_FUNC_IMPL(__imp__sub_83C18AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AE8"))) PPC_WEAK_FUNC(sub_83C18AE8);
PPC_FUNC_IMPL(__imp__sub_83C18AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20776
	ctx.r3.s64 = ctx.r11.s64 + -20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18AF4"))) PPC_WEAK_FUNC(sub_83C18AF4);
PPC_FUNC_IMPL(__imp__sub_83C18AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18AF8"))) PPC_WEAK_FUNC(sub_83C18AF8);
PPC_FUNC_IMPL(__imp__sub_83C18AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B04"))) PPC_WEAK_FUNC(sub_83C18B04);
PPC_FUNC_IMPL(__imp__sub_83C18B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B08"))) PPC_WEAK_FUNC(sub_83C18B08);
PPC_FUNC_IMPL(__imp__sub_83C18B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20760
	ctx.r3.s64 = ctx.r11.s64 + -20760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B14"))) PPC_WEAK_FUNC(sub_83C18B14);
PPC_FUNC_IMPL(__imp__sub_83C18B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B18"))) PPC_WEAK_FUNC(sub_83C18B18);
PPC_FUNC_IMPL(__imp__sub_83C18B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20752
	ctx.r3.s64 = ctx.r11.s64 + -20752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B24"))) PPC_WEAK_FUNC(sub_83C18B24);
PPC_FUNC_IMPL(__imp__sub_83C18B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B28"))) PPC_WEAK_FUNC(sub_83C18B28);
PPC_FUNC_IMPL(__imp__sub_83C18B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B34"))) PPC_WEAK_FUNC(sub_83C18B34);
PPC_FUNC_IMPL(__imp__sub_83C18B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B38"))) PPC_WEAK_FUNC(sub_83C18B38);
PPC_FUNC_IMPL(__imp__sub_83C18B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20736
	ctx.r3.s64 = ctx.r11.s64 + -20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B44"))) PPC_WEAK_FUNC(sub_83C18B44);
PPC_FUNC_IMPL(__imp__sub_83C18B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B48"))) PPC_WEAK_FUNC(sub_83C18B48);
PPC_FUNC_IMPL(__imp__sub_83C18B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20728
	ctx.r3.s64 = ctx.r11.s64 + -20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B54"))) PPC_WEAK_FUNC(sub_83C18B54);
PPC_FUNC_IMPL(__imp__sub_83C18B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B58"))) PPC_WEAK_FUNC(sub_83C18B58);
PPC_FUNC_IMPL(__imp__sub_83C18B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B64"))) PPC_WEAK_FUNC(sub_83C18B64);
PPC_FUNC_IMPL(__imp__sub_83C18B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B68"))) PPC_WEAK_FUNC(sub_83C18B68);
PPC_FUNC_IMPL(__imp__sub_83C18B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20712
	ctx.r3.s64 = ctx.r11.s64 + -20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B74"))) PPC_WEAK_FUNC(sub_83C18B74);
PPC_FUNC_IMPL(__imp__sub_83C18B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B78"))) PPC_WEAK_FUNC(sub_83C18B78);
PPC_FUNC_IMPL(__imp__sub_83C18B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20704
	ctx.r3.s64 = ctx.r11.s64 + -20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18B84"))) PPC_WEAK_FUNC(sub_83C18B84);
PPC_FUNC_IMPL(__imp__sub_83C18B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B88"))) PPC_WEAK_FUNC(sub_83C18B88);
PPC_FUNC_IMPL(__imp__sub_83C18B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

