#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C56868"))) PPC_WEAK_FUNC(sub_83C56868);
PPC_FUNC_IMPL(__imp__sub_83C56868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,16652
	ctx.r6.s64 = ctx.r7.s64 + 16652;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16580(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16580);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27304);
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
	// std r9,16652(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16652, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C568B0"))) PPC_WEAK_FUNC(sub_83C568B0);
PPC_FUNC_IMPL(__imp__sub_83C568B0) {
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
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// bl 0x83523120
	ctx.lr = 0x83C568C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-8
	ctx.r3.s64 = ctx.r10.s64 + -8;
	// bl 0x831cdcc8
	ctx.lr = 0x83C568D4;
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

__attribute__((alias("__imp__sub_83C568E4"))) PPC_WEAK_FUNC(sub_83C568E4);
PPC_FUNC_IMPL(__imp__sub_83C568E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C568E8"))) PPC_WEAK_FUNC(sub_83C568E8);
PPC_FUNC_IMPL(__imp__sub_83C568E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C568F4"))) PPC_WEAK_FUNC(sub_83C568F4);
PPC_FUNC_IMPL(__imp__sub_83C568F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C568F8"))) PPC_WEAK_FUNC(sub_83C568F8);
PPC_FUNC_IMPL(__imp__sub_83C568F8) {
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
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// bl 0x8259af80
	ctx.lr = 0x83C56910;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5691C;
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

__attribute__((alias("__imp__sub_83C5692C"))) PPC_WEAK_FUNC(sub_83C5692C);
PPC_FUNC_IMPL(__imp__sub_83C5692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56930"))) PPC_WEAK_FUNC(sub_83C56930);
PPC_FUNC_IMPL(__imp__sub_83C56930) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27316
	ctx.r11.s64 = ctx.r8.s64 + -27316;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,16628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16628);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// stw r10,-27316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56960"))) PPC_WEAK_FUNC(sub_83C56960);
PPC_FUNC_IMPL(__imp__sub_83C56960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5696C"))) PPC_WEAK_FUNC(sub_83C5696C);
PPC_FUNC_IMPL(__imp__sub_83C5696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56970"))) PPC_WEAK_FUNC(sub_83C56970);
PPC_FUNC_IMPL(__imp__sub_83C56970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5697C"))) PPC_WEAK_FUNC(sub_83C5697C);
PPC_FUNC_IMPL(__imp__sub_83C5697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56980"))) PPC_WEAK_FUNC(sub_83C56980);
PPC_FUNC_IMPL(__imp__sub_83C56980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5698C"))) PPC_WEAK_FUNC(sub_83C5698C);
PPC_FUNC_IMPL(__imp__sub_83C5698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56990"))) PPC_WEAK_FUNC(sub_83C56990);
PPC_FUNC_IMPL(__imp__sub_83C56990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5699C"))) PPC_WEAK_FUNC(sub_83C5699C);
PPC_FUNC_IMPL(__imp__sub_83C5699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569A0"))) PPC_WEAK_FUNC(sub_83C569A0);
PPC_FUNC_IMPL(__imp__sub_83C569A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569AC"))) PPC_WEAK_FUNC(sub_83C569AC);
PPC_FUNC_IMPL(__imp__sub_83C569AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569B0"))) PPC_WEAK_FUNC(sub_83C569B0);
PPC_FUNC_IMPL(__imp__sub_83C569B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569BC"))) PPC_WEAK_FUNC(sub_83C569BC);
PPC_FUNC_IMPL(__imp__sub_83C569BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569C0"))) PPC_WEAK_FUNC(sub_83C569C0);
PPC_FUNC_IMPL(__imp__sub_83C569C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569CC"))) PPC_WEAK_FUNC(sub_83C569CC);
PPC_FUNC_IMPL(__imp__sub_83C569CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569D0"))) PPC_WEAK_FUNC(sub_83C569D0);
PPC_FUNC_IMPL(__imp__sub_83C569D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569DC"))) PPC_WEAK_FUNC(sub_83C569DC);
PPC_FUNC_IMPL(__imp__sub_83C569DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569E0"))) PPC_WEAK_FUNC(sub_83C569E0);
PPC_FUNC_IMPL(__imp__sub_83C569E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569EC"))) PPC_WEAK_FUNC(sub_83C569EC);
PPC_FUNC_IMPL(__imp__sub_83C569EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C569F0"))) PPC_WEAK_FUNC(sub_83C569F0);
PPC_FUNC_IMPL(__imp__sub_83C569F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C569FC"))) PPC_WEAK_FUNC(sub_83C569FC);
PPC_FUNC_IMPL(__imp__sub_83C569FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56A00"))) PPC_WEAK_FUNC(sub_83C56A00);
PPC_FUNC_IMPL(__imp__sub_83C56A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56A0C"))) PPC_WEAK_FUNC(sub_83C56A0C);
PPC_FUNC_IMPL(__imp__sub_83C56A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56A10"))) PPC_WEAK_FUNC(sub_83C56A10);
PPC_FUNC_IMPL(__imp__sub_83C56A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56A1C"))) PPC_WEAK_FUNC(sub_83C56A1C);
PPC_FUNC_IMPL(__imp__sub_83C56A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56A20"))) PPC_WEAK_FUNC(sub_83C56A20);
PPC_FUNC_IMPL(__imp__sub_83C56A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26936
	ctx.r7.s64 = ctx.r8.s64 + -26936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56A48"))) PPC_WEAK_FUNC(sub_83C56A48);
PPC_FUNC_IMPL(__imp__sub_83C56A48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,16792
	ctx.r6.s64 = ctx.r7.s64 + 16792;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16720(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16720);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26936);
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
	// std r9,16792(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16792, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56A90"))) PPC_WEAK_FUNC(sub_83C56A90);
PPC_FUNC_IMPL(__imp__sub_83C56A90) {
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
	// addi r3,r11,-26952
	ctx.r3.s64 = ctx.r11.s64 + -26952;
	// bl 0x83523120
	ctx.lr = 0x83C56AA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56AB4;
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

__attribute__((alias("__imp__sub_83C56AC4"))) PPC_WEAK_FUNC(sub_83C56AC4);
PPC_FUNC_IMPL(__imp__sub_83C56AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56AC8"))) PPC_WEAK_FUNC(sub_83C56AC8);
PPC_FUNC_IMPL(__imp__sub_83C56AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56AD4"))) PPC_WEAK_FUNC(sub_83C56AD4);
PPC_FUNC_IMPL(__imp__sub_83C56AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56AD8"))) PPC_WEAK_FUNC(sub_83C56AD8);
PPC_FUNC_IMPL(__imp__sub_83C56AD8) {
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
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// bl 0x8259af80
	ctx.lr = 0x83C56AF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,160
	ctx.r3.s64 = ctx.r10.s64 + 160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56AFC;
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

__attribute__((alias("__imp__sub_83C56B0C"))) PPC_WEAK_FUNC(sub_83C56B0C);
PPC_FUNC_IMPL(__imp__sub_83C56B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B10"))) PPC_WEAK_FUNC(sub_83C56B10);
PPC_FUNC_IMPL(__imp__sub_83C56B10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26948
	ctx.r11.s64 = ctx.r8.s64 + -26948;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,16768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16768);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,152
	ctx.r3.s64 = ctx.r6.s64 + 152;
	// stw r10,-26948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B40"))) PPC_WEAK_FUNC(sub_83C56B40);
PPC_FUNC_IMPL(__imp__sub_83C56B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B4C"))) PPC_WEAK_FUNC(sub_83C56B4C);
PPC_FUNC_IMPL(__imp__sub_83C56B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B50"))) PPC_WEAK_FUNC(sub_83C56B50);
PPC_FUNC_IMPL(__imp__sub_83C56B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B5C"))) PPC_WEAK_FUNC(sub_83C56B5C);
PPC_FUNC_IMPL(__imp__sub_83C56B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B60"))) PPC_WEAK_FUNC(sub_83C56B60);
PPC_FUNC_IMPL(__imp__sub_83C56B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B6C"))) PPC_WEAK_FUNC(sub_83C56B6C);
PPC_FUNC_IMPL(__imp__sub_83C56B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B70"))) PPC_WEAK_FUNC(sub_83C56B70);
PPC_FUNC_IMPL(__imp__sub_83C56B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B7C"))) PPC_WEAK_FUNC(sub_83C56B7C);
PPC_FUNC_IMPL(__imp__sub_83C56B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B80"))) PPC_WEAK_FUNC(sub_83C56B80);
PPC_FUNC_IMPL(__imp__sub_83C56B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B8C"))) PPC_WEAK_FUNC(sub_83C56B8C);
PPC_FUNC_IMPL(__imp__sub_83C56B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56B90"))) PPC_WEAK_FUNC(sub_83C56B90);
PPC_FUNC_IMPL(__imp__sub_83C56B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56B9C"))) PPC_WEAK_FUNC(sub_83C56B9C);
PPC_FUNC_IMPL(__imp__sub_83C56B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BA0"))) PPC_WEAK_FUNC(sub_83C56BA0);
PPC_FUNC_IMPL(__imp__sub_83C56BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BAC"))) PPC_WEAK_FUNC(sub_83C56BAC);
PPC_FUNC_IMPL(__imp__sub_83C56BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BB0"))) PPC_WEAK_FUNC(sub_83C56BB0);
PPC_FUNC_IMPL(__imp__sub_83C56BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BBC"))) PPC_WEAK_FUNC(sub_83C56BBC);
PPC_FUNC_IMPL(__imp__sub_83C56BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BC0"))) PPC_WEAK_FUNC(sub_83C56BC0);
PPC_FUNC_IMPL(__imp__sub_83C56BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BCC"))) PPC_WEAK_FUNC(sub_83C56BCC);
PPC_FUNC_IMPL(__imp__sub_83C56BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BD0"))) PPC_WEAK_FUNC(sub_83C56BD0);
PPC_FUNC_IMPL(__imp__sub_83C56BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BDC"))) PPC_WEAK_FUNC(sub_83C56BDC);
PPC_FUNC_IMPL(__imp__sub_83C56BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BE0"))) PPC_WEAK_FUNC(sub_83C56BE0);
PPC_FUNC_IMPL(__imp__sub_83C56BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BEC"))) PPC_WEAK_FUNC(sub_83C56BEC);
PPC_FUNC_IMPL(__imp__sub_83C56BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56BF0"))) PPC_WEAK_FUNC(sub_83C56BF0);
PPC_FUNC_IMPL(__imp__sub_83C56BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56BFC"))) PPC_WEAK_FUNC(sub_83C56BFC);
PPC_FUNC_IMPL(__imp__sub_83C56BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56C00"))) PPC_WEAK_FUNC(sub_83C56C00);
PPC_FUNC_IMPL(__imp__sub_83C56C00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26568
	ctx.r7.s64 = ctx.r8.s64 + -26568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56C28"))) PPC_WEAK_FUNC(sub_83C56C28);
PPC_FUNC_IMPL(__imp__sub_83C56C28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,16920
	ctx.r6.s64 = ctx.r7.s64 + 16920;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26568);
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
	// std r9,16920(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16920, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56C70"))) PPC_WEAK_FUNC(sub_83C56C70);
PPC_FUNC_IMPL(__imp__sub_83C56C70) {
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
	// addi r3,r11,-26584
	ctx.r3.s64 = ctx.r11.s64 + -26584;
	// bl 0x83523120
	ctx.lr = 0x83C56C88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,264
	ctx.r3.s64 = ctx.r10.s64 + 264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56C94;
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

__attribute__((alias("__imp__sub_83C56CA4"))) PPC_WEAK_FUNC(sub_83C56CA4);
PPC_FUNC_IMPL(__imp__sub_83C56CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56CA8"))) PPC_WEAK_FUNC(sub_83C56CA8);
PPC_FUNC_IMPL(__imp__sub_83C56CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56CB4"))) PPC_WEAK_FUNC(sub_83C56CB4);
PPC_FUNC_IMPL(__imp__sub_83C56CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56CB8"))) PPC_WEAK_FUNC(sub_83C56CB8);
PPC_FUNC_IMPL(__imp__sub_83C56CB8) {
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
	// addi r3,r11,-26560
	ctx.r3.s64 = ctx.r11.s64 + -26560;
	// bl 0x8259af80
	ctx.lr = 0x83C56CD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,296
	ctx.r3.s64 = ctx.r10.s64 + 296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56CDC;
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

__attribute__((alias("__imp__sub_83C56CEC"))) PPC_WEAK_FUNC(sub_83C56CEC);
PPC_FUNC_IMPL(__imp__sub_83C56CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56CF0"))) PPC_WEAK_FUNC(sub_83C56CF0);
PPC_FUNC_IMPL(__imp__sub_83C56CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26580
	ctx.r11.s64 = ctx.r8.s64 + -26580;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,16896(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16896);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,288
	ctx.r3.s64 = ctx.r6.s64 + 288;
	// stw r10,-26580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D20"))) PPC_WEAK_FUNC(sub_83C56D20);
PPC_FUNC_IMPL(__imp__sub_83C56D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D2C"))) PPC_WEAK_FUNC(sub_83C56D2C);
PPC_FUNC_IMPL(__imp__sub_83C56D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D30"))) PPC_WEAK_FUNC(sub_83C56D30);
PPC_FUNC_IMPL(__imp__sub_83C56D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D3C"))) PPC_WEAK_FUNC(sub_83C56D3C);
PPC_FUNC_IMPL(__imp__sub_83C56D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D40"))) PPC_WEAK_FUNC(sub_83C56D40);
PPC_FUNC_IMPL(__imp__sub_83C56D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D4C"))) PPC_WEAK_FUNC(sub_83C56D4C);
PPC_FUNC_IMPL(__imp__sub_83C56D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D50"))) PPC_WEAK_FUNC(sub_83C56D50);
PPC_FUNC_IMPL(__imp__sub_83C56D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D5C"))) PPC_WEAK_FUNC(sub_83C56D5C);
PPC_FUNC_IMPL(__imp__sub_83C56D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D60"))) PPC_WEAK_FUNC(sub_83C56D60);
PPC_FUNC_IMPL(__imp__sub_83C56D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D6C"))) PPC_WEAK_FUNC(sub_83C56D6C);
PPC_FUNC_IMPL(__imp__sub_83C56D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D70"))) PPC_WEAK_FUNC(sub_83C56D70);
PPC_FUNC_IMPL(__imp__sub_83C56D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D7C"))) PPC_WEAK_FUNC(sub_83C56D7C);
PPC_FUNC_IMPL(__imp__sub_83C56D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D80"))) PPC_WEAK_FUNC(sub_83C56D80);
PPC_FUNC_IMPL(__imp__sub_83C56D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D8C"))) PPC_WEAK_FUNC(sub_83C56D8C);
PPC_FUNC_IMPL(__imp__sub_83C56D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56D90"))) PPC_WEAK_FUNC(sub_83C56D90);
PPC_FUNC_IMPL(__imp__sub_83C56D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56D9C"))) PPC_WEAK_FUNC(sub_83C56D9C);
PPC_FUNC_IMPL(__imp__sub_83C56D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56DA0"))) PPC_WEAK_FUNC(sub_83C56DA0);
PPC_FUNC_IMPL(__imp__sub_83C56DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56DAC"))) PPC_WEAK_FUNC(sub_83C56DAC);
PPC_FUNC_IMPL(__imp__sub_83C56DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56DB0"))) PPC_WEAK_FUNC(sub_83C56DB0);
PPC_FUNC_IMPL(__imp__sub_83C56DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56DBC"))) PPC_WEAK_FUNC(sub_83C56DBC);
PPC_FUNC_IMPL(__imp__sub_83C56DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56DC0"))) PPC_WEAK_FUNC(sub_83C56DC0);
PPC_FUNC_IMPL(__imp__sub_83C56DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56DCC"))) PPC_WEAK_FUNC(sub_83C56DCC);
PPC_FUNC_IMPL(__imp__sub_83C56DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56DD0"))) PPC_WEAK_FUNC(sub_83C56DD0);
PPC_FUNC_IMPL(__imp__sub_83C56DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56DDC"))) PPC_WEAK_FUNC(sub_83C56DDC);
PPC_FUNC_IMPL(__imp__sub_83C56DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56DE0"))) PPC_WEAK_FUNC(sub_83C56DE0);
PPC_FUNC_IMPL(__imp__sub_83C56DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26200
	ctx.r7.s64 = ctx.r8.s64 + -26200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56E08"))) PPC_WEAK_FUNC(sub_83C56E08);
PPC_FUNC_IMPL(__imp__sub_83C56E08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17048
	ctx.r6.s64 = ctx.r7.s64 + 17048;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26200);
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
	// std r9,17048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56E50"))) PPC_WEAK_FUNC(sub_83C56E50);
PPC_FUNC_IMPL(__imp__sub_83C56E50) {
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
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// bl 0x83523120
	ctx.lr = 0x83C56E68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,400
	ctx.r3.s64 = ctx.r10.s64 + 400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56E74;
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

__attribute__((alias("__imp__sub_83C56E84"))) PPC_WEAK_FUNC(sub_83C56E84);
PPC_FUNC_IMPL(__imp__sub_83C56E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56E88"))) PPC_WEAK_FUNC(sub_83C56E88);
PPC_FUNC_IMPL(__imp__sub_83C56E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56E94"))) PPC_WEAK_FUNC(sub_83C56E94);
PPC_FUNC_IMPL(__imp__sub_83C56E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56E98"))) PPC_WEAK_FUNC(sub_83C56E98);
PPC_FUNC_IMPL(__imp__sub_83C56E98) {
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
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// bl 0x8259af80
	ctx.lr = 0x83C56EB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,432
	ctx.r3.s64 = ctx.r10.s64 + 432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C56EBC;
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

__attribute__((alias("__imp__sub_83C56ECC"))) PPC_WEAK_FUNC(sub_83C56ECC);
PPC_FUNC_IMPL(__imp__sub_83C56ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56ED0"))) PPC_WEAK_FUNC(sub_83C56ED0);
PPC_FUNC_IMPL(__imp__sub_83C56ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26212
	ctx.r11.s64 = ctx.r8.s64 + -26212;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,424
	ctx.r3.s64 = ctx.r6.s64 + 424;
	// stw r10,-26212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F00"))) PPC_WEAK_FUNC(sub_83C56F00);
PPC_FUNC_IMPL(__imp__sub_83C56F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F0C"))) PPC_WEAK_FUNC(sub_83C56F0C);
PPC_FUNC_IMPL(__imp__sub_83C56F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F10"))) PPC_WEAK_FUNC(sub_83C56F10);
PPC_FUNC_IMPL(__imp__sub_83C56F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,448
	ctx.r3.s64 = ctx.r11.s64 + 448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F1C"))) PPC_WEAK_FUNC(sub_83C56F1C);
PPC_FUNC_IMPL(__imp__sub_83C56F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F20"))) PPC_WEAK_FUNC(sub_83C56F20);
PPC_FUNC_IMPL(__imp__sub_83C56F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,456
	ctx.r3.s64 = ctx.r11.s64 + 456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F2C"))) PPC_WEAK_FUNC(sub_83C56F2C);
PPC_FUNC_IMPL(__imp__sub_83C56F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F30"))) PPC_WEAK_FUNC(sub_83C56F30);
PPC_FUNC_IMPL(__imp__sub_83C56F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 + 464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F3C"))) PPC_WEAK_FUNC(sub_83C56F3C);
PPC_FUNC_IMPL(__imp__sub_83C56F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F40"))) PPC_WEAK_FUNC(sub_83C56F40);
PPC_FUNC_IMPL(__imp__sub_83C56F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F4C"))) PPC_WEAK_FUNC(sub_83C56F4C);
PPC_FUNC_IMPL(__imp__sub_83C56F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F50"))) PPC_WEAK_FUNC(sub_83C56F50);
PPC_FUNC_IMPL(__imp__sub_83C56F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F5C"))) PPC_WEAK_FUNC(sub_83C56F5C);
PPC_FUNC_IMPL(__imp__sub_83C56F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F60"))) PPC_WEAK_FUNC(sub_83C56F60);
PPC_FUNC_IMPL(__imp__sub_83C56F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F6C"))) PPC_WEAK_FUNC(sub_83C56F6C);
PPC_FUNC_IMPL(__imp__sub_83C56F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F70"))) PPC_WEAK_FUNC(sub_83C56F70);
PPC_FUNC_IMPL(__imp__sub_83C56F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F7C"))) PPC_WEAK_FUNC(sub_83C56F7C);
PPC_FUNC_IMPL(__imp__sub_83C56F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F80"))) PPC_WEAK_FUNC(sub_83C56F80);
PPC_FUNC_IMPL(__imp__sub_83C56F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F8C"))) PPC_WEAK_FUNC(sub_83C56F8C);
PPC_FUNC_IMPL(__imp__sub_83C56F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56F90"))) PPC_WEAK_FUNC(sub_83C56F90);
PPC_FUNC_IMPL(__imp__sub_83C56F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56F9C"))) PPC_WEAK_FUNC(sub_83C56F9C);
PPC_FUNC_IMPL(__imp__sub_83C56F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56FA0"))) PPC_WEAK_FUNC(sub_83C56FA0);
PPC_FUNC_IMPL(__imp__sub_83C56FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56FAC"))) PPC_WEAK_FUNC(sub_83C56FAC);
PPC_FUNC_IMPL(__imp__sub_83C56FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56FB0"))) PPC_WEAK_FUNC(sub_83C56FB0);
PPC_FUNC_IMPL(__imp__sub_83C56FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C56FBC"))) PPC_WEAK_FUNC(sub_83C56FBC);
PPC_FUNC_IMPL(__imp__sub_83C56FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C56FC0"))) PPC_WEAK_FUNC(sub_83C56FC0);
PPC_FUNC_IMPL(__imp__sub_83C56FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25832
	ctx.r7.s64 = ctx.r8.s64 + -25832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C56FE8"))) PPC_WEAK_FUNC(sub_83C56FE8);
PPC_FUNC_IMPL(__imp__sub_83C56FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17176
	ctx.r6.s64 = ctx.r7.s64 + 17176;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25832);
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
	// std r9,17176(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57030"))) PPC_WEAK_FUNC(sub_83C57030);
PPC_FUNC_IMPL(__imp__sub_83C57030) {
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
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// bl 0x83523120
	ctx.lr = 0x83C57048;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,536
	ctx.r3.s64 = ctx.r10.s64 + 536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57054;
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

__attribute__((alias("__imp__sub_83C57064"))) PPC_WEAK_FUNC(sub_83C57064);
PPC_FUNC_IMPL(__imp__sub_83C57064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57068"))) PPC_WEAK_FUNC(sub_83C57068);
PPC_FUNC_IMPL(__imp__sub_83C57068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57074"))) PPC_WEAK_FUNC(sub_83C57074);
PPC_FUNC_IMPL(__imp__sub_83C57074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57078"))) PPC_WEAK_FUNC(sub_83C57078);
PPC_FUNC_IMPL(__imp__sub_83C57078) {
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
	// addi r3,r11,-25824
	ctx.r3.s64 = ctx.r11.s64 + -25824;
	// bl 0x8259af80
	ctx.lr = 0x83C57090;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,568
	ctx.r3.s64 = ctx.r10.s64 + 568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5709C;
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

__attribute__((alias("__imp__sub_83C570AC"))) PPC_WEAK_FUNC(sub_83C570AC);
PPC_FUNC_IMPL(__imp__sub_83C570AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C570B0"))) PPC_WEAK_FUNC(sub_83C570B0);
PPC_FUNC_IMPL(__imp__sub_83C570B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25844
	ctx.r11.s64 = ctx.r8.s64 + -25844;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17152);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,560
	ctx.r3.s64 = ctx.r6.s64 + 560;
	// stw r10,-25844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C570E0"))) PPC_WEAK_FUNC(sub_83C570E0);
PPC_FUNC_IMPL(__imp__sub_83C570E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C570EC"))) PPC_WEAK_FUNC(sub_83C570EC);
PPC_FUNC_IMPL(__imp__sub_83C570EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C570F0"))) PPC_WEAK_FUNC(sub_83C570F0);
PPC_FUNC_IMPL(__imp__sub_83C570F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,584
	ctx.r3.s64 = ctx.r11.s64 + 584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C570FC"))) PPC_WEAK_FUNC(sub_83C570FC);
PPC_FUNC_IMPL(__imp__sub_83C570FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57100"))) PPC_WEAK_FUNC(sub_83C57100);
PPC_FUNC_IMPL(__imp__sub_83C57100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5710C"))) PPC_WEAK_FUNC(sub_83C5710C);
PPC_FUNC_IMPL(__imp__sub_83C5710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57110"))) PPC_WEAK_FUNC(sub_83C57110);
PPC_FUNC_IMPL(__imp__sub_83C57110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5711C"))) PPC_WEAK_FUNC(sub_83C5711C);
PPC_FUNC_IMPL(__imp__sub_83C5711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57120"))) PPC_WEAK_FUNC(sub_83C57120);
PPC_FUNC_IMPL(__imp__sub_83C57120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5712C"))) PPC_WEAK_FUNC(sub_83C5712C);
PPC_FUNC_IMPL(__imp__sub_83C5712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57130"))) PPC_WEAK_FUNC(sub_83C57130);
PPC_FUNC_IMPL(__imp__sub_83C57130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5713C"))) PPC_WEAK_FUNC(sub_83C5713C);
PPC_FUNC_IMPL(__imp__sub_83C5713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57140"))) PPC_WEAK_FUNC(sub_83C57140);
PPC_FUNC_IMPL(__imp__sub_83C57140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5714C"))) PPC_WEAK_FUNC(sub_83C5714C);
PPC_FUNC_IMPL(__imp__sub_83C5714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57150"))) PPC_WEAK_FUNC(sub_83C57150);
PPC_FUNC_IMPL(__imp__sub_83C57150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5715C"))) PPC_WEAK_FUNC(sub_83C5715C);
PPC_FUNC_IMPL(__imp__sub_83C5715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57160"))) PPC_WEAK_FUNC(sub_83C57160);
PPC_FUNC_IMPL(__imp__sub_83C57160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5716C"))) PPC_WEAK_FUNC(sub_83C5716C);
PPC_FUNC_IMPL(__imp__sub_83C5716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57170"))) PPC_WEAK_FUNC(sub_83C57170);
PPC_FUNC_IMPL(__imp__sub_83C57170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,648
	ctx.r3.s64 = ctx.r11.s64 + 648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5717C"))) PPC_WEAK_FUNC(sub_83C5717C);
PPC_FUNC_IMPL(__imp__sub_83C5717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57180"))) PPC_WEAK_FUNC(sub_83C57180);
PPC_FUNC_IMPL(__imp__sub_83C57180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5718C"))) PPC_WEAK_FUNC(sub_83C5718C);
PPC_FUNC_IMPL(__imp__sub_83C5718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57190"))) PPC_WEAK_FUNC(sub_83C57190);
PPC_FUNC_IMPL(__imp__sub_83C57190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5719C"))) PPC_WEAK_FUNC(sub_83C5719C);
PPC_FUNC_IMPL(__imp__sub_83C5719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C571A0"))) PPC_WEAK_FUNC(sub_83C571A0);
PPC_FUNC_IMPL(__imp__sub_83C571A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25464
	ctx.r7.s64 = ctx.r8.s64 + -25464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C571C8"))) PPC_WEAK_FUNC(sub_83C571C8);
PPC_FUNC_IMPL(__imp__sub_83C571C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17304
	ctx.r6.s64 = ctx.r7.s64 + 17304;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25464);
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
	// std r9,17304(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17304, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57210"))) PPC_WEAK_FUNC(sub_83C57210);
PPC_FUNC_IMPL(__imp__sub_83C57210) {
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
	// addi r3,r11,-25480
	ctx.r3.s64 = ctx.r11.s64 + -25480;
	// bl 0x83523120
	ctx.lr = 0x83C57228;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,672
	ctx.r3.s64 = ctx.r10.s64 + 672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57234;
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

__attribute__((alias("__imp__sub_83C57244"))) PPC_WEAK_FUNC(sub_83C57244);
PPC_FUNC_IMPL(__imp__sub_83C57244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57248"))) PPC_WEAK_FUNC(sub_83C57248);
PPC_FUNC_IMPL(__imp__sub_83C57248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,688
	ctx.r3.s64 = ctx.r11.s64 + 688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57254"))) PPC_WEAK_FUNC(sub_83C57254);
PPC_FUNC_IMPL(__imp__sub_83C57254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57258"))) PPC_WEAK_FUNC(sub_83C57258);
PPC_FUNC_IMPL(__imp__sub_83C57258) {
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
	// addi r3,r11,-25456
	ctx.r3.s64 = ctx.r11.s64 + -25456;
	// bl 0x8259af80
	ctx.lr = 0x83C57270;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,704
	ctx.r3.s64 = ctx.r10.s64 + 704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5727C;
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

__attribute__((alias("__imp__sub_83C5728C"))) PPC_WEAK_FUNC(sub_83C5728C);
PPC_FUNC_IMPL(__imp__sub_83C5728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57290"))) PPC_WEAK_FUNC(sub_83C57290);
PPC_FUNC_IMPL(__imp__sub_83C57290) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25476
	ctx.r11.s64 = ctx.r8.s64 + -25476;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17280);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,696
	ctx.r3.s64 = ctx.r6.s64 + 696;
	// stw r10,-25476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C572C0"))) PPC_WEAK_FUNC(sub_83C572C0);
PPC_FUNC_IMPL(__imp__sub_83C572C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C572CC"))) PPC_WEAK_FUNC(sub_83C572CC);
PPC_FUNC_IMPL(__imp__sub_83C572CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C572D0"))) PPC_WEAK_FUNC(sub_83C572D0);
PPC_FUNC_IMPL(__imp__sub_83C572D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C572DC"))) PPC_WEAK_FUNC(sub_83C572DC);
PPC_FUNC_IMPL(__imp__sub_83C572DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C572E0"))) PPC_WEAK_FUNC(sub_83C572E0);
PPC_FUNC_IMPL(__imp__sub_83C572E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,728
	ctx.r3.s64 = ctx.r11.s64 + 728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C572EC"))) PPC_WEAK_FUNC(sub_83C572EC);
PPC_FUNC_IMPL(__imp__sub_83C572EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C572F0"))) PPC_WEAK_FUNC(sub_83C572F0);
PPC_FUNC_IMPL(__imp__sub_83C572F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C572FC"))) PPC_WEAK_FUNC(sub_83C572FC);
PPC_FUNC_IMPL(__imp__sub_83C572FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57300"))) PPC_WEAK_FUNC(sub_83C57300);
PPC_FUNC_IMPL(__imp__sub_83C57300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5730C"))) PPC_WEAK_FUNC(sub_83C5730C);
PPC_FUNC_IMPL(__imp__sub_83C5730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57310"))) PPC_WEAK_FUNC(sub_83C57310);
PPC_FUNC_IMPL(__imp__sub_83C57310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5731C"))) PPC_WEAK_FUNC(sub_83C5731C);
PPC_FUNC_IMPL(__imp__sub_83C5731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57320"))) PPC_WEAK_FUNC(sub_83C57320);
PPC_FUNC_IMPL(__imp__sub_83C57320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5732C"))) PPC_WEAK_FUNC(sub_83C5732C);
PPC_FUNC_IMPL(__imp__sub_83C5732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57330"))) PPC_WEAK_FUNC(sub_83C57330);
PPC_FUNC_IMPL(__imp__sub_83C57330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5733C"))) PPC_WEAK_FUNC(sub_83C5733C);
PPC_FUNC_IMPL(__imp__sub_83C5733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57340"))) PPC_WEAK_FUNC(sub_83C57340);
PPC_FUNC_IMPL(__imp__sub_83C57340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5734C"))) PPC_WEAK_FUNC(sub_83C5734C);
PPC_FUNC_IMPL(__imp__sub_83C5734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57350"))) PPC_WEAK_FUNC(sub_83C57350);
PPC_FUNC_IMPL(__imp__sub_83C57350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5735C"))) PPC_WEAK_FUNC(sub_83C5735C);
PPC_FUNC_IMPL(__imp__sub_83C5735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57360"))) PPC_WEAK_FUNC(sub_83C57360);
PPC_FUNC_IMPL(__imp__sub_83C57360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5736C"))) PPC_WEAK_FUNC(sub_83C5736C);
PPC_FUNC_IMPL(__imp__sub_83C5736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57370"))) PPC_WEAK_FUNC(sub_83C57370);
PPC_FUNC_IMPL(__imp__sub_83C57370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5737C"))) PPC_WEAK_FUNC(sub_83C5737C);
PPC_FUNC_IMPL(__imp__sub_83C5737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57380"))) PPC_WEAK_FUNC(sub_83C57380);
PPC_FUNC_IMPL(__imp__sub_83C57380) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25096
	ctx.r7.s64 = ctx.r8.s64 + -25096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C573A8"))) PPC_WEAK_FUNC(sub_83C573A8);
PPC_FUNC_IMPL(__imp__sub_83C573A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17432
	ctx.r6.s64 = ctx.r7.s64 + 17432;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17360(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17360);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25096);
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
	// std r9,17432(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17432, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C573F0"))) PPC_WEAK_FUNC(sub_83C573F0);
PPC_FUNC_IMPL(__imp__sub_83C573F0) {
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
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// bl 0x83523120
	ctx.lr = 0x83C57408;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,808
	ctx.r3.s64 = ctx.r10.s64 + 808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57414;
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

__attribute__((alias("__imp__sub_83C57424"))) PPC_WEAK_FUNC(sub_83C57424);
PPC_FUNC_IMPL(__imp__sub_83C57424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57428"))) PPC_WEAK_FUNC(sub_83C57428);
PPC_FUNC_IMPL(__imp__sub_83C57428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57434"))) PPC_WEAK_FUNC(sub_83C57434);
PPC_FUNC_IMPL(__imp__sub_83C57434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57438"))) PPC_WEAK_FUNC(sub_83C57438);
PPC_FUNC_IMPL(__imp__sub_83C57438) {
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
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// bl 0x8259af80
	ctx.lr = 0x83C57450;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,840
	ctx.r3.s64 = ctx.r10.s64 + 840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5745C;
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

__attribute__((alias("__imp__sub_83C5746C"))) PPC_WEAK_FUNC(sub_83C5746C);
PPC_FUNC_IMPL(__imp__sub_83C5746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57470"))) PPC_WEAK_FUNC(sub_83C57470);
PPC_FUNC_IMPL(__imp__sub_83C57470) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25108
	ctx.r11.s64 = ctx.r8.s64 + -25108;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17408);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,832
	ctx.r3.s64 = ctx.r6.s64 + 832;
	// stw r10,-25108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574A0"))) PPC_WEAK_FUNC(sub_83C574A0);
PPC_FUNC_IMPL(__imp__sub_83C574A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574AC"))) PPC_WEAK_FUNC(sub_83C574AC);
PPC_FUNC_IMPL(__imp__sub_83C574AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C574B0"))) PPC_WEAK_FUNC(sub_83C574B0);
PPC_FUNC_IMPL(__imp__sub_83C574B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,856
	ctx.r3.s64 = ctx.r11.s64 + 856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574BC"))) PPC_WEAK_FUNC(sub_83C574BC);
PPC_FUNC_IMPL(__imp__sub_83C574BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C574C0"))) PPC_WEAK_FUNC(sub_83C574C0);
PPC_FUNC_IMPL(__imp__sub_83C574C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574CC"))) PPC_WEAK_FUNC(sub_83C574CC);
PPC_FUNC_IMPL(__imp__sub_83C574CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C574D0"))) PPC_WEAK_FUNC(sub_83C574D0);
PPC_FUNC_IMPL(__imp__sub_83C574D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574DC"))) PPC_WEAK_FUNC(sub_83C574DC);
PPC_FUNC_IMPL(__imp__sub_83C574DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C574E0"))) PPC_WEAK_FUNC(sub_83C574E0);
PPC_FUNC_IMPL(__imp__sub_83C574E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574EC"))) PPC_WEAK_FUNC(sub_83C574EC);
PPC_FUNC_IMPL(__imp__sub_83C574EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C574F0"))) PPC_WEAK_FUNC(sub_83C574F0);
PPC_FUNC_IMPL(__imp__sub_83C574F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C574FC"))) PPC_WEAK_FUNC(sub_83C574FC);
PPC_FUNC_IMPL(__imp__sub_83C574FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57500"))) PPC_WEAK_FUNC(sub_83C57500);
PPC_FUNC_IMPL(__imp__sub_83C57500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5750C"))) PPC_WEAK_FUNC(sub_83C5750C);
PPC_FUNC_IMPL(__imp__sub_83C5750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57510"))) PPC_WEAK_FUNC(sub_83C57510);
PPC_FUNC_IMPL(__imp__sub_83C57510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5751C"))) PPC_WEAK_FUNC(sub_83C5751C);
PPC_FUNC_IMPL(__imp__sub_83C5751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57520"))) PPC_WEAK_FUNC(sub_83C57520);
PPC_FUNC_IMPL(__imp__sub_83C57520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5752C"))) PPC_WEAK_FUNC(sub_83C5752C);
PPC_FUNC_IMPL(__imp__sub_83C5752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57530"))) PPC_WEAK_FUNC(sub_83C57530);
PPC_FUNC_IMPL(__imp__sub_83C57530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5753C"))) PPC_WEAK_FUNC(sub_83C5753C);
PPC_FUNC_IMPL(__imp__sub_83C5753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57540"))) PPC_WEAK_FUNC(sub_83C57540);
PPC_FUNC_IMPL(__imp__sub_83C57540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,928
	ctx.r3.s64 = ctx.r11.s64 + 928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5754C"))) PPC_WEAK_FUNC(sub_83C5754C);
PPC_FUNC_IMPL(__imp__sub_83C5754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57550"))) PPC_WEAK_FUNC(sub_83C57550);
PPC_FUNC_IMPL(__imp__sub_83C57550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,936
	ctx.r3.s64 = ctx.r11.s64 + 936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5755C"))) PPC_WEAK_FUNC(sub_83C5755C);
PPC_FUNC_IMPL(__imp__sub_83C5755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57560"))) PPC_WEAK_FUNC(sub_83C57560);
PPC_FUNC_IMPL(__imp__sub_83C57560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24728
	ctx.r7.s64 = ctx.r8.s64 + -24728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57588"))) PPC_WEAK_FUNC(sub_83C57588);
PPC_FUNC_IMPL(__imp__sub_83C57588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17560
	ctx.r6.s64 = ctx.r7.s64 + 17560;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24728);
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
	// std r9,17560(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C575D0"))) PPC_WEAK_FUNC(sub_83C575D0);
PPC_FUNC_IMPL(__imp__sub_83C575D0) {
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
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// bl 0x83523120
	ctx.lr = 0x83C575E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C575F4;
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

__attribute__((alias("__imp__sub_83C57604"))) PPC_WEAK_FUNC(sub_83C57604);
PPC_FUNC_IMPL(__imp__sub_83C57604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57608"))) PPC_WEAK_FUNC(sub_83C57608);
PPC_FUNC_IMPL(__imp__sub_83C57608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57614"))) PPC_WEAK_FUNC(sub_83C57614);
PPC_FUNC_IMPL(__imp__sub_83C57614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57618"))) PPC_WEAK_FUNC(sub_83C57618);
PPC_FUNC_IMPL(__imp__sub_83C57618) {
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
	// addi r3,r11,-24720
	ctx.r3.s64 = ctx.r11.s64 + -24720;
	// bl 0x8259af80
	ctx.lr = 0x83C57630;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,976
	ctx.r3.s64 = ctx.r10.s64 + 976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5763C;
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

__attribute__((alias("__imp__sub_83C5764C"))) PPC_WEAK_FUNC(sub_83C5764C);
PPC_FUNC_IMPL(__imp__sub_83C5764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57650"))) PPC_WEAK_FUNC(sub_83C57650);
PPC_FUNC_IMPL(__imp__sub_83C57650) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24740
	ctx.r11.s64 = ctx.r8.s64 + -24740;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17536);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,968
	ctx.r3.s64 = ctx.r6.s64 + 968;
	// stw r10,-24740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57680"))) PPC_WEAK_FUNC(sub_83C57680);
PPC_FUNC_IMPL(__imp__sub_83C57680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5768C"))) PPC_WEAK_FUNC(sub_83C5768C);
PPC_FUNC_IMPL(__imp__sub_83C5768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57690"))) PPC_WEAK_FUNC(sub_83C57690);
PPC_FUNC_IMPL(__imp__sub_83C57690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5769C"))) PPC_WEAK_FUNC(sub_83C5769C);
PPC_FUNC_IMPL(__imp__sub_83C5769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576A0"))) PPC_WEAK_FUNC(sub_83C576A0);
PPC_FUNC_IMPL(__imp__sub_83C576A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 + 1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576AC"))) PPC_WEAK_FUNC(sub_83C576AC);
PPC_FUNC_IMPL(__imp__sub_83C576AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576B0"))) PPC_WEAK_FUNC(sub_83C576B0);
PPC_FUNC_IMPL(__imp__sub_83C576B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576BC"))) PPC_WEAK_FUNC(sub_83C576BC);
PPC_FUNC_IMPL(__imp__sub_83C576BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576C0"))) PPC_WEAK_FUNC(sub_83C576C0);
PPC_FUNC_IMPL(__imp__sub_83C576C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1016
	ctx.r3.s64 = ctx.r11.s64 + 1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576CC"))) PPC_WEAK_FUNC(sub_83C576CC);
PPC_FUNC_IMPL(__imp__sub_83C576CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576D0"))) PPC_WEAK_FUNC(sub_83C576D0);
PPC_FUNC_IMPL(__imp__sub_83C576D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576DC"))) PPC_WEAK_FUNC(sub_83C576DC);
PPC_FUNC_IMPL(__imp__sub_83C576DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576E0"))) PPC_WEAK_FUNC(sub_83C576E0);
PPC_FUNC_IMPL(__imp__sub_83C576E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576EC"))) PPC_WEAK_FUNC(sub_83C576EC);
PPC_FUNC_IMPL(__imp__sub_83C576EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C576F0"))) PPC_WEAK_FUNC(sub_83C576F0);
PPC_FUNC_IMPL(__imp__sub_83C576F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1040
	ctx.r3.s64 = ctx.r11.s64 + 1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C576FC"))) PPC_WEAK_FUNC(sub_83C576FC);
PPC_FUNC_IMPL(__imp__sub_83C576FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57700"))) PPC_WEAK_FUNC(sub_83C57700);
PPC_FUNC_IMPL(__imp__sub_83C57700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1048
	ctx.r3.s64 = ctx.r11.s64 + 1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

