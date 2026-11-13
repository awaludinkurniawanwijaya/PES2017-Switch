#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE41C0"))) PPC_WEAK_FUNC(sub_83CE41C0);
PPC_FUNC_IMPL(__imp__sub_83CE41C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE41CC"))) PPC_WEAK_FUNC(sub_83CE41CC);
PPC_FUNC_IMPL(__imp__sub_83CE41CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE41D0"))) PPC_WEAK_FUNC(sub_83CE41D0);
PPC_FUNC_IMPL(__imp__sub_83CE41D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4512
	ctx.r3.s64 = ctx.r11.s64 + 4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE41DC"))) PPC_WEAK_FUNC(sub_83CE41DC);
PPC_FUNC_IMPL(__imp__sub_83CE41DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE41E0"))) PPC_WEAK_FUNC(sub_83CE41E0);
PPC_FUNC_IMPL(__imp__sub_83CE41E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18104
	ctx.r7.s64 = ctx.r8.s64 + -18104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4208"))) PPC_WEAK_FUNC(sub_83CE4208);
PPC_FUNC_IMPL(__imp__sub_83CE4208) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24696
	ctx.r6.s64 = ctx.r7.s64 + 24696;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18104);
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
	// std r9,24696(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4250"))) PPC_WEAK_FUNC(sub_83CE4250);
PPC_FUNC_IMPL(__imp__sub_83CE4250) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// bl 0x83523120
	ctx.lr = 0x83CE4268;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4520
	ctx.r3.s64 = ctx.r10.s64 + 4520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4274;
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

__attribute__((alias("__imp__sub_83CE4284"))) PPC_WEAK_FUNC(sub_83CE4284);
PPC_FUNC_IMPL(__imp__sub_83CE4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4288"))) PPC_WEAK_FUNC(sub_83CE4288);
PPC_FUNC_IMPL(__imp__sub_83CE4288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4294"))) PPC_WEAK_FUNC(sub_83CE4294);
PPC_FUNC_IMPL(__imp__sub_83CE4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4298"))) PPC_WEAK_FUNC(sub_83CE4298);
PPC_FUNC_IMPL(__imp__sub_83CE4298) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// bl 0x8259af80
	ctx.lr = 0x83CE42B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4552
	ctx.r3.s64 = ctx.r10.s64 + 4552;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE42BC;
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

__attribute__((alias("__imp__sub_83CE42CC"))) PPC_WEAK_FUNC(sub_83CE42CC);
PPC_FUNC_IMPL(__imp__sub_83CE42CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE42D0"))) PPC_WEAK_FUNC(sub_83CE42D0);
PPC_FUNC_IMPL(__imp__sub_83CE42D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18116
	ctx.r11.s64 = ctx.r8.s64 + -18116;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,24672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4544
	ctx.r3.s64 = ctx.r6.s64 + 4544;
	// stw r10,-18116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18116, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4300"))) PPC_WEAK_FUNC(sub_83CE4300);
PPC_FUNC_IMPL(__imp__sub_83CE4300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE430C"))) PPC_WEAK_FUNC(sub_83CE430C);
PPC_FUNC_IMPL(__imp__sub_83CE430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4310"))) PPC_WEAK_FUNC(sub_83CE4310);
PPC_FUNC_IMPL(__imp__sub_83CE4310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE431C"))) PPC_WEAK_FUNC(sub_83CE431C);
PPC_FUNC_IMPL(__imp__sub_83CE431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4320"))) PPC_WEAK_FUNC(sub_83CE4320);
PPC_FUNC_IMPL(__imp__sub_83CE4320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE432C"))) PPC_WEAK_FUNC(sub_83CE432C);
PPC_FUNC_IMPL(__imp__sub_83CE432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4330"))) PPC_WEAK_FUNC(sub_83CE4330);
PPC_FUNC_IMPL(__imp__sub_83CE4330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE433C"))) PPC_WEAK_FUNC(sub_83CE433C);
PPC_FUNC_IMPL(__imp__sub_83CE433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4340"))) PPC_WEAK_FUNC(sub_83CE4340);
PPC_FUNC_IMPL(__imp__sub_83CE4340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4592
	ctx.r3.s64 = ctx.r11.s64 + 4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE434C"))) PPC_WEAK_FUNC(sub_83CE434C);
PPC_FUNC_IMPL(__imp__sub_83CE434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4350"))) PPC_WEAK_FUNC(sub_83CE4350);
PPC_FUNC_IMPL(__imp__sub_83CE4350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4600
	ctx.r3.s64 = ctx.r11.s64 + 4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE435C"))) PPC_WEAK_FUNC(sub_83CE435C);
PPC_FUNC_IMPL(__imp__sub_83CE435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4360"))) PPC_WEAK_FUNC(sub_83CE4360);
PPC_FUNC_IMPL(__imp__sub_83CE4360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE436C"))) PPC_WEAK_FUNC(sub_83CE436C);
PPC_FUNC_IMPL(__imp__sub_83CE436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4370"))) PPC_WEAK_FUNC(sub_83CE4370);
PPC_FUNC_IMPL(__imp__sub_83CE4370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4616
	ctx.r3.s64 = ctx.r11.s64 + 4616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE437C"))) PPC_WEAK_FUNC(sub_83CE437C);
PPC_FUNC_IMPL(__imp__sub_83CE437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4380"))) PPC_WEAK_FUNC(sub_83CE4380);
PPC_FUNC_IMPL(__imp__sub_83CE4380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4624
	ctx.r3.s64 = ctx.r11.s64 + 4624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE438C"))) PPC_WEAK_FUNC(sub_83CE438C);
PPC_FUNC_IMPL(__imp__sub_83CE438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4390"))) PPC_WEAK_FUNC(sub_83CE4390);
PPC_FUNC_IMPL(__imp__sub_83CE4390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4632
	ctx.r3.s64 = ctx.r11.s64 + 4632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE439C"))) PPC_WEAK_FUNC(sub_83CE439C);
PPC_FUNC_IMPL(__imp__sub_83CE439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE43A0"))) PPC_WEAK_FUNC(sub_83CE43A0);
PPC_FUNC_IMPL(__imp__sub_83CE43A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4640
	ctx.r3.s64 = ctx.r11.s64 + 4640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE43AC"))) PPC_WEAK_FUNC(sub_83CE43AC);
PPC_FUNC_IMPL(__imp__sub_83CE43AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE43B0"))) PPC_WEAK_FUNC(sub_83CE43B0);
PPC_FUNC_IMPL(__imp__sub_83CE43B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4648
	ctx.r3.s64 = ctx.r11.s64 + 4648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE43BC"))) PPC_WEAK_FUNC(sub_83CE43BC);
PPC_FUNC_IMPL(__imp__sub_83CE43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE43C0"))) PPC_WEAK_FUNC(sub_83CE43C0);
PPC_FUNC_IMPL(__imp__sub_83CE43C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17736
	ctx.r7.s64 = ctx.r8.s64 + -17736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE43E8"))) PPC_WEAK_FUNC(sub_83CE43E8);
PPC_FUNC_IMPL(__imp__sub_83CE43E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24832
	ctx.r6.s64 = ctx.r7.s64 + 24832;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24760);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17736);
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
	// std r9,24832(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24832, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4430"))) PPC_WEAK_FUNC(sub_83CE4430);
PPC_FUNC_IMPL(__imp__sub_83CE4430) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// bl 0x83523120
	ctx.lr = 0x83CE4448;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4656
	ctx.r3.s64 = ctx.r10.s64 + 4656;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4454;
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

__attribute__((alias("__imp__sub_83CE4464"))) PPC_WEAK_FUNC(sub_83CE4464);
PPC_FUNC_IMPL(__imp__sub_83CE4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4468"))) PPC_WEAK_FUNC(sub_83CE4468);
PPC_FUNC_IMPL(__imp__sub_83CE4468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4474"))) PPC_WEAK_FUNC(sub_83CE4474);
PPC_FUNC_IMPL(__imp__sub_83CE4474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4478"))) PPC_WEAK_FUNC(sub_83CE4478);
PPC_FUNC_IMPL(__imp__sub_83CE4478) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// bl 0x8259af80
	ctx.lr = 0x83CE4490;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4688
	ctx.r3.s64 = ctx.r10.s64 + 4688;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE449C;
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

__attribute__((alias("__imp__sub_83CE44AC"))) PPC_WEAK_FUNC(sub_83CE44AC);
PPC_FUNC_IMPL(__imp__sub_83CE44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE44B0"))) PPC_WEAK_FUNC(sub_83CE44B0);
PPC_FUNC_IMPL(__imp__sub_83CE44B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17748
	ctx.r11.s64 = ctx.r8.s64 + -17748;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,24808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24808);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4680
	ctx.r3.s64 = ctx.r6.s64 + 4680;
	// stw r10,-17748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17748, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE44E0"))) PPC_WEAK_FUNC(sub_83CE44E0);
PPC_FUNC_IMPL(__imp__sub_83CE44E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4696
	ctx.r3.s64 = ctx.r11.s64 + 4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE44EC"))) PPC_WEAK_FUNC(sub_83CE44EC);
PPC_FUNC_IMPL(__imp__sub_83CE44EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE44F0"))) PPC_WEAK_FUNC(sub_83CE44F0);
PPC_FUNC_IMPL(__imp__sub_83CE44F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4704
	ctx.r3.s64 = ctx.r11.s64 + 4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE44FC"))) PPC_WEAK_FUNC(sub_83CE44FC);
PPC_FUNC_IMPL(__imp__sub_83CE44FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4500"))) PPC_WEAK_FUNC(sub_83CE4500);
PPC_FUNC_IMPL(__imp__sub_83CE4500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE450C"))) PPC_WEAK_FUNC(sub_83CE450C);
PPC_FUNC_IMPL(__imp__sub_83CE450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4510"))) PPC_WEAK_FUNC(sub_83CE4510);
PPC_FUNC_IMPL(__imp__sub_83CE4510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE451C"))) PPC_WEAK_FUNC(sub_83CE451C);
PPC_FUNC_IMPL(__imp__sub_83CE451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4520"))) PPC_WEAK_FUNC(sub_83CE4520);
PPC_FUNC_IMPL(__imp__sub_83CE4520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4728
	ctx.r3.s64 = ctx.r11.s64 + 4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE452C"))) PPC_WEAK_FUNC(sub_83CE452C);
PPC_FUNC_IMPL(__imp__sub_83CE452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4530"))) PPC_WEAK_FUNC(sub_83CE4530);
PPC_FUNC_IMPL(__imp__sub_83CE4530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE453C"))) PPC_WEAK_FUNC(sub_83CE453C);
PPC_FUNC_IMPL(__imp__sub_83CE453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4540"))) PPC_WEAK_FUNC(sub_83CE4540);
PPC_FUNC_IMPL(__imp__sub_83CE4540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE454C"))) PPC_WEAK_FUNC(sub_83CE454C);
PPC_FUNC_IMPL(__imp__sub_83CE454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4550"))) PPC_WEAK_FUNC(sub_83CE4550);
PPC_FUNC_IMPL(__imp__sub_83CE4550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE455C"))) PPC_WEAK_FUNC(sub_83CE455C);
PPC_FUNC_IMPL(__imp__sub_83CE455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4560"))) PPC_WEAK_FUNC(sub_83CE4560);
PPC_FUNC_IMPL(__imp__sub_83CE4560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE456C"))) PPC_WEAK_FUNC(sub_83CE456C);
PPC_FUNC_IMPL(__imp__sub_83CE456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4570"))) PPC_WEAK_FUNC(sub_83CE4570);
PPC_FUNC_IMPL(__imp__sub_83CE4570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE457C"))) PPC_WEAK_FUNC(sub_83CE457C);
PPC_FUNC_IMPL(__imp__sub_83CE457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4580"))) PPC_WEAK_FUNC(sub_83CE4580);
PPC_FUNC_IMPL(__imp__sub_83CE4580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE458C"))) PPC_WEAK_FUNC(sub_83CE458C);
PPC_FUNC_IMPL(__imp__sub_83CE458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4590"))) PPC_WEAK_FUNC(sub_83CE4590);
PPC_FUNC_IMPL(__imp__sub_83CE4590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE459C"))) PPC_WEAK_FUNC(sub_83CE459C);
PPC_FUNC_IMPL(__imp__sub_83CE459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE45A0"))) PPC_WEAK_FUNC(sub_83CE45A0);
PPC_FUNC_IMPL(__imp__sub_83CE45A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17368
	ctx.r7.s64 = ctx.r8.s64 + -17368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE45C8"))) PPC_WEAK_FUNC(sub_83CE45C8);
PPC_FUNC_IMPL(__imp__sub_83CE45C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24968
	ctx.r6.s64 = ctx.r7.s64 + 24968;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17368);
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
	// std r9,24968(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24968, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4610"))) PPC_WEAK_FUNC(sub_83CE4610);
PPC_FUNC_IMPL(__imp__sub_83CE4610) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-17384
	ctx.r3.s64 = ctx.r11.s64 + -17384;
	// bl 0x83523120
	ctx.lr = 0x83CE4628;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4792
	ctx.r3.s64 = ctx.r10.s64 + 4792;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4634;
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

__attribute__((alias("__imp__sub_83CE4644"))) PPC_WEAK_FUNC(sub_83CE4644);
PPC_FUNC_IMPL(__imp__sub_83CE4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4648"))) PPC_WEAK_FUNC(sub_83CE4648);
PPC_FUNC_IMPL(__imp__sub_83CE4648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4654"))) PPC_WEAK_FUNC(sub_83CE4654);
PPC_FUNC_IMPL(__imp__sub_83CE4654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4658"))) PPC_WEAK_FUNC(sub_83CE4658);
PPC_FUNC_IMPL(__imp__sub_83CE4658) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// bl 0x8259af80
	ctx.lr = 0x83CE4670;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4824
	ctx.r3.s64 = ctx.r10.s64 + 4824;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE467C;
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

__attribute__((alias("__imp__sub_83CE468C"))) PPC_WEAK_FUNC(sub_83CE468C);
PPC_FUNC_IMPL(__imp__sub_83CE468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4690"))) PPC_WEAK_FUNC(sub_83CE4690);
PPC_FUNC_IMPL(__imp__sub_83CE4690) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17380
	ctx.r11.s64 = ctx.r8.s64 + -17380;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,24944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4816
	ctx.r3.s64 = ctx.r6.s64 + 4816;
	// stw r10,-17380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE46C0"))) PPC_WEAK_FUNC(sub_83CE46C0);
PPC_FUNC_IMPL(__imp__sub_83CE46C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE46CC"))) PPC_WEAK_FUNC(sub_83CE46CC);
PPC_FUNC_IMPL(__imp__sub_83CE46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE46D0"))) PPC_WEAK_FUNC(sub_83CE46D0);
PPC_FUNC_IMPL(__imp__sub_83CE46D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE46DC"))) PPC_WEAK_FUNC(sub_83CE46DC);
PPC_FUNC_IMPL(__imp__sub_83CE46DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE46E0"))) PPC_WEAK_FUNC(sub_83CE46E0);
PPC_FUNC_IMPL(__imp__sub_83CE46E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE46EC"))) PPC_WEAK_FUNC(sub_83CE46EC);
PPC_FUNC_IMPL(__imp__sub_83CE46EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE46F0"))) PPC_WEAK_FUNC(sub_83CE46F0);
PPC_FUNC_IMPL(__imp__sub_83CE46F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE46FC"))) PPC_WEAK_FUNC(sub_83CE46FC);
PPC_FUNC_IMPL(__imp__sub_83CE46FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4700"))) PPC_WEAK_FUNC(sub_83CE4700);
PPC_FUNC_IMPL(__imp__sub_83CE4700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE470C"))) PPC_WEAK_FUNC(sub_83CE470C);
PPC_FUNC_IMPL(__imp__sub_83CE470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4710"))) PPC_WEAK_FUNC(sub_83CE4710);
PPC_FUNC_IMPL(__imp__sub_83CE4710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE471C"))) PPC_WEAK_FUNC(sub_83CE471C);
PPC_FUNC_IMPL(__imp__sub_83CE471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4720"))) PPC_WEAK_FUNC(sub_83CE4720);
PPC_FUNC_IMPL(__imp__sub_83CE4720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE472C"))) PPC_WEAK_FUNC(sub_83CE472C);
PPC_FUNC_IMPL(__imp__sub_83CE472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4730"))) PPC_WEAK_FUNC(sub_83CE4730);
PPC_FUNC_IMPL(__imp__sub_83CE4730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4888
	ctx.r3.s64 = ctx.r11.s64 + 4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE473C"))) PPC_WEAK_FUNC(sub_83CE473C);
PPC_FUNC_IMPL(__imp__sub_83CE473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4740"))) PPC_WEAK_FUNC(sub_83CE4740);
PPC_FUNC_IMPL(__imp__sub_83CE4740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4896
	ctx.r3.s64 = ctx.r11.s64 + 4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE474C"))) PPC_WEAK_FUNC(sub_83CE474C);
PPC_FUNC_IMPL(__imp__sub_83CE474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4750"))) PPC_WEAK_FUNC(sub_83CE4750);
PPC_FUNC_IMPL(__imp__sub_83CE4750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE475C"))) PPC_WEAK_FUNC(sub_83CE475C);
PPC_FUNC_IMPL(__imp__sub_83CE475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4760"))) PPC_WEAK_FUNC(sub_83CE4760);
PPC_FUNC_IMPL(__imp__sub_83CE4760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4912
	ctx.r3.s64 = ctx.r11.s64 + 4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE476C"))) PPC_WEAK_FUNC(sub_83CE476C);
PPC_FUNC_IMPL(__imp__sub_83CE476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4770"))) PPC_WEAK_FUNC(sub_83CE4770);
PPC_FUNC_IMPL(__imp__sub_83CE4770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE477C"))) PPC_WEAK_FUNC(sub_83CE477C);
PPC_FUNC_IMPL(__imp__sub_83CE477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4780"))) PPC_WEAK_FUNC(sub_83CE4780);
PPC_FUNC_IMPL(__imp__sub_83CE4780) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// bl 0x83523120
	ctx.lr = 0x83CE4798;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4928
	ctx.r3.s64 = ctx.r10.s64 + 4928;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE47A4;
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

__attribute__((alias("__imp__sub_83CE47B4"))) PPC_WEAK_FUNC(sub_83CE47B4);
PPC_FUNC_IMPL(__imp__sub_83CE47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE47B8"))) PPC_WEAK_FUNC(sub_83CE47B8);
PPC_FUNC_IMPL(__imp__sub_83CE47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17000
	ctx.r7.s64 = ctx.r8.s64 + -17000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17000(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE47E0"))) PPC_WEAK_FUNC(sub_83CE47E0);
PPC_FUNC_IMPL(__imp__sub_83CE47E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,25128
	ctx.r6.s64 = ctx.r7.s64 + 25128;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17000);
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
	// std r9,25128(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25128, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4828"))) PPC_WEAK_FUNC(sub_83CE4828);
PPC_FUNC_IMPL(__imp__sub_83CE4828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4944
	ctx.r3.s64 = ctx.r11.s64 + 4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4834"))) PPC_WEAK_FUNC(sub_83CE4834);
PPC_FUNC_IMPL(__imp__sub_83CE4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4838"))) PPC_WEAK_FUNC(sub_83CE4838);
PPC_FUNC_IMPL(__imp__sub_83CE4838) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// bl 0x8259af80
	ctx.lr = 0x83CE4850;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4960
	ctx.r3.s64 = ctx.r10.s64 + 4960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE485C;
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

__attribute__((alias("__imp__sub_83CE486C"))) PPC_WEAK_FUNC(sub_83CE486C);
PPC_FUNC_IMPL(__imp__sub_83CE486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4870"))) PPC_WEAK_FUNC(sub_83CE4870);
PPC_FUNC_IMPL(__imp__sub_83CE4870) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17012
	ctx.r11.s64 = ctx.r8.s64 + -17012;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,25104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4952
	ctx.r3.s64 = ctx.r6.s64 + 4952;
	// stw r10,-17012(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48A0"))) PPC_WEAK_FUNC(sub_83CE48A0);
PPC_FUNC_IMPL(__imp__sub_83CE48A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48AC"))) PPC_WEAK_FUNC(sub_83CE48AC);
PPC_FUNC_IMPL(__imp__sub_83CE48AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE48B0"))) PPC_WEAK_FUNC(sub_83CE48B0);
PPC_FUNC_IMPL(__imp__sub_83CE48B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48BC"))) PPC_WEAK_FUNC(sub_83CE48BC);
PPC_FUNC_IMPL(__imp__sub_83CE48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE48C0"))) PPC_WEAK_FUNC(sub_83CE48C0);
PPC_FUNC_IMPL(__imp__sub_83CE48C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48CC"))) PPC_WEAK_FUNC(sub_83CE48CC);
PPC_FUNC_IMPL(__imp__sub_83CE48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE48D0"))) PPC_WEAK_FUNC(sub_83CE48D0);
PPC_FUNC_IMPL(__imp__sub_83CE48D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48DC"))) PPC_WEAK_FUNC(sub_83CE48DC);
PPC_FUNC_IMPL(__imp__sub_83CE48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE48E0"))) PPC_WEAK_FUNC(sub_83CE48E0);
PPC_FUNC_IMPL(__imp__sub_83CE48E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48EC"))) PPC_WEAK_FUNC(sub_83CE48EC);
PPC_FUNC_IMPL(__imp__sub_83CE48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE48F0"))) PPC_WEAK_FUNC(sub_83CE48F0);
PPC_FUNC_IMPL(__imp__sub_83CE48F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE48FC"))) PPC_WEAK_FUNC(sub_83CE48FC);
PPC_FUNC_IMPL(__imp__sub_83CE48FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4900"))) PPC_WEAK_FUNC(sub_83CE4900);
PPC_FUNC_IMPL(__imp__sub_83CE4900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE490C"))) PPC_WEAK_FUNC(sub_83CE490C);
PPC_FUNC_IMPL(__imp__sub_83CE490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4910"))) PPC_WEAK_FUNC(sub_83CE4910);
PPC_FUNC_IMPL(__imp__sub_83CE4910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE491C"))) PPC_WEAK_FUNC(sub_83CE491C);
PPC_FUNC_IMPL(__imp__sub_83CE491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4920"))) PPC_WEAK_FUNC(sub_83CE4920);
PPC_FUNC_IMPL(__imp__sub_83CE4920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE492C"))) PPC_WEAK_FUNC(sub_83CE492C);
PPC_FUNC_IMPL(__imp__sub_83CE492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4930"))) PPC_WEAK_FUNC(sub_83CE4930);
PPC_FUNC_IMPL(__imp__sub_83CE4930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE493C"))) PPC_WEAK_FUNC(sub_83CE493C);
PPC_FUNC_IMPL(__imp__sub_83CE493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4940"))) PPC_WEAK_FUNC(sub_83CE4940);
PPC_FUNC_IMPL(__imp__sub_83CE4940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE494C"))) PPC_WEAK_FUNC(sub_83CE494C);
PPC_FUNC_IMPL(__imp__sub_83CE494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4950"))) PPC_WEAK_FUNC(sub_83CE4950);
PPC_FUNC_IMPL(__imp__sub_83CE4950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE495C"))) PPC_WEAK_FUNC(sub_83CE495C);
PPC_FUNC_IMPL(__imp__sub_83CE495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4960"))) PPC_WEAK_FUNC(sub_83CE4960);
PPC_FUNC_IMPL(__imp__sub_83CE4960) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16648
	ctx.r3.s64 = ctx.r11.s64 + -16648;
	// bl 0x83523120
	ctx.lr = 0x83CE4978;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5064
	ctx.r3.s64 = ctx.r10.s64 + 5064;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4984;
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

__attribute__((alias("__imp__sub_83CE4994"))) PPC_WEAK_FUNC(sub_83CE4994);
PPC_FUNC_IMPL(__imp__sub_83CE4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4998"))) PPC_WEAK_FUNC(sub_83CE4998);
PPC_FUNC_IMPL(__imp__sub_83CE4998) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16632
	ctx.r7.s64 = ctx.r8.s64 + -16632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16632(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE49C0"))) PPC_WEAK_FUNC(sub_83CE49C0);
PPC_FUNC_IMPL(__imp__sub_83CE49C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,25384
	ctx.r6.s64 = ctx.r7.s64 + 25384;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16632);
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
	// std r9,25384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4A08"))) PPC_WEAK_FUNC(sub_83CE4A08);
PPC_FUNC_IMPL(__imp__sub_83CE4A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4A14"))) PPC_WEAK_FUNC(sub_83CE4A14);
PPC_FUNC_IMPL(__imp__sub_83CE4A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4A18"))) PPC_WEAK_FUNC(sub_83CE4A18);
PPC_FUNC_IMPL(__imp__sub_83CE4A18) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16624
	ctx.r3.s64 = ctx.r11.s64 + -16624;
	// bl 0x8259af80
	ctx.lr = 0x83CE4A30;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5096
	ctx.r3.s64 = ctx.r10.s64 + 5096;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4A3C;
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

__attribute__((alias("__imp__sub_83CE4A4C"))) PPC_WEAK_FUNC(sub_83CE4A4C);
PPC_FUNC_IMPL(__imp__sub_83CE4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4A50"))) PPC_WEAK_FUNC(sub_83CE4A50);
PPC_FUNC_IMPL(__imp__sub_83CE4A50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16644
	ctx.r11.s64 = ctx.r8.s64 + -16644;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,25360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5088
	ctx.r3.s64 = ctx.r6.s64 + 5088;
	// stw r10,-16644(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16644, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4A80"))) PPC_WEAK_FUNC(sub_83CE4A80);
PPC_FUNC_IMPL(__imp__sub_83CE4A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4A8C"))) PPC_WEAK_FUNC(sub_83CE4A8C);
PPC_FUNC_IMPL(__imp__sub_83CE4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4A90"))) PPC_WEAK_FUNC(sub_83CE4A90);
PPC_FUNC_IMPL(__imp__sub_83CE4A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4A9C"))) PPC_WEAK_FUNC(sub_83CE4A9C);
PPC_FUNC_IMPL(__imp__sub_83CE4A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AA0"))) PPC_WEAK_FUNC(sub_83CE4AA0);
PPC_FUNC_IMPL(__imp__sub_83CE4AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4AAC"))) PPC_WEAK_FUNC(sub_83CE4AAC);
PPC_FUNC_IMPL(__imp__sub_83CE4AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AB0"))) PPC_WEAK_FUNC(sub_83CE4AB0);
PPC_FUNC_IMPL(__imp__sub_83CE4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5128
	ctx.r3.s64 = ctx.r11.s64 + 5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4ABC"))) PPC_WEAK_FUNC(sub_83CE4ABC);
PPC_FUNC_IMPL(__imp__sub_83CE4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AC0"))) PPC_WEAK_FUNC(sub_83CE4AC0);
PPC_FUNC_IMPL(__imp__sub_83CE4AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4ACC"))) PPC_WEAK_FUNC(sub_83CE4ACC);
PPC_FUNC_IMPL(__imp__sub_83CE4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AD0"))) PPC_WEAK_FUNC(sub_83CE4AD0);
PPC_FUNC_IMPL(__imp__sub_83CE4AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4ADC"))) PPC_WEAK_FUNC(sub_83CE4ADC);
PPC_FUNC_IMPL(__imp__sub_83CE4ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AE0"))) PPC_WEAK_FUNC(sub_83CE4AE0);
PPC_FUNC_IMPL(__imp__sub_83CE4AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5152
	ctx.r3.s64 = ctx.r11.s64 + 5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4AEC"))) PPC_WEAK_FUNC(sub_83CE4AEC);
PPC_FUNC_IMPL(__imp__sub_83CE4AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4AF0"))) PPC_WEAK_FUNC(sub_83CE4AF0);
PPC_FUNC_IMPL(__imp__sub_83CE4AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5160
	ctx.r3.s64 = ctx.r11.s64 + 5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4AFC"))) PPC_WEAK_FUNC(sub_83CE4AFC);
PPC_FUNC_IMPL(__imp__sub_83CE4AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B00"))) PPC_WEAK_FUNC(sub_83CE4B00);
PPC_FUNC_IMPL(__imp__sub_83CE4B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B0C"))) PPC_WEAK_FUNC(sub_83CE4B0C);
PPC_FUNC_IMPL(__imp__sub_83CE4B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B10"))) PPC_WEAK_FUNC(sub_83CE4B10);
PPC_FUNC_IMPL(__imp__sub_83CE4B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B1C"))) PPC_WEAK_FUNC(sub_83CE4B1C);
PPC_FUNC_IMPL(__imp__sub_83CE4B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B20"))) PPC_WEAK_FUNC(sub_83CE4B20);
PPC_FUNC_IMPL(__imp__sub_83CE4B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5184
	ctx.r3.s64 = ctx.r11.s64 + 5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B2C"))) PPC_WEAK_FUNC(sub_83CE4B2C);
PPC_FUNC_IMPL(__imp__sub_83CE4B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B30"))) PPC_WEAK_FUNC(sub_83CE4B30);
PPC_FUNC_IMPL(__imp__sub_83CE4B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5192
	ctx.r3.s64 = ctx.r11.s64 + 5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B3C"))) PPC_WEAK_FUNC(sub_83CE4B3C);
PPC_FUNC_IMPL(__imp__sub_83CE4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B40"))) PPC_WEAK_FUNC(sub_83CE4B40);
PPC_FUNC_IMPL(__imp__sub_83CE4B40) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16280
	ctx.r3.s64 = ctx.r11.s64 + -16280;
	// bl 0x83523120
	ctx.lr = 0x83CE4B58;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5200
	ctx.r3.s64 = ctx.r10.s64 + 5200;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4B64;
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

__attribute__((alias("__imp__sub_83CE4B74"))) PPC_WEAK_FUNC(sub_83CE4B74);
PPC_FUNC_IMPL(__imp__sub_83CE4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B78"))) PPC_WEAK_FUNC(sub_83CE4B78);
PPC_FUNC_IMPL(__imp__sub_83CE4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5216
	ctx.r3.s64 = ctx.r11.s64 + 5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B84"))) PPC_WEAK_FUNC(sub_83CE4B84);
PPC_FUNC_IMPL(__imp__sub_83CE4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B88"))) PPC_WEAK_FUNC(sub_83CE4B88);
PPC_FUNC_IMPL(__imp__sub_83CE4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4B94"))) PPC_WEAK_FUNC(sub_83CE4B94);
PPC_FUNC_IMPL(__imp__sub_83CE4B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4B98"))) PPC_WEAK_FUNC(sub_83CE4B98);
PPC_FUNC_IMPL(__imp__sub_83CE4B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5232
	ctx.r3.s64 = ctx.r11.s64 + 5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BA4"))) PPC_WEAK_FUNC(sub_83CE4BA4);
PPC_FUNC_IMPL(__imp__sub_83CE4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BA8"))) PPC_WEAK_FUNC(sub_83CE4BA8);
PPC_FUNC_IMPL(__imp__sub_83CE4BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BB4"))) PPC_WEAK_FUNC(sub_83CE4BB4);
PPC_FUNC_IMPL(__imp__sub_83CE4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BB8"))) PPC_WEAK_FUNC(sub_83CE4BB8);
PPC_FUNC_IMPL(__imp__sub_83CE4BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BC4"))) PPC_WEAK_FUNC(sub_83CE4BC4);
PPC_FUNC_IMPL(__imp__sub_83CE4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BC8"))) PPC_WEAK_FUNC(sub_83CE4BC8);
PPC_FUNC_IMPL(__imp__sub_83CE4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BD4"))) PPC_WEAK_FUNC(sub_83CE4BD4);
PPC_FUNC_IMPL(__imp__sub_83CE4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BD8"))) PPC_WEAK_FUNC(sub_83CE4BD8);
PPC_FUNC_IMPL(__imp__sub_83CE4BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5264
	ctx.r3.s64 = ctx.r11.s64 + 5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BE4"))) PPC_WEAK_FUNC(sub_83CE4BE4);
PPC_FUNC_IMPL(__imp__sub_83CE4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BE8"))) PPC_WEAK_FUNC(sub_83CE4BE8);
PPC_FUNC_IMPL(__imp__sub_83CE4BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5272
	ctx.r3.s64 = ctx.r11.s64 + 5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4BF4"))) PPC_WEAK_FUNC(sub_83CE4BF4);
PPC_FUNC_IMPL(__imp__sub_83CE4BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4BF8"))) PPC_WEAK_FUNC(sub_83CE4BF8);
PPC_FUNC_IMPL(__imp__sub_83CE4BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4C04"))) PPC_WEAK_FUNC(sub_83CE4C04);
PPC_FUNC_IMPL(__imp__sub_83CE4C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4C08"))) PPC_WEAK_FUNC(sub_83CE4C08);
PPC_FUNC_IMPL(__imp__sub_83CE4C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4C14"))) PPC_WEAK_FUNC(sub_83CE4C14);
PPC_FUNC_IMPL(__imp__sub_83CE4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4C18"))) PPC_WEAK_FUNC(sub_83CE4C18);
PPC_FUNC_IMPL(__imp__sub_83CE4C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4C24"))) PPC_WEAK_FUNC(sub_83CE4C24);
PPC_FUNC_IMPL(__imp__sub_83CE4C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4C28"))) PPC_WEAK_FUNC(sub_83CE4C28);
PPC_FUNC_IMPL(__imp__sub_83CE4C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5304
	ctx.r3.s64 = ctx.r11.s64 + 5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4C34"))) PPC_WEAK_FUNC(sub_83CE4C34);
PPC_FUNC_IMPL(__imp__sub_83CE4C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4C38"))) PPC_WEAK_FUNC(sub_83CE4C38);
PPC_FUNC_IMPL(__imp__sub_83CE4C38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16256
	ctx.r7.s64 = ctx.r8.s64 + -16256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4C60"))) PPC_WEAK_FUNC(sub_83CE4C60);
PPC_FUNC_IMPL(__imp__sub_83CE4C60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,25624
	ctx.r6.s64 = ctx.r7.s64 + 25624;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16256);
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
	// std r9,25624(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4CA8"))) PPC_WEAK_FUNC(sub_83CE4CA8);
PPC_FUNC_IMPL(__imp__sub_83CE4CA8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// bl 0x83523120
	ctx.lr = 0x83CE4CC0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5312
	ctx.r3.s64 = ctx.r10.s64 + 5312;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4CCC;
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

__attribute__((alias("__imp__sub_83CE4CDC"))) PPC_WEAK_FUNC(sub_83CE4CDC);
PPC_FUNC_IMPL(__imp__sub_83CE4CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4CE0"))) PPC_WEAK_FUNC(sub_83CE4CE0);
PPC_FUNC_IMPL(__imp__sub_83CE4CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4CEC"))) PPC_WEAK_FUNC(sub_83CE4CEC);
PPC_FUNC_IMPL(__imp__sub_83CE4CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4CF0"))) PPC_WEAK_FUNC(sub_83CE4CF0);
PPC_FUNC_IMPL(__imp__sub_83CE4CF0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// bl 0x8259af80
	ctx.lr = 0x83CE4D08;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5344
	ctx.r3.s64 = ctx.r10.s64 + 5344;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4D14;
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

__attribute__((alias("__imp__sub_83CE4D24"))) PPC_WEAK_FUNC(sub_83CE4D24);
PPC_FUNC_IMPL(__imp__sub_83CE4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4D28"))) PPC_WEAK_FUNC(sub_83CE4D28);
PPC_FUNC_IMPL(__imp__sub_83CE4D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16268
	ctx.r11.s64 = ctx.r8.s64 + -16268;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,25600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25600);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5336
	ctx.r3.s64 = ctx.r6.s64 + 5336;
	// stw r10,-16268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4D58"))) PPC_WEAK_FUNC(sub_83CE4D58);
PPC_FUNC_IMPL(__imp__sub_83CE4D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4D64"))) PPC_WEAK_FUNC(sub_83CE4D64);
PPC_FUNC_IMPL(__imp__sub_83CE4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4D68"))) PPC_WEAK_FUNC(sub_83CE4D68);
PPC_FUNC_IMPL(__imp__sub_83CE4D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4D74"))) PPC_WEAK_FUNC(sub_83CE4D74);
PPC_FUNC_IMPL(__imp__sub_83CE4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4D78"))) PPC_WEAK_FUNC(sub_83CE4D78);
PPC_FUNC_IMPL(__imp__sub_83CE4D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4D84"))) PPC_WEAK_FUNC(sub_83CE4D84);
PPC_FUNC_IMPL(__imp__sub_83CE4D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4D88"))) PPC_WEAK_FUNC(sub_83CE4D88);
PPC_FUNC_IMPL(__imp__sub_83CE4D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4D94"))) PPC_WEAK_FUNC(sub_83CE4D94);
PPC_FUNC_IMPL(__imp__sub_83CE4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4D98"))) PPC_WEAK_FUNC(sub_83CE4D98);
PPC_FUNC_IMPL(__imp__sub_83CE4D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DA4"))) PPC_WEAK_FUNC(sub_83CE4DA4);
PPC_FUNC_IMPL(__imp__sub_83CE4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DA8"))) PPC_WEAK_FUNC(sub_83CE4DA8);
PPC_FUNC_IMPL(__imp__sub_83CE4DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5392
	ctx.r3.s64 = ctx.r11.s64 + 5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DB4"))) PPC_WEAK_FUNC(sub_83CE4DB4);
PPC_FUNC_IMPL(__imp__sub_83CE4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DB8"))) PPC_WEAK_FUNC(sub_83CE4DB8);
PPC_FUNC_IMPL(__imp__sub_83CE4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5400
	ctx.r3.s64 = ctx.r11.s64 + 5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DC4"))) PPC_WEAK_FUNC(sub_83CE4DC4);
PPC_FUNC_IMPL(__imp__sub_83CE4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DC8"))) PPC_WEAK_FUNC(sub_83CE4DC8);
PPC_FUNC_IMPL(__imp__sub_83CE4DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DD4"))) PPC_WEAK_FUNC(sub_83CE4DD4);
PPC_FUNC_IMPL(__imp__sub_83CE4DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DD8"))) PPC_WEAK_FUNC(sub_83CE4DD8);
PPC_FUNC_IMPL(__imp__sub_83CE4DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DE4"))) PPC_WEAK_FUNC(sub_83CE4DE4);
PPC_FUNC_IMPL(__imp__sub_83CE4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DE8"))) PPC_WEAK_FUNC(sub_83CE4DE8);
PPC_FUNC_IMPL(__imp__sub_83CE4DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4DF4"))) PPC_WEAK_FUNC(sub_83CE4DF4);
PPC_FUNC_IMPL(__imp__sub_83CE4DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4DF8"))) PPC_WEAK_FUNC(sub_83CE4DF8);
PPC_FUNC_IMPL(__imp__sub_83CE4DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4E04"))) PPC_WEAK_FUNC(sub_83CE4E04);
PPC_FUNC_IMPL(__imp__sub_83CE4E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4E08"))) PPC_WEAK_FUNC(sub_83CE4E08);
PPC_FUNC_IMPL(__imp__sub_83CE4E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4E14"))) PPC_WEAK_FUNC(sub_83CE4E14);
PPC_FUNC_IMPL(__imp__sub_83CE4E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4E18"))) PPC_WEAK_FUNC(sub_83CE4E18);
PPC_FUNC_IMPL(__imp__sub_83CE4E18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15888
	ctx.r7.s64 = ctx.r8.s64 + -15888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4E40"))) PPC_WEAK_FUNC(sub_83CE4E40);
PPC_FUNC_IMPL(__imp__sub_83CE4E40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,25760
	ctx.r6.s64 = ctx.r7.s64 + 25760;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15888);
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
	// std r9,25760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4E88"))) PPC_WEAK_FUNC(sub_83CE4E88);
PPC_FUNC_IMPL(__imp__sub_83CE4E88) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// bl 0x83523120
	ctx.lr = 0x83CE4EA0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5448
	ctx.r3.s64 = ctx.r10.s64 + 5448;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4EAC;
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

__attribute__((alias("__imp__sub_83CE4EBC"))) PPC_WEAK_FUNC(sub_83CE4EBC);
PPC_FUNC_IMPL(__imp__sub_83CE4EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4EC0"))) PPC_WEAK_FUNC(sub_83CE4EC0);
PPC_FUNC_IMPL(__imp__sub_83CE4EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4ECC"))) PPC_WEAK_FUNC(sub_83CE4ECC);
PPC_FUNC_IMPL(__imp__sub_83CE4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4ED0"))) PPC_WEAK_FUNC(sub_83CE4ED0);
PPC_FUNC_IMPL(__imp__sub_83CE4ED0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15880
	ctx.r3.s64 = ctx.r11.s64 + -15880;
	// bl 0x8259af80
	ctx.lr = 0x83CE4EE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5480
	ctx.r3.s64 = ctx.r10.s64 + 5480;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4EF4;
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

__attribute__((alias("__imp__sub_83CE4F04"))) PPC_WEAK_FUNC(sub_83CE4F04);
PPC_FUNC_IMPL(__imp__sub_83CE4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F08"))) PPC_WEAK_FUNC(sub_83CE4F08);
PPC_FUNC_IMPL(__imp__sub_83CE4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15900
	ctx.r11.s64 = ctx.r8.s64 + -15900;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,25736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5472
	ctx.r3.s64 = ctx.r6.s64 + 5472;
	// stw r10,-15900(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F38"))) PPC_WEAK_FUNC(sub_83CE4F38);
PPC_FUNC_IMPL(__imp__sub_83CE4F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F44"))) PPC_WEAK_FUNC(sub_83CE4F44);
PPC_FUNC_IMPL(__imp__sub_83CE4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F48"))) PPC_WEAK_FUNC(sub_83CE4F48);
PPC_FUNC_IMPL(__imp__sub_83CE4F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F54"))) PPC_WEAK_FUNC(sub_83CE4F54);
PPC_FUNC_IMPL(__imp__sub_83CE4F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F58"))) PPC_WEAK_FUNC(sub_83CE4F58);
PPC_FUNC_IMPL(__imp__sub_83CE4F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F64"))) PPC_WEAK_FUNC(sub_83CE4F64);
PPC_FUNC_IMPL(__imp__sub_83CE4F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F68"))) PPC_WEAK_FUNC(sub_83CE4F68);
PPC_FUNC_IMPL(__imp__sub_83CE4F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F74"))) PPC_WEAK_FUNC(sub_83CE4F74);
PPC_FUNC_IMPL(__imp__sub_83CE4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F78"))) PPC_WEAK_FUNC(sub_83CE4F78);
PPC_FUNC_IMPL(__imp__sub_83CE4F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F84"))) PPC_WEAK_FUNC(sub_83CE4F84);
PPC_FUNC_IMPL(__imp__sub_83CE4F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F88"))) PPC_WEAK_FUNC(sub_83CE4F88);
PPC_FUNC_IMPL(__imp__sub_83CE4F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4F94"))) PPC_WEAK_FUNC(sub_83CE4F94);
PPC_FUNC_IMPL(__imp__sub_83CE4F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4F98"))) PPC_WEAK_FUNC(sub_83CE4F98);
PPC_FUNC_IMPL(__imp__sub_83CE4F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5536
	ctx.r3.s64 = ctx.r11.s64 + 5536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4FA4"))) PPC_WEAK_FUNC(sub_83CE4FA4);
PPC_FUNC_IMPL(__imp__sub_83CE4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FA8"))) PPC_WEAK_FUNC(sub_83CE4FA8);
PPC_FUNC_IMPL(__imp__sub_83CE4FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4FB4"))) PPC_WEAK_FUNC(sub_83CE4FB4);
PPC_FUNC_IMPL(__imp__sub_83CE4FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FB8"))) PPC_WEAK_FUNC(sub_83CE4FB8);
PPC_FUNC_IMPL(__imp__sub_83CE4FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4FC4"))) PPC_WEAK_FUNC(sub_83CE4FC4);
PPC_FUNC_IMPL(__imp__sub_83CE4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FC8"))) PPC_WEAK_FUNC(sub_83CE4FC8);
PPC_FUNC_IMPL(__imp__sub_83CE4FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5560
	ctx.r3.s64 = ctx.r11.s64 + 5560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

