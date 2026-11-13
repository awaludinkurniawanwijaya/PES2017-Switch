#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B71FB8"))) PPC_WEAK_FUNC(sub_83B71FB8);
PPC_FUNC_IMPL(__imp__sub_83B71FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17856
	ctx.r3.s64 = ctx.r11.s64 + 17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71FC4"))) PPC_WEAK_FUNC(sub_83B71FC4);
PPC_FUNC_IMPL(__imp__sub_83B71FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71FC8"))) PPC_WEAK_FUNC(sub_83B71FC8);
PPC_FUNC_IMPL(__imp__sub_83B71FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B71FD4"))) PPC_WEAK_FUNC(sub_83B71FD4);
PPC_FUNC_IMPL(__imp__sub_83B71FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B71FD8"))) PPC_WEAK_FUNC(sub_83B71FD8);
PPC_FUNC_IMPL(__imp__sub_83B71FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19684
	ctx.r7.s64 = ctx.r8.s64 + -19684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19684(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19684);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19684, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72000"))) PPC_WEAK_FUNC(sub_83B72000);
PPC_FUNC_IMPL(__imp__sub_83B72000) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// bl 0x83523120
	ctx.lr = 0x83B72018;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,17872
	ctx.r3.s64 = ctx.r10.s64 + 17872;
	// bl 0x831cdcc8
	ctx.lr = 0x83B72024;
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

__attribute__((alias("__imp__sub_83B72034"))) PPC_WEAK_FUNC(sub_83B72034);
PPC_FUNC_IMPL(__imp__sub_83B72034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72038"))) PPC_WEAK_FUNC(sub_83B72038);
PPC_FUNC_IMPL(__imp__sub_83B72038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72044"))) PPC_WEAK_FUNC(sub_83B72044);
PPC_FUNC_IMPL(__imp__sub_83B72044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72048"))) PPC_WEAK_FUNC(sub_83B72048);
PPC_FUNC_IMPL(__imp__sub_83B72048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17896
	ctx.r3.s64 = ctx.r11.s64 + 17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72054"))) PPC_WEAK_FUNC(sub_83B72054);
PPC_FUNC_IMPL(__imp__sub_83B72054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72058"))) PPC_WEAK_FUNC(sub_83B72058);
PPC_FUNC_IMPL(__imp__sub_83B72058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17904
	ctx.r3.s64 = ctx.r11.s64 + 17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72064"))) PPC_WEAK_FUNC(sub_83B72064);
PPC_FUNC_IMPL(__imp__sub_83B72064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72068"))) PPC_WEAK_FUNC(sub_83B72068);
PPC_FUNC_IMPL(__imp__sub_83B72068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72074"))) PPC_WEAK_FUNC(sub_83B72074);
PPC_FUNC_IMPL(__imp__sub_83B72074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72078"))) PPC_WEAK_FUNC(sub_83B72078);
PPC_FUNC_IMPL(__imp__sub_83B72078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72084"))) PPC_WEAK_FUNC(sub_83B72084);
PPC_FUNC_IMPL(__imp__sub_83B72084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72088"))) PPC_WEAK_FUNC(sub_83B72088);
PPC_FUNC_IMPL(__imp__sub_83B72088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17928
	ctx.r3.s64 = ctx.r11.s64 + 17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72094"))) PPC_WEAK_FUNC(sub_83B72094);
PPC_FUNC_IMPL(__imp__sub_83B72094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72098"))) PPC_WEAK_FUNC(sub_83B72098);
PPC_FUNC_IMPL(__imp__sub_83B72098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17936
	ctx.r3.s64 = ctx.r11.s64 + 17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720A4"))) PPC_WEAK_FUNC(sub_83B720A4);
PPC_FUNC_IMPL(__imp__sub_83B720A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720A8"))) PPC_WEAK_FUNC(sub_83B720A8);
PPC_FUNC_IMPL(__imp__sub_83B720A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17944
	ctx.r3.s64 = ctx.r11.s64 + 17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720B4"))) PPC_WEAK_FUNC(sub_83B720B4);
PPC_FUNC_IMPL(__imp__sub_83B720B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720B8"))) PPC_WEAK_FUNC(sub_83B720B8);
PPC_FUNC_IMPL(__imp__sub_83B720B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17952
	ctx.r3.s64 = ctx.r11.s64 + 17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720C4"))) PPC_WEAK_FUNC(sub_83B720C4);
PPC_FUNC_IMPL(__imp__sub_83B720C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720C8"))) PPC_WEAK_FUNC(sub_83B720C8);
PPC_FUNC_IMPL(__imp__sub_83B720C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17960
	ctx.r3.s64 = ctx.r11.s64 + 17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720D4"))) PPC_WEAK_FUNC(sub_83B720D4);
PPC_FUNC_IMPL(__imp__sub_83B720D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720D8"))) PPC_WEAK_FUNC(sub_83B720D8);
PPC_FUNC_IMPL(__imp__sub_83B720D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17968
	ctx.r3.s64 = ctx.r11.s64 + 17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720E4"))) PPC_WEAK_FUNC(sub_83B720E4);
PPC_FUNC_IMPL(__imp__sub_83B720E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720E8"))) PPC_WEAK_FUNC(sub_83B720E8);
PPC_FUNC_IMPL(__imp__sub_83B720E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17976
	ctx.r3.s64 = ctx.r11.s64 + 17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B720F4"))) PPC_WEAK_FUNC(sub_83B720F4);
PPC_FUNC_IMPL(__imp__sub_83B720F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B720F8"))) PPC_WEAK_FUNC(sub_83B720F8);
PPC_FUNC_IMPL(__imp__sub_83B720F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19672
	ctx.r7.s64 = ctx.r8.s64 + -19672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72120"))) PPC_WEAK_FUNC(sub_83B72120);
PPC_FUNC_IMPL(__imp__sub_83B72120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17984
	ctx.r3.s64 = ctx.r11.s64 + 17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7212C"))) PPC_WEAK_FUNC(sub_83B7212C);
PPC_FUNC_IMPL(__imp__sub_83B7212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72130"))) PPC_WEAK_FUNC(sub_83B72130);
PPC_FUNC_IMPL(__imp__sub_83B72130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,17992
	ctx.r3.s64 = ctx.r11.s64 + 17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7213C"))) PPC_WEAK_FUNC(sub_83B7213C);
PPC_FUNC_IMPL(__imp__sub_83B7213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72140"))) PPC_WEAK_FUNC(sub_83B72140);
PPC_FUNC_IMPL(__imp__sub_83B72140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7214C"))) PPC_WEAK_FUNC(sub_83B7214C);
PPC_FUNC_IMPL(__imp__sub_83B7214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72150"))) PPC_WEAK_FUNC(sub_83B72150);
PPC_FUNC_IMPL(__imp__sub_83B72150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18008
	ctx.r3.s64 = ctx.r11.s64 + 18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7215C"))) PPC_WEAK_FUNC(sub_83B7215C);
PPC_FUNC_IMPL(__imp__sub_83B7215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72160"))) PPC_WEAK_FUNC(sub_83B72160);
PPC_FUNC_IMPL(__imp__sub_83B72160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18016
	ctx.r3.s64 = ctx.r11.s64 + 18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7216C"))) PPC_WEAK_FUNC(sub_83B7216C);
PPC_FUNC_IMPL(__imp__sub_83B7216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72170"))) PPC_WEAK_FUNC(sub_83B72170);
PPC_FUNC_IMPL(__imp__sub_83B72170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7217C"))) PPC_WEAK_FUNC(sub_83B7217C);
PPC_FUNC_IMPL(__imp__sub_83B7217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72180"))) PPC_WEAK_FUNC(sub_83B72180);
PPC_FUNC_IMPL(__imp__sub_83B72180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18032
	ctx.r3.s64 = ctx.r11.s64 + 18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7218C"))) PPC_WEAK_FUNC(sub_83B7218C);
PPC_FUNC_IMPL(__imp__sub_83B7218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72190"))) PPC_WEAK_FUNC(sub_83B72190);
PPC_FUNC_IMPL(__imp__sub_83B72190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18040
	ctx.r3.s64 = ctx.r11.s64 + 18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7219C"))) PPC_WEAK_FUNC(sub_83B7219C);
PPC_FUNC_IMPL(__imp__sub_83B7219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B721A0"))) PPC_WEAK_FUNC(sub_83B721A0);
PPC_FUNC_IMPL(__imp__sub_83B721A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18048
	ctx.r3.s64 = ctx.r11.s64 + 18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B721AC"))) PPC_WEAK_FUNC(sub_83B721AC);
PPC_FUNC_IMPL(__imp__sub_83B721AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B721B0"))) PPC_WEAK_FUNC(sub_83B721B0);
PPC_FUNC_IMPL(__imp__sub_83B721B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B721BC"))) PPC_WEAK_FUNC(sub_83B721BC);
PPC_FUNC_IMPL(__imp__sub_83B721BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B721C0"))) PPC_WEAK_FUNC(sub_83B721C0);
PPC_FUNC_IMPL(__imp__sub_83B721C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18064
	ctx.r3.s64 = ctx.r11.s64 + 18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B721CC"))) PPC_WEAK_FUNC(sub_83B721CC);
PPC_FUNC_IMPL(__imp__sub_83B721CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B721D0"))) PPC_WEAK_FUNC(sub_83B721D0);
PPC_FUNC_IMPL(__imp__sub_83B721D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18072
	ctx.r3.s64 = ctx.r11.s64 + 18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B721DC"))) PPC_WEAK_FUNC(sub_83B721DC);
PPC_FUNC_IMPL(__imp__sub_83B721DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B721E0"))) PPC_WEAK_FUNC(sub_83B721E0);
PPC_FUNC_IMPL(__imp__sub_83B721E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// bl 0x83523120
	ctx.lr = 0x83B721F8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18080
	ctx.r3.s64 = ctx.r10.s64 + 18080;
	// bl 0x831cdcc8
	ctx.lr = 0x83B72204;
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

__attribute__((alias("__imp__sub_83B72214"))) PPC_WEAK_FUNC(sub_83B72214);
PPC_FUNC_IMPL(__imp__sub_83B72214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72218"))) PPC_WEAK_FUNC(sub_83B72218);
PPC_FUNC_IMPL(__imp__sub_83B72218) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19660
	ctx.r7.s64 = ctx.r8.s64 + -19660;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19660);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19660, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72240"))) PPC_WEAK_FUNC(sub_83B72240);
PPC_FUNC_IMPL(__imp__sub_83B72240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18096
	ctx.r3.s64 = ctx.r11.s64 + 18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7224C"))) PPC_WEAK_FUNC(sub_83B7224C);
PPC_FUNC_IMPL(__imp__sub_83B7224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72250"))) PPC_WEAK_FUNC(sub_83B72250);
PPC_FUNC_IMPL(__imp__sub_83B72250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18104
	ctx.r3.s64 = ctx.r11.s64 + 18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7225C"))) PPC_WEAK_FUNC(sub_83B7225C);
PPC_FUNC_IMPL(__imp__sub_83B7225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72260"))) PPC_WEAK_FUNC(sub_83B72260);
PPC_FUNC_IMPL(__imp__sub_83B72260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7226C"))) PPC_WEAK_FUNC(sub_83B7226C);
PPC_FUNC_IMPL(__imp__sub_83B7226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72270"))) PPC_WEAK_FUNC(sub_83B72270);
PPC_FUNC_IMPL(__imp__sub_83B72270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18120
	ctx.r3.s64 = ctx.r11.s64 + 18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7227C"))) PPC_WEAK_FUNC(sub_83B7227C);
PPC_FUNC_IMPL(__imp__sub_83B7227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72280"))) PPC_WEAK_FUNC(sub_83B72280);
PPC_FUNC_IMPL(__imp__sub_83B72280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7228C"))) PPC_WEAK_FUNC(sub_83B7228C);
PPC_FUNC_IMPL(__imp__sub_83B7228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72290"))) PPC_WEAK_FUNC(sub_83B72290);
PPC_FUNC_IMPL(__imp__sub_83B72290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18136
	ctx.r3.s64 = ctx.r11.s64 + 18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7229C"))) PPC_WEAK_FUNC(sub_83B7229C);
PPC_FUNC_IMPL(__imp__sub_83B7229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722A0"))) PPC_WEAK_FUNC(sub_83B722A0);
PPC_FUNC_IMPL(__imp__sub_83B722A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18144
	ctx.r3.s64 = ctx.r11.s64 + 18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722AC"))) PPC_WEAK_FUNC(sub_83B722AC);
PPC_FUNC_IMPL(__imp__sub_83B722AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722B0"))) PPC_WEAK_FUNC(sub_83B722B0);
PPC_FUNC_IMPL(__imp__sub_83B722B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722BC"))) PPC_WEAK_FUNC(sub_83B722BC);
PPC_FUNC_IMPL(__imp__sub_83B722BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722C0"))) PPC_WEAK_FUNC(sub_83B722C0);
PPC_FUNC_IMPL(__imp__sub_83B722C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18160
	ctx.r3.s64 = ctx.r11.s64 + 18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722CC"))) PPC_WEAK_FUNC(sub_83B722CC);
PPC_FUNC_IMPL(__imp__sub_83B722CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722D0"))) PPC_WEAK_FUNC(sub_83B722D0);
PPC_FUNC_IMPL(__imp__sub_83B722D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18168
	ctx.r3.s64 = ctx.r11.s64 + 18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722DC"))) PPC_WEAK_FUNC(sub_83B722DC);
PPC_FUNC_IMPL(__imp__sub_83B722DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722E0"))) PPC_WEAK_FUNC(sub_83B722E0);
PPC_FUNC_IMPL(__imp__sub_83B722E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18176
	ctx.r3.s64 = ctx.r11.s64 + 18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722EC"))) PPC_WEAK_FUNC(sub_83B722EC);
PPC_FUNC_IMPL(__imp__sub_83B722EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B722F0"))) PPC_WEAK_FUNC(sub_83B722F0);
PPC_FUNC_IMPL(__imp__sub_83B722F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18184
	ctx.r3.s64 = ctx.r11.s64 + 18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B722FC"))) PPC_WEAK_FUNC(sub_83B722FC);
PPC_FUNC_IMPL(__imp__sub_83B722FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72300"))) PPC_WEAK_FUNC(sub_83B72300);
PPC_FUNC_IMPL(__imp__sub_83B72300) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19652
	ctx.r3.s64 = ctx.r11.s64 + -19652;
	// bl 0x83523120
	ctx.lr = 0x83B72318;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18192
	ctx.r3.s64 = ctx.r10.s64 + 18192;
	// bl 0x831cdcc8
	ctx.lr = 0x83B72324;
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

__attribute__((alias("__imp__sub_83B72334"))) PPC_WEAK_FUNC(sub_83B72334);
PPC_FUNC_IMPL(__imp__sub_83B72334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72338"))) PPC_WEAK_FUNC(sub_83B72338);
PPC_FUNC_IMPL(__imp__sub_83B72338) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19648
	ctx.r7.s64 = ctx.r8.s64 + -19648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72360"))) PPC_WEAK_FUNC(sub_83B72360);
PPC_FUNC_IMPL(__imp__sub_83B72360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18208
	ctx.r3.s64 = ctx.r11.s64 + 18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7236C"))) PPC_WEAK_FUNC(sub_83B7236C);
PPC_FUNC_IMPL(__imp__sub_83B7236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72370"))) PPC_WEAK_FUNC(sub_83B72370);
PPC_FUNC_IMPL(__imp__sub_83B72370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18216
	ctx.r3.s64 = ctx.r11.s64 + 18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7237C"))) PPC_WEAK_FUNC(sub_83B7237C);
PPC_FUNC_IMPL(__imp__sub_83B7237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72380"))) PPC_WEAK_FUNC(sub_83B72380);
PPC_FUNC_IMPL(__imp__sub_83B72380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7238C"))) PPC_WEAK_FUNC(sub_83B7238C);
PPC_FUNC_IMPL(__imp__sub_83B7238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72390"))) PPC_WEAK_FUNC(sub_83B72390);
PPC_FUNC_IMPL(__imp__sub_83B72390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18232
	ctx.r3.s64 = ctx.r11.s64 + 18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7239C"))) PPC_WEAK_FUNC(sub_83B7239C);
PPC_FUNC_IMPL(__imp__sub_83B7239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723A0"))) PPC_WEAK_FUNC(sub_83B723A0);
PPC_FUNC_IMPL(__imp__sub_83B723A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18240
	ctx.r3.s64 = ctx.r11.s64 + 18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723AC"))) PPC_WEAK_FUNC(sub_83B723AC);
PPC_FUNC_IMPL(__imp__sub_83B723AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723B0"))) PPC_WEAK_FUNC(sub_83B723B0);
PPC_FUNC_IMPL(__imp__sub_83B723B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18248
	ctx.r3.s64 = ctx.r11.s64 + 18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723BC"))) PPC_WEAK_FUNC(sub_83B723BC);
PPC_FUNC_IMPL(__imp__sub_83B723BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723C0"))) PPC_WEAK_FUNC(sub_83B723C0);
PPC_FUNC_IMPL(__imp__sub_83B723C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18256
	ctx.r3.s64 = ctx.r11.s64 + 18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723CC"))) PPC_WEAK_FUNC(sub_83B723CC);
PPC_FUNC_IMPL(__imp__sub_83B723CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723D0"))) PPC_WEAK_FUNC(sub_83B723D0);
PPC_FUNC_IMPL(__imp__sub_83B723D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723DC"))) PPC_WEAK_FUNC(sub_83B723DC);
PPC_FUNC_IMPL(__imp__sub_83B723DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723E0"))) PPC_WEAK_FUNC(sub_83B723E0);
PPC_FUNC_IMPL(__imp__sub_83B723E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723EC"))) PPC_WEAK_FUNC(sub_83B723EC);
PPC_FUNC_IMPL(__imp__sub_83B723EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B723F0"))) PPC_WEAK_FUNC(sub_83B723F0);
PPC_FUNC_IMPL(__imp__sub_83B723F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B723FC"))) PPC_WEAK_FUNC(sub_83B723FC);
PPC_FUNC_IMPL(__imp__sub_83B723FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72400"))) PPC_WEAK_FUNC(sub_83B72400);
PPC_FUNC_IMPL(__imp__sub_83B72400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7240C"))) PPC_WEAK_FUNC(sub_83B7240C);
PPC_FUNC_IMPL(__imp__sub_83B7240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72410"))) PPC_WEAK_FUNC(sub_83B72410);
PPC_FUNC_IMPL(__imp__sub_83B72410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7241C"))) PPC_WEAK_FUNC(sub_83B7241C);
PPC_FUNC_IMPL(__imp__sub_83B7241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72420"))) PPC_WEAK_FUNC(sub_83B72420);
PPC_FUNC_IMPL(__imp__sub_83B72420) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// bl 0x83523120
	ctx.lr = 0x83B72438;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18304
	ctx.r3.s64 = ctx.r10.s64 + 18304;
	// bl 0x831cdcc8
	ctx.lr = 0x83B72444;
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

__attribute__((alias("__imp__sub_83B72454"))) PPC_WEAK_FUNC(sub_83B72454);
PPC_FUNC_IMPL(__imp__sub_83B72454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72458"))) PPC_WEAK_FUNC(sub_83B72458);
PPC_FUNC_IMPL(__imp__sub_83B72458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19636
	ctx.r7.s64 = ctx.r8.s64 + -19636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19636);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19636, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72480"))) PPC_WEAK_FUNC(sub_83B72480);
PPC_FUNC_IMPL(__imp__sub_83B72480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7248C"))) PPC_WEAK_FUNC(sub_83B7248C);
PPC_FUNC_IMPL(__imp__sub_83B7248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72490"))) PPC_WEAK_FUNC(sub_83B72490);
PPC_FUNC_IMPL(__imp__sub_83B72490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18328
	ctx.r3.s64 = ctx.r11.s64 + 18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7249C"))) PPC_WEAK_FUNC(sub_83B7249C);
PPC_FUNC_IMPL(__imp__sub_83B7249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724A0"))) PPC_WEAK_FUNC(sub_83B724A0);
PPC_FUNC_IMPL(__imp__sub_83B724A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18336
	ctx.r3.s64 = ctx.r11.s64 + 18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724AC"))) PPC_WEAK_FUNC(sub_83B724AC);
PPC_FUNC_IMPL(__imp__sub_83B724AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724B0"))) PPC_WEAK_FUNC(sub_83B724B0);
PPC_FUNC_IMPL(__imp__sub_83B724B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18344
	ctx.r3.s64 = ctx.r11.s64 + 18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724BC"))) PPC_WEAK_FUNC(sub_83B724BC);
PPC_FUNC_IMPL(__imp__sub_83B724BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724C0"))) PPC_WEAK_FUNC(sub_83B724C0);
PPC_FUNC_IMPL(__imp__sub_83B724C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18352
	ctx.r3.s64 = ctx.r11.s64 + 18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724CC"))) PPC_WEAK_FUNC(sub_83B724CC);
PPC_FUNC_IMPL(__imp__sub_83B724CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724D0"))) PPC_WEAK_FUNC(sub_83B724D0);
PPC_FUNC_IMPL(__imp__sub_83B724D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18360
	ctx.r3.s64 = ctx.r11.s64 + 18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724DC"))) PPC_WEAK_FUNC(sub_83B724DC);
PPC_FUNC_IMPL(__imp__sub_83B724DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724E0"))) PPC_WEAK_FUNC(sub_83B724E0);
PPC_FUNC_IMPL(__imp__sub_83B724E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18368
	ctx.r3.s64 = ctx.r11.s64 + 18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724EC"))) PPC_WEAK_FUNC(sub_83B724EC);
PPC_FUNC_IMPL(__imp__sub_83B724EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B724F0"))) PPC_WEAK_FUNC(sub_83B724F0);
PPC_FUNC_IMPL(__imp__sub_83B724F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B724FC"))) PPC_WEAK_FUNC(sub_83B724FC);
PPC_FUNC_IMPL(__imp__sub_83B724FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72500"))) PPC_WEAK_FUNC(sub_83B72500);
PPC_FUNC_IMPL(__imp__sub_83B72500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18384
	ctx.r3.s64 = ctx.r11.s64 + 18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7250C"))) PPC_WEAK_FUNC(sub_83B7250C);
PPC_FUNC_IMPL(__imp__sub_83B7250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72510"))) PPC_WEAK_FUNC(sub_83B72510);
PPC_FUNC_IMPL(__imp__sub_83B72510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7251C"))) PPC_WEAK_FUNC(sub_83B7251C);
PPC_FUNC_IMPL(__imp__sub_83B7251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72520"))) PPC_WEAK_FUNC(sub_83B72520);
PPC_FUNC_IMPL(__imp__sub_83B72520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18400
	ctx.r3.s64 = ctx.r11.s64 + 18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7252C"))) PPC_WEAK_FUNC(sub_83B7252C);
PPC_FUNC_IMPL(__imp__sub_83B7252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72530"))) PPC_WEAK_FUNC(sub_83B72530);
PPC_FUNC_IMPL(__imp__sub_83B72530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18408
	ctx.r3.s64 = ctx.r11.s64 + 18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7253C"))) PPC_WEAK_FUNC(sub_83B7253C);
PPC_FUNC_IMPL(__imp__sub_83B7253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72540"))) PPC_WEAK_FUNC(sub_83B72540);
PPC_FUNC_IMPL(__imp__sub_83B72540) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19624
	ctx.r7.s64 = ctx.r8.s64 + -19624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72568"))) PPC_WEAK_FUNC(sub_83B72568);
PPC_FUNC_IMPL(__imp__sub_83B72568) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19628
	ctx.r3.s64 = ctx.r11.s64 + -19628;
	// bl 0x83523120
	ctx.lr = 0x83B72580;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18416
	ctx.r3.s64 = ctx.r10.s64 + 18416;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7258C;
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

__attribute__((alias("__imp__sub_83B7259C"))) PPC_WEAK_FUNC(sub_83B7259C);
PPC_FUNC_IMPL(__imp__sub_83B7259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725A0"))) PPC_WEAK_FUNC(sub_83B725A0);
PPC_FUNC_IMPL(__imp__sub_83B725A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18432
	ctx.r3.s64 = ctx.r11.s64 + 18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725AC"))) PPC_WEAK_FUNC(sub_83B725AC);
PPC_FUNC_IMPL(__imp__sub_83B725AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725B0"))) PPC_WEAK_FUNC(sub_83B725B0);
PPC_FUNC_IMPL(__imp__sub_83B725B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18440
	ctx.r3.s64 = ctx.r11.s64 + 18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725BC"))) PPC_WEAK_FUNC(sub_83B725BC);
PPC_FUNC_IMPL(__imp__sub_83B725BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725C0"))) PPC_WEAK_FUNC(sub_83B725C0);
PPC_FUNC_IMPL(__imp__sub_83B725C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18448
	ctx.r3.s64 = ctx.r11.s64 + 18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725CC"))) PPC_WEAK_FUNC(sub_83B725CC);
PPC_FUNC_IMPL(__imp__sub_83B725CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725D0"))) PPC_WEAK_FUNC(sub_83B725D0);
PPC_FUNC_IMPL(__imp__sub_83B725D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18456
	ctx.r3.s64 = ctx.r11.s64 + 18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725DC"))) PPC_WEAK_FUNC(sub_83B725DC);
PPC_FUNC_IMPL(__imp__sub_83B725DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725E0"))) PPC_WEAK_FUNC(sub_83B725E0);
PPC_FUNC_IMPL(__imp__sub_83B725E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18464
	ctx.r3.s64 = ctx.r11.s64 + 18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725EC"))) PPC_WEAK_FUNC(sub_83B725EC);
PPC_FUNC_IMPL(__imp__sub_83B725EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B725F0"))) PPC_WEAK_FUNC(sub_83B725F0);
PPC_FUNC_IMPL(__imp__sub_83B725F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18472
	ctx.r3.s64 = ctx.r11.s64 + 18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B725FC"))) PPC_WEAK_FUNC(sub_83B725FC);
PPC_FUNC_IMPL(__imp__sub_83B725FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72600"))) PPC_WEAK_FUNC(sub_83B72600);
PPC_FUNC_IMPL(__imp__sub_83B72600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18480
	ctx.r3.s64 = ctx.r11.s64 + 18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7260C"))) PPC_WEAK_FUNC(sub_83B7260C);
PPC_FUNC_IMPL(__imp__sub_83B7260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72610"))) PPC_WEAK_FUNC(sub_83B72610);
PPC_FUNC_IMPL(__imp__sub_83B72610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18488
	ctx.r3.s64 = ctx.r11.s64 + 18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7261C"))) PPC_WEAK_FUNC(sub_83B7261C);
PPC_FUNC_IMPL(__imp__sub_83B7261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72620"))) PPC_WEAK_FUNC(sub_83B72620);
PPC_FUNC_IMPL(__imp__sub_83B72620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7262C"))) PPC_WEAK_FUNC(sub_83B7262C);
PPC_FUNC_IMPL(__imp__sub_83B7262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72630"))) PPC_WEAK_FUNC(sub_83B72630);
PPC_FUNC_IMPL(__imp__sub_83B72630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18504
	ctx.r3.s64 = ctx.r11.s64 + 18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7263C"))) PPC_WEAK_FUNC(sub_83B7263C);
PPC_FUNC_IMPL(__imp__sub_83B7263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72640"))) PPC_WEAK_FUNC(sub_83B72640);
PPC_FUNC_IMPL(__imp__sub_83B72640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18512
	ctx.r3.s64 = ctx.r11.s64 + 18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7264C"))) PPC_WEAK_FUNC(sub_83B7264C);
PPC_FUNC_IMPL(__imp__sub_83B7264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72650"))) PPC_WEAK_FUNC(sub_83B72650);
PPC_FUNC_IMPL(__imp__sub_83B72650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7265C"))) PPC_WEAK_FUNC(sub_83B7265C);
PPC_FUNC_IMPL(__imp__sub_83B7265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72660"))) PPC_WEAK_FUNC(sub_83B72660);
PPC_FUNC_IMPL(__imp__sub_83B72660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-22620
	ctx.r4.s64 = ctx.r11.s64 + -22620;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-19604
	ctx.r3.s64 = ctx.r7.s64 + -19604;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72690"))) PPC_WEAK_FUNC(sub_83B72690);
PPC_FUNC_IMPL(__imp__sub_83B72690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19612
	ctx.r7.s64 = ctx.r8.s64 + -19612;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19612(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19612);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19612, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B726B8"))) PPC_WEAK_FUNC(sub_83B726B8);
PPC_FUNC_IMPL(__imp__sub_83B726B8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// bl 0x83523120
	ctx.lr = 0x83B726D0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18528
	ctx.r3.s64 = ctx.r10.s64 + 18528;
	// bl 0x831cdcc8
	ctx.lr = 0x83B726DC;
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

__attribute__((alias("__imp__sub_83B726EC"))) PPC_WEAK_FUNC(sub_83B726EC);
PPC_FUNC_IMPL(__imp__sub_83B726EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B726F0"))) PPC_WEAK_FUNC(sub_83B726F0);
PPC_FUNC_IMPL(__imp__sub_83B726F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B726FC"))) PPC_WEAK_FUNC(sub_83B726FC);
PPC_FUNC_IMPL(__imp__sub_83B726FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72700"))) PPC_WEAK_FUNC(sub_83B72700);
PPC_FUNC_IMPL(__imp__sub_83B72700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18552
	ctx.r3.s64 = ctx.r11.s64 + 18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7270C"))) PPC_WEAK_FUNC(sub_83B7270C);
PPC_FUNC_IMPL(__imp__sub_83B7270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72710"))) PPC_WEAK_FUNC(sub_83B72710);
PPC_FUNC_IMPL(__imp__sub_83B72710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18560
	ctx.r3.s64 = ctx.r11.s64 + 18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7271C"))) PPC_WEAK_FUNC(sub_83B7271C);
PPC_FUNC_IMPL(__imp__sub_83B7271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72720"))) PPC_WEAK_FUNC(sub_83B72720);
PPC_FUNC_IMPL(__imp__sub_83B72720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18568
	ctx.r3.s64 = ctx.r11.s64 + 18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7272C"))) PPC_WEAK_FUNC(sub_83B7272C);
PPC_FUNC_IMPL(__imp__sub_83B7272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72730"))) PPC_WEAK_FUNC(sub_83B72730);
PPC_FUNC_IMPL(__imp__sub_83B72730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18576
	ctx.r3.s64 = ctx.r11.s64 + 18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7273C"))) PPC_WEAK_FUNC(sub_83B7273C);
PPC_FUNC_IMPL(__imp__sub_83B7273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72740"))) PPC_WEAK_FUNC(sub_83B72740);
PPC_FUNC_IMPL(__imp__sub_83B72740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18584
	ctx.r3.s64 = ctx.r11.s64 + 18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7274C"))) PPC_WEAK_FUNC(sub_83B7274C);
PPC_FUNC_IMPL(__imp__sub_83B7274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72750"))) PPC_WEAK_FUNC(sub_83B72750);
PPC_FUNC_IMPL(__imp__sub_83B72750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18592
	ctx.r3.s64 = ctx.r11.s64 + 18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7275C"))) PPC_WEAK_FUNC(sub_83B7275C);
PPC_FUNC_IMPL(__imp__sub_83B7275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72760"))) PPC_WEAK_FUNC(sub_83B72760);
PPC_FUNC_IMPL(__imp__sub_83B72760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18600
	ctx.r3.s64 = ctx.r11.s64 + 18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7276C"))) PPC_WEAK_FUNC(sub_83B7276C);
PPC_FUNC_IMPL(__imp__sub_83B7276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72770"))) PPC_WEAK_FUNC(sub_83B72770);
PPC_FUNC_IMPL(__imp__sub_83B72770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7277C"))) PPC_WEAK_FUNC(sub_83B7277C);
PPC_FUNC_IMPL(__imp__sub_83B7277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72780"))) PPC_WEAK_FUNC(sub_83B72780);
PPC_FUNC_IMPL(__imp__sub_83B72780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18616
	ctx.r3.s64 = ctx.r11.s64 + 18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7278C"))) PPC_WEAK_FUNC(sub_83B7278C);
PPC_FUNC_IMPL(__imp__sub_83B7278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72790"))) PPC_WEAK_FUNC(sub_83B72790);
PPC_FUNC_IMPL(__imp__sub_83B72790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7279C"))) PPC_WEAK_FUNC(sub_83B7279C);
PPC_FUNC_IMPL(__imp__sub_83B7279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B727A0"))) PPC_WEAK_FUNC(sub_83B727A0);
PPC_FUNC_IMPL(__imp__sub_83B727A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18632
	ctx.r3.s64 = ctx.r11.s64 + 18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B727AC"))) PPC_WEAK_FUNC(sub_83B727AC);
PPC_FUNC_IMPL(__imp__sub_83B727AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B727B0"))) PPC_WEAK_FUNC(sub_83B727B0);
PPC_FUNC_IMPL(__imp__sub_83B727B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-21948
	ctx.r4.s64 = ctx.r11.s64 + -21948;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-19580
	ctx.r3.s64 = ctx.r7.s64 + -19580;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B727E0"))) PPC_WEAK_FUNC(sub_83B727E0);
PPC_FUNC_IMPL(__imp__sub_83B727E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19588
	ctx.r7.s64 = ctx.r8.s64 + -19588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19588(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19588);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19588, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72808"))) PPC_WEAK_FUNC(sub_83B72808);
PPC_FUNC_IMPL(__imp__sub_83B72808) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// bl 0x83523120
	ctx.lr = 0x83B72820;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18640
	ctx.r3.s64 = ctx.r10.s64 + 18640;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7282C;
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

__attribute__((alias("__imp__sub_83B7283C"))) PPC_WEAK_FUNC(sub_83B7283C);
PPC_FUNC_IMPL(__imp__sub_83B7283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72840"))) PPC_WEAK_FUNC(sub_83B72840);
PPC_FUNC_IMPL(__imp__sub_83B72840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18656
	ctx.r3.s64 = ctx.r11.s64 + 18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7284C"))) PPC_WEAK_FUNC(sub_83B7284C);
PPC_FUNC_IMPL(__imp__sub_83B7284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72850"))) PPC_WEAK_FUNC(sub_83B72850);
PPC_FUNC_IMPL(__imp__sub_83B72850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7285C"))) PPC_WEAK_FUNC(sub_83B7285C);
PPC_FUNC_IMPL(__imp__sub_83B7285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72860"))) PPC_WEAK_FUNC(sub_83B72860);
PPC_FUNC_IMPL(__imp__sub_83B72860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18672
	ctx.r3.s64 = ctx.r11.s64 + 18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7286C"))) PPC_WEAK_FUNC(sub_83B7286C);
PPC_FUNC_IMPL(__imp__sub_83B7286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72870"))) PPC_WEAK_FUNC(sub_83B72870);
PPC_FUNC_IMPL(__imp__sub_83B72870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18680
	ctx.r3.s64 = ctx.r11.s64 + 18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7287C"))) PPC_WEAK_FUNC(sub_83B7287C);
PPC_FUNC_IMPL(__imp__sub_83B7287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72880"))) PPC_WEAK_FUNC(sub_83B72880);
PPC_FUNC_IMPL(__imp__sub_83B72880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18688
	ctx.r3.s64 = ctx.r11.s64 + 18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7288C"))) PPC_WEAK_FUNC(sub_83B7288C);
PPC_FUNC_IMPL(__imp__sub_83B7288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72890"))) PPC_WEAK_FUNC(sub_83B72890);
PPC_FUNC_IMPL(__imp__sub_83B72890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18696
	ctx.r3.s64 = ctx.r11.s64 + 18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7289C"))) PPC_WEAK_FUNC(sub_83B7289C);
PPC_FUNC_IMPL(__imp__sub_83B7289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728A0"))) PPC_WEAK_FUNC(sub_83B728A0);
PPC_FUNC_IMPL(__imp__sub_83B728A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18704
	ctx.r3.s64 = ctx.r11.s64 + 18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728AC"))) PPC_WEAK_FUNC(sub_83B728AC);
PPC_FUNC_IMPL(__imp__sub_83B728AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728B0"))) PPC_WEAK_FUNC(sub_83B728B0);
PPC_FUNC_IMPL(__imp__sub_83B728B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18712
	ctx.r3.s64 = ctx.r11.s64 + 18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728BC"))) PPC_WEAK_FUNC(sub_83B728BC);
PPC_FUNC_IMPL(__imp__sub_83B728BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728C0"))) PPC_WEAK_FUNC(sub_83B728C0);
PPC_FUNC_IMPL(__imp__sub_83B728C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18720
	ctx.r3.s64 = ctx.r11.s64 + 18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728CC"))) PPC_WEAK_FUNC(sub_83B728CC);
PPC_FUNC_IMPL(__imp__sub_83B728CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728D0"))) PPC_WEAK_FUNC(sub_83B728D0);
PPC_FUNC_IMPL(__imp__sub_83B728D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18728
	ctx.r3.s64 = ctx.r11.s64 + 18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728DC"))) PPC_WEAK_FUNC(sub_83B728DC);
PPC_FUNC_IMPL(__imp__sub_83B728DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728E0"))) PPC_WEAK_FUNC(sub_83B728E0);
PPC_FUNC_IMPL(__imp__sub_83B728E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18736
	ctx.r3.s64 = ctx.r11.s64 + 18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728EC"))) PPC_WEAK_FUNC(sub_83B728EC);
PPC_FUNC_IMPL(__imp__sub_83B728EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B728F0"))) PPC_WEAK_FUNC(sub_83B728F0);
PPC_FUNC_IMPL(__imp__sub_83B728F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18744
	ctx.r3.s64 = ctx.r11.s64 + 18744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B728FC"))) PPC_WEAK_FUNC(sub_83B728FC);
PPC_FUNC_IMPL(__imp__sub_83B728FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72900"))) PPC_WEAK_FUNC(sub_83B72900);
PPC_FUNC_IMPL(__imp__sub_83B72900) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19564
	ctx.r7.s64 = ctx.r8.s64 + -19564;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19564(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19564);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19564, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72928"))) PPC_WEAK_FUNC(sub_83B72928);
PPC_FUNC_IMPL(__imp__sub_83B72928) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x83523120
	ctx.lr = 0x83B72940;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18752
	ctx.r3.s64 = ctx.r10.s64 + 18752;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7294C;
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

__attribute__((alias("__imp__sub_83B7295C"))) PPC_WEAK_FUNC(sub_83B7295C);
PPC_FUNC_IMPL(__imp__sub_83B7295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72960"))) PPC_WEAK_FUNC(sub_83B72960);
PPC_FUNC_IMPL(__imp__sub_83B72960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18768
	ctx.r3.s64 = ctx.r11.s64 + 18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7296C"))) PPC_WEAK_FUNC(sub_83B7296C);
PPC_FUNC_IMPL(__imp__sub_83B7296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72970"))) PPC_WEAK_FUNC(sub_83B72970);
PPC_FUNC_IMPL(__imp__sub_83B72970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18776
	ctx.r3.s64 = ctx.r11.s64 + 18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7297C"))) PPC_WEAK_FUNC(sub_83B7297C);
PPC_FUNC_IMPL(__imp__sub_83B7297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72980"))) PPC_WEAK_FUNC(sub_83B72980);
PPC_FUNC_IMPL(__imp__sub_83B72980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18784
	ctx.r3.s64 = ctx.r11.s64 + 18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7298C"))) PPC_WEAK_FUNC(sub_83B7298C);
PPC_FUNC_IMPL(__imp__sub_83B7298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72990"))) PPC_WEAK_FUNC(sub_83B72990);
PPC_FUNC_IMPL(__imp__sub_83B72990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18792
	ctx.r3.s64 = ctx.r11.s64 + 18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7299C"))) PPC_WEAK_FUNC(sub_83B7299C);
PPC_FUNC_IMPL(__imp__sub_83B7299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729A0"))) PPC_WEAK_FUNC(sub_83B729A0);
PPC_FUNC_IMPL(__imp__sub_83B729A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18800
	ctx.r3.s64 = ctx.r11.s64 + 18800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729AC"))) PPC_WEAK_FUNC(sub_83B729AC);
PPC_FUNC_IMPL(__imp__sub_83B729AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729B0"))) PPC_WEAK_FUNC(sub_83B729B0);
PPC_FUNC_IMPL(__imp__sub_83B729B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18808
	ctx.r3.s64 = ctx.r11.s64 + 18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729BC"))) PPC_WEAK_FUNC(sub_83B729BC);
PPC_FUNC_IMPL(__imp__sub_83B729BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729C0"))) PPC_WEAK_FUNC(sub_83B729C0);
PPC_FUNC_IMPL(__imp__sub_83B729C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18816
	ctx.r3.s64 = ctx.r11.s64 + 18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729CC"))) PPC_WEAK_FUNC(sub_83B729CC);
PPC_FUNC_IMPL(__imp__sub_83B729CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729D0"))) PPC_WEAK_FUNC(sub_83B729D0);
PPC_FUNC_IMPL(__imp__sub_83B729D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18824
	ctx.r3.s64 = ctx.r11.s64 + 18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729DC"))) PPC_WEAK_FUNC(sub_83B729DC);
PPC_FUNC_IMPL(__imp__sub_83B729DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729E0"))) PPC_WEAK_FUNC(sub_83B729E0);
PPC_FUNC_IMPL(__imp__sub_83B729E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18832
	ctx.r3.s64 = ctx.r11.s64 + 18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729EC"))) PPC_WEAK_FUNC(sub_83B729EC);
PPC_FUNC_IMPL(__imp__sub_83B729EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B729F0"))) PPC_WEAK_FUNC(sub_83B729F0);
PPC_FUNC_IMPL(__imp__sub_83B729F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18840
	ctx.r3.s64 = ctx.r11.s64 + 18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B729FC"))) PPC_WEAK_FUNC(sub_83B729FC);
PPC_FUNC_IMPL(__imp__sub_83B729FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72A00"))) PPC_WEAK_FUNC(sub_83B72A00);
PPC_FUNC_IMPL(__imp__sub_83B72A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18848
	ctx.r3.s64 = ctx.r11.s64 + 18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72A0C"))) PPC_WEAK_FUNC(sub_83B72A0C);
PPC_FUNC_IMPL(__imp__sub_83B72A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72A10"))) PPC_WEAK_FUNC(sub_83B72A10);
PPC_FUNC_IMPL(__imp__sub_83B72A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18856
	ctx.r3.s64 = ctx.r11.s64 + 18856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72A1C"))) PPC_WEAK_FUNC(sub_83B72A1C);
PPC_FUNC_IMPL(__imp__sub_83B72A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72A20"))) PPC_WEAK_FUNC(sub_83B72A20);
PPC_FUNC_IMPL(__imp__sub_83B72A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19552
	ctx.r7.s64 = ctx.r8.s64 + -19552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B72A48"))) PPC_WEAK_FUNC(sub_83B72A48);
PPC_FUNC_IMPL(__imp__sub_83B72A48) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-19556
	ctx.r3.s64 = ctx.r11.s64 + -19556;
	// bl 0x83523120
	ctx.lr = 0x83B72A60;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,18864
	ctx.r3.s64 = ctx.r10.s64 + 18864;
	// bl 0x831cdcc8
	ctx.lr = 0x83B72A6C;
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

__attribute__((alias("__imp__sub_83B72A7C"))) PPC_WEAK_FUNC(sub_83B72A7C);
PPC_FUNC_IMPL(__imp__sub_83B72A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72A80"))) PPC_WEAK_FUNC(sub_83B72A80);
PPC_FUNC_IMPL(__imp__sub_83B72A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18880
	ctx.r3.s64 = ctx.r11.s64 + 18880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72A8C"))) PPC_WEAK_FUNC(sub_83B72A8C);
PPC_FUNC_IMPL(__imp__sub_83B72A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72A90"))) PPC_WEAK_FUNC(sub_83B72A90);
PPC_FUNC_IMPL(__imp__sub_83B72A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18888
	ctx.r3.s64 = ctx.r11.s64 + 18888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72A9C"))) PPC_WEAK_FUNC(sub_83B72A9C);
PPC_FUNC_IMPL(__imp__sub_83B72A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B72AA0"))) PPC_WEAK_FUNC(sub_83B72AA0);
PPC_FUNC_IMPL(__imp__sub_83B72AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,18896
	ctx.r3.s64 = ctx.r11.s64 + 18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B72AAC"))) PPC_WEAK_FUNC(sub_83B72AAC);
PPC_FUNC_IMPL(__imp__sub_83B72AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

