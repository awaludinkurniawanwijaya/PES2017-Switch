#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C100DC"))) PPC_WEAK_FUNC(sub_83C100DC);
PPC_FUNC_IMPL(__imp__sub_83C100DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C100E0"))) PPC_WEAK_FUNC(sub_83C100E0);
PPC_FUNC_IMPL(__imp__sub_83C100E0) {
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
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// bl 0x8259af80
	ctx.lr = 0x83C100F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31160
	ctx.r3.s64 = ctx.r10.s64 + 31160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10104;
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

__attribute__((alias("__imp__sub_83C10114"))) PPC_WEAK_FUNC(sub_83C10114);
PPC_FUNC_IMPL(__imp__sub_83C10114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10118"))) PPC_WEAK_FUNC(sub_83C10118);
PPC_FUNC_IMPL(__imp__sub_83C10118) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24464
	ctx.r11.s64 = ctx.r8.s64 + 24464;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31152
	ctx.r3.s64 = ctx.r6.s64 + 31152;
	// stw r10,24464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24464, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10148"))) PPC_WEAK_FUNC(sub_83C10148);
PPC_FUNC_IMPL(__imp__sub_83C10148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10154"))) PPC_WEAK_FUNC(sub_83C10154);
PPC_FUNC_IMPL(__imp__sub_83C10154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10158"))) PPC_WEAK_FUNC(sub_83C10158);
PPC_FUNC_IMPL(__imp__sub_83C10158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31176
	ctx.r3.s64 = ctx.r11.s64 + 31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10164"))) PPC_WEAK_FUNC(sub_83C10164);
PPC_FUNC_IMPL(__imp__sub_83C10164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10168"))) PPC_WEAK_FUNC(sub_83C10168);
PPC_FUNC_IMPL(__imp__sub_83C10168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10174"))) PPC_WEAK_FUNC(sub_83C10174);
PPC_FUNC_IMPL(__imp__sub_83C10174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10178"))) PPC_WEAK_FUNC(sub_83C10178);
PPC_FUNC_IMPL(__imp__sub_83C10178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10184"))) PPC_WEAK_FUNC(sub_83C10184);
PPC_FUNC_IMPL(__imp__sub_83C10184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10188"))) PPC_WEAK_FUNC(sub_83C10188);
PPC_FUNC_IMPL(__imp__sub_83C10188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10194"))) PPC_WEAK_FUNC(sub_83C10194);
PPC_FUNC_IMPL(__imp__sub_83C10194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10198"))) PPC_WEAK_FUNC(sub_83C10198);
PPC_FUNC_IMPL(__imp__sub_83C10198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101A4"))) PPC_WEAK_FUNC(sub_83C101A4);
PPC_FUNC_IMPL(__imp__sub_83C101A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101A8"))) PPC_WEAK_FUNC(sub_83C101A8);
PPC_FUNC_IMPL(__imp__sub_83C101A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31216
	ctx.r3.s64 = ctx.r11.s64 + 31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101B4"))) PPC_WEAK_FUNC(sub_83C101B4);
PPC_FUNC_IMPL(__imp__sub_83C101B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101B8"))) PPC_WEAK_FUNC(sub_83C101B8);
PPC_FUNC_IMPL(__imp__sub_83C101B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101C4"))) PPC_WEAK_FUNC(sub_83C101C4);
PPC_FUNC_IMPL(__imp__sub_83C101C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101C8"))) PPC_WEAK_FUNC(sub_83C101C8);
PPC_FUNC_IMPL(__imp__sub_83C101C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101D4"))) PPC_WEAK_FUNC(sub_83C101D4);
PPC_FUNC_IMPL(__imp__sub_83C101D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101D8"))) PPC_WEAK_FUNC(sub_83C101D8);
PPC_FUNC_IMPL(__imp__sub_83C101D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101E4"))) PPC_WEAK_FUNC(sub_83C101E4);
PPC_FUNC_IMPL(__imp__sub_83C101E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101E8"))) PPC_WEAK_FUNC(sub_83C101E8);
PPC_FUNC_IMPL(__imp__sub_83C101E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C101F4"))) PPC_WEAK_FUNC(sub_83C101F4);
PPC_FUNC_IMPL(__imp__sub_83C101F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C101F8"))) PPC_WEAK_FUNC(sub_83C101F8);
PPC_FUNC_IMPL(__imp__sub_83C101F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31256
	ctx.r3.s64 = ctx.r11.s64 + 31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10204"))) PPC_WEAK_FUNC(sub_83C10204);
PPC_FUNC_IMPL(__imp__sub_83C10204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10208"))) PPC_WEAK_FUNC(sub_83C10208);
PPC_FUNC_IMPL(__imp__sub_83C10208) {
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
	// addi r3,r11,24836
	ctx.r3.s64 = ctx.r11.s64 + 24836;
	// bl 0x83523120
	ctx.lr = 0x83C10220;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31264
	ctx.r3.s64 = ctx.r10.s64 + 31264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1022C;
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

__attribute__((alias("__imp__sub_83C1023C"))) PPC_WEAK_FUNC(sub_83C1023C);
PPC_FUNC_IMPL(__imp__sub_83C1023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10240"))) PPC_WEAK_FUNC(sub_83C10240);
PPC_FUNC_IMPL(__imp__sub_83C10240) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24852
	ctx.r7.s64 = ctx.r8.s64 + 24852;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24852(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24852);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24852, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10268"))) PPC_WEAK_FUNC(sub_83C10268);
PPC_FUNC_IMPL(__imp__sub_83C10268) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15120
	ctx.r6.s64 = ctx.r7.s64 + -15120;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15192(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15192);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24852(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24852);
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
	// std r9,-15120(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C102B0"))) PPC_WEAK_FUNC(sub_83C102B0);
PPC_FUNC_IMPL(__imp__sub_83C102B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C102BC"))) PPC_WEAK_FUNC(sub_83C102BC);
PPC_FUNC_IMPL(__imp__sub_83C102BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C102C0"))) PPC_WEAK_FUNC(sub_83C102C0);
PPC_FUNC_IMPL(__imp__sub_83C102C0) {
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
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// bl 0x8259af80
	ctx.lr = 0x83C102D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31296
	ctx.r3.s64 = ctx.r10.s64 + 31296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C102E4;
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

__attribute__((alias("__imp__sub_83C102F4"))) PPC_WEAK_FUNC(sub_83C102F4);
PPC_FUNC_IMPL(__imp__sub_83C102F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C102F8"))) PPC_WEAK_FUNC(sub_83C102F8);
PPC_FUNC_IMPL(__imp__sub_83C102F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24840
	ctx.r11.s64 = ctx.r8.s64 + 24840;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31288
	ctx.r3.s64 = ctx.r6.s64 + 31288;
	// stw r10,24840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24840, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10328"))) PPC_WEAK_FUNC(sub_83C10328);
PPC_FUNC_IMPL(__imp__sub_83C10328) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-2756
	ctx.r4.s64 = ctx.r11.s64 + -2756;
	// addi r3,r10,-15096
	ctx.r3.s64 = ctx.r10.s64 + -15096;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C1034C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,31304
	ctx.r3.s64 = ctx.r9.s64 + 31304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10358;
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

__attribute__((alias("__imp__sub_83C10368"))) PPC_WEAK_FUNC(sub_83C10368);
PPC_FUNC_IMPL(__imp__sub_83C10368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10374"))) PPC_WEAK_FUNC(sub_83C10374);
PPC_FUNC_IMPL(__imp__sub_83C10374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10378"))) PPC_WEAK_FUNC(sub_83C10378);
PPC_FUNC_IMPL(__imp__sub_83C10378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31416
	ctx.r3.s64 = ctx.r11.s64 + 31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10384"))) PPC_WEAK_FUNC(sub_83C10384);
PPC_FUNC_IMPL(__imp__sub_83C10384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10388"))) PPC_WEAK_FUNC(sub_83C10388);
PPC_FUNC_IMPL(__imp__sub_83C10388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10394"))) PPC_WEAK_FUNC(sub_83C10394);
PPC_FUNC_IMPL(__imp__sub_83C10394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10398"))) PPC_WEAK_FUNC(sub_83C10398);
PPC_FUNC_IMPL(__imp__sub_83C10398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31432
	ctx.r3.s64 = ctx.r11.s64 + 31432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103A4"))) PPC_WEAK_FUNC(sub_83C103A4);
PPC_FUNC_IMPL(__imp__sub_83C103A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103A8"))) PPC_WEAK_FUNC(sub_83C103A8);
PPC_FUNC_IMPL(__imp__sub_83C103A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31440
	ctx.r3.s64 = ctx.r11.s64 + 31440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103B4"))) PPC_WEAK_FUNC(sub_83C103B4);
PPC_FUNC_IMPL(__imp__sub_83C103B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103B8"))) PPC_WEAK_FUNC(sub_83C103B8);
PPC_FUNC_IMPL(__imp__sub_83C103B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103C4"))) PPC_WEAK_FUNC(sub_83C103C4);
PPC_FUNC_IMPL(__imp__sub_83C103C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103C8"))) PPC_WEAK_FUNC(sub_83C103C8);
PPC_FUNC_IMPL(__imp__sub_83C103C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31456
	ctx.r3.s64 = ctx.r11.s64 + 31456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103D4"))) PPC_WEAK_FUNC(sub_83C103D4);
PPC_FUNC_IMPL(__imp__sub_83C103D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103D8"))) PPC_WEAK_FUNC(sub_83C103D8);
PPC_FUNC_IMPL(__imp__sub_83C103D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31464
	ctx.r3.s64 = ctx.r11.s64 + 31464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103E4"))) PPC_WEAK_FUNC(sub_83C103E4);
PPC_FUNC_IMPL(__imp__sub_83C103E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103E8"))) PPC_WEAK_FUNC(sub_83C103E8);
PPC_FUNC_IMPL(__imp__sub_83C103E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31472
	ctx.r3.s64 = ctx.r11.s64 + 31472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C103F4"))) PPC_WEAK_FUNC(sub_83C103F4);
PPC_FUNC_IMPL(__imp__sub_83C103F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C103F8"))) PPC_WEAK_FUNC(sub_83C103F8);
PPC_FUNC_IMPL(__imp__sub_83C103F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10404"))) PPC_WEAK_FUNC(sub_83C10404);
PPC_FUNC_IMPL(__imp__sub_83C10404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10408"))) PPC_WEAK_FUNC(sub_83C10408);
PPC_FUNC_IMPL(__imp__sub_83C10408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31488
	ctx.r3.s64 = ctx.r11.s64 + 31488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10414"))) PPC_WEAK_FUNC(sub_83C10414);
PPC_FUNC_IMPL(__imp__sub_83C10414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10418"))) PPC_WEAK_FUNC(sub_83C10418);
PPC_FUNC_IMPL(__imp__sub_83C10418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10424"))) PPC_WEAK_FUNC(sub_83C10424);
PPC_FUNC_IMPL(__imp__sub_83C10424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10428"))) PPC_WEAK_FUNC(sub_83C10428);
PPC_FUNC_IMPL(__imp__sub_83C10428) {
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
	// addi r3,r11,25208
	ctx.r3.s64 = ctx.r11.s64 + 25208;
	// bl 0x83523120
	ctx.lr = 0x83C10440;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31504
	ctx.r3.s64 = ctx.r10.s64 + 31504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1044C;
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

__attribute__((alias("__imp__sub_83C1045C"))) PPC_WEAK_FUNC(sub_83C1045C);
PPC_FUNC_IMPL(__imp__sub_83C1045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10460"))) PPC_WEAK_FUNC(sub_83C10460);
PPC_FUNC_IMPL(__imp__sub_83C10460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25224
	ctx.r7.s64 = ctx.r8.s64 + 25224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10488"))) PPC_WEAK_FUNC(sub_83C10488);
PPC_FUNC_IMPL(__imp__sub_83C10488) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14952
	ctx.r6.s64 = ctx.r7.s64 + -14952;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25224);
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
	// std r9,-14952(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C104D0"))) PPC_WEAK_FUNC(sub_83C104D0);
PPC_FUNC_IMPL(__imp__sub_83C104D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C104DC"))) PPC_WEAK_FUNC(sub_83C104DC);
PPC_FUNC_IMPL(__imp__sub_83C104DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C104E0"))) PPC_WEAK_FUNC(sub_83C104E0);
PPC_FUNC_IMPL(__imp__sub_83C104E0) {
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
	// addi r3,r11,25232
	ctx.r3.s64 = ctx.r11.s64 + 25232;
	// bl 0x8259af80
	ctx.lr = 0x83C104F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31536
	ctx.r3.s64 = ctx.r10.s64 + 31536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10504;
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

__attribute__((alias("__imp__sub_83C10514"))) PPC_WEAK_FUNC(sub_83C10514);
PPC_FUNC_IMPL(__imp__sub_83C10514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10518"))) PPC_WEAK_FUNC(sub_83C10518);
PPC_FUNC_IMPL(__imp__sub_83C10518) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25212
	ctx.r11.s64 = ctx.r8.s64 + 25212;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14976);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31528
	ctx.r3.s64 = ctx.r6.s64 + 31528;
	// stw r10,25212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10548"))) PPC_WEAK_FUNC(sub_83C10548);
PPC_FUNC_IMPL(__imp__sub_83C10548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31544
	ctx.r3.s64 = ctx.r11.s64 + 31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10554"))) PPC_WEAK_FUNC(sub_83C10554);
PPC_FUNC_IMPL(__imp__sub_83C10554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10558"))) PPC_WEAK_FUNC(sub_83C10558);
PPC_FUNC_IMPL(__imp__sub_83C10558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10564"))) PPC_WEAK_FUNC(sub_83C10564);
PPC_FUNC_IMPL(__imp__sub_83C10564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10568"))) PPC_WEAK_FUNC(sub_83C10568);
PPC_FUNC_IMPL(__imp__sub_83C10568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10574"))) PPC_WEAK_FUNC(sub_83C10574);
PPC_FUNC_IMPL(__imp__sub_83C10574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10578"))) PPC_WEAK_FUNC(sub_83C10578);
PPC_FUNC_IMPL(__imp__sub_83C10578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31568
	ctx.r3.s64 = ctx.r11.s64 + 31568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10584"))) PPC_WEAK_FUNC(sub_83C10584);
PPC_FUNC_IMPL(__imp__sub_83C10584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10588"))) PPC_WEAK_FUNC(sub_83C10588);
PPC_FUNC_IMPL(__imp__sub_83C10588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31576
	ctx.r3.s64 = ctx.r11.s64 + 31576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10594"))) PPC_WEAK_FUNC(sub_83C10594);
PPC_FUNC_IMPL(__imp__sub_83C10594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10598"))) PPC_WEAK_FUNC(sub_83C10598);
PPC_FUNC_IMPL(__imp__sub_83C10598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105A4"))) PPC_WEAK_FUNC(sub_83C105A4);
PPC_FUNC_IMPL(__imp__sub_83C105A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105A8"))) PPC_WEAK_FUNC(sub_83C105A8);
PPC_FUNC_IMPL(__imp__sub_83C105A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31592
	ctx.r3.s64 = ctx.r11.s64 + 31592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105B4"))) PPC_WEAK_FUNC(sub_83C105B4);
PPC_FUNC_IMPL(__imp__sub_83C105B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105B8"))) PPC_WEAK_FUNC(sub_83C105B8);
PPC_FUNC_IMPL(__imp__sub_83C105B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31600
	ctx.r3.s64 = ctx.r11.s64 + 31600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105C4"))) PPC_WEAK_FUNC(sub_83C105C4);
PPC_FUNC_IMPL(__imp__sub_83C105C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105C8"))) PPC_WEAK_FUNC(sub_83C105C8);
PPC_FUNC_IMPL(__imp__sub_83C105C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105D4"))) PPC_WEAK_FUNC(sub_83C105D4);
PPC_FUNC_IMPL(__imp__sub_83C105D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105D8"))) PPC_WEAK_FUNC(sub_83C105D8);
PPC_FUNC_IMPL(__imp__sub_83C105D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105E4"))) PPC_WEAK_FUNC(sub_83C105E4);
PPC_FUNC_IMPL(__imp__sub_83C105E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105E8"))) PPC_WEAK_FUNC(sub_83C105E8);
PPC_FUNC_IMPL(__imp__sub_83C105E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31624
	ctx.r3.s64 = ctx.r11.s64 + 31624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C105F4"))) PPC_WEAK_FUNC(sub_83C105F4);
PPC_FUNC_IMPL(__imp__sub_83C105F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C105F8"))) PPC_WEAK_FUNC(sub_83C105F8);
PPC_FUNC_IMPL(__imp__sub_83C105F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10604"))) PPC_WEAK_FUNC(sub_83C10604);
PPC_FUNC_IMPL(__imp__sub_83C10604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10608"))) PPC_WEAK_FUNC(sub_83C10608);
PPC_FUNC_IMPL(__imp__sub_83C10608) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,26316
	ctx.r4.s64 = ctx.r11.s64 + 26316;
	// addi r3,r10,-14776
	ctx.r3.s64 = ctx.r10.s64 + -14776;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C1062C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,31680
	ctx.r3.s64 = ctx.r9.s64 + 31680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10638;
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

__attribute__((alias("__imp__sub_83C10648"))) PPC_WEAK_FUNC(sub_83C10648);
PPC_FUNC_IMPL(__imp__sub_83C10648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25592
	ctx.r7.s64 = ctx.r8.s64 + 25592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10670"))) PPC_WEAK_FUNC(sub_83C10670);
PPC_FUNC_IMPL(__imp__sub_83C10670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14748
	ctx.r6.s64 = ctx.r7.s64 + -14748;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25592);
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
	// std r9,-14748(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14748, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C106B8"))) PPC_WEAK_FUNC(sub_83C106B8);
PPC_FUNC_IMPL(__imp__sub_83C106B8) {
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
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// bl 0x83523120
	ctx.lr = 0x83C106D0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31640
	ctx.r3.s64 = ctx.r10.s64 + 31640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C106DC;
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

__attribute__((alias("__imp__sub_83C106EC"))) PPC_WEAK_FUNC(sub_83C106EC);
PPC_FUNC_IMPL(__imp__sub_83C106EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C106F0"))) PPC_WEAK_FUNC(sub_83C106F0);
PPC_FUNC_IMPL(__imp__sub_83C106F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C106FC"))) PPC_WEAK_FUNC(sub_83C106FC);
PPC_FUNC_IMPL(__imp__sub_83C106FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10700"))) PPC_WEAK_FUNC(sub_83C10700);
PPC_FUNC_IMPL(__imp__sub_83C10700) {
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
	// addi r3,r11,25600
	ctx.r3.s64 = ctx.r11.s64 + 25600;
	// bl 0x8259af80
	ctx.lr = 0x83C10718;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31672
	ctx.r3.s64 = ctx.r10.s64 + 31672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10724;
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

__attribute__((alias("__imp__sub_83C10734"))) PPC_WEAK_FUNC(sub_83C10734);
PPC_FUNC_IMPL(__imp__sub_83C10734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10738"))) PPC_WEAK_FUNC(sub_83C10738);
PPC_FUNC_IMPL(__imp__sub_83C10738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25580
	ctx.r11.s64 = ctx.r8.s64 + 25580;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31664
	ctx.r3.s64 = ctx.r6.s64 + 31664;
	// stw r10,25580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10768"))) PPC_WEAK_FUNC(sub_83C10768);
PPC_FUNC_IMPL(__imp__sub_83C10768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31784
	ctx.r3.s64 = ctx.r11.s64 + 31784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10774"))) PPC_WEAK_FUNC(sub_83C10774);
PPC_FUNC_IMPL(__imp__sub_83C10774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10778"))) PPC_WEAK_FUNC(sub_83C10778);
PPC_FUNC_IMPL(__imp__sub_83C10778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31792
	ctx.r3.s64 = ctx.r11.s64 + 31792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10784"))) PPC_WEAK_FUNC(sub_83C10784);
PPC_FUNC_IMPL(__imp__sub_83C10784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10788"))) PPC_WEAK_FUNC(sub_83C10788);
PPC_FUNC_IMPL(__imp__sub_83C10788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31800
	ctx.r3.s64 = ctx.r11.s64 + 31800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10794"))) PPC_WEAK_FUNC(sub_83C10794);
PPC_FUNC_IMPL(__imp__sub_83C10794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10798"))) PPC_WEAK_FUNC(sub_83C10798);
PPC_FUNC_IMPL(__imp__sub_83C10798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31808
	ctx.r3.s64 = ctx.r11.s64 + 31808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107A4"))) PPC_WEAK_FUNC(sub_83C107A4);
PPC_FUNC_IMPL(__imp__sub_83C107A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107A8"))) PPC_WEAK_FUNC(sub_83C107A8);
PPC_FUNC_IMPL(__imp__sub_83C107A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107B4"))) PPC_WEAK_FUNC(sub_83C107B4);
PPC_FUNC_IMPL(__imp__sub_83C107B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107B8"))) PPC_WEAK_FUNC(sub_83C107B8);
PPC_FUNC_IMPL(__imp__sub_83C107B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107C4"))) PPC_WEAK_FUNC(sub_83C107C4);
PPC_FUNC_IMPL(__imp__sub_83C107C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107C8"))) PPC_WEAK_FUNC(sub_83C107C8);
PPC_FUNC_IMPL(__imp__sub_83C107C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31832
	ctx.r3.s64 = ctx.r11.s64 + 31832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107D4"))) PPC_WEAK_FUNC(sub_83C107D4);
PPC_FUNC_IMPL(__imp__sub_83C107D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107D8"))) PPC_WEAK_FUNC(sub_83C107D8);
PPC_FUNC_IMPL(__imp__sub_83C107D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107E4"))) PPC_WEAK_FUNC(sub_83C107E4);
PPC_FUNC_IMPL(__imp__sub_83C107E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107E8"))) PPC_WEAK_FUNC(sub_83C107E8);
PPC_FUNC_IMPL(__imp__sub_83C107E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31848
	ctx.r3.s64 = ctx.r11.s64 + 31848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C107F4"))) PPC_WEAK_FUNC(sub_83C107F4);
PPC_FUNC_IMPL(__imp__sub_83C107F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C107F8"))) PPC_WEAK_FUNC(sub_83C107F8);
PPC_FUNC_IMPL(__imp__sub_83C107F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10804"))) PPC_WEAK_FUNC(sub_83C10804);
PPC_FUNC_IMPL(__imp__sub_83C10804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10808"))) PPC_WEAK_FUNC(sub_83C10808);
PPC_FUNC_IMPL(__imp__sub_83C10808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31864
	ctx.r3.s64 = ctx.r11.s64 + 31864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10814"))) PPC_WEAK_FUNC(sub_83C10814);
PPC_FUNC_IMPL(__imp__sub_83C10814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10818"))) PPC_WEAK_FUNC(sub_83C10818);
PPC_FUNC_IMPL(__imp__sub_83C10818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31872
	ctx.r3.s64 = ctx.r11.s64 + 31872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10824"))) PPC_WEAK_FUNC(sub_83C10824);
PPC_FUNC_IMPL(__imp__sub_83C10824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10828"))) PPC_WEAK_FUNC(sub_83C10828);
PPC_FUNC_IMPL(__imp__sub_83C10828) {
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
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// bl 0x83523120
	ctx.lr = 0x83C10840;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31880
	ctx.r3.s64 = ctx.r10.s64 + 31880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1084C;
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

__attribute__((alias("__imp__sub_83C1085C"))) PPC_WEAK_FUNC(sub_83C1085C);
PPC_FUNC_IMPL(__imp__sub_83C1085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10860"))) PPC_WEAK_FUNC(sub_83C10860);
PPC_FUNC_IMPL(__imp__sub_83C10860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25960
	ctx.r7.s64 = ctx.r8.s64 + 25960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10888"))) PPC_WEAK_FUNC(sub_83C10888);
PPC_FUNC_IMPL(__imp__sub_83C10888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14620
	ctx.r6.s64 = ctx.r7.s64 + -14620;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14692(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14692);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25960);
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
	// std r9,-14620(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14620, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C108D0"))) PPC_WEAK_FUNC(sub_83C108D0);
PPC_FUNC_IMPL(__imp__sub_83C108D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C108DC"))) PPC_WEAK_FUNC(sub_83C108DC);
PPC_FUNC_IMPL(__imp__sub_83C108DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C108E0"))) PPC_WEAK_FUNC(sub_83C108E0);
PPC_FUNC_IMPL(__imp__sub_83C108E0) {
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
	// addi r3,r11,25968
	ctx.r3.s64 = ctx.r11.s64 + 25968;
	// bl 0x8259af80
	ctx.lr = 0x83C108F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31912
	ctx.r3.s64 = ctx.r10.s64 + 31912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10904;
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

__attribute__((alias("__imp__sub_83C10914"))) PPC_WEAK_FUNC(sub_83C10914);
PPC_FUNC_IMPL(__imp__sub_83C10914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10918"))) PPC_WEAK_FUNC(sub_83C10918);
PPC_FUNC_IMPL(__imp__sub_83C10918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25948
	ctx.r11.s64 = ctx.r8.s64 + 25948;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14644);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31904
	ctx.r3.s64 = ctx.r6.s64 + 31904;
	// stw r10,25948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10948"))) PPC_WEAK_FUNC(sub_83C10948);
PPC_FUNC_IMPL(__imp__sub_83C10948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10954"))) PPC_WEAK_FUNC(sub_83C10954);
PPC_FUNC_IMPL(__imp__sub_83C10954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10958"))) PPC_WEAK_FUNC(sub_83C10958);
PPC_FUNC_IMPL(__imp__sub_83C10958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10964"))) PPC_WEAK_FUNC(sub_83C10964);
PPC_FUNC_IMPL(__imp__sub_83C10964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10968"))) PPC_WEAK_FUNC(sub_83C10968);
PPC_FUNC_IMPL(__imp__sub_83C10968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10974"))) PPC_WEAK_FUNC(sub_83C10974);
PPC_FUNC_IMPL(__imp__sub_83C10974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10978"))) PPC_WEAK_FUNC(sub_83C10978);
PPC_FUNC_IMPL(__imp__sub_83C10978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10984"))) PPC_WEAK_FUNC(sub_83C10984);
PPC_FUNC_IMPL(__imp__sub_83C10984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10988"))) PPC_WEAK_FUNC(sub_83C10988);
PPC_FUNC_IMPL(__imp__sub_83C10988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10994"))) PPC_WEAK_FUNC(sub_83C10994);
PPC_FUNC_IMPL(__imp__sub_83C10994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10998"))) PPC_WEAK_FUNC(sub_83C10998);
PPC_FUNC_IMPL(__imp__sub_83C10998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109A4"))) PPC_WEAK_FUNC(sub_83C109A4);
PPC_FUNC_IMPL(__imp__sub_83C109A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109A8"))) PPC_WEAK_FUNC(sub_83C109A8);
PPC_FUNC_IMPL(__imp__sub_83C109A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109B4"))) PPC_WEAK_FUNC(sub_83C109B4);
PPC_FUNC_IMPL(__imp__sub_83C109B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109B8"))) PPC_WEAK_FUNC(sub_83C109B8);
PPC_FUNC_IMPL(__imp__sub_83C109B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31976
	ctx.r3.s64 = ctx.r11.s64 + 31976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109C4"))) PPC_WEAK_FUNC(sub_83C109C4);
PPC_FUNC_IMPL(__imp__sub_83C109C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109C8"))) PPC_WEAK_FUNC(sub_83C109C8);
PPC_FUNC_IMPL(__imp__sub_83C109C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109D4"))) PPC_WEAK_FUNC(sub_83C109D4);
PPC_FUNC_IMPL(__imp__sub_83C109D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109D8"))) PPC_WEAK_FUNC(sub_83C109D8);
PPC_FUNC_IMPL(__imp__sub_83C109D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109E4"))) PPC_WEAK_FUNC(sub_83C109E4);
PPC_FUNC_IMPL(__imp__sub_83C109E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109E8"))) PPC_WEAK_FUNC(sub_83C109E8);
PPC_FUNC_IMPL(__imp__sub_83C109E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32000
	ctx.r3.s64 = ctx.r11.s64 + 32000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C109F4"))) PPC_WEAK_FUNC(sub_83C109F4);
PPC_FUNC_IMPL(__imp__sub_83C109F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C109F8"))) PPC_WEAK_FUNC(sub_83C109F8);
PPC_FUNC_IMPL(__imp__sub_83C109F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32008
	ctx.r3.s64 = ctx.r11.s64 + 32008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10A04"))) PPC_WEAK_FUNC(sub_83C10A04);
PPC_FUNC_IMPL(__imp__sub_83C10A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10A08"))) PPC_WEAK_FUNC(sub_83C10A08);
PPC_FUNC_IMPL(__imp__sub_83C10A08) {
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
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x83523120
	ctx.lr = 0x83C10A20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32016
	ctx.r3.s64 = ctx.r10.s64 + 32016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10A2C;
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

__attribute__((alias("__imp__sub_83C10A3C"))) PPC_WEAK_FUNC(sub_83C10A3C);
PPC_FUNC_IMPL(__imp__sub_83C10A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10A40"))) PPC_WEAK_FUNC(sub_83C10A40);
PPC_FUNC_IMPL(__imp__sub_83C10A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26328
	ctx.r7.s64 = ctx.r8.s64 + 26328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10A68"))) PPC_WEAK_FUNC(sub_83C10A68);
PPC_FUNC_IMPL(__imp__sub_83C10A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14484
	ctx.r6.s64 = ctx.r7.s64 + -14484;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26328);
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
	// std r9,-14484(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14484, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10AB0"))) PPC_WEAK_FUNC(sub_83C10AB0);
PPC_FUNC_IMPL(__imp__sub_83C10AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10ABC"))) PPC_WEAK_FUNC(sub_83C10ABC);
PPC_FUNC_IMPL(__imp__sub_83C10ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10AC0"))) PPC_WEAK_FUNC(sub_83C10AC0);
PPC_FUNC_IMPL(__imp__sub_83C10AC0) {
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
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// bl 0x8259af80
	ctx.lr = 0x83C10AD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32048
	ctx.r3.s64 = ctx.r10.s64 + 32048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10AE4;
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

__attribute__((alias("__imp__sub_83C10AF4"))) PPC_WEAK_FUNC(sub_83C10AF4);
PPC_FUNC_IMPL(__imp__sub_83C10AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10AF8"))) PPC_WEAK_FUNC(sub_83C10AF8);
PPC_FUNC_IMPL(__imp__sub_83C10AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26316
	ctx.r11.s64 = ctx.r8.s64 + 26316;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32040
	ctx.r3.s64 = ctx.r6.s64 + 32040;
	// stw r10,26316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B28"))) PPC_WEAK_FUNC(sub_83C10B28);
PPC_FUNC_IMPL(__imp__sub_83C10B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B34"))) PPC_WEAK_FUNC(sub_83C10B34);
PPC_FUNC_IMPL(__imp__sub_83C10B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B38"))) PPC_WEAK_FUNC(sub_83C10B38);
PPC_FUNC_IMPL(__imp__sub_83C10B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B44"))) PPC_WEAK_FUNC(sub_83C10B44);
PPC_FUNC_IMPL(__imp__sub_83C10B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B48"))) PPC_WEAK_FUNC(sub_83C10B48);
PPC_FUNC_IMPL(__imp__sub_83C10B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B54"))) PPC_WEAK_FUNC(sub_83C10B54);
PPC_FUNC_IMPL(__imp__sub_83C10B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B58"))) PPC_WEAK_FUNC(sub_83C10B58);
PPC_FUNC_IMPL(__imp__sub_83C10B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B64"))) PPC_WEAK_FUNC(sub_83C10B64);
PPC_FUNC_IMPL(__imp__sub_83C10B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B68"))) PPC_WEAK_FUNC(sub_83C10B68);
PPC_FUNC_IMPL(__imp__sub_83C10B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B74"))) PPC_WEAK_FUNC(sub_83C10B74);
PPC_FUNC_IMPL(__imp__sub_83C10B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B78"))) PPC_WEAK_FUNC(sub_83C10B78);
PPC_FUNC_IMPL(__imp__sub_83C10B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B84"))) PPC_WEAK_FUNC(sub_83C10B84);
PPC_FUNC_IMPL(__imp__sub_83C10B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B88"))) PPC_WEAK_FUNC(sub_83C10B88);
PPC_FUNC_IMPL(__imp__sub_83C10B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10B94"))) PPC_WEAK_FUNC(sub_83C10B94);
PPC_FUNC_IMPL(__imp__sub_83C10B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10B98"))) PPC_WEAK_FUNC(sub_83C10B98);
PPC_FUNC_IMPL(__imp__sub_83C10B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10BA4"))) PPC_WEAK_FUNC(sub_83C10BA4);
PPC_FUNC_IMPL(__imp__sub_83C10BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10BA8"))) PPC_WEAK_FUNC(sub_83C10BA8);
PPC_FUNC_IMPL(__imp__sub_83C10BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32120
	ctx.r3.s64 = ctx.r11.s64 + 32120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10BB4"))) PPC_WEAK_FUNC(sub_83C10BB4);
PPC_FUNC_IMPL(__imp__sub_83C10BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10BB8"))) PPC_WEAK_FUNC(sub_83C10BB8);
PPC_FUNC_IMPL(__imp__sub_83C10BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10BC4"))) PPC_WEAK_FUNC(sub_83C10BC4);
PPC_FUNC_IMPL(__imp__sub_83C10BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10BC8"))) PPC_WEAK_FUNC(sub_83C10BC8);
PPC_FUNC_IMPL(__imp__sub_83C10BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10BD4"))) PPC_WEAK_FUNC(sub_83C10BD4);
PPC_FUNC_IMPL(__imp__sub_83C10BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10BD8"))) PPC_WEAK_FUNC(sub_83C10BD8);
PPC_FUNC_IMPL(__imp__sub_83C10BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10BE4"))) PPC_WEAK_FUNC(sub_83C10BE4);
PPC_FUNC_IMPL(__imp__sub_83C10BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10BE8"))) PPC_WEAK_FUNC(sub_83C10BE8);
PPC_FUNC_IMPL(__imp__sub_83C10BE8) {
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
	// addi r3,r11,26684
	ctx.r3.s64 = ctx.r11.s64 + 26684;
	// bl 0x83523120
	ctx.lr = 0x83C10C00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32152
	ctx.r3.s64 = ctx.r10.s64 + 32152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10C0C;
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

__attribute__((alias("__imp__sub_83C10C1C"))) PPC_WEAK_FUNC(sub_83C10C1C);
PPC_FUNC_IMPL(__imp__sub_83C10C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C20"))) PPC_WEAK_FUNC(sub_83C10C20);
PPC_FUNC_IMPL(__imp__sub_83C10C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26688
	ctx.r7.s64 = ctx.r8.s64 + 26688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10C48"))) PPC_WEAK_FUNC(sub_83C10C48);
PPC_FUNC_IMPL(__imp__sub_83C10C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32168
	ctx.r3.s64 = ctx.r11.s64 + 32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10C54"))) PPC_WEAK_FUNC(sub_83C10C54);
PPC_FUNC_IMPL(__imp__sub_83C10C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C58"))) PPC_WEAK_FUNC(sub_83C10C58);
PPC_FUNC_IMPL(__imp__sub_83C10C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10C64"))) PPC_WEAK_FUNC(sub_83C10C64);
PPC_FUNC_IMPL(__imp__sub_83C10C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C68"))) PPC_WEAK_FUNC(sub_83C10C68);
PPC_FUNC_IMPL(__imp__sub_83C10C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10C74"))) PPC_WEAK_FUNC(sub_83C10C74);
PPC_FUNC_IMPL(__imp__sub_83C10C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C78"))) PPC_WEAK_FUNC(sub_83C10C78);
PPC_FUNC_IMPL(__imp__sub_83C10C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10C84"))) PPC_WEAK_FUNC(sub_83C10C84);
PPC_FUNC_IMPL(__imp__sub_83C10C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C88"))) PPC_WEAK_FUNC(sub_83C10C88);
PPC_FUNC_IMPL(__imp__sub_83C10C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10C94"))) PPC_WEAK_FUNC(sub_83C10C94);
PPC_FUNC_IMPL(__imp__sub_83C10C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10C98"))) PPC_WEAK_FUNC(sub_83C10C98);
PPC_FUNC_IMPL(__imp__sub_83C10C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CA4"))) PPC_WEAK_FUNC(sub_83C10CA4);
PPC_FUNC_IMPL(__imp__sub_83C10CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CA8"))) PPC_WEAK_FUNC(sub_83C10CA8);
PPC_FUNC_IMPL(__imp__sub_83C10CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CB4"))) PPC_WEAK_FUNC(sub_83C10CB4);
PPC_FUNC_IMPL(__imp__sub_83C10CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CB8"))) PPC_WEAK_FUNC(sub_83C10CB8);
PPC_FUNC_IMPL(__imp__sub_83C10CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CC4"))) PPC_WEAK_FUNC(sub_83C10CC4);
PPC_FUNC_IMPL(__imp__sub_83C10CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CC8"))) PPC_WEAK_FUNC(sub_83C10CC8);
PPC_FUNC_IMPL(__imp__sub_83C10CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CD4"))) PPC_WEAK_FUNC(sub_83C10CD4);
PPC_FUNC_IMPL(__imp__sub_83C10CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CD8"))) PPC_WEAK_FUNC(sub_83C10CD8);
PPC_FUNC_IMPL(__imp__sub_83C10CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CE4"))) PPC_WEAK_FUNC(sub_83C10CE4);
PPC_FUNC_IMPL(__imp__sub_83C10CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CE8"))) PPC_WEAK_FUNC(sub_83C10CE8);
PPC_FUNC_IMPL(__imp__sub_83C10CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32248
	ctx.r3.s64 = ctx.r11.s64 + 32248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10CF4"))) PPC_WEAK_FUNC(sub_83C10CF4);
PPC_FUNC_IMPL(__imp__sub_83C10CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10CF8"))) PPC_WEAK_FUNC(sub_83C10CF8);
PPC_FUNC_IMPL(__imp__sub_83C10CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32256
	ctx.r3.s64 = ctx.r11.s64 + 32256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10D04"))) PPC_WEAK_FUNC(sub_83C10D04);
PPC_FUNC_IMPL(__imp__sub_83C10D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10D08"))) PPC_WEAK_FUNC(sub_83C10D08);
PPC_FUNC_IMPL(__imp__sub_83C10D08) {
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
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// bl 0x83523120
	ctx.lr = 0x83C10D20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32264
	ctx.r3.s64 = ctx.r10.s64 + 32264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10D2C;
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

__attribute__((alias("__imp__sub_83C10D3C"))) PPC_WEAK_FUNC(sub_83C10D3C);
PPC_FUNC_IMPL(__imp__sub_83C10D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10D40"))) PPC_WEAK_FUNC(sub_83C10D40);
PPC_FUNC_IMPL(__imp__sub_83C10D40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26712
	ctx.r7.s64 = ctx.r8.s64 + 26712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10D68"))) PPC_WEAK_FUNC(sub_83C10D68);
PPC_FUNC_IMPL(__imp__sub_83C10D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-14252
	ctx.r6.s64 = ctx.r7.s64 + -14252;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26712);
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
	// std r9,-14252(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10DB0"))) PPC_WEAK_FUNC(sub_83C10DB0);
PPC_FUNC_IMPL(__imp__sub_83C10DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10DBC"))) PPC_WEAK_FUNC(sub_83C10DBC);
PPC_FUNC_IMPL(__imp__sub_83C10DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10DC0"))) PPC_WEAK_FUNC(sub_83C10DC0);
PPC_FUNC_IMPL(__imp__sub_83C10DC0) {
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
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// bl 0x8259af80
	ctx.lr = 0x83C10DD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32296
	ctx.r3.s64 = ctx.r10.s64 + 32296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10DE4;
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

__attribute__((alias("__imp__sub_83C10DF4"))) PPC_WEAK_FUNC(sub_83C10DF4);
PPC_FUNC_IMPL(__imp__sub_83C10DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10DF8"))) PPC_WEAK_FUNC(sub_83C10DF8);
PPC_FUNC_IMPL(__imp__sub_83C10DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26700
	ctx.r11.s64 = ctx.r8.s64 + 26700;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32288
	ctx.r3.s64 = ctx.r6.s64 + 32288;
	// stw r10,26700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E28"))) PPC_WEAK_FUNC(sub_83C10E28);
PPC_FUNC_IMPL(__imp__sub_83C10E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E34"))) PPC_WEAK_FUNC(sub_83C10E34);
PPC_FUNC_IMPL(__imp__sub_83C10E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E38"))) PPC_WEAK_FUNC(sub_83C10E38);
PPC_FUNC_IMPL(__imp__sub_83C10E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E44"))) PPC_WEAK_FUNC(sub_83C10E44);
PPC_FUNC_IMPL(__imp__sub_83C10E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E48"))) PPC_WEAK_FUNC(sub_83C10E48);
PPC_FUNC_IMPL(__imp__sub_83C10E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E54"))) PPC_WEAK_FUNC(sub_83C10E54);
PPC_FUNC_IMPL(__imp__sub_83C10E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E58"))) PPC_WEAK_FUNC(sub_83C10E58);
PPC_FUNC_IMPL(__imp__sub_83C10E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E64"))) PPC_WEAK_FUNC(sub_83C10E64);
PPC_FUNC_IMPL(__imp__sub_83C10E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E68"))) PPC_WEAK_FUNC(sub_83C10E68);
PPC_FUNC_IMPL(__imp__sub_83C10E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E74"))) PPC_WEAK_FUNC(sub_83C10E74);
PPC_FUNC_IMPL(__imp__sub_83C10E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E78"))) PPC_WEAK_FUNC(sub_83C10E78);
PPC_FUNC_IMPL(__imp__sub_83C10E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E84"))) PPC_WEAK_FUNC(sub_83C10E84);
PPC_FUNC_IMPL(__imp__sub_83C10E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E88"))) PPC_WEAK_FUNC(sub_83C10E88);
PPC_FUNC_IMPL(__imp__sub_83C10E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10E94"))) PPC_WEAK_FUNC(sub_83C10E94);
PPC_FUNC_IMPL(__imp__sub_83C10E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10E98"))) PPC_WEAK_FUNC(sub_83C10E98);
PPC_FUNC_IMPL(__imp__sub_83C10E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32360
	ctx.r3.s64 = ctx.r11.s64 + 32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10EA4"))) PPC_WEAK_FUNC(sub_83C10EA4);
PPC_FUNC_IMPL(__imp__sub_83C10EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10EA8"))) PPC_WEAK_FUNC(sub_83C10EA8);
PPC_FUNC_IMPL(__imp__sub_83C10EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32368
	ctx.r3.s64 = ctx.r11.s64 + 32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10EB4"))) PPC_WEAK_FUNC(sub_83C10EB4);
PPC_FUNC_IMPL(__imp__sub_83C10EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10EB8"))) PPC_WEAK_FUNC(sub_83C10EB8);
PPC_FUNC_IMPL(__imp__sub_83C10EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10EC4"))) PPC_WEAK_FUNC(sub_83C10EC4);
PPC_FUNC_IMPL(__imp__sub_83C10EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10EC8"))) PPC_WEAK_FUNC(sub_83C10EC8);
PPC_FUNC_IMPL(__imp__sub_83C10EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10ED4"))) PPC_WEAK_FUNC(sub_83C10ED4);
PPC_FUNC_IMPL(__imp__sub_83C10ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10ED8"))) PPC_WEAK_FUNC(sub_83C10ED8);
PPC_FUNC_IMPL(__imp__sub_83C10ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,32392
	ctx.r3.s64 = ctx.r11.s64 + 32392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10EE4"))) PPC_WEAK_FUNC(sub_83C10EE4);
PPC_FUNC_IMPL(__imp__sub_83C10EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10EE8"))) PPC_WEAK_FUNC(sub_83C10EE8);
PPC_FUNC_IMPL(__imp__sub_83C10EE8) {
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
	// addi r3,r11,27068
	ctx.r3.s64 = ctx.r11.s64 + 27068;
	// bl 0x83523120
	ctx.lr = 0x83C10F00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,32400
	ctx.r3.s64 = ctx.r10.s64 + 32400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C10F0C;
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

