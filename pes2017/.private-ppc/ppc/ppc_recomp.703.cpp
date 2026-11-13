#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C0A5F4"))) PPC_WEAK_FUNC(sub_83C0A5F4);
PPC_FUNC_IMPL(__imp__sub_83C0A5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A5F8"))) PPC_WEAK_FUNC(sub_83C0A5F8);
PPC_FUNC_IMPL(__imp__sub_83C0A5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A604"))) PPC_WEAK_FUNC(sub_83C0A604);
PPC_FUNC_IMPL(__imp__sub_83C0A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A608"))) PPC_WEAK_FUNC(sub_83C0A608);
PPC_FUNC_IMPL(__imp__sub_83C0A608) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-472
	ctx.r3.s64 = ctx.r11.s64 + -472;
	// bl 0x83523120
	ctx.lr = 0x83C0A620;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,23616
	ctx.r3.s64 = ctx.r10.s64 + 23616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0A62C;
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

__attribute__((alias("__imp__sub_83C0A63C"))) PPC_WEAK_FUNC(sub_83C0A63C);
PPC_FUNC_IMPL(__imp__sub_83C0A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A640"))) PPC_WEAK_FUNC(sub_83C0A640);
PPC_FUNC_IMPL(__imp__sub_83C0A640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A64C"))) PPC_WEAK_FUNC(sub_83C0A64C);
PPC_FUNC_IMPL(__imp__sub_83C0A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A650"))) PPC_WEAK_FUNC(sub_83C0A650);
PPC_FUNC_IMPL(__imp__sub_83C0A650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A65C"))) PPC_WEAK_FUNC(sub_83C0A65C);
PPC_FUNC_IMPL(__imp__sub_83C0A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A660"))) PPC_WEAK_FUNC(sub_83C0A660);
PPC_FUNC_IMPL(__imp__sub_83C0A660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A66C"))) PPC_WEAK_FUNC(sub_83C0A66C);
PPC_FUNC_IMPL(__imp__sub_83C0A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A670"))) PPC_WEAK_FUNC(sub_83C0A670);
PPC_FUNC_IMPL(__imp__sub_83C0A670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A67C"))) PPC_WEAK_FUNC(sub_83C0A67C);
PPC_FUNC_IMPL(__imp__sub_83C0A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A680"))) PPC_WEAK_FUNC(sub_83C0A680);
PPC_FUNC_IMPL(__imp__sub_83C0A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A68C"))) PPC_WEAK_FUNC(sub_83C0A68C);
PPC_FUNC_IMPL(__imp__sub_83C0A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A690"))) PPC_WEAK_FUNC(sub_83C0A690);
PPC_FUNC_IMPL(__imp__sub_83C0A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23672
	ctx.r3.s64 = ctx.r11.s64 + 23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A69C"))) PPC_WEAK_FUNC(sub_83C0A69C);
PPC_FUNC_IMPL(__imp__sub_83C0A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6A0"))) PPC_WEAK_FUNC(sub_83C0A6A0);
PPC_FUNC_IMPL(__imp__sub_83C0A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23680
	ctx.r3.s64 = ctx.r11.s64 + 23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6AC"))) PPC_WEAK_FUNC(sub_83C0A6AC);
PPC_FUNC_IMPL(__imp__sub_83C0A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6B0"))) PPC_WEAK_FUNC(sub_83C0A6B0);
PPC_FUNC_IMPL(__imp__sub_83C0A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6BC"))) PPC_WEAK_FUNC(sub_83C0A6BC);
PPC_FUNC_IMPL(__imp__sub_83C0A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6C0"))) PPC_WEAK_FUNC(sub_83C0A6C0);
PPC_FUNC_IMPL(__imp__sub_83C0A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6CC"))) PPC_WEAK_FUNC(sub_83C0A6CC);
PPC_FUNC_IMPL(__imp__sub_83C0A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6D0"))) PPC_WEAK_FUNC(sub_83C0A6D0);
PPC_FUNC_IMPL(__imp__sub_83C0A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6DC"))) PPC_WEAK_FUNC(sub_83C0A6DC);
PPC_FUNC_IMPL(__imp__sub_83C0A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6E0"))) PPC_WEAK_FUNC(sub_83C0A6E0);
PPC_FUNC_IMPL(__imp__sub_83C0A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6EC"))) PPC_WEAK_FUNC(sub_83C0A6EC);
PPC_FUNC_IMPL(__imp__sub_83C0A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A6F0"))) PPC_WEAK_FUNC(sub_83C0A6F0);
PPC_FUNC_IMPL(__imp__sub_83C0A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A6FC"))) PPC_WEAK_FUNC(sub_83C0A6FC);
PPC_FUNC_IMPL(__imp__sub_83C0A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A700"))) PPC_WEAK_FUNC(sub_83C0A700);
PPC_FUNC_IMPL(__imp__sub_83C0A700) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// bl 0x83523120
	ctx.lr = 0x83C0A718;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,23728
	ctx.r3.s64 = ctx.r10.s64 + 23728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0A724;
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

__attribute__((alias("__imp__sub_83C0A734"))) PPC_WEAK_FUNC(sub_83C0A734);
PPC_FUNC_IMPL(__imp__sub_83C0A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A738"))) PPC_WEAK_FUNC(sub_83C0A738);
PPC_FUNC_IMPL(__imp__sub_83C0A738) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-448
	ctx.r7.s64 = ctx.r8.s64 + -448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0A760"))) PPC_WEAK_FUNC(sub_83C0A760);
PPC_FUNC_IMPL(__imp__sub_83C0A760) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-22476
	ctx.r6.s64 = ctx.r7.s64 + -22476;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22548(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22548);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -448);
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
	// std r9,-22476(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22476, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0A7A8"))) PPC_WEAK_FUNC(sub_83C0A7A8);
PPC_FUNC_IMPL(__imp__sub_83C0A7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A7B4"))) PPC_WEAK_FUNC(sub_83C0A7B4);
PPC_FUNC_IMPL(__imp__sub_83C0A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A7B8"))) PPC_WEAK_FUNC(sub_83C0A7B8);
PPC_FUNC_IMPL(__imp__sub_83C0A7B8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// bl 0x8259af80
	ctx.lr = 0x83C0A7D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,23760
	ctx.r3.s64 = ctx.r10.s64 + 23760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0A7DC;
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

__attribute__((alias("__imp__sub_83C0A7EC"))) PPC_WEAK_FUNC(sub_83C0A7EC);
PPC_FUNC_IMPL(__imp__sub_83C0A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A7F0"))) PPC_WEAK_FUNC(sub_83C0A7F0);
PPC_FUNC_IMPL(__imp__sub_83C0A7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-460
	ctx.r11.s64 = ctx.r8.s64 + -460;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-22500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22500);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23752
	ctx.r3.s64 = ctx.r6.s64 + 23752;
	// stw r10,-460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A820"))) PPC_WEAK_FUNC(sub_83C0A820);
PPC_FUNC_IMPL(__imp__sub_83C0A820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A82C"))) PPC_WEAK_FUNC(sub_83C0A82C);
PPC_FUNC_IMPL(__imp__sub_83C0A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A830"))) PPC_WEAK_FUNC(sub_83C0A830);
PPC_FUNC_IMPL(__imp__sub_83C0A830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A83C"))) PPC_WEAK_FUNC(sub_83C0A83C);
PPC_FUNC_IMPL(__imp__sub_83C0A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A840"))) PPC_WEAK_FUNC(sub_83C0A840);
PPC_FUNC_IMPL(__imp__sub_83C0A840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A84C"))) PPC_WEAK_FUNC(sub_83C0A84C);
PPC_FUNC_IMPL(__imp__sub_83C0A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A850"))) PPC_WEAK_FUNC(sub_83C0A850);
PPC_FUNC_IMPL(__imp__sub_83C0A850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A85C"))) PPC_WEAK_FUNC(sub_83C0A85C);
PPC_FUNC_IMPL(__imp__sub_83C0A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A860"))) PPC_WEAK_FUNC(sub_83C0A860);
PPC_FUNC_IMPL(__imp__sub_83C0A860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23800
	ctx.r3.s64 = ctx.r11.s64 + 23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A86C"))) PPC_WEAK_FUNC(sub_83C0A86C);
PPC_FUNC_IMPL(__imp__sub_83C0A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A870"))) PPC_WEAK_FUNC(sub_83C0A870);
PPC_FUNC_IMPL(__imp__sub_83C0A870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A87C"))) PPC_WEAK_FUNC(sub_83C0A87C);
PPC_FUNC_IMPL(__imp__sub_83C0A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A880"))) PPC_WEAK_FUNC(sub_83C0A880);
PPC_FUNC_IMPL(__imp__sub_83C0A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A88C"))) PPC_WEAK_FUNC(sub_83C0A88C);
PPC_FUNC_IMPL(__imp__sub_83C0A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A890"))) PPC_WEAK_FUNC(sub_83C0A890);
PPC_FUNC_IMPL(__imp__sub_83C0A890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A89C"))) PPC_WEAK_FUNC(sub_83C0A89C);
PPC_FUNC_IMPL(__imp__sub_83C0A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A8A0"))) PPC_WEAK_FUNC(sub_83C0A8A0);
PPC_FUNC_IMPL(__imp__sub_83C0A8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A8AC"))) PPC_WEAK_FUNC(sub_83C0A8AC);
PPC_FUNC_IMPL(__imp__sub_83C0A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A8B0"))) PPC_WEAK_FUNC(sub_83C0A8B0);
PPC_FUNC_IMPL(__imp__sub_83C0A8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A8BC"))) PPC_WEAK_FUNC(sub_83C0A8BC);
PPC_FUNC_IMPL(__imp__sub_83C0A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A8C0"))) PPC_WEAK_FUNC(sub_83C0A8C0);
PPC_FUNC_IMPL(__imp__sub_83C0A8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A8CC"))) PPC_WEAK_FUNC(sub_83C0A8CC);
PPC_FUNC_IMPL(__imp__sub_83C0A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A8D0"))) PPC_WEAK_FUNC(sub_83C0A8D0);
PPC_FUNC_IMPL(__imp__sub_83C0A8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A8DC"))) PPC_WEAK_FUNC(sub_83C0A8DC);
PPC_FUNC_IMPL(__imp__sub_83C0A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A8E0"))) PPC_WEAK_FUNC(sub_83C0A8E0);
PPC_FUNC_IMPL(__imp__sub_83C0A8E0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x83523120
	ctx.lr = 0x83C0A8F8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,23864
	ctx.r3.s64 = ctx.r10.s64 + 23864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0A904;
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

__attribute__((alias("__imp__sub_83C0A914"))) PPC_WEAK_FUNC(sub_83C0A914);
PPC_FUNC_IMPL(__imp__sub_83C0A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A918"))) PPC_WEAK_FUNC(sub_83C0A918);
PPC_FUNC_IMPL(__imp__sub_83C0A918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A924"))) PPC_WEAK_FUNC(sub_83C0A924);
PPC_FUNC_IMPL(__imp__sub_83C0A924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A928"))) PPC_WEAK_FUNC(sub_83C0A928);
PPC_FUNC_IMPL(__imp__sub_83C0A928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A934"))) PPC_WEAK_FUNC(sub_83C0A934);
PPC_FUNC_IMPL(__imp__sub_83C0A934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A938"))) PPC_WEAK_FUNC(sub_83C0A938);
PPC_FUNC_IMPL(__imp__sub_83C0A938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A944"))) PPC_WEAK_FUNC(sub_83C0A944);
PPC_FUNC_IMPL(__imp__sub_83C0A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A948"))) PPC_WEAK_FUNC(sub_83C0A948);
PPC_FUNC_IMPL(__imp__sub_83C0A948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A954"))) PPC_WEAK_FUNC(sub_83C0A954);
PPC_FUNC_IMPL(__imp__sub_83C0A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A958"))) PPC_WEAK_FUNC(sub_83C0A958);
PPC_FUNC_IMPL(__imp__sub_83C0A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A964"))) PPC_WEAK_FUNC(sub_83C0A964);
PPC_FUNC_IMPL(__imp__sub_83C0A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A968"))) PPC_WEAK_FUNC(sub_83C0A968);
PPC_FUNC_IMPL(__imp__sub_83C0A968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A974"))) PPC_WEAK_FUNC(sub_83C0A974);
PPC_FUNC_IMPL(__imp__sub_83C0A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A978"))) PPC_WEAK_FUNC(sub_83C0A978);
PPC_FUNC_IMPL(__imp__sub_83C0A978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A984"))) PPC_WEAK_FUNC(sub_83C0A984);
PPC_FUNC_IMPL(__imp__sub_83C0A984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A988"))) PPC_WEAK_FUNC(sub_83C0A988);
PPC_FUNC_IMPL(__imp__sub_83C0A988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A994"))) PPC_WEAK_FUNC(sub_83C0A994);
PPC_FUNC_IMPL(__imp__sub_83C0A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A998"))) PPC_WEAK_FUNC(sub_83C0A998);
PPC_FUNC_IMPL(__imp__sub_83C0A998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23944
	ctx.r3.s64 = ctx.r11.s64 + 23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A9A4"))) PPC_WEAK_FUNC(sub_83C0A9A4);
PPC_FUNC_IMPL(__imp__sub_83C0A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A9A8"))) PPC_WEAK_FUNC(sub_83C0A9A8);
PPC_FUNC_IMPL(__imp__sub_83C0A9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A9B4"))) PPC_WEAK_FUNC(sub_83C0A9B4);
PPC_FUNC_IMPL(__imp__sub_83C0A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A9B8"))) PPC_WEAK_FUNC(sub_83C0A9B8);
PPC_FUNC_IMPL(__imp__sub_83C0A9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A9C4"))) PPC_WEAK_FUNC(sub_83C0A9C4);
PPC_FUNC_IMPL(__imp__sub_83C0A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A9C8"))) PPC_WEAK_FUNC(sub_83C0A9C8);
PPC_FUNC_IMPL(__imp__sub_83C0A9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23968
	ctx.r3.s64 = ctx.r11.s64 + 23968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0A9D4"))) PPC_WEAK_FUNC(sub_83C0A9D4);
PPC_FUNC_IMPL(__imp__sub_83C0A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0A9D8"))) PPC_WEAK_FUNC(sub_83C0A9D8);
PPC_FUNC_IMPL(__imp__sub_83C0A9D8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// bl 0x83523120
	ctx.lr = 0x83C0A9F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,23976
	ctx.r3.s64 = ctx.r10.s64 + 23976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0A9FC;
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

__attribute__((alias("__imp__sub_83C0AA0C"))) PPC_WEAK_FUNC(sub_83C0AA0C);
PPC_FUNC_IMPL(__imp__sub_83C0AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA10"))) PPC_WEAK_FUNC(sub_83C0AA10);
PPC_FUNC_IMPL(__imp__sub_83C0AA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA1C"))) PPC_WEAK_FUNC(sub_83C0AA1C);
PPC_FUNC_IMPL(__imp__sub_83C0AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA20"))) PPC_WEAK_FUNC(sub_83C0AA20);
PPC_FUNC_IMPL(__imp__sub_83C0AA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA2C"))) PPC_WEAK_FUNC(sub_83C0AA2C);
PPC_FUNC_IMPL(__imp__sub_83C0AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA30"))) PPC_WEAK_FUNC(sub_83C0AA30);
PPC_FUNC_IMPL(__imp__sub_83C0AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24008
	ctx.r3.s64 = ctx.r11.s64 + 24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA3C"))) PPC_WEAK_FUNC(sub_83C0AA3C);
PPC_FUNC_IMPL(__imp__sub_83C0AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA40"))) PPC_WEAK_FUNC(sub_83C0AA40);
PPC_FUNC_IMPL(__imp__sub_83C0AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24016
	ctx.r3.s64 = ctx.r11.s64 + 24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA4C"))) PPC_WEAK_FUNC(sub_83C0AA4C);
PPC_FUNC_IMPL(__imp__sub_83C0AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA50"))) PPC_WEAK_FUNC(sub_83C0AA50);
PPC_FUNC_IMPL(__imp__sub_83C0AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA5C"))) PPC_WEAK_FUNC(sub_83C0AA5C);
PPC_FUNC_IMPL(__imp__sub_83C0AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA60"))) PPC_WEAK_FUNC(sub_83C0AA60);
PPC_FUNC_IMPL(__imp__sub_83C0AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24032
	ctx.r3.s64 = ctx.r11.s64 + 24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA6C"))) PPC_WEAK_FUNC(sub_83C0AA6C);
PPC_FUNC_IMPL(__imp__sub_83C0AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA70"))) PPC_WEAK_FUNC(sub_83C0AA70);
PPC_FUNC_IMPL(__imp__sub_83C0AA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA7C"))) PPC_WEAK_FUNC(sub_83C0AA7C);
PPC_FUNC_IMPL(__imp__sub_83C0AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA80"))) PPC_WEAK_FUNC(sub_83C0AA80);
PPC_FUNC_IMPL(__imp__sub_83C0AA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA8C"))) PPC_WEAK_FUNC(sub_83C0AA8C);
PPC_FUNC_IMPL(__imp__sub_83C0AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AA90"))) PPC_WEAK_FUNC(sub_83C0AA90);
PPC_FUNC_IMPL(__imp__sub_83C0AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AA9C"))) PPC_WEAK_FUNC(sub_83C0AA9C);
PPC_FUNC_IMPL(__imp__sub_83C0AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AAA0"))) PPC_WEAK_FUNC(sub_83C0AAA0);
PPC_FUNC_IMPL(__imp__sub_83C0AAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AAAC"))) PPC_WEAK_FUNC(sub_83C0AAAC);
PPC_FUNC_IMPL(__imp__sub_83C0AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AAB0"))) PPC_WEAK_FUNC(sub_83C0AAB0);
PPC_FUNC_IMPL(__imp__sub_83C0AAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AABC"))) PPC_WEAK_FUNC(sub_83C0AABC);
PPC_FUNC_IMPL(__imp__sub_83C0AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AAC0"))) PPC_WEAK_FUNC(sub_83C0AAC0);
PPC_FUNC_IMPL(__imp__sub_83C0AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24080
	ctx.r3.s64 = ctx.r11.s64 + 24080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AACC"))) PPC_WEAK_FUNC(sub_83C0AACC);
PPC_FUNC_IMPL(__imp__sub_83C0AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AAD0"))) PPC_WEAK_FUNC(sub_83C0AAD0);
PPC_FUNC_IMPL(__imp__sub_83C0AAD0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x83523120
	ctx.lr = 0x83C0AAE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24088
	ctx.r3.s64 = ctx.r10.s64 + 24088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0AAF4;
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

__attribute__((alias("__imp__sub_83C0AB04"))) PPC_WEAK_FUNC(sub_83C0AB04);
PPC_FUNC_IMPL(__imp__sub_83C0AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB08"))) PPC_WEAK_FUNC(sub_83C0AB08);
PPC_FUNC_IMPL(__imp__sub_83C0AB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24104
	ctx.r3.s64 = ctx.r11.s64 + 24104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB14"))) PPC_WEAK_FUNC(sub_83C0AB14);
PPC_FUNC_IMPL(__imp__sub_83C0AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB18"))) PPC_WEAK_FUNC(sub_83C0AB18);
PPC_FUNC_IMPL(__imp__sub_83C0AB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB24"))) PPC_WEAK_FUNC(sub_83C0AB24);
PPC_FUNC_IMPL(__imp__sub_83C0AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB28"))) PPC_WEAK_FUNC(sub_83C0AB28);
PPC_FUNC_IMPL(__imp__sub_83C0AB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB34"))) PPC_WEAK_FUNC(sub_83C0AB34);
PPC_FUNC_IMPL(__imp__sub_83C0AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB38"))) PPC_WEAK_FUNC(sub_83C0AB38);
PPC_FUNC_IMPL(__imp__sub_83C0AB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24128
	ctx.r3.s64 = ctx.r11.s64 + 24128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB44"))) PPC_WEAK_FUNC(sub_83C0AB44);
PPC_FUNC_IMPL(__imp__sub_83C0AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB48"))) PPC_WEAK_FUNC(sub_83C0AB48);
PPC_FUNC_IMPL(__imp__sub_83C0AB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24136
	ctx.r3.s64 = ctx.r11.s64 + 24136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB54"))) PPC_WEAK_FUNC(sub_83C0AB54);
PPC_FUNC_IMPL(__imp__sub_83C0AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB58"))) PPC_WEAK_FUNC(sub_83C0AB58);
PPC_FUNC_IMPL(__imp__sub_83C0AB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB64"))) PPC_WEAK_FUNC(sub_83C0AB64);
PPC_FUNC_IMPL(__imp__sub_83C0AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB68"))) PPC_WEAK_FUNC(sub_83C0AB68);
PPC_FUNC_IMPL(__imp__sub_83C0AB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24152
	ctx.r3.s64 = ctx.r11.s64 + 24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB74"))) PPC_WEAK_FUNC(sub_83C0AB74);
PPC_FUNC_IMPL(__imp__sub_83C0AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB78"))) PPC_WEAK_FUNC(sub_83C0AB78);
PPC_FUNC_IMPL(__imp__sub_83C0AB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24160
	ctx.r3.s64 = ctx.r11.s64 + 24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB84"))) PPC_WEAK_FUNC(sub_83C0AB84);
PPC_FUNC_IMPL(__imp__sub_83C0AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB88"))) PPC_WEAK_FUNC(sub_83C0AB88);
PPC_FUNC_IMPL(__imp__sub_83C0AB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AB94"))) PPC_WEAK_FUNC(sub_83C0AB94);
PPC_FUNC_IMPL(__imp__sub_83C0AB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AB98"))) PPC_WEAK_FUNC(sub_83C0AB98);
PPC_FUNC_IMPL(__imp__sub_83C0AB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24176
	ctx.r3.s64 = ctx.r11.s64 + 24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ABA4"))) PPC_WEAK_FUNC(sub_83C0ABA4);
PPC_FUNC_IMPL(__imp__sub_83C0ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ABA8"))) PPC_WEAK_FUNC(sub_83C0ABA8);
PPC_FUNC_IMPL(__imp__sub_83C0ABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24184
	ctx.r3.s64 = ctx.r11.s64 + 24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ABB4"))) PPC_WEAK_FUNC(sub_83C0ABB4);
PPC_FUNC_IMPL(__imp__sub_83C0ABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ABB8"))) PPC_WEAK_FUNC(sub_83C0ABB8);
PPC_FUNC_IMPL(__imp__sub_83C0ABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ABC4"))) PPC_WEAK_FUNC(sub_83C0ABC4);
PPC_FUNC_IMPL(__imp__sub_83C0ABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ABC8"))) PPC_WEAK_FUNC(sub_83C0ABC8);
PPC_FUNC_IMPL(__imp__sub_83C0ABC8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-68
	ctx.r3.s64 = ctx.r11.s64 + -68;
	// bl 0x83523120
	ctx.lr = 0x83C0ABE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24200
	ctx.r3.s64 = ctx.r10.s64 + 24200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0ABEC;
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

__attribute__((alias("__imp__sub_83C0ABFC"))) PPC_WEAK_FUNC(sub_83C0ABFC);
PPC_FUNC_IMPL(__imp__sub_83C0ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AC00"))) PPC_WEAK_FUNC(sub_83C0AC00);
PPC_FUNC_IMPL(__imp__sub_83C0AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-52
	ctx.r7.s64 = ctx.r8.s64 + -52;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -52);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-52(r8)
	PPC_STORE_U32(ctx.r8.u32 + -52, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0AC28"))) PPC_WEAK_FUNC(sub_83C0AC28);
PPC_FUNC_IMPL(__imp__sub_83C0AC28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-22036
	ctx.r6.s64 = ctx.r7.s64 + -22036;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -52);
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
	// std r9,-22036(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22036, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0AC70"))) PPC_WEAK_FUNC(sub_83C0AC70);
PPC_FUNC_IMPL(__imp__sub_83C0AC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24216
	ctx.r3.s64 = ctx.r11.s64 + 24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AC7C"))) PPC_WEAK_FUNC(sub_83C0AC7C);
PPC_FUNC_IMPL(__imp__sub_83C0AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AC80"))) PPC_WEAK_FUNC(sub_83C0AC80);
PPC_FUNC_IMPL(__imp__sub_83C0AC80) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// bl 0x8259af80
	ctx.lr = 0x83C0AC98;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24232
	ctx.r3.s64 = ctx.r10.s64 + 24232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0ACA4;
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

__attribute__((alias("__imp__sub_83C0ACB4"))) PPC_WEAK_FUNC(sub_83C0ACB4);
PPC_FUNC_IMPL(__imp__sub_83C0ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ACB8"))) PPC_WEAK_FUNC(sub_83C0ACB8);
PPC_FUNC_IMPL(__imp__sub_83C0ACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-64
	ctx.r11.s64 = ctx.r8.s64 + -64;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-22060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24224
	ctx.r3.s64 = ctx.r6.s64 + 24224;
	// stw r10,-64(r8)
	PPC_STORE_U32(ctx.r8.u32 + -64, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ACE8"))) PPC_WEAK_FUNC(sub_83C0ACE8);
PPC_FUNC_IMPL(__imp__sub_83C0ACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ACF4"))) PPC_WEAK_FUNC(sub_83C0ACF4);
PPC_FUNC_IMPL(__imp__sub_83C0ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ACF8"))) PPC_WEAK_FUNC(sub_83C0ACF8);
PPC_FUNC_IMPL(__imp__sub_83C0ACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24248
	ctx.r3.s64 = ctx.r11.s64 + 24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD04"))) PPC_WEAK_FUNC(sub_83C0AD04);
PPC_FUNC_IMPL(__imp__sub_83C0AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD08"))) PPC_WEAK_FUNC(sub_83C0AD08);
PPC_FUNC_IMPL(__imp__sub_83C0AD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD14"))) PPC_WEAK_FUNC(sub_83C0AD14);
PPC_FUNC_IMPL(__imp__sub_83C0AD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD18"))) PPC_WEAK_FUNC(sub_83C0AD18);
PPC_FUNC_IMPL(__imp__sub_83C0AD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24264
	ctx.r3.s64 = ctx.r11.s64 + 24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD24"))) PPC_WEAK_FUNC(sub_83C0AD24);
PPC_FUNC_IMPL(__imp__sub_83C0AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD28"))) PPC_WEAK_FUNC(sub_83C0AD28);
PPC_FUNC_IMPL(__imp__sub_83C0AD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24272
	ctx.r3.s64 = ctx.r11.s64 + 24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD34"))) PPC_WEAK_FUNC(sub_83C0AD34);
PPC_FUNC_IMPL(__imp__sub_83C0AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD38"))) PPC_WEAK_FUNC(sub_83C0AD38);
PPC_FUNC_IMPL(__imp__sub_83C0AD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD44"))) PPC_WEAK_FUNC(sub_83C0AD44);
PPC_FUNC_IMPL(__imp__sub_83C0AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD48"))) PPC_WEAK_FUNC(sub_83C0AD48);
PPC_FUNC_IMPL(__imp__sub_83C0AD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD54"))) PPC_WEAK_FUNC(sub_83C0AD54);
PPC_FUNC_IMPL(__imp__sub_83C0AD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD58"))) PPC_WEAK_FUNC(sub_83C0AD58);
PPC_FUNC_IMPL(__imp__sub_83C0AD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD64"))) PPC_WEAK_FUNC(sub_83C0AD64);
PPC_FUNC_IMPL(__imp__sub_83C0AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD68"))) PPC_WEAK_FUNC(sub_83C0AD68);
PPC_FUNC_IMPL(__imp__sub_83C0AD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24304
	ctx.r3.s64 = ctx.r11.s64 + 24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD74"))) PPC_WEAK_FUNC(sub_83C0AD74);
PPC_FUNC_IMPL(__imp__sub_83C0AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD78"))) PPC_WEAK_FUNC(sub_83C0AD78);
PPC_FUNC_IMPL(__imp__sub_83C0AD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24312
	ctx.r3.s64 = ctx.r11.s64 + 24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD84"))) PPC_WEAK_FUNC(sub_83C0AD84);
PPC_FUNC_IMPL(__imp__sub_83C0AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD88"))) PPC_WEAK_FUNC(sub_83C0AD88);
PPC_FUNC_IMPL(__imp__sub_83C0AD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AD94"))) PPC_WEAK_FUNC(sub_83C0AD94);
PPC_FUNC_IMPL(__imp__sub_83C0AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AD98"))) PPC_WEAK_FUNC(sub_83C0AD98);
PPC_FUNC_IMPL(__imp__sub_83C0AD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24328
	ctx.r3.s64 = ctx.r11.s64 + 24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0ADA4"))) PPC_WEAK_FUNC(sub_83C0ADA4);
PPC_FUNC_IMPL(__imp__sub_83C0ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ADA8"))) PPC_WEAK_FUNC(sub_83C0ADA8);
PPC_FUNC_IMPL(__imp__sub_83C0ADA8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x83523120
	ctx.lr = 0x83C0ADC0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24336
	ctx.r3.s64 = ctx.r10.s64 + 24336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0ADCC;
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

__attribute__((alias("__imp__sub_83C0ADDC"))) PPC_WEAK_FUNC(sub_83C0ADDC);
PPC_FUNC_IMPL(__imp__sub_83C0ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0ADE0"))) PPC_WEAK_FUNC(sub_83C0ADE0);
PPC_FUNC_IMPL(__imp__sub_83C0ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,320
	ctx.r7.s64 = ctx.r8.s64 + 320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0AE08"))) PPC_WEAK_FUNC(sub_83C0AE08);
PPC_FUNC_IMPL(__imp__sub_83C0AE08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-21904
	ctx.r6.s64 = ctx.r7.s64 + -21904;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
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
	// std r9,-21904(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21904, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0AE50"))) PPC_WEAK_FUNC(sub_83C0AE50);
PPC_FUNC_IMPL(__imp__sub_83C0AE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24352
	ctx.r3.s64 = ctx.r11.s64 + 24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AE5C"))) PPC_WEAK_FUNC(sub_83C0AE5C);
PPC_FUNC_IMPL(__imp__sub_83C0AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AE60"))) PPC_WEAK_FUNC(sub_83C0AE60);
PPC_FUNC_IMPL(__imp__sub_83C0AE60) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// bl 0x8259af80
	ctx.lr = 0x83C0AE78;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24368
	ctx.r3.s64 = ctx.r10.s64 + 24368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0AE84;
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

__attribute__((alias("__imp__sub_83C0AE94"))) PPC_WEAK_FUNC(sub_83C0AE94);
PPC_FUNC_IMPL(__imp__sub_83C0AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AE98"))) PPC_WEAK_FUNC(sub_83C0AE98);
PPC_FUNC_IMPL(__imp__sub_83C0AE98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,308
	ctx.r11.s64 = ctx.r8.s64 + 308;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-21928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24360
	ctx.r3.s64 = ctx.r6.s64 + 24360;
	// stw r10,308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AEC8"))) PPC_WEAK_FUNC(sub_83C0AEC8);
PPC_FUNC_IMPL(__imp__sub_83C0AEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24376
	ctx.r3.s64 = ctx.r11.s64 + 24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AED4"))) PPC_WEAK_FUNC(sub_83C0AED4);
PPC_FUNC_IMPL(__imp__sub_83C0AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AED8"))) PPC_WEAK_FUNC(sub_83C0AED8);
PPC_FUNC_IMPL(__imp__sub_83C0AED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24384
	ctx.r3.s64 = ctx.r11.s64 + 24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AEE4"))) PPC_WEAK_FUNC(sub_83C0AEE4);
PPC_FUNC_IMPL(__imp__sub_83C0AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AEE8"))) PPC_WEAK_FUNC(sub_83C0AEE8);
PPC_FUNC_IMPL(__imp__sub_83C0AEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24392
	ctx.r3.s64 = ctx.r11.s64 + 24392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AEF4"))) PPC_WEAK_FUNC(sub_83C0AEF4);
PPC_FUNC_IMPL(__imp__sub_83C0AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AEF8"))) PPC_WEAK_FUNC(sub_83C0AEF8);
PPC_FUNC_IMPL(__imp__sub_83C0AEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24400
	ctx.r3.s64 = ctx.r11.s64 + 24400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF04"))) PPC_WEAK_FUNC(sub_83C0AF04);
PPC_FUNC_IMPL(__imp__sub_83C0AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF08"))) PPC_WEAK_FUNC(sub_83C0AF08);
PPC_FUNC_IMPL(__imp__sub_83C0AF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24408
	ctx.r3.s64 = ctx.r11.s64 + 24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF14"))) PPC_WEAK_FUNC(sub_83C0AF14);
PPC_FUNC_IMPL(__imp__sub_83C0AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF18"))) PPC_WEAK_FUNC(sub_83C0AF18);
PPC_FUNC_IMPL(__imp__sub_83C0AF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF24"))) PPC_WEAK_FUNC(sub_83C0AF24);
PPC_FUNC_IMPL(__imp__sub_83C0AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF28"))) PPC_WEAK_FUNC(sub_83C0AF28);
PPC_FUNC_IMPL(__imp__sub_83C0AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24424
	ctx.r3.s64 = ctx.r11.s64 + 24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF34"))) PPC_WEAK_FUNC(sub_83C0AF34);
PPC_FUNC_IMPL(__imp__sub_83C0AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF38"))) PPC_WEAK_FUNC(sub_83C0AF38);
PPC_FUNC_IMPL(__imp__sub_83C0AF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF44"))) PPC_WEAK_FUNC(sub_83C0AF44);
PPC_FUNC_IMPL(__imp__sub_83C0AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF48"))) PPC_WEAK_FUNC(sub_83C0AF48);
PPC_FUNC_IMPL(__imp__sub_83C0AF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24440
	ctx.r3.s64 = ctx.r11.s64 + 24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF54"))) PPC_WEAK_FUNC(sub_83C0AF54);
PPC_FUNC_IMPL(__imp__sub_83C0AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF58"))) PPC_WEAK_FUNC(sub_83C0AF58);
PPC_FUNC_IMPL(__imp__sub_83C0AF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF64"))) PPC_WEAK_FUNC(sub_83C0AF64);
PPC_FUNC_IMPL(__imp__sub_83C0AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF68"))) PPC_WEAK_FUNC(sub_83C0AF68);
PPC_FUNC_IMPL(__imp__sub_83C0AF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24456
	ctx.r3.s64 = ctx.r11.s64 + 24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF74"))) PPC_WEAK_FUNC(sub_83C0AF74);
PPC_FUNC_IMPL(__imp__sub_83C0AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF78"))) PPC_WEAK_FUNC(sub_83C0AF78);
PPC_FUNC_IMPL(__imp__sub_83C0AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AF84"))) PPC_WEAK_FUNC(sub_83C0AF84);
PPC_FUNC_IMPL(__imp__sub_83C0AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AF88"))) PPC_WEAK_FUNC(sub_83C0AF88);
PPC_FUNC_IMPL(__imp__sub_83C0AF88) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,672
	ctx.r3.s64 = ctx.r11.s64 + 672;
	// bl 0x83523120
	ctx.lr = 0x83C0AFA0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24472
	ctx.r3.s64 = ctx.r10.s64 + 24472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0AFAC;
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

__attribute__((alias("__imp__sub_83C0AFBC"))) PPC_WEAK_FUNC(sub_83C0AFBC);
PPC_FUNC_IMPL(__imp__sub_83C0AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AFC0"))) PPC_WEAK_FUNC(sub_83C0AFC0);
PPC_FUNC_IMPL(__imp__sub_83C0AFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AFCC"))) PPC_WEAK_FUNC(sub_83C0AFCC);
PPC_FUNC_IMPL(__imp__sub_83C0AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AFD0"))) PPC_WEAK_FUNC(sub_83C0AFD0);
PPC_FUNC_IMPL(__imp__sub_83C0AFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24496
	ctx.r3.s64 = ctx.r11.s64 + 24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AFDC"))) PPC_WEAK_FUNC(sub_83C0AFDC);
PPC_FUNC_IMPL(__imp__sub_83C0AFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AFE0"))) PPC_WEAK_FUNC(sub_83C0AFE0);
PPC_FUNC_IMPL(__imp__sub_83C0AFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AFEC"))) PPC_WEAK_FUNC(sub_83C0AFEC);
PPC_FUNC_IMPL(__imp__sub_83C0AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0AFF0"))) PPC_WEAK_FUNC(sub_83C0AFF0);
PPC_FUNC_IMPL(__imp__sub_83C0AFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0AFFC"))) PPC_WEAK_FUNC(sub_83C0AFFC);
PPC_FUNC_IMPL(__imp__sub_83C0AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B000"))) PPC_WEAK_FUNC(sub_83C0B000);
PPC_FUNC_IMPL(__imp__sub_83C0B000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24520
	ctx.r3.s64 = ctx.r11.s64 + 24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B00C"))) PPC_WEAK_FUNC(sub_83C0B00C);
PPC_FUNC_IMPL(__imp__sub_83C0B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B010"))) PPC_WEAK_FUNC(sub_83C0B010);
PPC_FUNC_IMPL(__imp__sub_83C0B010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24528
	ctx.r3.s64 = ctx.r11.s64 + 24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B01C"))) PPC_WEAK_FUNC(sub_83C0B01C);
PPC_FUNC_IMPL(__imp__sub_83C0B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B020"))) PPC_WEAK_FUNC(sub_83C0B020);
PPC_FUNC_IMPL(__imp__sub_83C0B020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24536
	ctx.r3.s64 = ctx.r11.s64 + 24536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B02C"))) PPC_WEAK_FUNC(sub_83C0B02C);
PPC_FUNC_IMPL(__imp__sub_83C0B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B030"))) PPC_WEAK_FUNC(sub_83C0B030);
PPC_FUNC_IMPL(__imp__sub_83C0B030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24544
	ctx.r3.s64 = ctx.r11.s64 + 24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B03C"))) PPC_WEAK_FUNC(sub_83C0B03C);
PPC_FUNC_IMPL(__imp__sub_83C0B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B040"))) PPC_WEAK_FUNC(sub_83C0B040);
PPC_FUNC_IMPL(__imp__sub_83C0B040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B04C"))) PPC_WEAK_FUNC(sub_83C0B04C);
PPC_FUNC_IMPL(__imp__sub_83C0B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B050"))) PPC_WEAK_FUNC(sub_83C0B050);
PPC_FUNC_IMPL(__imp__sub_83C0B050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B05C"))) PPC_WEAK_FUNC(sub_83C0B05C);
PPC_FUNC_IMPL(__imp__sub_83C0B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B060"))) PPC_WEAK_FUNC(sub_83C0B060);
PPC_FUNC_IMPL(__imp__sub_83C0B060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B06C"))) PPC_WEAK_FUNC(sub_83C0B06C);
PPC_FUNC_IMPL(__imp__sub_83C0B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B070"))) PPC_WEAK_FUNC(sub_83C0B070);
PPC_FUNC_IMPL(__imp__sub_83C0B070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B07C"))) PPC_WEAK_FUNC(sub_83C0B07C);
PPC_FUNC_IMPL(__imp__sub_83C0B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B080"))) PPC_WEAK_FUNC(sub_83C0B080);
PPC_FUNC_IMPL(__imp__sub_83C0B080) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,684
	ctx.r3.s64 = ctx.r11.s64 + 684;
	// bl 0x83523120
	ctx.lr = 0x83C0B098;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24584
	ctx.r3.s64 = ctx.r10.s64 + 24584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0B0A4;
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

__attribute__((alias("__imp__sub_83C0B0B4"))) PPC_WEAK_FUNC(sub_83C0B0B4);
PPC_FUNC_IMPL(__imp__sub_83C0B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B0B8"))) PPC_WEAK_FUNC(sub_83C0B0B8);
PPC_FUNC_IMPL(__imp__sub_83C0B0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B0C4"))) PPC_WEAK_FUNC(sub_83C0B0C4);
PPC_FUNC_IMPL(__imp__sub_83C0B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B0C8"))) PPC_WEAK_FUNC(sub_83C0B0C8);
PPC_FUNC_IMPL(__imp__sub_83C0B0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B0D4"))) PPC_WEAK_FUNC(sub_83C0B0D4);
PPC_FUNC_IMPL(__imp__sub_83C0B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B0D8"))) PPC_WEAK_FUNC(sub_83C0B0D8);
PPC_FUNC_IMPL(__imp__sub_83C0B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B0E4"))) PPC_WEAK_FUNC(sub_83C0B0E4);
PPC_FUNC_IMPL(__imp__sub_83C0B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B0E8"))) PPC_WEAK_FUNC(sub_83C0B0E8);
PPC_FUNC_IMPL(__imp__sub_83C0B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B0F4"))) PPC_WEAK_FUNC(sub_83C0B0F4);
PPC_FUNC_IMPL(__imp__sub_83C0B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B0F8"))) PPC_WEAK_FUNC(sub_83C0B0F8);
PPC_FUNC_IMPL(__imp__sub_83C0B0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24632
	ctx.r3.s64 = ctx.r11.s64 + 24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B104"))) PPC_WEAK_FUNC(sub_83C0B104);
PPC_FUNC_IMPL(__imp__sub_83C0B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B108"))) PPC_WEAK_FUNC(sub_83C0B108);
PPC_FUNC_IMPL(__imp__sub_83C0B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24640
	ctx.r3.s64 = ctx.r11.s64 + 24640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B114"))) PPC_WEAK_FUNC(sub_83C0B114);
PPC_FUNC_IMPL(__imp__sub_83C0B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B118"))) PPC_WEAK_FUNC(sub_83C0B118);
PPC_FUNC_IMPL(__imp__sub_83C0B118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24648
	ctx.r3.s64 = ctx.r11.s64 + 24648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B124"))) PPC_WEAK_FUNC(sub_83C0B124);
PPC_FUNC_IMPL(__imp__sub_83C0B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B128"))) PPC_WEAK_FUNC(sub_83C0B128);
PPC_FUNC_IMPL(__imp__sub_83C0B128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B134"))) PPC_WEAK_FUNC(sub_83C0B134);
PPC_FUNC_IMPL(__imp__sub_83C0B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B138"))) PPC_WEAK_FUNC(sub_83C0B138);
PPC_FUNC_IMPL(__imp__sub_83C0B138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24664
	ctx.r3.s64 = ctx.r11.s64 + 24664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B144"))) PPC_WEAK_FUNC(sub_83C0B144);
PPC_FUNC_IMPL(__imp__sub_83C0B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B148"))) PPC_WEAK_FUNC(sub_83C0B148);
PPC_FUNC_IMPL(__imp__sub_83C0B148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B154"))) PPC_WEAK_FUNC(sub_83C0B154);
PPC_FUNC_IMPL(__imp__sub_83C0B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0B158"))) PPC_WEAK_FUNC(sub_83C0B158);
PPC_FUNC_IMPL(__imp__sub_83C0B158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,24680
	ctx.r3.s64 = ctx.r11.s64 + 24680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0B164"))) PPC_WEAK_FUNC(sub_83C0B164);
PPC_FUNC_IMPL(__imp__sub_83C0B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

