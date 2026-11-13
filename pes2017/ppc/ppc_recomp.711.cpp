#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C10F1C"))) PPC_WEAK_FUNC(sub_83C10F1C);
PPC_FUNC_IMPL(__imp__sub_83C10F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10F20"))) PPC_WEAK_FUNC(sub_83C10F20);
PPC_FUNC_IMPL(__imp__sub_83C10F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27084
	ctx.r7.s64 = ctx.r8.s64 + 27084;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27084);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27084, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10F48"))) PPC_WEAK_FUNC(sub_83C10F48);
PPC_FUNC_IMPL(__imp__sub_83C10F48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14124
	ctx.r6.s64 = ctx.r7.s64 + -14124;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14196(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14196);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27084(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27084);
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
	// std r9,-14124(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14124, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10F90"))) PPC_WEAK_FUNC(sub_83C10F90);
PPC_FUNC_IMPL(__imp__sub_83C10F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32416
	ctx.r3.s64 = ctx.r11.s64 + 32416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10F9C"))) PPC_WEAK_FUNC(sub_83C10F9C);
PPC_FUNC_IMPL(__imp__sub_83C10F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10FA0"))) PPC_WEAK_FUNC(sub_83C10FA0);
PPC_FUNC_IMPL(__imp__sub_83C10FA0) {
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
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// bl 0x8259af80
	ctx.lr = 0x83C10FB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32432
	ctx.r3.s64 = ctx.r10.s64 + 32432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10FC4;
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

__attribute__((alias("__imp__sub_83C10FD4"))) PPC_WEAK_FUNC(sub_83C10FD4);
PPC_FUNC_IMPL(__imp__sub_83C10FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10FD8"))) PPC_WEAK_FUNC(sub_83C10FD8);
PPC_FUNC_IMPL(__imp__sub_83C10FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27072
	ctx.r11.s64 = ctx.r8.s64 + 27072;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32424
	ctx.r3.s64 = ctx.r6.s64 + 32424;
	// stw r10,27072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27072, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11008"))) PPC_WEAK_FUNC(sub_83C11008);
PPC_FUNC_IMPL(__imp__sub_83C11008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32440
	ctx.r3.s64 = ctx.r11.s64 + 32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11014"))) PPC_WEAK_FUNC(sub_83C11014);
PPC_FUNC_IMPL(__imp__sub_83C11014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11018"))) PPC_WEAK_FUNC(sub_83C11018);
PPC_FUNC_IMPL(__imp__sub_83C11018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32448
	ctx.r3.s64 = ctx.r11.s64 + 32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11024"))) PPC_WEAK_FUNC(sub_83C11024);
PPC_FUNC_IMPL(__imp__sub_83C11024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11028"))) PPC_WEAK_FUNC(sub_83C11028);
PPC_FUNC_IMPL(__imp__sub_83C11028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11034"))) PPC_WEAK_FUNC(sub_83C11034);
PPC_FUNC_IMPL(__imp__sub_83C11034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11038"))) PPC_WEAK_FUNC(sub_83C11038);
PPC_FUNC_IMPL(__imp__sub_83C11038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11044"))) PPC_WEAK_FUNC(sub_83C11044);
PPC_FUNC_IMPL(__imp__sub_83C11044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11048"))) PPC_WEAK_FUNC(sub_83C11048);
PPC_FUNC_IMPL(__imp__sub_83C11048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11054"))) PPC_WEAK_FUNC(sub_83C11054);
PPC_FUNC_IMPL(__imp__sub_83C11054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11058"))) PPC_WEAK_FUNC(sub_83C11058);
PPC_FUNC_IMPL(__imp__sub_83C11058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11064"))) PPC_WEAK_FUNC(sub_83C11064);
PPC_FUNC_IMPL(__imp__sub_83C11064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11068"))) PPC_WEAK_FUNC(sub_83C11068);
PPC_FUNC_IMPL(__imp__sub_83C11068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11074"))) PPC_WEAK_FUNC(sub_83C11074);
PPC_FUNC_IMPL(__imp__sub_83C11074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11078"))) PPC_WEAK_FUNC(sub_83C11078);
PPC_FUNC_IMPL(__imp__sub_83C11078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11084"))) PPC_WEAK_FUNC(sub_83C11084);
PPC_FUNC_IMPL(__imp__sub_83C11084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11088"))) PPC_WEAK_FUNC(sub_83C11088);
PPC_FUNC_IMPL(__imp__sub_83C11088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32504
	ctx.r3.s64 = ctx.r11.s64 + 32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11094"))) PPC_WEAK_FUNC(sub_83C11094);
PPC_FUNC_IMPL(__imp__sub_83C11094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11098"))) PPC_WEAK_FUNC(sub_83C11098);
PPC_FUNC_IMPL(__imp__sub_83C11098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C110A4"))) PPC_WEAK_FUNC(sub_83C110A4);
PPC_FUNC_IMPL(__imp__sub_83C110A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C110A8"))) PPC_WEAK_FUNC(sub_83C110A8);
PPC_FUNC_IMPL(__imp__sub_83C110A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C110B4"))) PPC_WEAK_FUNC(sub_83C110B4);
PPC_FUNC_IMPL(__imp__sub_83C110B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C110B8"))) PPC_WEAK_FUNC(sub_83C110B8);
PPC_FUNC_IMPL(__imp__sub_83C110B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32528
	ctx.r3.s64 = ctx.r11.s64 + 32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C110C4"))) PPC_WEAK_FUNC(sub_83C110C4);
PPC_FUNC_IMPL(__imp__sub_83C110C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C110C8"))) PPC_WEAK_FUNC(sub_83C110C8);
PPC_FUNC_IMPL(__imp__sub_83C110C8) {
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
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// bl 0x83523120
	ctx.lr = 0x83C110E0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32536
	ctx.r3.s64 = ctx.r10.s64 + 32536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C110EC;
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

__attribute__((alias("__imp__sub_83C110FC"))) PPC_WEAK_FUNC(sub_83C110FC);
PPC_FUNC_IMPL(__imp__sub_83C110FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11100"))) PPC_WEAK_FUNC(sub_83C11100);
PPC_FUNC_IMPL(__imp__sub_83C11100) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27444
	ctx.r7.s64 = ctx.r8.s64 + 27444;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27444(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27444);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27444, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11128"))) PPC_WEAK_FUNC(sub_83C11128);
PPC_FUNC_IMPL(__imp__sub_83C11128) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-13996
	ctx.r6.s64 = ctx.r7.s64 + -13996;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14068(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14068);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27444(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27444);
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
	// std r9,-13996(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13996, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11170"))) PPC_WEAK_FUNC(sub_83C11170);
PPC_FUNC_IMPL(__imp__sub_83C11170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32552
	ctx.r3.s64 = ctx.r11.s64 + 32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1117C"))) PPC_WEAK_FUNC(sub_83C1117C);
PPC_FUNC_IMPL(__imp__sub_83C1117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11180"))) PPC_WEAK_FUNC(sub_83C11180);
PPC_FUNC_IMPL(__imp__sub_83C11180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1118C"))) PPC_WEAK_FUNC(sub_83C1118C);
PPC_FUNC_IMPL(__imp__sub_83C1118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11190"))) PPC_WEAK_FUNC(sub_83C11190);
PPC_FUNC_IMPL(__imp__sub_83C11190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1119C"))) PPC_WEAK_FUNC(sub_83C1119C);
PPC_FUNC_IMPL(__imp__sub_83C1119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111A0"))) PPC_WEAK_FUNC(sub_83C111A0);
PPC_FUNC_IMPL(__imp__sub_83C111A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111AC"))) PPC_WEAK_FUNC(sub_83C111AC);
PPC_FUNC_IMPL(__imp__sub_83C111AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111B0"))) PPC_WEAK_FUNC(sub_83C111B0);
PPC_FUNC_IMPL(__imp__sub_83C111B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111BC"))) PPC_WEAK_FUNC(sub_83C111BC);
PPC_FUNC_IMPL(__imp__sub_83C111BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111C0"))) PPC_WEAK_FUNC(sub_83C111C0);
PPC_FUNC_IMPL(__imp__sub_83C111C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111CC"))) PPC_WEAK_FUNC(sub_83C111CC);
PPC_FUNC_IMPL(__imp__sub_83C111CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111D0"))) PPC_WEAK_FUNC(sub_83C111D0);
PPC_FUNC_IMPL(__imp__sub_83C111D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32600
	ctx.r3.s64 = ctx.r11.s64 + 32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111DC"))) PPC_WEAK_FUNC(sub_83C111DC);
PPC_FUNC_IMPL(__imp__sub_83C111DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111E0"))) PPC_WEAK_FUNC(sub_83C111E0);
PPC_FUNC_IMPL(__imp__sub_83C111E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32608
	ctx.r3.s64 = ctx.r11.s64 + 32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111EC"))) PPC_WEAK_FUNC(sub_83C111EC);
PPC_FUNC_IMPL(__imp__sub_83C111EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C111F0"))) PPC_WEAK_FUNC(sub_83C111F0);
PPC_FUNC_IMPL(__imp__sub_83C111F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32616
	ctx.r3.s64 = ctx.r11.s64 + 32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C111FC"))) PPC_WEAK_FUNC(sub_83C111FC);
PPC_FUNC_IMPL(__imp__sub_83C111FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11200"))) PPC_WEAK_FUNC(sub_83C11200);
PPC_FUNC_IMPL(__imp__sub_83C11200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32624
	ctx.r3.s64 = ctx.r11.s64 + 32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1120C"))) PPC_WEAK_FUNC(sub_83C1120C);
PPC_FUNC_IMPL(__imp__sub_83C1120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11210"))) PPC_WEAK_FUNC(sub_83C11210);
PPC_FUNC_IMPL(__imp__sub_83C11210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1121C"))) PPC_WEAK_FUNC(sub_83C1121C);
PPC_FUNC_IMPL(__imp__sub_83C1121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11220"))) PPC_WEAK_FUNC(sub_83C11220);
PPC_FUNC_IMPL(__imp__sub_83C11220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1122C"))) PPC_WEAK_FUNC(sub_83C1122C);
PPC_FUNC_IMPL(__imp__sub_83C1122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11230"))) PPC_WEAK_FUNC(sub_83C11230);
PPC_FUNC_IMPL(__imp__sub_83C11230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32648
	ctx.r3.s64 = ctx.r11.s64 + 32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1123C"))) PPC_WEAK_FUNC(sub_83C1123C);
PPC_FUNC_IMPL(__imp__sub_83C1123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11240"))) PPC_WEAK_FUNC(sub_83C11240);
PPC_FUNC_IMPL(__imp__sub_83C11240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32656
	ctx.r3.s64 = ctx.r11.s64 + 32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1124C"))) PPC_WEAK_FUNC(sub_83C1124C);
PPC_FUNC_IMPL(__imp__sub_83C1124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11250"))) PPC_WEAK_FUNC(sub_83C11250);
PPC_FUNC_IMPL(__imp__sub_83C11250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1125C"))) PPC_WEAK_FUNC(sub_83C1125C);
PPC_FUNC_IMPL(__imp__sub_83C1125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11260"))) PPC_WEAK_FUNC(sub_83C11260);
PPC_FUNC_IMPL(__imp__sub_83C11260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32672
	ctx.r3.s64 = ctx.r11.s64 + 32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1126C"))) PPC_WEAK_FUNC(sub_83C1126C);
PPC_FUNC_IMPL(__imp__sub_83C1126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11270"))) PPC_WEAK_FUNC(sub_83C11270);
PPC_FUNC_IMPL(__imp__sub_83C11270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32680
	ctx.r3.s64 = ctx.r11.s64 + 32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1127C"))) PPC_WEAK_FUNC(sub_83C1127C);
PPC_FUNC_IMPL(__imp__sub_83C1127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11280"))) PPC_WEAK_FUNC(sub_83C11280);
PPC_FUNC_IMPL(__imp__sub_83C11280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1128C"))) PPC_WEAK_FUNC(sub_83C1128C);
PPC_FUNC_IMPL(__imp__sub_83C1128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11290"))) PPC_WEAK_FUNC(sub_83C11290);
PPC_FUNC_IMPL(__imp__sub_83C11290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1129C"))) PPC_WEAK_FUNC(sub_83C1129C);
PPC_FUNC_IMPL(__imp__sub_83C1129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112A0"))) PPC_WEAK_FUNC(sub_83C112A0);
PPC_FUNC_IMPL(__imp__sub_83C112A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32704
	ctx.r3.s64 = ctx.r11.s64 + 32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C112AC"))) PPC_WEAK_FUNC(sub_83C112AC);
PPC_FUNC_IMPL(__imp__sub_83C112AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112B0"))) PPC_WEAK_FUNC(sub_83C112B0);
PPC_FUNC_IMPL(__imp__sub_83C112B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32712
	ctx.r3.s64 = ctx.r11.s64 + 32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C112BC"))) PPC_WEAK_FUNC(sub_83C112BC);
PPC_FUNC_IMPL(__imp__sub_83C112BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112C0"))) PPC_WEAK_FUNC(sub_83C112C0);
PPC_FUNC_IMPL(__imp__sub_83C112C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32720
	ctx.r3.s64 = ctx.r11.s64 + 32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C112CC"))) PPC_WEAK_FUNC(sub_83C112CC);
PPC_FUNC_IMPL(__imp__sub_83C112CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112D0"))) PPC_WEAK_FUNC(sub_83C112D0);
PPC_FUNC_IMPL(__imp__sub_83C112D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32728
	ctx.r3.s64 = ctx.r11.s64 + 32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C112DC"))) PPC_WEAK_FUNC(sub_83C112DC);
PPC_FUNC_IMPL(__imp__sub_83C112DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112E0"))) PPC_WEAK_FUNC(sub_83C112E0);
PPC_FUNC_IMPL(__imp__sub_83C112E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C112EC"))) PPC_WEAK_FUNC(sub_83C112EC);
PPC_FUNC_IMPL(__imp__sub_83C112EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C112F0"))) PPC_WEAK_FUNC(sub_83C112F0);
PPC_FUNC_IMPL(__imp__sub_83C112F0) {
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
	// addi r3,r11,27460
	ctx.r3.s64 = ctx.r11.s64 + 27460;
	// bl 0x83523120
	ctx.lr = 0x83C11308;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32744
	ctx.r3.s64 = ctx.r10.s64 + 32744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C11314;
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

__attribute__((alias("__imp__sub_83C11324"))) PPC_WEAK_FUNC(sub_83C11324);
PPC_FUNC_IMPL(__imp__sub_83C11324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11328"))) PPC_WEAK_FUNC(sub_83C11328);
PPC_FUNC_IMPL(__imp__sub_83C11328) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27464
	ctx.r7.s64 = ctx.r8.s64 + 27464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11350"))) PPC_WEAK_FUNC(sub_83C11350);
PPC_FUNC_IMPL(__imp__sub_83C11350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32760
	ctx.r3.s64 = ctx.r11.s64 + 32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1135C"))) PPC_WEAK_FUNC(sub_83C1135C);
PPC_FUNC_IMPL(__imp__sub_83C1135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11360"))) PPC_WEAK_FUNC(sub_83C11360);
PPC_FUNC_IMPL(__imp__sub_83C11360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1136C"))) PPC_WEAK_FUNC(sub_83C1136C);
PPC_FUNC_IMPL(__imp__sub_83C1136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11370"))) PPC_WEAK_FUNC(sub_83C11370);
PPC_FUNC_IMPL(__imp__sub_83C11370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1137C"))) PPC_WEAK_FUNC(sub_83C1137C);
PPC_FUNC_IMPL(__imp__sub_83C1137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11380"))) PPC_WEAK_FUNC(sub_83C11380);
PPC_FUNC_IMPL(__imp__sub_83C11380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1138C"))) PPC_WEAK_FUNC(sub_83C1138C);
PPC_FUNC_IMPL(__imp__sub_83C1138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11390"))) PPC_WEAK_FUNC(sub_83C11390);
PPC_FUNC_IMPL(__imp__sub_83C11390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32744
	ctx.r3.s64 = ctx.r11.s64 + -32744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1139C"))) PPC_WEAK_FUNC(sub_83C1139C);
PPC_FUNC_IMPL(__imp__sub_83C1139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113A0"))) PPC_WEAK_FUNC(sub_83C113A0);
PPC_FUNC_IMPL(__imp__sub_83C113A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113AC"))) PPC_WEAK_FUNC(sub_83C113AC);
PPC_FUNC_IMPL(__imp__sub_83C113AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113B0"))) PPC_WEAK_FUNC(sub_83C113B0);
PPC_FUNC_IMPL(__imp__sub_83C113B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113BC"))) PPC_WEAK_FUNC(sub_83C113BC);
PPC_FUNC_IMPL(__imp__sub_83C113BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113C0"))) PPC_WEAK_FUNC(sub_83C113C0);
PPC_FUNC_IMPL(__imp__sub_83C113C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113CC"))) PPC_WEAK_FUNC(sub_83C113CC);
PPC_FUNC_IMPL(__imp__sub_83C113CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113D0"))) PPC_WEAK_FUNC(sub_83C113D0);
PPC_FUNC_IMPL(__imp__sub_83C113D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32712
	ctx.r3.s64 = ctx.r11.s64 + -32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113DC"))) PPC_WEAK_FUNC(sub_83C113DC);
PPC_FUNC_IMPL(__imp__sub_83C113DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113E0"))) PPC_WEAK_FUNC(sub_83C113E0);
PPC_FUNC_IMPL(__imp__sub_83C113E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32704
	ctx.r3.s64 = ctx.r11.s64 + -32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113EC"))) PPC_WEAK_FUNC(sub_83C113EC);
PPC_FUNC_IMPL(__imp__sub_83C113EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C113F0"))) PPC_WEAK_FUNC(sub_83C113F0);
PPC_FUNC_IMPL(__imp__sub_83C113F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C113FC"))) PPC_WEAK_FUNC(sub_83C113FC);
PPC_FUNC_IMPL(__imp__sub_83C113FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11400"))) PPC_WEAK_FUNC(sub_83C11400);
PPC_FUNC_IMPL(__imp__sub_83C11400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32688
	ctx.r3.s64 = ctx.r11.s64 + -32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1140C"))) PPC_WEAK_FUNC(sub_83C1140C);
PPC_FUNC_IMPL(__imp__sub_83C1140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11410"))) PPC_WEAK_FUNC(sub_83C11410);
PPC_FUNC_IMPL(__imp__sub_83C11410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1141C"))) PPC_WEAK_FUNC(sub_83C1141C);
PPC_FUNC_IMPL(__imp__sub_83C1141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11420"))) PPC_WEAK_FUNC(sub_83C11420);
PPC_FUNC_IMPL(__imp__sub_83C11420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32672
	ctx.r3.s64 = ctx.r11.s64 + -32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1142C"))) PPC_WEAK_FUNC(sub_83C1142C);
PPC_FUNC_IMPL(__imp__sub_83C1142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11430"))) PPC_WEAK_FUNC(sub_83C11430);
PPC_FUNC_IMPL(__imp__sub_83C11430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32664
	ctx.r3.s64 = ctx.r11.s64 + -32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1143C"))) PPC_WEAK_FUNC(sub_83C1143C);
PPC_FUNC_IMPL(__imp__sub_83C1143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11440"))) PPC_WEAK_FUNC(sub_83C11440);
PPC_FUNC_IMPL(__imp__sub_83C11440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1144C"))) PPC_WEAK_FUNC(sub_83C1144C);
PPC_FUNC_IMPL(__imp__sub_83C1144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11450"))) PPC_WEAK_FUNC(sub_83C11450);
PPC_FUNC_IMPL(__imp__sub_83C11450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32648
	ctx.r3.s64 = ctx.r11.s64 + -32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1145C"))) PPC_WEAK_FUNC(sub_83C1145C);
PPC_FUNC_IMPL(__imp__sub_83C1145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11460"))) PPC_WEAK_FUNC(sub_83C11460);
PPC_FUNC_IMPL(__imp__sub_83C11460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1146C"))) PPC_WEAK_FUNC(sub_83C1146C);
PPC_FUNC_IMPL(__imp__sub_83C1146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11470"))) PPC_WEAK_FUNC(sub_83C11470);
PPC_FUNC_IMPL(__imp__sub_83C11470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1147C"))) PPC_WEAK_FUNC(sub_83C1147C);
PPC_FUNC_IMPL(__imp__sub_83C1147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11480"))) PPC_WEAK_FUNC(sub_83C11480);
PPC_FUNC_IMPL(__imp__sub_83C11480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32624
	ctx.r3.s64 = ctx.r11.s64 + -32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1148C"))) PPC_WEAK_FUNC(sub_83C1148C);
PPC_FUNC_IMPL(__imp__sub_83C1148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11490"))) PPC_WEAK_FUNC(sub_83C11490);
PPC_FUNC_IMPL(__imp__sub_83C11490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32616
	ctx.r3.s64 = ctx.r11.s64 + -32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1149C"))) PPC_WEAK_FUNC(sub_83C1149C);
PPC_FUNC_IMPL(__imp__sub_83C1149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114A0"))) PPC_WEAK_FUNC(sub_83C114A0);
PPC_FUNC_IMPL(__imp__sub_83C114A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114AC"))) PPC_WEAK_FUNC(sub_83C114AC);
PPC_FUNC_IMPL(__imp__sub_83C114AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114B0"))) PPC_WEAK_FUNC(sub_83C114B0);
PPC_FUNC_IMPL(__imp__sub_83C114B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114BC"))) PPC_WEAK_FUNC(sub_83C114BC);
PPC_FUNC_IMPL(__imp__sub_83C114BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114C0"))) PPC_WEAK_FUNC(sub_83C114C0);
PPC_FUNC_IMPL(__imp__sub_83C114C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32592
	ctx.r3.s64 = ctx.r11.s64 + -32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114CC"))) PPC_WEAK_FUNC(sub_83C114CC);
PPC_FUNC_IMPL(__imp__sub_83C114CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114D0"))) PPC_WEAK_FUNC(sub_83C114D0);
PPC_FUNC_IMPL(__imp__sub_83C114D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114DC"))) PPC_WEAK_FUNC(sub_83C114DC);
PPC_FUNC_IMPL(__imp__sub_83C114DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114E0"))) PPC_WEAK_FUNC(sub_83C114E0);
PPC_FUNC_IMPL(__imp__sub_83C114E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114EC"))) PPC_WEAK_FUNC(sub_83C114EC);
PPC_FUNC_IMPL(__imp__sub_83C114EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C114F0"))) PPC_WEAK_FUNC(sub_83C114F0);
PPC_FUNC_IMPL(__imp__sub_83C114F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32568
	ctx.r3.s64 = ctx.r11.s64 + -32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C114FC"))) PPC_WEAK_FUNC(sub_83C114FC);
PPC_FUNC_IMPL(__imp__sub_83C114FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11500"))) PPC_WEAK_FUNC(sub_83C11500);
PPC_FUNC_IMPL(__imp__sub_83C11500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1150C"))) PPC_WEAK_FUNC(sub_83C1150C);
PPC_FUNC_IMPL(__imp__sub_83C1150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11510"))) PPC_WEAK_FUNC(sub_83C11510);
PPC_FUNC_IMPL(__imp__sub_83C11510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32552
	ctx.r3.s64 = ctx.r11.s64 + -32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1151C"))) PPC_WEAK_FUNC(sub_83C1151C);
PPC_FUNC_IMPL(__imp__sub_83C1151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11520"))) PPC_WEAK_FUNC(sub_83C11520);
PPC_FUNC_IMPL(__imp__sub_83C11520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1152C"))) PPC_WEAK_FUNC(sub_83C1152C);
PPC_FUNC_IMPL(__imp__sub_83C1152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11530"))) PPC_WEAK_FUNC(sub_83C11530);
PPC_FUNC_IMPL(__imp__sub_83C11530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1153C"))) PPC_WEAK_FUNC(sub_83C1153C);
PPC_FUNC_IMPL(__imp__sub_83C1153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11540"))) PPC_WEAK_FUNC(sub_83C11540);
PPC_FUNC_IMPL(__imp__sub_83C11540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1154C"))) PPC_WEAK_FUNC(sub_83C1154C);
PPC_FUNC_IMPL(__imp__sub_83C1154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11550"))) PPC_WEAK_FUNC(sub_83C11550);
PPC_FUNC_IMPL(__imp__sub_83C11550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1155C"))) PPC_WEAK_FUNC(sub_83C1155C);
PPC_FUNC_IMPL(__imp__sub_83C1155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11560"))) PPC_WEAK_FUNC(sub_83C11560);
PPC_FUNC_IMPL(__imp__sub_83C11560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1156C"))) PPC_WEAK_FUNC(sub_83C1156C);
PPC_FUNC_IMPL(__imp__sub_83C1156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11570"))) PPC_WEAK_FUNC(sub_83C11570);
PPC_FUNC_IMPL(__imp__sub_83C11570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32504
	ctx.r3.s64 = ctx.r11.s64 + -32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1157C"))) PPC_WEAK_FUNC(sub_83C1157C);
PPC_FUNC_IMPL(__imp__sub_83C1157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11580"))) PPC_WEAK_FUNC(sub_83C11580);
PPC_FUNC_IMPL(__imp__sub_83C11580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32496
	ctx.r3.s64 = ctx.r11.s64 + -32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1158C"))) PPC_WEAK_FUNC(sub_83C1158C);
PPC_FUNC_IMPL(__imp__sub_83C1158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11590"))) PPC_WEAK_FUNC(sub_83C11590);
PPC_FUNC_IMPL(__imp__sub_83C11590) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27492
	ctx.r7.s64 = ctx.r8.s64 + 27492;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27492);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27492, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C115B8"))) PPC_WEAK_FUNC(sub_83C115B8);
PPC_FUNC_IMPL(__imp__sub_83C115B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-13456
	ctx.r6.s64 = ctx.r7.s64 + -13456;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13528(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13528);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27492(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27492);
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
	// std r9,-13456(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11600"))) PPC_WEAK_FUNC(sub_83C11600);
PPC_FUNC_IMPL(__imp__sub_83C11600) {
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
	// addi r3,r11,27488
	ctx.r3.s64 = ctx.r11.s64 + 27488;
	// bl 0x83523120
	ctx.lr = 0x83C11618;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-32488
	ctx.r3.s64 = ctx.r10.s64 + -32488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C11624;
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

__attribute__((alias("__imp__sub_83C11634"))) PPC_WEAK_FUNC(sub_83C11634);
PPC_FUNC_IMPL(__imp__sub_83C11634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11638"))) PPC_WEAK_FUNC(sub_83C11638);
PPC_FUNC_IMPL(__imp__sub_83C11638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11644"))) PPC_WEAK_FUNC(sub_83C11644);
PPC_FUNC_IMPL(__imp__sub_83C11644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11648"))) PPC_WEAK_FUNC(sub_83C11648);
PPC_FUNC_IMPL(__imp__sub_83C11648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32464
	ctx.r3.s64 = ctx.r11.s64 + -32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11654"))) PPC_WEAK_FUNC(sub_83C11654);
PPC_FUNC_IMPL(__imp__sub_83C11654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11658"))) PPC_WEAK_FUNC(sub_83C11658);
PPC_FUNC_IMPL(__imp__sub_83C11658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11664"))) PPC_WEAK_FUNC(sub_83C11664);
PPC_FUNC_IMPL(__imp__sub_83C11664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11668"))) PPC_WEAK_FUNC(sub_83C11668);
PPC_FUNC_IMPL(__imp__sub_83C11668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11674"))) PPC_WEAK_FUNC(sub_83C11674);
PPC_FUNC_IMPL(__imp__sub_83C11674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11678"))) PPC_WEAK_FUNC(sub_83C11678);
PPC_FUNC_IMPL(__imp__sub_83C11678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32440
	ctx.r3.s64 = ctx.r11.s64 + -32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11684"))) PPC_WEAK_FUNC(sub_83C11684);
PPC_FUNC_IMPL(__imp__sub_83C11684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11688"))) PPC_WEAK_FUNC(sub_83C11688);
PPC_FUNC_IMPL(__imp__sub_83C11688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32432
	ctx.r3.s64 = ctx.r11.s64 + -32432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11694"))) PPC_WEAK_FUNC(sub_83C11694);
PPC_FUNC_IMPL(__imp__sub_83C11694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11698"))) PPC_WEAK_FUNC(sub_83C11698);
PPC_FUNC_IMPL(__imp__sub_83C11698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116A4"))) PPC_WEAK_FUNC(sub_83C116A4);
PPC_FUNC_IMPL(__imp__sub_83C116A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116A8"))) PPC_WEAK_FUNC(sub_83C116A8);
PPC_FUNC_IMPL(__imp__sub_83C116A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116B4"))) PPC_WEAK_FUNC(sub_83C116B4);
PPC_FUNC_IMPL(__imp__sub_83C116B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116B8"))) PPC_WEAK_FUNC(sub_83C116B8);
PPC_FUNC_IMPL(__imp__sub_83C116B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116C4"))) PPC_WEAK_FUNC(sub_83C116C4);
PPC_FUNC_IMPL(__imp__sub_83C116C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116C8"))) PPC_WEAK_FUNC(sub_83C116C8);
PPC_FUNC_IMPL(__imp__sub_83C116C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32400
	ctx.r3.s64 = ctx.r11.s64 + -32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116D4"))) PPC_WEAK_FUNC(sub_83C116D4);
PPC_FUNC_IMPL(__imp__sub_83C116D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116D8"))) PPC_WEAK_FUNC(sub_83C116D8);
PPC_FUNC_IMPL(__imp__sub_83C116D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116E4"))) PPC_WEAK_FUNC(sub_83C116E4);
PPC_FUNC_IMPL(__imp__sub_83C116E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116E8"))) PPC_WEAK_FUNC(sub_83C116E8);
PPC_FUNC_IMPL(__imp__sub_83C116E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32384
	ctx.r3.s64 = ctx.r11.s64 + -32384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C116F4"))) PPC_WEAK_FUNC(sub_83C116F4);
PPC_FUNC_IMPL(__imp__sub_83C116F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C116F8"))) PPC_WEAK_FUNC(sub_83C116F8);
PPC_FUNC_IMPL(__imp__sub_83C116F8) {
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
	// addi r3,r11,27508
	ctx.r3.s64 = ctx.r11.s64 + 27508;
	// bl 0x83523120
	ctx.lr = 0x83C11710;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-32376
	ctx.r3.s64 = ctx.r10.s64 + -32376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1171C;
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

__attribute__((alias("__imp__sub_83C1172C"))) PPC_WEAK_FUNC(sub_83C1172C);
PPC_FUNC_IMPL(__imp__sub_83C1172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11730"))) PPC_WEAK_FUNC(sub_83C11730);
PPC_FUNC_IMPL(__imp__sub_83C11730) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27524
	ctx.r7.s64 = ctx.r8.s64 + 27524;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27524(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27524);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27524, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11758"))) PPC_WEAK_FUNC(sub_83C11758);
PPC_FUNC_IMPL(__imp__sub_83C11758) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-13332
	ctx.r6.s64 = ctx.r7.s64 + -13332;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13404(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13404);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27524(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27524);
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
	// std r9,-13332(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13332, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C117A0"))) PPC_WEAK_FUNC(sub_83C117A0);
PPC_FUNC_IMPL(__imp__sub_83C117A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C117AC"))) PPC_WEAK_FUNC(sub_83C117AC);
PPC_FUNC_IMPL(__imp__sub_83C117AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C117B0"))) PPC_WEAK_FUNC(sub_83C117B0);
PPC_FUNC_IMPL(__imp__sub_83C117B0) {
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
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// bl 0x8259af80
	ctx.lr = 0x83C117C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-32344
	ctx.r3.s64 = ctx.r10.s64 + -32344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C117D4;
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

__attribute__((alias("__imp__sub_83C117E4"))) PPC_WEAK_FUNC(sub_83C117E4);
PPC_FUNC_IMPL(__imp__sub_83C117E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C117E8"))) PPC_WEAK_FUNC(sub_83C117E8);
PPC_FUNC_IMPL(__imp__sub_83C117E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27512
	ctx.r11.s64 = ctx.r8.s64 + 27512;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-13356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13356);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32352
	ctx.r3.s64 = ctx.r6.s64 + -32352;
	// stw r10,27512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27512, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11818"))) PPC_WEAK_FUNC(sub_83C11818);
PPC_FUNC_IMPL(__imp__sub_83C11818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32336
	ctx.r3.s64 = ctx.r11.s64 + -32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11824"))) PPC_WEAK_FUNC(sub_83C11824);
PPC_FUNC_IMPL(__imp__sub_83C11824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11828"))) PPC_WEAK_FUNC(sub_83C11828);
PPC_FUNC_IMPL(__imp__sub_83C11828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11834"))) PPC_WEAK_FUNC(sub_83C11834);
PPC_FUNC_IMPL(__imp__sub_83C11834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11838"))) PPC_WEAK_FUNC(sub_83C11838);
PPC_FUNC_IMPL(__imp__sub_83C11838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32320
	ctx.r3.s64 = ctx.r11.s64 + -32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11844"))) PPC_WEAK_FUNC(sub_83C11844);
PPC_FUNC_IMPL(__imp__sub_83C11844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11848"))) PPC_WEAK_FUNC(sub_83C11848);
PPC_FUNC_IMPL(__imp__sub_83C11848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32312
	ctx.r3.s64 = ctx.r11.s64 + -32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11854"))) PPC_WEAK_FUNC(sub_83C11854);
PPC_FUNC_IMPL(__imp__sub_83C11854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11858"))) PPC_WEAK_FUNC(sub_83C11858);
PPC_FUNC_IMPL(__imp__sub_83C11858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32304
	ctx.r3.s64 = ctx.r11.s64 + -32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11864"))) PPC_WEAK_FUNC(sub_83C11864);
PPC_FUNC_IMPL(__imp__sub_83C11864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11868"))) PPC_WEAK_FUNC(sub_83C11868);
PPC_FUNC_IMPL(__imp__sub_83C11868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11874"))) PPC_WEAK_FUNC(sub_83C11874);
PPC_FUNC_IMPL(__imp__sub_83C11874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11878"))) PPC_WEAK_FUNC(sub_83C11878);
PPC_FUNC_IMPL(__imp__sub_83C11878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32288
	ctx.r3.s64 = ctx.r11.s64 + -32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11884"))) PPC_WEAK_FUNC(sub_83C11884);
PPC_FUNC_IMPL(__imp__sub_83C11884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11888"))) PPC_WEAK_FUNC(sub_83C11888);
PPC_FUNC_IMPL(__imp__sub_83C11888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11894"))) PPC_WEAK_FUNC(sub_83C11894);
PPC_FUNC_IMPL(__imp__sub_83C11894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11898"))) PPC_WEAK_FUNC(sub_83C11898);
PPC_FUNC_IMPL(__imp__sub_83C11898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32272
	ctx.r3.s64 = ctx.r11.s64 + -32272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C118A4"))) PPC_WEAK_FUNC(sub_83C118A4);
PPC_FUNC_IMPL(__imp__sub_83C118A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C118A8"))) PPC_WEAK_FUNC(sub_83C118A8);
PPC_FUNC_IMPL(__imp__sub_83C118A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C118B4"))) PPC_WEAK_FUNC(sub_83C118B4);
PPC_FUNC_IMPL(__imp__sub_83C118B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C118B8"))) PPC_WEAK_FUNC(sub_83C118B8);
PPC_FUNC_IMPL(__imp__sub_83C118B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32256
	ctx.r3.s64 = ctx.r11.s64 + -32256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C118C4"))) PPC_WEAK_FUNC(sub_83C118C4);
PPC_FUNC_IMPL(__imp__sub_83C118C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C118C8"))) PPC_WEAK_FUNC(sub_83C118C8);
PPC_FUNC_IMPL(__imp__sub_83C118C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32248
	ctx.r3.s64 = ctx.r11.s64 + -32248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C118D4"))) PPC_WEAK_FUNC(sub_83C118D4);
PPC_FUNC_IMPL(__imp__sub_83C118D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C118D8"))) PPC_WEAK_FUNC(sub_83C118D8);
PPC_FUNC_IMPL(__imp__sub_83C118D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27900
	ctx.r7.s64 = ctx.r8.s64 + 27900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27900);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27900, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11900"))) PPC_WEAK_FUNC(sub_83C11900);
PPC_FUNC_IMPL(__imp__sub_83C11900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-13204
	ctx.r6.s64 = ctx.r7.s64 + -13204;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27900(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27900);
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
	// std r9,-13204(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C11948"))) PPC_WEAK_FUNC(sub_83C11948);
PPC_FUNC_IMPL(__imp__sub_83C11948) {
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
	// addi r3,r11,27884
	ctx.r3.s64 = ctx.r11.s64 + 27884;
	// bl 0x83523120
	ctx.lr = 0x83C11960;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-32240
	ctx.r3.s64 = ctx.r10.s64 + -32240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1196C;
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

__attribute__((alias("__imp__sub_83C1197C"))) PPC_WEAK_FUNC(sub_83C1197C);
PPC_FUNC_IMPL(__imp__sub_83C1197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11980"))) PPC_WEAK_FUNC(sub_83C11980);
PPC_FUNC_IMPL(__imp__sub_83C11980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32224
	ctx.r3.s64 = ctx.r11.s64 + -32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1198C"))) PPC_WEAK_FUNC(sub_83C1198C);
PPC_FUNC_IMPL(__imp__sub_83C1198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11990"))) PPC_WEAK_FUNC(sub_83C11990);
PPC_FUNC_IMPL(__imp__sub_83C11990) {
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
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// bl 0x8259af80
	ctx.lr = 0x83C119A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-32208
	ctx.r3.s64 = ctx.r10.s64 + -32208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C119B4;
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

__attribute__((alias("__imp__sub_83C119C4"))) PPC_WEAK_FUNC(sub_83C119C4);
PPC_FUNC_IMPL(__imp__sub_83C119C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C119C8"))) PPC_WEAK_FUNC(sub_83C119C8);
PPC_FUNC_IMPL(__imp__sub_83C119C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27888
	ctx.r11.s64 = ctx.r8.s64 + 27888;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-13228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13228);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32216
	ctx.r3.s64 = ctx.r6.s64 + -32216;
	// stw r10,27888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27888, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C119F8"))) PPC_WEAK_FUNC(sub_83C119F8);
PPC_FUNC_IMPL(__imp__sub_83C119F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32200
	ctx.r3.s64 = ctx.r11.s64 + -32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A04"))) PPC_WEAK_FUNC(sub_83C11A04);
PPC_FUNC_IMPL(__imp__sub_83C11A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A08"))) PPC_WEAK_FUNC(sub_83C11A08);
PPC_FUNC_IMPL(__imp__sub_83C11A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32192
	ctx.r3.s64 = ctx.r11.s64 + -32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A14"))) PPC_WEAK_FUNC(sub_83C11A14);
PPC_FUNC_IMPL(__imp__sub_83C11A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A18"))) PPC_WEAK_FUNC(sub_83C11A18);
PPC_FUNC_IMPL(__imp__sub_83C11A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32184
	ctx.r3.s64 = ctx.r11.s64 + -32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A24"))) PPC_WEAK_FUNC(sub_83C11A24);
PPC_FUNC_IMPL(__imp__sub_83C11A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A28"))) PPC_WEAK_FUNC(sub_83C11A28);
PPC_FUNC_IMPL(__imp__sub_83C11A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32176
	ctx.r3.s64 = ctx.r11.s64 + -32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A34"))) PPC_WEAK_FUNC(sub_83C11A34);
PPC_FUNC_IMPL(__imp__sub_83C11A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A38"))) PPC_WEAK_FUNC(sub_83C11A38);
PPC_FUNC_IMPL(__imp__sub_83C11A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32168
	ctx.r3.s64 = ctx.r11.s64 + -32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A44"))) PPC_WEAK_FUNC(sub_83C11A44);
PPC_FUNC_IMPL(__imp__sub_83C11A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A48"))) PPC_WEAK_FUNC(sub_83C11A48);
PPC_FUNC_IMPL(__imp__sub_83C11A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A54"))) PPC_WEAK_FUNC(sub_83C11A54);
PPC_FUNC_IMPL(__imp__sub_83C11A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A58"))) PPC_WEAK_FUNC(sub_83C11A58);
PPC_FUNC_IMPL(__imp__sub_83C11A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32152
	ctx.r3.s64 = ctx.r11.s64 + -32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A64"))) PPC_WEAK_FUNC(sub_83C11A64);
PPC_FUNC_IMPL(__imp__sub_83C11A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A68"))) PPC_WEAK_FUNC(sub_83C11A68);
PPC_FUNC_IMPL(__imp__sub_83C11A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32144
	ctx.r3.s64 = ctx.r11.s64 + -32144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A74"))) PPC_WEAK_FUNC(sub_83C11A74);
PPC_FUNC_IMPL(__imp__sub_83C11A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A78"))) PPC_WEAK_FUNC(sub_83C11A78);
PPC_FUNC_IMPL(__imp__sub_83C11A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32136
	ctx.r3.s64 = ctx.r11.s64 + -32136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A84"))) PPC_WEAK_FUNC(sub_83C11A84);
PPC_FUNC_IMPL(__imp__sub_83C11A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A88"))) PPC_WEAK_FUNC(sub_83C11A88);
PPC_FUNC_IMPL(__imp__sub_83C11A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32128
	ctx.r3.s64 = ctx.r11.s64 + -32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11A94"))) PPC_WEAK_FUNC(sub_83C11A94);
PPC_FUNC_IMPL(__imp__sub_83C11A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11A98"))) PPC_WEAK_FUNC(sub_83C11A98);
PPC_FUNC_IMPL(__imp__sub_83C11A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11AA4"))) PPC_WEAK_FUNC(sub_83C11AA4);
PPC_FUNC_IMPL(__imp__sub_83C11AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11AA8"))) PPC_WEAK_FUNC(sub_83C11AA8);
PPC_FUNC_IMPL(__imp__sub_83C11AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32112
	ctx.r3.s64 = ctx.r11.s64 + -32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11AB4"))) PPC_WEAK_FUNC(sub_83C11AB4);
PPC_FUNC_IMPL(__imp__sub_83C11AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11AB8"))) PPC_WEAK_FUNC(sub_83C11AB8);
PPC_FUNC_IMPL(__imp__sub_83C11AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32104
	ctx.r3.s64 = ctx.r11.s64 + -32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C11AC4"))) PPC_WEAK_FUNC(sub_83C11AC4);
PPC_FUNC_IMPL(__imp__sub_83C11AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C11AC8"))) PPC_WEAK_FUNC(sub_83C11AC8);
PPC_FUNC_IMPL(__imp__sub_83C11AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-32096
	ctx.r3.s64 = ctx.r11.s64 + -32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

