#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C675E0"))) PPC_WEAK_FUNC(sub_83C675E0);
PPC_FUNC_IMPL(__imp__sub_83C675E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675EC"))) PPC_WEAK_FUNC(sub_83C675EC);
PPC_FUNC_IMPL(__imp__sub_83C675EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C675F0"))) PPC_WEAK_FUNC(sub_83C675F0);
PPC_FUNC_IMPL(__imp__sub_83C675F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675FC"))) PPC_WEAK_FUNC(sub_83C675FC);
PPC_FUNC_IMPL(__imp__sub_83C675FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67600"))) PPC_WEAK_FUNC(sub_83C67600);
PPC_FUNC_IMPL(__imp__sub_83C67600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6760C"))) PPC_WEAK_FUNC(sub_83C6760C);
PPC_FUNC_IMPL(__imp__sub_83C6760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67610"))) PPC_WEAK_FUNC(sub_83C67610);
PPC_FUNC_IMPL(__imp__sub_83C67610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6761C"))) PPC_WEAK_FUNC(sub_83C6761C);
PPC_FUNC_IMPL(__imp__sub_83C6761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67620"))) PPC_WEAK_FUNC(sub_83C67620);
PPC_FUNC_IMPL(__imp__sub_83C67620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6762C"))) PPC_WEAK_FUNC(sub_83C6762C);
PPC_FUNC_IMPL(__imp__sub_83C6762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67630"))) PPC_WEAK_FUNC(sub_83C67630);
PPC_FUNC_IMPL(__imp__sub_83C67630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6763C"))) PPC_WEAK_FUNC(sub_83C6763C);
PPC_FUNC_IMPL(__imp__sub_83C6763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67640"))) PPC_WEAK_FUNC(sub_83C67640);
PPC_FUNC_IMPL(__imp__sub_83C67640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6764C"))) PPC_WEAK_FUNC(sub_83C6764C);
PPC_FUNC_IMPL(__imp__sub_83C6764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67650"))) PPC_WEAK_FUNC(sub_83C67650);
PPC_FUNC_IMPL(__imp__sub_83C67650) {
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
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// bl 0x83523120
	ctx.lr = 0x83C67668;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20080
	ctx.r3.s64 = ctx.r10.s64 + 20080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67674;
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

__attribute__((alias("__imp__sub_83C67684"))) PPC_WEAK_FUNC(sub_83C67684);
PPC_FUNC_IMPL(__imp__sub_83C67684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67688"))) PPC_WEAK_FUNC(sub_83C67688);
PPC_FUNC_IMPL(__imp__sub_83C67688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23936
	ctx.r7.s64 = ctx.r8.s64 + 23936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C676B0"))) PPC_WEAK_FUNC(sub_83C676B0);
PPC_FUNC_IMPL(__imp__sub_83C676B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29088
	ctx.r6.s64 = ctx.r7.s64 + -29088;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23936);
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
	// std r9,-29088(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29088, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C676F8"))) PPC_WEAK_FUNC(sub_83C676F8);
PPC_FUNC_IMPL(__imp__sub_83C676F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67704"))) PPC_WEAK_FUNC(sub_83C67704);
PPC_FUNC_IMPL(__imp__sub_83C67704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67708"))) PPC_WEAK_FUNC(sub_83C67708);
PPC_FUNC_IMPL(__imp__sub_83C67708) {
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
	// addi r3,r11,23944
	ctx.r3.s64 = ctx.r11.s64 + 23944;
	// bl 0x8259af80
	ctx.lr = 0x83C67720;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20112
	ctx.r3.s64 = ctx.r10.s64 + 20112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6772C;
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

__attribute__((alias("__imp__sub_83C6773C"))) PPC_WEAK_FUNC(sub_83C6773C);
PPC_FUNC_IMPL(__imp__sub_83C6773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67740"))) PPC_WEAK_FUNC(sub_83C67740);
PPC_FUNC_IMPL(__imp__sub_83C67740) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23924
	ctx.r11.s64 = ctx.r8.s64 + 23924;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29112);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20104
	ctx.r3.s64 = ctx.r6.s64 + 20104;
	// stw r10,23924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67770"))) PPC_WEAK_FUNC(sub_83C67770);
PPC_FUNC_IMPL(__imp__sub_83C67770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20120
	ctx.r3.s64 = ctx.r11.s64 + 20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6777C"))) PPC_WEAK_FUNC(sub_83C6777C);
PPC_FUNC_IMPL(__imp__sub_83C6777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67780"))) PPC_WEAK_FUNC(sub_83C67780);
PPC_FUNC_IMPL(__imp__sub_83C67780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20128
	ctx.r3.s64 = ctx.r11.s64 + 20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6778C"))) PPC_WEAK_FUNC(sub_83C6778C);
PPC_FUNC_IMPL(__imp__sub_83C6778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67790"))) PPC_WEAK_FUNC(sub_83C67790);
PPC_FUNC_IMPL(__imp__sub_83C67790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20136
	ctx.r3.s64 = ctx.r11.s64 + 20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6779C"))) PPC_WEAK_FUNC(sub_83C6779C);
PPC_FUNC_IMPL(__imp__sub_83C6779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677A0"))) PPC_WEAK_FUNC(sub_83C677A0);
PPC_FUNC_IMPL(__imp__sub_83C677A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677AC"))) PPC_WEAK_FUNC(sub_83C677AC);
PPC_FUNC_IMPL(__imp__sub_83C677AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677B0"))) PPC_WEAK_FUNC(sub_83C677B0);
PPC_FUNC_IMPL(__imp__sub_83C677B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20152
	ctx.r3.s64 = ctx.r11.s64 + 20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677BC"))) PPC_WEAK_FUNC(sub_83C677BC);
PPC_FUNC_IMPL(__imp__sub_83C677BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677C0"))) PPC_WEAK_FUNC(sub_83C677C0);
PPC_FUNC_IMPL(__imp__sub_83C677C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20160
	ctx.r3.s64 = ctx.r11.s64 + 20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677CC"))) PPC_WEAK_FUNC(sub_83C677CC);
PPC_FUNC_IMPL(__imp__sub_83C677CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677D0"))) PPC_WEAK_FUNC(sub_83C677D0);
PPC_FUNC_IMPL(__imp__sub_83C677D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677DC"))) PPC_WEAK_FUNC(sub_83C677DC);
PPC_FUNC_IMPL(__imp__sub_83C677DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677E0"))) PPC_WEAK_FUNC(sub_83C677E0);
PPC_FUNC_IMPL(__imp__sub_83C677E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20176
	ctx.r3.s64 = ctx.r11.s64 + 20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677EC"))) PPC_WEAK_FUNC(sub_83C677EC);
PPC_FUNC_IMPL(__imp__sub_83C677EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C677F0"))) PPC_WEAK_FUNC(sub_83C677F0);
PPC_FUNC_IMPL(__imp__sub_83C677F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C677FC"))) PPC_WEAK_FUNC(sub_83C677FC);
PPC_FUNC_IMPL(__imp__sub_83C677FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67800"))) PPC_WEAK_FUNC(sub_83C67800);
PPC_FUNC_IMPL(__imp__sub_83C67800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20192
	ctx.r3.s64 = ctx.r11.s64 + 20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6780C"))) PPC_WEAK_FUNC(sub_83C6780C);
PPC_FUNC_IMPL(__imp__sub_83C6780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67810"))) PPC_WEAK_FUNC(sub_83C67810);
PPC_FUNC_IMPL(__imp__sub_83C67810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6781C"))) PPC_WEAK_FUNC(sub_83C6781C);
PPC_FUNC_IMPL(__imp__sub_83C6781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67820"))) PPC_WEAK_FUNC(sub_83C67820);
PPC_FUNC_IMPL(__imp__sub_83C67820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6782C"))) PPC_WEAK_FUNC(sub_83C6782C);
PPC_FUNC_IMPL(__imp__sub_83C6782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67830"))) PPC_WEAK_FUNC(sub_83C67830);
PPC_FUNC_IMPL(__imp__sub_83C67830) {
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
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// bl 0x83523120
	ctx.lr = 0x83C67848;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20216
	ctx.r3.s64 = ctx.r10.s64 + 20216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67854;
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

__attribute__((alias("__imp__sub_83C67864"))) PPC_WEAK_FUNC(sub_83C67864);
PPC_FUNC_IMPL(__imp__sub_83C67864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67868"))) PPC_WEAK_FUNC(sub_83C67868);
PPC_FUNC_IMPL(__imp__sub_83C67868) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24304
	ctx.r7.s64 = ctx.r8.s64 + 24304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67890"))) PPC_WEAK_FUNC(sub_83C67890);
PPC_FUNC_IMPL(__imp__sub_83C67890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28960
	ctx.r6.s64 = ctx.r7.s64 + -28960;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29032(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29032);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24304);
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
	// std r9,-28960(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28960, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C678D8"))) PPC_WEAK_FUNC(sub_83C678D8);
PPC_FUNC_IMPL(__imp__sub_83C678D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C678E4"))) PPC_WEAK_FUNC(sub_83C678E4);
PPC_FUNC_IMPL(__imp__sub_83C678E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C678E8"))) PPC_WEAK_FUNC(sub_83C678E8);
PPC_FUNC_IMPL(__imp__sub_83C678E8) {
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
	// addi r3,r11,24312
	ctx.r3.s64 = ctx.r11.s64 + 24312;
	// bl 0x8259af80
	ctx.lr = 0x83C67900;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20248
	ctx.r3.s64 = ctx.r10.s64 + 20248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6790C;
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

__attribute__((alias("__imp__sub_83C6791C"))) PPC_WEAK_FUNC(sub_83C6791C);
PPC_FUNC_IMPL(__imp__sub_83C6791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67920"))) PPC_WEAK_FUNC(sub_83C67920);
PPC_FUNC_IMPL(__imp__sub_83C67920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24292
	ctx.r11.s64 = ctx.r8.s64 + 24292;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28984);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20240
	ctx.r3.s64 = ctx.r6.s64 + 20240;
	// stw r10,24292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67950"))) PPC_WEAK_FUNC(sub_83C67950);
PPC_FUNC_IMPL(__imp__sub_83C67950) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,19116
	ctx.r4.s64 = ctx.r11.s64 + 19116;
	// addi r3,r10,-28936
	ctx.r3.s64 = ctx.r10.s64 + -28936;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C67974;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,20256
	ctx.r3.s64 = ctx.r9.s64 + 20256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67980;
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

__attribute__((alias("__imp__sub_83C67990"))) PPC_WEAK_FUNC(sub_83C67990);
PPC_FUNC_IMPL(__imp__sub_83C67990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6799C"))) PPC_WEAK_FUNC(sub_83C6799C);
PPC_FUNC_IMPL(__imp__sub_83C6799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679A0"))) PPC_WEAK_FUNC(sub_83C679A0);
PPC_FUNC_IMPL(__imp__sub_83C679A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679AC"))) PPC_WEAK_FUNC(sub_83C679AC);
PPC_FUNC_IMPL(__imp__sub_83C679AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679B0"))) PPC_WEAK_FUNC(sub_83C679B0);
PPC_FUNC_IMPL(__imp__sub_83C679B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20376
	ctx.r3.s64 = ctx.r11.s64 + 20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679BC"))) PPC_WEAK_FUNC(sub_83C679BC);
PPC_FUNC_IMPL(__imp__sub_83C679BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679C0"))) PPC_WEAK_FUNC(sub_83C679C0);
PPC_FUNC_IMPL(__imp__sub_83C679C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20384
	ctx.r3.s64 = ctx.r11.s64 + 20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679CC"))) PPC_WEAK_FUNC(sub_83C679CC);
PPC_FUNC_IMPL(__imp__sub_83C679CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679D0"))) PPC_WEAK_FUNC(sub_83C679D0);
PPC_FUNC_IMPL(__imp__sub_83C679D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679DC"))) PPC_WEAK_FUNC(sub_83C679DC);
PPC_FUNC_IMPL(__imp__sub_83C679DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679E0"))) PPC_WEAK_FUNC(sub_83C679E0);
PPC_FUNC_IMPL(__imp__sub_83C679E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20400
	ctx.r3.s64 = ctx.r11.s64 + 20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679EC"))) PPC_WEAK_FUNC(sub_83C679EC);
PPC_FUNC_IMPL(__imp__sub_83C679EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C679F0"))) PPC_WEAK_FUNC(sub_83C679F0);
PPC_FUNC_IMPL(__imp__sub_83C679F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20408
	ctx.r3.s64 = ctx.r11.s64 + 20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C679FC"))) PPC_WEAK_FUNC(sub_83C679FC);
PPC_FUNC_IMPL(__imp__sub_83C679FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A00"))) PPC_WEAK_FUNC(sub_83C67A00);
PPC_FUNC_IMPL(__imp__sub_83C67A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20416
	ctx.r3.s64 = ctx.r11.s64 + 20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67A0C"))) PPC_WEAK_FUNC(sub_83C67A0C);
PPC_FUNC_IMPL(__imp__sub_83C67A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A10"))) PPC_WEAK_FUNC(sub_83C67A10);
PPC_FUNC_IMPL(__imp__sub_83C67A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20424
	ctx.r3.s64 = ctx.r11.s64 + 20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67A1C"))) PPC_WEAK_FUNC(sub_83C67A1C);
PPC_FUNC_IMPL(__imp__sub_83C67A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A20"))) PPC_WEAK_FUNC(sub_83C67A20);
PPC_FUNC_IMPL(__imp__sub_83C67A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67A2C"))) PPC_WEAK_FUNC(sub_83C67A2C);
PPC_FUNC_IMPL(__imp__sub_83C67A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A30"))) PPC_WEAK_FUNC(sub_83C67A30);
PPC_FUNC_IMPL(__imp__sub_83C67A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67A3C"))) PPC_WEAK_FUNC(sub_83C67A3C);
PPC_FUNC_IMPL(__imp__sub_83C67A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A40"))) PPC_WEAK_FUNC(sub_83C67A40);
PPC_FUNC_IMPL(__imp__sub_83C67A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67A4C"))) PPC_WEAK_FUNC(sub_83C67A4C);
PPC_FUNC_IMPL(__imp__sub_83C67A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A50"))) PPC_WEAK_FUNC(sub_83C67A50);
PPC_FUNC_IMPL(__imp__sub_83C67A50) {
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
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// bl 0x83523120
	ctx.lr = 0x83C67A68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20456
	ctx.r3.s64 = ctx.r10.s64 + 20456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67A74;
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

__attribute__((alias("__imp__sub_83C67A84"))) PPC_WEAK_FUNC(sub_83C67A84);
PPC_FUNC_IMPL(__imp__sub_83C67A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67A88"))) PPC_WEAK_FUNC(sub_83C67A88);
PPC_FUNC_IMPL(__imp__sub_83C67A88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24672
	ctx.r7.s64 = ctx.r8.s64 + 24672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67AB0"))) PPC_WEAK_FUNC(sub_83C67AB0);
PPC_FUNC_IMPL(__imp__sub_83C67AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28804
	ctx.r6.s64 = ctx.r7.s64 + -28804;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28876(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28876);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24672);
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
	// std r9,-28804(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67AF8"))) PPC_WEAK_FUNC(sub_83C67AF8);
PPC_FUNC_IMPL(__imp__sub_83C67AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67B04"))) PPC_WEAK_FUNC(sub_83C67B04);
PPC_FUNC_IMPL(__imp__sub_83C67B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67B08"))) PPC_WEAK_FUNC(sub_83C67B08);
PPC_FUNC_IMPL(__imp__sub_83C67B08) {
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
	// addi r3,r11,24680
	ctx.r3.s64 = ctx.r11.s64 + 24680;
	// bl 0x8259af80
	ctx.lr = 0x83C67B20;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20488
	ctx.r3.s64 = ctx.r10.s64 + 20488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67B2C;
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

__attribute__((alias("__imp__sub_83C67B3C"))) PPC_WEAK_FUNC(sub_83C67B3C);
PPC_FUNC_IMPL(__imp__sub_83C67B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67B40"))) PPC_WEAK_FUNC(sub_83C67B40);
PPC_FUNC_IMPL(__imp__sub_83C67B40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24660
	ctx.r11.s64 = ctx.r8.s64 + 24660;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28828);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20480
	ctx.r3.s64 = ctx.r6.s64 + 20480;
	// stw r10,24660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67B70"))) PPC_WEAK_FUNC(sub_83C67B70);
PPC_FUNC_IMPL(__imp__sub_83C67B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67B7C"))) PPC_WEAK_FUNC(sub_83C67B7C);
PPC_FUNC_IMPL(__imp__sub_83C67B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67B80"))) PPC_WEAK_FUNC(sub_83C67B80);
PPC_FUNC_IMPL(__imp__sub_83C67B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67B8C"))) PPC_WEAK_FUNC(sub_83C67B8C);
PPC_FUNC_IMPL(__imp__sub_83C67B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67B90"))) PPC_WEAK_FUNC(sub_83C67B90);
PPC_FUNC_IMPL(__imp__sub_83C67B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67B9C"))) PPC_WEAK_FUNC(sub_83C67B9C);
PPC_FUNC_IMPL(__imp__sub_83C67B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BA0"))) PPC_WEAK_FUNC(sub_83C67BA0);
PPC_FUNC_IMPL(__imp__sub_83C67BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BAC"))) PPC_WEAK_FUNC(sub_83C67BAC);
PPC_FUNC_IMPL(__imp__sub_83C67BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BB0"))) PPC_WEAK_FUNC(sub_83C67BB0);
PPC_FUNC_IMPL(__imp__sub_83C67BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BBC"))) PPC_WEAK_FUNC(sub_83C67BBC);
PPC_FUNC_IMPL(__imp__sub_83C67BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BC0"))) PPC_WEAK_FUNC(sub_83C67BC0);
PPC_FUNC_IMPL(__imp__sub_83C67BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20536
	ctx.r3.s64 = ctx.r11.s64 + 20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BCC"))) PPC_WEAK_FUNC(sub_83C67BCC);
PPC_FUNC_IMPL(__imp__sub_83C67BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BD0"))) PPC_WEAK_FUNC(sub_83C67BD0);
PPC_FUNC_IMPL(__imp__sub_83C67BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BDC"))) PPC_WEAK_FUNC(sub_83C67BDC);
PPC_FUNC_IMPL(__imp__sub_83C67BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BE0"))) PPC_WEAK_FUNC(sub_83C67BE0);
PPC_FUNC_IMPL(__imp__sub_83C67BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BEC"))) PPC_WEAK_FUNC(sub_83C67BEC);
PPC_FUNC_IMPL(__imp__sub_83C67BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67BF0"))) PPC_WEAK_FUNC(sub_83C67BF0);
PPC_FUNC_IMPL(__imp__sub_83C67BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67BFC"))) PPC_WEAK_FUNC(sub_83C67BFC);
PPC_FUNC_IMPL(__imp__sub_83C67BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67C00"))) PPC_WEAK_FUNC(sub_83C67C00);
PPC_FUNC_IMPL(__imp__sub_83C67C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20568
	ctx.r3.s64 = ctx.r11.s64 + 20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67C0C"))) PPC_WEAK_FUNC(sub_83C67C0C);
PPC_FUNC_IMPL(__imp__sub_83C67C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67C10"))) PPC_WEAK_FUNC(sub_83C67C10);
PPC_FUNC_IMPL(__imp__sub_83C67C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67C1C"))) PPC_WEAK_FUNC(sub_83C67C1C);
PPC_FUNC_IMPL(__imp__sub_83C67C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67C20"))) PPC_WEAK_FUNC(sub_83C67C20);
PPC_FUNC_IMPL(__imp__sub_83C67C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67C2C"))) PPC_WEAK_FUNC(sub_83C67C2C);
PPC_FUNC_IMPL(__imp__sub_83C67C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67C30"))) PPC_WEAK_FUNC(sub_83C67C30);
PPC_FUNC_IMPL(__imp__sub_83C67C30) {
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
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x83523120
	ctx.lr = 0x83C67C48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20592
	ctx.r3.s64 = ctx.r10.s64 + 20592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67C54;
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

__attribute__((alias("__imp__sub_83C67C64"))) PPC_WEAK_FUNC(sub_83C67C64);
PPC_FUNC_IMPL(__imp__sub_83C67C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67C68"))) PPC_WEAK_FUNC(sub_83C67C68);
PPC_FUNC_IMPL(__imp__sub_83C67C68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25040
	ctx.r7.s64 = ctx.r8.s64 + 25040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67C90"))) PPC_WEAK_FUNC(sub_83C67C90);
PPC_FUNC_IMPL(__imp__sub_83C67C90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28676
	ctx.r6.s64 = ctx.r7.s64 + -28676;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25040);
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
	// std r9,-28676(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67CD8"))) PPC_WEAK_FUNC(sub_83C67CD8);
PPC_FUNC_IMPL(__imp__sub_83C67CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67CE4"))) PPC_WEAK_FUNC(sub_83C67CE4);
PPC_FUNC_IMPL(__imp__sub_83C67CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67CE8"))) PPC_WEAK_FUNC(sub_83C67CE8);
PPC_FUNC_IMPL(__imp__sub_83C67CE8) {
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
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// bl 0x8259af80
	ctx.lr = 0x83C67D00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20624
	ctx.r3.s64 = ctx.r10.s64 + 20624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67D0C;
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

__attribute__((alias("__imp__sub_83C67D1C"))) PPC_WEAK_FUNC(sub_83C67D1C);
PPC_FUNC_IMPL(__imp__sub_83C67D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67D20"))) PPC_WEAK_FUNC(sub_83C67D20);
PPC_FUNC_IMPL(__imp__sub_83C67D20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25028
	ctx.r11.s64 = ctx.r8.s64 + 25028;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20616
	ctx.r3.s64 = ctx.r6.s64 + 20616;
	// stw r10,25028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D50"))) PPC_WEAK_FUNC(sub_83C67D50);
PPC_FUNC_IMPL(__imp__sub_83C67D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D5C"))) PPC_WEAK_FUNC(sub_83C67D5C);
PPC_FUNC_IMPL(__imp__sub_83C67D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67D60"))) PPC_WEAK_FUNC(sub_83C67D60);
PPC_FUNC_IMPL(__imp__sub_83C67D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20640
	ctx.r3.s64 = ctx.r11.s64 + 20640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D6C"))) PPC_WEAK_FUNC(sub_83C67D6C);
PPC_FUNC_IMPL(__imp__sub_83C67D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67D70"))) PPC_WEAK_FUNC(sub_83C67D70);
PPC_FUNC_IMPL(__imp__sub_83C67D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20648
	ctx.r3.s64 = ctx.r11.s64 + 20648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D7C"))) PPC_WEAK_FUNC(sub_83C67D7C);
PPC_FUNC_IMPL(__imp__sub_83C67D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67D80"))) PPC_WEAK_FUNC(sub_83C67D80);
PPC_FUNC_IMPL(__imp__sub_83C67D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D8C"))) PPC_WEAK_FUNC(sub_83C67D8C);
PPC_FUNC_IMPL(__imp__sub_83C67D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67D90"))) PPC_WEAK_FUNC(sub_83C67D90);
PPC_FUNC_IMPL(__imp__sub_83C67D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20664
	ctx.r3.s64 = ctx.r11.s64 + 20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67D9C"))) PPC_WEAK_FUNC(sub_83C67D9C);
PPC_FUNC_IMPL(__imp__sub_83C67D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DA0"))) PPC_WEAK_FUNC(sub_83C67DA0);
PPC_FUNC_IMPL(__imp__sub_83C67DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DAC"))) PPC_WEAK_FUNC(sub_83C67DAC);
PPC_FUNC_IMPL(__imp__sub_83C67DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DB0"))) PPC_WEAK_FUNC(sub_83C67DB0);
PPC_FUNC_IMPL(__imp__sub_83C67DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20680
	ctx.r3.s64 = ctx.r11.s64 + 20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DBC"))) PPC_WEAK_FUNC(sub_83C67DBC);
PPC_FUNC_IMPL(__imp__sub_83C67DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DC0"))) PPC_WEAK_FUNC(sub_83C67DC0);
PPC_FUNC_IMPL(__imp__sub_83C67DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DCC"))) PPC_WEAK_FUNC(sub_83C67DCC);
PPC_FUNC_IMPL(__imp__sub_83C67DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DD0"))) PPC_WEAK_FUNC(sub_83C67DD0);
PPC_FUNC_IMPL(__imp__sub_83C67DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DDC"))) PPC_WEAK_FUNC(sub_83C67DDC);
PPC_FUNC_IMPL(__imp__sub_83C67DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DE0"))) PPC_WEAK_FUNC(sub_83C67DE0);
PPC_FUNC_IMPL(__imp__sub_83C67DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DEC"))) PPC_WEAK_FUNC(sub_83C67DEC);
PPC_FUNC_IMPL(__imp__sub_83C67DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67DF0"))) PPC_WEAK_FUNC(sub_83C67DF0);
PPC_FUNC_IMPL(__imp__sub_83C67DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67DFC"))) PPC_WEAK_FUNC(sub_83C67DFC);
PPC_FUNC_IMPL(__imp__sub_83C67DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67E00"))) PPC_WEAK_FUNC(sub_83C67E00);
PPC_FUNC_IMPL(__imp__sub_83C67E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67E0C"))) PPC_WEAK_FUNC(sub_83C67E0C);
PPC_FUNC_IMPL(__imp__sub_83C67E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67E10"))) PPC_WEAK_FUNC(sub_83C67E10);
PPC_FUNC_IMPL(__imp__sub_83C67E10) {
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
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// bl 0x83523120
	ctx.lr = 0x83C67E28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20728
	ctx.r3.s64 = ctx.r10.s64 + 20728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67E34;
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

__attribute__((alias("__imp__sub_83C67E44"))) PPC_WEAK_FUNC(sub_83C67E44);
PPC_FUNC_IMPL(__imp__sub_83C67E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67E48"))) PPC_WEAK_FUNC(sub_83C67E48);
PPC_FUNC_IMPL(__imp__sub_83C67E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25408
	ctx.r7.s64 = ctx.r8.s64 + 25408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67E70"))) PPC_WEAK_FUNC(sub_83C67E70);
PPC_FUNC_IMPL(__imp__sub_83C67E70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28548
	ctx.r6.s64 = ctx.r7.s64 + -28548;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25408);
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
	// std r9,-28548(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67EB8"))) PPC_WEAK_FUNC(sub_83C67EB8);
PPC_FUNC_IMPL(__imp__sub_83C67EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67EC4"))) PPC_WEAK_FUNC(sub_83C67EC4);
PPC_FUNC_IMPL(__imp__sub_83C67EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67EC8"))) PPC_WEAK_FUNC(sub_83C67EC8);
PPC_FUNC_IMPL(__imp__sub_83C67EC8) {
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
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// bl 0x8259af80
	ctx.lr = 0x83C67EE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20760
	ctx.r3.s64 = ctx.r10.s64 + 20760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67EEC;
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

__attribute__((alias("__imp__sub_83C67EFC"))) PPC_WEAK_FUNC(sub_83C67EFC);
PPC_FUNC_IMPL(__imp__sub_83C67EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F00"))) PPC_WEAK_FUNC(sub_83C67F00);
PPC_FUNC_IMPL(__imp__sub_83C67F00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25396
	ctx.r11.s64 = ctx.r8.s64 + 25396;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20752
	ctx.r3.s64 = ctx.r6.s64 + 20752;
	// stw r10,25396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F30"))) PPC_WEAK_FUNC(sub_83C67F30);
PPC_FUNC_IMPL(__imp__sub_83C67F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F3C"))) PPC_WEAK_FUNC(sub_83C67F3C);
PPC_FUNC_IMPL(__imp__sub_83C67F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F40"))) PPC_WEAK_FUNC(sub_83C67F40);
PPC_FUNC_IMPL(__imp__sub_83C67F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F4C"))) PPC_WEAK_FUNC(sub_83C67F4C);
PPC_FUNC_IMPL(__imp__sub_83C67F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F50"))) PPC_WEAK_FUNC(sub_83C67F50);
PPC_FUNC_IMPL(__imp__sub_83C67F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F5C"))) PPC_WEAK_FUNC(sub_83C67F5C);
PPC_FUNC_IMPL(__imp__sub_83C67F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F60"))) PPC_WEAK_FUNC(sub_83C67F60);
PPC_FUNC_IMPL(__imp__sub_83C67F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F6C"))) PPC_WEAK_FUNC(sub_83C67F6C);
PPC_FUNC_IMPL(__imp__sub_83C67F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F70"))) PPC_WEAK_FUNC(sub_83C67F70);
PPC_FUNC_IMPL(__imp__sub_83C67F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F7C"))) PPC_WEAK_FUNC(sub_83C67F7C);
PPC_FUNC_IMPL(__imp__sub_83C67F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F80"))) PPC_WEAK_FUNC(sub_83C67F80);
PPC_FUNC_IMPL(__imp__sub_83C67F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F8C"))) PPC_WEAK_FUNC(sub_83C67F8C);
PPC_FUNC_IMPL(__imp__sub_83C67F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67F90"))) PPC_WEAK_FUNC(sub_83C67F90);
PPC_FUNC_IMPL(__imp__sub_83C67F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67F9C"))) PPC_WEAK_FUNC(sub_83C67F9C);
PPC_FUNC_IMPL(__imp__sub_83C67F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FA0"))) PPC_WEAK_FUNC(sub_83C67FA0);
PPC_FUNC_IMPL(__imp__sub_83C67FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67FAC"))) PPC_WEAK_FUNC(sub_83C67FAC);
PPC_FUNC_IMPL(__imp__sub_83C67FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FB0"))) PPC_WEAK_FUNC(sub_83C67FB0);
PPC_FUNC_IMPL(__imp__sub_83C67FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67FBC"))) PPC_WEAK_FUNC(sub_83C67FBC);
PPC_FUNC_IMPL(__imp__sub_83C67FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FC0"))) PPC_WEAK_FUNC(sub_83C67FC0);
PPC_FUNC_IMPL(__imp__sub_83C67FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67FCC"))) PPC_WEAK_FUNC(sub_83C67FCC);
PPC_FUNC_IMPL(__imp__sub_83C67FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FD0"))) PPC_WEAK_FUNC(sub_83C67FD0);
PPC_FUNC_IMPL(__imp__sub_83C67FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20848
	ctx.r3.s64 = ctx.r11.s64 + 20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67FDC"))) PPC_WEAK_FUNC(sub_83C67FDC);
PPC_FUNC_IMPL(__imp__sub_83C67FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FE0"))) PPC_WEAK_FUNC(sub_83C67FE0);
PPC_FUNC_IMPL(__imp__sub_83C67FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67FEC"))) PPC_WEAK_FUNC(sub_83C67FEC);
PPC_FUNC_IMPL(__imp__sub_83C67FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67FF0"))) PPC_WEAK_FUNC(sub_83C67FF0);
PPC_FUNC_IMPL(__imp__sub_83C67FF0) {
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
	// addi r3,r11,25760
	ctx.r3.s64 = ctx.r11.s64 + 25760;
	// bl 0x83523120
	ctx.lr = 0x83C68008;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20864
	ctx.r3.s64 = ctx.r10.s64 + 20864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C68014;
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

__attribute__((alias("__imp__sub_83C68024"))) PPC_WEAK_FUNC(sub_83C68024);
PPC_FUNC_IMPL(__imp__sub_83C68024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68028"))) PPC_WEAK_FUNC(sub_83C68028);
PPC_FUNC_IMPL(__imp__sub_83C68028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25776
	ctx.r7.s64 = ctx.r8.s64 + 25776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68050"))) PPC_WEAK_FUNC(sub_83C68050);
PPC_FUNC_IMPL(__imp__sub_83C68050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28420
	ctx.r6.s64 = ctx.r7.s64 + -28420;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25776);
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
	// std r9,-28420(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68098"))) PPC_WEAK_FUNC(sub_83C68098);
PPC_FUNC_IMPL(__imp__sub_83C68098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C680A4"))) PPC_WEAK_FUNC(sub_83C680A4);
PPC_FUNC_IMPL(__imp__sub_83C680A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C680A8"))) PPC_WEAK_FUNC(sub_83C680A8);
PPC_FUNC_IMPL(__imp__sub_83C680A8) {
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
	// addi r3,r11,25784
	ctx.r3.s64 = ctx.r11.s64 + 25784;
	// bl 0x8259af80
	ctx.lr = 0x83C680C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,20896
	ctx.r3.s64 = ctx.r10.s64 + 20896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C680CC;
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

__attribute__((alias("__imp__sub_83C680DC"))) PPC_WEAK_FUNC(sub_83C680DC);
PPC_FUNC_IMPL(__imp__sub_83C680DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C680E0"))) PPC_WEAK_FUNC(sub_83C680E0);
PPC_FUNC_IMPL(__imp__sub_83C680E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25764
	ctx.r11.s64 = ctx.r8.s64 + 25764;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20888
	ctx.r3.s64 = ctx.r6.s64 + 20888;
	// stw r10,25764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C68110"))) PPC_WEAK_FUNC(sub_83C68110);
PPC_FUNC_IMPL(__imp__sub_83C68110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6811C"))) PPC_WEAK_FUNC(sub_83C6811C);
PPC_FUNC_IMPL(__imp__sub_83C6811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68120"))) PPC_WEAK_FUNC(sub_83C68120);
PPC_FUNC_IMPL(__imp__sub_83C68120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6812C"))) PPC_WEAK_FUNC(sub_83C6812C);
PPC_FUNC_IMPL(__imp__sub_83C6812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68130"))) PPC_WEAK_FUNC(sub_83C68130);
PPC_FUNC_IMPL(__imp__sub_83C68130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6813C"))) PPC_WEAK_FUNC(sub_83C6813C);
PPC_FUNC_IMPL(__imp__sub_83C6813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68140"))) PPC_WEAK_FUNC(sub_83C68140);
PPC_FUNC_IMPL(__imp__sub_83C68140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6814C"))) PPC_WEAK_FUNC(sub_83C6814C);
PPC_FUNC_IMPL(__imp__sub_83C6814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68150"))) PPC_WEAK_FUNC(sub_83C68150);
PPC_FUNC_IMPL(__imp__sub_83C68150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6815C"))) PPC_WEAK_FUNC(sub_83C6815C);
PPC_FUNC_IMPL(__imp__sub_83C6815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68160"))) PPC_WEAK_FUNC(sub_83C68160);
PPC_FUNC_IMPL(__imp__sub_83C68160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6816C"))) PPC_WEAK_FUNC(sub_83C6816C);
PPC_FUNC_IMPL(__imp__sub_83C6816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68170"))) PPC_WEAK_FUNC(sub_83C68170);
PPC_FUNC_IMPL(__imp__sub_83C68170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6817C"))) PPC_WEAK_FUNC(sub_83C6817C);
PPC_FUNC_IMPL(__imp__sub_83C6817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68180"))) PPC_WEAK_FUNC(sub_83C68180);
PPC_FUNC_IMPL(__imp__sub_83C68180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6818C"))) PPC_WEAK_FUNC(sub_83C6818C);
PPC_FUNC_IMPL(__imp__sub_83C6818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68190"))) PPC_WEAK_FUNC(sub_83C68190);
PPC_FUNC_IMPL(__imp__sub_83C68190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6819C"))) PPC_WEAK_FUNC(sub_83C6819C);
PPC_FUNC_IMPL(__imp__sub_83C6819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C681A0"))) PPC_WEAK_FUNC(sub_83C681A0);
PPC_FUNC_IMPL(__imp__sub_83C681A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C681AC"))) PPC_WEAK_FUNC(sub_83C681AC);
PPC_FUNC_IMPL(__imp__sub_83C681AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C681B0"))) PPC_WEAK_FUNC(sub_83C681B0);
PPC_FUNC_IMPL(__imp__sub_83C681B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20984
	ctx.r3.s64 = ctx.r11.s64 + 20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C681BC"))) PPC_WEAK_FUNC(sub_83C681BC);
PPC_FUNC_IMPL(__imp__sub_83C681BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C681C0"))) PPC_WEAK_FUNC(sub_83C681C0);
PPC_FUNC_IMPL(__imp__sub_83C681C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C681CC"))) PPC_WEAK_FUNC(sub_83C681CC);
PPC_FUNC_IMPL(__imp__sub_83C681CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C681D0"))) PPC_WEAK_FUNC(sub_83C681D0);
PPC_FUNC_IMPL(__imp__sub_83C681D0) {
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
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// bl 0x83523120
	ctx.lr = 0x83C681E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,21000
	ctx.r3.s64 = ctx.r10.s64 + 21000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C681F4;
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

__attribute__((alias("__imp__sub_83C68204"))) PPC_WEAK_FUNC(sub_83C68204);
PPC_FUNC_IMPL(__imp__sub_83C68204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68208"))) PPC_WEAK_FUNC(sub_83C68208);
PPC_FUNC_IMPL(__imp__sub_83C68208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26144
	ctx.r7.s64 = ctx.r8.s64 + 26144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68230"))) PPC_WEAK_FUNC(sub_83C68230);
PPC_FUNC_IMPL(__imp__sub_83C68230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28292
	ctx.r6.s64 = ctx.r7.s64 + -28292;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28364(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28364);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26144);
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
	// std r9,-28292(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28292, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68278"))) PPC_WEAK_FUNC(sub_83C68278);
PPC_FUNC_IMPL(__imp__sub_83C68278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21016
	ctx.r3.s64 = ctx.r11.s64 + 21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C68284"))) PPC_WEAK_FUNC(sub_83C68284);
PPC_FUNC_IMPL(__imp__sub_83C68284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68288"))) PPC_WEAK_FUNC(sub_83C68288);
PPC_FUNC_IMPL(__imp__sub_83C68288) {
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
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// bl 0x8259af80
	ctx.lr = 0x83C682A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,21032
	ctx.r3.s64 = ctx.r10.s64 + 21032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C682AC;
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

__attribute__((alias("__imp__sub_83C682BC"))) PPC_WEAK_FUNC(sub_83C682BC);
PPC_FUNC_IMPL(__imp__sub_83C682BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C682C0"))) PPC_WEAK_FUNC(sub_83C682C0);
PPC_FUNC_IMPL(__imp__sub_83C682C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26132
	ctx.r11.s64 = ctx.r8.s64 + 26132;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28316);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21024
	ctx.r3.s64 = ctx.r6.s64 + 21024;
	// stw r10,26132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C682F0"))) PPC_WEAK_FUNC(sub_83C682F0);
PPC_FUNC_IMPL(__imp__sub_83C682F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C682FC"))) PPC_WEAK_FUNC(sub_83C682FC);
PPC_FUNC_IMPL(__imp__sub_83C682FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68300"))) PPC_WEAK_FUNC(sub_83C68300);
PPC_FUNC_IMPL(__imp__sub_83C68300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6830C"))) PPC_WEAK_FUNC(sub_83C6830C);
PPC_FUNC_IMPL(__imp__sub_83C6830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68310"))) PPC_WEAK_FUNC(sub_83C68310);
PPC_FUNC_IMPL(__imp__sub_83C68310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6831C"))) PPC_WEAK_FUNC(sub_83C6831C);
PPC_FUNC_IMPL(__imp__sub_83C6831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68320"))) PPC_WEAK_FUNC(sub_83C68320);
PPC_FUNC_IMPL(__imp__sub_83C68320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6832C"))) PPC_WEAK_FUNC(sub_83C6832C);
PPC_FUNC_IMPL(__imp__sub_83C6832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68330"))) PPC_WEAK_FUNC(sub_83C68330);
PPC_FUNC_IMPL(__imp__sub_83C68330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6833C"))) PPC_WEAK_FUNC(sub_83C6833C);
PPC_FUNC_IMPL(__imp__sub_83C6833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68340"))) PPC_WEAK_FUNC(sub_83C68340);
PPC_FUNC_IMPL(__imp__sub_83C68340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6834C"))) PPC_WEAK_FUNC(sub_83C6834C);
PPC_FUNC_IMPL(__imp__sub_83C6834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68350"))) PPC_WEAK_FUNC(sub_83C68350);
PPC_FUNC_IMPL(__imp__sub_83C68350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6835C"))) PPC_WEAK_FUNC(sub_83C6835C);
PPC_FUNC_IMPL(__imp__sub_83C6835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68360"))) PPC_WEAK_FUNC(sub_83C68360);
PPC_FUNC_IMPL(__imp__sub_83C68360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6836C"))) PPC_WEAK_FUNC(sub_83C6836C);
PPC_FUNC_IMPL(__imp__sub_83C6836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68370"))) PPC_WEAK_FUNC(sub_83C68370);
PPC_FUNC_IMPL(__imp__sub_83C68370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6837C"))) PPC_WEAK_FUNC(sub_83C6837C);
PPC_FUNC_IMPL(__imp__sub_83C6837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68380"))) PPC_WEAK_FUNC(sub_83C68380);
PPC_FUNC_IMPL(__imp__sub_83C68380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6838C"))) PPC_WEAK_FUNC(sub_83C6838C);
PPC_FUNC_IMPL(__imp__sub_83C6838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68390"))) PPC_WEAK_FUNC(sub_83C68390);
PPC_FUNC_IMPL(__imp__sub_83C68390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6839C"))) PPC_WEAK_FUNC(sub_83C6839C);
PPC_FUNC_IMPL(__imp__sub_83C6839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C683A0"))) PPC_WEAK_FUNC(sub_83C683A0);
PPC_FUNC_IMPL(__imp__sub_83C683A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C683AC"))) PPC_WEAK_FUNC(sub_83C683AC);
PPC_FUNC_IMPL(__imp__sub_83C683AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C683B0"))) PPC_WEAK_FUNC(sub_83C683B0);
PPC_FUNC_IMPL(__imp__sub_83C683B0) {
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
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// bl 0x83523120
	ctx.lr = 0x83C683C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,21136
	ctx.r3.s64 = ctx.r10.s64 + 21136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C683D4;
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

__attribute__((alias("__imp__sub_83C683E4"))) PPC_WEAK_FUNC(sub_83C683E4);
PPC_FUNC_IMPL(__imp__sub_83C683E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C683E8"))) PPC_WEAK_FUNC(sub_83C683E8);
PPC_FUNC_IMPL(__imp__sub_83C683E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26512
	ctx.r7.s64 = ctx.r8.s64 + 26512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68410"))) PPC_WEAK_FUNC(sub_83C68410);
PPC_FUNC_IMPL(__imp__sub_83C68410) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-28164
	ctx.r6.s64 = ctx.r7.s64 + -28164;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26512);
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
	// std r9,-28164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C68458"))) PPC_WEAK_FUNC(sub_83C68458);
PPC_FUNC_IMPL(__imp__sub_83C68458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C68464"))) PPC_WEAK_FUNC(sub_83C68464);
PPC_FUNC_IMPL(__imp__sub_83C68464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C68468"))) PPC_WEAK_FUNC(sub_83C68468);
PPC_FUNC_IMPL(__imp__sub_83C68468) {
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
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// bl 0x8259af80
	ctx.lr = 0x83C68480;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,21168
	ctx.r3.s64 = ctx.r10.s64 + 21168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6848C;
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

__attribute__((alias("__imp__sub_83C6849C"))) PPC_WEAK_FUNC(sub_83C6849C);
PPC_FUNC_IMPL(__imp__sub_83C6849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C684A0"))) PPC_WEAK_FUNC(sub_83C684A0);
PPC_FUNC_IMPL(__imp__sub_83C684A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26500
	ctx.r11.s64 = ctx.r8.s64 + 26500;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-28188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21160
	ctx.r3.s64 = ctx.r6.s64 + 21160;
	// stw r10,26500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C684D0"))) PPC_WEAK_FUNC(sub_83C684D0);
PPC_FUNC_IMPL(__imp__sub_83C684D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

