#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C692E8"))) PPC_WEAK_FUNC(sub_83C692E8);
PPC_FUNC_IMPL(__imp__sub_83C692E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29456
	ctx.r7.s64 = ctx.r8.s64 + 29456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69310"))) PPC_WEAK_FUNC(sub_83C69310);
PPC_FUNC_IMPL(__imp__sub_83C69310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-27140
	ctx.r6.s64 = ctx.r7.s64 + -27140;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27212(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27212);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29456);
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
	// std r9,-27140(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27140, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69358"))) PPC_WEAK_FUNC(sub_83C69358);
PPC_FUNC_IMPL(__imp__sub_83C69358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69364"))) PPC_WEAK_FUNC(sub_83C69364);
PPC_FUNC_IMPL(__imp__sub_83C69364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69368"))) PPC_WEAK_FUNC(sub_83C69368);
PPC_FUNC_IMPL(__imp__sub_83C69368) {
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
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// bl 0x8259af80
	ctx.lr = 0x83C69380;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22256
	ctx.r3.s64 = ctx.r10.s64 + 22256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6938C;
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

__attribute__((alias("__imp__sub_83C6939C"))) PPC_WEAK_FUNC(sub_83C6939C);
PPC_FUNC_IMPL(__imp__sub_83C6939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C693A0"))) PPC_WEAK_FUNC(sub_83C693A0);
PPC_FUNC_IMPL(__imp__sub_83C693A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29444
	ctx.r11.s64 = ctx.r8.s64 + 29444;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-27164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22248
	ctx.r3.s64 = ctx.r6.s64 + 22248;
	// stw r10,29444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C693D0"))) PPC_WEAK_FUNC(sub_83C693D0);
PPC_FUNC_IMPL(__imp__sub_83C693D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C693DC"))) PPC_WEAK_FUNC(sub_83C693DC);
PPC_FUNC_IMPL(__imp__sub_83C693DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C693E0"))) PPC_WEAK_FUNC(sub_83C693E0);
PPC_FUNC_IMPL(__imp__sub_83C693E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C693EC"))) PPC_WEAK_FUNC(sub_83C693EC);
PPC_FUNC_IMPL(__imp__sub_83C693EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C693F0"))) PPC_WEAK_FUNC(sub_83C693F0);
PPC_FUNC_IMPL(__imp__sub_83C693F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C693FC"))) PPC_WEAK_FUNC(sub_83C693FC);
PPC_FUNC_IMPL(__imp__sub_83C693FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69400"))) PPC_WEAK_FUNC(sub_83C69400);
PPC_FUNC_IMPL(__imp__sub_83C69400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6940C"))) PPC_WEAK_FUNC(sub_83C6940C);
PPC_FUNC_IMPL(__imp__sub_83C6940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69410"))) PPC_WEAK_FUNC(sub_83C69410);
PPC_FUNC_IMPL(__imp__sub_83C69410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6941C"))) PPC_WEAK_FUNC(sub_83C6941C);
PPC_FUNC_IMPL(__imp__sub_83C6941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69420"))) PPC_WEAK_FUNC(sub_83C69420);
PPC_FUNC_IMPL(__imp__sub_83C69420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6942C"))) PPC_WEAK_FUNC(sub_83C6942C);
PPC_FUNC_IMPL(__imp__sub_83C6942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69430"))) PPC_WEAK_FUNC(sub_83C69430);
PPC_FUNC_IMPL(__imp__sub_83C69430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6943C"))) PPC_WEAK_FUNC(sub_83C6943C);
PPC_FUNC_IMPL(__imp__sub_83C6943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69440"))) PPC_WEAK_FUNC(sub_83C69440);
PPC_FUNC_IMPL(__imp__sub_83C69440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6944C"))) PPC_WEAK_FUNC(sub_83C6944C);
PPC_FUNC_IMPL(__imp__sub_83C6944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69450"))) PPC_WEAK_FUNC(sub_83C69450);
PPC_FUNC_IMPL(__imp__sub_83C69450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6945C"))) PPC_WEAK_FUNC(sub_83C6945C);
PPC_FUNC_IMPL(__imp__sub_83C6945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69460"))) PPC_WEAK_FUNC(sub_83C69460);
PPC_FUNC_IMPL(__imp__sub_83C69460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6946C"))) PPC_WEAK_FUNC(sub_83C6946C);
PPC_FUNC_IMPL(__imp__sub_83C6946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69470"))) PPC_WEAK_FUNC(sub_83C69470);
PPC_FUNC_IMPL(__imp__sub_83C69470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6947C"))) PPC_WEAK_FUNC(sub_83C6947C);
PPC_FUNC_IMPL(__imp__sub_83C6947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69480"))) PPC_WEAK_FUNC(sub_83C69480);
PPC_FUNC_IMPL(__imp__sub_83C69480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22352
	ctx.r3.s64 = ctx.r11.s64 + 22352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6948C"))) PPC_WEAK_FUNC(sub_83C6948C);
PPC_FUNC_IMPL(__imp__sub_83C6948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69490"))) PPC_WEAK_FUNC(sub_83C69490);
PPC_FUNC_IMPL(__imp__sub_83C69490) {
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
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// bl 0x83523120
	ctx.lr = 0x83C694A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22360
	ctx.r3.s64 = ctx.r10.s64 + 22360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C694B4;
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

__attribute__((alias("__imp__sub_83C694C4"))) PPC_WEAK_FUNC(sub_83C694C4);
PPC_FUNC_IMPL(__imp__sub_83C694C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C694C8"))) PPC_WEAK_FUNC(sub_83C694C8);
PPC_FUNC_IMPL(__imp__sub_83C694C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29824
	ctx.r7.s64 = ctx.r8.s64 + 29824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C694F0"))) PPC_WEAK_FUNC(sub_83C694F0);
PPC_FUNC_IMPL(__imp__sub_83C694F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-27012
	ctx.r6.s64 = ctx.r7.s64 + -27012;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27084(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27084);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29824);
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
	// std r9,-27012(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27012, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69538"))) PPC_WEAK_FUNC(sub_83C69538);
PPC_FUNC_IMPL(__imp__sub_83C69538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22376
	ctx.r3.s64 = ctx.r11.s64 + 22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69544"))) PPC_WEAK_FUNC(sub_83C69544);
PPC_FUNC_IMPL(__imp__sub_83C69544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69548"))) PPC_WEAK_FUNC(sub_83C69548);
PPC_FUNC_IMPL(__imp__sub_83C69548) {
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
	// addi r3,r11,29832
	ctx.r3.s64 = ctx.r11.s64 + 29832;
	// bl 0x8259af80
	ctx.lr = 0x83C69560;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22392
	ctx.r3.s64 = ctx.r10.s64 + 22392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6956C;
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

__attribute__((alias("__imp__sub_83C6957C"))) PPC_WEAK_FUNC(sub_83C6957C);
PPC_FUNC_IMPL(__imp__sub_83C6957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69580"))) PPC_WEAK_FUNC(sub_83C69580);
PPC_FUNC_IMPL(__imp__sub_83C69580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29812
	ctx.r11.s64 = ctx.r8.s64 + 29812;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-27036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27036);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22384
	ctx.r3.s64 = ctx.r6.s64 + 22384;
	// stw r10,29812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695B0"))) PPC_WEAK_FUNC(sub_83C695B0);
PPC_FUNC_IMPL(__imp__sub_83C695B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22400
	ctx.r3.s64 = ctx.r11.s64 + 22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695BC"))) PPC_WEAK_FUNC(sub_83C695BC);
PPC_FUNC_IMPL(__imp__sub_83C695BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C695C0"))) PPC_WEAK_FUNC(sub_83C695C0);
PPC_FUNC_IMPL(__imp__sub_83C695C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22408
	ctx.r3.s64 = ctx.r11.s64 + 22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695CC"))) PPC_WEAK_FUNC(sub_83C695CC);
PPC_FUNC_IMPL(__imp__sub_83C695CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C695D0"))) PPC_WEAK_FUNC(sub_83C695D0);
PPC_FUNC_IMPL(__imp__sub_83C695D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695DC"))) PPC_WEAK_FUNC(sub_83C695DC);
PPC_FUNC_IMPL(__imp__sub_83C695DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C695E0"))) PPC_WEAK_FUNC(sub_83C695E0);
PPC_FUNC_IMPL(__imp__sub_83C695E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695EC"))) PPC_WEAK_FUNC(sub_83C695EC);
PPC_FUNC_IMPL(__imp__sub_83C695EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C695F0"))) PPC_WEAK_FUNC(sub_83C695F0);
PPC_FUNC_IMPL(__imp__sub_83C695F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C695FC"))) PPC_WEAK_FUNC(sub_83C695FC);
PPC_FUNC_IMPL(__imp__sub_83C695FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69600"))) PPC_WEAK_FUNC(sub_83C69600);
PPC_FUNC_IMPL(__imp__sub_83C69600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6960C"))) PPC_WEAK_FUNC(sub_83C6960C);
PPC_FUNC_IMPL(__imp__sub_83C6960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69610"))) PPC_WEAK_FUNC(sub_83C69610);
PPC_FUNC_IMPL(__imp__sub_83C69610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6961C"))) PPC_WEAK_FUNC(sub_83C6961C);
PPC_FUNC_IMPL(__imp__sub_83C6961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69620"))) PPC_WEAK_FUNC(sub_83C69620);
PPC_FUNC_IMPL(__imp__sub_83C69620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22456
	ctx.r3.s64 = ctx.r11.s64 + 22456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6962C"))) PPC_WEAK_FUNC(sub_83C6962C);
PPC_FUNC_IMPL(__imp__sub_83C6962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69630"))) PPC_WEAK_FUNC(sub_83C69630);
PPC_FUNC_IMPL(__imp__sub_83C69630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6963C"))) PPC_WEAK_FUNC(sub_83C6963C);
PPC_FUNC_IMPL(__imp__sub_83C6963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69640"))) PPC_WEAK_FUNC(sub_83C69640);
PPC_FUNC_IMPL(__imp__sub_83C69640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6964C"))) PPC_WEAK_FUNC(sub_83C6964C);
PPC_FUNC_IMPL(__imp__sub_83C6964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69650"))) PPC_WEAK_FUNC(sub_83C69650);
PPC_FUNC_IMPL(__imp__sub_83C69650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22480
	ctx.r3.s64 = ctx.r11.s64 + 22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6965C"))) PPC_WEAK_FUNC(sub_83C6965C);
PPC_FUNC_IMPL(__imp__sub_83C6965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69660"))) PPC_WEAK_FUNC(sub_83C69660);
PPC_FUNC_IMPL(__imp__sub_83C69660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6966C"))) PPC_WEAK_FUNC(sub_83C6966C);
PPC_FUNC_IMPL(__imp__sub_83C6966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69670"))) PPC_WEAK_FUNC(sub_83C69670);
PPC_FUNC_IMPL(__imp__sub_83C69670) {
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
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// bl 0x83523120
	ctx.lr = 0x83C69688;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22496
	ctx.r3.s64 = ctx.r10.s64 + 22496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69694;
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

__attribute__((alias("__imp__sub_83C696A4"))) PPC_WEAK_FUNC(sub_83C696A4);
PPC_FUNC_IMPL(__imp__sub_83C696A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C696A8"))) PPC_WEAK_FUNC(sub_83C696A8);
PPC_FUNC_IMPL(__imp__sub_83C696A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30192
	ctx.r7.s64 = ctx.r8.s64 + 30192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C696D0"))) PPC_WEAK_FUNC(sub_83C696D0);
PPC_FUNC_IMPL(__imp__sub_83C696D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26884
	ctx.r6.s64 = ctx.r7.s64 + -26884;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30192);
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
	// std r9,-26884(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69718"))) PPC_WEAK_FUNC(sub_83C69718);
PPC_FUNC_IMPL(__imp__sub_83C69718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22512
	ctx.r3.s64 = ctx.r11.s64 + 22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69724"))) PPC_WEAK_FUNC(sub_83C69724);
PPC_FUNC_IMPL(__imp__sub_83C69724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69728"))) PPC_WEAK_FUNC(sub_83C69728);
PPC_FUNC_IMPL(__imp__sub_83C69728) {
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
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// bl 0x8259af80
	ctx.lr = 0x83C69740;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22528
	ctx.r3.s64 = ctx.r10.s64 + 22528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6974C;
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

__attribute__((alias("__imp__sub_83C6975C"))) PPC_WEAK_FUNC(sub_83C6975C);
PPC_FUNC_IMPL(__imp__sub_83C6975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69760"))) PPC_WEAK_FUNC(sub_83C69760);
PPC_FUNC_IMPL(__imp__sub_83C69760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30180
	ctx.r11.s64 = ctx.r8.s64 + 30180;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22520
	ctx.r3.s64 = ctx.r6.s64 + 22520;
	// stw r10,30180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69790"))) PPC_WEAK_FUNC(sub_83C69790);
PPC_FUNC_IMPL(__imp__sub_83C69790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22536
	ctx.r3.s64 = ctx.r11.s64 + 22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6979C"))) PPC_WEAK_FUNC(sub_83C6979C);
PPC_FUNC_IMPL(__imp__sub_83C6979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697A0"))) PPC_WEAK_FUNC(sub_83C697A0);
PPC_FUNC_IMPL(__imp__sub_83C697A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697AC"))) PPC_WEAK_FUNC(sub_83C697AC);
PPC_FUNC_IMPL(__imp__sub_83C697AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697B0"))) PPC_WEAK_FUNC(sub_83C697B0);
PPC_FUNC_IMPL(__imp__sub_83C697B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697BC"))) PPC_WEAK_FUNC(sub_83C697BC);
PPC_FUNC_IMPL(__imp__sub_83C697BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697C0"))) PPC_WEAK_FUNC(sub_83C697C0);
PPC_FUNC_IMPL(__imp__sub_83C697C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697CC"))) PPC_WEAK_FUNC(sub_83C697CC);
PPC_FUNC_IMPL(__imp__sub_83C697CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697D0"))) PPC_WEAK_FUNC(sub_83C697D0);
PPC_FUNC_IMPL(__imp__sub_83C697D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22568
	ctx.r3.s64 = ctx.r11.s64 + 22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697DC"))) PPC_WEAK_FUNC(sub_83C697DC);
PPC_FUNC_IMPL(__imp__sub_83C697DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697E0"))) PPC_WEAK_FUNC(sub_83C697E0);
PPC_FUNC_IMPL(__imp__sub_83C697E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22576
	ctx.r3.s64 = ctx.r11.s64 + 22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697EC"))) PPC_WEAK_FUNC(sub_83C697EC);
PPC_FUNC_IMPL(__imp__sub_83C697EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C697F0"))) PPC_WEAK_FUNC(sub_83C697F0);
PPC_FUNC_IMPL(__imp__sub_83C697F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22584
	ctx.r3.s64 = ctx.r11.s64 + 22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C697FC"))) PPC_WEAK_FUNC(sub_83C697FC);
PPC_FUNC_IMPL(__imp__sub_83C697FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69800"))) PPC_WEAK_FUNC(sub_83C69800);
PPC_FUNC_IMPL(__imp__sub_83C69800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22592
	ctx.r3.s64 = ctx.r11.s64 + 22592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6980C"))) PPC_WEAK_FUNC(sub_83C6980C);
PPC_FUNC_IMPL(__imp__sub_83C6980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69810"))) PPC_WEAK_FUNC(sub_83C69810);
PPC_FUNC_IMPL(__imp__sub_83C69810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22600
	ctx.r3.s64 = ctx.r11.s64 + 22600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6981C"))) PPC_WEAK_FUNC(sub_83C6981C);
PPC_FUNC_IMPL(__imp__sub_83C6981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69820"))) PPC_WEAK_FUNC(sub_83C69820);
PPC_FUNC_IMPL(__imp__sub_83C69820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6982C"))) PPC_WEAK_FUNC(sub_83C6982C);
PPC_FUNC_IMPL(__imp__sub_83C6982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69830"))) PPC_WEAK_FUNC(sub_83C69830);
PPC_FUNC_IMPL(__imp__sub_83C69830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22616
	ctx.r3.s64 = ctx.r11.s64 + 22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6983C"))) PPC_WEAK_FUNC(sub_83C6983C);
PPC_FUNC_IMPL(__imp__sub_83C6983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69840"))) PPC_WEAK_FUNC(sub_83C69840);
PPC_FUNC_IMPL(__imp__sub_83C69840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6984C"))) PPC_WEAK_FUNC(sub_83C6984C);
PPC_FUNC_IMPL(__imp__sub_83C6984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69850"))) PPC_WEAK_FUNC(sub_83C69850);
PPC_FUNC_IMPL(__imp__sub_83C69850) {
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
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// bl 0x83523120
	ctx.lr = 0x83C69868;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22632
	ctx.r3.s64 = ctx.r10.s64 + 22632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69874;
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

__attribute__((alias("__imp__sub_83C69884"))) PPC_WEAK_FUNC(sub_83C69884);
PPC_FUNC_IMPL(__imp__sub_83C69884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69888"))) PPC_WEAK_FUNC(sub_83C69888);
PPC_FUNC_IMPL(__imp__sub_83C69888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30560
	ctx.r7.s64 = ctx.r8.s64 + 30560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C698B0"))) PPC_WEAK_FUNC(sub_83C698B0);
PPC_FUNC_IMPL(__imp__sub_83C698B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26756
	ctx.r6.s64 = ctx.r7.s64 + -26756;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26828(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26828);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30560);
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
	// std r9,-26756(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26756, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C698F8"))) PPC_WEAK_FUNC(sub_83C698F8);
PPC_FUNC_IMPL(__imp__sub_83C698F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69904"))) PPC_WEAK_FUNC(sub_83C69904);
PPC_FUNC_IMPL(__imp__sub_83C69904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69908"))) PPC_WEAK_FUNC(sub_83C69908);
PPC_FUNC_IMPL(__imp__sub_83C69908) {
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
	// addi r3,r11,30568
	ctx.r3.s64 = ctx.r11.s64 + 30568;
	// bl 0x8259af80
	ctx.lr = 0x83C69920;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22664
	ctx.r3.s64 = ctx.r10.s64 + 22664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6992C;
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

__attribute__((alias("__imp__sub_83C6993C"))) PPC_WEAK_FUNC(sub_83C6993C);
PPC_FUNC_IMPL(__imp__sub_83C6993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69940"))) PPC_WEAK_FUNC(sub_83C69940);
PPC_FUNC_IMPL(__imp__sub_83C69940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30548
	ctx.r11.s64 = ctx.r8.s64 + 30548;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22656
	ctx.r3.s64 = ctx.r6.s64 + 22656;
	// stw r10,30548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69970"))) PPC_WEAK_FUNC(sub_83C69970);
PPC_FUNC_IMPL(__imp__sub_83C69970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22672
	ctx.r3.s64 = ctx.r11.s64 + 22672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6997C"))) PPC_WEAK_FUNC(sub_83C6997C);
PPC_FUNC_IMPL(__imp__sub_83C6997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69980"))) PPC_WEAK_FUNC(sub_83C69980);
PPC_FUNC_IMPL(__imp__sub_83C69980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22680
	ctx.r3.s64 = ctx.r11.s64 + 22680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6998C"))) PPC_WEAK_FUNC(sub_83C6998C);
PPC_FUNC_IMPL(__imp__sub_83C6998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69990"))) PPC_WEAK_FUNC(sub_83C69990);
PPC_FUNC_IMPL(__imp__sub_83C69990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6999C"))) PPC_WEAK_FUNC(sub_83C6999C);
PPC_FUNC_IMPL(__imp__sub_83C6999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699A0"))) PPC_WEAK_FUNC(sub_83C699A0);
PPC_FUNC_IMPL(__imp__sub_83C699A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699AC"))) PPC_WEAK_FUNC(sub_83C699AC);
PPC_FUNC_IMPL(__imp__sub_83C699AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699B0"))) PPC_WEAK_FUNC(sub_83C699B0);
PPC_FUNC_IMPL(__imp__sub_83C699B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699BC"))) PPC_WEAK_FUNC(sub_83C699BC);
PPC_FUNC_IMPL(__imp__sub_83C699BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699C0"))) PPC_WEAK_FUNC(sub_83C699C0);
PPC_FUNC_IMPL(__imp__sub_83C699C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22712
	ctx.r3.s64 = ctx.r11.s64 + 22712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699CC"))) PPC_WEAK_FUNC(sub_83C699CC);
PPC_FUNC_IMPL(__imp__sub_83C699CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699D0"))) PPC_WEAK_FUNC(sub_83C699D0);
PPC_FUNC_IMPL(__imp__sub_83C699D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699DC"))) PPC_WEAK_FUNC(sub_83C699DC);
PPC_FUNC_IMPL(__imp__sub_83C699DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699E0"))) PPC_WEAK_FUNC(sub_83C699E0);
PPC_FUNC_IMPL(__imp__sub_83C699E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699EC"))) PPC_WEAK_FUNC(sub_83C699EC);
PPC_FUNC_IMPL(__imp__sub_83C699EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C699F0"))) PPC_WEAK_FUNC(sub_83C699F0);
PPC_FUNC_IMPL(__imp__sub_83C699F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22736
	ctx.r3.s64 = ctx.r11.s64 + 22736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C699FC"))) PPC_WEAK_FUNC(sub_83C699FC);
PPC_FUNC_IMPL(__imp__sub_83C699FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69A00"))) PPC_WEAK_FUNC(sub_83C69A00);
PPC_FUNC_IMPL(__imp__sub_83C69A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69A0C"))) PPC_WEAK_FUNC(sub_83C69A0C);
PPC_FUNC_IMPL(__imp__sub_83C69A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69A10"))) PPC_WEAK_FUNC(sub_83C69A10);
PPC_FUNC_IMPL(__imp__sub_83C69A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69A1C"))) PPC_WEAK_FUNC(sub_83C69A1C);
PPC_FUNC_IMPL(__imp__sub_83C69A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69A20"))) PPC_WEAK_FUNC(sub_83C69A20);
PPC_FUNC_IMPL(__imp__sub_83C69A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22760
	ctx.r3.s64 = ctx.r11.s64 + 22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69A2C"))) PPC_WEAK_FUNC(sub_83C69A2C);
PPC_FUNC_IMPL(__imp__sub_83C69A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69A30"))) PPC_WEAK_FUNC(sub_83C69A30);
PPC_FUNC_IMPL(__imp__sub_83C69A30) {
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
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// bl 0x83523120
	ctx.lr = 0x83C69A48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22768
	ctx.r3.s64 = ctx.r10.s64 + 22768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69A54;
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

__attribute__((alias("__imp__sub_83C69A64"))) PPC_WEAK_FUNC(sub_83C69A64);
PPC_FUNC_IMPL(__imp__sub_83C69A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69A68"))) PPC_WEAK_FUNC(sub_83C69A68);
PPC_FUNC_IMPL(__imp__sub_83C69A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30928
	ctx.r7.s64 = ctx.r8.s64 + 30928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69A90"))) PPC_WEAK_FUNC(sub_83C69A90);
PPC_FUNC_IMPL(__imp__sub_83C69A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26628
	ctx.r6.s64 = ctx.r7.s64 + -26628;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30928);
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
	// std r9,-26628(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69AD8"))) PPC_WEAK_FUNC(sub_83C69AD8);
PPC_FUNC_IMPL(__imp__sub_83C69AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69AE4"))) PPC_WEAK_FUNC(sub_83C69AE4);
PPC_FUNC_IMPL(__imp__sub_83C69AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69AE8"))) PPC_WEAK_FUNC(sub_83C69AE8);
PPC_FUNC_IMPL(__imp__sub_83C69AE8) {
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
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// bl 0x8259af80
	ctx.lr = 0x83C69B00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22800
	ctx.r3.s64 = ctx.r10.s64 + 22800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69B0C;
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

__attribute__((alias("__imp__sub_83C69B1C"))) PPC_WEAK_FUNC(sub_83C69B1C);
PPC_FUNC_IMPL(__imp__sub_83C69B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69B20"))) PPC_WEAK_FUNC(sub_83C69B20);
PPC_FUNC_IMPL(__imp__sub_83C69B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30916
	ctx.r11.s64 = ctx.r8.s64 + 30916;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22792
	ctx.r3.s64 = ctx.r6.s64 + 22792;
	// stw r10,30916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B50"))) PPC_WEAK_FUNC(sub_83C69B50);
PPC_FUNC_IMPL(__imp__sub_83C69B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22808
	ctx.r3.s64 = ctx.r11.s64 + 22808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B5C"))) PPC_WEAK_FUNC(sub_83C69B5C);
PPC_FUNC_IMPL(__imp__sub_83C69B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69B60"))) PPC_WEAK_FUNC(sub_83C69B60);
PPC_FUNC_IMPL(__imp__sub_83C69B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B6C"))) PPC_WEAK_FUNC(sub_83C69B6C);
PPC_FUNC_IMPL(__imp__sub_83C69B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69B70"))) PPC_WEAK_FUNC(sub_83C69B70);
PPC_FUNC_IMPL(__imp__sub_83C69B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22824
	ctx.r3.s64 = ctx.r11.s64 + 22824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B7C"))) PPC_WEAK_FUNC(sub_83C69B7C);
PPC_FUNC_IMPL(__imp__sub_83C69B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69B80"))) PPC_WEAK_FUNC(sub_83C69B80);
PPC_FUNC_IMPL(__imp__sub_83C69B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B8C"))) PPC_WEAK_FUNC(sub_83C69B8C);
PPC_FUNC_IMPL(__imp__sub_83C69B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69B90"))) PPC_WEAK_FUNC(sub_83C69B90);
PPC_FUNC_IMPL(__imp__sub_83C69B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22840
	ctx.r3.s64 = ctx.r11.s64 + 22840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69B9C"))) PPC_WEAK_FUNC(sub_83C69B9C);
PPC_FUNC_IMPL(__imp__sub_83C69B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BA0"))) PPC_WEAK_FUNC(sub_83C69BA0);
PPC_FUNC_IMPL(__imp__sub_83C69BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22848
	ctx.r3.s64 = ctx.r11.s64 + 22848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BAC"))) PPC_WEAK_FUNC(sub_83C69BAC);
PPC_FUNC_IMPL(__imp__sub_83C69BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BB0"))) PPC_WEAK_FUNC(sub_83C69BB0);
PPC_FUNC_IMPL(__imp__sub_83C69BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BBC"))) PPC_WEAK_FUNC(sub_83C69BBC);
PPC_FUNC_IMPL(__imp__sub_83C69BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BC0"))) PPC_WEAK_FUNC(sub_83C69BC0);
PPC_FUNC_IMPL(__imp__sub_83C69BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BCC"))) PPC_WEAK_FUNC(sub_83C69BCC);
PPC_FUNC_IMPL(__imp__sub_83C69BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BD0"))) PPC_WEAK_FUNC(sub_83C69BD0);
PPC_FUNC_IMPL(__imp__sub_83C69BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BDC"))) PPC_WEAK_FUNC(sub_83C69BDC);
PPC_FUNC_IMPL(__imp__sub_83C69BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BE0"))) PPC_WEAK_FUNC(sub_83C69BE0);
PPC_FUNC_IMPL(__imp__sub_83C69BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22880
	ctx.r3.s64 = ctx.r11.s64 + 22880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BEC"))) PPC_WEAK_FUNC(sub_83C69BEC);
PPC_FUNC_IMPL(__imp__sub_83C69BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69BF0"))) PPC_WEAK_FUNC(sub_83C69BF0);
PPC_FUNC_IMPL(__imp__sub_83C69BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69BFC"))) PPC_WEAK_FUNC(sub_83C69BFC);
PPC_FUNC_IMPL(__imp__sub_83C69BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69C00"))) PPC_WEAK_FUNC(sub_83C69C00);
PPC_FUNC_IMPL(__imp__sub_83C69C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22896
	ctx.r3.s64 = ctx.r11.s64 + 22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69C0C"))) PPC_WEAK_FUNC(sub_83C69C0C);
PPC_FUNC_IMPL(__imp__sub_83C69C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69C10"))) PPC_WEAK_FUNC(sub_83C69C10);
PPC_FUNC_IMPL(__imp__sub_83C69C10) {
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
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// bl 0x83523120
	ctx.lr = 0x83C69C28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22904
	ctx.r3.s64 = ctx.r10.s64 + 22904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69C34;
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

__attribute__((alias("__imp__sub_83C69C44"))) PPC_WEAK_FUNC(sub_83C69C44);
PPC_FUNC_IMPL(__imp__sub_83C69C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69C48"))) PPC_WEAK_FUNC(sub_83C69C48);
PPC_FUNC_IMPL(__imp__sub_83C69C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31296
	ctx.r7.s64 = ctx.r8.s64 + 31296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69C70"))) PPC_WEAK_FUNC(sub_83C69C70);
PPC_FUNC_IMPL(__imp__sub_83C69C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26500
	ctx.r6.s64 = ctx.r7.s64 + -26500;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26572(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26572);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31296);
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
	// std r9,-26500(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69CB8"))) PPC_WEAK_FUNC(sub_83C69CB8);
PPC_FUNC_IMPL(__imp__sub_83C69CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22920
	ctx.r3.s64 = ctx.r11.s64 + 22920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69CC4"))) PPC_WEAK_FUNC(sub_83C69CC4);
PPC_FUNC_IMPL(__imp__sub_83C69CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69CC8"))) PPC_WEAK_FUNC(sub_83C69CC8);
PPC_FUNC_IMPL(__imp__sub_83C69CC8) {
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
	// addi r3,r11,31304
	ctx.r3.s64 = ctx.r11.s64 + 31304;
	// bl 0x8259af80
	ctx.lr = 0x83C69CE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,22936
	ctx.r3.s64 = ctx.r10.s64 + 22936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69CEC;
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

__attribute__((alias("__imp__sub_83C69CFC"))) PPC_WEAK_FUNC(sub_83C69CFC);
PPC_FUNC_IMPL(__imp__sub_83C69CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D00"))) PPC_WEAK_FUNC(sub_83C69D00);
PPC_FUNC_IMPL(__imp__sub_83C69D00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31284
	ctx.r11.s64 = ctx.r8.s64 + 31284;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26524);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22928
	ctx.r3.s64 = ctx.r6.s64 + 22928;
	// stw r10,31284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D30"))) PPC_WEAK_FUNC(sub_83C69D30);
PPC_FUNC_IMPL(__imp__sub_83C69D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D3C"))) PPC_WEAK_FUNC(sub_83C69D3C);
PPC_FUNC_IMPL(__imp__sub_83C69D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D40"))) PPC_WEAK_FUNC(sub_83C69D40);
PPC_FUNC_IMPL(__imp__sub_83C69D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22952
	ctx.r3.s64 = ctx.r11.s64 + 22952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D4C"))) PPC_WEAK_FUNC(sub_83C69D4C);
PPC_FUNC_IMPL(__imp__sub_83C69D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D50"))) PPC_WEAK_FUNC(sub_83C69D50);
PPC_FUNC_IMPL(__imp__sub_83C69D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D5C"))) PPC_WEAK_FUNC(sub_83C69D5C);
PPC_FUNC_IMPL(__imp__sub_83C69D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D60"))) PPC_WEAK_FUNC(sub_83C69D60);
PPC_FUNC_IMPL(__imp__sub_83C69D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D6C"))) PPC_WEAK_FUNC(sub_83C69D6C);
PPC_FUNC_IMPL(__imp__sub_83C69D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D70"))) PPC_WEAK_FUNC(sub_83C69D70);
PPC_FUNC_IMPL(__imp__sub_83C69D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22976
	ctx.r3.s64 = ctx.r11.s64 + 22976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D7C"))) PPC_WEAK_FUNC(sub_83C69D7C);
PPC_FUNC_IMPL(__imp__sub_83C69D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D80"))) PPC_WEAK_FUNC(sub_83C69D80);
PPC_FUNC_IMPL(__imp__sub_83C69D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22984
	ctx.r3.s64 = ctx.r11.s64 + 22984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D8C"))) PPC_WEAK_FUNC(sub_83C69D8C);
PPC_FUNC_IMPL(__imp__sub_83C69D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69D90"))) PPC_WEAK_FUNC(sub_83C69D90);
PPC_FUNC_IMPL(__imp__sub_83C69D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,22992
	ctx.r3.s64 = ctx.r11.s64 + 22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69D9C"))) PPC_WEAK_FUNC(sub_83C69D9C);
PPC_FUNC_IMPL(__imp__sub_83C69D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DA0"))) PPC_WEAK_FUNC(sub_83C69DA0);
PPC_FUNC_IMPL(__imp__sub_83C69DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23000
	ctx.r3.s64 = ctx.r11.s64 + 23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69DAC"))) PPC_WEAK_FUNC(sub_83C69DAC);
PPC_FUNC_IMPL(__imp__sub_83C69DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DB0"))) PPC_WEAK_FUNC(sub_83C69DB0);
PPC_FUNC_IMPL(__imp__sub_83C69DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23008
	ctx.r3.s64 = ctx.r11.s64 + 23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69DBC"))) PPC_WEAK_FUNC(sub_83C69DBC);
PPC_FUNC_IMPL(__imp__sub_83C69DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DC0"))) PPC_WEAK_FUNC(sub_83C69DC0);
PPC_FUNC_IMPL(__imp__sub_83C69DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23016
	ctx.r3.s64 = ctx.r11.s64 + 23016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69DCC"))) PPC_WEAK_FUNC(sub_83C69DCC);
PPC_FUNC_IMPL(__imp__sub_83C69DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DD0"))) PPC_WEAK_FUNC(sub_83C69DD0);
PPC_FUNC_IMPL(__imp__sub_83C69DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23024
	ctx.r3.s64 = ctx.r11.s64 + 23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69DDC"))) PPC_WEAK_FUNC(sub_83C69DDC);
PPC_FUNC_IMPL(__imp__sub_83C69DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DE0"))) PPC_WEAK_FUNC(sub_83C69DE0);
PPC_FUNC_IMPL(__imp__sub_83C69DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23032
	ctx.r3.s64 = ctx.r11.s64 + 23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69DEC"))) PPC_WEAK_FUNC(sub_83C69DEC);
PPC_FUNC_IMPL(__imp__sub_83C69DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69DF0"))) PPC_WEAK_FUNC(sub_83C69DF0);
PPC_FUNC_IMPL(__imp__sub_83C69DF0) {
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
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// bl 0x83523120
	ctx.lr = 0x83C69E08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23040
	ctx.r3.s64 = ctx.r10.s64 + 23040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69E14;
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

__attribute__((alias("__imp__sub_83C69E24"))) PPC_WEAK_FUNC(sub_83C69E24);
PPC_FUNC_IMPL(__imp__sub_83C69E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69E28"))) PPC_WEAK_FUNC(sub_83C69E28);
PPC_FUNC_IMPL(__imp__sub_83C69E28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31664
	ctx.r7.s64 = ctx.r8.s64 + 31664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69E50"))) PPC_WEAK_FUNC(sub_83C69E50);
PPC_FUNC_IMPL(__imp__sub_83C69E50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26372
	ctx.r6.s64 = ctx.r7.s64 + -26372;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26444(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26444);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31664);
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
	// std r9,-26372(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C69E98"))) PPC_WEAK_FUNC(sub_83C69E98);
PPC_FUNC_IMPL(__imp__sub_83C69E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23056
	ctx.r3.s64 = ctx.r11.s64 + 23056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69EA4"))) PPC_WEAK_FUNC(sub_83C69EA4);
PPC_FUNC_IMPL(__imp__sub_83C69EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69EA8"))) PPC_WEAK_FUNC(sub_83C69EA8);
PPC_FUNC_IMPL(__imp__sub_83C69EA8) {
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
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// bl 0x8259af80
	ctx.lr = 0x83C69EC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23072
	ctx.r3.s64 = ctx.r10.s64 + 23072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69ECC;
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

__attribute__((alias("__imp__sub_83C69EDC"))) PPC_WEAK_FUNC(sub_83C69EDC);
PPC_FUNC_IMPL(__imp__sub_83C69EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69EE0"))) PPC_WEAK_FUNC(sub_83C69EE0);
PPC_FUNC_IMPL(__imp__sub_83C69EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31652
	ctx.r11.s64 = ctx.r8.s64 + 31652;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26396);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23064
	ctx.r3.s64 = ctx.r6.s64 + 23064;
	// stw r10,31652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F10"))) PPC_WEAK_FUNC(sub_83C69F10);
PPC_FUNC_IMPL(__imp__sub_83C69F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F1C"))) PPC_WEAK_FUNC(sub_83C69F1C);
PPC_FUNC_IMPL(__imp__sub_83C69F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F20"))) PPC_WEAK_FUNC(sub_83C69F20);
PPC_FUNC_IMPL(__imp__sub_83C69F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23088
	ctx.r3.s64 = ctx.r11.s64 + 23088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F2C"))) PPC_WEAK_FUNC(sub_83C69F2C);
PPC_FUNC_IMPL(__imp__sub_83C69F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F30"))) PPC_WEAK_FUNC(sub_83C69F30);
PPC_FUNC_IMPL(__imp__sub_83C69F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F3C"))) PPC_WEAK_FUNC(sub_83C69F3C);
PPC_FUNC_IMPL(__imp__sub_83C69F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F40"))) PPC_WEAK_FUNC(sub_83C69F40);
PPC_FUNC_IMPL(__imp__sub_83C69F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F4C"))) PPC_WEAK_FUNC(sub_83C69F4C);
PPC_FUNC_IMPL(__imp__sub_83C69F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F50"))) PPC_WEAK_FUNC(sub_83C69F50);
PPC_FUNC_IMPL(__imp__sub_83C69F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F5C"))) PPC_WEAK_FUNC(sub_83C69F5C);
PPC_FUNC_IMPL(__imp__sub_83C69F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F60"))) PPC_WEAK_FUNC(sub_83C69F60);
PPC_FUNC_IMPL(__imp__sub_83C69F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F6C"))) PPC_WEAK_FUNC(sub_83C69F6C);
PPC_FUNC_IMPL(__imp__sub_83C69F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F70"))) PPC_WEAK_FUNC(sub_83C69F70);
PPC_FUNC_IMPL(__imp__sub_83C69F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F7C"))) PPC_WEAK_FUNC(sub_83C69F7C);
PPC_FUNC_IMPL(__imp__sub_83C69F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F80"))) PPC_WEAK_FUNC(sub_83C69F80);
PPC_FUNC_IMPL(__imp__sub_83C69F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F8C"))) PPC_WEAK_FUNC(sub_83C69F8C);
PPC_FUNC_IMPL(__imp__sub_83C69F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69F90"))) PPC_WEAK_FUNC(sub_83C69F90);
PPC_FUNC_IMPL(__imp__sub_83C69F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69F9C"))) PPC_WEAK_FUNC(sub_83C69F9C);
PPC_FUNC_IMPL(__imp__sub_83C69F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69FA0"))) PPC_WEAK_FUNC(sub_83C69FA0);
PPC_FUNC_IMPL(__imp__sub_83C69FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69FAC"))) PPC_WEAK_FUNC(sub_83C69FAC);
PPC_FUNC_IMPL(__imp__sub_83C69FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69FB0"))) PPC_WEAK_FUNC(sub_83C69FB0);
PPC_FUNC_IMPL(__imp__sub_83C69FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69FBC"))) PPC_WEAK_FUNC(sub_83C69FBC);
PPC_FUNC_IMPL(__imp__sub_83C69FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69FC0"))) PPC_WEAK_FUNC(sub_83C69FC0);
PPC_FUNC_IMPL(__imp__sub_83C69FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C69FCC"))) PPC_WEAK_FUNC(sub_83C69FCC);
PPC_FUNC_IMPL(__imp__sub_83C69FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C69FD0"))) PPC_WEAK_FUNC(sub_83C69FD0);
PPC_FUNC_IMPL(__imp__sub_83C69FD0) {
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
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// bl 0x83523120
	ctx.lr = 0x83C69FE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23176
	ctx.r3.s64 = ctx.r10.s64 + 23176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C69FF4;
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

__attribute__((alias("__imp__sub_83C6A004"))) PPC_WEAK_FUNC(sub_83C6A004);
PPC_FUNC_IMPL(__imp__sub_83C6A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A008"))) PPC_WEAK_FUNC(sub_83C6A008);
PPC_FUNC_IMPL(__imp__sub_83C6A008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32032
	ctx.r7.s64 = ctx.r8.s64 + 32032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A030"))) PPC_WEAK_FUNC(sub_83C6A030);
PPC_FUNC_IMPL(__imp__sub_83C6A030) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26244
	ctx.r6.s64 = ctx.r7.s64 + -26244;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26316(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26316);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32032);
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
	// std r9,-26244(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26244, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A078"))) PPC_WEAK_FUNC(sub_83C6A078);
PPC_FUNC_IMPL(__imp__sub_83C6A078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A084"))) PPC_WEAK_FUNC(sub_83C6A084);
PPC_FUNC_IMPL(__imp__sub_83C6A084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A088"))) PPC_WEAK_FUNC(sub_83C6A088);
PPC_FUNC_IMPL(__imp__sub_83C6A088) {
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
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// bl 0x8259af80
	ctx.lr = 0x83C6A0A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23208
	ctx.r3.s64 = ctx.r10.s64 + 23208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A0AC;
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

__attribute__((alias("__imp__sub_83C6A0BC"))) PPC_WEAK_FUNC(sub_83C6A0BC);
PPC_FUNC_IMPL(__imp__sub_83C6A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A0C0"))) PPC_WEAK_FUNC(sub_83C6A0C0);
PPC_FUNC_IMPL(__imp__sub_83C6A0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32020
	ctx.r11.s64 = ctx.r8.s64 + 32020;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26268);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23200
	ctx.r3.s64 = ctx.r6.s64 + 23200;
	// stw r10,32020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A0F0"))) PPC_WEAK_FUNC(sub_83C6A0F0);
PPC_FUNC_IMPL(__imp__sub_83C6A0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A0FC"))) PPC_WEAK_FUNC(sub_83C6A0FC);
PPC_FUNC_IMPL(__imp__sub_83C6A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A100"))) PPC_WEAK_FUNC(sub_83C6A100);
PPC_FUNC_IMPL(__imp__sub_83C6A100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A10C"))) PPC_WEAK_FUNC(sub_83C6A10C);
PPC_FUNC_IMPL(__imp__sub_83C6A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A110"))) PPC_WEAK_FUNC(sub_83C6A110);
PPC_FUNC_IMPL(__imp__sub_83C6A110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A11C"))) PPC_WEAK_FUNC(sub_83C6A11C);
PPC_FUNC_IMPL(__imp__sub_83C6A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A120"))) PPC_WEAK_FUNC(sub_83C6A120);
PPC_FUNC_IMPL(__imp__sub_83C6A120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23240
	ctx.r3.s64 = ctx.r11.s64 + 23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A12C"))) PPC_WEAK_FUNC(sub_83C6A12C);
PPC_FUNC_IMPL(__imp__sub_83C6A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A130"))) PPC_WEAK_FUNC(sub_83C6A130);
PPC_FUNC_IMPL(__imp__sub_83C6A130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A13C"))) PPC_WEAK_FUNC(sub_83C6A13C);
PPC_FUNC_IMPL(__imp__sub_83C6A13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A140"))) PPC_WEAK_FUNC(sub_83C6A140);
PPC_FUNC_IMPL(__imp__sub_83C6A140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23256
	ctx.r3.s64 = ctx.r11.s64 + 23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A14C"))) PPC_WEAK_FUNC(sub_83C6A14C);
PPC_FUNC_IMPL(__imp__sub_83C6A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A150"))) PPC_WEAK_FUNC(sub_83C6A150);
PPC_FUNC_IMPL(__imp__sub_83C6A150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A15C"))) PPC_WEAK_FUNC(sub_83C6A15C);
PPC_FUNC_IMPL(__imp__sub_83C6A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A160"))) PPC_WEAK_FUNC(sub_83C6A160);
PPC_FUNC_IMPL(__imp__sub_83C6A160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A16C"))) PPC_WEAK_FUNC(sub_83C6A16C);
PPC_FUNC_IMPL(__imp__sub_83C6A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A170"))) PPC_WEAK_FUNC(sub_83C6A170);
PPC_FUNC_IMPL(__imp__sub_83C6A170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A17C"))) PPC_WEAK_FUNC(sub_83C6A17C);
PPC_FUNC_IMPL(__imp__sub_83C6A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

