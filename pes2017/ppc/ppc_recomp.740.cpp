#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C272C0"))) PPC_WEAK_FUNC(sub_83C272C0);
PPC_FUNC_IMPL(__imp__sub_83C272C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C272CC"))) PPC_WEAK_FUNC(sub_83C272CC);
PPC_FUNC_IMPL(__imp__sub_83C272CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C272D0"))) PPC_WEAK_FUNC(sub_83C272D0);
PPC_FUNC_IMPL(__imp__sub_83C272D0) {
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
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// bl 0x8259af80
	ctx.lr = 0x83C272E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,840
	ctx.r3.s64 = ctx.r10.s64 + 840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C272F4;
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

__attribute__((alias("__imp__sub_83C27304"))) PPC_WEAK_FUNC(sub_83C27304);
PPC_FUNC_IMPL(__imp__sub_83C27304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27308"))) PPC_WEAK_FUNC(sub_83C27308);
PPC_FUNC_IMPL(__imp__sub_83C27308) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11596
	ctx.r11.s64 = ctx.r8.s64 + -11596;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,17560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,832
	ctx.r3.s64 = ctx.r6.s64 + 832;
	// stw r10,-11596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27338"))) PPC_WEAK_FUNC(sub_83C27338);
PPC_FUNC_IMPL(__imp__sub_83C27338) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-11324
	ctx.r4.s64 = ctx.r11.s64 + -11324;
	// addi r3,r10,17608
	ctx.r3.s64 = ctx.r10.s64 + 17608;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2735C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,848
	ctx.r3.s64 = ctx.r9.s64 + 848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27368;
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

__attribute__((alias("__imp__sub_83C27378"))) PPC_WEAK_FUNC(sub_83C27378);
PPC_FUNC_IMPL(__imp__sub_83C27378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,952
	ctx.r3.s64 = ctx.r11.s64 + 952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27384"))) PPC_WEAK_FUNC(sub_83C27384);
PPC_FUNC_IMPL(__imp__sub_83C27384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27388"))) PPC_WEAK_FUNC(sub_83C27388);
PPC_FUNC_IMPL(__imp__sub_83C27388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27394"))) PPC_WEAK_FUNC(sub_83C27394);
PPC_FUNC_IMPL(__imp__sub_83C27394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27398"))) PPC_WEAK_FUNC(sub_83C27398);
PPC_FUNC_IMPL(__imp__sub_83C27398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,968
	ctx.r3.s64 = ctx.r11.s64 + 968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273A4"))) PPC_WEAK_FUNC(sub_83C273A4);
PPC_FUNC_IMPL(__imp__sub_83C273A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273A8"))) PPC_WEAK_FUNC(sub_83C273A8);
PPC_FUNC_IMPL(__imp__sub_83C273A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,976
	ctx.r3.s64 = ctx.r11.s64 + 976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273B4"))) PPC_WEAK_FUNC(sub_83C273B4);
PPC_FUNC_IMPL(__imp__sub_83C273B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273B8"))) PPC_WEAK_FUNC(sub_83C273B8);
PPC_FUNC_IMPL(__imp__sub_83C273B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273C4"))) PPC_WEAK_FUNC(sub_83C273C4);
PPC_FUNC_IMPL(__imp__sub_83C273C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273C8"))) PPC_WEAK_FUNC(sub_83C273C8);
PPC_FUNC_IMPL(__imp__sub_83C273C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273D4"))) PPC_WEAK_FUNC(sub_83C273D4);
PPC_FUNC_IMPL(__imp__sub_83C273D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273D8"))) PPC_WEAK_FUNC(sub_83C273D8);
PPC_FUNC_IMPL(__imp__sub_83C273D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 + 1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273E4"))) PPC_WEAK_FUNC(sub_83C273E4);
PPC_FUNC_IMPL(__imp__sub_83C273E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273E8"))) PPC_WEAK_FUNC(sub_83C273E8);
PPC_FUNC_IMPL(__imp__sub_83C273E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C273F4"))) PPC_WEAK_FUNC(sub_83C273F4);
PPC_FUNC_IMPL(__imp__sub_83C273F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C273F8"))) PPC_WEAK_FUNC(sub_83C273F8);
PPC_FUNC_IMPL(__imp__sub_83C273F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1016
	ctx.r3.s64 = ctx.r11.s64 + 1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27404"))) PPC_WEAK_FUNC(sub_83C27404);
PPC_FUNC_IMPL(__imp__sub_83C27404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27408"))) PPC_WEAK_FUNC(sub_83C27408);
PPC_FUNC_IMPL(__imp__sub_83C27408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27414"))) PPC_WEAK_FUNC(sub_83C27414);
PPC_FUNC_IMPL(__imp__sub_83C27414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27418"))) PPC_WEAK_FUNC(sub_83C27418);
PPC_FUNC_IMPL(__imp__sub_83C27418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27424"))) PPC_WEAK_FUNC(sub_83C27424);
PPC_FUNC_IMPL(__imp__sub_83C27424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27428"))) PPC_WEAK_FUNC(sub_83C27428);
PPC_FUNC_IMPL(__imp__sub_83C27428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1040
	ctx.r3.s64 = ctx.r11.s64 + 1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27434"))) PPC_WEAK_FUNC(sub_83C27434);
PPC_FUNC_IMPL(__imp__sub_83C27434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27438"))) PPC_WEAK_FUNC(sub_83C27438);
PPC_FUNC_IMPL(__imp__sub_83C27438) {
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
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// bl 0x83523120
	ctx.lr = 0x83C27450;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1048
	ctx.r3.s64 = ctx.r10.s64 + 1048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2745C;
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

__attribute__((alias("__imp__sub_83C2746C"))) PPC_WEAK_FUNC(sub_83C2746C);
PPC_FUNC_IMPL(__imp__sub_83C2746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27470"))) PPC_WEAK_FUNC(sub_83C27470);
PPC_FUNC_IMPL(__imp__sub_83C27470) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11216
	ctx.r7.s64 = ctx.r8.s64 + -11216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27498"))) PPC_WEAK_FUNC(sub_83C27498);
PPC_FUNC_IMPL(__imp__sub_83C27498) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17740
	ctx.r6.s64 = ctx.r7.s64 + 17740;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17668(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17668);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11216);
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
	// std r9,17740(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17740, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C274E0"))) PPC_WEAK_FUNC(sub_83C274E0);
PPC_FUNC_IMPL(__imp__sub_83C274E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1064
	ctx.r3.s64 = ctx.r11.s64 + 1064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C274EC"))) PPC_WEAK_FUNC(sub_83C274EC);
PPC_FUNC_IMPL(__imp__sub_83C274EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C274F0"))) PPC_WEAK_FUNC(sub_83C274F0);
PPC_FUNC_IMPL(__imp__sub_83C274F0) {
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
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// bl 0x8259af80
	ctx.lr = 0x83C27508;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1080
	ctx.r3.s64 = ctx.r10.s64 + 1080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27514;
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

__attribute__((alias("__imp__sub_83C27524"))) PPC_WEAK_FUNC(sub_83C27524);
PPC_FUNC_IMPL(__imp__sub_83C27524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27528"))) PPC_WEAK_FUNC(sub_83C27528);
PPC_FUNC_IMPL(__imp__sub_83C27528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11228
	ctx.r11.s64 = ctx.r8.s64 + -11228;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,17716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17716);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1072
	ctx.r3.s64 = ctx.r6.s64 + 1072;
	// stw r10,-11228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27558"))) PPC_WEAK_FUNC(sub_83C27558);
PPC_FUNC_IMPL(__imp__sub_83C27558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27564"))) PPC_WEAK_FUNC(sub_83C27564);
PPC_FUNC_IMPL(__imp__sub_83C27564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27568"))) PPC_WEAK_FUNC(sub_83C27568);
PPC_FUNC_IMPL(__imp__sub_83C27568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27574"))) PPC_WEAK_FUNC(sub_83C27574);
PPC_FUNC_IMPL(__imp__sub_83C27574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27578"))) PPC_WEAK_FUNC(sub_83C27578);
PPC_FUNC_IMPL(__imp__sub_83C27578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1104
	ctx.r3.s64 = ctx.r11.s64 + 1104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27584"))) PPC_WEAK_FUNC(sub_83C27584);
PPC_FUNC_IMPL(__imp__sub_83C27584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27588"))) PPC_WEAK_FUNC(sub_83C27588);
PPC_FUNC_IMPL(__imp__sub_83C27588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1112
	ctx.r3.s64 = ctx.r11.s64 + 1112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27594"))) PPC_WEAK_FUNC(sub_83C27594);
PPC_FUNC_IMPL(__imp__sub_83C27594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27598"))) PPC_WEAK_FUNC(sub_83C27598);
PPC_FUNC_IMPL(__imp__sub_83C27598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275A4"))) PPC_WEAK_FUNC(sub_83C275A4);
PPC_FUNC_IMPL(__imp__sub_83C275A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275A8"))) PPC_WEAK_FUNC(sub_83C275A8);
PPC_FUNC_IMPL(__imp__sub_83C275A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275B4"))) PPC_WEAK_FUNC(sub_83C275B4);
PPC_FUNC_IMPL(__imp__sub_83C275B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275B8"))) PPC_WEAK_FUNC(sub_83C275B8);
PPC_FUNC_IMPL(__imp__sub_83C275B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275C4"))) PPC_WEAK_FUNC(sub_83C275C4);
PPC_FUNC_IMPL(__imp__sub_83C275C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275C8"))) PPC_WEAK_FUNC(sub_83C275C8);
PPC_FUNC_IMPL(__imp__sub_83C275C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1144
	ctx.r3.s64 = ctx.r11.s64 + 1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275D4"))) PPC_WEAK_FUNC(sub_83C275D4);
PPC_FUNC_IMPL(__imp__sub_83C275D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275D8"))) PPC_WEAK_FUNC(sub_83C275D8);
PPC_FUNC_IMPL(__imp__sub_83C275D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275E4"))) PPC_WEAK_FUNC(sub_83C275E4);
PPC_FUNC_IMPL(__imp__sub_83C275E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275E8"))) PPC_WEAK_FUNC(sub_83C275E8);
PPC_FUNC_IMPL(__imp__sub_83C275E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C275F4"))) PPC_WEAK_FUNC(sub_83C275F4);
PPC_FUNC_IMPL(__imp__sub_83C275F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C275F8"))) PPC_WEAK_FUNC(sub_83C275F8);
PPC_FUNC_IMPL(__imp__sub_83C275F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1168
	ctx.r3.s64 = ctx.r11.s64 + 1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27604"))) PPC_WEAK_FUNC(sub_83C27604);
PPC_FUNC_IMPL(__imp__sub_83C27604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27608"))) PPC_WEAK_FUNC(sub_83C27608);
PPC_FUNC_IMPL(__imp__sub_83C27608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1176
	ctx.r3.s64 = ctx.r11.s64 + 1176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27614"))) PPC_WEAK_FUNC(sub_83C27614);
PPC_FUNC_IMPL(__imp__sub_83C27614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27618"))) PPC_WEAK_FUNC(sub_83C27618);
PPC_FUNC_IMPL(__imp__sub_83C27618) {
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
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// bl 0x83523120
	ctx.lr = 0x83C27630;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1184
	ctx.r3.s64 = ctx.r10.s64 + 1184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2763C;
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

__attribute__((alias("__imp__sub_83C2764C"))) PPC_WEAK_FUNC(sub_83C2764C);
PPC_FUNC_IMPL(__imp__sub_83C2764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27650"))) PPC_WEAK_FUNC(sub_83C27650);
PPC_FUNC_IMPL(__imp__sub_83C27650) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10848
	ctx.r7.s64 = ctx.r8.s64 + -10848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10848(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27678"))) PPC_WEAK_FUNC(sub_83C27678);
PPC_FUNC_IMPL(__imp__sub_83C27678) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17868
	ctx.r6.s64 = ctx.r7.s64 + 17868;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17796(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17796);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10848);
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
	// std r9,17868(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17868, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C276C0"))) PPC_WEAK_FUNC(sub_83C276C0);
PPC_FUNC_IMPL(__imp__sub_83C276C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1200
	ctx.r3.s64 = ctx.r11.s64 + 1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C276CC"))) PPC_WEAK_FUNC(sub_83C276CC);
PPC_FUNC_IMPL(__imp__sub_83C276CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C276D0"))) PPC_WEAK_FUNC(sub_83C276D0);
PPC_FUNC_IMPL(__imp__sub_83C276D0) {
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
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// bl 0x8259af80
	ctx.lr = 0x83C276E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1216
	ctx.r3.s64 = ctx.r10.s64 + 1216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C276F4;
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

__attribute__((alias("__imp__sub_83C27704"))) PPC_WEAK_FUNC(sub_83C27704);
PPC_FUNC_IMPL(__imp__sub_83C27704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27708"))) PPC_WEAK_FUNC(sub_83C27708);
PPC_FUNC_IMPL(__imp__sub_83C27708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10860
	ctx.r11.s64 = ctx.r8.s64 + -10860;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,17844(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17844);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1208
	ctx.r3.s64 = ctx.r6.s64 + 1208;
	// stw r10,-10860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27738"))) PPC_WEAK_FUNC(sub_83C27738);
PPC_FUNC_IMPL(__imp__sub_83C27738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27744"))) PPC_WEAK_FUNC(sub_83C27744);
PPC_FUNC_IMPL(__imp__sub_83C27744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27748"))) PPC_WEAK_FUNC(sub_83C27748);
PPC_FUNC_IMPL(__imp__sub_83C27748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1232
	ctx.r3.s64 = ctx.r11.s64 + 1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27754"))) PPC_WEAK_FUNC(sub_83C27754);
PPC_FUNC_IMPL(__imp__sub_83C27754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27758"))) PPC_WEAK_FUNC(sub_83C27758);
PPC_FUNC_IMPL(__imp__sub_83C27758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1240
	ctx.r3.s64 = ctx.r11.s64 + 1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27764"))) PPC_WEAK_FUNC(sub_83C27764);
PPC_FUNC_IMPL(__imp__sub_83C27764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27768"))) PPC_WEAK_FUNC(sub_83C27768);
PPC_FUNC_IMPL(__imp__sub_83C27768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27774"))) PPC_WEAK_FUNC(sub_83C27774);
PPC_FUNC_IMPL(__imp__sub_83C27774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27778"))) PPC_WEAK_FUNC(sub_83C27778);
PPC_FUNC_IMPL(__imp__sub_83C27778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27784"))) PPC_WEAK_FUNC(sub_83C27784);
PPC_FUNC_IMPL(__imp__sub_83C27784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27788"))) PPC_WEAK_FUNC(sub_83C27788);
PPC_FUNC_IMPL(__imp__sub_83C27788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27794"))) PPC_WEAK_FUNC(sub_83C27794);
PPC_FUNC_IMPL(__imp__sub_83C27794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27798"))) PPC_WEAK_FUNC(sub_83C27798);
PPC_FUNC_IMPL(__imp__sub_83C27798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1272
	ctx.r3.s64 = ctx.r11.s64 + 1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277A4"))) PPC_WEAK_FUNC(sub_83C277A4);
PPC_FUNC_IMPL(__imp__sub_83C277A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277A8"))) PPC_WEAK_FUNC(sub_83C277A8);
PPC_FUNC_IMPL(__imp__sub_83C277A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277B4"))) PPC_WEAK_FUNC(sub_83C277B4);
PPC_FUNC_IMPL(__imp__sub_83C277B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277B8"))) PPC_WEAK_FUNC(sub_83C277B8);
PPC_FUNC_IMPL(__imp__sub_83C277B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1288
	ctx.r3.s64 = ctx.r11.s64 + 1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277C4"))) PPC_WEAK_FUNC(sub_83C277C4);
PPC_FUNC_IMPL(__imp__sub_83C277C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277C8"))) PPC_WEAK_FUNC(sub_83C277C8);
PPC_FUNC_IMPL(__imp__sub_83C277C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1296
	ctx.r3.s64 = ctx.r11.s64 + 1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277D4"))) PPC_WEAK_FUNC(sub_83C277D4);
PPC_FUNC_IMPL(__imp__sub_83C277D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277D8"))) PPC_WEAK_FUNC(sub_83C277D8);
PPC_FUNC_IMPL(__imp__sub_83C277D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277E4"))) PPC_WEAK_FUNC(sub_83C277E4);
PPC_FUNC_IMPL(__imp__sub_83C277E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277E8"))) PPC_WEAK_FUNC(sub_83C277E8);
PPC_FUNC_IMPL(__imp__sub_83C277E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C277F4"))) PPC_WEAK_FUNC(sub_83C277F4);
PPC_FUNC_IMPL(__imp__sub_83C277F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C277F8"))) PPC_WEAK_FUNC(sub_83C277F8);
PPC_FUNC_IMPL(__imp__sub_83C277F8) {
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
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// bl 0x83523120
	ctx.lr = 0x83C27810;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1320
	ctx.r3.s64 = ctx.r10.s64 + 1320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2781C;
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

__attribute__((alias("__imp__sub_83C2782C"))) PPC_WEAK_FUNC(sub_83C2782C);
PPC_FUNC_IMPL(__imp__sub_83C2782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27830"))) PPC_WEAK_FUNC(sub_83C27830);
PPC_FUNC_IMPL(__imp__sub_83C27830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10480
	ctx.r7.s64 = ctx.r8.s64 + -10480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27858"))) PPC_WEAK_FUNC(sub_83C27858);
PPC_FUNC_IMPL(__imp__sub_83C27858) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,17996
	ctx.r6.s64 = ctx.r7.s64 + 17996;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17924(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17924);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10480);
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
	// std r9,17996(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17996, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C278A0"))) PPC_WEAK_FUNC(sub_83C278A0);
PPC_FUNC_IMPL(__imp__sub_83C278A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C278AC"))) PPC_WEAK_FUNC(sub_83C278AC);
PPC_FUNC_IMPL(__imp__sub_83C278AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C278B0"))) PPC_WEAK_FUNC(sub_83C278B0);
PPC_FUNC_IMPL(__imp__sub_83C278B0) {
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
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// bl 0x8259af80
	ctx.lr = 0x83C278C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1352
	ctx.r3.s64 = ctx.r10.s64 + 1352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C278D4;
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

__attribute__((alias("__imp__sub_83C278E4"))) PPC_WEAK_FUNC(sub_83C278E4);
PPC_FUNC_IMPL(__imp__sub_83C278E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C278E8"))) PPC_WEAK_FUNC(sub_83C278E8);
PPC_FUNC_IMPL(__imp__sub_83C278E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10492
	ctx.r11.s64 = ctx.r8.s64 + -10492;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,17972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17972);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1344
	ctx.r3.s64 = ctx.r6.s64 + 1344;
	// stw r10,-10492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27918"))) PPC_WEAK_FUNC(sub_83C27918);
PPC_FUNC_IMPL(__imp__sub_83C27918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27924"))) PPC_WEAK_FUNC(sub_83C27924);
PPC_FUNC_IMPL(__imp__sub_83C27924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27928"))) PPC_WEAK_FUNC(sub_83C27928);
PPC_FUNC_IMPL(__imp__sub_83C27928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1368
	ctx.r3.s64 = ctx.r11.s64 + 1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27934"))) PPC_WEAK_FUNC(sub_83C27934);
PPC_FUNC_IMPL(__imp__sub_83C27934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27938"))) PPC_WEAK_FUNC(sub_83C27938);
PPC_FUNC_IMPL(__imp__sub_83C27938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1376
	ctx.r3.s64 = ctx.r11.s64 + 1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27944"))) PPC_WEAK_FUNC(sub_83C27944);
PPC_FUNC_IMPL(__imp__sub_83C27944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27948"))) PPC_WEAK_FUNC(sub_83C27948);
PPC_FUNC_IMPL(__imp__sub_83C27948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1384
	ctx.r3.s64 = ctx.r11.s64 + 1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27954"))) PPC_WEAK_FUNC(sub_83C27954);
PPC_FUNC_IMPL(__imp__sub_83C27954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27958"))) PPC_WEAK_FUNC(sub_83C27958);
PPC_FUNC_IMPL(__imp__sub_83C27958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27964"))) PPC_WEAK_FUNC(sub_83C27964);
PPC_FUNC_IMPL(__imp__sub_83C27964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27968"))) PPC_WEAK_FUNC(sub_83C27968);
PPC_FUNC_IMPL(__imp__sub_83C27968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27974"))) PPC_WEAK_FUNC(sub_83C27974);
PPC_FUNC_IMPL(__imp__sub_83C27974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27978"))) PPC_WEAK_FUNC(sub_83C27978);
PPC_FUNC_IMPL(__imp__sub_83C27978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1408
	ctx.r3.s64 = ctx.r11.s64 + 1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27984"))) PPC_WEAK_FUNC(sub_83C27984);
PPC_FUNC_IMPL(__imp__sub_83C27984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27988"))) PPC_WEAK_FUNC(sub_83C27988);
PPC_FUNC_IMPL(__imp__sub_83C27988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1416
	ctx.r3.s64 = ctx.r11.s64 + 1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27994"))) PPC_WEAK_FUNC(sub_83C27994);
PPC_FUNC_IMPL(__imp__sub_83C27994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27998"))) PPC_WEAK_FUNC(sub_83C27998);
PPC_FUNC_IMPL(__imp__sub_83C27998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C279A4"))) PPC_WEAK_FUNC(sub_83C279A4);
PPC_FUNC_IMPL(__imp__sub_83C279A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C279A8"))) PPC_WEAK_FUNC(sub_83C279A8);
PPC_FUNC_IMPL(__imp__sub_83C279A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1432
	ctx.r3.s64 = ctx.r11.s64 + 1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C279B4"))) PPC_WEAK_FUNC(sub_83C279B4);
PPC_FUNC_IMPL(__imp__sub_83C279B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C279B8"))) PPC_WEAK_FUNC(sub_83C279B8);
PPC_FUNC_IMPL(__imp__sub_83C279B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C279C4"))) PPC_WEAK_FUNC(sub_83C279C4);
PPC_FUNC_IMPL(__imp__sub_83C279C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C279C8"))) PPC_WEAK_FUNC(sub_83C279C8);
PPC_FUNC_IMPL(__imp__sub_83C279C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1448
	ctx.r3.s64 = ctx.r11.s64 + 1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C279D4"))) PPC_WEAK_FUNC(sub_83C279D4);
PPC_FUNC_IMPL(__imp__sub_83C279D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C279D8"))) PPC_WEAK_FUNC(sub_83C279D8);
PPC_FUNC_IMPL(__imp__sub_83C279D8) {
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
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// bl 0x83523120
	ctx.lr = 0x83C279F0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1456
	ctx.r3.s64 = ctx.r10.s64 + 1456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C279FC;
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

__attribute__((alias("__imp__sub_83C27A0C"))) PPC_WEAK_FUNC(sub_83C27A0C);
PPC_FUNC_IMPL(__imp__sub_83C27A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27A10"))) PPC_WEAK_FUNC(sub_83C27A10);
PPC_FUNC_IMPL(__imp__sub_83C27A10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10112
	ctx.r7.s64 = ctx.r8.s64 + -10112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10112(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27A38"))) PPC_WEAK_FUNC(sub_83C27A38);
PPC_FUNC_IMPL(__imp__sub_83C27A38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,18124
	ctx.r6.s64 = ctx.r7.s64 + 18124;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10112);
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
	// std r9,18124(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18124, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27A80"))) PPC_WEAK_FUNC(sub_83C27A80);
PPC_FUNC_IMPL(__imp__sub_83C27A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27A8C"))) PPC_WEAK_FUNC(sub_83C27A8C);
PPC_FUNC_IMPL(__imp__sub_83C27A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27A90"))) PPC_WEAK_FUNC(sub_83C27A90);
PPC_FUNC_IMPL(__imp__sub_83C27A90) {
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
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// bl 0x8259af80
	ctx.lr = 0x83C27AA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1488
	ctx.r3.s64 = ctx.r10.s64 + 1488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27AB4;
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

__attribute__((alias("__imp__sub_83C27AC4"))) PPC_WEAK_FUNC(sub_83C27AC4);
PPC_FUNC_IMPL(__imp__sub_83C27AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27AC8"))) PPC_WEAK_FUNC(sub_83C27AC8);
PPC_FUNC_IMPL(__imp__sub_83C27AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10124
	ctx.r11.s64 = ctx.r8.s64 + -10124;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,18100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18100);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1480
	ctx.r3.s64 = ctx.r6.s64 + 1480;
	// stw r10,-10124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27AF8"))) PPC_WEAK_FUNC(sub_83C27AF8);
PPC_FUNC_IMPL(__imp__sub_83C27AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B04"))) PPC_WEAK_FUNC(sub_83C27B04);
PPC_FUNC_IMPL(__imp__sub_83C27B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B08"))) PPC_WEAK_FUNC(sub_83C27B08);
PPC_FUNC_IMPL(__imp__sub_83C27B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B14"))) PPC_WEAK_FUNC(sub_83C27B14);
PPC_FUNC_IMPL(__imp__sub_83C27B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B18"))) PPC_WEAK_FUNC(sub_83C27B18);
PPC_FUNC_IMPL(__imp__sub_83C27B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B24"))) PPC_WEAK_FUNC(sub_83C27B24);
PPC_FUNC_IMPL(__imp__sub_83C27B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B28"))) PPC_WEAK_FUNC(sub_83C27B28);
PPC_FUNC_IMPL(__imp__sub_83C27B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B34"))) PPC_WEAK_FUNC(sub_83C27B34);
PPC_FUNC_IMPL(__imp__sub_83C27B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B38"))) PPC_WEAK_FUNC(sub_83C27B38);
PPC_FUNC_IMPL(__imp__sub_83C27B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B44"))) PPC_WEAK_FUNC(sub_83C27B44);
PPC_FUNC_IMPL(__imp__sub_83C27B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B48"))) PPC_WEAK_FUNC(sub_83C27B48);
PPC_FUNC_IMPL(__imp__sub_83C27B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1536
	ctx.r3.s64 = ctx.r11.s64 + 1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B54"))) PPC_WEAK_FUNC(sub_83C27B54);
PPC_FUNC_IMPL(__imp__sub_83C27B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B58"))) PPC_WEAK_FUNC(sub_83C27B58);
PPC_FUNC_IMPL(__imp__sub_83C27B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B64"))) PPC_WEAK_FUNC(sub_83C27B64);
PPC_FUNC_IMPL(__imp__sub_83C27B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B68"))) PPC_WEAK_FUNC(sub_83C27B68);
PPC_FUNC_IMPL(__imp__sub_83C27B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B74"))) PPC_WEAK_FUNC(sub_83C27B74);
PPC_FUNC_IMPL(__imp__sub_83C27B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B78"))) PPC_WEAK_FUNC(sub_83C27B78);
PPC_FUNC_IMPL(__imp__sub_83C27B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B84"))) PPC_WEAK_FUNC(sub_83C27B84);
PPC_FUNC_IMPL(__imp__sub_83C27B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B88"))) PPC_WEAK_FUNC(sub_83C27B88);
PPC_FUNC_IMPL(__imp__sub_83C27B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1568
	ctx.r3.s64 = ctx.r11.s64 + 1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27B94"))) PPC_WEAK_FUNC(sub_83C27B94);
PPC_FUNC_IMPL(__imp__sub_83C27B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27B98"))) PPC_WEAK_FUNC(sub_83C27B98);
PPC_FUNC_IMPL(__imp__sub_83C27B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1576
	ctx.r3.s64 = ctx.r11.s64 + 1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27BA4"))) PPC_WEAK_FUNC(sub_83C27BA4);
PPC_FUNC_IMPL(__imp__sub_83C27BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27BA8"))) PPC_WEAK_FUNC(sub_83C27BA8);
PPC_FUNC_IMPL(__imp__sub_83C27BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1584
	ctx.r3.s64 = ctx.r11.s64 + 1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27BB4"))) PPC_WEAK_FUNC(sub_83C27BB4);
PPC_FUNC_IMPL(__imp__sub_83C27BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27BB8"))) PPC_WEAK_FUNC(sub_83C27BB8);
PPC_FUNC_IMPL(__imp__sub_83C27BB8) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-8528
	ctx.r4.s64 = ctx.r11.s64 + -8528;
	// addi r3,r10,18252
	ctx.r3.s64 = ctx.r10.s64 + 18252;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C27BDC;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,1608
	ctx.r3.s64 = ctx.r9.s64 + 1608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27BE8;
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

__attribute__((alias("__imp__sub_83C27BF8"))) PPC_WEAK_FUNC(sub_83C27BF8);
PPC_FUNC_IMPL(__imp__sub_83C27BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9756
	ctx.r7.s64 = ctx.r8.s64 + -9756;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9756(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9756);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9756, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27C20"))) PPC_WEAK_FUNC(sub_83C27C20);
PPC_FUNC_IMPL(__imp__sub_83C27C20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,18280
	ctx.r6.s64 = ctx.r7.s64 + 18280;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9756(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9756);
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
	// std r9,18280(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27C68"))) PPC_WEAK_FUNC(sub_83C27C68);
PPC_FUNC_IMPL(__imp__sub_83C27C68) {
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
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// bl 0x83523120
	ctx.lr = 0x83C27C80;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1592
	ctx.r3.s64 = ctx.r10.s64 + 1592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27C8C;
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

__attribute__((alias("__imp__sub_83C27C9C"))) PPC_WEAK_FUNC(sub_83C27C9C);
PPC_FUNC_IMPL(__imp__sub_83C27C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CA0"))) PPC_WEAK_FUNC(sub_83C27CA0);
PPC_FUNC_IMPL(__imp__sub_83C27CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1712
	ctx.r3.s64 = ctx.r11.s64 + 1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CAC"))) PPC_WEAK_FUNC(sub_83C27CAC);
PPC_FUNC_IMPL(__imp__sub_83C27CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CB0"))) PPC_WEAK_FUNC(sub_83C27CB0);
PPC_FUNC_IMPL(__imp__sub_83C27CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1720
	ctx.r3.s64 = ctx.r11.s64 + 1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CBC"))) PPC_WEAK_FUNC(sub_83C27CBC);
PPC_FUNC_IMPL(__imp__sub_83C27CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CC0"))) PPC_WEAK_FUNC(sub_83C27CC0);
PPC_FUNC_IMPL(__imp__sub_83C27CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CCC"))) PPC_WEAK_FUNC(sub_83C27CCC);
PPC_FUNC_IMPL(__imp__sub_83C27CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CD0"))) PPC_WEAK_FUNC(sub_83C27CD0);
PPC_FUNC_IMPL(__imp__sub_83C27CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1736
	ctx.r3.s64 = ctx.r11.s64 + 1736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CDC"))) PPC_WEAK_FUNC(sub_83C27CDC);
PPC_FUNC_IMPL(__imp__sub_83C27CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CE0"))) PPC_WEAK_FUNC(sub_83C27CE0);
PPC_FUNC_IMPL(__imp__sub_83C27CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CEC"))) PPC_WEAK_FUNC(sub_83C27CEC);
PPC_FUNC_IMPL(__imp__sub_83C27CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27CF0"))) PPC_WEAK_FUNC(sub_83C27CF0);
PPC_FUNC_IMPL(__imp__sub_83C27CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27CFC"))) PPC_WEAK_FUNC(sub_83C27CFC);
PPC_FUNC_IMPL(__imp__sub_83C27CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D00"))) PPC_WEAK_FUNC(sub_83C27D00);
PPC_FUNC_IMPL(__imp__sub_83C27D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1760
	ctx.r3.s64 = ctx.r11.s64 + 1760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D0C"))) PPC_WEAK_FUNC(sub_83C27D0C);
PPC_FUNC_IMPL(__imp__sub_83C27D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D10"))) PPC_WEAK_FUNC(sub_83C27D10);
PPC_FUNC_IMPL(__imp__sub_83C27D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1768
	ctx.r3.s64 = ctx.r11.s64 + 1768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D1C"))) PPC_WEAK_FUNC(sub_83C27D1C);
PPC_FUNC_IMPL(__imp__sub_83C27D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D20"))) PPC_WEAK_FUNC(sub_83C27D20);
PPC_FUNC_IMPL(__imp__sub_83C27D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D2C"))) PPC_WEAK_FUNC(sub_83C27D2C);
PPC_FUNC_IMPL(__imp__sub_83C27D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D30"))) PPC_WEAK_FUNC(sub_83C27D30);
PPC_FUNC_IMPL(__imp__sub_83C27D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1784
	ctx.r3.s64 = ctx.r11.s64 + 1784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D3C"))) PPC_WEAK_FUNC(sub_83C27D3C);
PPC_FUNC_IMPL(__imp__sub_83C27D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D40"))) PPC_WEAK_FUNC(sub_83C27D40);
PPC_FUNC_IMPL(__imp__sub_83C27D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D4C"))) PPC_WEAK_FUNC(sub_83C27D4C);
PPC_FUNC_IMPL(__imp__sub_83C27D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D50"))) PPC_WEAK_FUNC(sub_83C27D50);
PPC_FUNC_IMPL(__imp__sub_83C27D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D5C"))) PPC_WEAK_FUNC(sub_83C27D5C);
PPC_FUNC_IMPL(__imp__sub_83C27D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D60"))) PPC_WEAK_FUNC(sub_83C27D60);
PPC_FUNC_IMPL(__imp__sub_83C27D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D6C"))) PPC_WEAK_FUNC(sub_83C27D6C);
PPC_FUNC_IMPL(__imp__sub_83C27D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D70"))) PPC_WEAK_FUNC(sub_83C27D70);
PPC_FUNC_IMPL(__imp__sub_83C27D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D7C"))) PPC_WEAK_FUNC(sub_83C27D7C);
PPC_FUNC_IMPL(__imp__sub_83C27D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D80"))) PPC_WEAK_FUNC(sub_83C27D80);
PPC_FUNC_IMPL(__imp__sub_83C27D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1824
	ctx.r3.s64 = ctx.r11.s64 + 1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D8C"))) PPC_WEAK_FUNC(sub_83C27D8C);
PPC_FUNC_IMPL(__imp__sub_83C27D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27D90"))) PPC_WEAK_FUNC(sub_83C27D90);
PPC_FUNC_IMPL(__imp__sub_83C27D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1832
	ctx.r3.s64 = ctx.r11.s64 + 1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27D9C"))) PPC_WEAK_FUNC(sub_83C27D9C);
PPC_FUNC_IMPL(__imp__sub_83C27D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DA0"))) PPC_WEAK_FUNC(sub_83C27DA0);
PPC_FUNC_IMPL(__imp__sub_83C27DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DAC"))) PPC_WEAK_FUNC(sub_83C27DAC);
PPC_FUNC_IMPL(__imp__sub_83C27DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DB0"))) PPC_WEAK_FUNC(sub_83C27DB0);
PPC_FUNC_IMPL(__imp__sub_83C27DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DBC"))) PPC_WEAK_FUNC(sub_83C27DBC);
PPC_FUNC_IMPL(__imp__sub_83C27DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DC0"))) PPC_WEAK_FUNC(sub_83C27DC0);
PPC_FUNC_IMPL(__imp__sub_83C27DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DCC"))) PPC_WEAK_FUNC(sub_83C27DCC);
PPC_FUNC_IMPL(__imp__sub_83C27DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DD0"))) PPC_WEAK_FUNC(sub_83C27DD0);
PPC_FUNC_IMPL(__imp__sub_83C27DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1864
	ctx.r3.s64 = ctx.r11.s64 + 1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DDC"))) PPC_WEAK_FUNC(sub_83C27DDC);
PPC_FUNC_IMPL(__imp__sub_83C27DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DE0"))) PPC_WEAK_FUNC(sub_83C27DE0);
PPC_FUNC_IMPL(__imp__sub_83C27DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1872
	ctx.r3.s64 = ctx.r11.s64 + 1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DEC"))) PPC_WEAK_FUNC(sub_83C27DEC);
PPC_FUNC_IMPL(__imp__sub_83C27DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27DF0"))) PPC_WEAK_FUNC(sub_83C27DF0);
PPC_FUNC_IMPL(__imp__sub_83C27DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27DFC"))) PPC_WEAK_FUNC(sub_83C27DFC);
PPC_FUNC_IMPL(__imp__sub_83C27DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27E00"))) PPC_WEAK_FUNC(sub_83C27E00);
PPC_FUNC_IMPL(__imp__sub_83C27E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1888
	ctx.r3.s64 = ctx.r11.s64 + 1888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27E0C"))) PPC_WEAK_FUNC(sub_83C27E0C);
PPC_FUNC_IMPL(__imp__sub_83C27E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27E10"))) PPC_WEAK_FUNC(sub_83C27E10);
PPC_FUNC_IMPL(__imp__sub_83C27E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1896
	ctx.r3.s64 = ctx.r11.s64 + 1896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27E1C"))) PPC_WEAK_FUNC(sub_83C27E1C);
PPC_FUNC_IMPL(__imp__sub_83C27E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27E20"))) PPC_WEAK_FUNC(sub_83C27E20);
PPC_FUNC_IMPL(__imp__sub_83C27E20) {
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
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// bl 0x83523120
	ctx.lr = 0x83C27E38;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,1904
	ctx.r3.s64 = ctx.r10.s64 + 1904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C27E44;
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

__attribute__((alias("__imp__sub_83C27E54"))) PPC_WEAK_FUNC(sub_83C27E54);
PPC_FUNC_IMPL(__imp__sub_83C27E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27E58"))) PPC_WEAK_FUNC(sub_83C27E58);
PPC_FUNC_IMPL(__imp__sub_83C27E58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9740
	ctx.r7.s64 = ctx.r8.s64 + -9740;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9740(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9740);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9740, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C27E80"))) PPC_WEAK_FUNC(sub_83C27E80);
PPC_FUNC_IMPL(__imp__sub_83C27E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1920
	ctx.r3.s64 = ctx.r11.s64 + 1920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27E8C"))) PPC_WEAK_FUNC(sub_83C27E8C);
PPC_FUNC_IMPL(__imp__sub_83C27E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27E90"))) PPC_WEAK_FUNC(sub_83C27E90);
PPC_FUNC_IMPL(__imp__sub_83C27E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27E9C"))) PPC_WEAK_FUNC(sub_83C27E9C);
PPC_FUNC_IMPL(__imp__sub_83C27E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27EA0"))) PPC_WEAK_FUNC(sub_83C27EA0);
PPC_FUNC_IMPL(__imp__sub_83C27EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1936
	ctx.r3.s64 = ctx.r11.s64 + 1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27EAC"))) PPC_WEAK_FUNC(sub_83C27EAC);
PPC_FUNC_IMPL(__imp__sub_83C27EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27EB0"))) PPC_WEAK_FUNC(sub_83C27EB0);
PPC_FUNC_IMPL(__imp__sub_83C27EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1944
	ctx.r3.s64 = ctx.r11.s64 + 1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27EBC"))) PPC_WEAK_FUNC(sub_83C27EBC);
PPC_FUNC_IMPL(__imp__sub_83C27EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27EC0"))) PPC_WEAK_FUNC(sub_83C27EC0);
PPC_FUNC_IMPL(__imp__sub_83C27EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27ECC"))) PPC_WEAK_FUNC(sub_83C27ECC);
PPC_FUNC_IMPL(__imp__sub_83C27ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27ED0"))) PPC_WEAK_FUNC(sub_83C27ED0);
PPC_FUNC_IMPL(__imp__sub_83C27ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27EDC"))) PPC_WEAK_FUNC(sub_83C27EDC);
PPC_FUNC_IMPL(__imp__sub_83C27EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27EE0"))) PPC_WEAK_FUNC(sub_83C27EE0);
PPC_FUNC_IMPL(__imp__sub_83C27EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1968
	ctx.r3.s64 = ctx.r11.s64 + 1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27EEC"))) PPC_WEAK_FUNC(sub_83C27EEC);
PPC_FUNC_IMPL(__imp__sub_83C27EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27EF0"))) PPC_WEAK_FUNC(sub_83C27EF0);
PPC_FUNC_IMPL(__imp__sub_83C27EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1976
	ctx.r3.s64 = ctx.r11.s64 + 1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27EFC"))) PPC_WEAK_FUNC(sub_83C27EFC);
PPC_FUNC_IMPL(__imp__sub_83C27EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F00"))) PPC_WEAK_FUNC(sub_83C27F00);
PPC_FUNC_IMPL(__imp__sub_83C27F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1984
	ctx.r3.s64 = ctx.r11.s64 + 1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F0C"))) PPC_WEAK_FUNC(sub_83C27F0C);
PPC_FUNC_IMPL(__imp__sub_83C27F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F10"))) PPC_WEAK_FUNC(sub_83C27F10);
PPC_FUNC_IMPL(__imp__sub_83C27F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F1C"))) PPC_WEAK_FUNC(sub_83C27F1C);
PPC_FUNC_IMPL(__imp__sub_83C27F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F20"))) PPC_WEAK_FUNC(sub_83C27F20);
PPC_FUNC_IMPL(__imp__sub_83C27F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F2C"))) PPC_WEAK_FUNC(sub_83C27F2C);
PPC_FUNC_IMPL(__imp__sub_83C27F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F30"))) PPC_WEAK_FUNC(sub_83C27F30);
PPC_FUNC_IMPL(__imp__sub_83C27F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2008
	ctx.r3.s64 = ctx.r11.s64 + 2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F3C"))) PPC_WEAK_FUNC(sub_83C27F3C);
PPC_FUNC_IMPL(__imp__sub_83C27F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F40"))) PPC_WEAK_FUNC(sub_83C27F40);
PPC_FUNC_IMPL(__imp__sub_83C27F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F4C"))) PPC_WEAK_FUNC(sub_83C27F4C);
PPC_FUNC_IMPL(__imp__sub_83C27F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F50"))) PPC_WEAK_FUNC(sub_83C27F50);
PPC_FUNC_IMPL(__imp__sub_83C27F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F5C"))) PPC_WEAK_FUNC(sub_83C27F5C);
PPC_FUNC_IMPL(__imp__sub_83C27F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F60"))) PPC_WEAK_FUNC(sub_83C27F60);
PPC_FUNC_IMPL(__imp__sub_83C27F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2032
	ctx.r3.s64 = ctx.r11.s64 + 2032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F6C"))) PPC_WEAK_FUNC(sub_83C27F6C);
PPC_FUNC_IMPL(__imp__sub_83C27F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F70"))) PPC_WEAK_FUNC(sub_83C27F70);
PPC_FUNC_IMPL(__imp__sub_83C27F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2040
	ctx.r3.s64 = ctx.r11.s64 + 2040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F7C"))) PPC_WEAK_FUNC(sub_83C27F7C);
PPC_FUNC_IMPL(__imp__sub_83C27F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F80"))) PPC_WEAK_FUNC(sub_83C27F80);
PPC_FUNC_IMPL(__imp__sub_83C27F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F8C"))) PPC_WEAK_FUNC(sub_83C27F8C);
PPC_FUNC_IMPL(__imp__sub_83C27F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27F90"))) PPC_WEAK_FUNC(sub_83C27F90);
PPC_FUNC_IMPL(__imp__sub_83C27F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2056
	ctx.r3.s64 = ctx.r11.s64 + 2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27F9C"))) PPC_WEAK_FUNC(sub_83C27F9C);
PPC_FUNC_IMPL(__imp__sub_83C27F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C27FA0"))) PPC_WEAK_FUNC(sub_83C27FA0);
PPC_FUNC_IMPL(__imp__sub_83C27FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C27FAC"))) PPC_WEAK_FUNC(sub_83C27FAC);
PPC_FUNC_IMPL(__imp__sub_83C27FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

