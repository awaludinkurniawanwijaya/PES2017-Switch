#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C32A3C"))) PPC_WEAK_FUNC(sub_83C32A3C);
PPC_FUNC_IMPL(__imp__sub_83C32A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32A40"))) PPC_WEAK_FUNC(sub_83C32A40);
PPC_FUNC_IMPL(__imp__sub_83C32A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9648
	ctx.r7.s64 = ctx.r8.s64 + 9648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32A68"))) PPC_WEAK_FUNC(sub_83C32A68);
PPC_FUNC_IMPL(__imp__sub_83C32A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-31204
	ctx.r6.s64 = ctx.r7.s64 + -31204;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9648);
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
	// std r9,-31204(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32AB0"))) PPC_WEAK_FUNC(sub_83C32AB0);
PPC_FUNC_IMPL(__imp__sub_83C32AB0) {
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
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// bl 0x83523120
	ctx.lr = 0x83C32AC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17960
	ctx.r3.s64 = ctx.r10.s64 + 17960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32AD4;
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

__attribute__((alias("__imp__sub_83C32AE4"))) PPC_WEAK_FUNC(sub_83C32AE4);
PPC_FUNC_IMPL(__imp__sub_83C32AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32AE8"))) PPC_WEAK_FUNC(sub_83C32AE8);
PPC_FUNC_IMPL(__imp__sub_83C32AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,17976
	ctx.r3.s64 = ctx.r11.s64 + 17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32AF4"))) PPC_WEAK_FUNC(sub_83C32AF4);
PPC_FUNC_IMPL(__imp__sub_83C32AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32AF8"))) PPC_WEAK_FUNC(sub_83C32AF8);
PPC_FUNC_IMPL(__imp__sub_83C32AF8) {
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
	// addi r3,r11,9656
	ctx.r3.s64 = ctx.r11.s64 + 9656;
	// bl 0x8259af80
	ctx.lr = 0x83C32B10;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,17992
	ctx.r3.s64 = ctx.r10.s64 + 17992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32B1C;
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

__attribute__((alias("__imp__sub_83C32B2C"))) PPC_WEAK_FUNC(sub_83C32B2C);
PPC_FUNC_IMPL(__imp__sub_83C32B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32B30"))) PPC_WEAK_FUNC(sub_83C32B30);
PPC_FUNC_IMPL(__imp__sub_83C32B30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9636
	ctx.r11.s64 = ctx.r8.s64 + 9636;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-31228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31228);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17984
	ctx.r3.s64 = ctx.r6.s64 + 17984;
	// stw r10,9636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32B60"))) PPC_WEAK_FUNC(sub_83C32B60);
PPC_FUNC_IMPL(__imp__sub_83C32B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32B6C"))) PPC_WEAK_FUNC(sub_83C32B6C);
PPC_FUNC_IMPL(__imp__sub_83C32B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32B70"))) PPC_WEAK_FUNC(sub_83C32B70);
PPC_FUNC_IMPL(__imp__sub_83C32B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18008
	ctx.r3.s64 = ctx.r11.s64 + 18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32B7C"))) PPC_WEAK_FUNC(sub_83C32B7C);
PPC_FUNC_IMPL(__imp__sub_83C32B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32B80"))) PPC_WEAK_FUNC(sub_83C32B80);
PPC_FUNC_IMPL(__imp__sub_83C32B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18016
	ctx.r3.s64 = ctx.r11.s64 + 18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32B8C"))) PPC_WEAK_FUNC(sub_83C32B8C);
PPC_FUNC_IMPL(__imp__sub_83C32B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32B90"))) PPC_WEAK_FUNC(sub_83C32B90);
PPC_FUNC_IMPL(__imp__sub_83C32B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32B9C"))) PPC_WEAK_FUNC(sub_83C32B9C);
PPC_FUNC_IMPL(__imp__sub_83C32B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BA0"))) PPC_WEAK_FUNC(sub_83C32BA0);
PPC_FUNC_IMPL(__imp__sub_83C32BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18032
	ctx.r3.s64 = ctx.r11.s64 + 18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BAC"))) PPC_WEAK_FUNC(sub_83C32BAC);
PPC_FUNC_IMPL(__imp__sub_83C32BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BB0"))) PPC_WEAK_FUNC(sub_83C32BB0);
PPC_FUNC_IMPL(__imp__sub_83C32BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18040
	ctx.r3.s64 = ctx.r11.s64 + 18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BBC"))) PPC_WEAK_FUNC(sub_83C32BBC);
PPC_FUNC_IMPL(__imp__sub_83C32BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BC0"))) PPC_WEAK_FUNC(sub_83C32BC0);
PPC_FUNC_IMPL(__imp__sub_83C32BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18048
	ctx.r3.s64 = ctx.r11.s64 + 18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BCC"))) PPC_WEAK_FUNC(sub_83C32BCC);
PPC_FUNC_IMPL(__imp__sub_83C32BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BD0"))) PPC_WEAK_FUNC(sub_83C32BD0);
PPC_FUNC_IMPL(__imp__sub_83C32BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BDC"))) PPC_WEAK_FUNC(sub_83C32BDC);
PPC_FUNC_IMPL(__imp__sub_83C32BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BE0"))) PPC_WEAK_FUNC(sub_83C32BE0);
PPC_FUNC_IMPL(__imp__sub_83C32BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18064
	ctx.r3.s64 = ctx.r11.s64 + 18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BEC"))) PPC_WEAK_FUNC(sub_83C32BEC);
PPC_FUNC_IMPL(__imp__sub_83C32BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32BF0"))) PPC_WEAK_FUNC(sub_83C32BF0);
PPC_FUNC_IMPL(__imp__sub_83C32BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18072
	ctx.r3.s64 = ctx.r11.s64 + 18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32BFC"))) PPC_WEAK_FUNC(sub_83C32BFC);
PPC_FUNC_IMPL(__imp__sub_83C32BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32C00"))) PPC_WEAK_FUNC(sub_83C32C00);
PPC_FUNC_IMPL(__imp__sub_83C32C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18080
	ctx.r3.s64 = ctx.r11.s64 + 18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32C0C"))) PPC_WEAK_FUNC(sub_83C32C0C);
PPC_FUNC_IMPL(__imp__sub_83C32C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32C10"))) PPC_WEAK_FUNC(sub_83C32C10);
PPC_FUNC_IMPL(__imp__sub_83C32C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18088
	ctx.r3.s64 = ctx.r11.s64 + 18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32C1C"))) PPC_WEAK_FUNC(sub_83C32C1C);
PPC_FUNC_IMPL(__imp__sub_83C32C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32C20"))) PPC_WEAK_FUNC(sub_83C32C20);
PPC_FUNC_IMPL(__imp__sub_83C32C20) {
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
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// bl 0x83523120
	ctx.lr = 0x83C32C38;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18096
	ctx.r3.s64 = ctx.r10.s64 + 18096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32C44;
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

__attribute__((alias("__imp__sub_83C32C54"))) PPC_WEAK_FUNC(sub_83C32C54);
PPC_FUNC_IMPL(__imp__sub_83C32C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32C58"))) PPC_WEAK_FUNC(sub_83C32C58);
PPC_FUNC_IMPL(__imp__sub_83C32C58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10016
	ctx.r7.s64 = ctx.r8.s64 + 10016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32C80"))) PPC_WEAK_FUNC(sub_83C32C80);
PPC_FUNC_IMPL(__imp__sub_83C32C80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-31076
	ctx.r6.s64 = ctx.r7.s64 + -31076;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31148(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31148);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10016);
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
	// std r9,-31076(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31076, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32CC8"))) PPC_WEAK_FUNC(sub_83C32CC8);
PPC_FUNC_IMPL(__imp__sub_83C32CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32CD4"))) PPC_WEAK_FUNC(sub_83C32CD4);
PPC_FUNC_IMPL(__imp__sub_83C32CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32CD8"))) PPC_WEAK_FUNC(sub_83C32CD8);
PPC_FUNC_IMPL(__imp__sub_83C32CD8) {
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
	// addi r3,r11,10024
	ctx.r3.s64 = ctx.r11.s64 + 10024;
	// bl 0x8259af80
	ctx.lr = 0x83C32CF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18128
	ctx.r3.s64 = ctx.r10.s64 + 18128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32CFC;
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

__attribute__((alias("__imp__sub_83C32D0C"))) PPC_WEAK_FUNC(sub_83C32D0C);
PPC_FUNC_IMPL(__imp__sub_83C32D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D10"))) PPC_WEAK_FUNC(sub_83C32D10);
PPC_FUNC_IMPL(__imp__sub_83C32D10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10004
	ctx.r11.s64 = ctx.r8.s64 + 10004;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-31100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31100);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18120
	ctx.r3.s64 = ctx.r6.s64 + 18120;
	// stw r10,10004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D40"))) PPC_WEAK_FUNC(sub_83C32D40);
PPC_FUNC_IMPL(__imp__sub_83C32D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18136
	ctx.r3.s64 = ctx.r11.s64 + 18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D4C"))) PPC_WEAK_FUNC(sub_83C32D4C);
PPC_FUNC_IMPL(__imp__sub_83C32D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D50"))) PPC_WEAK_FUNC(sub_83C32D50);
PPC_FUNC_IMPL(__imp__sub_83C32D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18144
	ctx.r3.s64 = ctx.r11.s64 + 18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D5C"))) PPC_WEAK_FUNC(sub_83C32D5C);
PPC_FUNC_IMPL(__imp__sub_83C32D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D60"))) PPC_WEAK_FUNC(sub_83C32D60);
PPC_FUNC_IMPL(__imp__sub_83C32D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D6C"))) PPC_WEAK_FUNC(sub_83C32D6C);
PPC_FUNC_IMPL(__imp__sub_83C32D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D70"))) PPC_WEAK_FUNC(sub_83C32D70);
PPC_FUNC_IMPL(__imp__sub_83C32D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18160
	ctx.r3.s64 = ctx.r11.s64 + 18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D7C"))) PPC_WEAK_FUNC(sub_83C32D7C);
PPC_FUNC_IMPL(__imp__sub_83C32D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D80"))) PPC_WEAK_FUNC(sub_83C32D80);
PPC_FUNC_IMPL(__imp__sub_83C32D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18168
	ctx.r3.s64 = ctx.r11.s64 + 18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D8C"))) PPC_WEAK_FUNC(sub_83C32D8C);
PPC_FUNC_IMPL(__imp__sub_83C32D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32D90"))) PPC_WEAK_FUNC(sub_83C32D90);
PPC_FUNC_IMPL(__imp__sub_83C32D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18176
	ctx.r3.s64 = ctx.r11.s64 + 18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32D9C"))) PPC_WEAK_FUNC(sub_83C32D9C);
PPC_FUNC_IMPL(__imp__sub_83C32D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DA0"))) PPC_WEAK_FUNC(sub_83C32DA0);
PPC_FUNC_IMPL(__imp__sub_83C32DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18184
	ctx.r3.s64 = ctx.r11.s64 + 18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DAC"))) PPC_WEAK_FUNC(sub_83C32DAC);
PPC_FUNC_IMPL(__imp__sub_83C32DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DB0"))) PPC_WEAK_FUNC(sub_83C32DB0);
PPC_FUNC_IMPL(__imp__sub_83C32DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18192
	ctx.r3.s64 = ctx.r11.s64 + 18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DBC"))) PPC_WEAK_FUNC(sub_83C32DBC);
PPC_FUNC_IMPL(__imp__sub_83C32DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DC0"))) PPC_WEAK_FUNC(sub_83C32DC0);
PPC_FUNC_IMPL(__imp__sub_83C32DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18200
	ctx.r3.s64 = ctx.r11.s64 + 18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DCC"))) PPC_WEAK_FUNC(sub_83C32DCC);
PPC_FUNC_IMPL(__imp__sub_83C32DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DD0"))) PPC_WEAK_FUNC(sub_83C32DD0);
PPC_FUNC_IMPL(__imp__sub_83C32DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18208
	ctx.r3.s64 = ctx.r11.s64 + 18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DDC"))) PPC_WEAK_FUNC(sub_83C32DDC);
PPC_FUNC_IMPL(__imp__sub_83C32DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DE0"))) PPC_WEAK_FUNC(sub_83C32DE0);
PPC_FUNC_IMPL(__imp__sub_83C32DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18216
	ctx.r3.s64 = ctx.r11.s64 + 18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DEC"))) PPC_WEAK_FUNC(sub_83C32DEC);
PPC_FUNC_IMPL(__imp__sub_83C32DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32DF0"))) PPC_WEAK_FUNC(sub_83C32DF0);
PPC_FUNC_IMPL(__imp__sub_83C32DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32DFC"))) PPC_WEAK_FUNC(sub_83C32DFC);
PPC_FUNC_IMPL(__imp__sub_83C32DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32E00"))) PPC_WEAK_FUNC(sub_83C32E00);
PPC_FUNC_IMPL(__imp__sub_83C32E00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10388
	ctx.r7.s64 = ctx.r8.s64 + 10388;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10388);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10388, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32E28"))) PPC_WEAK_FUNC(sub_83C32E28);
PPC_FUNC_IMPL(__imp__sub_83C32E28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30948
	ctx.r6.s64 = ctx.r7.s64 + -30948;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10388);
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
	// std r9,-30948(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30948, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C32E70"))) PPC_WEAK_FUNC(sub_83C32E70);
PPC_FUNC_IMPL(__imp__sub_83C32E70) {
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
	// addi r3,r11,10372
	ctx.r3.s64 = ctx.r11.s64 + 10372;
	// bl 0x83523120
	ctx.lr = 0x83C32E88;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18232
	ctx.r3.s64 = ctx.r10.s64 + 18232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32E94;
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

__attribute__((alias("__imp__sub_83C32EA4"))) PPC_WEAK_FUNC(sub_83C32EA4);
PPC_FUNC_IMPL(__imp__sub_83C32EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32EA8"))) PPC_WEAK_FUNC(sub_83C32EA8);
PPC_FUNC_IMPL(__imp__sub_83C32EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18248
	ctx.r3.s64 = ctx.r11.s64 + 18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32EB4"))) PPC_WEAK_FUNC(sub_83C32EB4);
PPC_FUNC_IMPL(__imp__sub_83C32EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32EB8"))) PPC_WEAK_FUNC(sub_83C32EB8);
PPC_FUNC_IMPL(__imp__sub_83C32EB8) {
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
	// addi r3,r11,10400
	ctx.r3.s64 = ctx.r11.s64 + 10400;
	// bl 0x8259af80
	ctx.lr = 0x83C32ED0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18264
	ctx.r3.s64 = ctx.r10.s64 + 18264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C32EDC;
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

__attribute__((alias("__imp__sub_83C32EEC"))) PPC_WEAK_FUNC(sub_83C32EEC);
PPC_FUNC_IMPL(__imp__sub_83C32EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32EF0"))) PPC_WEAK_FUNC(sub_83C32EF0);
PPC_FUNC_IMPL(__imp__sub_83C32EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10376
	ctx.r11.s64 = ctx.r8.s64 + 10376;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30972);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18256
	ctx.r3.s64 = ctx.r6.s64 + 18256;
	// stw r10,10376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10376, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F20"))) PPC_WEAK_FUNC(sub_83C32F20);
PPC_FUNC_IMPL(__imp__sub_83C32F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F2C"))) PPC_WEAK_FUNC(sub_83C32F2C);
PPC_FUNC_IMPL(__imp__sub_83C32F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F30"))) PPC_WEAK_FUNC(sub_83C32F30);
PPC_FUNC_IMPL(__imp__sub_83C32F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F3C"))) PPC_WEAK_FUNC(sub_83C32F3C);
PPC_FUNC_IMPL(__imp__sub_83C32F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F40"))) PPC_WEAK_FUNC(sub_83C32F40);
PPC_FUNC_IMPL(__imp__sub_83C32F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F4C"))) PPC_WEAK_FUNC(sub_83C32F4C);
PPC_FUNC_IMPL(__imp__sub_83C32F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F50"))) PPC_WEAK_FUNC(sub_83C32F50);
PPC_FUNC_IMPL(__imp__sub_83C32F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F5C"))) PPC_WEAK_FUNC(sub_83C32F5C);
PPC_FUNC_IMPL(__imp__sub_83C32F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F60"))) PPC_WEAK_FUNC(sub_83C32F60);
PPC_FUNC_IMPL(__imp__sub_83C32F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F6C"))) PPC_WEAK_FUNC(sub_83C32F6C);
PPC_FUNC_IMPL(__imp__sub_83C32F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F70"))) PPC_WEAK_FUNC(sub_83C32F70);
PPC_FUNC_IMPL(__imp__sub_83C32F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18312
	ctx.r3.s64 = ctx.r11.s64 + 18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F7C"))) PPC_WEAK_FUNC(sub_83C32F7C);
PPC_FUNC_IMPL(__imp__sub_83C32F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F80"))) PPC_WEAK_FUNC(sub_83C32F80);
PPC_FUNC_IMPL(__imp__sub_83C32F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F8C"))) PPC_WEAK_FUNC(sub_83C32F8C);
PPC_FUNC_IMPL(__imp__sub_83C32F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32F90"))) PPC_WEAK_FUNC(sub_83C32F90);
PPC_FUNC_IMPL(__imp__sub_83C32F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18328
	ctx.r3.s64 = ctx.r11.s64 + 18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32F9C"))) PPC_WEAK_FUNC(sub_83C32F9C);
PPC_FUNC_IMPL(__imp__sub_83C32F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32FA0"))) PPC_WEAK_FUNC(sub_83C32FA0);
PPC_FUNC_IMPL(__imp__sub_83C32FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18336
	ctx.r3.s64 = ctx.r11.s64 + 18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32FAC"))) PPC_WEAK_FUNC(sub_83C32FAC);
PPC_FUNC_IMPL(__imp__sub_83C32FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32FB0"))) PPC_WEAK_FUNC(sub_83C32FB0);
PPC_FUNC_IMPL(__imp__sub_83C32FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18344
	ctx.r3.s64 = ctx.r11.s64 + 18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32FBC"))) PPC_WEAK_FUNC(sub_83C32FBC);
PPC_FUNC_IMPL(__imp__sub_83C32FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32FC0"))) PPC_WEAK_FUNC(sub_83C32FC0);
PPC_FUNC_IMPL(__imp__sub_83C32FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18352
	ctx.r3.s64 = ctx.r11.s64 + 18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32FCC"))) PPC_WEAK_FUNC(sub_83C32FCC);
PPC_FUNC_IMPL(__imp__sub_83C32FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32FD0"))) PPC_WEAK_FUNC(sub_83C32FD0);
PPC_FUNC_IMPL(__imp__sub_83C32FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18360
	ctx.r3.s64 = ctx.r11.s64 + 18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C32FDC"))) PPC_WEAK_FUNC(sub_83C32FDC);
PPC_FUNC_IMPL(__imp__sub_83C32FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C32FE0"))) PPC_WEAK_FUNC(sub_83C32FE0);
PPC_FUNC_IMPL(__imp__sub_83C32FE0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-15824
	ctx.r4.s64 = ctx.r11.s64 + -15824;
	// addi r3,r10,-30820
	ctx.r3.s64 = ctx.r10.s64 + -30820;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C33004;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,18368
	ctx.r3.s64 = ctx.r9.s64 + 18368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33010;
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

__attribute__((alias("__imp__sub_83C33020"))) PPC_WEAK_FUNC(sub_83C33020);
PPC_FUNC_IMPL(__imp__sub_83C33020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18472
	ctx.r3.s64 = ctx.r11.s64 + 18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3302C"))) PPC_WEAK_FUNC(sub_83C3302C);
PPC_FUNC_IMPL(__imp__sub_83C3302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33030"))) PPC_WEAK_FUNC(sub_83C33030);
PPC_FUNC_IMPL(__imp__sub_83C33030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18480
	ctx.r3.s64 = ctx.r11.s64 + 18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3303C"))) PPC_WEAK_FUNC(sub_83C3303C);
PPC_FUNC_IMPL(__imp__sub_83C3303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33040"))) PPC_WEAK_FUNC(sub_83C33040);
PPC_FUNC_IMPL(__imp__sub_83C33040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18488
	ctx.r3.s64 = ctx.r11.s64 + 18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3304C"))) PPC_WEAK_FUNC(sub_83C3304C);
PPC_FUNC_IMPL(__imp__sub_83C3304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33050"))) PPC_WEAK_FUNC(sub_83C33050);
PPC_FUNC_IMPL(__imp__sub_83C33050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3305C"))) PPC_WEAK_FUNC(sub_83C3305C);
PPC_FUNC_IMPL(__imp__sub_83C3305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33060"))) PPC_WEAK_FUNC(sub_83C33060);
PPC_FUNC_IMPL(__imp__sub_83C33060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18504
	ctx.r3.s64 = ctx.r11.s64 + 18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3306C"))) PPC_WEAK_FUNC(sub_83C3306C);
PPC_FUNC_IMPL(__imp__sub_83C3306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33070"))) PPC_WEAK_FUNC(sub_83C33070);
PPC_FUNC_IMPL(__imp__sub_83C33070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18512
	ctx.r3.s64 = ctx.r11.s64 + 18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3307C"))) PPC_WEAK_FUNC(sub_83C3307C);
PPC_FUNC_IMPL(__imp__sub_83C3307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33080"))) PPC_WEAK_FUNC(sub_83C33080);
PPC_FUNC_IMPL(__imp__sub_83C33080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3308C"))) PPC_WEAK_FUNC(sub_83C3308C);
PPC_FUNC_IMPL(__imp__sub_83C3308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33090"))) PPC_WEAK_FUNC(sub_83C33090);
PPC_FUNC_IMPL(__imp__sub_83C33090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18528
	ctx.r3.s64 = ctx.r11.s64 + 18528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3309C"))) PPC_WEAK_FUNC(sub_83C3309C);
PPC_FUNC_IMPL(__imp__sub_83C3309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C330A0"))) PPC_WEAK_FUNC(sub_83C330A0);
PPC_FUNC_IMPL(__imp__sub_83C330A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18536
	ctx.r3.s64 = ctx.r11.s64 + 18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C330AC"))) PPC_WEAK_FUNC(sub_83C330AC);
PPC_FUNC_IMPL(__imp__sub_83C330AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C330B0"))) PPC_WEAK_FUNC(sub_83C330B0);
PPC_FUNC_IMPL(__imp__sub_83C330B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C330BC"))) PPC_WEAK_FUNC(sub_83C330BC);
PPC_FUNC_IMPL(__imp__sub_83C330BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C330C0"))) PPC_WEAK_FUNC(sub_83C330C0);
PPC_FUNC_IMPL(__imp__sub_83C330C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18552
	ctx.r3.s64 = ctx.r11.s64 + 18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C330CC"))) PPC_WEAK_FUNC(sub_83C330CC);
PPC_FUNC_IMPL(__imp__sub_83C330CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C330D0"))) PPC_WEAK_FUNC(sub_83C330D0);
PPC_FUNC_IMPL(__imp__sub_83C330D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18560
	ctx.r3.s64 = ctx.r11.s64 + 18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C330DC"))) PPC_WEAK_FUNC(sub_83C330DC);
PPC_FUNC_IMPL(__imp__sub_83C330DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C330E0"))) PPC_WEAK_FUNC(sub_83C330E0);
PPC_FUNC_IMPL(__imp__sub_83C330E0) {
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
	// addi r3,r11,10760
	ctx.r3.s64 = ctx.r11.s64 + 10760;
	// bl 0x83523120
	ctx.lr = 0x83C330F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18568
	ctx.r3.s64 = ctx.r10.s64 + 18568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33104;
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

__attribute__((alias("__imp__sub_83C33114"))) PPC_WEAK_FUNC(sub_83C33114);
PPC_FUNC_IMPL(__imp__sub_83C33114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33118"))) PPC_WEAK_FUNC(sub_83C33118);
PPC_FUNC_IMPL(__imp__sub_83C33118) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10776
	ctx.r7.s64 = ctx.r8.s64 + 10776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33140"))) PPC_WEAK_FUNC(sub_83C33140);
PPC_FUNC_IMPL(__imp__sub_83C33140) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30688
	ctx.r6.s64 = ctx.r7.s64 + -30688;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30760);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10776);
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
	// std r9,-30688(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33188"))) PPC_WEAK_FUNC(sub_83C33188);
PPC_FUNC_IMPL(__imp__sub_83C33188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18584
	ctx.r3.s64 = ctx.r11.s64 + 18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33194"))) PPC_WEAK_FUNC(sub_83C33194);
PPC_FUNC_IMPL(__imp__sub_83C33194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33198"))) PPC_WEAK_FUNC(sub_83C33198);
PPC_FUNC_IMPL(__imp__sub_83C33198) {
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
	// addi r3,r11,10784
	ctx.r3.s64 = ctx.r11.s64 + 10784;
	// bl 0x8259af80
	ctx.lr = 0x83C331B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18600
	ctx.r3.s64 = ctx.r10.s64 + 18600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C331BC;
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

__attribute__((alias("__imp__sub_83C331CC"))) PPC_WEAK_FUNC(sub_83C331CC);
PPC_FUNC_IMPL(__imp__sub_83C331CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C331D0"))) PPC_WEAK_FUNC(sub_83C331D0);
PPC_FUNC_IMPL(__imp__sub_83C331D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10764
	ctx.r11.s64 = ctx.r8.s64 + 10764;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18592
	ctx.r3.s64 = ctx.r6.s64 + 18592;
	// stw r10,10764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33200"))) PPC_WEAK_FUNC(sub_83C33200);
PPC_FUNC_IMPL(__imp__sub_83C33200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3320C"))) PPC_WEAK_FUNC(sub_83C3320C);
PPC_FUNC_IMPL(__imp__sub_83C3320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33210"))) PPC_WEAK_FUNC(sub_83C33210);
PPC_FUNC_IMPL(__imp__sub_83C33210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18616
	ctx.r3.s64 = ctx.r11.s64 + 18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3321C"))) PPC_WEAK_FUNC(sub_83C3321C);
PPC_FUNC_IMPL(__imp__sub_83C3321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33220"))) PPC_WEAK_FUNC(sub_83C33220);
PPC_FUNC_IMPL(__imp__sub_83C33220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3322C"))) PPC_WEAK_FUNC(sub_83C3322C);
PPC_FUNC_IMPL(__imp__sub_83C3322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33230"))) PPC_WEAK_FUNC(sub_83C33230);
PPC_FUNC_IMPL(__imp__sub_83C33230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18632
	ctx.r3.s64 = ctx.r11.s64 + 18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3323C"))) PPC_WEAK_FUNC(sub_83C3323C);
PPC_FUNC_IMPL(__imp__sub_83C3323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33240"))) PPC_WEAK_FUNC(sub_83C33240);
PPC_FUNC_IMPL(__imp__sub_83C33240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3324C"))) PPC_WEAK_FUNC(sub_83C3324C);
PPC_FUNC_IMPL(__imp__sub_83C3324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33250"))) PPC_WEAK_FUNC(sub_83C33250);
PPC_FUNC_IMPL(__imp__sub_83C33250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18648
	ctx.r3.s64 = ctx.r11.s64 + 18648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3325C"))) PPC_WEAK_FUNC(sub_83C3325C);
PPC_FUNC_IMPL(__imp__sub_83C3325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33260"))) PPC_WEAK_FUNC(sub_83C33260);
PPC_FUNC_IMPL(__imp__sub_83C33260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18656
	ctx.r3.s64 = ctx.r11.s64 + 18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3326C"))) PPC_WEAK_FUNC(sub_83C3326C);
PPC_FUNC_IMPL(__imp__sub_83C3326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33270"))) PPC_WEAK_FUNC(sub_83C33270);
PPC_FUNC_IMPL(__imp__sub_83C33270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3327C"))) PPC_WEAK_FUNC(sub_83C3327C);
PPC_FUNC_IMPL(__imp__sub_83C3327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33280"))) PPC_WEAK_FUNC(sub_83C33280);
PPC_FUNC_IMPL(__imp__sub_83C33280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18672
	ctx.r3.s64 = ctx.r11.s64 + 18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3328C"))) PPC_WEAK_FUNC(sub_83C3328C);
PPC_FUNC_IMPL(__imp__sub_83C3328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33290"))) PPC_WEAK_FUNC(sub_83C33290);
PPC_FUNC_IMPL(__imp__sub_83C33290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18680
	ctx.r3.s64 = ctx.r11.s64 + 18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3329C"))) PPC_WEAK_FUNC(sub_83C3329C);
PPC_FUNC_IMPL(__imp__sub_83C3329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332A0"))) PPC_WEAK_FUNC(sub_83C332A0);
PPC_FUNC_IMPL(__imp__sub_83C332A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18688
	ctx.r3.s64 = ctx.r11.s64 + 18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332AC"))) PPC_WEAK_FUNC(sub_83C332AC);
PPC_FUNC_IMPL(__imp__sub_83C332AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332B0"))) PPC_WEAK_FUNC(sub_83C332B0);
PPC_FUNC_IMPL(__imp__sub_83C332B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18696
	ctx.r3.s64 = ctx.r11.s64 + 18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332BC"))) PPC_WEAK_FUNC(sub_83C332BC);
PPC_FUNC_IMPL(__imp__sub_83C332BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332C0"))) PPC_WEAK_FUNC(sub_83C332C0);
PPC_FUNC_IMPL(__imp__sub_83C332C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18704
	ctx.r3.s64 = ctx.r11.s64 + 18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332CC"))) PPC_WEAK_FUNC(sub_83C332CC);
PPC_FUNC_IMPL(__imp__sub_83C332CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332D0"))) PPC_WEAK_FUNC(sub_83C332D0);
PPC_FUNC_IMPL(__imp__sub_83C332D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18712
	ctx.r3.s64 = ctx.r11.s64 + 18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332DC"))) PPC_WEAK_FUNC(sub_83C332DC);
PPC_FUNC_IMPL(__imp__sub_83C332DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332E0"))) PPC_WEAK_FUNC(sub_83C332E0);
PPC_FUNC_IMPL(__imp__sub_83C332E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18720
	ctx.r3.s64 = ctx.r11.s64 + 18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332EC"))) PPC_WEAK_FUNC(sub_83C332EC);
PPC_FUNC_IMPL(__imp__sub_83C332EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C332F0"))) PPC_WEAK_FUNC(sub_83C332F0);
PPC_FUNC_IMPL(__imp__sub_83C332F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18728
	ctx.r3.s64 = ctx.r11.s64 + 18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C332FC"))) PPC_WEAK_FUNC(sub_83C332FC);
PPC_FUNC_IMPL(__imp__sub_83C332FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33300"))) PPC_WEAK_FUNC(sub_83C33300);
PPC_FUNC_IMPL(__imp__sub_83C33300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18736
	ctx.r3.s64 = ctx.r11.s64 + 18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3330C"))) PPC_WEAK_FUNC(sub_83C3330C);
PPC_FUNC_IMPL(__imp__sub_83C3330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33310"))) PPC_WEAK_FUNC(sub_83C33310);
PPC_FUNC_IMPL(__imp__sub_83C33310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18744
	ctx.r3.s64 = ctx.r11.s64 + 18744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3331C"))) PPC_WEAK_FUNC(sub_83C3331C);
PPC_FUNC_IMPL(__imp__sub_83C3331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33320"))) PPC_WEAK_FUNC(sub_83C33320);
PPC_FUNC_IMPL(__imp__sub_83C33320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18752
	ctx.r3.s64 = ctx.r11.s64 + 18752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3332C"))) PPC_WEAK_FUNC(sub_83C3332C);
PPC_FUNC_IMPL(__imp__sub_83C3332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33330"))) PPC_WEAK_FUNC(sub_83C33330);
PPC_FUNC_IMPL(__imp__sub_83C33330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18760
	ctx.r3.s64 = ctx.r11.s64 + 18760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3333C"))) PPC_WEAK_FUNC(sub_83C3333C);
PPC_FUNC_IMPL(__imp__sub_83C3333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33340"))) PPC_WEAK_FUNC(sub_83C33340);
PPC_FUNC_IMPL(__imp__sub_83C33340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18768
	ctx.r3.s64 = ctx.r11.s64 + 18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3334C"))) PPC_WEAK_FUNC(sub_83C3334C);
PPC_FUNC_IMPL(__imp__sub_83C3334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33350"))) PPC_WEAK_FUNC(sub_83C33350);
PPC_FUNC_IMPL(__imp__sub_83C33350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18776
	ctx.r3.s64 = ctx.r11.s64 + 18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3335C"))) PPC_WEAK_FUNC(sub_83C3335C);
PPC_FUNC_IMPL(__imp__sub_83C3335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33360"))) PPC_WEAK_FUNC(sub_83C33360);
PPC_FUNC_IMPL(__imp__sub_83C33360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18784
	ctx.r3.s64 = ctx.r11.s64 + 18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3336C"))) PPC_WEAK_FUNC(sub_83C3336C);
PPC_FUNC_IMPL(__imp__sub_83C3336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33370"))) PPC_WEAK_FUNC(sub_83C33370);
PPC_FUNC_IMPL(__imp__sub_83C33370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18792
	ctx.r3.s64 = ctx.r11.s64 + 18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3337C"))) PPC_WEAK_FUNC(sub_83C3337C);
PPC_FUNC_IMPL(__imp__sub_83C3337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33380"))) PPC_WEAK_FUNC(sub_83C33380);
PPC_FUNC_IMPL(__imp__sub_83C33380) {
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
	// addi r3,r11,11136
	ctx.r3.s64 = ctx.r11.s64 + 11136;
	// bl 0x83523120
	ctx.lr = 0x83C33398;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18800
	ctx.r3.s64 = ctx.r10.s64 + 18800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C333A4;
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

__attribute__((alias("__imp__sub_83C333B4"))) PPC_WEAK_FUNC(sub_83C333B4);
PPC_FUNC_IMPL(__imp__sub_83C333B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C333B8"))) PPC_WEAK_FUNC(sub_83C333B8);
PPC_FUNC_IMPL(__imp__sub_83C333B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11152
	ctx.r7.s64 = ctx.r8.s64 + 11152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C333E0"))) PPC_WEAK_FUNC(sub_83C333E0);
PPC_FUNC_IMPL(__imp__sub_83C333E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30456
	ctx.r6.s64 = ctx.r7.s64 + -30456;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30528(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30528);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11152);
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
	// std r9,-30456(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33428"))) PPC_WEAK_FUNC(sub_83C33428);
PPC_FUNC_IMPL(__imp__sub_83C33428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18816
	ctx.r3.s64 = ctx.r11.s64 + 18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33434"))) PPC_WEAK_FUNC(sub_83C33434);
PPC_FUNC_IMPL(__imp__sub_83C33434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33438"))) PPC_WEAK_FUNC(sub_83C33438);
PPC_FUNC_IMPL(__imp__sub_83C33438) {
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
	// addi r3,r11,11160
	ctx.r3.s64 = ctx.r11.s64 + 11160;
	// bl 0x8259af80
	ctx.lr = 0x83C33450;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,18832
	ctx.r3.s64 = ctx.r10.s64 + 18832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3345C;
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

__attribute__((alias("__imp__sub_83C3346C"))) PPC_WEAK_FUNC(sub_83C3346C);
PPC_FUNC_IMPL(__imp__sub_83C3346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33470"))) PPC_WEAK_FUNC(sub_83C33470);
PPC_FUNC_IMPL(__imp__sub_83C33470) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11140
	ctx.r11.s64 = ctx.r8.s64 + 11140;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18824
	ctx.r3.s64 = ctx.r6.s64 + 18824;
	// stw r10,11140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C334A0"))) PPC_WEAK_FUNC(sub_83C334A0);
PPC_FUNC_IMPL(__imp__sub_83C334A0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-14660
	ctx.r4.s64 = ctx.r11.s64 + -14660;
	// addi r3,r10,-30432
	ctx.r3.s64 = ctx.r10.s64 + -30432;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C334C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,18840
	ctx.r3.s64 = ctx.r9.s64 + 18840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C334D0;
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

__attribute__((alias("__imp__sub_83C334E0"))) PPC_WEAK_FUNC(sub_83C334E0);
PPC_FUNC_IMPL(__imp__sub_83C334E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C334EC"))) PPC_WEAK_FUNC(sub_83C334EC);
PPC_FUNC_IMPL(__imp__sub_83C334EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C334F0"))) PPC_WEAK_FUNC(sub_83C334F0);
PPC_FUNC_IMPL(__imp__sub_83C334F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18952
	ctx.r3.s64 = ctx.r11.s64 + 18952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C334FC"))) PPC_WEAK_FUNC(sub_83C334FC);
PPC_FUNC_IMPL(__imp__sub_83C334FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33500"))) PPC_WEAK_FUNC(sub_83C33500);
PPC_FUNC_IMPL(__imp__sub_83C33500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18960
	ctx.r3.s64 = ctx.r11.s64 + 18960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3350C"))) PPC_WEAK_FUNC(sub_83C3350C);
PPC_FUNC_IMPL(__imp__sub_83C3350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33510"))) PPC_WEAK_FUNC(sub_83C33510);
PPC_FUNC_IMPL(__imp__sub_83C33510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3351C"))) PPC_WEAK_FUNC(sub_83C3351C);
PPC_FUNC_IMPL(__imp__sub_83C3351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33520"))) PPC_WEAK_FUNC(sub_83C33520);
PPC_FUNC_IMPL(__imp__sub_83C33520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18976
	ctx.r3.s64 = ctx.r11.s64 + 18976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3352C"))) PPC_WEAK_FUNC(sub_83C3352C);
PPC_FUNC_IMPL(__imp__sub_83C3352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33530"))) PPC_WEAK_FUNC(sub_83C33530);
PPC_FUNC_IMPL(__imp__sub_83C33530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3353C"))) PPC_WEAK_FUNC(sub_83C3353C);
PPC_FUNC_IMPL(__imp__sub_83C3353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33540"))) PPC_WEAK_FUNC(sub_83C33540);
PPC_FUNC_IMPL(__imp__sub_83C33540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,18992
	ctx.r3.s64 = ctx.r11.s64 + 18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3354C"))) PPC_WEAK_FUNC(sub_83C3354C);
PPC_FUNC_IMPL(__imp__sub_83C3354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33550"))) PPC_WEAK_FUNC(sub_83C33550);
PPC_FUNC_IMPL(__imp__sub_83C33550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19000
	ctx.r3.s64 = ctx.r11.s64 + 19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3355C"))) PPC_WEAK_FUNC(sub_83C3355C);
PPC_FUNC_IMPL(__imp__sub_83C3355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33560"))) PPC_WEAK_FUNC(sub_83C33560);
PPC_FUNC_IMPL(__imp__sub_83C33560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3356C"))) PPC_WEAK_FUNC(sub_83C3356C);
PPC_FUNC_IMPL(__imp__sub_83C3356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33570"))) PPC_WEAK_FUNC(sub_83C33570);
PPC_FUNC_IMPL(__imp__sub_83C33570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19016
	ctx.r3.s64 = ctx.r11.s64 + 19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3357C"))) PPC_WEAK_FUNC(sub_83C3357C);
PPC_FUNC_IMPL(__imp__sub_83C3357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33580"))) PPC_WEAK_FUNC(sub_83C33580);
PPC_FUNC_IMPL(__imp__sub_83C33580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19024
	ctx.r3.s64 = ctx.r11.s64 + 19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3358C"))) PPC_WEAK_FUNC(sub_83C3358C);
PPC_FUNC_IMPL(__imp__sub_83C3358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33590"))) PPC_WEAK_FUNC(sub_83C33590);
PPC_FUNC_IMPL(__imp__sub_83C33590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19032
	ctx.r3.s64 = ctx.r11.s64 + 19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3359C"))) PPC_WEAK_FUNC(sub_83C3359C);
PPC_FUNC_IMPL(__imp__sub_83C3359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C335A0"))) PPC_WEAK_FUNC(sub_83C335A0);
PPC_FUNC_IMPL(__imp__sub_83C335A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11520
	ctx.r7.s64 = ctx.r8.s64 + 11520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C335C8"))) PPC_WEAK_FUNC(sub_83C335C8);
PPC_FUNC_IMPL(__imp__sub_83C335C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30300
	ctx.r6.s64 = ctx.r7.s64 + -30300;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11520);
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
	// std r9,-30300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33610"))) PPC_WEAK_FUNC(sub_83C33610);
PPC_FUNC_IMPL(__imp__sub_83C33610) {
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
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// bl 0x83523120
	ctx.lr = 0x83C33628;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19040
	ctx.r3.s64 = ctx.r10.s64 + 19040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C33634;
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

__attribute__((alias("__imp__sub_83C33644"))) PPC_WEAK_FUNC(sub_83C33644);
PPC_FUNC_IMPL(__imp__sub_83C33644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33648"))) PPC_WEAK_FUNC(sub_83C33648);
PPC_FUNC_IMPL(__imp__sub_83C33648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19056
	ctx.r3.s64 = ctx.r11.s64 + 19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33654"))) PPC_WEAK_FUNC(sub_83C33654);
PPC_FUNC_IMPL(__imp__sub_83C33654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33658"))) PPC_WEAK_FUNC(sub_83C33658);
PPC_FUNC_IMPL(__imp__sub_83C33658) {
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
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// bl 0x8259af80
	ctx.lr = 0x83C33670;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19072
	ctx.r3.s64 = ctx.r10.s64 + 19072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3367C;
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

__attribute__((alias("__imp__sub_83C3368C"))) PPC_WEAK_FUNC(sub_83C3368C);
PPC_FUNC_IMPL(__imp__sub_83C3368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33690"))) PPC_WEAK_FUNC(sub_83C33690);
PPC_FUNC_IMPL(__imp__sub_83C33690) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11508
	ctx.r11.s64 = ctx.r8.s64 + 11508;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-30324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19064
	ctx.r3.s64 = ctx.r6.s64 + 19064;
	// stw r10,11508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C336C0"))) PPC_WEAK_FUNC(sub_83C336C0);
PPC_FUNC_IMPL(__imp__sub_83C336C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19080
	ctx.r3.s64 = ctx.r11.s64 + 19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C336CC"))) PPC_WEAK_FUNC(sub_83C336CC);
PPC_FUNC_IMPL(__imp__sub_83C336CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C336D0"))) PPC_WEAK_FUNC(sub_83C336D0);
PPC_FUNC_IMPL(__imp__sub_83C336D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19088
	ctx.r3.s64 = ctx.r11.s64 + 19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C336DC"))) PPC_WEAK_FUNC(sub_83C336DC);
PPC_FUNC_IMPL(__imp__sub_83C336DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C336E0"))) PPC_WEAK_FUNC(sub_83C336E0);
PPC_FUNC_IMPL(__imp__sub_83C336E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19096
	ctx.r3.s64 = ctx.r11.s64 + 19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C336EC"))) PPC_WEAK_FUNC(sub_83C336EC);
PPC_FUNC_IMPL(__imp__sub_83C336EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C336F0"))) PPC_WEAK_FUNC(sub_83C336F0);
PPC_FUNC_IMPL(__imp__sub_83C336F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C336FC"))) PPC_WEAK_FUNC(sub_83C336FC);
PPC_FUNC_IMPL(__imp__sub_83C336FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33700"))) PPC_WEAK_FUNC(sub_83C33700);
PPC_FUNC_IMPL(__imp__sub_83C33700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19112
	ctx.r3.s64 = ctx.r11.s64 + 19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3370C"))) PPC_WEAK_FUNC(sub_83C3370C);
PPC_FUNC_IMPL(__imp__sub_83C3370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33710"))) PPC_WEAK_FUNC(sub_83C33710);
PPC_FUNC_IMPL(__imp__sub_83C33710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19120
	ctx.r3.s64 = ctx.r11.s64 + 19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3371C"))) PPC_WEAK_FUNC(sub_83C3371C);
PPC_FUNC_IMPL(__imp__sub_83C3371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33720"))) PPC_WEAK_FUNC(sub_83C33720);
PPC_FUNC_IMPL(__imp__sub_83C33720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19128
	ctx.r3.s64 = ctx.r11.s64 + 19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3372C"))) PPC_WEAK_FUNC(sub_83C3372C);
PPC_FUNC_IMPL(__imp__sub_83C3372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33730"))) PPC_WEAK_FUNC(sub_83C33730);
PPC_FUNC_IMPL(__imp__sub_83C33730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19136
	ctx.r3.s64 = ctx.r11.s64 + 19136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3373C"))) PPC_WEAK_FUNC(sub_83C3373C);
PPC_FUNC_IMPL(__imp__sub_83C3373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33740"))) PPC_WEAK_FUNC(sub_83C33740);
PPC_FUNC_IMPL(__imp__sub_83C33740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19144
	ctx.r3.s64 = ctx.r11.s64 + 19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3374C"))) PPC_WEAK_FUNC(sub_83C3374C);
PPC_FUNC_IMPL(__imp__sub_83C3374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33750"))) PPC_WEAK_FUNC(sub_83C33750);
PPC_FUNC_IMPL(__imp__sub_83C33750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19152
	ctx.r3.s64 = ctx.r11.s64 + 19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3375C"))) PPC_WEAK_FUNC(sub_83C3375C);
PPC_FUNC_IMPL(__imp__sub_83C3375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33760"))) PPC_WEAK_FUNC(sub_83C33760);
PPC_FUNC_IMPL(__imp__sub_83C33760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19160
	ctx.r3.s64 = ctx.r11.s64 + 19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3376C"))) PPC_WEAK_FUNC(sub_83C3376C);
PPC_FUNC_IMPL(__imp__sub_83C3376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33770"))) PPC_WEAK_FUNC(sub_83C33770);
PPC_FUNC_IMPL(__imp__sub_83C33770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19168
	ctx.r3.s64 = ctx.r11.s64 + 19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3377C"))) PPC_WEAK_FUNC(sub_83C3377C);
PPC_FUNC_IMPL(__imp__sub_83C3377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33780"))) PPC_WEAK_FUNC(sub_83C33780);
PPC_FUNC_IMPL(__imp__sub_83C33780) {
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
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// bl 0x83523120
	ctx.lr = 0x83C33798;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19176
	ctx.r3.s64 = ctx.r10.s64 + 19176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C337A4;
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

__attribute__((alias("__imp__sub_83C337B4"))) PPC_WEAK_FUNC(sub_83C337B4);
PPC_FUNC_IMPL(__imp__sub_83C337B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C337B8"))) PPC_WEAK_FUNC(sub_83C337B8);
PPC_FUNC_IMPL(__imp__sub_83C337B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11888
	ctx.r7.s64 = ctx.r8.s64 + 11888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C337E0"))) PPC_WEAK_FUNC(sub_83C337E0);
PPC_FUNC_IMPL(__imp__sub_83C337E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-30172
	ctx.r6.s64 = ctx.r7.s64 + -30172;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11888);
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
	// std r9,-30172(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C33828"))) PPC_WEAK_FUNC(sub_83C33828);
PPC_FUNC_IMPL(__imp__sub_83C33828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C33834"))) PPC_WEAK_FUNC(sub_83C33834);
PPC_FUNC_IMPL(__imp__sub_83C33834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C33838"))) PPC_WEAK_FUNC(sub_83C33838);
PPC_FUNC_IMPL(__imp__sub_83C33838) {
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
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// bl 0x8259af80
	ctx.lr = 0x83C33850;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,19208
	ctx.r3.s64 = ctx.r10.s64 + 19208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3385C;
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

